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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	float fLocal_59 = 0f;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	struct<6> Local_64 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 32;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 32;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
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
	int iLocal_143 = 0;
	int iLocal_144[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_202 = 16;
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
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	int iLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_59 = ((0.05f + 0.275f) - 0.01f);
	iLocal_63 = 600000;
	iLocal_367 = -1;
	func_322(ScriptParam_0);
	while (true)
	{
		func_321();
		if (func_314() || !func_313(PLAYER::PLAYER_ID(), 0, 1))
		{
			func_311();
		}
		switch (func_310(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_309() == 2)
				{
					iLocal_144[NETWORK::PARTICIPANT_ID_TO_INT()] = 2;
				}
				else if (func_309() == 6)
				{
					iLocal_144[NETWORK::PARTICIPANT_ID_TO_INT()] = 5;
				}
				break;
			
			case 2:
				if (func_309() == 2)
				{
					if (!func_308())
					{
						if (func_35(&uLocal_177))
						{
						}
					}
					else
					{
						if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 4))
						{
							func_34(1);
							func_33(0);
							func_26();
						}
						func_25(8, 0);
					}
				}
				else if (func_309() == 6)
				{
					iLocal_144[NETWORK::PARTICIPANT_ID_TO_INT()] = 5;
				}
				break;
			
			case 5:
				func_24(&(Local_64.f_3));
				if (func_23(&(Local_64.f_3)))
				{
					iLocal_144[NETWORK::PARTICIPANT_ID_TO_INT()] = 6;
				}
				break;
			
			case 3:
				iLocal_144[NETWORK::PARTICIPANT_ID_TO_INT()] = 6;
			
			case 6:
				func_311();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_309())
			{
				case 0:
					Local_64.f_0 = 2;
					break;
				
				case 2:
					func_22();
					func_2();
					if (func_1())
					{
						Local_64.f_0 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (BitTest(Local_64.f_1, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar2 = false;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_64.f_5.f_2)
		{
			case 0:
				if (!BitTest(Local_64.f_5.f_3, 1))
				{
					bVar0 = false;
					while (bVar0 <= 31)
					{
						Local_64.f_5.f_5[bVar0] = -1;
						Local_64.f_5.f_38[bVar0] = -1;
						bVar0++;
					}
					MISC::SET_BIT(&(Local_64.f_5.f_3), true);
				}
				if (Global_2738934.f_1840)
				{
					MISC::SET_BIT(&(Local_64.f_5.f_3), false);
					Global_2738934.f_1840 = 0;
				}
				if (BitTest(Local_64.f_5.f_3, 1))
				{
					if (BitTest(Local_64.f_5.f_3, 0))
					{
						if (!func_21(&(Local_64.f_5)) || func_20(&(Local_64.f_5), 5000, 0))
						{
							if (Local_64.f_5.f_4 == 0)
							{
								Local_64.f_5.f_72 = 0;
								MISC::CLEAR_BIT(&(Local_64.f_5.f_3), 2);
								MISC::CLEAR_BIT(&(Local_64.f_5.f_3), 3);
							}
							bVar0 = Local_64.f_5.f_4;
							bVar1 = bVar0;
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
							{
								if (BitTest(Global_1845281[bVar0 /*883*/].f_144, 0))
								{
									MISC::SET_BIT(&(Local_64.f_5.f_73), bVar1);
									Local_64.f_5.f_72++;
									if (BitTest(Global_1845281[bVar0 /*883*/].f_144, 6))
									{
										Local_64.f_5.f_5[bVar0] = -1;
									}
								}
							}
							Local_64.f_5.f_4++;
							if (Local_64.f_5.f_4 == 32)
							{
								func_19(&(Local_64.f_5));
								func_18(&(Local_64.f_5), 0, 0);
								if (Local_64.f_5.f_72 >= 1)
								{
									Local_64.f_5.f_2 = 1;
									MISC::CLEAR_BIT(&(Local_64.f_5.f_3), 2);
								}
								Local_64.f_5.f_4 = 0;
							}
						}
					}
				}
				break;
			
			case 1:
				if (Local_64.f_5.f_4 == 0)
				{
					MISC::CLEAR_BIT(&(Local_64.f_5.f_3), 2);
				}
				bVar0 = Local_64.f_5.f_4;
				if (BitTest(Local_64.f_5.f_73, bVar0))
				{
					if (func_313(bVar0, 1, 1))
					{
						if (!BitTest(Global_1845281[bVar0 /*883*/].f_144, 8))
						{
							if (BitTest(Global_1845281[bVar0 /*883*/].f_144, 0))
							{
								if (Local_64.f_5.f_5[bVar0] == -1)
								{
									if (BitTest(Global_1845281[bVar0 /*883*/].f_144, 6))
									{
										Local_64.f_5.f_5[bVar0] = -1;
									}
									bVar2 = func_17(bVar0, &(Local_64.f_5.f_73));
									if (bVar2 > -1)
									{
										Local_64.f_5.f_5[bVar0] = bVar2;
										Local_64.f_5.f_5[bVar2] = bVar0;
										MISC::SET_BIT(&(Local_64.f_5.f_3), 2);
									}
								}
								else
								{
									MISC::SET_BIT(&(Local_64.f_5.f_3), 2);
								}
							}
						}
					}
				}
				Local_64.f_5.f_4++;
				if (Local_64.f_5.f_4 == 32)
				{
					if (BitTest(Local_64.f_5.f_3, 2))
					{
					}
					Local_64.f_5.f_4 = 0;
					Local_64.f_5.f_2 = 2;
					MISC::CLEAR_BIT(&(Local_64.f_5.f_3), 3);
					func_16();
				}
				break;
			
			case 2:
				if (Local_64.f_5.f_4 == 0)
				{
					MISC::CLEAR_BIT(&(Local_64.f_5.f_3), 3);
				}
				bVar0 = Local_64.f_5.f_4;
				if (BitTest(Local_64.f_5.f_73, bVar0))
				{
					if (BitTest(Global_1845281[bVar0 /*883*/].f_144, 0))
					{
						if (func_313(bVar0, 1, 1))
						{
							if (Local_64.f_5.f_38[bVar0] == -1)
							{
								iVar3 = Local_64.f_5.f_5[bVar0];
								if (iVar3 > -1)
								{
									if (BitTest(Global_1845281[iVar3 /*883*/].f_144, 0))
									{
										if (Local_64.f_5.f_38[bVar0] == -1)
										{
											bVar2 = func_10(bVar0, &(Local_64.f_5.f_71));
											if (bVar2 > -1)
											{
												Local_64.f_5.f_38[bVar0] = bVar2;
												Local_64.f_5.f_38[iVar3] = bVar2;
												MISC::SET_BIT(&(Local_64.f_5.f_3), 3);
												func_9(bVar2);
											}
										}
										else if (Local_64.f_5.f_38[bVar0] == Local_64.f_5.f_38[iVar3] || Local_64.f_5.f_38[iVar3] == -1)
										{
											MISC::SET_BIT(&(Local_64.f_5.f_3), 3);
										}
										else if (!BitTest(Global_1845281[bVar0 /*883*/].f_144, 3))
										{
											Local_64.f_5.f_38[bVar0] = Local_64.f_5.f_38[iVar3];
										}
										else if (!BitTest(Global_1845281[iVar3 /*883*/].f_144, 3))
										{
											Local_64.f_5.f_38[iVar3] = Local_64.f_5.f_38[bVar0];
										}
									}
									else
									{
										Local_64.f_5.f_5[bVar0] = -1;
										Local_64.f_5.f_5[iVar3] = -1;
									}
								}
								else
								{
									bVar2 = func_10(bVar0, &(Local_64.f_5.f_71));
									if (bVar2 > -1)
									{
										MISC::SET_BIT(&(Local_64.f_5.f_3), 3);
										Local_64.f_5.f_38[bVar0] = bVar2;
										func_9(bVar2);
									}
								}
							}
							else
							{
								MISC::SET_BIT(&(Local_64.f_5.f_3), 3);
							}
						}
					}
				}
				Local_64.f_5.f_4++;
				if (Local_64.f_5.f_4 == 32)
				{
					if (BitTest(Local_64.f_5.f_3, 3))
					{
						func_3();
						MISC::CLEAR_BIT(&(Local_64.f_5.f_3), false);
						Local_64.f_5.f_2 = 0;
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_64.f_5.f_3), false);
						Local_64.f_5.f_2 = 0;
					}
					Local_64.f_5.f_4 = 0;
				}
				break;
			}
	}
}

void func_3()
{
	struct<2> Var0;
	
	Var0.f_0 = 54884912;
	Var0.f_1 = PLAYER::PLAYER_ID();
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 3, func_4(1, 1), Var0.f_0);
}

