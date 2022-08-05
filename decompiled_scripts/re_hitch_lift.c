#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	float fLocal_96 = 0f;
	struct<3> Local_97 = { 0, 0, 0 } ;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	struct<3> Local_104 = { 0, 0, 0 } ;
	float fLocal_107 = 0f;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	bool bLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int* iLocal_123 = NULL;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	struct<6> Local_128 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_134 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	bool bLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	char[] cLocal_178[8] = 0;
	char* sLocal_179 = NULL;
	char* sLocal_180 = NULL;
	char* sLocal_181 = NULL;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	float fLocal_184 = 0f;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	float fLocal_189 = 0f;
	struct<3> Local_190 = { 0, 0, 0 } ;
	var uLocal_193 = 0;
	int iLocal_194 = 0;
	var uLocal_195 = 16;
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
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
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
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	iLocal_55 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_56 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_70 = { -3092.82f, 749.8f, 21.48f };
	Local_73 = { 181.8977f, 4415.152f, 73.463f };
	Local_76 = { 2743.461f, 4385.51f, 47.7521f };
	Local_79 = { -382.1346f, 2817.971f, 44.0671f };
	Local_97 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_128, "", 24);
	Local_63 = { ScriptParam_0.f_1[0 /*3*/] };
	func_277();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_85))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_85))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_85);
			}
		}
		func_255();
	}
	if (func_226(Local_63, 13, bLocal_82, 0, 0))
	{
		func_223(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_111)
		{
			if (!func_222())
			{
				if (func_221())
				{
					func_255();
				}
			}
			RECORDING::_0x208784099002BC30("RE_HL", 0);
			switch (iLocal_57)
			{
				case 0:
					if (func_209())
					{
						func_255();
					}
					if (!iLocal_62)
					{
						func_208();
					}
					else
					{
						func_207();
					}
					if (bLocal_61)
					{
						iLocal_143 = 1;
						iLocal_57 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						switch (iLocal_58)
						{
							case 0:
								if ((func_206() && iLocal_59 != 8) && iLocal_59 != 10)
								{
									if (!func_222())
									{
										func_197(1);
									}
									iLocal_58 = 1;
								}
								switch (iLocal_59)
								{
									case 0:
										func_190();
										break;
									
									case 1:
										func_188();
										break;
									
									case 2:
										if (func_187())
										{
										}
										iLocal_158 = MISC::GET_GAME_TIMER();
										if (iLocal_140 < 1 && !iLocal_141)
										{
											func_186();
										}
										if (iLocal_60 == 1)
										{
											func_185();
										}
										else if (iLocal_60 == 2)
										{
											func_184();
										}
										else if (iLocal_60 == 3)
										{
											func_183();
										}
										else if (iLocal_60 == 5)
										{
											func_180();
										}
										break;
									
									case 3:
										func_177();
										break;
									
									case 4:
										if (iLocal_60 == 1)
										{
											func_160();
											func_159();
										}
										else if (iLocal_60 == 3)
										{
											func_154();
											func_153();
										}
										else if (iLocal_60 == 5)
										{
											func_154();
											func_144();
										}
										if (!bLocal_114)
										{
											func_140();
											func_139();
											func_136();
											func_135();
											func_132();
											func_130();
											func_129();
											func_128();
										}
										func_120();
										break;
									
									case 6:
										func_68();
										if (iLocal_60 == 3)
										{
											func_153();
										}
										break;
									
									case 7:
										func_67();
										if (iLocal_60 == 3)
										{
											func_153();
										}
										break;
									
									case 8:
										if (iLocal_60 == 3)
										{
											func_63();
											func_153();
										}
										break;
									
									case 9:
										if (!PED::IS_PED_INJURED(iLocal_85))
										{
											if (ENTITY::IS_ENTITY_AT_COORD(iLocal_85, Local_93, 200f, 200f, 200f, false, true, 0))
											{
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_85, Local_93, 1f, -1, 0.25f, false, 40000f);
											}
											else
											{
												TASK::TASK_WANDER_STANDARD(iLocal_85, 40000f, 0);
											}
											PED::SET_PED_KEEP_TASK(iLocal_85, true);
											SYSTEM::WAIT(5000);
										}
										func_59();
										break;
									
									case 10:
										break;
								}
								if ((func_58() && !func_57()) && iLocal_59 != 10)
								{
									if (!PED::IS_PED_INJURED(iLocal_85))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(iLocal_85, Local_97, 5f, 5f, 5f, false, true, 0))
										{
											func_56(0);
											SYSTEM::WAIT(0);
											func_54();
											iLocal_59 = 10;
										}
									}
								}
								if (func_53())
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
									{
										PED::DELETE_PED(&iLocal_85);
									}
									func_24();
								}
								break;
							
							case 1:
								func_54();
								SYSTEM::WAIT(0);
								if (iLocal_60 == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH1_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_60 == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_60 == 3)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_AGG", 4, 0, 0, 0);
									if (!PED::IS_PED_INJURED(iLocal_86))
									{
										TASK::CLEAR_PED_TASKS(iLocal_86);
										TASK::TASK_SMART_FLEE_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
										PED::SET_PED_KEEP_TASK(iLocal_86, true);
									}
								}
								else if (iLocal_60 == 5)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_AGG", 4, 0, 0, 0);
								}
								if (!PED::IS_PED_INJURED(iLocal_85))
								{
									TASK::CLEAR_PED_TASKS(iLocal_85);
									TASK::TASK_SMART_FLEE_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
									PED::SET_PED_KEEP_TASK(iLocal_85, true);
									func_59();
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_255();
		}
		if (iLocal_59 > 2)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
				{
					if (!PED::IS_PED_INJURED(iLocal_85))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0))
						{
							func_59();
						}
					}
				}
			}
		}
		if (iLocal_59 > 0 && iLocal_59 < 8)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_INJURED(iLocal_85))
				{
					if (!func_222())
					{
						func_197(1);
					}
					func_59();
				}
				else if (!PED::IS_PED_RAGDOLL(iLocal_85))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::CLEAR_PED_TASKS(iLocal_85);
						TASK::TASK_SMART_FLEE_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						func_59();
					}
				}
			}
		}
	}
}

bool func_1(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21292 = 0;
	Global_21294 = 0;
	Global_21299 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_2883585 = 0;
	return func_2(sParam2, iParam3, 0);
}

int func_2(char* sParam0, int iParam1, bool bParam2)
{
	Global_21286 = 0;
	if (Global_21285 == 0 || Global_21287 == 2)
	{
		if (Global_21285 != 0)
		{
			if (iParam1 > Global_21287)
			{
				if (Global_21292 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19954.f_1 = 3;
					Global_21285 = 0;
					Global_21286 = 1;
					Global_21338 = 0;
					Global_21281 = 0;
					Global_21282 = 0;
					Global_21296 = 0;
					Global_21295 = 0;
					Global_19953 = 0;
				}
				else
				{
					func_22();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_21(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_20();
		Global_20574 = { Global_20739 };
		Global_21291 = Global_21292;
		Global_21298 = Global_21299;
		Global_2883586 = Global_2883585;
		Global_21300 = { Global_21316 };
		Global_21293 = Global_21294;
		Global_22275 = Global_22276;
		Global_22283 = { Global_22289 };
		Global_22277 = Global_22278;
		Global_22279 = Global_22280;
		Global_22281 = Global_22282;
		Global_20904.f_370 = Global_22274;
		Global_20904.f_368 = Global_22272;
		Global_20904.f_369 = Global_22273;
		Global_21281 = Global_21282;
		if (Global_21291)
		{
			MISC::CLEAR_BIT(&Global_7824, 20);
			MISC::CLEAR_BIT(&Global_7825, 17);
			MISC::CLEAR_BIT(&Global_7826, false);
			if (bParam2)
			{
				func_12();
				if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19954.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19920 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_11())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77858)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_10())
			{
				return 0;
			}
			else
			{
				switch (Global_19954.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_7824, 9))
				{
					return 0;
				}
			}
			func_9();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_8();
		func_3();
		return 1;
	}
	if (Global_21285 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21287 || iParam1 == Global_21287)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_22();
	}
	return 0;
}

void func_3()
{
	if (!func_4())
	{
		return;
	}
	if (Global_21291)
	{
		MemCopy(&(Global_1973354.f_1), {Global_20904}, 4);
		Global_1973354 = Global_7139;
		Global_1973354.f_6 = Global_21295;
	}
}

int func_4()
{
	if (!Global_262145.f_28542)
	{
		return 0;
	}
	if (!Global_77858)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_7())
	{
		return 0;
	}
	if (func_5(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, 20);
}

var func_6(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_7()
{
	return -1;
}

void func_8()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20153[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21285 = 1;
}

void func_9()
{
	Global_21338 = Global_21337;
	Global_21332 = Global_21333;
	Global_21379 = { Global_21367 };
	Global_21385 = { Global_21373 };
	Global_21340 = Global_21339;
	Global_21409 = { Global_21391 };
	Global_21415 = { Global_21397 };
	Global_21421 = { Global_21403 };
	Global_21427 = { Global_21433 };
	Global_7139 = Global_7140;
	Global_7141 = Global_7142;
	Global_21296 = Global_21297;
	Global_21298 = Global_21299;
	Global_21300 = { Global_21316 };
	Global_21289 = Global_21290;
	Global_22301 = 0;
	Global_21334 = 0;
	Global_21335 = 0;
	MISC::CLEAR_BIT(&Global_7825, 16);
}

int func_10()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_11()
{
	int iVar0;
	int iVar1;
	
	if (Global_77858)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_12()
{
	if (func_19(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[0 /*29*/])
			{
				Global_19954 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[1 /*29*/])
			{
				Global_19954 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[2 /*29*/])
			{
				Global_19954 = 2;
			}
			else
			{
				Global_19954 = 0;
			}
		}
	}
	else
	{
		Global_19954 = func_13();
		if (Global_19954 == 145)
		{
			Global_19954 = 3;
		}
		if (Global_77858)
		{
			Global_19954 = 3;
		}
		if (Global_19954 > 3)
		{
			Global_19954 = 3;
		}
	}
}

int func_13()
{
	func_14();
	return Global_112922.f_2363.f_539.f_4321;
}

void func_14()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_17(Global_112922.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_16(PLAYER::PLAYER_PED_ID());
			if (func_15(iVar0) && (!func_19(14) || Global_111873))
			{
				if (Global_112922.f_2363.f_539.f_4321 != iVar0 && func_15(Global_112922.f_2363.f_539.f_4321))
				{
					Global_112922.f_2363.f_539.f_4322 = Global_112922.f_2363.f_539.f_4321;
				}
				Global_112922.f_2363.f_539.f_4323 = iVar0;
				Global_112922.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112922.f_2363.f_539.f_4321 != 145)
			{
				Global_112922.f_2363.f_539.f_4323 = Global_112922.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112922.f_2363.f_539.f_4321 = 145;
}

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return func_18(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_18(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

bool func_19(int iParam0)
{
	return Global_42602 == iParam0;
}

void func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20574[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20574[iVar0 /*10*/].f_1), "", 24);
		Global_20574[iVar0 /*10*/].f_7 = 0;
		Global_20574[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20574.f_161 = -99;
	Global_20574.f_162 = { 0f, 0f, 0f };
}

bool func_21(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644218.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1644218.f_1048, iParam0);
}

void func_22()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22296 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19954.f_1 == 9) || Global_19953 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21285 = 6;
		Global_19954.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21285 = 6;
		return;
	}
}

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20739 = { *uParam0 };
	Global_7140 = iParam1;
	StringCopy(&Global_21355, sParam2, 24);
	Global_22274 = iParam5;
	if (iParam3 == 0)
	{
		Global_22272 = 1;
		Global_22270 = 0;
	}
	else
	{
		Global_22272 = 0;
		Global_22270 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22273 = 1;
		Global_22271 = 0;
	}
	else
	{
		Global_22273 = 0;
		Global_22271 = 1;
	}
}

void func_24()
{
	while (!func_52())
	{
		SYSTEM::WAIT(0);
	}
	func_48(func_13(), 4, 5);
	func_28(13, bLocal_82);
	func_25();
	func_255();
}

void func_25()
{
	func_26();
}

int func_26()
{
	if (func_27(0))
	{
		return 0;
	}
	if (Global_100019.f_8)
	{
		if (Global_100019.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100019.f_10 > 1)
	{
		return 0;
	}
	Global_100019.f_10++;
	return 1;
}

int func_27(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78106, 0);
}

