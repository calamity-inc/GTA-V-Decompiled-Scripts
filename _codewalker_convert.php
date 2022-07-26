<?php
foreach(scandir(".") as $file)
{
	if(substr($file, -4) != ".ysc")
	{
		continue;
	}
	$script = substr($file, 0, -4);
	if(!is_dir("{$script}_ysc"))
	{
		mkdir("{$script}_ysc");
	}
	copy($file, "{$script}_ysc/{$script}.ysc.full");
}