int func_4(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (func_313(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
				else if (!func_5(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_5(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_8(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_6(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_6(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_7();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_7()
{
	return Global_1574926;
}

int func_8(var uParam0)
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

void func_9(bool bParam0)
{
	MISC::SET_BIT(&(Local_64.f_2), bParam0);
}

bool func_10(bool bParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	bVar2 = -1;
	iVar3 = Local_64.f_5.f_5[bParam0];
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = (200f * 200f);
	iVar10 = bParam0;
	iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
	if (iVar3 > -1)
	{
		if (iVar3 != bParam0)
		{
			if (Local_64.f_5.f_38[iVar3] == -1)
			{
				iVar12 = iVar3;
				iVar13 = PLAYER::GET_PLAYER_PED(iVar12);
				bVar1 = false;
				while (bVar1 <= 19)
				{
					if (!bVar0)
					{
						if (BitTest(*iParam1, bVar1))
						{
							if (!func_14(bVar1))
							{
								MISC::CLEAR_BIT(iParam1, bVar1);
							}
						}
						if (func_13(bVar1))
						{
							iVar14 = func_12(bVar1);
							if (iVar14 != -1)
							{
								if (Global_2657800.f_87[iVar14] == 0)
								{
									if (!BitTest(*iParam1, bVar1))
									{
										if (!PED::IS_PED_INJURED(iVar11))
										{
											if (!PED::IS_PED_INJURED(iVar13))
											{
												Var7 = { func_11(bVar1) };
												fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar11, true), Var7);
												if (fVar4 > fVar6)
												{
													fVar5 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar13, true), Var7);
													if (fVar5 > fVar6)
													{
														bVar2 = bVar1;
														bVar0 = true;
														MISC::SET_BIT(iParam1, bVar1);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					bVar1++;
				}
			}
			else
			{
				bVar2 = Local_64.f_5.f_38[iVar3];
			}
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= 19)
		{
			if (!bVar0)
			{
				if (func_13(bVar1))
				{
					iVar14 = func_12(bVar1);
					if (iVar14 != -1)
					{
						if (Global_2657800.f_87[iVar14] == 0)
						{
							if (!BitTest(*iParam1, bVar1))
							{
								if (!PED::IS_PED_INJURED(iVar11))
								{
									Var7 = { func_11(bVar1) };
									fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar11, true), Var7);
									if (fVar4 > fVar6)
									{
										bVar2 = bVar1;
										bVar0 = true;
										MISC::SET_BIT(iParam1, bVar1);
									}
								}
							}
						}
					}
				}
			}
			bVar1++;
		}
	}
	return bVar2;
}

Vector3 func_11(bool bParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (bParam0)
	{
		case 0:
			Var0 = { -52.27f, -1733.58f, 28.23f };
			break;
		
		case 1:
			Var0 = { 15.4693f, -1354.067f, 28.315f };
			break;
		
		case 2:
			Var0 = { -1238.39f, -904.58f, 13.27f };
			break;
		
		case 3:
			Var0 = { -724.14f, -912.37f, 20.34f };
			break;
		
		case 4:
			Var0 = { 1145.433f, -972.5638f, 45.6656f };
			break;
		
		case 5:
			Var0 = { -1502.037f, -380.4863f, 39.8563f };
			break;
		
		case 6:
			Var0 = { 364.9397f, 320.9199f, 102.6601f };
			break;
		
		case 7:
			Var0 = { 1162.664f, -338.0286f, 67.4397f };
			break;
		
		case 8:
			Var0 = { 2567.102f, 384.5044f, 107.4621f };
			break;
		
		case 9:
			Var0 = { -2970.054f, 401.0349f, 14.0942f };
			break;
		
		case 10:
			Var0 = { -3042.513f, 599.3762f, 6.5342f };
			break;
		
		case 11:
			Var0 = { -3252.98f, 992.51f, 13.5f };
			break;
		
		case 12:
			Var0 = { -1814.226f, 778.6277f, 136.175f };
			break;
		
		case 13:
			Var0 = { 531.4801f, 2675.505f, 41.4485f };
			break;
		
		case 14:
			Var0 = { 1183.174f, 2693.942f, 36.9294f };
			break;
		
		case 15:
			Var0 = { 1382.555f, 3598.162f, 33.8769f };
			break;
		
		case 16:
			Var0 = { 1959.975f, 3731.025f, 31.3247f };
			break;
		
		case 17:
			Var0 = { 2681.91f, 3292.97f, 55.49f };
			break;
		
		case 18:
			Var0 = { 1687.99f, 4918.174f, 41.0781f };
			break;
		
		case 19:
			Var0 = { 1687.99f, 4918.174f, 41.0781f };
			break;
	}
	return Var0;
}

int func_12(bool bParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (bParam0)
	{
		case 0:
			iVar0 = 17;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 12;
			break;
		
		case 3:
			iVar0 = 16;
			break;
		
		case 4:
			iVar0 = 13;
			break;
		
		case 5:
			iVar0 = 14;
			break;
		
		case 6:
			iVar0 = 9;
			break;
		
		case 7:
			iVar0 = 18;
			break;
		
		case 8:
			iVar0 = 4;
			break;
		
		case 9:
			iVar0 = 11;
			break;
		
		case 10:
			iVar0 = 1;
			break;
		
		case 11:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 19;
			break;
		
		case 13:
			iVar0 = 3;
			break;
		
		case 14:
			iVar0 = 10;
			break;
		
		case 15:
			iVar0 = 0;
			break;
		
		case 16:
			iVar0 = 7;
			break;
		
		case 17:
			iVar0 = 5;
			break;
		
		case 18:
			iVar0 = 15;
			break;
		
		case 19:
			iVar0 = 6;
			break;
	}
	return iVar0;
}

int func_13(bool bParam0)
{
	bool bVar0;
	
	bVar0 = func_12(bParam0);
	if (bVar0 != -1)
	{
		if (BitTest(Global_2657800.f_64, bVar0))
		{
			if (!BitTest(Global_2657800.f_62, bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_15(bParam0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		bVar2 = iVar1;
		if (Local_64.f_5.f_38[iVar1] == bParam0)
		{
			if (func_313(bVar2, 0, 1))
			{
				if (!BitTest(Global_1845281[iVar1 /*883*/].f_144, 4))
				{
					if (BitTest(Global_1845281[iVar1 /*883*/].f_144, 3))
					{
						iVar0 = 1;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_15(var uParam0)
{
	return BitTest(Local_64.f_2, uParam0);
}

void func_16()
{
	Local_64.f_2 = 0;
}

bool func_17(bool bParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = -1;
	bVar0 = false;
	while (bVar0 <= 31)
	{
		if (bVar1 == -1)
		{
			if (bVar0 != bParam0)
			{
				if (BitTest(*uParam1, bVar0))
				{
					if (BitTest(Global_1845281[bVar0 /*883*/].f_144, 0))
					{
						if (!BitTest(Global_1845281[bVar0 /*883*/].f_144, 3))
						{
							if (!BitTest(Global_1845281[bVar0 /*883*/].f_144, 2))
							{
								if (!BitTest(Global_1845281[bVar0 /*883*/].f_144, 8))
								{
									if (Local_64.f_5.f_5[bVar0] == -1)
									{
										bVar1 = bVar0;
									}
								}
							}
						}
					}
				}
			}
		}
		bVar0++;
	}
	return bVar1;
}

void func_18(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_19(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_20(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_21(var uParam0)
{
	return uParam0->f_1;
}

void func_22()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (iLocal_143 == 0)
		{
			MISC::CLEAR_BIT(&uLocal_201, false);
			MISC::SET_BIT(&uLocal_201, true);
		}
		iVar1 = iLocal_143;
		iVar2 = Local_64.f_5.f_5[iLocal_143];
		if (func_313(iVar1, 0, 1))
		{
			if (!BitTest(Global_1845281[iLocal_143 /*883*/].f_144, 4))
			{
				MISC::CLEAR_BIT(&uLocal_201, true);
			}
		}
		if (BitTest(Global_1845281[iLocal_143 /*883*/].f_144, 0))
		{
			if (func_313(iVar1, 0, 1))
			{
				if (iVar2 > -1)
				{
					iVar0 = iVar2;
					if (!func_313(iVar0, 0, 1))
					{
						Local_64.f_5.f_5[iLocal_143] = -1;
					}
				}
			}
			else
			{
				if (Local_64.f_5.f_5[iLocal_143] != -1)
				{
					Local_64.f_5.f_5[iLocal_143] = -1;
				}
				if (Local_64.f_5.f_38[iLocal_143] != -1)
				{
					Local_64.f_5.f_38[iLocal_143] = -1;
				}
			}
		}
		else if (func_313(iVar1, 0, 1))
		{
			if (BitTest(Global_1845281[iLocal_143 /*883*/].f_144, 12))
			{
				if (Local_64.f_5.f_5[iLocal_143] != -1)
				{
					Local_64.f_5.f_5[iLocal_143] = -1;
				}
				if (Local_64.f_5.f_38[iLocal_143] != -1)
				{
					Local_64.f_5.f_38[iLocal_143] = -1;
				}
				if (iVar2 > -1)
				{
					iVar0 = iVar2;
					if (func_313(iVar0, 0, 1))
					{
						Local_64.f_5.f_5[iVar2] = -1;
					}
				}
			}
		}
		iLocal_143++;
		if (iLocal_143 == 32)
		{
			if (BitTest(uLocal_201, 1))
			{
				MISC::SET_BIT(&(Local_64.f_1), false);
			}
			MISC::SET_BIT(&uLocal_201, false);
			iLocal_143 = 0;
		}
	}
}

int func_23(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_24(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_18(uParam0, 0, 0);
		}
	}
}

void func_25(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219, bParam0))
		{
			MISC::SET_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219), bParam0);
		}
	}
	else if (BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219), bParam0);
	}
}

void func_26()
{
	if (!func_32())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574765.f_9)
	{
		return;
	}
	func_27();
}

void func_27()
{
	func_29();
	func_28(0);
}

void func_28(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574765 = 20;
	StringCopy(&(Global_1574765.f_1), "", 32);
	Global_1574765.f_9 = 0;
	if (bVar0)
	{
		Global_1574765.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574765.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574765.f_12), "", 16);
	StringCopy(&(Global_1574765.f_16), "", 64);
	StringCopy(&(Global_1574765.f_32), "", 64);
	Global_1574765.f_52 = 0;
	Global_1574765.f_53 = 0;
	Global_1574765.f_54 = 0;
	Global_1574765.f_55 = -1;
	Global_1574765.f_56 = 0;
	Global_1574765.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_29()
{
	if (!func_31())
	{
	}
	if (func_32())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574765.f_12));
		func_30();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_30()
{
	switch (Global_1574765)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574765.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574765.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			return;
		
		default:
	}
}

bool func_31()
{
	if (!func_32())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574765.f_12));
	func_30();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_32()
{
	if (Global_1574765 == 20)
	{
		return 0;
	}
	return 1;
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 0))
		{
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), false);
		}
	}
	else if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 0))
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), false);
	}
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 4))
		{
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 4);
		}
	}
	else if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 4))
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 4);
	}
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<13> Var5;
	int iVar18;
	
	if (Global_2738934.f_1840)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Global_2738934.f_1840 = 0;
		}
	}
	if (*uParam0 > 0)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (!BitTest(uParam0->f_1, 2))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((func_305(PLAYER::PLAYER_ID(), 1, 0) || func_304()) || func_303() != 0)
				{
					func_301(uParam0);
					MISC::SET_BIT(&(uParam0->f_1), 2);
					MISC::CLEAR_BIT(&(uParam0->f_1), 12);
					MISC::CLEAR_BIT(&uLocal_201, 11);
				}
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (!func_305(PLAYER::PLAYER_ID(), 1, 0))
				{
					if (!func_304())
					{
						if (func_303() == 0)
						{
							MISC::CLEAR_BIT(&(uParam0->f_1), 2);
							MISC::CLEAR_BIT(&(uParam0->f_1), true);
							MISC::CLEAR_BIT(&(uParam0->f_1), false);
							MISC::CLEAR_BIT(&(uParam0->f_1), 3);
							MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 2);
							if (*uParam0 > 1)
							{
								*uParam0 = 1;
							}
						}
					}
				}
			}
		}
		iVar3 = PLAYER::PLAYER_ID();
		if (!BitTest(Global_1845281[iVar3 /*883*/].f_144, 5))
		{
			if (func_305(PLAYER::PLAYER_ID(), 1, 0) || func_304())
			{
				MISC::SET_BIT(&(Global_1845281[iVar3 /*883*/].f_144), 5);
				*uParam0 = 0;
				func_33(0);
				func_300(0);
				func_25(8, 0);
				MISC::CLEAR_BIT(&(uParam0->f_1), false);
				func_301(uParam0);
			}
		}
		if (*uParam0 < 3)
		{
			if (Local_64.f_5.f_5[PLAYER::PLAYER_ID()] == -1)
			{
				if (func_20(&(uParam0->f_6), 15000, 0))
				{
					func_299();
					func_19(&(uParam0->f_6));
					func_18(&(uParam0->f_6), 0, 0);
				}
			}
		}
		if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 9))
		{
			if (func_20(&(uParam0->f_6), 5000, 0))
			{
				func_299();
				func_19(&(uParam0->f_6));
				func_18(&(uParam0->f_6), 0, 0);
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			iVar3 = PLAYER::PLAYER_ID();
			if (!BitTest(Global_1845281[iVar3 /*883*/].f_144, 13))
			{
				if (BitTest(Global_2738934.f_1841, 6) || BitTest(Global_2738934.f_1843, 31))
				{
					if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 0))
					{
						if (!func_298())
						{
							if (!func_305(PLAYER::PLAYER_ID(), 1, 0))
							{
								if (!func_304())
								{
									if (func_303() == 0)
									{
										if (func_174())
										{
											if (func_155(uParam0))
											{
												Global_1919774.f_1 = -1;
												func_33(1);
												func_299();
												if (BitTest(Global_1845281[iVar3 /*883*/].f_144, 5))
												{
													MISC::CLEAR_BIT(&(Global_1845281[iVar3 /*883*/].f_144), 5);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (BitTest(Global_1845281[iVar3 /*883*/].f_144, 0))
				{
					if (!BitTest(uParam0->f_1, 13))
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							func_154("FM_IHELP_ACPI", -1);
							MISC::SET_BIT(&(uParam0->f_1), 13);
						}
					}
					if (BitTest(Global_1919774, 1))
					{
						iVar3 = PLAYER::PLAYER_ID();
						iVar0 = Local_64.f_5.f_5[iVar3];
						iVar1 = Local_64.f_5.f_38[iVar3];
						if (iVar1 > -1)
						{
							iVar2 = func_12(iVar1);
							if (iVar2 == 0)
							{
							}
							func_153(iVar2, 1, func_4(1, 1));
							func_19(&(uParam0->f_6));
							func_18(&(uParam0->f_6), 0, 0);
							func_300(1);
							func_25(8, 1);
							iVar18 = func_152(1191, -1);
							MISC::CLEAR_BIT(&iVar18, true);
							MISC::CLEAR_BIT(&iVar18, 2);
							MISC::CLEAR_BIT(&iVar18, 3);
							MISC::CLEAR_BIT(&iVar18, 5);
							MISC::CLEAR_BIT(&iVar18, 6);
							*uParam0 = 1;
							func_150(1191, iVar18, -1, 1);
							iLocal_367 = func_152(1168, -1);
						}
						else if (!func_21(&(uParam0->f_6)) || func_20(&(uParam0->f_6), 5000, 0))
						{
							func_299();
							func_19(&(uParam0->f_6));
							func_18(&(uParam0->f_6), 0, 0);
						}
					}
					else if (!func_21(&(uParam0->f_6)) || func_20(&(uParam0->f_6), 30000, 0))
					{
						func_299();
						func_19(&(uParam0->f_6));
						func_18(&(uParam0->f_6), 0, 0);
					}
				}
			}
			else
			{
				if (BitTest(Global_1845281[iVar3 /*883*/].f_144, 0))
				{
					MISC::CLEAR_BIT(&(Global_1845281[iVar3 /*883*/].f_144), false);
					MISC::CLEAR_BIT(&(uParam0->f_1), false);
					MISC::CLEAR_BIT(&(Global_1845281[iVar3 /*883*/].f_144), 2);
					MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 16);
					func_33(0);
				}
				if (BitTest(Global_1845281[iVar3 /*883*/].f_144, 12))
				{
					if (Local_64.f_5.f_38[iVar3] == -1 && Local_64.f_5.f_5[iVar3] == -1)
					{
						MISC::CLEAR_BIT(&(Global_1845281[iVar3 /*883*/].f_144), 12);
					}
				}
				else if (!func_21(&(uParam0->f_12)))
				{
					func_18(&(uParam0->f_12), 0, 0);
				}
				else if (func_20(&(uParam0->f_12), 30000, 0))
				{
					MISC::CLEAR_BIT(&(Global_1845281[iVar3 /*883*/].f_144), 13);
					func_19(&(uParam0->f_6));
				}
			}
			break;
		
		case 1:
			iVar3 = PLAYER::PLAYER_ID();
			iVar1 = Local_64.f_5.f_38[iVar3];
			iVar0 = Local_64.f_5.f_5[iVar3];
			func_149();
			if (!BitTest(uParam0->f_1, 0))
			{
				if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 16))
				{
					MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 16);
				}
				if (BitTest(uParam0->f_1, 14))
				{
					MISC::CLEAR_BIT(&(uParam0->f_1), 14);
				}
				if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
				{
					if (iVar1 >= 0)
					{
						uParam0->f_4 = HUD::ADD_BLIP_FOR_COORD(func_11(iVar1));
						HUD::SET_BLIP_ROUTE(uParam0->f_4, true);
						HUD::SET_BLIP_PRIORITY(uParam0->f_4, 9);
					}
				}
				if (iVar0 > -1 && func_148(iVar0, 1))
				{
					iVar4 = iVar0;
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
					{
						if (func_313(bVar4, 0, 1))
						{
							if (!BitTest(Global_1845281[iVar0 /*883*/].f_144, 4) && !BitTest(Global_1845281[iVar0 /*883*/].f_144, 5))
							{
								func_147("FM_HTUT_GO", 0);
								MISC::SET_BIT(&(uParam0->f_1), false);
							}
						}
					}
				}
				if (!BitTest(uParam0->f_1, 0))
				{
					func_147("FM_HTUT_GO", 0);
					MISC::SET_BIT(&(uParam0->f_1), true);
				}
				else
				{
					func_19(&(uParam0->f_10));
					func_18(&(uParam0->f_10), 0, 0);
				}
				MISC::SET_BIT(&(uParam0->f_1), false);
			}
			else
			{
				if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 16))
				{
					MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 16);
				}
				if (BitTest(uParam0->f_1, 14))
				{
					MISC::CLEAR_BIT(&(uParam0->f_1), 14);
				}
				if (!BitTest(Global_1845281[iVar3 /*883*/].f_144, 2))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_11(iVar1)) < (15f * 15f) || (iVar0 == -1 && func_146(25f))) || func_145(1101004800, 1117126656))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_4));
							}
							if (iVar0 > -1 && func_148(iVar0, 1))
							{
								bVar4 = iVar0;
								if (!BitTest(Global_1845281[iVar0 /*883*/].f_144, 2))
								{
									if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar4))
									{
										if (func_313(bVar4, 1, 1))
										{
											if (!func_144())
											{
												Var5 = { func_143(bVar4) };
												if (NETWORK::NETWORK_IS_FRIEND(&Var5))
												{
													func_137("FM_HTUT_FWAT", bVar4, 0, 0);
												}
												else
												{
													func_137("FM_HTUT_WAT", bVar4, 0, 0);
												}
											}
										}
									}
								}
							}
							MISC::SET_BIT(&(Global_1845281[iVar3 /*883*/].f_144), 2);
						}
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!BitTest(uParam0->f_1, 2))
						{
							if ((!BitTest(uLocal_201, 18) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_11(iVar1)) > (35f * 35f)) || (BitTest(uLocal_201, 18) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_11(iVar1)) > (90f * 90f)))
							{
								MISC::CLEAR_BIT(&(uParam0->f_1), false);
								MISC::CLEAR_BIT(&(Global_1845281[iVar3 /*883*/].f_144), 2);
								MISC::CLEAR_BIT(&uLocal_201, 18);
							}
						}
					}
					if (BitTest(Global_1919774, 15))
					{
						if (func_134("FM_HTUT_WAT") || func_134("FM_HTUT_FWAT"))
						{
							func_26();
						}
					}
				}
			}
			if (iVar0 > -1 && func_148(iVar0, 1))
			{
				if (BitTest(Global_1845281[iVar0 /*883*/].f_144, 2))
				{
					if (!BitTest(Global_1845281[iVar3 /*883*/].f_144, 2))
					{
						if (!BitTest(Global_1845281[iVar3 /*883*/].f_144, 12))
						{
							if (func_21(&(uParam0->f_10)))
							{
								if (func_20(&(uParam0->f_10), iLocal_63, 0))
								{
									MISC::SET_BIT(&(Global_1845281[iVar3 /*883*/].f_144), 12);
									MISC::SET_BIT(&(Global_1845281[iVar3 /*883*/].f_144), 13);
									if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
									{
										HUD::REMOVE_BLIP(&(uParam0->f_4));
									}
									func_26();
									*uParam0 = 0;
									MISC::CLEAR_BIT(&(uParam0->f_1), 12);
									MISC::CLEAR_BIT(&uLocal_201, 11);
								}
								else if (!BitTest(uParam0->f_1, 2))
								{
									if (!BitTest(uParam0->f_1, 12))
									{
										if (func_20(&(uParam0->f_10), (iLocal_63 - 60000), 0))
										{
											MISC::SET_BIT(&(uParam0->f_1), 12);
										}
										else if (!BitTest(uLocal_201, 11))
										{
											if (BitTest(Global_1845281[iVar0 /*883*/].f_144, 2))
											{
												if (!func_20(&(uParam0->f_10), (iLocal_63 - 420000), 0))
												{
													func_19(&(uParam0->f_10));
													func_18(&(uParam0->f_10), 0, 0);
													MISC::SET_BIT(&uLocal_201, 11);
													iLocal_63 = 180000;
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!BitTest(Global_1845281[iVar3 /*883*/].f_144, 12))
				{
					if (BitTest(Global_1845281[iVar3 /*883*/].f_144, 2) && BitTest(Global_1845281[iVar0 /*883*/].f_144, 2))
					{
						MISC::CLEAR_BIT(&(uParam0->f_1), 12);
						MISC::CLEAR_BIT(&uLocal_201, 11);
						MISC::SET_BIT(&(uParam0->f_1), 4);
						*uParam0 = 3;
						func_301(uParam0);
						func_18(&uLocal_195, 0, 0);
						MISC::SET_BIT(&(uParam0->f_1), 6);
						func_133(1);
						func_18(&uLocal_195, 0, 0);
						if (func_148(iVar0, 1))
						{
							if (!BitTest(uParam0->f_1, 15))
							{
								if (func_132(iVar0, 0))
								{
									MISC::SET_BIT(&(uParam0->f_1), 15);
								}
							}
						}
					}
					else if (BitTest(Global_1845281[iVar3 /*883*/].f_144, 2))
					{
						if (!BitTest(Global_1845281[iVar0 /*883*/].f_144, 2))
						{
							func_123();
						}
					}
				}
			}
			else if (BitTest(Global_1845281[iVar3 /*883*/].f_144, 2))
			{
				MISC::SET_BIT(&(uParam0->f_1), 4);
				MISC::SET_BIT(&(uParam0->f_1), 5);
				MISC::SET_BIT(&(uParam0->f_1), 6);
				func_301(uParam0);
				func_133(1);
				*uParam0 = 3;
			}
			if (BitTest(uParam0->f_1, 12))
			{
				func_119(iLocal_63, uParam0->f_10);
			}
			break;
		
		case 2:
			if (func_20(&uLocal_195, 1000, 0))
			{
				*uParam0 = 3;
				func_301(uParam0);
				func_133(1);
				func_18(&uLocal_195, 0, 0);
			}
			break;
		
		case 3:
			iVar3 = PLAYER::PLAYER_ID();
			iVar0 = Local_64.f_5.f_5[iVar3];
			iVar1 = Local_64.f_5.f_38[iVar3];
			if (!BitTest(uLocal_201, 8))
			{
				if (func_146(35f))
				{
					iVar2 = func_12(iVar1);
					if (iVar2 == 0)
					{
					}
					func_153(iVar2, 0, func_4(1, 1));
					MISC::SET_BIT(&uLocal_201, 8);
				}
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 16))
			{
				MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 16);
			}
			if (!BitTest(uParam0->f_1, 3))
			{
				if (!BitTest(uParam0->f_1, 14))
				{
					if (!func_118())
					{
						if (iVar0 > -1 && func_148(iVar0, 1))
						{
							bVar4 = iVar0;
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar4))
							{
								if (func_313(bVar4, 1, 1))
								{
									if (!BitTest(Global_1845281[iVar0 /*883*/].f_144, 16))
									{
										Var5 = { func_143(bVar4) };
										if (NETWORK::NETWORK_IS_FRIEND(&Var5))
										{
											func_137("FM_HTUT_FHLD", bVar4, 0, 0);
										}
										else
										{
											func_137("FM_HTUT_HLD", bVar4, 0, 0);
										}
										MISC::SET_BIT(&(uParam0->f_1), 3);
									}
									else if (!BitTest(uParam0->f_1, 14))
									{
										MISC::SET_BIT(&(uParam0->f_1), 14);
										func_137("FM_HTUT_HLC", bVar4, 1, 0);
									}
								}
							}
						}
						if (!BitTest(uParam0->f_1, 3) && !BitTest(uParam0->f_1, 14))
						{
							func_147("FM_HTUT_HLS", 0);
							MISC::SET_BIT(&(uParam0->f_1), 3);
							MISC::SET_BIT(&(Global_1845281[iVar3 /*883*/].f_144), 8);
						}
					}
				}
				else
				{
					iVar3 = PLAYER::PLAYER_ID();
					iVar0 = Local_64.f_5.f_5[iVar3];
					if (iVar0 > -1 && func_148(iVar0, 1))
					{
						if (!BitTest(Global_1845281[iVar0 /*883*/].f_144, 16))
						{
							MISC::CLEAR_BIT(&(uParam0->f_1), 14);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_1), 14);
					}
				}
			}
			else if (func_118())
			{
				if (BitTest(uParam0->f_1, 3))
				{
					MISC::CLEAR_BIT(&(uParam0->f_1), 3);
				}
			}
			else if (iVar0 > -1 && func_148(iVar0, 1))
			{
				if (BitTest(Global_1845281[iVar0 /*883*/].f_144, 16))
				{
					MISC::CLEAR_BIT(&(uParam0->f_1), 3);
				}
			}
			break;
		
		case 99:
			return 1;
			break;
	}
	if (*uParam0 > 0)
	{
		func_117(uParam0);
		func_108(uParam0);
		func_99(uParam0);
		func_96(uParam0);
		if (!func_308())
		{
			if (func_93(uParam0))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_4));
				}
				if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_5));
				}
				if (BitTest(uParam0->f_1, 15))
				{
					iVar0 = Local_64.f_5.f_5[PLAYER::PLAYER_ID()];
					if (func_132(iVar0, 1))
					{
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_92(1);
				}
				if (BitTest(uLocal_201, 12))
				{
					NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
					MISC::CLEAR_BIT(&uLocal_201, 12);
				}
				func_26();
				func_34(1);
				func_300(0);
				func_33(0);
				func_25(8, 0);
				func_91(121, 1, -1, 1);
				func_36(1);
				*uParam0 = 99;
			}
		}
	}
	return 0;
}