void func_28(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_46();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_45(iParam0))
	{
		func_44(iParam0, bParam1);
		if (!func_43(51))
		{
			func_39("RE_REWARD", 1, 0, 4000, 10000, func_42(), 0, 138, 0);
			func_38(51);
		}
		if (func_37(iParam0))
		{
			Global_112922.f_24995.f_2 = 3;
		}
		if (func_36(iParam0, bParam1) != 322)
		{
			func_30(func_36(iParam0, bParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_112910 = bParam1;
		if (Global_112908 == 0)
		{
			if (((Global_112911 == 1 || Global_112911 == 5) || Global_112911 == 11) || Global_112911 == 25)
			{
				func_29(2);
			}
			else if ((Global_112911 == 26 || Global_112911 == 8) || Global_112911 == 17)
			{
				func_29(7);
			}
			else
			{
				func_29(1);
			}
		}
	}
}

void func_29(int iParam0)
{
	Global_112908 = iParam0;
}

void func_30(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_34((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_112922.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_112922.f_10194[iParam0 /*12*/].f_6 == 11 || Global_112922.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_112922.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_112922.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_112922.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_31();
	}
}

void func_31()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_112658 = 0;
	Global_112659 = 0;
	Global_112660 = 0;
	Global_112661 = 0;
	Global_112662 = 0;
	Global_112663 = 0;
	Global_112664 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_112922.f_10194.f_3853;
	Global_112922.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_112922.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_112922.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_112658++;
					fVar1 = (fVar1 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_112659++;
					fVar2 = (fVar2 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_112660++;
					fVar3 = (fVar3 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_112661++;
					fVar4 = (fVar4 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_112662++;
					fVar5 = (fVar5 + (Global_112922.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_112663++;
					fVar6 = (fVar6 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_112664++;
					fVar7 = (fVar7 + Global_112922.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_112641 > 0)
	{
		if (Global_112658 == Global_112641)
		{
			fVar1 = 55f;
		}
	}
	if (Global_112642 > 0)
	{
		if (Global_112659 == Global_112642)
		{
			fVar2 = 10f;
		}
	}
	if (Global_112643 > 0)
	{
		if (Global_112660 == Global_112643)
		{
			fVar3 = 0f;
		}
	}
	if (Global_112644 > 0)
	{
		if (Global_112661 == Global_112644)
		{
			fVar4 = 10f;
		}
	}
	if (Global_112645 > 0)
	{
		if (((Global_112662 == Global_112645 || (Global_112645 * 10 / Global_112662) < 41) || Global_112662 > Global_112648) || Global_112662 == Global_112648)
		{
			if (!BitTest(Global_112922.f_10194.f_3856, 14))
			{
				if (Global_112662 == Global_112645)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_112645, 0);
					MISC::SET_BIT(&(Global_112922.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_112646 > 0)
	{
		if (Global_112663 == Global_112646)
		{
			fVar6 = 15f;
		}
	}
	if (Global_112647 > 0)
	{
		if (Global_112664 == Global_112647)
		{
			fVar7 = 5f;
		}
	}
	Global_112922.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_112662 > Global_112648 || Global_112662 == Global_112648)
	{
		iVar9 = Global_112648;
	}
	else
	{
		iVar9 = Global_112662;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_112658, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_112641, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_112659, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_112642, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_112660, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_112643, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_112661, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_112644, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_112648, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_112664 + Global_112663), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_112647 + Global_112646), true);
	Global_112665 = (Global_112658 * 100 / Global_112641);
	Global_112667 = ((Global_112660 + Global_112659) * 100 / (Global_112643 + Global_112642));
	Global_112666 = ((Global_112661 + iVar9) * 100 / (Global_112644 + Global_112648));
	Global_112668 = ((Global_112663 + Global_112664) * 100 / (Global_112646 + Global_112647));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_112922.f_10194.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_112665, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_112666, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_112667, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_112922.f_10194.f_3853))
	{
		func_33(13, SYSTEM::FLOOR(Global_112922.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_77858)
		{
			if (func_32() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_112656 = 0;
				}
				if (!Global_62696)
				{
					func_26();
				}
			}
		}
	}
}

int func_32()
{
	return Global_31511;
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_34(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_35();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_35()
{
	return Global_1574915;
}

int func_36(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_37(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_112922.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_39(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_40(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_40(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_112922.f_20410.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_112922.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112922.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_112922.f_20410[Global_112922.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_112922.f_20410.f_145++;
		func_41();
	}
}

void func_41()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_112922.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112922.f_20410.f_145)
	{
		if (BitTest(Global_112922.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112922.f_20410[iVar0 /*16*/].f_12 > Global_112922.f_20410.f_146[0])
			{
				Global_112922.f_20410.f_146[0] = Global_112922.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_112922.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112922.f_20410[iVar0 /*16*/].f_12 > Global_112922.f_20410.f_146[1])
			{
				Global_112922.f_20410.f_146[1] = Global_112922.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_112922.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112922.f_20410[iVar0 /*16*/].f_12 > Global_112922.f_20410.f_146[2])
			{
				Global_112922.f_20410.f_146[2] = Global_112922.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_42()
{
	func_14();
	switch (Global_112922.f_2363.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_112922.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_44(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_112922.f_24995.f_8[iParam0]), iParam1);
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_46()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_47(Var0);
	return uVar16;
}

int func_47(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_112922.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_112922.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 12581;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 12581)
			{
				iVar0 = func_51(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_49(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_49(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2822371[iParam0 /*3*/][func_50(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_35();
		if (iVar1 > -1)
		{
			Global_2822083 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2822083 = 1;
		}
	}
	return iVar0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2822371[iParam0 /*3*/][func_50(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_52()
{
	return 1;
}

int func_53()
{
	if (Global_31750)
	{
		func_29(4);
		return 1;
	}
	return 0;
}

void func_54()
{
	Global_20151 = 0;
	func_55();
}

void func_55()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22296 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21285 = 6;
	}
}

void func_56(int iParam0)
{
	Global_22296 = iParam0;
}

int func_57()
{
	if (Global_112922.f_24995.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return Global_31749;
}

void func_59()
{
	func_61();
	while (func_60())
	{
		SYSTEM::WAIT(0);
	}
	func_255();
}

int func_60()
{
	if (Global_21285 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_61()
{
	Global_20151 = 0;
	func_62();
}

void func_62()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22296 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21285 = 6;
		return;
	}
}

void func_63()
{
	struct<6> Var0;
	
	if (!PED::IS_PED_INJURED(iLocal_86) && !PED::IS_PED_INJURED(iLocal_85))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 25f, 25f, 25f, false, true, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_85, 40f, 40f, 40f, false, true, 0))
		{
			TASK::CLEAR_PED_TASKS(iLocal_86);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_86, Local_93, 1f, -1, 0.25f, false, 40000f);
			func_24();
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), true))
		{
			if (func_60())
			{
				Var0 = { func_66() };
				if ((MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_2") || MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_4")) || MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_6"))
				{
					func_54();
				}
			}
		}
		if (SYSTEM::TIMERB() > 5000)
		{
			if (PED::IS_PED_IN_COMBAT(iLocal_86, PLAYER::PLAYER_PED_ID()))
			{
				iLocal_159 = 4;
			}
		}
	}
	if (!iLocal_113)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), true))
			{
				if (!PED::IS_PED_INJURED(iLocal_86))
				{
					func_54();
					SYSTEM::WAIT(0);
					func_1(&uLocal_195, cLocal_178, "REHH3_JB2", 4, 0, 0, 0);
					iLocal_113 = 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_85))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_85);
		}
		if (PED::IS_PED_INJURED(iLocal_86) && ENTITY::IS_ENTITY_AT_COORD(iLocal_85, ENTITY::GET_ENTITY_COORDS(iLocal_86, false), 1f, 1f, 5f, false, true, 0))
		{
			iLocal_159 = 5;
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_86))
	{
		TASK::TASK_COMBAT_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 0, 16);
		func_59();
	}
	else
	{
		func_59();
	}
	if (!iLocal_168)
	{
		if (PED::IS_PED_INJURED(iLocal_86))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_122))
			{
				HUD::REMOVE_BLIP(&iLocal_122);
			}
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				iLocal_159 = 3;
			}
		}
	}
	if (!iLocal_170)
	{
		if (!PED::IS_PED_INJURED(iLocal_85) && !PED::IS_PED_INJURED(iLocal_86))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					iLocal_159 = 2;
				}
			}
		}
		if (PED::IS_PED_INJURED(iLocal_86))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_122))
			{
				HUD::REMOVE_BLIP(&iLocal_122);
			}
			func_65(&uLocal_195, 4);
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), true) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				iLocal_159 = 2;
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_85, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_85, iLocal_86, true))
			{
				iLocal_159 = 2;
			}
		}
	}
	switch (iLocal_159)
	{
		case 0:
			if (!iLocal_168)
			{
				if (!PED::IS_PED_INJURED(iLocal_85) && !PED::IS_PED_INJURED(iLocal_86))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, false) && PED::IS_PED_IN_MELEE_COMBAT(iLocal_86))
					{
						if (!iLocal_169)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_86, -1, 2052, 2);
							TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0f, false, false, false);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_86, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
							iLocal_169 = 1;
						}
					}
				}
			}
			else
			{
				func_24();
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_85, 0, 0);
				SYSTEM::SETTIMERB(0);
				iLocal_159 = 0;
			}
			break;
		
		case 2:
			if (!iLocal_170)
			{
				if (!PED::IS_PED_INJURED(iLocal_85))
				{
					func_54();
					SYSTEM::WAIT(0);
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_GUN", 4, 0, 0, 0);
					}
					else
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_AGG", 4, 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_85))
					{
						TASK::CLEAR_PED_TASKS(iLocal_85);
						TASK::TASK_SMART_FLEE_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						if (!PED::IS_PED_INJURED(iLocal_86))
						{
							AUDIO::PLAY_PAIN(iLocal_86, 6, 0, 0);
							TASK::TASK_SMART_FLEE_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						}
					}
					func_24();
					iLocal_170 = 1;
					iLocal_159 = 0;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				func_54();
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_85))
				{
					AUDIO::PLAY_PAIN(iLocal_85, 7, 0, 0);
				}
				func_1(&uLocal_195, cLocal_178, "REHH3_BAS", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_85) && ENTITY::DOES_ENTITY_EXIST(iLocal_86))
				{
					TASK::CLEAR_PED_TASKS(iLocal_85);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0f, false, false, false);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_86, -1, 2052, 4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_86, false), 1f, -1, 3f, false, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_86, -1);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0f, false, false, false);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
					PED::SET_PED_KEEP_TASK(iLocal_85, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_85, false);
					SYSTEM::WAIT(10000);
					iLocal_168 = 1;
					iLocal_159 = 0;
				}
			}
			break;
		
		case 4:
			if (func_64())
			{
				if (!PED::IS_PED_INJURED(iLocal_85))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, false, true, 0))
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH3_NOO", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_159 = 0;
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_86))
			{
				if (func_1(&uLocal_195, cLocal_178, "REHH3_FHT", 4, 0, 0, 0))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_159 = 0;
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				func_61();
				SYSTEM::WAIT(0);
				if (func_1(&uLocal_195, cLocal_178, "REHH3_ATT", 4, 0, 0, 0))
				{
					iLocal_159 = 0;
				}
			}
			break;
	}
}

int func_64()
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_65(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

struct<6> func_66()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21285 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_22295);
		if (iVar6 > -1)
		{
			return Global_20153[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_67()
{
	if (iLocal_60 == 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_85))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_85))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_85);
			}
			iLocal_59 = 8;
		}
	}
}

void func_68()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_83))
	{
		HUD::REMOVE_BLIP(&iLocal_83);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_84))
	{
		HUD::REMOVE_BLIP(&iLocal_84);
	}
	if (iLocal_60 == 1)
	{
		AUDIO::STOP_SOUND(iLocal_177);
		AUDIO::STOP_AUDIO_SCENE("TIMER_SCENE");
		if (!iLocal_124)
		{
			func_54();
			SYSTEM::WAIT(0);
			func_1(&uLocal_195, cLocal_178, "REHH1_TKA", 4, 0, 0, 0);
			CAM::SET_GAMEPLAY_COORD_HINT(-1055.515f, -2533.221f, 19.3049f, -1, 3000, 2000, 0);
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				func_93(func_13(), 1, 100, 0, 1);
				func_92(198, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_85, 8000, 2052, 4);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 3000, 4194369);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1055.515f, -2533.221f, 19.3049f, 2f, -1, 0.25f, true, 40000f);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1046.832f, -2518.146f, 12.9447f, 2f, -1, 40000f, 0.5f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
				PED::SET_PED_KEEP_TASK(iLocal_85, true);
				SYSTEM::SETTIMERB(0);
				iLocal_124 = 1;
			}
		}
		if (SYSTEM::TIMERB() < 7000)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 75, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			PAD::DISABLE_CONTROL_ACTION(0, 79, true);
			PAD::DISABLE_CONTROL_ACTION(0, 286, true);
			PAD::DISABLE_CONTROL_ACTION(0, 287, true);
			PAD::DISABLE_CONTROL_ACTION(0, 26, true);
			PAD::DISABLE_CONTROL_ACTION(0, 273, true);
			PAD::DISABLE_CONTROL_ACTION(0, 4, true);
			PAD::DISABLE_CONTROL_ACTION(0, 270, true);
			PAD::DISABLE_CONTROL_ACTION(0, 5, true);
			PAD::DISABLE_CONTROL_ACTION(0, 1, true);
			PAD::DISABLE_CONTROL_ACTION(0, 271, true);
			PAD::DISABLE_CONTROL_ACTION(0, 6, true);
			PAD::DISABLE_CONTROL_ACTION(0, 2, true);
			PAD::DISABLE_CONTROL_ACTION(0, 272, true);
			PAD::DISABLE_CONTROL_ACTION(0, 3, true);
		}
		if (SYSTEM::TIMERB() > 3000 && SYSTEM::TIMERB() < 7000)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		else if (SYSTEM::TIMERB() > 7000)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::STOP_GAMEPLAY_HINT(false);
			if (SYSTEM::TIMERB() > 8500 && !iLocal_126)
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_126 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_85) || SYSTEM::TIMERB() > 15000)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_85, -1046.832f, -2518.146f, 12.9447f, 20f, 20f, 5f, false, true, 0) || SYSTEM::TIMERB() > 15000)
			{
				PED::DELETE_PED(&iLocal_85);
				func_24();
			}
		}
	}
	else if (iLocal_60 == 2)
	{
		if (!iLocal_124)
		{
			func_54();
			SYSTEM::WAIT(0);
			func_1(&uLocal_195, cLocal_178, "REHH2_TKB", 4, 0, 0, 0);
			iLocal_124 = 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_85))
		{
			if (!PED::IS_PED_RAGDOLL(iLocal_85))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
				TASK::TASK_PAUSE(0, 4500);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194369);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3323.43f, 5166.832f, 17.406f, 1f, -1, 0.25f, false, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3320.684f, 5186.017f, 17.4016f, 1f, -1, 0.25f, false, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3303.612f, 5185.269f, 18.7155f, 1f, -1, 0.25f, false, 40000f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
				PED::SET_PED_KEEP_TASK(iLocal_85, true);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_85, 5000, 2052, 2);
				PED::REMOVE_PED_FROM_GROUP(iLocal_85);
				SYSTEM::WAIT(1000);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (func_13() == 0)
				{
					func_72(9, 1, 0);
				}
				else if (func_13() == 1)
				{
					func_72(9, 1, 1);
				}
				else if (func_13() == 2)
				{
					func_72(9, 1, 2);
				}
				SYSTEM::WAIT(8000);
				func_24();
			}
		}
	}
	else if (iLocal_60 == 3)
	{
		if (SYSTEM::TIMERA() > 1000)
		{
			if (func_1(&uLocal_195, cLocal_178, "REHH3_JB", 4, 0, 0, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_86))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_86, true);
					if (!HUD::DOES_BLIP_EXIST(iLocal_121))
					{
						HUD::REMOVE_BLIP(&iLocal_121);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_122))
					{
						iLocal_122 = func_69(iLocal_86, 1, 145);
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 17f, 1f, 2f, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_86, iLocal_89);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
					PED::SET_PED_KEEP_TASK(iLocal_86, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_86, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					PED::ADD_RELATIONSHIP_GROUP("rghBoyfriend", &iLocal_194);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_86, iLocal_194);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, joaat("COP"), iLocal_194);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -183807561, iLocal_194);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_194, -183807561);
					SYSTEM::SETTIMERA(0);
					iLocal_59 = 7;
				}
			}
		}
	}
	else if (iLocal_60 == 5)
	{
		if (!iLocal_124)
		{
			func_54();
			SYSTEM::WAIT(0);
			func_1(&uLocal_195, cLocal_178, "REHH5_THX", 4, 0, 0, 0);
			iLocal_124 = 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_85))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194369);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -346.029f, 632.2272f, 171.2525f, 1f, -1, 0.25f, false, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -346.6342f, 627.3992f, 170.3573f, 1f, -1, 0.25f, false, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -355.2473f, 622.1964f, 170.3572f, 1f, -1, 0.25f, false, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -355.6499f, 615.3431f, 170.3572f, 1f, -1, 0.25f, false, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -350.163f, 605.0463f, 170.7292f, 1f, -1, 0.25f, false, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -333.177f, 594.991f, 170.7553f, 1f, -1, 0.25f, false, 40000f);
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
			TASK::TASK_PAUSE(0, -1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
			PED::SET_PED_KEEP_TASK(iLocal_85, true);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_85, 5000, 2052, 2);
			PED::REMOVE_PED_FROM_GROUP(iLocal_85);
		}
		SYSTEM::WAIT(2000);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		SYSTEM::WAIT(3000);
		func_24();
	}
}

