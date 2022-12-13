<?php
$proc_limit = 20;
$out_dir = "decompiled_scripts";
$native_tables_dir = "native_tables";



if(!is_dir($out_dir))
{
	mkdir($out_dir);
}
if(!is_dir($native_tables_dir))
{
	mkdir($native_tables_dir);
}

$cls = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
$descriptorspec = array(
	0 => array("pipe", "r"),
	1 => array("pipe", "w"),
	2 => array("pipe", "w"),
);
$decompiled_scripts = [];
$failed_scripts = [];
$procs = [];
$last_out = "";

$full_decompile = false;
$scripts_to_decompile = [];
$total_scripts = 0;
foreach($argv as $i => $arg)
{
	if($i != 0)
	{
		$scripts_to_decompile[$arg] = true;
		$total_scripts++;
	}
}
if($total_scripts == 0)
{
	$full_decompile = true;
	$fh = fopen("all_script_names.txt", "w");
	foreach(scandir("scripts") as $script)
	{
		if(substr($script, -4) == "_ysc")
		{
			$scripts_to_decompile[substr($script, 0, -4)] = true;
			$total_scripts++;
			fwrite($fh, substr($script, 0, -4)."\n");
		}
	}
	fflush($fh);
	fclose($fh);
}

function manageprocs()
{
	global $out_dir, $native_tables_dir, $cls, $total_scripts, $scripts_to_decompile, $decompiled_scripts, $failed_scripts, $procs, $last_out;
	$script_names = [];
	foreach($procs as $script => $proc)
	{
		if (proc_get_status($proc)["running"])
		{
			array_push($script_names, $script);
		}
		else
		{
			proc_close($proc);
			unset($scripts_to_decompile[$script]);
			unset($procs[$script]);
			$decompiled_scripts[$script] = true;
			$src = "scripts/{$script}_ysc/{$script}.ysc.full.c";
			if (!file_exists($src))
			{
				array_push($failed_scripts, $script);
			}
			// move decompiled script
			$dest = $out_dir."/{$script}.c";
			if(is_file($dest))
			{
				unlink($dest);
			}
			rename($src, $dest);
			// move native table
			$dest = $native_tables_dir."/{$script}.txt";
			if(is_file($dest))
			{
				unlink($dest);
			}
			rename("scripts/{$script}_ysc/{$script}.ysc.full native table.txt", $dest);
		}
	}
	$out = "Decompiling: ".join(", ", $script_names)."\nRemaining: ".count($scripts_to_decompile)."/".$total_scripts;
	if ($out != $last_out)
	{
		$last_out = $out;
		echo $cls.$out;
	}
}

foreach($scripts_to_decompile as $script => $_)
{
	$proc = proc_open("decompiler.exe ".escapeshellarg("scripts\\{$script}_ysc\\$script.ysc.full"), $descriptorspec, $pipes);
	if (!is_resource($proc))
	{
		die("Failed to open process for $script.\n");
	}
	$procs[$script] = $proc;
	manageprocs();
	if(count($procs) > $proc_limit)
	{
		do
		{
			usleep(50000);
			manageprocs();
		}
		while(count($procs) > $proc_limit);
	}
}

while(count($procs) > 0)
{
	manageprocs();
	usleep(50000);
}
echo $cls;

if (count($failed_scripts) != 0)
{
	echo "Failed scripts: ".join(", ", $failed_scripts)."\n";
}

if($full_decompile)
{
	echo "Discovering old scripts...\n";
	$had_old_scripts = false;
	foreach(scandir($out_dir) as $file)
	{
		if(substr($file, -2) != ".c")
		{
			continue;
		}
		$file = substr($file, 0, -2);
		if(!array_key_exists($file, $decompiled_scripts))
		{
			echo $file."\n";
			$had_old_scripts = true;
		}
	}
	if(!$had_old_scripts)
	{
		echo "No old scripts found.\n";
	}
}
echo "All done. :D\n";
