#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_67 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	float fLocal_91 = 0f;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	char* sLocal_99 = NULL;
	float fLocal_100 = 0f;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int* iLocal_105 = NULL;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	struct<3> Local_109 = { 0, 0, 0 } ;
	struct<3> Local_112 = { 0, 0, 0 } ;
	float fLocal_115 = 0f;
	var uLocal_116 = 1;
	var uLocal_117 = 0;
	var uLocal_118 = 1;
	var uLocal_119 = 0;
	int iLocal_120 = 0;
	struct<3> Local_121 = { 0, 0, 0 } ;
	var uLocal_124 = 0;
	var uLocal_125 = 16;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	int* iLocal_291 = NULL;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	bool bLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	Local_43 = { 500f, 500f, 500f };
	iLocal_94 = -1;
	iLocal_95 = 2050;
	iLocal_96 = -1;
	iLocal_97 = -1;
	sLocal_99 = "CC_SUBSTR";
	fLocal_100 = 125f;
	iLocal_101 = 1;
	iLocal_103 = 263;
	fLocal_115 = 4f;
	Local_88 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_88 = { Local_88 };
	uLocal_84 = uLocal_84;
	Local_67 = { Local_67 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(114))
	{
		func_144(1);
	}
	iLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_93 = 0;
	func_142(&Global_113020, 0);
	func_136();
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	if (func_135(uLocal_92, 1))
	{
		iLocal_98 = 10;
	}
	else
	{
		iLocal_98 = 9;
	}
	while (!Global_39261)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_135(uLocal_92, 8))
	{
		if (!func_133(iLocal_98))
		{
			if (func_132(0, iLocal_97))
			{
				func_144(0);
			}
			else
			{
				func_144(1);
			}
		}
	}
	if (iLocal_97 != -1)
	{
		if (!func_132(0, iLocal_97))
		{
			func_144(1);
		}
	}
	if (func_135(uLocal_92, 8388608))
	{
		func_144(1);
	}
	if (func_135(uLocal_92, 524288) && (func_131() && !func_130()))
	{
		func_144(1);
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_135(uLocal_92, 4194304))
	{
		if (iLocal_103 != 263)
		{
			func_129(iLocal_103, 1, 0);
			iLocal_103 = 263;
		}
		func_128(10);
	}
	while (true)
	{
		if (Global_4)
		{
			func_144(1);
		}
		iLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_135(uLocal_92, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
			{
				func_144(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83) && !ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
		{
			Local_85 = { ENTITY::GET_ENTITY_COORDS(iLocal_83, true) };
			fLocal_91 = SYSTEM::VDIST2(Local_85, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_91 = fLocal_91;
			Local_109 = { Local_85 };
			Local_112 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_109.f_2 = 0f;
			Local_112.f_2 = 0f;
			fLocal_108 = SYSTEM::VDIST2(Local_109, Local_112);
			switch (iLocal_93)
			{
				case 0:
					if (func_133(iLocal_98) || (func_135(uLocal_92, 16) && !func_135(uLocal_92, 524288)))
					{
						iLocal_96 = -1;
						func_124();
						func_128(1);
					}
					else
					{
						if (fLocal_108 > (fLocal_100 * fLocal_100))
						{
							if (iLocal_103 != 263)
							{
								func_129(iLocal_103, 1, 0);
								iLocal_103 = 263;
							}
							func_128(10);
						}
						if ((Local_85.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_122())
					{
						iLocal_101 = iLocal_101;
						func_128(3);
					}
					else
					{
						func_124();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_144(1);
						return;
					}
					if (!func_133(iLocal_98))
					{
						if (!func_135(uLocal_92, 8))
						{
							bVar1 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_101392.f_3), &Local_67))
							{
								Local_67 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_144(0);
								break;
							}
						}
					}
					if (!func_135(uLocal_92, 4))
					{
						func_119();
						func_118(&uLocal_92, 4);
					}
					if (fLocal_108 > (fLocal_100 * fLocal_100) && !Global_101426)
					{
						if (iLocal_103 != 263)
						{
							if (func_117(6) && !func_116(iLocal_103))
							{
							}
							else
							{
								func_129(iLocal_103, 1, 0);
								iLocal_103 = 263;
							}
						}
						func_128(10);
					}
					else
					{
						Local_67 = { Local_51 };
						bVar2 = !func_135(uLocal_92, 64);
						func_142(&uLocal_92, 128);
						if (!func_115(3) && !Global_101426)
						{
							if (func_135(uLocal_92, 2097152))
							{
								if ((!func_135(uLocal_92, 1) || !ENTITY::DOES_ENTITY_EXIST(func_114())) && !Global_101426)
								{
									func_128(10);
									break;
								}
							}
						}
						if (func_135(uLocal_92, 524288) && (func_131() && !func_130()))
						{
							func_144(1);
						}
						if (func_113())
						{
							func_144(1);
						}
						if ((!func_105(6) || Global_113419) || func_104())
						{
							bVar2 = false;
						}
						if (func_135(uLocal_92, 1))
						{
							if (!func_103())
							{
								func_101(&uLocal_92, 128);
								bVar2 = false;
							}
						}
						if (func_100(1))
						{
							bVar2 = false;
						}
						if (Global_79248)
						{
							bVar2 = false;
						}
						if (func_99())
						{
							bVar2 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar2 = false;
						}
						if (func_98() || func_97(8, -1))
						{
							bVar2 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar2 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar2 = false;
						}
						if (func_96(0) || func_95())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_83, ScriptParam_0.f_1[0 /*3*/], fLocal_115, fLocal_115, 2f, false, true, iLocal_101))
							{
								bVar2 = false;
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_94(uLocal_84))
								{
									if (iLocal_94 == -1)
									{
										func_93(&iLocal_94, 4, sLocal_99, 0, 0, 0, 0);
										func_101(&uLocal_92, 2048);
									}
									else if (!func_135(uLocal_92, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_92(&iLocal_94);
										func_142(&uLocal_92, 2048);
									}
									if (func_90(iLocal_94, 1))
									{
										sLocal_99 = sLocal_99;
										func_92(&iLocal_94);
										func_142(&uLocal_92, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_67);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
										func_128(5);
									}
								}
								else
								{
									sLocal_99 = sLocal_99;
									func_92(&iLocal_94);
									func_142(&uLocal_92, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_67);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
									func_128(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_94 != -1)
							{
								func_92(&iLocal_94);
								func_142(&uLocal_92, 2048);
								HUD::CLEAR_HELP(false);
							}
						}
					}
					func_87();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_67))
					{
						if (iLocal_94 != -1)
						{
							func_92(&iLocal_94);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_135(uLocal_92, 1))
						{
							if (func_117(6) || func_117(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_84(&iLocal_96, 6, iLocal_98, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							func_83();
							if (Global_45122)
							{
								func_74(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 56);
							iLocal_50 = func_26();
							func_101(&uLocal_92, 2);
							func_128(6);
							func_22(&iLocal_105);
							if (iLocal_97 != -1)
							{
								func_21(iLocal_97);
								func_18(func_20(iLocal_97), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_17();
						}
						else if (iVar3 == 0)
						{
							func_128(10);
						}
					}
					else
					{
						func_17();
					}
					break;
				
				case 6:
					if (func_135(Global_113020, 262144))
					{
						func_142(&Global_113020, 262144);
						func_16();
					}
					if (func_135(uLocal_92, 2097152))
					{
						if (!func_115(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
						{
							func_128(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_12(&iLocal_105) * 1000f)), iLocal_97, false);
						func_11(&iLocal_105);
						func_142(&uLocal_92, 256);
						func_8();
						if (bVar0)
						{
							func_142(&uLocal_92, 2);
						}
						else if (func_135(uLocal_92, 2))
						{
							if (func_135(Global_113020, 0))
							{
								func_7(&iLocal_96);
								iLocal_96 = -1;
								func_142(&uLocal_92, 2);
							}
							else
							{
								func_7(&iLocal_96);
								iLocal_96 = -1;
								func_142(&uLocal_92, 2);
							}
						}
						func_128(0);
						if (iLocal_97 != -1)
						{
							if (func_135(Global_113020, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_20(iLocal_97), 0, Global_101429, 0);
								func_6(func_20(iLocal_97), 0, Global_101429, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_20(iLocal_97), 0, Global_101429, 0);
								func_6(func_20(iLocal_97), 0, Global_101429, 0, 0);
							}
						}
						func_5();
						func_142(&Global_113020, 0);
						if (func_135(uLocal_92, 16777216))
						{
							func_144(1);
						}
						if (iLocal_97 != -1)
						{
							if (Global_114372.f_9088)
							{
								if (!func_132(0, iLocal_97))
								{
									func_144(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_128(0);
					break;
				
				case 10:
					func_144(1);
					break;
				
				case 9:
					if (fLocal_108 > (fLocal_100 * fLocal_100))
					{
						if (iLocal_103 != 263)
						{
							func_129(iLocal_103, 1, 0);
							iLocal_103 = 263;
						}
						func_128(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_103 != 263)
					{
						func_129(iLocal_103, 0, 0);
					}
					if (iLocal_94 != -1)
					{
						func_92(&iLocal_94);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_99))
					{
						if (func_1(sLocal_99))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					func_128(4);
					break;
				
				case 4:
					if ((iLocal_102 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_104 == 2)
							{
								if (iLocal_104 == 2)
								{
									if (func_133(iLocal_98) && func_132(0, iLocal_97))
									{
										func_136();
										if (iLocal_103 != 263)
										{
											func_129(iLocal_103, 1, 0);
										}
										func_128(0);
									}
								}
							}
							else if (iLocal_104 == 0)
							{
								if (fLocal_108 > (fLocal_100 * fLocal_100))
								{
									if (iLocal_103 != 263)
									{
										func_129(iLocal_103, 1, 0);
										iLocal_103 = 263;
									}
									func_128(10);
								}
							}
							else if (iLocal_104 == 1)
							{
								if (fLocal_108 > ((80f + 5f) * (80f + 5f)))
								{
									func_136();
									if (iLocal_103 != 263)
									{
										func_129(iLocal_103, 1, 0);
									}
									func_128(0);
								}
							}
						}
						else
						{
							func_129(iLocal_103, 1, 0);
						}
					}
					else
					{
						iLocal_102++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()
{
	func_3(&uLocal_116);
	func_3(&uLocal_118);
	STREAMING::REMOVE_ANIM_DICT("pickup_object");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
}

void func_6(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_98442))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_98442, false, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, bParam3, bParam4, Global_95549);
	StringCopy(&Global_98442, "", 64);
}

void func_7(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_43884)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_43883 = 0;
	Global_43885 = 0;
	Global_43922 = 15;
	Global_64035 = 0;
	Global_64036 = 0;
}

void func_8()
{
	char cVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_10())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || func_9())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

bool func_9()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_10()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_11(int* iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_12(int* iParam0)
{
	if (func_15(iParam0))
	{
		if (func_14(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_13(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_13(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_14(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_15(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_16()
{
	return 1;
}

void func_17()
{
}

void func_18(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_98442))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_98442, 0, 0, false, true, false);
		StringCopy(&Global_98442, "", 64);
	}
	StringCopy(&Global_98442, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_19(0));
}

int func_19(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_21(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_10())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || func_9())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_22(int* iParam0)
{
	if (!func_15(iParam0))
	{
		func_25(iParam0);
	}
	else
	{
		func_23(iParam0);
	}
}

void func_23(int* iParam0)
{
	func_24(iParam0, 0f);
}

void func_24(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_13(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_25(int* iParam0)
{
	if (!func_15(iParam0))
	{
		func_23(iParam0);
	}
}

int func_26()
{
	int iVar0;
	
	Global_114372.f_18970 = iLocal_120;
	switch (iLocal_120)
	{
		case 4:
		case 8:
			func_27(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_27(0);
			break;
		
		default:
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
	}
	iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_51, &Local_121, 170, iLocal_95);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_51);
	return iVar0;
}

void func_27(bool bParam0)
{
	int* iVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	bool bVar16;
	
	Var12 = { func_73(iLocal_120) };
	Var12 = { func_72(SYSTEM::COS(Var12.f_2), SYSTEM::SIN(Var12.f_2), MISC::TAN(Var12.f_0)) };
	STREAMING::NEW_LOAD_SCENE_START(func_71(iLocal_120), Var12, 5000f, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
	HUD::DISPLAY_HUD(false);
	HUD::DISPLAY_RADAR(false);
	func_69(1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.3f)
		{
			TASK::TASK_STAND_STILL(PLAYER::PLAYER_PED_ID(), -1);
			while (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.3f)
			{
				SYSTEM::WAIT(0);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_295))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iLocal_295, false) };
			Var6.f_2 = 0f;
			fVar15 = SYSTEM::VMAG(Var6);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			if (fVar15 > 0.8f)
			{
				Var6 = { Var6 * FtoV((0.78f / fVar15)) };
				Var9 = { ENTITY::GET_ENTITY_COORDS(iLocal_295, false) + Var6 };
				if (iLocal_120 == 12)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var9, 1f, 20000, 0.25f, 0, func_68(Var9, ENTITY::GET_ENTITY_COORDS(iLocal_295, false)));
				}
				else
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var9, 1f, -1, func_68(Var9, ENTITY::GET_ENTITY_COORDS(iLocal_295, false)), 0.5f);
				}
			}
			else if (fVar15 > 0.15f)
			{
				TASK::TASK_ACHIEVE_HEADING(0, func_68(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_295, false)), 0);
			}
			TASK::TASK_PLAY_ANIM(0, "pickup_object", "pickup_low", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar3);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			func_69(1);
		}
	}
	func_25(&iLocal_291);
	while ((func_12(&iLocal_291) < 6f && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 3))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 3))
	{
		ENTITY::SET_ENTITY_ANIM_SPEED(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 0.8f);
		bVar16 = true;
	}
	while ((func_12(&iLocal_291) < 6f && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low") < 0.22f)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		if (!bVar16 && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 0.8f);
			bVar16 = true;
		}
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!bVar16 && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 0.7f);
			bVar16 = true;
		}
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
	}
	func_11(&iLocal_291);
	func_43();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_37() == 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 5, 0, 0);
		}
		else if (func_37() == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 1, 0, 0);
		}
		else if (func_37() == 2)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_35(func_36(iLocal_120)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), func_36(iLocal_120), 1f, -1, 0.25f, 0, 40000f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_295))
		{
			OBJECT::DELETE_OBJECT(&iLocal_295);
		}
		iVar4 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, func_34(iLocal_120), func_33(iLocal_120), func_32(iLocal_120), true, 2);
		iVar5 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, func_31(iLocal_120), func_30(iLocal_120), func_29(iLocal_120), false, 2);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::SHAKE_SCRIPT_GLOBAL("HAND_SHAKE", 0.2f);
		func_25(&iVar0);
		while (func_12(&iVar0) < 1.5f)
		{
			SYSTEM::WAIT(0);
		}
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iVar5, iVar4, func_28(iLocal_120), 1, 1);
		func_23(&iVar0);
		while (func_12(&iVar0) < ((SYSTEM::TO_FLOAT(func_28(iLocal_120)) / 1000f) + 0.3f))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
			}
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		Local_121.f_2 = iLocal_295;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
	}
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_29(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_30(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 58.4197f, 0f, -47.9402f;
		
		case 8:
			return 47.6798f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_31(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_32(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_33(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -4.0151f, 0f, -47.5544f;
		
		case 8:
			return 2.5127f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_34(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_36(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -83.4741f, -835.4191f, 39.5575f;
		
		case 8:
			return -772.8513f, 312.9656f, 84.6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_37()
{
	func_38();
	return Global_114372.f_2366.f_539.f_4321;
}

void func_38()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_41(Global_114372.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_40(PLAYER::PLAYER_PED_ID());
			if (func_39(iVar0) && (!func_117(14) || Global_113320))
			{
				if (Global_114372.f_2366.f_539.f_4321 != iVar0 && func_39(Global_114372.f_2366.f_539.f_4321))
				{
					Global_114372.f_2366.f_539.f_4322 = Global_114372.f_2366.f_539.f_4321;
				}
				Global_114372.f_2366.f_539.f_4323 = iVar0;
				Global_114372.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114372.f_2366.f_539.f_4321 != 145)
			{
				Global_114372.f_2366.f_539.f_4323 = Global_114372.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114372.f_2366.f_539.f_4321 = 145;
}

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_42(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_42(int iParam0)
{
	return Global_2139[iParam0 /*29*/];
}

void func_43()
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_295))
	{
		OBJECT::DELETE_OBJECT(&iLocal_295);
	}
	func_51(0, 0, 1);
	iLocal_295 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_parachute_s"), func_50(iLocal_120), true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_295, func_49(iLocal_120), 2, true);
	func_44(&Var0, &uVar3);
	Var4 = { 0f, 0f, uVar3 };
	iVar7 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var4, 2);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_295, iVar7, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1000f);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iVar7, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1000f, 0);
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", true);
	iVar8 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iVar8, iVar7, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	CAM::SET_CAM_ACTIVE(iVar8, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	while (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar7) < 0.6f)
	{
		SYSTEM::WAIT(0);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}

void func_44(var uParam0, var uParam1)
{
	*uParam0 = { func_48(iLocal_120) };
	switch (iLocal_120)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		
		case 4:
			*uParam1 = func_47(func_68(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_46(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = func_45(*uParam1, -104.04f);
			}
			break;
		
		case 8:
			*uParam1 = func_47(func_68(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_46(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = func_45(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = func_47(func_68(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_47(func_68(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), *uParam0), -180f, 180f);
			break;
	}
}

float func_45(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_46(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_47(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

Vector3 func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_49(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12.77f;
		
		case 5:
			return 10f, 0f, -134.58f;
		
		case 6:
			return 76f, 0f, -89.95f;
		
		case 8:
			return 12f, 0f, 89.56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_50(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -92.25f, -854.28f, 39.85f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 8:
			return -801.57f, 298.85f, 85.25f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_51(int iParam0, bool bParam1, int iParam2)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(bParam1);
	func_64(0);
	func_53(1, 1, iParam2, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_52(23, 1);
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_33077, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_33077, iParam0);
	}
}

void func_53(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_63(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20813.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_62())
			{
				Global_20813.f_1 = 3;
			}
			Global_22166 = 5;
		}
		func_61(1, bParam3, uParam2, 0);
		Global_64044 = 1;
		Global_76372 = 1;
		Global_79246 = 1;
	}
	else
	{
		func_63(0);
		HUD::THEFEED_RESUME();
		Global_64044 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_61(0, bParam3, uParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_59(PLAYER::PLAYER_ID())) && !func_55(PLAYER::PLAYER_ID(), 0)) && !func_54()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_59(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_79246 = 0;
	}
}

bool func_54()
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_18, 14);
}

bool func_55(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_56(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845263[iParam0 /*877*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_57();
	}
	if (Global_1575059[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574919[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_57()
{
	return Global_1574925;
}

int func_58(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_59(int iParam0)
{
	if (func_55(iParam0, 0))
	{
		return 1;
	}
	if (func_60())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657921[iParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_60()
{
	return BitTest(Global_2621446, 3);
}

int func_61(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && uParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_62()
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_63(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8683, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 13);
	}
}

void func_64(int iParam0)
{
	if (func_67())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_66())
		{
			func_65(1, 1);
		}
		else
		{
			func_65(0, 0);
		}
	}
	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8684, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22166 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8683, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 30);
	}
	if (!func_62())
	{
		Global_20813.f_1 = 3;
	}
}

void func_65(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_96(0))
		{
			Global_21025 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20750);
			}
			Global_20741 = { Global_20759[Global_20758 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
	else if (Global_21025 == 1)
	{
		Global_21025 = 0;
		Global_20741 = { Global_20766[Global_20758 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20750);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
}

bool func_66()
{
	return BitTest(Global_1956030, 5);
}

bool func_67()
{
	return BitTest(Global_1956030, 19);
}

float func_68(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_69(bool bParam0)
{
	if (bParam0)
	{
		func_70();
		if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8684, 16);
		}
		Global_20813.f_1 = 1;
		if (func_96(0))
		{
			func_64(0);
		}
	}
	else if (Global_20813.f_1 == 1)
	{
		if (!Global_20813.f_1 == 0)
		{
			Global_20813.f_1 = 3;
		}
	}
}

void func_70()
{
	if (Global_20813.f_1 == 9 || Global_20813.f_1 == 10)
	{
		Global_22219 = 0;
		Global_22215 = 1;
	}
}

Vector3 func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_72(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

Vector3 func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_82(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44908[iVar0 /*5*/];
		func_77(1, iVar1, 1);
		return;
	}
	iVar2 = func_76(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_75(iVar2);
}

void func_75(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_44882[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_44882[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_45120 = 0;
		}
	}
	Global_44882[iParam0 /*5*/] = 13;
	Global_44882[iParam0 /*5*/].f_1 = 0;
	Global_44882[iParam0 /*5*/].f_2 = 0;
	Global_44882[iParam0 /*5*/].f_3 = 0;
	Global_44882[iParam0 /*5*/].f_4 = 0;
	Global_44880 = (Global_44880 - 1);
	if (Global_44880 < 0)
	{
		Global_44880 = 0;
	}
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_44882[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_77(int iParam0, int iParam1, int iParam2)
{
	func_78(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_80(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_79();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44989[iVar0 /*6*/] = iParam0;
	Global_44989[iVar0 /*6*/].f_1 = iParam1;
	Global_44989[iVar0 /*6*/].f_2 = iParam2;
	Global_44989[iVar0 /*6*/].f_3 = iParam3;
	Global_44989[iVar0 /*6*/].f_4 = iParam4;
	Global_44989[iVar0 /*6*/].f_5 = iParam5;
}

int func_79()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44989[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	if (func_81(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44989[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44989[iVar0 /*6*/])
			{
				if (iParam1 == Global_44989[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_82(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44908[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44908[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_83()
{
	if (Global_9488[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9488[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9488[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_8683, 25);
	MISC::SET_BIT(&Global_8684, 11);
}

int func_84(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98850.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_86(0))
		{
			return 0;
		}
		Global_43886++;
		*iParam0 = Global_43886;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23572.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43922 = iParam2;
		Global_43884 = *iParam0;
		Global_43885 = iParam4;
		Global_43883 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_43883 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43883)
			{
				if (Global_43889[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43884 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_133(iParam2))
		{
			return 0;
		}
		if (Global_43883 == 8)
		{
			return 0;
		}
		Global_43886++;
		*iParam0 = Global_43886;
		Global_43889[Global_43883 /*4*/] = Global_43886;
		Global_43889[Global_43883 /*4*/].f_1 = iParam1;
		Global_43889[Global_43883 /*4*/].f_2 = iParam2;
		Global_43889[Global_43883 /*4*/].f_3 = 0;
		Global_43883++;
		if (iParam4 != 0)
		{
			func_85(iParam0, iParam4);
		}
	}
	return 2;
}

void func_85(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_43883 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43883)
	{
		if (Global_43889[iVar0 /*4*/] == *uParam0)
		{
			Global_43889[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_86(int iParam0)
{
	if (Global_43922 == 15)
	{
		return 0;
	}
	if (func_133(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_87()
{
	switch (iLocal_120)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_88();
			break;
		
		default:
			break;
	}
}

void func_88()
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		Local_121.f_1 = iVar0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_295))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_295, true) };
		if (SYSTEM::VDIST2(Var1, Local_88) > 25f)
		{
			func_89(0);
		}
	}
}

void func_89(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_104 = iParam0;
	iLocal_102 = 0;
	iLocal_93 = 7;
}

int func_90(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_91(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_96(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/] == 1 && Global_44676[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44676[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44676[iVar0 /*32*/].f_5 = 1;
			Global_44676[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44676[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44676[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_91(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_92(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_91(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/])
		{
			Global_44676[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_93(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_92(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44676[iVar0 /*32*/])
		{
			Global_44676[iVar0 /*32*/] = 1;
			Global_44676[iVar0 /*32*/].f_1 = Global_44877;
			Global_44877++;
			Global_44676[iVar0 /*32*/].f_4 = 0;
			Global_44676[iVar0 /*32*/].f_29 = 0;
			Global_44676[iVar0 /*32*/].f_5 = 0;
			Global_44676[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44676[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44676[iVar0 /*32*/].f_6 = iParam3;
			Global_44676[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44676[iVar0 /*32*/].f_7 = 0;
			Global_44676[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44676[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44676[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44676[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44676[iVar0 /*32*/].f_12 = 0;
				Global_44676[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_44676[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_94(var uParam0)
{
	return 1;
}

var func_95()
{
	return Global_76369;
}

int func_96(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20813.f_1 > 3)
		{
			if (BitTest(Global_8683, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

var func_97(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668317.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668317.f_1048, iParam0);
}

bool func_98()
{
	return MISC::GET_GAME_TIMER() <= Global_23711.f_6481 + 100;
}

int func_99()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_100(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23572.f_4 && Global_23572.f_104 == 4);
	}
	return Global_23572.f_4;
}

void func_101(var uParam0, int iParam1)
{
	func_102(uParam0, iParam1);
}

void func_102(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_103()
{
	return 1;
}

bool func_104()
{
	int iVar0;
	bool bVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 47))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_105(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_37();
				if (!func_39(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_112()) || Global_113419) || Global_32831) || func_111()) || func_97(8, -1)) || func_110()) || func_109()) || func_108()) || func_99()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_112()) || Global_32831) || func_111()) || func_97(8, -1)) || func_108()) || func_110()) || func_109()) || func_99()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_112()) || Global_113419) || Global_32831) || func_111()) || func_97(8, -1)) || func_108()) || func_110()) || func_109()) || func_99()) || Global_114372.f_7691.f_919[iVar0] == 5) || Global_44469 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_112()) || Global_113419) || Global_32831) || func_111()) || func_97(8, -1)) || func_110()) || func_109()) || func_99()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_112() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_97(8, -1)) || func_99()) || func_107()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_97(8, -1) || func_110()) || func_109()) || func_107()) || func_106())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_112()) || Global_32831) || func_111()) || func_97(8, -1)) || func_109()) || func_108()) || func_99()) || Global_114372.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_112()) || func_109()) || Global_113419) || Global_32831) || func_111()) || Global_45122) || func_97(8, -1)) || func_108()) || func_107()) || func_99()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_112()) || Global_113419) || Global_32831) || func_111()) || func_97(8, -1)) || func_108()) || func_107()) || func_110()) || func_109()) || func_99())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_106()
{
	return Global_101431.f_1;
}