int func_69(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_70(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1918[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1918[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_70(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_71(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_71(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_71(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_71(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_72(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_91();
	}
	if (func_90(iParam2) == 4)
	{
	}
	bVar0 = Global_112922.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_88(func_89(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_88(func_89(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_112922.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_87(iParam0, 0);
			func_82(func_89(iParam0), func_90(iParam2), 1);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_2359296[func_81() /*5559*/].f_675.f_1273), iParam0);
					func_78(-60084924, 15, 0);
					break;
			}
			func_77(iVar1);
			func_76(iParam0, iVar1);
			Global_111916.f_15[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (bVar0)
	{
		func_73(func_89(iParam0), func_90(iParam2));
	}
}

void func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 160)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_75(iParam0, iVar0, 0);
			func_74(iParam0, iVar0, 0);
		}
	}
}

void func_74(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1918[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112922.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_75(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1918[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112922.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_76(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_111916.f_4[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
	}
	else
	{
		Global_111916.f_4[iParam0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000));
	}
}

void func_77(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_111916.f_3 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		Global_111916.f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000));
	}
}

void func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_80(iParam1, iParam2))
	{
		iVar0 = func_79();
		Global_2725127[iVar0] = iParam1;
		Global_2725138[iVar0] = iParam0;
	}
}

int func_79()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_80(int iParam0, var uParam1)
{
	if (Global_1575042)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575054) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_81()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_82(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8510 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 160)
	{
		func_12();
		if (iParam1 == 4)
		{
			func_75(iParam0, 0, 1);
			func_75(iParam0, 1, 1);
			func_75(iParam0, 2, 1);
			func_74(iParam0, 0, 1);
			func_74(iParam0, 1, 1);
			func_74(iParam0, 2, 1);
		}
		else
		{
			if (func_86(iParam0, iParam1) == 1 && func_85(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_75(iParam0, iVar0, 1);
			func_74(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2810701.f_6725)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2810701.f_6724)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2810701.f_6724)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_77858)
			{
				if (iParam1 != 4)
				{
					if (Global_19954 != iParam1)
					{
						Global_8483[iParam1 /*4*/] = { func_84(iParam0) };
						Global_8500[iParam1] = 1;
						Global_8505[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19954)
					{
					}
					else
					{
						Global_8434[1 /*6*/] = { func_84(iParam0) };
						Global_8434[1 /*6*/].f_5 = iParam1;
						func_83();
					}
				}
				else
				{
					Global_8434[1 /*6*/] = { func_84(iParam0) };
					Global_8434[1 /*6*/].f_5 = iParam1;
					func_83();
				}
			}
			else
			{
				Global_8434[1 /*6*/] = { func_84(iParam0) };
				Global_8434[1 /*6*/].f_5 = iParam1;
				func_83();
			}
		}
	}
}

void func_83()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1918[Global_8510 /*29*/].f_7)), 64);
	if (Global_8529 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_8434[1 /*6*/])), 64);
		sVar32 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8434[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_7824, false);
}

struct<4> func_84(int iParam0)
{
	return Global_1918[iParam0 /*29*/].f_3;
}

int func_85(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_24[iParam1];
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_12[iParam1];
}