void func_36(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1574612)
	{
		if (!func_90())
		{
			iVar0 = 0;
			while (iVar0 <= 10)
			{
				Global_1836944[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_87(PLAYER::PLAYER_ID(), bParam0);
	iVar2 = func_84(iVar1, bParam0);
	if (!func_83(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 10)
		{
			Global_1836944[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		Global_1836944[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 342)
	{
		iVar3 = func_82(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_80(iVar4))
			{
				func_71(iVar4, 1);
			}
		}
		iVar4++;
	}
	if (!func_70(1))
	{
		func_63(func_64(59, 0, 0), 0);
		func_57(func_64(135, 0, 0), 1);
		func_55(func_64(22, 0, 0), func_64(73, 0, 0));
	}
	else
	{
		func_55(0, 0);
	}
	if (func_54())
	{
		if (func_51(77, -1))
		{
			func_50(1);
			func_49(1);
		}
	}
	if (func_48() || func_47())
	{
		func_91(77, 1, -1, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_37(28, 1, 0);
			func_37(29, 1, 0);
			func_37(30, 1, 0);
			func_37(31, 1, 0);
			func_37(32, 1, 0);
			func_37(33, 1, 0);
			func_37(34, 1, 0);
			func_37(35, 1, 0);
			func_37(36, 1, 0);
			func_37(37, 1, 0);
			func_37(38, 1, 0);
			func_37(58, 1, 0);
		}
	}
	if (func_64(21, 0, 0))
	{
		MISC::ENABLE_STUNT_JUMP_SET(0);
	}
	Global_1057442 = 0;
}

void func_37(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_46(iParam0, 0, 0))
		{
			if (iParam2 && Global_101585.f_18[iParam0])
			{
				if (func_45(iParam0) == 3 && !func_44(iParam0))
				{
					func_43(iParam0);
					func_42(iParam0, 0, 0);
					func_39(iParam0, 1, 0);
					func_38(iParam0);
				}
				else
				{
					func_42(iParam0, 1, 0);
					func_38(iParam0);
				}
			}
			else
			{
				func_42(iParam0, 0, 0);
				func_39(iParam0, 1, 0);
				func_38(iParam0);
			}
		}
		else
		{
			func_39(iParam0, 1, 0);
			func_38(iParam0);
		}
	}
	else if (func_46(iParam0, 0, 0))
	{
		func_39(iParam0, 0, 0);
		func_39(iParam0, 1, 0);
		func_38(iParam0);
	}
}

void func_38(int iParam0)
{
	Global_101585.f_205[iParam0] = 1;
	Global_101585.f_204 = 1;
}

void func_39(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_101585.f_1414[iParam0]), bParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_41() == 0)
		{
			iVar0 = func_152(func_40(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, bParam1);
			func_150(func_40(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113969.f_668[iParam0]), bParam1);
	}
}

int func_40(int iParam0)
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
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_41()
{
	return Global_32948;
}

void func_42(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_101585.f_1414[iParam0]), bParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_41() == 0)
		{
			iVar0 = func_152(func_40(iParam0), -1);
			MISC::SET_BIT(&iVar0, bParam1);
			func_150(func_40(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113969.f_668[iParam0]), bParam1);
	}
}

void func_43(int iParam0)
{
	if (Global_101585.f_18[iParam0])
	{
		func_42(iParam0, 10, 1);
		func_42(iParam0, 19, 1);
	}
}