int func_107()
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 13);
	}
	return 0;
}

int func_108()
{
	if (Global_79509)
	{
		return 1;
	}
	else if (Global_64032 && !Global_64038)
	{
		return 1;
	}
	return 0;
}

bool func_109()
{
	return Global_101444.f_394 > 0;
}

bool func_110()
{
	return Global_101444.f_393 > 0;
}

var func_111()
{
	return Global_1575079;
}

int func_112()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98850.f_44 == 1;
	}
	return 0;
}

int func_113()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_114()
{
	return Global_97204;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_117(6) || func_117(7))
			{
				return 1;
			}
			else
			{
				return func_115(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_133(5))
			{
				if (func_105(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_33208[iVar0 /*23*/].f_19);
}

bool func_117(int iParam0)
{
	return Global_43922 == iParam0;
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_119()
{
	struct<3> Var0;
	
	if (bLocal_294)
	{
		switch (iLocal_120)
		{
			case 4:
			case 5:
			case 8:
				iLocal_295 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_parachute_s"), func_50(iLocal_120), true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_295, func_49(iLocal_120), 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_295, true);
				break;
			
			case 6:
			case 12:
				iLocal_295 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_parachute_s"), func_50(iLocal_120), true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_295, func_49(iLocal_120), 2, true);
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_295);
				Var0 = { func_121(iLocal_120) };
				if (!func_35(Var0))
				{
					iLocal_296 = VEHICLE::CREATE_VEHICLE(joaat("bati"), Var0, func_120(iLocal_120), true, true, false);
					iLocal_296 = iLocal_296;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_120(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_121(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_122()
{
	switch (iLocal_120)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((STREAMING::HAS_ANIM_DICT_LOADED("pickup_object") && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@basejump@ig_15")) && func_123(&uLocal_116)) && func_123(&uLocal_118));
			break;
		
		case 12:
			return ((STREAMING::HAS_ANIM_DICT_LOADED("pickup_object") && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@basejump@ig_15")) && func_123(&uLocal_116));
			break;
		
		default:
			break;
	}
	return (func_123(&uLocal_116) && func_123(&uLocal_118));
}

int func_123(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_124()
{
	switch (iLocal_120)
	{
		case 5:
		case 8:
			func_126(&uLocal_116, joaat("p_parachute_s"));
			STREAMING::REQUEST_ANIM_DICT("pickup_object");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_126(&uLocal_116, joaat("p_parachute_s"));
			func_126(&uLocal_118, joaat("bati"));
			STREAMING::REQUEST_ANIM_DICT("pickup_object");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_126(&uLocal_116, joaat("p_parachute_s"));
			STREAMING::REQUEST_ANIM_DICT("pickup_object");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_125(&uLocal_116);
	func_125(&uLocal_118);
}

void func_125(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_126(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_127(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_127(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_128(int iParam0)
{
	iLocal_93 = iParam0;
}

void func_129(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_33208[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_33208[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 18);
		if (Global_33205 == 1)
		{
			Global_33206 = 1;
		}
		Global_33205 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33208[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_33208[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_33208[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_33208[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_33208[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}
}

int func_130()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::GET_CITY_DENSITY() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_131()
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 20);
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	iVar0 = BitTest(Global_114372.f_9088.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

bool func_133(int iParam0)
{
	return func_134(iParam0, Global_43922);
}

int func_134(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_135(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_136()
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_101(&uLocal_92, 8388608);
		return;
	}
	StringCopy(&Local_51, "bj", 64);
	iLocal_120 = func_140(Local_88, 0);
	switch (iLocal_120)
	{
		case 4:
			iLocal_103 = 129;
			break;
		
		case 5:
			iLocal_103 = 130;
			break;
		
		case 6:
			iLocal_103 = 131;
			break;
		
		case 8:
			iLocal_103 = 133;
			break;
		
		case 12:
			iLocal_103 = 137;
			break;
		
		default:
			break;
	}
	if (iLocal_103 == 129)
	{
		if (func_139(19))
		{
			func_138(iLocal_103);
		}
	}
	func_101(&uLocal_92, 4194304);
	iLocal_97 = 0;
	fLocal_100 = (SYSTEM::TO_FLOAT(func_137(iLocal_103)) + 5f);
	fLocal_115 = 1.1f;
	sLocal_99 = "PLAY_BASEJUMP_G";
	if (iLocal_103 != 263)
	{
		if (!func_132(0, iLocal_97))
		{
			bLocal_294 = false;
			func_138(iLocal_103);
		}
		else
		{
			bLocal_294 = true;
		}
	}
	else
	{
		bLocal_294 = false;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("bj")) > 0)
	{
		func_101(&uLocal_92, 8);
	}
	else
	{
		func_142(&uLocal_92, 8);
	}
	if (func_117(12))
	{
		func_101(&uLocal_92, 8);
	}
	iLocal_95 = 60500;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

void func_138(int iParam0)
{
	if (iLocal_93 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_129(iParam0, 0, 0);
		}
		iLocal_103 = 263;
		func_92(&iLocal_94);
		iLocal_93 = 9;
	}
}

bool func_139(int iParam0)
{
	return Global_113459[iParam0 /*10*/].f_1;
}

int func_140(struct<3> Param0, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam3 == func_141(iVar3))
		{
			fVar1 = SYSTEM::VDIST2(Param0, func_48(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_142(var uParam0, int iParam1)
{
	func_143(uParam0, iParam1);
}

void func_143(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_144(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_103 != 263)
		{
			func_129(iLocal_103, 0, 0);
		}
	}
	func_92(&iLocal_94);
	if (func_135(uLocal_92, 2))
	{
		func_5();
		func_142(&uLocal_92, 2);
		func_7(&iLocal_96);
	}
	iLocal_96 = -1;
	func_145();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_145()
{
	func_142(&uLocal_92, 4);
	func_146();
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_67))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_67) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_67);
		}
	}
}

void func_146()
{
}