void func_87(int iParam0, int iParam1)
{
	Global_112922.f_243[func_91() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_88(int iParam0, int iParam1)
{
	if (func_86(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

int func_91()
{
	int iVar0;
	
	iVar0 = func_13();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_50(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

void func_92(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_112922.f_8613[iParam0] = 1;
	Global_112922.f_8613.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_93(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_119(iParam0) == 3)
	{
		return;
	}
	if (func_119(iParam0) == 4)
	{
		return;
	}
	func_94(func_119(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, true);
	}
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_118();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_117(99, 1);
					func_116(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_116(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_116(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_102(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_100(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_116(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_116(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_116(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_100(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_116(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_116(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_116(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_116(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_116(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_116(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_116(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_116(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_116(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_116(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_116(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_116(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_116(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_116(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_116(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_100(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_116(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_116(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_116(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_116(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_116(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_116(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_99(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_117(95, iParam3);
					break;
				
				case 1:
					func_117(97, iParam3);
					break;
				
				case 2:
					func_117(96, iParam3);
					break;
			}
			func_117(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_97(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_97(bVar1);
	}
	iVar5 = (Global_59870[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_59870[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_59870[iVar2] = 2147483647;
				}
				else
				{
					Global_59870[iVar2] = (Global_59870[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_116(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_116(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_116(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_59870[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_59870[iVar2];
			Global_59870[iVar2] = (Global_59870[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_112922.f_20564.f_233[iVar2 /*69*/].f_2[Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_112922.f_20564.f_233[iVar2 /*69*/].f_2[Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_112922.f_20564.f_233[iVar2 /*69*/].f_2[Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_112922.f_20564.f_233[iVar2 /*69*/]++;
		Global_112922.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_112922.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_96(iParam0);
	if (Global_42602 == 15)
	{
		func_95(0);
	}
	return 1;
}

void func_95(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_112922.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_59878[iVar0 /*3*/][0] = Global_112922.f_20564[iVar0];
		Global_59878.f_31[iVar0 /*3*/][0] = Global_112922.f_20564.f_11[iVar0];
		Global_59878.f_62[iVar0 /*3*/][0] = Global_112922.f_20564.f_22[iVar0];
		Global_59878.f_93[iVar0 /*3*/][0] = Global_112922.f_20564.f_33[iVar0];
		Global_59878.f_124[iVar0 /*3*/][0] = Global_112922.f_20564.f_44[iVar0];
		Global_59878.f_155[iVar0 /*3*/][0] = Global_112922.f_20564.f_55[iVar0];
		Global_59878.f_186[iVar0 /*3*/][0] = Global_112922.f_20564.f_66[iVar0];
		Global_59878.f_217[iVar0 /*3*/][0] = Global_112922.f_20564.f_77[iVar0];
		Global_59878.f_248[iVar0 /*3*/][0] = Global_112922.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_59878[iVar0 /*3*/][1] = Global_112922.f_20564[iVar0];
			Global_59878.f_31[iVar0 /*3*/][1] = Global_112922.f_20564.f_11[iVar0];
			Global_59878.f_62[iVar0 /*3*/][1] = Global_112922.f_20564.f_22[iVar0];
			Global_59878.f_93[iVar0 /*3*/][1] = Global_112922.f_20564.f_33[iVar0];
			Global_59878.f_124[iVar0 /*3*/][1] = Global_112922.f_20564.f_44[iVar0];
			Global_59878.f_155[iVar0 /*3*/][1] = Global_112922.f_20564.f_55[iVar0];
			Global_59878.f_186[iVar0 /*3*/][1] = Global_112922.f_20564.f_66[iVar0];
			Global_59878.f_217[iVar0 /*3*/][1] = Global_112922.f_20564.f_77[iVar0];
			Global_59878.f_248[iVar0 /*3*/][1] = Global_112922.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_59870[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_97(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_34(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_34(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_34(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_34(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_49(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_49(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_49(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_49(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_49(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_49(8276, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_112922.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_112922.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_112922.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_81() /*5559*/].f_675.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_112922.f_20564.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_81() /*5559*/].f_675.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_98(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_98(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

void func_99(int iParam0)
{
	func_117(93, iParam0);
	func_117(29, iParam0);
	func_117(30, iParam0);
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_101(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_101(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_101(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_101(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_51(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_51(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_51(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_51(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_51(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_51(8276, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_112922.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_81() /*5559*/].f_675.f_10, iParam0);
}

bool func_101(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_102(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, true);
		func_33(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_103(27, 1);
	return 1;
}

int func_103(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_104(iParam0, iParam1);
}

int func_104(int iParam0, int iParam1)
{
	if (func_19(14) && !func_115(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31761 != 0 && !Global_77858)
	{
		return 0;
	}
	if (func_114(&Global_4535627))
	{
		if (func_112(&Global_4535627, iParam0))
		{
			return 0;
		}
		if (func_105(&Global_4535627, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_105(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_19(14) && !func_115(iParam1))
	{
		return 0;
	}
	if (func_112(uParam0, iParam1))
	{
		return 0;
	}
	if (func_111(uParam0) < 0f)
	{
		func_110(uParam0, 0);
	}
	func_108(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_106(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_106(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_19(14) && !func_115(iParam1))
	{
		return 0;
	}
	if (func_112(uParam0, iParam1))
	{
		return 0;
	}
	if (func_111(uParam0) < 0f)
	{
		func_110(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_107(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_107(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_108(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_109(uParam0, iVar0);
		iVar0++;
	}
	func_110(uParam0, (Global_4535626 - 0.5f));
}

void func_109(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_110(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_111(var uParam0)
{
	return uParam0->f_80;
}

bool func_112(var uParam0, int iParam1)
{
	return func_113(uParam0, iParam1) != -1;
}

int func_113(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_114(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

void func_116(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_117(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58438[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_58438[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_58438[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_58438[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_118()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_59870[0] == iVar0)
		{
			Global_59870[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_59870[1] == iVar0)
		{
			Global_59870[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_59870[2] == iVar0)
		{
			Global_59870[2] = iVar0;
		}
	}
}

int func_119(int iParam0)
{
	return Global_1918[iParam0 /*29*/].f_17;
}

void func_120()
{
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_127())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_85))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_85);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, joaat("script_task_go_to_entity")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, joaat("script_task_go_to_entity")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_85, 0, 0);
				}
				if (!iLocal_142)
				{
					func_122(0);
					func_54();
					SYSTEM::WAIT(0);
					if (!func_60())
					{
						if (iLocal_60 == 1)
						{
							if (!func_187())
							{
								func_1(&uLocal_195, cLocal_178, "REHH1_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH1_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_60 == 2)
						{
							if (!func_187())
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_60 == 3)
						{
							if (!func_187())
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_60 == 5)
						{
							if (!func_187())
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH2", 4, 0, 0, 0);
							}
						}
						iLocal_142 = 1;
					}
				}
			}
			else
			{
				iLocal_142 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, joaat("script_task_go_to_entity")) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, joaat("script_task_go_to_entity")) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_85);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_85))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_85, func_121());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_85, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_85, 0);
		}
	}
}

int func_121()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_122(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_127)
		{
			if (func_126(&uLocal_195, cLocal_178, &Local_134, &Local_128, 8, 0, 0))
			{
				iLocal_127 = 0;
			}
		}
	}
	else if ((!iLocal_127 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !func_124())
	{
		Local_134 = { func_123() };
		Local_128 = { func_66() };
		func_61();
		iLocal_127 = 1;
	}
}

struct<6> func_123()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21285 == 4)
	{
		return Global_20904;
	}
	return Var0;
}

int func_124()
{
	if (((((((((((((((((((((((((((((((((((((((((((((func_125("REHH1_VEH") || func_125("REHH2_VEH")) || func_125("REHH3_VEH")) || func_125("REHH4_VEH")) || func_125("REHH5_VEH")) || func_125("REHH1_VEH2")) || func_125("REHH2_VEH2")) || func_125("REHH3_VEH2")) || func_125("REHH4_VEH2")) || func_125("REHH5_VEH2")) || func_125("REHH1_WLK")) || func_125("REHH2_WLK")) || func_125("REHH3_WLK")) || func_125("REHH4_WLK")) || func_125("REHH5_WLK")) || func_125("REHH1_SLR")) || func_125("REHH4_SLR")) || func_125("REHH1_SLW")) || func_125("REHH2_SLW")) || func_125("REHH3_SLW")) || func_125("REHH4_SLW")) || func_125("REHH5_SLW")) || func_125("REHH1_OUT")) || func_125("REHH2_GETOUT")) || func_125("REHH3_GETOUT")) || func_125("REHH5_GETOUT")) || func_125("REHH1_JACK")) || func_125("REHH2_JACK")) || func_125("REHH3_JACK")) || func_125("REHH5_JACK")) || func_125("REHH1_GUN")) || func_125("REHH2_SHOOT")) || func_125("REHH3_SHOOT")) || func_125("REHH5_SHOO")) || func_125("REHH1_1HOUR")) || func_125("REHH2_1HOUR")) || func_125("REHH1_HHOUR")) || func_125("REHH2_HHOUR")) || func_125("REHH1_CRASH")) || func_125("REHH1_WAY")) || func_125("REHH2_NEAR")) || func_125("REHH3_NEAR")) || func_125("REHH5_NEAR")) || func_125("REHH2_CULT")) || func_125("REHH3_CULT")) || func_125("REHH5_CULT"))
	{
		return 1;
	}
	return 0;
}

int func_125(char* sParam0)
{
	var uVar0;
	
	if (func_60())
	{
		MemCopy(&uVar0, {func_123()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_126(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21292 = 0;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 1;
	StringCopy(&Global_22289, sParam3, 24);
	Global_2883585 = 0;
	return func_2(sParam2, iParam4, 0);
}

int func_127()
{
	if (iLocal_60 == 5)
	{
		if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if ((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
		{
			if (((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_128()
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_150)
		{
			iLocal_152 = MISC::GET_GAME_TIMER();
			iLocal_150 = 1;
		}
		else
		{
			iLocal_154 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_154 = 0;
		iLocal_153 = 0;
		iLocal_150 = 0;
		iLocal_151 = 0;
	}
	if ((iLocal_154 - iLocal_152) > 3000 && (iLocal_154 - iLocal_153) > 6000)
	{
		if (!func_60())
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_SLR", 4, 0, 0, 0);
			}
			iLocal_153 = iLocal_154;
		}
	}
	if ((iLocal_154 - iLocal_152) > 50000 && !iLocal_151)
	{
		func_122(0);
		func_54();
		SYSTEM::WAIT(0);
		if (!func_60())
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_60 == 2)
			{
				func_1(&uLocal_195, cLocal_178, "REHH2_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_60 == 3)
			{
				if (!PED::IS_PED_INJURED(iLocal_85))
				{
					if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_85))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_85);
					}
				}
				func_1(&uLocal_195, cLocal_178, "REHH3_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_60 == 5)
			{
				func_1(&uLocal_195, cLocal_178, "REHH5_SLW", 4, 0, 0, 0);
			}
			iLocal_151 = 1;
		}
	}
	if ((iLocal_154 - iLocal_152) > 60000 && iLocal_151)
	{
		if (!PED::IS_PED_INJURED(iLocal_85))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_85, true);
			if (PED::IS_PED_IN_GROUP(iLocal_85))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_85, Local_93, 200f, 200f, 200f, false, true, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_85, Local_93, 1f, -1, 0.25f, false, 40000f);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(iLocal_85, 40000f, 0);
					}
					if (iLocal_60 == 1)
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					}
					PED::SET_PED_KEEP_TASK(iLocal_85, true);
					PED::REMOVE_PED_FROM_GROUP(iLocal_85);
					func_59();
				}
			}
		}
	}
}

void func_129()
{
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		if (PED::IS_PED_ON_FOOT(iLocal_85))
		{
			if (!iLocal_147)
			{
				iLocal_148 = MISC::GET_GAME_TIMER();
				iLocal_147 = 1;
			}
			else
			{
				iLocal_149 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_147 = 0;
		}
	}
	if ((iLocal_149 - iLocal_148) > 90000)
	{
		func_122(0);
		func_54();
		SYSTEM::WAIT(0);
		if (iLocal_60 == 1)
		{
			func_1(&uLocal_195, cLocal_178, "REHH1_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 2)
		{
			func_1(&uLocal_195, cLocal_178, "REHH2_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 3)
		{
			func_1(&uLocal_195, cLocal_178, "REHH3_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 5)
		{
			func_1(&uLocal_195, cLocal_178, "REHH5_WLK", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_85))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_85, true);
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_85, Local_93, 200f, 200f, 200f, false, true, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_85, Local_93, 1f, -1, 0.25f, false, 40000f);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iLocal_85, 40000f, 0);
			}
			if (iLocal_60 == 1)
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			}
			PED::SET_PED_KEEP_TASK(iLocal_85, true);
			if (PED::IS_PED_IN_GROUP(iLocal_85))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_85);
			}
			func_59();
		}
	}
}

void func_130()
{
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_VEHICLE(iLocal_85, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_121))
				{
					iLocal_121 = func_69(iLocal_85, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_83))
				{
					HUD::REMOVE_BLIP(&iLocal_83);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_83))
				{
					iLocal_83 = func_131(Local_93, 1);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_121))
				{
					HUD::REMOVE_BLIP(&iLocal_121);
				}
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_121))
		{
			iLocal_121 = func_69(iLocal_85, 0, 145);
		}
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, false)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_93, 50f, 50f, 50f, false, true, 0)) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_83))
			{
				iLocal_83 = func_131(Local_93, 1);
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_93, 50f, 50f, 50f, false, true, 0))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_83))
			{
				HUD::REMOVE_BLIP(&iLocal_83);
			}
		}
	}
}

int func_131(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_71(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

void func_132()
{
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, true)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_85, 5f, 5f, 5f, false, true, 0))
		{
			if (func_134())
			{
				func_56(0);
				iLocal_125 = 0;
			}
		}
		else if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_85))
		{
			if (func_60() && !iLocal_125)
			{
				func_56(1);
				iLocal_125 = 1;
			}
		}
		if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_85))
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_85, false);
		}
		if (func_133("REHH3_CHT3_7"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_85, 1, 1);
		}
		if (func_133("REHH3_CHT6_5"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_85, 0, 1);
		}
		if (func_133("REHH3_CHT8_3"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_85, 1, 1);
		}
		if ((func_125("REHH3_CHT8M") || func_125("REHH3_CHT8F")) || func_125("REHH3_CHT8T"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_85, 0, 1);
		}
	}
}

int func_133(char* sParam0)
{
	var uVar0;
	
	if (func_60())
	{
		MemCopy(&uVar0, {func_66()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_134()
{
	if (Global_22296 == 1)
	{
		return 1;
	}
	return 0;
}

void func_135()
{
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		if (iLocal_60 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(iLocal_85, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (!func_125("REHH1_CRASH"))
						{
							func_122(0);
							func_54();
							SYSTEM::WAIT(0);
							func_1(&uLocal_195, cLocal_178, "REHH1_CRASH", 4, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_144)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), true) && PED::IS_PED_IN_VEHICLE(iLocal_85, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					func_122(0);
					func_54();
					SYSTEM::WAIT(0);
					if (!func_60())
					{
						if (iLocal_60 == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_OUT", 4, 0, 0, 0);
						}
						else if (iLocal_60 == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_60 == 3)
						{
							if (!PED::IS_PED_INJURED(iLocal_85))
							{
								if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_85))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iLocal_85);
								}
							}
							func_1(&uLocal_195, cLocal_178, "REHH3_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_60 == 5)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_GETOUT", 4, 0, 0, 0);
						}
						iLocal_144 = 1;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(iLocal_85, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				iLocal_144 = 0;
			}
		}
		if (!iLocal_145)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_122(0);
				func_54();
				SYSTEM::WAIT(0);
				if (!func_60())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 3)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 5)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_JACK", 4, 0, 0, 0);
					}
					iLocal_145 = 1;
				}
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_145 = 0;
		}
		if (!iLocal_146)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_122(0);
				func_54();
				SYSTEM::WAIT(0);
				if (!func_60())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_GUN", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 3)
					{
						if (!PED::IS_PED_INJURED(iLocal_85))
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_85))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_85);
							}
						}
						func_1(&uLocal_195, cLocal_178, "REHH3_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 5)
					{
					}
					iLocal_146 = 1;
				}
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_146 = 0;
		}
	}
}

void func_136()
{
	if (func_138(Local_93))
	{
		func_122(0);
		func_54();
		SYSTEM::WAIT(0);
		if (iLocal_60 == 1)
		{
			func_1(&uLocal_195, cLocal_178, "REHH1_WAY", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 2)
		{
			func_1(&uLocal_195, cLocal_178, "REHH2_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_85))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_85);
				}
			}
			func_1(&uLocal_195, cLocal_178, "REHH3_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 5)
		{
			func_1(&uLocal_195, cLocal_178, "REHH5_CULT", 4, 0, 0, 0);
		}
	}
	if (func_137())
	{
		func_122(0);
		func_54();
		SYSTEM::WAIT(0);
		if (iLocal_60 == 1)
		{
		}
		else if (iLocal_60 == 2)
		{
			func_1(&uLocal_195, cLocal_178, "REHH2_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_85))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_85);
				}
			}
			func_1(&uLocal_195, cLocal_178, "REHH3_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 5)
		{
			func_1(&uLocal_195, cLocal_178, "REHH5_NEAR", 4, 0, 0, 0);
		}
	}
}

int func_137()
{
	if (func_13() == 2)
	{
		if (func_58())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_31754)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_31754 = 1;
					if (!Global_31753)
					{
						Global_31753 = 1;
						return 1;
					}
				}
			}
			else if (Global_31754)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_31754 = 0;
			}
		}
	}
	return 0;
}

int func_138(struct<3> Param0)
{
	if (func_13() == 2)
	{
		if (func_58() && !Global_31752)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0) > (fLocal_47 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_31752 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_139()
{
	if (!func_124())
	{
		func_122(1);
	}
	if (!func_60())
	{
		switch (iLocal_108)
		{
			case 0:
				if (iLocal_60 == 1)
				{
					iLocal_110 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_60 == 2)
				{
					iLocal_110 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_60 == 3)
				{
					iLocal_110 = MISC::GET_GAME_TIMER() + 2000;
				}
				else if (iLocal_60 == 5)
				{
					iLocal_110 = MISC::GET_GAME_TIMER();
				}
				iLocal_108++;
				break;
			
			case 1:
				if (iLocal_110 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 3)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 5)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHT", 4, 0, 0, 0);
					}
					iLocal_108++;
				}
				break;
			
			case 2:
				if (iLocal_110 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_60 == 1)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_ASKM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_ASKF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_ASKT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_60 == 2)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_CHTm2", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_CHTf2", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_CHTt2", 4, 0, 0, 0);
						}
					}
					else if (iLocal_60 == 3)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHTM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHTF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHTT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_60 == 5)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_RESPM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_RESPF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							if (!bLocal_112)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_RESPT", 4, 0, 0, 0);
							}
						}
					}
					iLocal_108++;
				}
				break;
			
			case 3:
				if (iLocal_60 == 1)
				{
					iLocal_110 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_60 == 2)
				{
					iLocal_110 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_60 == 3)
				{
					iLocal_110 = MISC::GET_GAME_TIMER() + 500;
				}
				else if (iLocal_60 == 5)
				{
					iLocal_110 = MISC::GET_GAME_TIMER();
				}
				iLocal_108++;
				break;
			
			case 4:
				if (iLocal_110 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHT2", 4, 0, 0, 0);
						iLocal_108++;
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT2", 4, 0, 0, 0);
						iLocal_108++;
					}
					else if (iLocal_60 == 3)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2", 4, 0, 0, 0);
						iLocal_108++;
					}
					else if (iLocal_60 == 5)
					{
						if (bLocal_112 && !bLocal_114)
						{
							if (func_13() == 0)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_OKM", 4, 0, 0, 0);
							}
							else if (func_13() == 1)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_OKF", 4, 0, 0, 0);
							}
							else if (func_13() == 2)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_OKT", 4, 0, 0, 0);
							}
							iLocal_108++;
						}
					}
				}
				break;
			
			case 5:
				if (iLocal_60 == 1)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_RESPM", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_RESPF", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_RESPT", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_pchatm", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_pchatf", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_pchatt", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 6:
				if (iLocal_60 == 1)
				{
					func_1(&uLocal_195, cLocal_178, "REHH1_CHAT", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 7:
				if (iLocal_60 == 1)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHATb", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHATc", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHATd", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT3M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT3F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT3M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT3F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 8:
				if (iLocal_60 == 1)
				{
					func_1(&uLocal_195, cLocal_178, "REHH1_CHATe", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 9:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT4M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT4F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT4M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT4F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2e", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 10:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2f", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2g", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2h", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 11:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT5M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT5F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT5M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT5F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 12:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 13:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT6M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT6F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT6M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT6F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 14:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4b", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4c", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 15:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT7M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT7F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_RUNOUT", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 16:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT8", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT8", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 17:
				if (iLocal_60 == 3)
				{
					iLocal_110 = MISC::GET_GAME_TIMER() + 700;
				}
				iLocal_108++;
				break;
			
			case 18:
				if (iLocal_60 == 2)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT8M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT8F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT8T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_13() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT8M", 4, 0, 0, 0);
					}
					else if (func_13() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT8F", 4, 0, 0, 0);
					}
					else if (func_13() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT8T", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 19:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT9", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT9", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 20:
				if (iLocal_60 == 3)
				{
					iLocal_110 = MISC::GET_GAME_TIMER() + 300;
				}
				iLocal_108++;
				break;
			
			case 21:
				if (iLocal_110 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_60 == 3)
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHT9M", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHT9F", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHT9T", 4, 0, 0, 0);
						}
					}
					iLocal_108++;
				}
				break;
			
			case 22:
				if (!PED::IS_PED_INJURED(iLocal_85))
				{
					TASK::TASK_PLAY_ANIM(iLocal_85, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, 0f, false, false, false);
				}
				iLocal_108++;
				break;
			}
	}
}

void func_140()
{
	if (iLocal_60 != 3)
	{
		if (func_143())
		{
			SYSTEM::SETTIMERA(0);
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_93, 3f, 3f, 2f, true, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_85, Local_93, Global_19, false, true, 0))
				{
					if (func_142(1, 0, 1))
					{
						func_141();
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f + 2f), 3, false);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_85);
						iLocal_59 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_112)
	{
		if (PED::IS_PED_INJURED(iLocal_86))
		{
			iLocal_59 = 7;
		}
		if (!PED::IS_PED_INJURED(iLocal_85))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 805.501f, 1269.926f, 361.4025f, 25f, 30f, 2f, false, true, 0) || (ENTITY::IS_ENTITY_AT_COORD(iLocal_85, 824.8886f, 1275.671f, 359.4312f, Global_19, true, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, false, true, 0)))
			{
				func_54();
				SYSTEM::WAIT(0);
				func_1(&uLocal_195, cLocal_178, "REHH3_CHT10", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_85) && !PED::IS_PED_INJURED(iLocal_86))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, false))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_85);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_86, -1, 2052, 4);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 5f, 1f, 2f, 0);
						TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, 0f, false, false, false);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_86, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f + 2f), 2, false);
					}
				}
				SYSTEM::SETTIMERA(0);
				iLocal_59 = 6;
			}
		}
	}
}

void func_141()
{
	Global_20151 = 0;
	func_22();
}

int func_142(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_143()
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_85, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 1;
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_93, 50f, 50f, 50f, false, true, 0) && !PED::IS_PED_INJURED(iLocal_85))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_144()
{
	if (bLocal_114)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
		{
			if ((((PED::IS_PED_INJURED(iLocal_86) || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0)) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_93) < 250f) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_97) < 250f) || iLocal_116)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_122))
				{
					HUD::REMOVE_BLIP(&iLocal_122);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_123))
				{
					HUD::REMOVE_BLIP(&iLocal_123);
				}
				if (!PED::IS_PED_INJURED(iLocal_86))
				{
					AUDIO::PLAY_PAIN(iLocal_86, 6, 0, 0);
					TASK::TASK_SMART_FLEE_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_86);
				}
				func_54();
				SYSTEM::WAIT(0);
				func_1(&uLocal_195, cLocal_178, "REHH5_CHT2", 4, 0, 0, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_86);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_171);
				}
				bLocal_114 = false;
			}
			else
			{
				if (!iLocal_117)
				{
					if (!func_60())
					{
						if (func_13() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_COMM", 4, 0, 0, 0);
						}
						else if (func_13() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_COMF", 4, 0, 0, 0);
						}
						else if (func_13() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_COMT", 4, 0, 0, 0);
						}
						iLocal_117 = 1;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_86))
				{
					func_152(&iLocal_86, &iLocal_122, &iLocal_171, &iLocal_123);
					func_151(&iLocal_86, &iLocal_122, &iLocal_171, &iLocal_123);
					func_145(iLocal_171, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_185, &uLocal_188, &Local_190, &fLocal_189, &uLocal_193, 0f, 0f, 0f, 1500, 0f);
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, false, true, 0))
					{
						if (iLocal_109 < MISC::GET_GAME_TIMER())
						{
							if (!func_60())
							{
								if (func_64())
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_FHT", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_FEAR", 4, 0, 0, 0);
								}
								iLocal_109 = MISC::GET_GAME_TIMER() + 8000;
							}
						}
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							if (!func_125("REHH5_SHO"))
							{
								func_54();
								SYSTEM::WAIT(0);
								func_1(&uLocal_195, cLocal_178, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
						if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_86))
						{
							if ((PED::IS_PED_ON_FOOT(iLocal_86) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4)) && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
							{
								iLocal_116 = 1;
							}
						}
					}
					if (!iLocal_115 && !PED::IS_PED_INJURED(iLocal_86))
					{
						if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
						{
							TASK::TASK_COMBAT_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 0, 16);
							func_54();
							SYSTEM::WAIT(0);
							func_1(&uLocal_195, cLocal_178, "REHH5_GRM", 4, 0, 0, 0);
							iLocal_115 = 1;
						}
					}
				}
			}
		}
	}
}