bool func_44(int iParam0)
{
	return func_46(iParam0, 5, 1);
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

int func_46(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_41() == 0)
		{
			return BitTest(func_152(func_40(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

bool func_47()
{
	return Global_1575071;
}

bool func_48()
{
	return Global_1575073;
}

void func_49(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_37(28, bParam0, 0);
	func_37(30, bParam0, 0);
	func_37(31, bParam0, 0);
	func_37(33, bParam0, 0);
	func_37(34, bParam0, 0);
	func_37(38, bParam0, 0);
	func_37(58, bParam0, 0);
}

void func_50(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_37(29, bParam0, 0);
	func_37(32, bParam0, 0);
	func_37(36, bParam0, 0);
	func_37(35, bParam0, 0);
	func_37(37, bParam0, 0);
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_52(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_52(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_53(uParam1));
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_54()
{
	if (!func_90())
	{
		return 0;
	}
	return 1;
}

void func_55(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_37(0, bParam0, 1);
	func_37(1, bParam0, 1);
	func_37(2, bParam0, 1);
	func_37(3, bParam0, 1);
	func_37(4, bParam0, 1);
	func_37(5, bParam0, 1);
	func_37(6, bParam0, 1);
	func_37(7, bParam0, bVar0);
	func_37(8, bParam0, 1);
	func_37(9, bParam0, 1);
	func_37(10, bParam0, 1);
	func_37(11, bParam0, 1);
	func_37(12, bParam0, bVar0);
	func_37(13, bParam0, 1);
	func_37(21, bParam0, 1);
	func_37(14, bParam0, 1);
	func_37(15, bParam0, 1);
	func_37(16, bParam0, 1);
	func_37(17, bParam0, 1);
	func_37(18, bParam0, 1);
	func_37(19, bParam0, 1);
	func_37(20, bParam0, 1);
	func_37(22, bParam0, 1);
	func_37(23, bParam0, 1);
	func_37(24, bParam0, 1);
	func_37(25, bParam0, 1);
	func_37(26, bParam0, 1);
	func_37(27, bParam0, 1);
	func_56(1, !bParam1);
	if (!bVar0)
	{
		func_43(12);
	}
}

void func_56(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_101585.f_9[iParam0] = 1;
	}
	else
	{
		Global_101585.f_9[iParam0] = 0;
	}
}

void func_57(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_62(0);
	if (Global_262145.f_61 == 1 && func_64(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_37(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_44(44))
		{
			func_43(44);
		}
	}
	if (bParam0)
	{
		if (func_58(0) > 1)
		{
			MISC::SET_BIT(&(Global_2738934.f_1850), 10);
		}
	}
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (Global_1938445[iParam0 /*8*/] == -1)
	{
		iVar0 = func_152(func_61(iParam0), -1);
		if (iVar0 == -1)
		{
			func_59(iParam0, 0);
			iVar0 = 0;
		}
		Global_1938445[iParam0 /*8*/] = iVar0;
	}
	return Global_1938445[iParam0 /*8*/];
}

void func_59(int iParam0, int iParam1)
{
	Global_1938445[iParam0 /*8*/] = iParam1;
	func_60(func_61(iParam0), iParam1, -1);
}

void func_60(int iParam0, int iParam1, int iParam2)
{
	func_150(iParam0, iParam1, iParam2, 1);
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12925;
		
		default:
	}
	return 12925;
}

int func_62(bool bParam0)
{
	int iVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!BitTest(Global_2738934.f_1841, 26))
		{
			iVar0 = func_152(1192, -1);
			if (!BitTest(iVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_51(122, -1);
}

void func_63(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_62(0);
	func_37(39, bParam0, 0);
	func_37(40, bParam0, 0);
	func_37(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_37(43, bParam0, 0);
		func_37(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_44(39))
		{
			func_43(39);
		}
		if (!func_44(40))
		{
			func_43(40);
		}
		if (!func_44(41))
		{
			func_43(41);
		}
		if (!func_44(42))
		{
			func_43(42);
		}
		if (!func_44(43))
		{
			func_43(43);
		}
	}
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8337 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_66(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4408 == 1)
		{
			return 1;
		}
	}
	if (func_48() || func_47())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_65())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return BitTest(Global_1836944[iVar1], iVar0);
}

int func_65()
{
	int iVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2738934.f_1846, 23))
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	iVar0 = func_152(1304, -1);
	if (BitTest(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2738934.f_1846), 23);
		return 1;
	}
	return 0;
}

int func_66(int iParam0, int iParam1)
{
	if (!func_54())
	{
		return 0;
	}
	if (func_69())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_67(&(Global_1845281[iParam0 /*883*/].f_819), func_68(iParam1));
}

var func_67(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_68(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		case 177:
			return 39;
		
		case 182:
			return 40;
		
		case 188:
			return 41;
		
		case 190:
			return 42;
		
		case 197:
			return 43;
		
		case 201:
			return 44;
		
		default:
	}
	return 1;
}

bool func_69()
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 3);
}

int func_70(int iParam0)
{
	return 0;
}

void func_71(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_79(-1))
			{
				if (!func_90())
				{
					return;
				}
			}
			if (!func_79(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_308() && !func_78())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_77())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_79(-1))
				{
					if (!func_72())
					{
						return;
					}
				}
			}
		}
		bVar0 = iParam0;
		iVar1 = (bVar0 / 32);
		bVar0 = (bVar0 % 32);
		MISC::SET_BIT(&(Global_1836944[iVar1]), bVar0);
	}
}

int func_72()
{
	int iVar0;
	
	if (func_76(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	iVar0 = func_152(1304, -1);
	if (BitTest(iVar0, 2))
	{
		func_73(1);
		return 1;
	}
	return 0;
}

void func_73(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140, 25))
		{
			func_74(PLAYER::PLAYER_ID(), 12);
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 25);
		}
	}
	else if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140, 25))
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 25);
	}
}

void func_74(int iParam0, int iParam1)
{
	func_75(&(Global_1845281[iParam0 /*883*/].f_819), func_68(iParam1));
}

int func_75(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (!BitTest((*uParam0)[iVar1], bVar2))
	{
		MISC::SET_BIT(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

int func_76(int iParam0)
{
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	return BitTest(Global_1845281[iParam0 /*883*/].f_140, 25);
}

int func_77()
{
	int iVar0;
	
	if (BitTest(Global_2738934.f_1846, 6))
	{
		return 1;
	}
	iVar0 = func_152(1304, -1);
	if (BitTest(iVar0, 0))
	{
		if (!BitTest(Global_2738934.f_1846, 6))
		{
			MISC::SET_BIT(&(Global_2738934.f_1846), 6);
		}
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	return 0;
}

bool func_78()
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 7);
}

bool func_79(int iParam0)
{
	return func_51(123, iParam0);
}

int func_80(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			bVar1 = iParam0;
			bVar1 = (bVar1 % 32);
			iVar0 = func_152(func_81(iParam0), -1);
			if (BitTest(iVar0, bVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1201;
			break;
		
		case 1:
			return 1202;
			break;
		
		case 2:
			return 1203;
			break;
		
		case 3:
			return 1204;
			break;
		
		case 4:
			return 1205;
			break;
		
		case 5:
			return 1207;
			break;
		
		case 6:
			return 3818;
			break;
		
		case 7:
			return 4021;
			break;
		
		case 8:
			return 5475;
			break;
		
		case 9:
			return 10354;
			break;
	}
	return 1201;
}

int func_82(int iParam0)
{
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
		case 78:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_79(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_83(int iParam0)
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	return func_51(119, iParam0);
}

int func_84(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_85(iParam0, 0);
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (func_86(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_86(iVar3) < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return joaat("pyro_sub_bass_synth");
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_87(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_88(iParam0);
}

int func_88(int iParam0)
{
	if (Global_1574633.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_152(640, -1);
			}
			else if (func_89(iParam0))
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_1;
			}
		}
	}
	else
	{
		return func_152(640, -1);
	}
	return 0;
}

int func_89(int iParam0)
{
	if (!func_8(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, iParam0);
}

int func_90()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	return func_51(120, -1);
}

void func_91(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_52(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
	}
}

void func_92(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 17))
		{
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 17);
		}
	}
	else if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 17))
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 17);
	}
}

int func_93(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_64.f_5.f_5[PLAYER::PLAYER_ID()];
	if (BitTest(Global_1845281[NETWORK::PARTICIPANT_ID_TO_INT() /*883*/].f_144, 2))
	{
		if (func_152(1168, -1) > iLocal_367)
		{
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 10);
			if (iVar0 > -1)
			{
				iVar1 = iVar0;
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (func_313(bVar1, 1, 1))
					{
						if (BitTest(Global_1845281[iVar0 /*883*/].f_144, 2))
						{
							Global_1919774.f_1 = iVar0;
							MISC::SET_BIT(&Global_1919774, 14);
						}
					}
				}
			}
			return 1;
		}
	}
	if (*uParam0 > 1)
	{
		if (func_95())
		{
			if (!BitTest(uParam0->f_1, 8))
			{
				if (iVar0 > -1)
				{
					bVar1 = iVar0;
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
					{
						if (func_313(bVar1, 1, 1))
						{
							Global_1919774.f_1 = iVar0;
							MISC::SET_BIT(&Global_1919774, 14);
						}
					}
				}
				return 1;
			}
		}
		else if (func_94())
		{
			if (!BitTest(uParam0->f_1, 8))
			{
				return 1;
			}
		}
	}
	if ((BitTest(uParam0->f_1, 7) && !BitTest(uParam0->f_1, 10)) && !BitTest(uParam0->f_1, 9))
	{
		if (!func_21(&(uParam0->f_16)))
		{
			func_18(&(uParam0->f_16), 0, 0);
		}
		else if (func_20(&(uParam0->f_16), 3000, 0))
		{
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 11);
			return 1;
		}
	}
	return 0;
}

int func_94()
{
	int iVar0;
	
	iVar0 = Local_64.f_5.f_5[PLAYER::PLAYER_ID()];
	if (iVar0 > -1)
	{
		if (BitTest(Global_1845281[iVar0 /*883*/].f_144, 11))
		{
			return 1;
		}
	}
	return 0;
}

int func_95()
{
	int iVar0;
	
	iVar0 = Local_64.f_5.f_5[PLAYER::PLAYER_ID()];
	if (iVar0 > -1)
	{
		if (BitTest(Global_1845281[iVar0 /*883*/].f_144, 10))
		{
			return 1;
		}
	}
	return 0;
}

void func_96(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (BitTest(uParam0->f_1, 6))
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_5))
		{
			if (!func_118())
			{
				iVar0 = Local_64.f_5.f_38[PLAYER::PLAYER_ID()];
				if (iVar0 > -1)
				{
					Var1 = { func_98(iVar0) };
					if (!func_97(Var1, 0f, 0f, 0f, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(uParam0->f_5))
						{
							PATHFIND::SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(true);
							uParam0->f_5 = HUD::ADD_BLIP_FOR_COORD(Var1);
							HUD::SET_BLIP_SPRITE(uParam0->f_5, 52);
							HUD::SET_BLIP_SCALE(uParam0->f_5, 1f);
							HUD::SET_BLIP_PRIORITY(uParam0->f_5, 7);
							HUD::SET_BLIP_ROUTE(uParam0->f_5, true);
						}
					}
				}
			}
		}
		else if (func_118())
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_5));
			}
		}
	}
}

bool func_97(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_98(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			Var0 = { -53.124f, -1756.405f, 28.421f };
			break;
		
		case 1:
			Var0 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 2:
			Var0 = { -1226.464f, -902.5864f, 11.2783f };
			break;
		
		case 3:
			Var0 = { -711.721f, -916.6965f, 18.2145f };
			break;
		
		case 4:
			Var0 = { 1141.36f, -980.8802f, 45.4155f };
			break;
		
		case 5:
			Var0 = { -1491.057f, -383.5728f, 39.1706f };
			break;
		
		case 6:
			Var0 = { 376.6533f, 323.6471f, 102.5664f };
			break;
		
		case 7:
			Var0 = { 1159.542f, -326.6986f, 67.923f };
			break;
		
		case 8:
			Var0 = { 2559.247f, 385.5266f, 107.623f };
			break;
		
		case 9:
			Var0 = { -2973.262f, 390.8184f, 14.0433f };
			break;
		
		case 10:
			Var0 = { -3038.908f, 589.5187f, 6.9048f };
			break;
		
		case 11:
			Var0 = { -3240.317f, 1004.433f, 11.8307f };
			break;
		
		case 12:
			Var0 = { -1822.287f, 788.006f, 137.1859f };
			break;
		
		case 13:
			Var0 = { 544.2802f, 2672.811f, 41.1566f };
			break;
		
		case 14:
			Var0 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			break;
		
		case 15:
			Var0 = { 1394.169f, 3599.86f, 34.0121f };
			break;
		
		case 16:
			Var0 = { 1965.054f, 3740.555f, 31.3448f };
			break;
		
		case 17:
			Var0 = { 2682.003f, 3282.543f, 54.2411f };
			break;
		
		case 18:
			Var0 = { 1698.808f, 4929.198f, 41.0783f };
			break;
		
		case 19:
			Var0 = { 1731.21f, 6411.403f, 34.0372f };
			break;
	}
	return Var0;
}

void func_99(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (BitTest(uParam0->f_1, 4))
			{
				if (!BitTest(uParam0->f_1, 5))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!HUD::IS_PAUSE_MENU_ACTIVE())
						{
							if (func_101())
							{
								uParam0->f_2++;
							}
						}
					}
				}
				else
				{
					uParam0->f_2++;
				}
			}
			break;
		
		case 1:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_101())
					{
						func_154("FHU_HELP1", -1);
						uParam0->f_2++;
						iVar0 = func_152(1191, -1);
						if (!BitTest(iVar0, 1))
						{
							MISC::SET_BIT(&iVar0, true);
							func_150(1191, iVar0, -1, 1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_101())
					{
						if (func_146(1089470464))
						{
							if (!func_100())
							{
								func_154("FHU_HELP5", -1);
								uParam0->f_2++;
							}
							else if (!BitTest(uLocal_201, 7) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 37))
							{
								func_154("FM_PASS_DBL", -1);
								MISC::SET_BIT(&uLocal_201, 7);
							}
						}
					}
				}
			}
			break;
	}
}

bool func_100()
{
	return Global_1574582;
}

int func_101()
{
	if (((((((((((((((!func_313(PLAYER::PLAYER_ID(), 1, 1) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_107(8, -1)) || func_107(15, -1)) || func_106()) || func_107(3, -1)) || HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) || func_305(PLAYER::PLAYER_ID(), 1, 0)) || func_304()) || func_105()) || func_104()) || func_103()) || HUD::IS_PAUSE_MENU_ACTIVE()) || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) || func_102())
	{
		return 0;
	}
	return 1;
}

var func_102()
{
	return BitTest(Global_2738934.f_1847, 12);
}

bool func_103()
{
	return Global_2672855.f_2881.f_582;
}

bool func_104()
{
	return Global_101585.f_394 > 0;
}

bool func_105()
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

var func_106()
{
	return Global_2625288;
}

bool func_107(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

void func_108(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_95())
	{
		if (*uParam0 <= 1)
		{
			if (!BitTest(uParam0->f_1, 8))
			{
				MISC::SET_BIT(&(uParam0->f_1), 8);
			}
		}
	}
	if (func_69())
	{
		if (!func_21(&uLocal_370) || func_20(&uLocal_370, 5000, 0))
		{
			if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 2))
			{
				if (iLocal_367 > -1)
				{
					iVar1 = func_152(1168, -1);
					if (iLocal_367 != iVar1)
					{
						iLocal_367 = iVar1;
					}
					func_19(&uLocal_370);
					func_18(&uLocal_370, 0, 0);
				}
			}
		}
	}
	if (!BitTest(uParam0->f_1, 7))
	{
		if (!func_116())
		{
			iVar0 = func_152(1168, -1);
			if (iLocal_367 > -1 && iVar0 == iLocal_367)
			{
				if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 2) && ((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_hold_up")) == 0 && !BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 16)) && !func_115()))
				{
					MISC::SET_BIT(&(uParam0->f_1), 9);
					MISC::SET_BIT(&(uParam0->f_1), 7);
				}
				else if (*uParam0 >= 1)
				{
					if ((!func_118() && !BitTest(uParam0->f_1, 8)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_hold_up")) == 0)
					{
						MISC::SET_BIT(&(uParam0->f_1), 9);
						MISC::SET_BIT(&(uParam0->f_1), 7);
					}
					else
					{
						MISC::SET_BIT(&(uParam0->f_1), 7);
					}
				}
			}
		}
	}
	else if (BitTest(uParam0->f_1, 10))
	{
		if (func_116())
		{
			if (BitTest(uParam0->f_1, 7))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), 7);
				MISC::CLEAR_BIT(&(uParam0->f_1), 9);
				MISC::CLEAR_BIT(&(uParam0->f_1), 10);
			}
		}
	}
	if (BitTest(uParam0->f_1, 9))
	{
		if (!BitTest(uParam0->f_1, 10))
		{
			if (*uParam0 > 1)
			{
				if (func_146(10f))
				{
					iVar2 = NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_114(), -1, 0);
					if (iVar2 != func_113())
					{
						MISC::CLEAR_BIT(&(uParam0->f_1), 9);
						MISC::SET_BIT(&(uParam0->f_1), 10);
						func_110();
					}
				}
			}
		}
	}
	if (!BitTest(uLocal_201, 12))
	{
		if (func_118())
		{
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
			MISC::SET_BIT(&uLocal_201, 12);
		}
	}
	else if (!func_118())
	{
		NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
		MISC::CLEAR_BIT(&uLocal_201, 12);
	}
	if (func_146(25f))
	{
		if (!func_115())
		{
			func_109(1);
		}
	}
	else if (func_115())
	{
		func_109(0);
	}
}

void func_109(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_2738934.f_1847, 21))
		{
			MISC::SET_BIT(&(Global_2738934.f_1847), 21);
		}
	}
	else if (BitTest(Global_2738934.f_1847, 21))
	{
		MISC::CLEAR_BIT(&(Global_2738934.f_1847), 21);
	}
}

void func_110()
{
	int iVar0;
	
	if (Local_64.f_5.f_38[PLAYER::PLAYER_ID()] > -1)
	{
		iVar0 = func_12(Local_64.f_5.f_38[PLAYER::PLAYER_ID()]);
		func_111(iVar0, 1, func_112(NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_114(), -1, 0)));
	}
}

void func_111(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = -2143033398;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 5, iParam2, Var0.f_0);
	}
}

int func_112(bool bParam0)
{
	var uVar0;
	
	if (func_8(bParam0))
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_113()
{
	return -1;
}

char* func_114()
{
	switch (Global_2698864)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

bool func_115()
{
	return BitTest(Global_2738934.f_1847, 21);
}

int func_116()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = Local_64.f_5.f_38[PLAYER::PLAYER_ID()];
	bVar1 = func_12(iVar0);
	if (BitTest(Global_2657800.f_65, bVar1))
	{
		return 1;
	}
	if (iVar0 > -1)
	{
		if (func_13(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_117(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = Local_64.f_5.f_5[iVar1];
	if (!BitTest(uParam0->f_1, 1) && !BitTest(Global_1845281[iVar1 /*883*/].f_144, 8))
	{
		if (iVar0 > -1)
		{
			if (BitTest(Global_1845281[iVar1 /*883*/].f_144, 6))
			{
				MISC::CLEAR_BIT(&(Global_1845281[iVar1 /*883*/].f_144), 6);
			}
			if (!func_148(iVar0, 1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), false);
				MISC::CLEAR_BIT(&(uParam0->f_1), 3);
			}
		}
	}
	else
	{
		if (*uParam0 < 3)
		{
			if (!BitTest(Global_1845281[iVar1 /*883*/].f_144, 6))
			{
				MISC::SET_BIT(&(Global_1845281[iVar1 /*883*/].f_144), 6);
			}
		}
		else if (BitTest(Global_1845281[iVar1 /*883*/].f_144, 6))
		{
			MISC::CLEAR_BIT(&(Global_1845281[iVar1 /*883*/].f_144), 6);
		}
		if (iVar0 > -1)
		{
			if (func_148(iVar0, 1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), true);
				MISC::CLEAR_BIT(&(uParam0->f_1), false);
				MISC::CLEAR_BIT(&(Global_1845281[iVar1 /*883*/].f_144), 6);
			}
		}
	}
}

int func_118()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { func_98(Local_64.f_5.f_38[PLAYER::PLAYER_ID()]) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_97(Var1, 0f, 0f, 0f, 0))
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
			if (iVar0 != 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var1, true) < 25f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_119(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (func_21(&iParam1))
	{
		iVar0 = (iParam0 - NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam1));
		if (iVar0 >= 0)
		{
			func_120(iVar0, "FM_HTUT_TME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
}

void func_120(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_122(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_121(7, bVar0);
		Global_1670224.f_4714[bVar0] = iParam0;
		StringCopy(&(Global_1670224.f_4714.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4714.f_172[bVar0] = iParam2;
		Global_1670224.f_4714.f_216[bVar0] = iParam3;
		Global_1670224.f_4714.f_183[bVar0] = iParam4;
		Global_1670224.f_4714.f_194[bVar0] = iParam5;
		Global_1670224.f_4714.f_249[bVar0] = iParam6;
		Global_1670224.f_4714.f_260[bVar0] = iParam7;
		Global_1670224.f_4714.f_205[bVar0] = iParam8;
		Global_1670224.f_4714.f_314[bVar0] = iParam9;
		Global_1670224.f_4714.f_325[bVar0] = iParam10;
		Global_1670224.f_4714.f_357[bVar0] = iParam11;
		Global_1670224.f_4714.f_238[bVar0] = iParam12;
		Global_1670224.f_4714.f_271[bVar0] = iParam13;
		Global_1670224.f_4714.f_368[bVar0] = iParam14;
		Global_1670224.f_4714.f_379[bVar0] = iParam15;
		Global_1670224.f_4714.f_390[bVar0] = iParam16;
		Global_1670224.f_4714.f_227[bVar0] = iParam17;
	}
}

void func_121(int iParam0, bool bParam1)
{
	MISC::SET_BIT(&(Global_1670224.f_7064[iParam0]), bParam1);
}

int func_122(int iParam0, int iParam1)
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

void func_123()
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(uLocal_201, 14))
	{
		if (!BitTest(uLocal_201, 15))
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (func_313(iVar1, 1, 1))
				{
					if (iVar1 != PLAYER::PLAYER_ID())
					{
						if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
						{
							if (func_131(iVar1))
							{
								MISC::SET_BIT(&uLocal_201, 15);
							}
						}
					}
				}
				bVar0++;
			}
		}
		else if (func_124(0, 1, 1, 1))
		{
			func_154("FM_IHELP_BLP", -1);
			MISC::SET_BIT(&uLocal_201, 14);
		}
	}
}

int func_124(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_130())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_105())
	{
		return 0;
	}
	if (func_304())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_305(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_129(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_103())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1836444)
	{
		return 0;
	}
	if (func_128())
	{
		return 0;
	}
	if (func_127())
	{
		return 0;
	}
	if (func_126())
	{
		return 0;
	}
	if (Global_76498)
	{
		return 0;
	}
	if (Global_2749856)
	{
		return 0;
	}
	if (func_125())
	{
		return 0;
	}
	return 1;
}

bool func_125()
{
	return Global_2708056;
}

bool func_126()
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_193 != 0;
}

bool func_127()
{
	return Global_2684504.f_693;
}

bool func_128()
{
	return Global_2684504.f_848;
}

int func_129(int iParam0)
{
	if (Global_2657971[iParam0 /*465*/].f_219 == 0)
	{
		return 0;
	}
	return 1;
}

int func_130()
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_131(int iParam0)
{
	return HUD::DOES_BLIP_EXIST(Global_2647061[iParam0]);
}

int func_132(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = iParam0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (func_313(bVar0, 0, 1))
			{
				PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), bVar0, bParam1);
				return 1;
			}
		}
	}
	return 0;
}

void func_133(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 7))
		{
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 7);
		}
	}
	else if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 7))
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 7);
	}
}

int func_134(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_32())
	{
		return 0;
	}
	if (Global_1574765 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_135(sParam0);
}

bool func_135(char* sParam0)
{
	if (!func_32())
	{
		return 0;
	}
	if (Global_1574765 == 11)
	{
		return func_136(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_12));
}

bool func_136(char* sParam0)
{
	if (!func_32())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_16));
}

void func_137(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_138(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), bParam3, 1);
}

int func_138(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (func_142(sParam0, sParam1) && Global_1574765.f_56 == Global_1574765.f_58)
	{
		return 0;
	}
	uVar0 = Global_1574765.f_54;
	func_27();
	Global_1574765 = 9;
	StringCopy(&(Global_1574765.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574765.f_9 = MISC::GET_HASH_KEY(&(Global_1574765.f_1));
	StringCopy(&(Global_1574765.f_12), sParam0, 16);
	StringCopy(&(Global_1574765.f_16), sParam1, 64);
	Global_1574765.f_58 = iParam3;
	Global_1574765.f_56 = iParam3;
	Global_1574765.f_54 = uVar0;
	func_141();
	func_140(bParam2);
	func_139();
	return 1;
}

void func_139()
{
	MISC::SET_BIT(&(Global_1574765.f_59), true);
}

void func_140(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574765.f_59), false);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574765.f_59), false);
}

void func_141()
{
	Global_1574765.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574765.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_142(char* sParam0, char* sParam1)
{
	if (!func_32())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574765.f_16));
}