void func_145(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1)) && func_150(iParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam2, *uParam3, Param7) };
				*uParam3 = func_149(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true));
				func_148(iParam1, uParam4, uParam5);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam10)
			{
				if (func_147(iParam0, iParam1, 1) > fParam11 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam2, true) > 20f)
				{
					if (!func_146(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 3f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 1.5f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 3f, false, false, false, false, false, false, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
						else
						{
							Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_190, fLocal_189, Param7) };
							if (!func_146(Var0))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Var0, 2f))
								{
									MISC::CLEAR_AREA_OF_PEDS(Var0, 1.5f, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(Var0, 3f, false, false, false, false, false, false, 0);
									ENTITY::SET_ENTITY_COORDS(iParam0, Var0, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(iParam0, fLocal_189);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
									*uParam6 = MISC::GET_GAME_TIMER();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_146(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_147(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

void func_148(int iParam0, var uParam1, var uParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			*uParam1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			*uParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
	}
}

float func_149(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_150(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_151(int* iParam0, int* iParam1, int* iParam2, int* iParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
		{
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, false))
				{
					if (HUD::DOES_BLIP_EXIST(*iParam1))
					{
						HUD::REMOVE_BLIP(iParam1);
					}
					iVar0 = 1;
				}
				else if (!HUD::DOES_BLIP_EXIST(*iParam1))
				{
					*iParam1 = func_69(*iParam0, 1, 145);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(*iParam3))
			{
				if (iVar0 == 1)
				{
					*iParam3 = func_131(ENTITY::GET_ENTITY_COORDS(*iParam2, true), 0);
					HUD::SET_BLIP_COLOUR(*iParam3, 1);
					HUD::SET_BLIP_PRIORITY(*iParam3, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { HUD::GET_BLIP_COORDS(*iParam3) };
				Var4 = { ENTITY::GET_ENTITY_COORDS(*iParam2, true) };
				Var1.f_0 = (Var1.f_0 + (((Var4.f_0 - Var1.f_0) / 1f) * SYSTEM::TIMESTEP()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * SYSTEM::TIMESTEP()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(*iParam3, Var1);
				if (iVar0 == 0)
				{
					HUD::REMOVE_BLIP(iParam3);
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam1))
				{
					*iParam1 = func_69(*iParam0, 1, 145);
				}
			}
		}
	}
}

void func_152(int* iParam0, int* iParam1, int* iParam2, int* iParam3)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (PED::IS_PED_INJURED(*iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, false))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0f);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
				if (HUD::DOES_BLIP_EXIST(*iParam3))
				{
					HUD::REMOVE_BLIP(iParam3);
				}
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0f);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
		}
	}
}

void func_153()
{
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_86, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, false, true, 0))
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, false, 0f, false);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, false, 0f, false);
			}
		}
		else
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, true, 0f, false);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, true, 0f, false);
			}
		}
	}
}

void func_154()
{
	if (!bLocal_112)
	{
		if (iLocal_60 == 3)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_104, 200f, 200f, 200f, false, true, 0))
			{
				STREAMING::REQUEST_MODEL(iLocal_101);
				STREAMING::REQUEST_CLIP_SET("move_m@brave");
				if (STREAMING::HAS_MODEL_LOADED(iLocal_101) && STREAMING::HAS_CLIP_SET_LOADED("move_m@brave"))
				{
					iLocal_86 = PED::CREATE_PED(26, iLocal_101, Local_104, fLocal_107, true, true);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 0, 2, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 3, 0, 2, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_86, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_86, 42, true);
					PED::SET_PED_DIES_WHEN_INJURED(iLocal_86, true);
					PED::SET_PED_MOVEMENT_CLIPSET(iLocal_86, "move_m@brave", 0.25f);
					PED::SET_PED_CONFIG_FLAG(iLocal_86, 137, true);
					func_158(&uLocal_195, 4, iLocal_86, sLocal_180, 0, 1);
					TASK::TASK_PLAY_ANIM(iLocal_86, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, 0f, false, false, false);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_101);
					bLocal_112 = true;
				}
			}
		}
		else if (iLocal_60 == 5)
		{
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_79, true) > 320f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_85, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					{
						if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), MISC::GET_RANDOM_INT_IN_RANGE(2, 5), &Local_66, 1, 1077936128, 0))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Local_66, 7f) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_66) < 110f)
							{
								STREAMING::REQUEST_MODEL(iLocal_101);
								if (STREAMING::HAS_MODEL_LOADED(iLocal_101))
								{
									func_61();
									SYSTEM::WAIT(0);
									if (func_157(&uLocal_195, cLocal_178, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !PED::IS_PED_INJURED(iLocal_85))
									{
										iLocal_171 = VEHICLE::CREATE_VEHICLE(iLocal_102, Local_66, func_155(Local_66, func_156(PLAYER::PLAYER_ID()), 1), true, true, false);
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_171, 134, 134);
										VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_171, 0f);
										iLocal_86 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_171, 26, iLocal_101, -1, true, true);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 0, 1, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 2, 1, 0, 0);
										PED::SET_PED_CONFIG_FLAG(iLocal_86, 42, true);
										AUDIO::STOP_PED_SPEAKING(iLocal_86, true);
										func_158(&uLocal_195, 4, iLocal_86, sLocal_180, 0, 1);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_171, 5f);
										TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_86, iLocal_171, iLocal_85, 6, 60f, 786468, -1f, -1f, true);
										TASK::TASK_COMBAT_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_KEEP_TASK(iLocal_86, true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_101);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_102);
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_171, (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) + 15f));
										if (HUD::DOES_BLIP_EXIST(iLocal_83))
										{
											HUD::REMOVE_BLIP(&iLocal_83);
										}
										func_61();
										while (func_60())
										{
											SYSTEM::WAIT(0);
										}
										func_126(&uLocal_195, cLocal_178, "REHH5_CHS", "REHH5_CHS_2", 4, 0, 0);
										bLocal_114 = true;
										bLocal_112 = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

float func_155(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

Vector3 func_156(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_157(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21292 = 0;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 1;
	Global_22278 = 0;
	Global_22282 = 0;
	StringCopy(&Global_22289, sParam3, 24);
	Global_2883585 = 0;
	return func_2(sParam2, iParam4, 0);
}

void func_158(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77858)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_159()
{
	if (!iLocal_176 && !func_60())
	{
		if (iLocal_174 == 6 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM1", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 6 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM2", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 7 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM3", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 7 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM4", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 8 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM5", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 8 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM6", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 9 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM7", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 9 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM8", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 10 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM9", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 10 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM10", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 11 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM11", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 11 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM12", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 12 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM13", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 12 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM14", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 13 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM15", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 13 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM16", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 14 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM17", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 14 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM18", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 15 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM19", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 15 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM20", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 16 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM21", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 16 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM22", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 17 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM23", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 17 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM24", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 18 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM25", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 18 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM26", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 19 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM27", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 19 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM28", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 20 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM29", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 20 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM30", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 21 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM31", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 21 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM32", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 22 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM33", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 22 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM34", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 23 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM35", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
	}
}

void func_160()
{
	iLocal_155 = func_165(func_166()) * 1000;
	iLocal_155 = (iLocal_155 + func_164(func_166()) * 1000 * 60);
	if (!iLocal_164)
	{
		if ((iLocal_174 >= 24 && iLocal_155 < 150000) || (iLocal_174 >= 24 && iLocal_155 < 150000))
		{
			func_161((((iLocal_174 * 1000 * 60 - func_164(func_166()) * 1000 * 60) + (iLocal_173 * 1000 - func_165(func_166()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
		else
		{
			func_161(((iLocal_174 * 1000 * 60 - func_164(func_166()) * 1000 * 60) + (iLocal_173 * 1000 - func_165(func_166()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
	else if ((iLocal_174 >= 24 && iLocal_155 < 150000) || (iLocal_174 >= 24 && iLocal_155 < 150000))
	{
		func_161((((iLocal_174 * 1000 * 60 - func_164(func_166()) * 1000 * 60) + (iLocal_173 * 1000 - func_165(func_166()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_161(((iLocal_174 * 1000 * 60 - func_164(func_166()) * 1000 * 60) + (iLocal_173 * 1000 - func_165(func_166()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if ((iLocal_174 == func_164(func_166()) + 1 && iLocal_173 == func_165(func_166())) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_164(func_166()) + 25) && iLocal_173 == func_165(func_166())))
	{
		if (!iLocal_163)
		{
			if (!func_125("REHH1_1HOUR") && !func_125("REHH4_1HOUR"))
			{
				func_122(0);
			}
			func_54();
			SYSTEM::WAIT(0);
			if (!func_60())
			{
				if (iLocal_60 == 1)
				{
					func_1(&uLocal_195, cLocal_178, "REHH1_1HOUR", 4, 0, 0, 0);
				}
				iLocal_163 = 1;
			}
		}
	}
	if (iLocal_173 == 30)
	{
		if ((iLocal_174 == func_164(func_166()) && iLocal_173 == func_165(func_166()) + 30) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_164(func_166()) + 24) && iLocal_173 == func_165(func_166()) + 30))
		{
			if (!iLocal_164)
			{
				if (!func_125("REHH1_HHOUR") && !func_125("REHH4_HHOUR"))
				{
					func_122(0);
				}
				func_54();
				SYSTEM::WAIT(0);
				if (!func_60())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_164 = 1;
				}
				if (!iLocal_165)
				{
					iLocal_177 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_177, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_177, "countdown_fadein", 35f);
					AUDIO::START_AUDIO_SCENE("TIMER_SCENE");
					iLocal_165 = 1;
				}
			}
		}
		if ((iLocal_174 == func_164(func_166()) && iLocal_173 == func_165(func_166()) + 5) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_164(func_166()) + 24) && iLocal_173 == func_165(func_166()) + 5))
		{
			if (!iLocal_166)
			{
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_177, "countdown_fast", 1f);
				iLocal_166 = 1;
			}
		}
	}
	if (iLocal_173 == 0)
	{
		if ((iLocal_174 == func_164(func_166()) + 1 && iLocal_173 == (func_165(func_166()) - 30)) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_164(func_166()) + 25) && iLocal_173 == (func_165(func_166()) - 30)))
		{
			if (!iLocal_164)
			{
				if (!func_125("REHH1_HHOUR") && !func_125("REHH4_HHOUR"))
				{
					func_122(0);
				}
				func_54();
				SYSTEM::WAIT(0);
				if (!func_60())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_164 = 1;
				}
				if (!iLocal_165)
				{
					iLocal_177 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_177, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_177, "countdown_fadein", 35f);
					AUDIO::START_AUDIO_SCENE("TIMER_SCENE");
					iLocal_165 = 1;
				}
			}
		}
		if ((iLocal_174 == func_164(func_166()) + 1 && iLocal_173 == (func_165(func_166()) - 55)) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_164(func_166()) + 25) && iLocal_173 == (func_165(func_166()) - 55)))
		{
			if (!iLocal_166)
			{
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_177, "countdown_fast", 1f);
				iLocal_166 = 1;
			}
		}
	}
	if (iLocal_174 >= 24 && iLocal_155 < 150000)
	{
		if (iLocal_174 == func_164(func_166()) + 24 && iLocal_173 == func_165(func_166()))
		{
			bLocal_175 = true;
		}
	}
	else if (iLocal_174 == func_164(func_166()) && iLocal_173 == func_165(func_166()))
	{
		bLocal_175 = true;
	}
	if (bLocal_175)
	{
		func_54();
		SYSTEM::WAIT(0);
		AUDIO::STOP_SOUND(iLocal_177);
		AUDIO::STOP_AUDIO_SCENE("TIMER_SCENE");
		if (iLocal_60 == 1)
		{
			func_1(&uLocal_195, cLocal_178, "REHH1_TLATE", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_85))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, false))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(iLocal_85, false), (10.5f + 2f), 2, false);
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_85, 1, 0);
				PED::REMOVE_PED_FROM_GROUP(iLocal_85);
				if (HUD::DOES_BLIP_EXIST(iLocal_83))
				{
					HUD::REMOVE_BLIP(&iLocal_83);
				}
			}
		}
		iLocal_59 = 9;
	}
}

void func_161(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_163(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1645748.f_1 = 1;
		func_162(7, iVar0);
		Global_1645748.f_4617[iVar0] = iParam0;
		StringCopy(&(Global_1645748.f_4617.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1645748.f_4617.f_172[iVar0] = iParam2;
		Global_1645748.f_4617.f_216[iVar0] = iParam3;
		Global_1645748.f_4617.f_183[iVar0] = iParam4;
		Global_1645748.f_4617.f_194[iVar0] = iParam5;
		Global_1645748.f_4617.f_249[iVar0] = iParam6;
		Global_1645748.f_4617.f_260[iVar0] = iParam7;
		Global_1645748.f_4617.f_205[iVar0] = iParam8;
		Global_1645748.f_4617.f_314[iVar0] = iParam9;
		Global_1645748.f_4617.f_325[iVar0] = iParam10;
		Global_1645748.f_4617.f_357[iVar0] = iParam11;
		Global_1645748.f_4617.f_238[iVar0] = iParam12;
		Global_1645748.f_4617.f_271[iVar0] = iParam13;
		Global_1645748.f_4617.f_368[iVar0] = iParam14;
		Global_1645748.f_4617.f_379[iVar0] = iParam15;
		Global_1645748.f_4617.f_390[iVar0] = iParam16;
		Global_1645748.f_4617.f_227[iVar0] = iParam17;
	}
}

void func_162(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1645748.f_6736[iParam0]), iParam1);
}

int func_163(int iParam0, int iParam1)
{
	return BitTest(Global_1645748.f_6736[iParam0], iParam1);
}

int func_164(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_165(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_166()
{
	var uVar0;
	
	func_176(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_175(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_174(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_169(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_168(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_167(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_167(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_168(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_169(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_173(*uParam0);
	iVar1 = func_171(*uParam0);
	if (iParam1 < 1 || iParam1 > func_170(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_170(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_171(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_172(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_172(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_173(int iParam0)
{
	return iParam0 & 15;
}

void func_174(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_175(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_176(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_177()
{
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(iLocal_85, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_121))
				{
					HUD::REMOVE_BLIP(&iLocal_121);
				}
				if (!PED::IS_PED_IN_GROUP(iLocal_85))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_85, func_121());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_85, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_85, 0);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_83))
				{
					iLocal_83 = func_131(Local_93, 1);
				}
				if (((func_13() == 2 && !func_57()) && iLocal_60 != 1) && iLocal_60 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_84))
					{
						iLocal_84 = func_131(Local_97, 0);
						HUD::SET_BLIP_SPRITE(iLocal_84, 269);
						func_178();
					}
				}
				if (iLocal_60 == 1)
				{
					if (!func_60())
					{
						if (iLocal_60 == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_WTA", 4, 0, 0, 0);
						}
						iLocal_174 = func_164(func_166()) + 2;
						if (func_165(func_166()) >= 30)
						{
							iLocal_173 = 0;
							iLocal_174++;
						}
						else
						{
							iLocal_173 = 30;
						}
						iLocal_111 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_59 = 4;
					}
				}
				else if (iLocal_60 == 2)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH2_WTB", 4, 0, 0, 0))
					{
						iLocal_111 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_59 = 4;
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH3_WTC", 4, 0, 0, 0))
					{
						iLocal_111 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_59 = 4;
					}
				}
				else if (iLocal_60 == 5)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH5_WTE", 4, 0, 0, 0))
					{
						iLocal_111 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_59 = 4;
					}
				}
			}
		}
	}
}

void func_178()
{
	if (func_13() == 2)
	{
		if (!Global_31751)
		{
			func_179("CULT_BLIP_HELP", -1);
			Global_31751 = 1;
		}
	}
}

void func_179(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_180()
{
	int iVar0;
	
	switch (iLocal_140)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (iLocal_110 < MISC::GET_GAME_TIMER())
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_STO", 4, 0, 0, 0);
					iLocal_110 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
				}
				if (PED::IS_PED_FACING_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 24f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 30f))
					{
						fLocal_184 = func_147(iLocal_85, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_184 > 5f)
						{
							fLocal_184 = (fLocal_184 - 1f);
						}
						else
						{
							fLocal_184 = (fLocal_184 - 0.5f);
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_184, 2f, 2f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
						iLocal_140++;
					}
				}
				else if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 30f))
				{
					fLocal_184 = func_147(iLocal_85, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_184 = (fLocal_184 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_184, 2f, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
					iLocal_140++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_121))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_121, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_85, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_87 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
					{
						if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 25f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_85);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_87, 0, false))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_87, -1, 0, 2f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
								iLocal_140++;
							}
						}
					}
				}
				else if (!iLocal_141)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (func_1(&uLocal_195, cLocal_178, "REHH5_NOV", 4, 0, 0, 0))
					{
						iLocal_141 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_87 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!PED::IS_PED_INJURED(iLocal_85) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
				{
					if (func_147(iLocal_85, iLocal_87, 1) < 25f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_87) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_85))
							{
								if (func_1(&uLocal_195, cLocal_178, "REHH5_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_87 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_87) < 2.5f && func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 25f)
						{
							if (!func_60())
							{
								if (func_13() == 0)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
								else if (func_13() == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
								else if (func_13() == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 25f)
				{
					if (func_127())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_85, func_121());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_85, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_85, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_85, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 2f, 1, 0);
								func_181();
								iLocal_140++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_85);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_85, func_121());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_85, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_85, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
					}
					else if (!iLocal_142)
					{
						if (!func_60())
						{
							if (!func_187())
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH2", 4, 0, 0, 0);
							}
							iLocal_142 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (func_127())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_85);
						iLocal_111 = 1;
						iLocal_59 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH5_SLW", 4, 0, 0, 0))
						{
							func_59();
						}
					}
					if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) > 100f)
					{
						func_59();
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_85);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
					iLocal_140 = 4;
				}
			}
			break;
	}
}

void func_181()
{
	if (!func_57())
	{
		if (func_13() == 2)
		{
			Global_31749 = 1;
		}
	}
}

float func_182(int iParam0, int iParam1)
{
	return func_147(iParam0, iParam1, 1);
}

void func_183()
{
	int iVar0;
	
	switch (iLocal_140)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (PED::IS_PED_FACING_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 30f))
					{
						fLocal_184 = func_147(iLocal_85, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_184 > 5f)
						{
							fLocal_184 = (fLocal_184 - 1f);
						}
						else
						{
							fLocal_184 = (fLocal_184 - 0.5f);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_85);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2.5f, 0f, 0f, 1f, 5000, 0.1f, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
						iLocal_140++;
					}
				}
				else if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 8f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 30f))
				{
					fLocal_184 = func_147(iLocal_85, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_184 = (fLocal_184 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_184, 1f, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
					iLocal_140++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_121))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_121, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_85, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_87 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
					{
						if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 10f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_85);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_87, 0, false))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_87, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
								iLocal_140++;
							}
						}
					}
				}
				else if (!iLocal_141)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (func_1(&uLocal_195, cLocal_178, "REHH3_NOV", 4, 0, 0, 0))
					{
						iLocal_141 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_87 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!PED::IS_PED_INJURED(iLocal_85) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
				{
					if (func_147(iLocal_85, iLocal_87, 1) < 13f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_87) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_85))
							{
								if (func_1(&uLocal_195, cLocal_178, "REHH3_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_85))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_87 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_87) < 2.5f && func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 15f)
						{
							if (!func_60())
							{
								if (func_13() == 0)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
								else if (func_13() == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
								else if (func_13() == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (func_127())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_85, func_121());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_85, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_85, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_85, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
								func_181();
								iLocal_140++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_85);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_85, func_121());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_85, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_85, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
					}
					else if (!iLocal_142)
					{
						if (!func_60())
						{
							if (!func_187())
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH2", 4, 0, 0, 0);
							}
							iLocal_142 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (func_127())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_85, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_85);
						iLocal_111 = 1;
						iLocal_59 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH3_SLW", 4, 0, 0, 0))
						{
							func_59();
						}
					}
					if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) > 100f)
					{
						func_59();
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_85);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
					iLocal_140 = 4;
				}
			}
			break;
	}
}

void func_184()
{
	int iVar0;
	
	switch (iLocal_140)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (PED::IS_PED_FACING_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 30f))
					{
						fLocal_184 = func_147(iLocal_85, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_184 > 5f)
						{
							fLocal_184 = (fLocal_184 - 1f);
						}
						else
						{
							fLocal_184 = (fLocal_184 - 0.5f);
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_184, 1f, 2f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
						iLocal_140++;
					}
				}
				else if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 8f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 30f))
				{
					fLocal_184 = func_147(iLocal_85, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_184 = (fLocal_184 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_184, 1f, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
					iLocal_140++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_121))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_121, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_85, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_87 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
					{
						if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 10f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_85);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_87, 0, false))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_87, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
								func_54();
								SYSTEM::WAIT(0);
								iLocal_140++;
							}
						}
					}
				}
				else if (!iLocal_141)
				{
					TASK::CLEAR_PED_TASKS(iLocal_85);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (func_1(&uLocal_195, cLocal_178, "REHH2_NOV", 4, 0, 0, 0))
					{
						iLocal_141 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_87 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!PED::IS_PED_INJURED(iLocal_85) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
				{
					if (func_147(iLocal_85, iLocal_87, 1) < 13f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_87) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_85))
							{
								if (func_1(&uLocal_195, cLocal_178, "REHH2_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_85))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_87 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_87) < 2.5f && func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 15f)
						{
							if (!func_60())
							{
								if (func_13() == 0)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
								else if (func_13() == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
								else if (func_13() == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (func_127())
					{
						iLocal_87 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_85, func_121());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_85, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_85, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_85, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
								func_181();
								iLocal_140++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_85);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_85, func_121());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_85, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_85, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
					}
					else if (!iLocal_142)
					{
						if (!func_60())
						{
							if (!func_187())
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH2", 4, 0, 0, 0);
							}
							iLocal_142 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (!iLocal_103)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
					{
						if (!func_60())
						{
							if (func_1(&uLocal_195, cLocal_178, "REHH2_INA", 4, 0, 0, 0))
							{
								iLocal_103 = 1;
							}
						}
					}
				}
				if (func_127())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_85, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_85);
						iLocal_111 = 1;
						iLocal_59 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH2_SLW", 4, 0, 0, 0))
						{
							func_59();
						}
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_85);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
					iLocal_140 = 4;
				}
				if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) > 100f)
				{
					func_59();
				}
			}
			break;
	}
}

void func_185()
{
	int iVar0;
	
	switch (iLocal_140)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 30f))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_85, 5000, 2052, 2);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_87 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_87, 30000, 2054, 2);
							TASK::TASK_PLAY_ANIM(iLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
						}
						iLocal_140++;
					}
					else if (!iLocal_141)
					{
						TASK::CLEAR_PED_TASKS(iLocal_85);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2054, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_121))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_121, true);
			}
			if (func_127())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_87 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_SPEED(iLocal_87) < 10f)
					{
						if (!PED::IS_PED_INJURED(iLocal_85))
						{
							if (PED::IS_PED_FACING_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 150f))
							{
								fLocal_184 = func_147(iLocal_85, PLAYER::PLAYER_PED_ID(), 1);
								if (fLocal_184 > 5f)
								{
									fLocal_184 = (fLocal_184 - 0.5f);
								}
								else
								{
									fLocal_184 = (fLocal_184 - 0.25f);
								}
								TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_87, 10000, 2054, 2);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_87, 0, false))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_87, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
								iLocal_140++;
							}
							else
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_85, iLocal_87, 10000, 2054, 2);
								iLocal_140++;
							}
						}
					}
				}
			}
			else if (!iLocal_141)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_85);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2054, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
					if (!func_60())
					{
						if (!func_187())
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_VEH", 4, 0, 0, 0);
						}
						else
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_VEH2", 4, 0, 0, 0);
						}
						iLocal_141 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_85) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_87) < 2.5f)
				{
					func_141();
					iLocal_140++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_85) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_87) < 2.5f)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH1_ASK", 4, 0, 0, 0))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_85);
						SYSTEM::SETTIMERA(0);
						iLocal_140++;
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_85))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
				}
				if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_87 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
						{
							if (ENTITY::GET_ENTITY_SPEED(iLocal_87) < 2.5f)
							{
								if (!func_60())
								{
									if (func_13() == 0)
									{
										func_1(&uLocal_195, cLocal_178, "REHH1_RPA", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_140++;
									}
									else if (func_13() == 1)
									{
										func_1(&uLocal_195, cLocal_178, "REHH1_RPB", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_140++;
									}
									else if (func_13() == 2)
									{
										func_1(&uLocal_195, cLocal_178, "REHH1_RPC", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_140++;
									}
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_127())
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_85, func_121());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_85, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_85, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_85, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
								iLocal_140++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_85);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_85, func_121());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_85, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_85, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
						else if (!iLocal_142)
						{
							if (!func_60())
							{
								if (!func_187())
								{
									func_1(&uLocal_195, cLocal_178, "REHH1_VEH", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_195, cLocal_178, "REHH1_VEH2", 4, 0, 0, 0);
								}
								iLocal_142 = 1;
							}
						}
					}
					else if (!iLocal_141)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (func_127())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_85, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_85);
						iLocal_111 = 1;
						iLocal_59 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOH", 4, 0, 0, 0))
						{
							func_59();
						}
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_85);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
					iLocal_140 = 5;
				}
				if (func_182(iLocal_85, PLAYER::PLAYER_PED_ID()) > 100f)
				{
					func_59();
				}
			}
			break;
	}
}

void func_186()
{
	int iVar0;
	
	if ((iLocal_158 - iLocal_157) > 1000)
	{
		iLocal_172 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_85, false), 18f, 0, 4);
	}
	if (iLocal_172 != 0)
	{
		iLocal_156++;
		iLocal_157 = MISC::GET_GAME_TIMER();
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
		if (iLocal_156 > iVar0)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_172, true, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_172, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_172, false))
				{
					if (iLocal_60 == 1)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_85))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_85, iLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = MISC::GET_GAME_TIMER();
						iLocal_156 = 0;
					}
					else if (iLocal_60 == 2)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH2_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_85))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_85, iLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = MISC::GET_GAME_TIMER();
						iLocal_156 = 0;
					}
					else if (iLocal_60 == 3)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH3_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_85))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_85, iLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = MISC::GET_GAME_TIMER();
						iLocal_156 = 0;
					}
					else if (iLocal_60 == 5)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH5_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_85))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_85, iLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = MISC::GET_GAME_TIMER();
						iLocal_156 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_183 = MISC::GET_GAME_TIMER();
			if ((iLocal_183 - iLocal_182) > 3500)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_172);
			}
			iLocal_172 = 0;
		}
	}
}