struct<13> func_143(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = Local_64.f_5.f_5[iVar0];
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (iVar1 > -1 && func_148(iVar1, 1))
			{
				iVar3 = iVar1;
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
				{
					if (func_313(bVar3, 0, 1))
					{
						iVar4 = PLAYER::GET_PLAYER_PED(bVar3);
						if (!PED::IS_PED_INJURED(iVar4))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar4))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(iVar4, false) == iVar2)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_145(float fParam0, float fParam1)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > fParam0)
			{
				if (func_146(fParam1))
				{
					if (!BitTest(uLocal_201, 18))
					{
						MISC::SET_BIT(&uLocal_201, 18);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_146(float fParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 > -1)
	{
		Var1 = { func_98(Local_64.f_5.f_38[iVar0]) };
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VDIST2(Var4, Var1) < (fParam0 * fParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_147(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_135(sParam0))
	{
		return;
	}
	func_27();
	Global_1574765 = 0;
	StringCopy(&(Global_1574765.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574765.f_9 = MISC::GET_HASH_KEY(&(Global_1574765.f_1));
	StringCopy(&(Global_1574765.f_12), sParam0, 16);
	func_141();
	func_140(bParam1);
	func_139();
}

int func_148(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!func_313(iVar0, 0, 1))
	{
		return 0;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845281[iParam0 /*883*/].f_144, 4))
		{
			return 0;
		}
	}
	if (BitTest(Global_1845281[iParam0 /*883*/].f_144, 8))
	{
		return 0;
	}
	if (BitTest(Global_1845281[iParam0 /*883*/].f_144, 5))
	{
		return 0;
	}
	if (BitTest(Global_1845281[iParam0 /*883*/].f_144, 12))
	{
		return 0;
	}
	return 1;
}

void func_149()
{
	if (!BitTest(uLocal_201, 16))
	{
		if (func_124(0, 1, 1, 1))
		{
			func_154("FM_IHELP_INV", 10000);
			MISC::SET_BIT(&uLocal_201, 16);
		}
	}
	if (!BitTest(uLocal_201, 6))
	{
		if (BitTest(uLocal_201, 13))
		{
			if (!func_21(&uLocal_199))
			{
				func_18(&uLocal_199, 0, 0);
			}
			else if (func_20(&uLocal_199, 15000, 0))
			{
				if (func_124(0, 1, 1, 1))
				{
					MISC::SET_BIT(&uLocal_201, 6);
				}
			}
		}
	}
}

void func_150(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_151(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_151(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_53(uParam1));
}

int func_152(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_151(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_153(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = 921195243;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 5, iParam2, Var0.f_0);
	}
}

void func_154(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_155(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 0:
			if (!func_21(&(uParam0->f_14)))
			{
				func_18(&(uParam0->f_14), 0, 0);
			}
			else if (func_20(&(uParam0->f_14), 7000, 0))
			{
				if (func_172())
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 16))
						{
							MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 16);
						}
						if (!func_171(0))
						{
							func_162(19, 30, "", 0, 0, 1, 0);
							func_154("FM_IHELP_QNV", -1);
							uParam0->f_3++;
						}
					}
					else if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 16))
					{
						func_147("FM_IHELP_LCP", 0);
						MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 16);
						if (func_161("FM_IHELP_INV2") || func_161("FM_IHELP_INV"))
						{
							HUD::CLEAR_HELP(true);
						}
					}
				}
			}
			break;
		
		case 1:
			if (func_156(19, 30))
			{
				HUD::CLEAR_HELP(true);
				uParam0->f_3++;
			}
			else if (func_172())
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_134("FM_IHELP_LCP"))
					{
						func_26();
					}
					if ((!func_21(&uLocal_368) || func_20(&uLocal_368, 20000, 0)) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 16))
					{
						if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 16))
						{
							MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 16);
						}
						if (!BitTest(uLocal_201, 16))
						{
							if (!func_161("FM_IHELP_INV"))
							{
								if (!func_161("FM_IHELP_QNV"))
								{
									if (func_101())
									{
										func_154("FM_IHELP_INV", 10000);
										MISC::SET_BIT(&uLocal_201, 16);
									}
								}
							}
						}
						else if (!func_161("FM_IHELP_INV"))
						{
							if (!func_161("FM_IHELP_INV2"))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (func_101())
									{
										func_154("FM_IHELP_INV2", -1);
										func_19(&uLocal_368);
										func_18(&uLocal_368, 0, 0);
									}
								}
							}
						}
					}
				}
				else if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 16))
				{
					func_147("FM_IHELP_LCP", 0);
					MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 16);
					if ((func_161("FM_IHELP_INV2") || func_161("FM_IHELP_INV")) || func_161("FM_IHELP_QNV"))
					{
						HUD::CLEAR_HELP(true);
					}
				}
			}
			else if ((func_161("FM_IHELP_INV2") || func_161("FM_IHELP_INV")) || func_161("FM_IHELP_QNV"))
			{
				HUD::CLEAR_HELP(true);
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_160(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2624658[iVar0 /*46*/].f_8)
	{
		return 0;
	}
	if (!Global_2624658[iVar0 /*46*/].f_2)
	{
		return 0;
	}
	func_157(iVar0);
	Global_2625824 = MISC::GET_GAME_TIMER() + 1500;
	return 1;
}

void func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1680128)
	{
		return;
	}
	if (Global_2624658[iParam0 /*46*/].f_26 != -1)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_2624658[iParam0 /*46*/].f_26);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1680128)
	{
		Global_2624658[iVar0 /*46*/] = { Global_2624658[iVar1 /*46*/] };
		Global_2624658[iVar0 /*46*/] = { Global_2624658[iVar1 /*46*/] };
		iVar0++;
		iVar1++;
	}
	func_159(iVar0);
	Global_1680128 = (Global_1680128 - 1);
	if (Global_1680099)
	{
		if (Global_1680097 > 0)
		{
			func_158();
		}
	}
}

void func_158()
{
	Global_1680099 = 0;
}