int func_187()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_188()
{
	if (iLocal_60 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_85, false))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3024.265f, 660.8264f, 1.1982f, -3140.823f, 803.707f, 35.131f, 93f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_85)) || func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 12f)
				{
					func_189();
					iLocal_59 = 2;
				}
			}
		}
	}
	else if (iLocal_60 == 2)
	{
		if (!iLocal_167)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_90, 100f, 100f, 100f, false, true, 0) && !PED::IS_PED_INJURED(iLocal_85))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 178.993f, 4413.097f, 73.6132f, 1f, -1, 0.25f, true, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 159.6669f, 4413.197f, 74.8915f, 1f, -1, 0.25f, true, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 142.7866f, 4415.111f, 74.3799f, 1f, -1, 0.25f, true, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
				iLocal_167 = 1;
			}
		}
	}
	else if (iLocal_60 == 5)
	{
		if (!iLocal_167)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_90, 200f, 200f, 200f, false, true, 0) && !PED::IS_PED_INJURED(iLocal_85))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_89);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 3);
				TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0f, false, false, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -337.3163f, 2828.018f, 55.2198f, 2f, -1, 0.25f, true, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -343.4485f, 2826.222f, 54.5089f, 2f, -1, 0.25f, true, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -356.4033f, 2811.062f, 51.5931f, 2f, -1, 0.25f, true, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -365.6846f, 2809.158f, 48.7646f, 2f, -1, 0.25f, true, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -382.4106f, 2818.384f, 44.078f, 2f, -1, 0.25f, true, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -370.3838f, 2866.677f, 41.0979f, 2f, -1, 0.25f, true, 40000f);
				TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_89);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_85, iLocal_89);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_89);
				iLocal_167 = 1;
			}
		}
	}
	if (iLocal_60 != 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_85, false))
			{
				if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_85, 95f, 95f, 50f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_85)) || func_182(PLAYER::PLAYER_PED_ID(), iLocal_85) < 12f)
				{
					func_189();
					iLocal_59 = 2;
				}
			}
		}
	}
}

void func_189()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_120))
	{
		HUD::REMOVE_BLIP(&iLocal_120);
	}
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_121))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_85, false))
			{
				iLocal_121 = func_69(iLocal_85, 0, 145);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_121, false);
			}
		}
		if (!func_222())
		{
			func_197(1);
		}
		func_158(&uLocal_195, 3, iLocal_85, sLocal_179, 0, 1);
	}
	if (func_13() == 0)
	{
		func_158(&uLocal_195, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_13() == 1)
	{
		func_158(&uLocal_195, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_13() == 2)
	{
		func_158(&uLocal_195, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
}

void func_190()
{
	func_192(39, 1);
	func_192(40, 1);
	func_192(41, 1);
	func_192(42, 1);
	func_192(43, 1);
	func_192(44, 1);
	iLocal_85 = PED::CREATE_PED(26, iLocal_100, Local_90, fLocal_96, true, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_100);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_85, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_85, false);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_85, sLocal_181);
	PED::SET_PED_CONFIG_FLAG(iLocal_85, 137, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_85, 206, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_85, 1024, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_85, 65536, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_85, 2, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_85, 17, true);
	PED::SET_PED_MAX_TIME_IN_WATER(iLocal_85, 60f);
	PED::SET_PED_LOD_MULTIPLIER(iLocal_85, 5f);
	if (iLocal_60 == 1)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 2, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 4, 0, 2, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_102, true);
		iLocal_171 = VEHICLE::CREATE_VEHICLE(iLocal_102, -3088.068f, 730.4819f, 20.3028f, 332.2996f, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_171, 150f);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_171, 4, false, false);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_171, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_102);
		TASK::TASK_PLAY_ANIM(iLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
	}
	else if (iLocal_60 == 2)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 2, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 10, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(iLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_93 - Vector(20f, 50f, 50f), Local_93 + Vector(20f, 50f, 50f), false, true, true, true);
		func_191(1);
	}
	else if (iLocal_60 == 3)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 8, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(iLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_93 - Vector(20f, 50f, 50f), Local_93 + Vector(20f, 50f, 50f), false, true, true, true);
	}
	else if (iLocal_60 == 5)
	{
	}
	iLocal_59 = 1;
}

void func_191(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_111978, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_111972 = 1;
	}
	else
	{
		StringCopy(&Global_111978, "NULL", 24);
		Global_111972 = 0;
	}
}

void func_192(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_196(iParam0, 2, 1))
		{
			func_195(iParam0, 2, 1);
		}
	}
	else if (func_196(iParam0, 2, 1))
	{
		func_193(iParam0, 2, 1);
	}
}

void func_193(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100032.f_1392[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_32() == 0)
		{
			iVar0 = func_51(func_194(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, bParam1);
			func_49(func_194(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_112922.f_668[iParam0]), bParam1);
	}
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 10835;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		case 56:
			return 9915;
			break;
		
		case 57:
			return 9917;
			break;
		
		default:
			break;
	}
	return 12581;
}

void func_195(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100032.f_1392[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_32() == 0)
		{
			iVar0 = func_51(func_194(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_49(func_194(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_112922.f_668[iParam0]), iParam1);
	}
}

int func_196(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100032.f_1392[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_32() == 0)
		{
			return BitTest(func_51(func_194(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_112922.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_197(int iParam0)
{
	if (func_200())
	{
		Global_112912 = 1;
		Global_112909 = MISC::GET_GAME_TIMER();
		if (func_37(Global_112911))
		{
			func_198(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_37(Global_112911))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_112922.f_24995.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_179(func_199(iParam0), -1);
					Global_112922.f_24995.f_2++;
					MISC::SET_BIT(&Global_112918, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_112918, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_179(func_199(iParam0), -1);
					Global_112922.f_24995.f_3++;
					MISC::SET_BIT(&Global_112918, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_112918, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_179(func_199(iParam0), -1);
					Global_112922.f_24995.f_4++;
					MISC::SET_BIT(&Global_112918, 2);
				}
			}
			break;
	}
}

char* func_199(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_200()
{
	switch (func_201(&Global_31571, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_201(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97458.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_205(0))
		{
			return 0;
		}
		Global_42566++;
		*uParam0 = Global_42566;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_22691.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_42602 = iParam2;
		Global_42564 = *uParam0;
		Global_42565 = iParam4;
		Global_42563 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_42563 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_42563)
			{
				if (Global_42569[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_42564 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_203(iParam2))
		{
			return 0;
		}
		if (Global_42563 == 8)
		{
			return 0;
		}
		Global_42566++;
		*uParam0 = Global_42566;
		Global_42569[Global_42563 /*4*/] = Global_42566;
		Global_42569[Global_42563 /*4*/].f_1 = iParam1;
		Global_42569[Global_42563 /*4*/].f_2 = iParam2;
		Global_42569[Global_42563 /*4*/].f_3 = 0;
		Global_42563++;
		if (iParam4 != 0)
		{
			func_202(uParam0, iParam4);
		}
	}
	return 2;
}

void func_202(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_42563 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_42563)
	{
		if (Global_42569[iVar0 /*4*/] == *uParam0)
		{
			Global_42569[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_203(int iParam0)
{
	return func_204(iParam0, Global_42602);
}

int func_204(int iParam0, int iParam1)
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

int func_205(int iParam0)
{
	if (Global_42602 == 15)
	{
		return 0;
	}
	if (func_203(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_206()
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_85, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_85, PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
			{
				return 1;
			}
		}
		if (!bLocal_114)
		{
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_85, true), 10f, true) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_85, true) - Vector(10f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_85, true) + Vector(10f, 10f, 10f), false))
			{
				return 1;
			}
		}
		else if (PED::IS_PED_INJURED(iLocal_86) && ENTITY::DOES_ENTITY_EXIST(iLocal_86))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), true) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
			{
				if (!PED::IS_PED_INJURED(iLocal_85))
				{
					AUDIO::PLAY_PAIN(iLocal_85, 6, 0, 0);
				}
				return 1;
			}
		}
		if ((!PED::IS_PED_IN_GROUP(iLocal_85) && PED::IS_PED_FACING_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 90f)) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 50f, 50f, 50f, false, true, 0))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_85) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_85))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_207()
{
	STREAMING::REQUEST_MODEL(iLocal_100);
	STREAMING::REQUEST_ANIM_DICT("random@hitch_lift");
	if (iLocal_60 == 1 || iLocal_60 == 5)
	{
		STREAMING::REQUEST_MODEL(iLocal_102);
	}
	if (iLocal_60 == 1)
	{
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("timer", false, -1);
	}
	else if (iLocal_60 == 3)
	{
		STREAMING::REQUEST_ANIM_DICT("facials@gen_female@base");
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_100) && STREAMING::HAS_ANIM_DICT_LOADED("random@hitch_lift"))
	{
		if (iLocal_60 == 1 || iLocal_60 == 5)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_102))
			{
				bLocal_61 = true;
			}
		}
		else if (iLocal_60 == 3)
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED("facials@gen_female@base"))
			{
				bLocal_61 = true;
			}
		}
		else
		{
			bLocal_61 = true;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_100);
		STREAMING::REQUEST_ANIM_DICT("random@hitch_lift");
		if (iLocal_60 == 1 || iLocal_60 == 5)
		{
			STREAMING::REQUEST_MODEL(iLocal_102);
		}
		else if (iLocal_60 == 3)
		{
			STREAMING::REQUEST_ANIM_DICT("facials@gen_female@base");
		}
	}
}

void func_208()
{
	if (iLocal_60 == 1)
	{
		Local_90 = { -3086.052f, 735.5091f, 20.4883f };
		fLocal_96 = 17.9234f;
		Local_93 = { -1053.344f, -2539.327f, 19.0394f };
		iLocal_100 = joaat("a_m_m_business_01");
		cLocal_178 = "REHH1AU";
		sLocal_179 = "BUSINESSMAN";
		sLocal_181 = "BUSINESSMAN";
		iLocal_102 = joaat("schafter2");
	}
	else if (iLocal_60 == 2)
	{
		Local_90 = { 196.7701f, 4427.757f, 72.2673f };
		fLocal_96 = 75.9173f;
		Local_93 = { 3328.828f, 5154.456f, 17.2894f };
		iLocal_100 = joaat("a_f_y_hiker_01");
		cLocal_178 = "REHH2AU";
		sLocal_179 = "REHH2Hiker";
		sLocal_181 = "REHH2Hiker";
	}
	else if (iLocal_60 == 3)
	{
		Local_90 = { 2745.026f, 4386.827f, 47.8636f };
		fLocal_96 = 19.4143f;
		Local_93 = { 814.455f, 1274.797f, 359.5112f };
		Local_104 = { 804.2382f, 1269.589f, 359.3557f };
		fLocal_107 = 340.7372f;
		iLocal_100 = joaat("a_f_y_hipster_03");
		iLocal_101 = joaat("s_m_m_security_01");
		cLocal_178 = "REHH3AU";
		sLocal_179 = "REHH3Hipster";
		sLocal_181 = "REHH3Hipster";
		sLocal_180 = "REHH3Security";
	}
	else if (iLocal_60 == 5)
	{
		Local_90 = { -324.0379f, 2818.034f, 58.4498f };
		fLocal_96 = 56.5422f;
		Local_93 = { -344.0339f, 634.4108f, 171.2902f };
		iLocal_100 = joaat("ig_bride");
		iLocal_101 = joaat("a_m_y_business_01");
		cLocal_178 = "REHH5AU";
		sLocal_179 = "REHH5Bride";
		sLocal_181 = "REHH5Bride";
		sLocal_180 = "REHH5Groom";
		iLocal_102 = joaat("patriot");
	}
	iLocal_62 = 1;
}