void func_159(int iParam0)
{
	Global_2624658[iParam0 /*46*/] = 0;
	Global_2624658[iParam0 /*46*/].f_2 = 0;
	Global_2624658[iParam0 /*46*/].f_3 = 0;
	Global_2624658[iParam0 /*46*/].f_4 = 0;
	Global_2624658[iParam0 /*46*/].f_5 = func_113();
	Global_2624658[iParam0 /*46*/].f_6 = 145;
	Global_2624658[iParam0 /*46*/].f_7 = 1;
	Global_2624658[iParam0 /*46*/].f_8 = -1;
	Global_2624658[iParam0 /*46*/].f_9 = -1;
	StringCopy(&(Global_2624658[iParam0 /*46*/].f_10), "", 64);
	Global_2624658[iParam0 /*46*/].f_26 = -1;
	StringCopy(&(Global_2624658[iParam0 /*46*/].f_27), "", 32);
	Global_2624658[iParam0 /*46*/].f_35 = -1;
	Global_2624658[iParam0 /*46*/].f_36 = -1;
	Global_2624658[iParam0 /*46*/].f_37 = 0;
	Global_2624658[iParam0 /*46*/].f_39 = 0;
	Global_2624658[iParam0 /*46*/].f_40 = -1;
	Global_2624658[iParam0 /*46*/].f_41 = 0;
	Global_2624658[iParam0 /*46*/].f_42 = 0;
	Global_2624658[iParam0 /*46*/].f_43 = 0;
	Global_2624658[iParam0 /*46*/].f_45 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2624658[iParam0 /*46*/].f_38 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1680128)
	{
		if (!Global_2624658[iVar0 /*46*/].f_7)
		{
			if (Global_2624658[iVar0 /*46*/].f_6 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_161(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_162(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_160(iParam0);
	if (bParam5)
	{
		if (iVar0 != -1)
		{
			func_157(iVar0);
		}
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_163(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1, iParam4, iParam6);
}

void func_163(int iParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<46> Var5;
	bool bVar51;
	struct<13> Var52;
	int iVar65;
	
	iVar0 = func_113();
	iVar1 = 145;
	if (bParam2)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	}
	else
	{
		iVar1 = bParam1;
	}
	if (bParam2)
	{
		if (func_170())
		{
			return;
		}
	}
	iVar2 = Global_1680128;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2624658[iVar2 /*46*/] = { Global_2624658[iVar3 /*46*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1680128++;
	if (Global_1680128 > 12)
	{
		Global_1680128 = 12;
	}
	iVar4 = 0;
	if (Global_2624658[1 /*46*/].f_1)
	{
		Global_2624658[0 /*46*/] = { Global_2624658[1 /*46*/] };
		Global_2624658[1 /*46*/] = { Var5 };
		iVar4 = 1;
	}
	if (iVar4 == 0)
	{
		Global_2624658[iVar4 /*46*/].f_1 = uParam10;
	}
	else
	{
		Global_2624658[iVar4 /*46*/].f_1 = 0;
	}
	Global_2624658[iVar4 /*46*/] = 0;
	Global_2624658[iVar4 /*46*/].f_2 = 0;
	Global_2624658[iVar4 /*46*/].f_3 = 0;
	Global_2624658[iVar4 /*46*/].f_4 = 0;
	Global_2624658[iVar4 /*46*/].f_5 = iVar0;
	Global_2624658[iVar4 /*46*/].f_6 = iVar1;
	Global_2624658[iVar4 /*46*/].f_7 = bParam2;
	Global_2624658[iVar4 /*46*/].f_8 = iParam0;
	Global_2624658[iVar4 /*46*/].f_9 = -1;
	StringCopy(&(Global_2624658[iVar4 /*46*/].f_10), sParam3, 64);
	Global_2624658[iVar4 /*46*/].f_26 = -1;
	StringCopy(&(Global_2624658[iVar4 /*46*/].f_27), sParam4, 32);
	Global_2624658[iVar4 /*46*/].f_35 = iParam6;
	Global_2624658[iVar4 /*46*/].f_36 = iParam7;
	Global_2624658[iVar4 /*46*/].f_37 = 0;
	Global_2624658[iVar4 /*46*/].f_38 = NETWORK::GET_NETWORK_TIME();
	Global_2624658[iVar4 /*46*/].f_39 = uParam5;
	Global_2624658[iVar4 /*46*/].f_40 = Global_2625823;
	Global_2624658[iVar4 /*46*/].f_44 = iParam8;
	Global_2624658[iVar4 /*46*/].f_45 = uParam9;
	if (iParam0 == 123 || iParam0 == 234)
	{
		Global_2624658[iVar4 /*46*/].f_9 = func_166();
	}
	else if (iParam0 == 272)
	{
		Global_2624658[iVar4 /*46*/].f_9 = iParam6;
	}
	else if (iParam0 == 212)
	{
		Global_2624658[iVar4 /*46*/].f_9 = iParam6;
	}
	Global_2625823++;
	func_165();
	Global_2624658[iVar4 /*46*/].f_41 = 0;
	Global_2624658[iVar4 /*46*/].f_42 = 0;
	Global_2624658[iVar4 /*46*/].f_43 = 0;
	if (func_164())
	{
		if (bParam2)
		{
			bVar51 = true;
			if (bVar51)
			{
				Var52 = { func_143(iVar0) };
				iVar65 = NETWORK::NETWORK_START_COMMUNICATION_PERMISSIONS_CHECK(&Var52);
				if (iVar65 != -1)
				{
					Global_2624658[iVar4 /*46*/].f_41 = iVar65;
					Global_2624658[iVar4 /*46*/].f_42 = 1;
					Global_2624658[iVar4 /*46*/].f_43 = 0;
				}
			}
		}
	}
}

bool func_164()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_165()
{
	Global_1680101 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 30000);
}

int func_166()
{
	char cVar0[24];
	int iVar6;
	int iVar7;
	var uVar8;
	bool bVar9;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_169() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0) || MISC::ARE_STRINGS_EQUAL(".", &cVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = 0;
	iVar6 = 0;
	while (iVar6 < 7)
	{
		switch (iVar6)
		{
			case 0:
				StringCopy(&cVar0, func_167(135, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_167(136, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_167(137, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_167(138, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_167(139, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_167(140, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_167(141, -1), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0) && !MISC::ARE_STRINGS_EQUAL(".", &cVar0))
		{
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 == 0)
	{
		return -1;
	}
	uVar8 = func_152(12480, -1);
	bVar9 = false;
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		bVar9 = iVar6 * 3;
		if (bVar9 != -1)
		{
			if (!BitTest(uVar8, bVar9))
			{
				return 7;
			}
		}
		iVar6++;
	}
	return 1;
}

char* func_167(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_168(iParam0, iParam1);
	return STATS::STAT_GET_STRING(iVar0, -1);
}

int func_168(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(3, iParam0, func_53(uParam1));
}

struct<6> func_169()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934536.f_10)))
	{
		iVar7 = func_152(12481, -1);
		if (iVar7 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar6 = MISC::GET_CONTENT_ID_INDEX(iVar7);
			if (iVar6 != -1)
			{
				Var0 = { Global_794744.f_154855[Global_794744.f_135107[iVar6 /*13*/].f_10 /*6*/] };
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
			}
		}
		Global_1934536.f_10 = { Var0 };
		return Var0;
	}
	return Global_1934536.f_10;
}

bool func_170()
{
	return Global_1575036 == 10;
}

int func_171(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
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
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_172()
{
	if (func_173() == 0)
	{
		return 1;
	}
	return 0;
}

int func_173()
{
	return Global_1574633.f_18;
}

bool func_174()
{
	var uVar0;
	
	if (!BitTest(uLocal_201, 2))
	{
		if (!BitTest(uLocal_201, 10))
		{
			if (func_296(1103626240))
			{
				MISC::SET_BIT(&uLocal_201, 9);
			}
			MISC::SET_BIT(&uLocal_201, 10);
		}
		else if (!BitTest(uLocal_201, 9))
		{
			if (!BitTest(uLocal_201, 3))
			{
				if (!BitTest(uLocal_201, 5) || (BitTest(uLocal_201, 5) && func_20(&uLocal_197, 60000, 0)))
				{
					if (func_292())
					{
						if (!BitTest(uLocal_201, 4))
						{
							func_286(19, 3, 0);
							func_285(&uLocal_202, 1, 0, "Lamar", 0, 1);
							MISC::SET_BIT(&uLocal_201, 4);
						}
						else
						{
							MISC::SET_BIT(&uVar0, 4);
							MISC::SET_BIT(&uVar0, 7);
							if (func_281(&uLocal_202, 19, "FM_1AU", "FM_HOLD", uVar0, 0))
							{
								MISC::SET_BIT(&uLocal_201, 3);
								MISC::CLEAR_BIT(&uLocal_201, 5);
							}
						}
					}
				}
			}
			else if (!func_298())
			{
				if (func_280())
				{
					MISC::SET_BIT(&uLocal_201, 2);
					func_279(0);
				}
				else
				{
					func_19(&uLocal_197);
					func_18(&uLocal_197, 0, 0);
					MISC::CLEAR_BIT(&uLocal_201, 3);
					MISC::SET_BIT(&uLocal_201, 5);
				}
			}
		}
		else if (func_292())
		{
			if (func_175(19, "CELL_HOLD", 0, 0))
			{
				MISC::SET_BIT(&uLocal_201, 2);
				func_279(0);
			}
		}
	}
	return BitTest(uLocal_201, 2);
}

bool func_175(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_176(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_176(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_177(&uVar0, iParam0, func_278(), sParam1, iVar165, 3, uParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_177(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_277(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_276(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_271(uParam6))
	{
		return 0;
	}
	if (func_268(iVar0, iVar1, iVar2))
	{
		if (func_267())
		{
			return 0;
		}
		func_266();
		return func_184(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_183(iParam4))
	{
		return 0;
	}
	func_178(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_178(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1663588.f_40.f_1 = iParam0;
	Global_1663588.f_40.f_2 = iParam1;
	Global_1663588.f_40.f_3 = iParam2;
	StringCopy(&(Global_1663588.f_40.f_4), sParam3, 16);
	Global_1663588.f_40.f_8 = iParam4;
	Global_1663588.f_40.f_9 = iParam5;
	Global_1663588.f_40.f_14 = uParam6;
	func_179(iParam4);
	func_266();
	Global_1663588.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_179(int iParam0)
{
	if (func_182(iParam0))
	{
		func_181();
		return;
	}
	func_180();
}

void func_180()
{
	Global_1663588.f_40.f_10 = 0;
}

void func_181()
{
	Global_1663588.f_40.f_10 = 1;
}

int func_182(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_183(int iParam0)
{
	return iParam0 > Global_1663588.f_40.f_8;
}

int func_184(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_265();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_262(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_259(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_262(uParam0, sParam3, sParam4);
		}
		return func_242(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_241(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_229(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_228(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_185(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_185(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_227();
	bVar0 = true;
	if (func_187(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_186(120000);
		return 1;
	}
	return 0;
}

void func_186(int iParam0)
{
	Global_1663588.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1663588.f_40.f_12 = 1;
}

int func_187(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_113();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_221(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1663588.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_220(sParam5, bParam6, &iVar3);
	uVar5 = func_218(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_217(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_191(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_190();
	}
	func_227();
	func_189();
	func_188();
	return 1;
}

void func_188()
{
	Global_1663588.f_57 = 0;
	Global_1663588.f_57.f_1 = 0;
}

void func_189()
{
	Global_1663588.f_40 = 3;
}

void func_190()
{
	MISC::SET_BIT(&Global_8800, 8);
}

int func_191(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_192(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9507 = iParam6;
			MISC::SET_BIT(&Global_4543084, false);
		}
		return 1;
	}
	return 0;
}

int func_192(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_210();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20930 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20930 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20930 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4543069 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_209() == 0)
	{
		func_207();
		return 0;
	}
	func_206(Global_4543068);
	StringCopy(&(Global_4541819[Global_4543068 /*104*/]), sParam1, 64);
	Global_4541819[Global_4543068 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4541819[Global_4543068 /*104*/].f_24 = iParam2;
	}
	Global_4541819[Global_4543068 /*104*/].f_25 = iParam7;
	Global_4541819[Global_4543068 /*104*/].f_26 = uParam8;
	Global_4541819[Global_4543068 /*104*/].f_29 = uParam9;
	Global_4541819[Global_4543068 /*104*/].f_30 = uParam12;
	Global_4541819[Global_4543068 /*104*/].f_31 = uParam11;
	Global_4541819[Global_4543068 /*104*/].f_28 = 0;
	Global_4541819[Global_4543068 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_33), sParam4, 64);
	Global_4541819[Global_4543068 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_50), sParam5, 64);
	Global_4541819[Global_4543068 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_83), sParam15, 64);
	func_210();
	switch (iParam16)
	{
		case 3:
			Global_4541819[Global_4543068 /*104*/].f_99[Global_20930] = 1;
			break;
		
		case 0:
			Global_4541819[Global_4543068 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4541819[Global_4543068 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4541819[Global_4543068 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20930)
		{
			case 0:
				func_205(0);
				break;
			
			case 1:
				func_205(1);
				break;
			
			case 2:
				func_205(2);
				break;
			
			case 3:
				func_205(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4543069 = 1;
				break;
			
			case 0:
				Global_4543069 = 1;
				break;
			
			case 2:
				Global_4543069 = 1;
				break;
			
			case 1:
				Global_4543069 = 1;
				break;
			}
	}
	Global_23355[Global_4543068] = 0;
	if (bParam10)
	{
		func_210();
		if (Global_20873)
		{
			StringCopy(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case 0:
					StringCopy(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_204())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20919, true);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_203(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_198(1);
			func_203(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_193(iParam0, sParam1, bVar1, func_197(PLAYER::PLAYER_ID()));
	return 1;
}

void func_193(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	struct<14> Var0;
	
	if (!func_194())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = -1180597171;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1971465.f_7;
	Var0.f_7 = Global_1971465.f_8;
	Var0.f_8 = Global_1971465.f_9;
	Var0.f_9 = Global_1971465.f_10;
	Var0.f_10 = Global_1971465.f_11;
	Var0.f_11 = Global_1971465.f_12;
	Var0.f_12 = Global_1971465.f_13;
	Var0.f_13 = Global_1971465.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1971482 = -1;
	}
}

int func_194()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_113())
	{
		return 0;
	}
	if (func_195(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_195(int iParam0)
{
	return func_196(iParam0, 20);
}

var func_196(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

var func_197(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_206.f_6;
}

void func_198(int iParam0)
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
	
	Global_23354 = 0;
	Global_9405 = iParam0;
	func_202();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_201(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar2 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21149 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_200(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_199(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113969.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113969.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113969.f_14144[iVar3 /*104*/].f_99[Global_20930] == 1)
											{
												Global_23354++;
											}
										}
									}
									iVar3++;
								}
								func_199(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79389)
								{
									iVar4 = 0;
									iVar4 = Global_4541818;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541819[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541819[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541819[iVar5 /*104*/].f_99[Global_20930] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_199(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20930)
									{
										case 0:
											iVar6 = Global_45261;
											break;
										
										case 1:
											iVar6 = Global_45262;
											break;
										
										case 2:
											iVar6 = Global_45263;
											break;
										
										default:
											break;
									}
									func_199(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_199(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_200(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8806);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8801, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_200(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar8 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21149 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_200(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_200(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8807[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8801, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_200(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_199(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_199(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_199(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_200(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_200(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_200(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_200(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_200(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_200(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_201(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_202()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_203(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_204()
{
	return Global_1575083;
}

void func_205(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113969.f_14054[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_206(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_4541819[iParam0 /*104*/].f_18 = iVar0;
	Global_4541819[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4541819[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4541819[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4541819[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4541819[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_207()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4543068 = 11;
	Global_4541819[Global_4543068 /*104*/].f_18 = -1;
	Global_4541819[Global_4543068 /*104*/].f_18.f_1 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_2 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_3 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_208(Global_4541819[iVar2 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
		{
			Global_4543068 = iVar2;
		}
		iVar2++;
	}
	Global_4541819[Global_4543068 /*104*/].f_24 = 1;
}

int func_208(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_209()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4541819[iVar2 /*104*/].f_24 == 0)
		{
			Global_4543068 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4543068 = 11;
	Global_4541819[Global_4543068 /*104*/].f_18 = -1;
	Global_4541819[Global_4543068 /*104*/].f_18.f_1 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_2 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_3 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4541819[iVar2 /*104*/].f_24 == 0 || Global_4541819[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_208(Global_4541819[iVar2 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
			{
				Global_4543068 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4543068 == 11)
	{
		return 0;
	}
	Global_4541819[Global_4543068 /*104*/].f_99[0] = 0;
	Global_4541819[Global_4543068 /*104*/].f_99[1] = 0;
	Global_4541819[Global_4543068 /*104*/].f_99[2] = 0;
	return 1;
}

void func_210()
{
	if (func_201(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_211();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

var func_211()
{
	func_212();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_212()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_215(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_214(PLAYER::PLAYER_PED_ID());
			if (func_213(iVar0) && (!func_201(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_213(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_213(int iParam0)
{
	return iParam0 < 3;
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_215(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_215(int iParam0)
{
	if (func_213(iParam0))
	{
		return func_216(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_216(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_217(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_192(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9507 = iParam10;
			MISC::SET_BIT(&Global_4543084, false);
		}
		return 1;
	}
	return 0;
}

int func_218(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_219(2, iParam1);
	return iParam0;
}

void func_219(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_220(char* sParam0, bool bParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_16;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_16))
	{
		return sLocal_16;
	}
	func_219(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_221(int iParam0)
{
	int iVar0;
	
	iVar0 = func_224(iParam0);
	if (iVar0 == -1)
	{
		func_222(iParam0, 1);
		return 0;
	}
	Global_1681225[iVar0 /*5*/].f_4 = 1;
	return Global_1681225[iVar0 /*5*/].f_2;
}

void func_222(int iParam0, bool bParam1)
{
	if (!func_313(iParam0, 0, 1))
	{
		return;
	}
	if (func_224(iParam0) != -1)
	{
		return;
	}
	if (Global_1681388)
	{
		if (iParam0 == Global_1681388.f_1)
		{
			return;
		}
	}
	if (func_223(iParam0))
	{
		return;
	}
	if (Global_1681426 >= 32)
	{
		return;
	}
	Global_1681393[Global_1681426] = iParam0;
	Global_1681426++;
	if (bParam1)
	{
	}
}

int func_223(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681426)
	{
		if (Global_1681393[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	
	if (!func_313(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1681386 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681386)
	{
		if (Global_1681225[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1681225[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1681225[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_225(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_225(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1681386)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1681225[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1681225[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1681225[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1681225[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1681386)
	{
		Global_1681225[iVar32 /*5*/] = { Global_1681225[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_226(&(Global_1681225[iVar32 /*5*/]));
	Global_1681386 = (Global_1681386 - 1);
}

void func_226(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_113();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_227()
{
	Global_1663588.f_40.f_9 = 4;
}

int func_228(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_227();
	bVar0 = false;
	return func_187(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_229(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_230(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_230(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_113();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_221(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1663588.f_40.f_13))
			{
				return 0;
			}
		}
		Global_23347 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_220(sParam5, bParam6, &iVar3);
	uVar5 = func_218(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_240(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_232(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_190();
	}
	func_231();
	func_189();
	func_188();
	return 1;
}

void func_231()
{
	Global_1663588.f_40.f_9 = 3;
}

int func_232(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_8800, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_234(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9507 = iParam6;
			Global_9410[3 /*6*/] = { func_233(iParam0) };
			Global_9487 = iParam0;
			MISC::SET_BIT(&Global_8800, true);
			MISC::SET_BIT(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_233(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_3;
}

int func_234(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_210();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20930 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20930 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20930 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_239() == 0)
	{
		func_237();
		return 0;
	}
	func_236(Global_23353);
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/]), sParam1, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_24 = iParam2;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_25 = iParam7;
	Global_113969.f_14144[Global_23353 /*104*/].f_26 = uParam8;
	Global_113969.f_14144[Global_23353 /*104*/].f_29 = uParam9;
	Global_113969.f_14144[Global_23353 /*104*/].f_30 = uParam12;
	Global_113969.f_14144[Global_23353 /*104*/].f_31 = uParam11;
	Global_113969.f_14144[Global_23353 /*104*/].f_28 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_33), sParam4, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_50), sParam5, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8800, 10))
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
		Global_9506 = 4;
		func_205(0);
		func_205(2);
		func_205(1);
	}
	else
	{
		func_210();
		switch (iParam16)
		{
			case 3:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[Global_20930] = 1;
				break;
			
			case 0:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20930)
			{
				case 0:
					func_205(0);
					Global_9506 = 0;
					break;
				
				case 1:
					func_205(1);
					Global_9506 = 1;
					break;
				
				case 2:
					func_205(2);
					Global_9506 = 2;
					break;
				
				case 3:
					func_205(3);
					Global_9506 = 3;
					break;
				
				default:
					Global_9506 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8800, 10))
		{
			Global_113969.f_14054[0 /*20*/].f_17 = 1;
			Global_113969.f_14054[1 /*20*/].f_17 = 1;
			Global_113969.f_14054[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113969.f_14054[Global_20930 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113969.f_14054[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113969.f_14054[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113969.f_14054[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_23355[Global_23353] = 0;
	if (bParam10)
	{
		func_210();
		if (Global_20873)
		{
			StringCopy(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case 0:
					StringCopy(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_204())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20919, true);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_203(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_198(1);
			func_203(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_235(iParam0, sParam1, bVar1, func_197(PLAYER::PLAYER_ID()));
	return 1;
}

void func_235(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	struct<14> Var0;
	
	if (!func_194())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = 1654525105;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1971465.f_7;
	Var0.f_7 = Global_1971465.f_8;
	Var0.f_8 = Global_1971465.f_9;
	Var0.f_9 = Global_1971465.f_10;
	Var0.f_10 = Global_1971465.f_11;
	Var0.f_11 = Global_1971465.f_12;
	Var0.f_12 = Global_1971465.f_13;
	Var0.f_13 = Global_1971465.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1971482 = -1;
	}
}

void func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_113969.f_14144[iParam0 /*104*/].f_18 = iVar0;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_237()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_238(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
		{
			Global_23353 = iVar2;
		}
		iVar2++;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_24 = 1;
}

int func_238(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_239()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 0)
		{
			Global_23353 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 0 || Global_113969.f_14144[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_238(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
			{
				Global_23353 = iVar2;
			}
		}
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_23353 == 34)
	{
		return 0;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 0;
	return 1;
}

int func_240(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_8800, 10);
	iVar0 = 3;
	if (func_234(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9507 = iParam10;
			Global_9410[3 /*6*/] = { func_233(iParam0) };
			Global_9487 = iParam0;
			StringCopy(&Global_9488, sParam5, 64);
			MISC::SET_BIT(&Global_8800, true);
			MISC::SET_BIT(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

int func_241(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_231();
	bVar0 = true;
	if (func_230(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_186(120000);
		return 1;
	}
	return 0;
}

int func_242(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_258(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_248(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_247(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_246(1);
		}
		func_245();
		func_189();
		func_244();
		func_243();
		return 1;
	}
	return 0;
}

void func_243()
{
	Global_2749372 = 0;
}

void func_244()
{
	Global_1663588.f_57 = 1;
	Global_1663588.f_57.f_1 = 0;
}

void func_245()
{
	Global_1663588.f_40.f_9 = 1;
}

void func_246(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8802, false);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8802, false);
	}
}

void func_247(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 20);
	}
}

int func_248(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_257(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	Global_2883585 = 0;
	return func_249(sParam3, iParam4, bParam7);
}

int func_249(char* sParam0, int iParam1, bool bParam2)
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_256();
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
		if (func_107(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_255();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, false);
			if (bParam2)
			{
				func_210();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_254())
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
				if (!Global_79389)
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
			if (func_253())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
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
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_252();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_251();
		func_250();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_256();
	}
	return 0;
}

void func_250()
{
	if (!func_194())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

void func_251()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22286 = 1;
}

void func_252()
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	MISC::CLEAR_BIT(&Global_8801, 16);
}

int func_253()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_254()
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
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

void func_255()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

void func_256()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

void func_257(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

int func_258(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_257(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_22334 = 1;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	Global_2883585 = 0;
	return func_249(sParam3, iParam4, bParam7);
}

int func_259(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_261(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_260();
		func_245();
		func_189();
		func_244();
		func_243();
		return 1;
	}
	return 0;
}

void func_260()
{
	Global_23304 = 0;
}

bool func_261(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_257(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 1;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 1;
	Global_22340 = 0;
	StringCopy(&Global_22434, sParam5, 24);
	Global_2883585 = 0;
	return func_249(sParam3, iParam4, bParam8);
}

int func_262(var uParam0, char* sParam1, char* sParam2)
{
	if (func_264(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_263();
		func_189();
		func_244();
		return 1;
	}
	return 0;
}

void func_263()
{
	Global_1663588.f_40.f_9 = 2;
}

bool func_264(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_257(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_249(sParam2, iParam3, 0);
}

void func_265()
{
	Global_1663588.f_55 = Global_1663588.f_40.f_1;
	Global_1663588.f_55.f_1 = Global_1663588.f_40.f_10;
}

void func_266()
{
	Global_1663588.f_40 = 1;
}

bool func_267()
{
	return Global_1663588.f_40 == 1;
}

int func_268(int iParam0, int iParam1, int iParam2)
{
	if (!func_269(iParam0))
	{
		return 0;
	}
	if (Global_1663588.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1663588.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_269(int iParam0)
{
	if (!func_270())
	{
		return 0;
	}
	if (!Global_1663588.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_270()
{
	if (Global_1663588.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_271(var uParam0)
{
	if (func_275())
	{
		return 0;
	}
	if (func_274())
	{
		return 0;
	}
	if (func_171(0))
	{
		return 0;
	}
	if (Global_1574633.f_18 != 0)
	{
		return 0;
	}
	if (Global_1928440 || func_273())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_272())
		{
			return 0;
		}
	}
	return 1;
}

bool func_272()
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1680101);
}

int func_273()
{
	if (Global_4521801.f_945 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_274()
{
	return Global_1663588.f_40 == 3;
}

bool func_275()
{
	return func_253();
}

int func_276(int iParam0, int iParam1, int iParam2)
{
	if (!func_274())
	{
		return 0;
	}
	return func_268(iParam0, iParam1, iParam2);
}

int func_277(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

char* func_278()
{
	return "TXTMSG";
}

void func_279(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 28);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 28);
	}
}

bool func_280()
{
	return Global_1663588.f_57.f_1;
}

int func_281(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_283())
	{
		return 0;
	}
	if (func_282())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_177(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

bool func_282()
{
	return Global_2746025.f_1;
}

int func_283()
{
	if (Global_1663776.f_2)
	{
		return 1;
	}
	return func_284();
}

bool func_284()
{
	return func_275();
}

void func_285(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
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

void func_286(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_9486 = iParam0;
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		func_210();
		if (iParam1 == 4)
		{
			func_291(iParam0, 0, 1);
			func_291(iParam0, 1, 1);
			func_291(iParam0, 2, 1);
			func_290(iParam0, 0, 1);
			func_290(iParam0, 1, 1);
			func_290(iParam0, 2, 1);
		}
		else
		{
			if (func_289(iParam0, iParam1) == 1 && func_288(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_291(iParam0, iVar0, 1);
			func_290(iParam0, iVar0, 1);
			if (iParam0 == 172 && !BitTest(Global_2738934.f_6969, 4))
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_79389)
			{
				if (iParam1 != 4)
				{
					if (Global_20930 != iParam1)
					{
						Global_9459[iParam1 /*4*/] = { func_233(iParam0) };
						Global_9476[iParam1] = 1;
						Global_9481[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20930)
					{
					}
					else
					{
						Global_9410[1 /*6*/] = { func_233(iParam0) };
						Global_9410[1 /*6*/].f_5 = iParam1;
						func_287();
					}
				}
				else
				{
					Global_9410[1 /*6*/] = { func_233(iParam0) };
					Global_9410[1 /*6*/].f_5 = iParam1;
					func_287();
				}
			}
			else
			{
				Global_9410[1 /*6*/] = { func_233(iParam0) };
				Global_9410[1 /*6*/].f_5 = iParam1;
				func_287();
			}
		}
	}
}

void func_287()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_9486 /*29*/].f_7)), 64);
	if (Global_9505 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_9410[1 /*6*/])), 64);
		sVar32 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_9410[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8800, false);
}

int func_288(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

int func_289(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_12[iParam1];
}

void func_290(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_291(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_292()
{
	if (func_105())
	{
		return 0;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_295())
	{
		return 0;
	}
	if (func_130())
	{
		return 0;
	}
	if (func_305(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 0;
	}
	if (func_304())
	{
		return 0;
	}
	if (func_103())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_272())
	{
		return 0;
	}
	if (func_294())
	{
		return 0;
	}
	if (func_293(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	return 1;
}

bool func_293(int iParam0, int iParam1)
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_219, iParam1);
}

bool func_294()
{
	return Global_2685444.f_2847.f_42;
}

int func_295()
{
	if (Global_20930.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_296(float fParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (func_313(iVar1, 1, 1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (func_297(iVar1))
					{
						if (SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true)) < (fParam0 * fParam0))
						{
							return 1;
						}
					}
				}
			}
			bVar0++;
		}
	}
	return 0;
}

bool func_297(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_144, 28);
}

bool func_298()
{
	return func_274();
}

void func_299()
{
	struct<4> Var0;
	
	Var0.f_0 = 27445046;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = MISC::GET_FRAME_COUNT();
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, func_4(1, 1), Var0.f_0);
}

void func_300(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 3))
		{
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 3);
		}
	}
	else if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 3))
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 3);
	}
}

void func_301(var uParam0)
{
	if (func_134("FM_HTUT_GOP"))
	{
		func_302("FM_HTUT_GOP");
	}
	if (func_134("FM_HTUT_GO"))
	{
		func_302("FM_HTUT_GO");
	}
	if (func_134("FM_HTUT_WAT"))
	{
		func_302("FM_HTUT_WAT");
	}
	if (func_134("FM_HTUT_HLD"))
	{
		func_302("FM_HTUT_HLD");
	}
	if (func_134("FM_HTUT_HLS"))
	{
		func_302("FM_HTUT_HLS");
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_4));
	}
}

void func_302(char* sParam0)
{
	bool bVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_32())
	{
		if (Global_1574765 == 11)
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
			{
				return;
			}
			bVar0 = MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_16));
		}
		else
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
			{
				return;
			}
			bVar0 = MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_12));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_27();
}

int func_303()
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_194;
}

bool func_304()
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 0);
}

int func_305(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_306(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845281[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_306(int iParam0)
{
	return func_307(iParam0);
}

var func_307(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

int func_308()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	return func_51(121, -1);
}

int func_309()
{
	return Local_64.f_0;
}

int func_310(int iParam0)
{
	return iLocal_144[iParam0];
}

void func_311()
{
	PATHFIND::SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(false);
	func_26();
	func_25(8, 0);
	NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
	if (func_297(PLAYER::PLAYER_ID()))
	{
		func_279(0);
	}
	func_312();
}

void func_312()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_313(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_314()
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_320())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_319())
	{
		return 1;
	}
	if (func_318(159))
	{
		if (!func_317())
		{
			return 1;
		}
	}
	if (func_318(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_315() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_315()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_315()
{
	switch (func_41())
	{
		case 0:
			return func_316();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_316()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_317()
{
	return Global_2684504.f_700;
}

int func_318(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_319()
{
	return Global_2696172;
}

bool func_320()
{
	return Global_2684504.f_695;
}

void func_321()
{
	SYSTEM::WAIT(0);
}

void func_322(struct<21> Param0)
{
	func_326(func_327(Param0.f_0), Param0);
	func_324(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_64, 79, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&iLocal_144, 33, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_323())
	{
		func_311();
	}
	MISC::CLEAR_BIT(&Global_1919774, true);
	MISC::CLEAR_BIT(&Global_1919774, 15);
	MISC::CLEAR_BIT(&Global_1919774, 14);
	func_25(8, 1);
	if (!func_297(PLAYER::PLAYER_ID()))
	{
		func_279(1);
	}
}

int func_323()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_320())
		{
			return 0;
		}
		if (func_318(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_324(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_312();
			}
			else
			{
				return 0;
			}
		}
		if (!func_325(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_312();
					}
					else
					{
						return 0;
					}
				}
				if (func_320())
				{
					if (!bParam2)
					{
						func_312();
					}
					else
					{
						return 0;
					}
				}
				if (func_318(157))
				{
					if (!bParam2)
					{
						func_312();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_312();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574667 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_312();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_312();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_325(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_326(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_312();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_327(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 197:
			return 32;
		
		case 198:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 209:
			return 32;
		
		case 210:
			return 32;
		
		case 199:
			return 32;
		
		case 200:
			return 32;
		
		case 204:
			return 32;
		
		case 202:
			return 32;
		
		case 203:
			return 32;
		
		case 207:
			return 32;
		
		case 208:
			return 32;
		
		case 205:
			return 32;
		
		case 206:
			return 32;
		
		case 211:
			return 32;
		
		case 212:
			return 32;
		
		case 213:
			return 32;
		
		case 214:
			return 32;
		
		case 215:
			return 2;
		
		case 220:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 4;
		
		case 218:
			return 2;
		
		case 219:
			return 2;
		
		case 201:
			return 1;
		
		case 221:
			return 2;
		
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
			return 0;
		
		case 243:
			return 1;
		
		case 228:
			return 4;
		
		case 231:
			return 4;
		
		case 232:
			return 1;
		
		case 233:
			return 1;
		
		case 239:
			return 1;
		
		case 235:
			return 2;
		
		case 240:
			return 1;
		
		case 236:
			return 1;
		
		case 234:
			return 2;
		
		case 237:
			return 8;
		
		case 238:
			return 8;
		
		case 241:
			return 1;
		
		case 242:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 179:
			return 1;
		
		case 196:
			return 1;
		
		case 229:
			return 16;
		
		case 230:
			return 32;
		
		default:
	}
	switch (func_328(func_329(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 314:
			return 0;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		case 337:
			return 0;
		
		case 338:
			return 0;
		
		case 339:
			return 0;
		
		case 340:
			return 0;
		
		default:
	}
	return -1;
}

int func_329(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 215:
			return 15;
		
		case 222:
			return 8;
		
		case 216:
			return 14;
		
		case 220:
			return 122;
		
		case 223:
			return 1;
		
		case 221:
			return 5;
		
		case 224:
			return 6;
		
		case 217:
			return 11;
		
		case 225:
			return 0;
		
		case 226:
			return 2;
		
		case 218:
			return 13;
		
		case 227:
			return 3;
		
		case 219:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 314;
		
		case 176:
			return 315;
		
		case 177:
			return 316;
		
		case 178:
			return 317;
		
		case 179:
			return 318;
		
		case 180:
			return 320;
		
		case 181:
			return 322;
		
		case 182:
			return 323;
		
		case 183:
			return 324;
		
		case 184:
			return 325;
		
		case 185:
			return 326;
		
		case 186:
			return 327;
		
		case 187:
			return 328;
		
		case 188:
			return 329;
		
		case 189:
			return 330;
		
		case 190:
			return 331;
		
		case 191:
			return 332;
		
		case 192:
			return 333;
		
		case 193:
			return 337;
		
		case 194:
			return 338;
		
		case 195:
			return 339;
		
		case 196:
			return 340;
		
		default:
	}
	if (bParam1)
	{
	}
	return 343;
}