int func_209()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_220())
		{
			return 0;
		}
	}
	if (func_216())
	{
		return 1;
	}
	if (func_210(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_210(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_15(func_13()))
		{
			iVar36 = func_42();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_112922.f_18574[iVar32 /*6*/], 2) && !BitTest(Global_112922.f_18574[iVar32 /*6*/], 3))
				{
					func_211(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_211(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_212(uParam1, "Abigail1", func_214(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 1:
			func_212(uParam1, "Abigail2", func_214(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 2:
			func_212(uParam1, "Barry1", func_214(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 3:
			func_212(uParam1, "Barry2", func_214(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_213(iParam0), 1, 1);
			break;
		
		case 4:
			func_212(uParam1, "Barry3", func_214(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 5:
			func_212(uParam1, "Barry3A", func_214(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 6:
			func_212(uParam1, "Barry3C", func_214(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 7:
			func_212(uParam1, "Barry4", func_214(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_213(iParam0), 0, 0);
			break;
		
		case 8:
			func_212(uParam1, "Dreyfuss1", func_214(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 9:
			func_212(uParam1, "Epsilon1", func_214(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 10:
			func_212(uParam1, "Epsilon2", func_214(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 11:
			func_212(uParam1, "Epsilon3", func_214(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 12:
			func_212(uParam1, "Epsilon4", func_214(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 13:
			func_212(uParam1, "Epsilon5", func_214(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 14:
			func_212(uParam1, "Epsilon6", func_214(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 15:
			func_212(uParam1, "Epsilon7", func_214(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 16:
			func_212(uParam1, "Epsilon8", func_214(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 17:
			func_212(uParam1, "Extreme1", func_214(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 18:
			func_212(uParam1, "Extreme2", func_214(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 19:
			func_212(uParam1, "Extreme3", func_214(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 20:
			func_212(uParam1, "Extreme4", func_214(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 21:
			func_212(uParam1, "Fanatic1", func_214(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_213(iParam0), 1, 0);
			break;
		
		case 22:
			func_212(uParam1, "Fanatic2", func_214(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_213(iParam0), 1, 0);
			break;
		
		case 23:
			func_212(uParam1, "Fanatic3", func_214(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_213(iParam0), 0, 1);
			break;
		
		case 24:
			func_212(uParam1, "Hao1", func_214(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_213(iParam0), 0, 1);
			break;
		
		case 25:
			func_212(uParam1, "Hunting1", func_214(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 26:
			func_212(uParam1, "Hunting2", func_214(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 27:
			func_212(uParam1, "Josh1", func_214(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 28:
			func_212(uParam1, "Josh2", func_214(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_213(iParam0), 1, 1);
			break;
		
		case 29:
			func_212(uParam1, "Josh3", func_214(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_213(iParam0), 1, 1);
			break;
		
		case 30:
			func_212(uParam1, "Josh4", func_214(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 31:
			func_212(uParam1, "Maude1", func_214(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 32:
			func_212(uParam1, "Minute1", func_214(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 33:
			func_212(uParam1, "Minute2", func_214(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 34:
			func_212(uParam1, "Minute3", func_214(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 35:
			func_212(uParam1, "MrsPhilips1", func_214(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 36:
			func_212(uParam1, "MrsPhilips2", func_214(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 37:
			func_212(uParam1, "Nigel1", func_214(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 38:
			func_212(uParam1, "Nigel1A", func_214(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_213(iParam0), 1, 1);
			break;
		
		case 39:
			func_212(uParam1, "Nigel1B", func_214(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_213(iParam0), 1, 1);
			break;
		
		case 40:
			func_212(uParam1, "Nigel1C", func_214(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_213(iParam0), 1, 1);
			break;
		
		case 41:
			func_212(uParam1, "Nigel1D", func_214(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_213(iParam0), 1, 1);
			break;
		
		case 42:
			func_212(uParam1, "Nigel2", func_214(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_213(iParam0), 1, 1);
			break;
		
		case 43:
			func_212(uParam1, "Nigel3", func_214(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_213(iParam0), 1, 1);
			break;
		
		case 44:
			func_212(uParam1, "Omega1", func_214(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 45:
			func_212(uParam1, "Omega2", func_214(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 46:
			func_212(uParam1, "Paparazzo1", func_214(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 47:
			func_212(uParam1, "Paparazzo2", func_214(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 48:
			func_212(uParam1, "Paparazzo3", func_214(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 49:
			func_212(uParam1, "Paparazzo3A", func_214(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 50:
			func_212(uParam1, "Paparazzo3B", func_214(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 51:
			func_212(uParam1, "Paparazzo4", func_214(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 52:
			func_212(uParam1, "Rampage1", func_214(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 54:
			func_212(uParam1, "Rampage3", func_214(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 55:
			func_212(uParam1, "Rampage4", func_214(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 56:
			func_212(uParam1, "Rampage5", func_214(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_213(iParam0), 0, 0);
			break;
		
		case 53:
			func_212(uParam1, "Rampage2", func_214(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_213(iParam0), 1, 0);
			break;
		
		case 57:
			func_212(uParam1, "TheLastOne", func_214(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 58:
			func_212(uParam1, "Tonya1", func_214(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 59:
			func_212(uParam1, "Tonya2", func_214(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 60:
			func_212(uParam1, "Tonya3", func_214(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 61:
			func_212(uParam1, "Tonya4", func_214(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		case 62:
			func_212(uParam1, "Tonya5", func_214(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_213(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_212(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_214(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_215(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_215(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_216()
{
	if (func_219() && !func_220())
	{
		return 1;
	}
	if (func_218() && func_217())
	{
		return 1;
	}
	return 0;
}

bool func_217()
{
	return Global_112640 > 0;
}

int func_218()
{
	if (Global_96902 != -1)
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	if (Global_96902 != -1)
	{
		return BitTest(Global_90768[Global_96902 /*34*/].f_15, 20);
	}
	return 0;
}

int func_220()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_221()
{
	if (!func_203(5))
	{
		return 1;
	}
	if (func_216())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_220())
		{
			return 0;
		}
	}
	if (func_210(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_222()
{
	if ((Global_112911 == func_46() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_112912)
	{
		return 1;
	}
	return 0;
}

void func_223(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_46();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_225(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_112908 = 0;
	func_224();
}

void func_224()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_225(int iParam0)
{
	Global_112911 = iParam0;
}

int func_226(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_151506)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_46();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_254())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_220())
			{
				return 0;
			}
		}
		if (!Global_112922.f_9085)
		{
			return 0;
		}
		if (func_27(0))
		{
			return 0;
		}
		if (func_216())
		{
			return 0;
		}
		if (func_253())
		{
			return 0;
		}
		if (Global_112911 != -1)
		{
			return 0;
		}
		if (func_15(func_13()))
		{
			if (func_210(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_252(iParam3))
		{
			return 0;
		}
		if (func_15(func_13()))
		{
			if (func_251(func_13()) == 4 || func_251(func_13()) == 5)
			{
				return 0;
			}
		}
		if (func_15(func_13()))
		{
			if (!func_250(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_249(Global_112922.f_24995.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_112913) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_248())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_239(4))
		{
			return 0;
		}
		if (!func_203(5))
		{
			return 0;
		}
		if (func_238(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_238(0, 0))
		{
			return 0;
		}
		if (Global_31658)
		{
			return 0;
		}
		if (func_252(30) && !func_238(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_15(func_13()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_112922.f_2363.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_112922.f_2363.f_539.f_2296[iVar4];
				if (func_237(iVar8))
				{
					if (func_228(iVar4))
					{
						if (!func_227(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_13() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_227(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_228(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_112922.f_2363.f_539.f_2296[iParam0];
	return func_229(iVar0);
}

int func_229(int iParam0)
{
	return func_230(iParam0, 1);
}

int func_230(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_237(iParam0))
	{
		return 0;
	}
	func_231(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_231(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_232(func_166(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_232(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_236(iParam0, iParam1))
	{
		iVar0 = func_173(iParam1);
		iVar1 = func_171(iParam0);
		iVar2 = (func_171(iParam0) - func_171(iParam1));
		iVar3 = (func_173(iParam0) - func_173(iParam1));
		iVar4 = (func_235(iParam0) - func_235(iParam1));
		iVar5 = (func_164(iParam0) - func_164(iParam1));
		iVar6 = (func_165(iParam0) - func_165(iParam1));
		iVar7 = (func_234(iParam0) - func_234(iParam1));
	}
	else
	{
		iVar0 = func_173(iParam0);
		iVar1 = func_171(iParam1);
		iVar2 = (func_171(iParam1) - func_171(iParam0));
		iVar3 = (func_173(iParam1) - func_173(iParam0));
		iVar4 = (func_235(iParam1) - func_235(iParam0));
		iVar5 = (func_164(iParam1) - func_164(iParam0));
		iVar6 = (func_165(iParam1) - func_165(iParam0));
		iVar7 = (func_234(iParam1) - func_234(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_170(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_233(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_233(float fParam0, float fParam1, float fParam2)
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

int func_234(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_235(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_236(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_237(iParam1) || !func_237(iParam0))
	{
		return 1;
	}
	iVar0 = func_171(iParam0);
	iVar1 = func_171(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_235(iParam0);
	iVar1 = func_235(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_164(iParam0);
	iVar1 = func_164(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_165(iParam0);
	iVar1 = func_165(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_234(iParam0);
	iVar1 = func_234(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_234(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_165(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_164(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_171(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_173(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_235(iParam0);
	if (iVar5 < 1 || iVar5 > func_170(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_238(int iParam0, bool bParam1)
{
	if (BitTest(Global_112922.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_13();
				if (!func_15(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_247()) || Global_111969) || Global_31514) || func_246()) || func_21(8, -1)) || func_245()) || func_244()) || func_243()) || func_242()) || Global_112922.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_247()) || Global_31514) || func_246()) || func_21(8, -1)) || func_243()) || func_245()) || func_244()) || func_242()) || Global_112922.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_247()) || Global_111969) || Global_31514) || func_246()) || func_21(8, -1)) || func_243()) || func_245()) || func_244()) || func_242()) || Global_112922.f_7688.f_919[iVar0] == 5) || Global_43149 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_247()) || Global_111969) || Global_31514) || func_246()) || func_21(8, -1)) || func_245()) || func_244()) || func_242()) || Global_112922.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_247() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_21(8, -1)) || func_242()) || func_241()) || Global_112922.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_21(8, -1) || func_245()) || func_244()) || func_241()) || func_240())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_247()) || Global_31514) || func_246()) || func_21(8, -1)) || func_244()) || func_243()) || func_242()) || Global_112922.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_247()) || func_244()) || Global_111969) || Global_31514) || func_246()) || Global_43780) || func_21(8, -1)) || func_243()) || func_241()) || func_242()) || Global_112922.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_247()) || Global_111969) || Global_31514) || func_246()) || func_21(8, -1)) || func_243()) || func_241()) || func_245()) || func_244()) || func_242())
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

var func_240()
{
	return Global_100019.f_1;
}

int func_241()
{
	if (Global_96902 != -1)
	{
		return BitTest(Global_90768[Global_96902 /*34*/].f_15, 13);
	}
	return 0;
}

int func_242()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_243()
{
	if (Global_78118)
	{
		return 1;
	}
	else if (Global_62690 && !Global_62696)
	{
		return 1;
	}
	return 0;
}

bool func_244()
{
	return Global_100032.f_376 > 0;
}

bool func_245()
{
	return Global_100032.f_375 > 0;
}

var func_246()
{
	return Global_1575054;
}

int func_247()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97458.f_44 == 1;
	}
	return 0;
}

int func_248()
{
	func_12();
	if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_249(int iParam0)
{
	return func_236(func_166(), iParam0);
}

int func_250(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_13();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_251(int iParam0)
{
	if (!func_15(iParam0))
	{
		return 7;
	}
	return Global_112922.f_7688.f_919[iParam0];
}

int func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_254())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_112922.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_112922.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_253()
{
	int iVar0;
	
	if (Global_31662)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_254()
{
	int iVar0;
	
	if (Global_151761 == 2)
	{
		return 1;
	}
	else if (Global_151761 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_255()
{
	if (iLocal_143)
	{
		func_276(0);
		if (Global_31753)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_275();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		func_191(0);
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		if (CAM::_0xBF72910D0F26F025())
		{
			CAM::_0x247ACBC4ABBC9D1C(false);
		}
		Global_31851[0 /*7*/].f_6 = 0;
		func_267(0, 1, 1, 0, 0, 0, 0);
		func_61();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
		{
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_85, 317, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, false))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_85);
				}
				if (iLocal_60 != 2)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_85);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, joaat("script_task_smart_flee_ped")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, joaat("script_task_smart_flee_ped")) != 0)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_85, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_85, true);
				if (PED::IS_PED_IN_GROUP(iLocal_85))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_85);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
		{
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				if (!PED::IS_PED_FLEEING(iLocal_86))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_86, false);
				}
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (func_222())
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), false))
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, false, 0f, false);
		}
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), false))
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, false, 0f, false);
		}
	}
	func_256(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_256(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_46();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_222())
	{
		func_260(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_112913 = MISC::GET_GAME_TIMER();
		func_259(30000);
		StringCopy(&cVar0, func_258(Global_112911, 1), 64);
		if (func_45(Global_112911) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_112910, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_112908, (MISC::GET_GAME_TIMER() - Global_112909), 0);
	}
	else if (BitTest(Global_112918, 0) && Global_112922.f_24995.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_112918, false);
	}
	func_257(&Global_31571);
	Global_112912 = 0;
	func_225(-1);
}

void func_257(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_42564)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_42563 = 0;
	Global_42565 = 0;
	Global_42602 = 15;
	Global_62693 = 0;
	Global_62694 = 0;
}

char* func_258(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_259(int iParam0)
{
	Global_43153 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_260(int iParam0)
{
	func_261(iParam0, 0, func_266(iParam0));
}

void func_261(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_166();
	func_264(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_263(iParam0, &uVar0);
	Var1 = { func_262(&uVar0) };
}

struct<16> func_262(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_164(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_165(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_234(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_235(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_173(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_171(*uParam0), 64);
	return Var0;
}

void func_263(int iParam0, var uParam1)
{
	Global_112922.f_24995.f_43[iParam0] = *uParam1;
}

void func_264(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_171(*uParam0);
	iVar1 = func_173(*uParam0);
	iVar2 = func_235(*uParam0);
	iVar3 = func_164(*uParam0);
	iVar4 = func_165(*uParam0);
	iVar5 = func_234(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_170(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_170(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_265(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_265(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_176(uParam0, iParam1);
	func_175(uParam0, iParam2);
	func_174(uParam0, iParam3);
	func_168(uParam0, iParam5);
	func_169(uParam0, iParam4);
	func_167(uParam0, iParam6);
}

int func_266(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_267(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_274(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19954.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_10())
			{
				Global_19954.f_1 = 3;
			}
			Global_21285 = 5;
		}
		func_273(1, bParam3, iParam2, 0);
		Global_62702 = 1;
		Global_75030 = 1;
		Global_77856 = 1;
	}
	else
	{
		func_274(0);
		HUD::THEFEED_RESUME();
		Global_62702 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_273(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_271(PLAYER::PLAYER_ID())) && !func_269(PLAYER::PLAYER_ID(), 0)) && !func_268()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_271(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_77856 = 0;
	}
}

bool func_268()
{
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 14);
}

bool func_269(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_270(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853131[iParam0 /*888*/].f_205 == 8;
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

int func_270(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_35();
	}
	if (Global_1575034[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574909[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_271(int iParam0)
{
	if (func_269(iParam0, 0))
	{
		return 1;
	}
	if (func_272())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689224[iParam0 /*451*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_272()
{
	return BitTest(Global_2621446, 3);
}

int func_273(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_274(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7824, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7824, 13);
	}
}

void func_275()
{
	Global_31749 = 0;
	Global_31750 = 0;
	Global_31752 = 0;
	Global_31753 = 0;
	Global_31754 = 0;
}

void func_276(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_192(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_277()
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_70, true);
		iLocal_69 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_73, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_73, true);
			iLocal_69 = 2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_76, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_76, true);
			iLocal_69 = 3;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_79, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_79, true);
			iLocal_69 = 5;
		}
		if (iLocal_69 == 1)
		{
			bLocal_82 = true;
			iLocal_60 = 1;
			return Local_70;
		}
		else if (iLocal_69 == 2)
		{
			bLocal_82 = 2;
			iLocal_60 = 2;
			return Local_73;
		}
		else if (iLocal_69 == 3)
		{
			bLocal_82 = 3;
			iLocal_60 = 3;
			return Local_76;
		}
		else if (iLocal_69 == 5)
		{
			bLocal_82 = 4;
			iLocal_60 = 5;
			return Local_79;
		}
	}
	return 0f, 0f, 0f;
}

