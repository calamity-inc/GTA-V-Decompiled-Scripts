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
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_41[2] = { 0, 0 };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94[2] = { 0, 0 };
	int iLocal_97[2] = { 0, 0 };
	int iLocal_100[2] = { 0, 0 };
	int iLocal_103[2] = { 0, 0 };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	struct<3> Local_114 = { 0, 0, 0 } ;
	struct<3> Local_117 = { 0, 0, 0 } ;
	struct<3> Local_120 = { 0, 0, 0 } ;
	struct<3> Local_123[2];
	struct<3> Local_130 = { 0, 0, 0 } ;
	float fLocal_133 = 0f;
	char* sLocal_134 = NULL;
	var uLocal_135 = 16;
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
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_328[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_336 = 0;
	int iLocal_337[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_345[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_353[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_361[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_369[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_377[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402[2] = { 0, 0 };
	int iLocal_405[2] = { 0, 0 };
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431[2] = { 0, 0 };
	int iLocal_434[2] = { 0, 0 };
	int iLocal_437[2] = { 0, 0 };
	int iLocal_440[2] = { 0, 0 };
	int iLocal_443[2] = { 0, 0 };
	int iLocal_446[2] = { 0, 0 };
	int iLocal_449[2] = { 0, 0 };
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457[2] = { 0, 0 };
	int iLocal_460[2] = { 0, 0 };
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482[2] = { 0, 0 };
	int iLocal_485 = 0;
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	Local_114 = { 27.7189f, -608.7927f, 30.6293f };
	Local_130 = { 903.1f, -1548.8f, 29.8f };
	fLocal_133 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
		func_225();
		func_224();
	}
	if (func_223(0))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("FINPRB", 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("WorkerPedMainGroup", &iLocal_300);
	PED::ADD_RELATIONSHIP_GROUP("GuardMainGroup", &iLocal_301);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), true);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_301, joaat("player"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_300, joaat("player"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_301, iLocal_300);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_300, iLocal_301);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_301, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_301);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_300, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_300);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_FINPRB", 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, false);
		}
		func_221();
		if (iLocal_315 == 0)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_220(27, 1);
				iLocal_315 = 1;
			}
		}
		if (iLocal_394 == 1)
		{
			func_216();
		}
		func_213();
		func_206();
		func_198();
		func_193();
		func_190();
		switch (iLocal_26)
		{
			case 0:
				func_189();
				break;
			
			case 1:
				func_186();
				break;
			
			case 2:
				func_162();
				break;
			
			case 3:
				func_160();
				break;
			
			case 4:
				func_131();
				break;
			
			case 5:
				func_21();
				break;
			
			case 6:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	switch (iLocal_60)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_FAIL");
			switch (iLocal_28)
			{
				case 0:
					break;
				
				case 4:
					sLocal_134 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_134 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_134 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_134 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_134 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_134 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_134 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_134 = "FPB_FAIL11";
					break;
			}
			if (iLocal_28 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_134);
			}
			iLocal_60 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_224();
			}
			break;
	}
}

int func_2()
{
	if (Global_101392 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Global_4)
	{
		return 1;
	}
	if (Global_101392 == 7 || Global_101392 == 8)
	{
		return 1;
	}
	return 0;
}

void func_4(char* sParam0)
{
	func_5(sParam0);
	func_6(0);
}

void func_5(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_79481, sParam0, 16);
			StringCopy(&Global_79485, "", 16);
			if (RECORDING::IS_REPLAY_RECORDING())
			{
				RECORDING::STOP_REPLAY_RECORDING();
			}
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_114370.f_9088 || func_223(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_92124[iVar0 /*5*/].f_1), 5);
		Global_101428 = iParam0;
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_92124[iParam0 /*5*/];
	iVar1 = Global_79519.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_8(&(Global_114370.f_2366.f_539), iVar1);
	if (Global_95547 == Global_101429)
	{
		Global_114370.f_9088.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_92160[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_114370.f_9088.f_330[iVar1 /*6*/].f_2++;
	Global_95547 = Global_101429;
	if (iParam0 == -1)
	{
		if (Global_114370.f_9088)
		{
		}
		return 0;
	}
	if (BitTest(Global_92124[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_92124[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_114370.f_18536[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_114370.f_9088.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_10(Global_114370.f_18536[iVar0], &Var2, &fVar5))
			{
				Global_114370.f_18536[iVar0] = 318;
				func_9(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_98762[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_98762[iVar0 /*29*/].f_9 = 0f;
				Global_98762[iVar0 /*29*/].f_12 = 0f;
				Global_98762[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98762[iVar0 /*29*/].f_10 = 0f;
				Global_98762[iVar0 /*29*/].f_13 = 0f;
				Global_98762[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98762[iVar0 /*29*/].f_11 = 0f;
				Global_98762[iVar0 /*29*/].f_14 = 0f;
				Global_98762[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98762[iVar0 /*29*/].f_26 = 0f;
				Global_98762[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98762[iVar0 /*29*/].f_27 = 0f;
				Global_98762[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98762[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_9(var uParam0)
{
	*uParam0 = -15;
}

int func_10(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_95357[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_95357[iParam0 /*2*/] = 0;
	}
}

void func_12()
{
	Global_101427 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79481))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_79481, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_79481, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_79481, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_79485, "", 16);
		}
		Global_101427 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79481))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_79481, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_79481, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_79481, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_79485, "", 16);
		}
		Global_101427 = 0;
		MISC::SET_BIT(&(Global_101392.f_20), 25);
	}
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_92124[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_14()
{
	func_15();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_15()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_19(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_18(PLAYER::PLAYER_PED_ID());
			if (func_17(iVar0) && (!func_16(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_17(Global_114370.f_2366.f_539.f_4321))
				{
					Global_114370.f_2366.f_539.f_4322 = Global_114370.f_2366.f_539.f_4321;
				}
				Global_114370.f_2366.f_539.f_4323 = iVar0;
				Global_114370.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114370.f_2366.f_539.f_4321 != 145)
			{
				Global_114370.f_2366.f_539.f_4323 = Global_114370.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114370.f_2366.f_539.f_4321 = 145;
}

bool func_16(int iParam0)
{
	return Global_43922 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_20(int iParam0)
{
	return Global_2139[iParam0 /*29*/];
}

void func_21()
{
	func_190();
	if (iLocal_60 == 0)
	{
		if (iLocal_302 == 1)
		{
			func_35();
			iLocal_302 = 0;
		}
		iLocal_316 = 0;
		iLocal_317 = 0;
		iLocal_318 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		if (func_34(iLocal_44, 0))
		{
			if (!func_33(iLocal_44))
			{
				while (!func_32(iLocal_44, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (func_34(iLocal_46, 0))
		{
			if (!func_33(iLocal_46))
			{
				while (!func_32(iLocal_46, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (func_34(iLocal_45, 0))
		{
			if (!func_33(iLocal_45))
			{
				while (!func_32(iLocal_45, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_31())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			func_28(iLocal_31, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_394 = 1;
		iLocal_60 = 1;
	}
	if (iLocal_60 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
			{
				if (func_14() == 0)
				{
					if (func_34(iLocal_46, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_46, iLocal_31, false))
						{
							TASK::CLEAR_PED_TASKS(iLocal_46);
							PED::REMOVE_PED_FROM_GROUP(iLocal_46);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_46, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_46, iLocal_31, 0);
						}
					}
					if (func_34(iLocal_45, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_45, iLocal_31, false))
						{
							TASK::CLEAR_PED_TASKS(iLocal_45);
							PED::REMOVE_PED_FROM_GROUP(iLocal_45);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_45, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_45, iLocal_31, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_34(iLocal_44, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_44, iLocal_31, false))
						{
							TASK::CLEAR_PED_TASKS(iLocal_44);
							PED::REMOVE_PED_FROM_GROUP(iLocal_44);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_44, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_44, iLocal_31, 0);
						}
					}
					if (func_34(iLocal_45, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_45, iLocal_31, false))
						{
							TASK::CLEAR_PED_TASKS(iLocal_45);
							PED::REMOVE_PED_FROM_GROUP(iLocal_45);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_45, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_45, iLocal_31, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_34(iLocal_44, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_44, iLocal_31, false))
						{
							TASK::CLEAR_PED_TASKS(iLocal_44);
							PED::REMOVE_PED_FROM_GROUP(iLocal_44);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_44, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_44, iLocal_31, 0);
						}
					}
					if (func_34(iLocal_46, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_46, iLocal_31, false))
						{
							TASK::CLEAR_PED_TASKS(iLocal_46);
							PED::REMOVE_PED_FROM_GROUP(iLocal_46);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_46, true);
							TASK::TASK_LEAVE_VEHICLE(iLocal_46, iLocal_31, 0);
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, false))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 0);
				}
			}
		}
		SYSTEM::SETTIMERB(0);
		iLocal_60 = 2;
	}
	if (iLocal_60 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
			{
				if (iLocal_318 == 0)
				{
					if (func_14() == 0)
					{
						if (func_34(iLocal_46, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_46, iLocal_31, false))
							{
								if (func_33(iLocal_46))
								{
									if (func_25(iLocal_46))
									{
										iLocal_318 = 1;
									}
								}
								else
								{
									iLocal_318 = 1;
								}
							}
						}
						else
						{
							iLocal_316 = 1;
						}
						if (func_34(iLocal_45, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_45, iLocal_31, false))
							{
								if (func_33(iLocal_45))
								{
									if (func_25(iLocal_45))
									{
										iLocal_318 = 1;
									}
								}
								else
								{
									iLocal_318 = 1;
								}
							}
						}
						else
						{
							iLocal_317 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_34(iLocal_44, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_44, iLocal_31, false))
							{
								if (func_33(iLocal_44))
								{
									if (func_25(iLocal_44))
									{
										iLocal_318 = 1;
									}
								}
								else
								{
									iLocal_318 = 1;
								}
							}
						}
						else
						{
							iLocal_316 = 1;
						}
						if (func_34(iLocal_45, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_45, iLocal_31, false))
							{
								if (func_33(iLocal_45))
								{
									if (func_25(iLocal_45))
									{
										iLocal_318 = 1;
									}
								}
								else
								{
									iLocal_318 = 1;
								}
							}
						}
						else
						{
							iLocal_317 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_34(iLocal_44, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_44, iLocal_31, false))
							{
								if (func_33(iLocal_44))
								{
									if (func_25(iLocal_44))
									{
										iLocal_318 = 1;
									}
								}
								else
								{
									iLocal_318 = 1;
								}
							}
						}
						else
						{
							iLocal_316 = 1;
						}
						if (func_34(iLocal_46, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_46, iLocal_31, false))
							{
								if (func_33(iLocal_46))
								{
									if (func_25(iLocal_46))
									{
										iLocal_318 = 1;
									}
								}
								else
								{
									iLocal_318 = 1;
								}
							}
						}
						else
						{
							iLocal_317 = 1;
						}
					}
					if (iLocal_316 == 1 && iLocal_317 == 1)
					{
						iLocal_318 = 1;
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, true))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_60 = 3;
				}
			}
		}
	}
	if (iLocal_60 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_31, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_31, 2);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_31, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_30))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_30, false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_30, true);
			}
		}
		iLocal_60 = 4;
	}
	if (iLocal_60 == 4)
	{
		func_22();
	}
}

void func_22()
{
	func_23(0, 0);
	func_224();
}

void func_23(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_64040)
	{
		Global_64040 = iParam1;
	}
	if (bParam0)
	{
		if ((func_223(0) && Global_79495.f_1 == 1) && func_24(Global_79495))
		{
		}
		else
		{
			Global_64038 = 1;
		}
	}
	if (Global_114370.f_9088 || func_223(0))
	{
		iVar0 = func_13();
		iVar1 = Global_92124[iVar0 /*5*/];
		uVar2 = Global_79519.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_114370.f_9088)
			{
			}
			return;
		}
		if (BitTest(Global_92124[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_92124[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_92124[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_79497, true);
		Global_79513 = uVar2;
		Global_79514 = MISC::GET_GAME_TIMER();
	}
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_25(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (!BitTest(Global_97226, bVar0))
		{
			return 0;
		}
		MISC::CLEAR_BIT(&Global_97226, bVar0);
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_14())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_98850[func_27(iParam0)];
}

int func_27(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_28(int iParam0, int iParam1, int iParam2)
{
	if (func_30() && func_31())
	{
		while (Global_101387 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_29(0);
	}
}

void func_29(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_101392.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_101392.f_20), 13);
	}
}

int func_30()
{
	if (Global_101392 == 10 || Global_101392 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_31()
{
	return BitTest(Global_101392.f_20, 13);
}

int func_32(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_97226, bVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (BitTest(Global_97225, bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, false, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, false, 1);
			MISC::SET_BIT(&Global_97226, bVar0);
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_97226, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (BitTest(Global_97225, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_35()
{
	iLocal_394 = 0;
	iLocal_454 = 0;
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_129();
	HUD::CLEAR_PRINTS();
	func_128();
	func_127();
	func_37();
	if (!func_31())
	{
		func_36();
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_36()
{
	switch (iLocal_26)
	{
		case 2:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.177f, 29.4751f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
		
		case 3:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.177f, 29.4751f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, -1);
					}
				}
			}
			break;
		
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, -1);
					}
				}
			}
			break;
	}
}

void func_37()
{
	switch (iLocal_26)
	{
		case 3:
			iLocal_416 = 0;
			iLocal_417 = 0;
			iLocal_418 = 0;
			func_123();
			if (func_122() && func_119(7f, 7f, 7f, 1))
			{
				func_117();
				while (!func_116())
				{
					SYSTEM::WAIT(0);
				}
				iLocal_32 = func_38(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
			break;
		
		case 4:
			iLocal_416 = 0;
			iLocal_417 = 0;
			iLocal_418 = 0;
			func_123();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_31, 89.2131f, -596.9456f, 30.6224f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_31, 161.1163f);
				}
			}
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, true, true, false, false);
			break;
		
		case 5:
			iLocal_416 = 1;
			iLocal_417 = 1;
			iLocal_418 = 1;
			func_123();
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, true, true, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_31, 28.4065f, -608.9371f, 30.6293f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_31, 70.7778f);
				}
			}
			STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47))
			{
				iLocal_47 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, true, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
				PED::SET_PED_CONFIG_FLAG(iLocal_47, 324, true);
			}
			break;
	}
}

int func_38(struct<3> Param0, float fParam3)
{
	return func_39(&(Global_104933.f_2890), Param0, fParam3, 0);
}

int func_39(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_115(uParam0))
	{
		if (func_114(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_113(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
			func_112(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam4, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, false, false, true);
				}
				func_83(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_82(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_82(uParam0->f_11, 2);
						}
					}
					VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, false);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					func_81(iVar0, uParam0->f_11);
				}
				else if ((!func_78(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar8 = func_77(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_70(iVar8);
					}
				}
				if (((Global_101392 != 13 && Global_101392 != 10) && Global_101392 != 11) && Global_101392 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_101392.f_3)) == Global_79026)
					{
						if (uParam0->f_12.f_66 == Global_114370.f_32752.f_69[21 /*78*/].f_66)
						{
							func_67(24, 0);
							func_70(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_40(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_46(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_114370.f_2366.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_114370.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114370.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_114370.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_114370.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_114370.f_32752.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_114370.f_32752.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114370.f_32752.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_114370.f_32752.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_114370.f_32752.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_114370.f_32752.f_5590 = iParam1;
	Global_78943 = iParam0;
	Global_114370.f_32752.f_5588 = 1;
	func_41(iParam0, &(Global_114370.f_32752.f_5510));
}

void func_41(int iParam0, var uParam1)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_45(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_43(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_42(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_43(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_45(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_46(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_65(iParam0, 0, 0)) || func_65(iParam0, 1, 0)) || func_65(iParam0, 2, 0)) || func_64(iParam0) != 145) || func_63(iParam0)) || func_62(iParam0)) || func_61(iParam0)) || func_60(iParam0)) || !func_47(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_62(iParam0))
		{
		}
		if (func_62(iParam0))
		{
		}
		if (func_65(iParam0, 0, 0))
		{
		}
		if (func_65(iParam0, 1, 0))
		{
		}
		if (func_65(iParam0, 2, 0))
		{
		}
		if (func_64(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_47(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_48(iParam0, 0, -1))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case -671564942:
		case -902029319:
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_48(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_59())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_58() && !func_57()) && !func_56()) && !func_55()) && !func_59())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_54() || MISC::IS_PC_VERSION()) || func_53())
		{
		}
		else if (!func_56())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_51(iParam0, iParam2))
		{
			return 0;
		}
	}
	if (!func_49(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_50())
	{
		return 1;
	}
	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_50()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((!Global_2707028 && iParam1 >= 0) && iParam1 <= 515)
	{
		if (BitTest(Global_1586504[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	if (Global_2707027)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7131 && !Global_262145.f_13597) && iVar1 < Global_262145.f_13598)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14940 && iVar1 < Global_262145.f_14952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14936 && iVar1 < Global_262145.f_14948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14937 && iVar1 < Global_262145.f_14949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14938 && iVar1 < Global_262145.f_14950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14939 && iVar1 < Global_262145.f_14951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14941 && iVar1 < Global_262145.f_14953)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14942 && iVar1 < Global_262145.f_14945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14943 && iVar1 < Global_262145.f_14946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14944 && iVar1 < Global_262145.f_14947)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17521 && iVar1 < Global_262145.f_17486)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17516 && iVar1 < Global_262145.f_17481)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17520 && iVar1 < Global_262145.f_17485)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17519 && iVar1 < Global_262145.f_17484)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17513 && iVar1 < Global_262145.f_17478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17514 && iVar1 < Global_262145.f_17479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17517 && iVar1 < Global_262145.f_17482)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17518 && iVar1 < Global_262145.f_17483)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17515 && iVar1 < Global_262145.f_17480)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17523 && iVar1 < Global_262145.f_17488)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17524 && iVar1 < Global_262145.f_17489)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17512 && iVar1 < Global_262145.f_17477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17511 && iVar1 < Global_262145.f_17476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17510 && iVar1 < Global_262145.f_17475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17522 && iVar1 < Global_262145.f_17487)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17525 && iVar1 < Global_262145.f_17490)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17526 && iVar1 < Global_262145.f_17491)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17527 && iVar1 < Global_262145.f_17492)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17528 && iVar1 < Global_262145.f_17493)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17682 && iVar1 < Global_262145.f_17704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17683 && iVar1 < Global_262145.f_17705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17684 && iVar1 < Global_262145.f_17706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17685 && iVar1 < Global_262145.f_17707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17686 && iVar1 < Global_262145.f_17708)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17687 && iVar1 < Global_262145.f_17709)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17689 && iVar1 < Global_262145.f_17710)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17690 && iVar1 < Global_262145.f_17711)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17691 && iVar1 < Global_262145.f_17712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17692 && iVar1 < Global_262145.f_17713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17693 && iVar1 < Global_262145.f_17714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17694 && iVar1 < Global_262145.f_17715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17695 && iVar1 < Global_262145.f_17716)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17701 && iVar1 < Global_262145.f_17723)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17698 && iVar1 < Global_262145.f_17719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17699 && iVar1 < Global_262145.f_17720)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17700 && iVar1 < Global_262145.f_17721)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17688 && iVar1 < Global_262145.f_17722)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17702 && iVar1 < Global_262145.f_17724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17696 && iVar1 < Global_262145.f_17717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17697 && iVar1 < Global_262145.f_17718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17703 && iVar1 < Global_262145.f_17725)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19341 && iVar1 < Global_262145.f_19438)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19342 && iVar1 < Global_262145.f_19439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19343 && iVar1 < Global_262145.f_19440)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19344 && iVar1 < Global_262145.f_19441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19345 && iVar1 < Global_262145.f_19442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19346 && iVar1 < Global_262145.f_19443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19347 && iVar1 < Global_262145.f_19444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19348 && iVar1 < Global_262145.f_19445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19349 && iVar1 < Global_262145.f_19446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19350 && iVar1 < Global_262145.f_19447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19351 && iVar1 < Global_262145.f_19448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19352 && iVar1 < Global_262145.f_19449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19353 && iVar1 < Global_262145.f_19450)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19354 && iVar1 < Global_262145.f_19451)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19355 && iVar1 < Global_262145.f_19452)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19356 && iVar1 < Global_262145.f_19453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19357 && iVar1 < Global_262145.f_19454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19358 && iVar1 < Global_262145.f_19455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19359 && iVar1 < Global_262145.f_19456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19360 && iVar1 < Global_262145.f_19457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19361 && iVar1 < Global_262145.f_19458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19362 && iVar1 < Global_262145.f_19459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19363 && iVar1 < Global_262145.f_19460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19364 && iVar1 < Global_262145.f_19461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19365 && iVar1 < Global_262145.f_19462)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20422 && iVar1 < Global_262145.f_20418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20423 && iVar1 < Global_262145.f_20419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20424 && iVar1 < Global_262145.f_20420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20425 && iVar1 < Global_262145.f_20421)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21304 && iVar1 < Global_262145.f_21312)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21305 && iVar1 < Global_262145.f_21313)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21306 && iVar1 < Global_262145.f_21314)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21307 && iVar1 < Global_262145.f_21315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21308 && iVar1 < Global_262145.f_21316)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21309 && iVar1 < Global_262145.f_21317)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_22103 && iVar1 < Global_262145.f_22123)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_22115 && iVar1 < Global_262145.f_22135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_22106 && iVar1 < Global_262145.f_22126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_22116 && iVar1 < Global_262145.f_22136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_22104 && iVar1 < Global_262145.f_22124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_22120 && iVar1 < Global_262145.f_22140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_22118 && iVar1 < Global_262145.f_22138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_22119 && iVar1 < Global_262145.f_22139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_22114 && iVar1 < Global_262145.f_22134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_22121 && iVar1 < Global_262145.f_22141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_22117 && iVar1 < Global_262145.f_22137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_22113 && iVar1 < Global_262145.f_22133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_22105 && iVar1 < Global_262145.f_22125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_22107 && iVar1 < Global_262145.f_22127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_22108 && iVar1 < Global_262145.f_22128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_22109 && iVar1 < Global_262145.f_22129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_22110 && iVar1 < Global_262145.f_22130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_22111 && iVar1 < Global_262145.f_22131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_22112 && iVar1 < Global_262145.f_22132)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_23071 && iVar1 < Global_262145.f_23099)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_23072 && iVar1 < Global_262145.f_23100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_23073 && iVar1 < Global_262145.f_23101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_23074 && iVar1 < Global_262145.f_23102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_23075 && iVar1 < Global_262145.f_23103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_23076 && iVar1 < Global_262145.f_23104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_23077 && iVar1 < Global_262145.f_23105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_23078 && iVar1 < Global_262145.f_23106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_23079 && iVar1 < Global_262145.f_23107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_23080 && iVar1 < Global_262145.f_23108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_23081 && iVar1 < Global_262145.f_23109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_23082 && iVar1 < Global_262145.f_23110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_23083 && iVar1 < Global_262145.f_23111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_23084 && iVar1 < Global_262145.f_23112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_23085 && iVar1 < Global_262145.f_23113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_23086 && iVar1 < Global_262145.f_23114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_23087 && iVar1 < Global_262145.f_23115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_23088 && iVar1 < Global_262145.f_23116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_23089 && iVar1 < Global_262145.f_23117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_23090 && iVar1 < Global_262145.f_23118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_23091 && iVar1 < Global_262145.f_23119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_23092 && iVar1 < Global_262145.f_23120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_23093 && iVar1 < Global_262145.f_23121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_23094 && iVar1 < Global_262145.f_23122)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_23095 && iVar1 < Global_262145.f_23123)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_23096 && iVar1 < Global_262145.f_23124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_23097 && iVar1 < Global_262145.f_23125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_23098 && iVar1 < Global_262145.f_23126)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24293 && iVar1 < Global_262145.f_24309)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24294 && iVar1 < Global_262145.f_24310)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24298 && iVar1 < Global_262145.f_24314)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24301 && iVar1 < Global_262145.f_24317)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24306 && iVar1 < Global_262145.f_24322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24300 && iVar1 < Global_262145.f_24316)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24292 && iVar1 < Global_262145.f_24308)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24299 && iVar1 < Global_262145.f_24315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24305 && iVar1 < Global_262145.f_24321)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24304 && iVar1 < Global_262145.f_24320)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24295 && iVar1 < Global_262145.f_24311)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24297 && iVar1 < Global_262145.f_24313)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24307 && iVar1 < Global_262145.f_24323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24303 && iVar1 < Global_262145.f_24319)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24296 && iVar1 < Global_262145.f_24312)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24302 && iVar1 < Global_262145.f_24318)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24383 && iVar1 < Global_262145.f_24370)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24384 && iVar1 < Global_262145.f_24371)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24389 && iVar1 < Global_262145.f_24376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24388 && iVar1 < Global_262145.f_24375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24386 && iVar1 < Global_262145.f_24373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24392 && iVar1 < Global_262145.f_24379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24394 && iVar1 < Global_262145.f_24381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24395 && iVar1 < Global_262145.f_24382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24393 && iVar1 < Global_262145.f_24380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24385 && iVar1 < Global_262145.f_24372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24387 && iVar1 < Global_262145.f_24374)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24391 && iVar1 < Global_262145.f_24378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24390 && iVar1 < Global_262145.f_24377)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_27026 && iVar1 < Global_262145.f_27028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_26039 && iVar1 < Global_262145.f_26032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_26040 && iVar1 < Global_262145.f_26033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_26041 && iVar1 < Global_262145.f_26034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_26042 && iVar1 < Global_262145.f_26035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_27027 && iVar1 < Global_262145.f_27029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_26043 && iVar1 < Global_262145.f_26036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_26044 && iVar1 < Global_262145.f_26037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_26045 && iVar1 < Global_262145.f_26038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_26050 && iVar1 < Global_262145.f_26071)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_26051 && iVar1 < Global_262145.f_26072)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_26052 && iVar1 < Global_262145.f_26073)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_26053 && iVar1 < Global_262145.f_26074)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_26054 && iVar1 < Global_262145.f_26075)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_26055 && iVar1 < Global_262145.f_26076)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_26056 && iVar1 < Global_262145.f_26077)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_26057 && iVar1 < Global_262145.f_26078)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_26058 && iVar1 < Global_262145.f_26079)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_26059 && iVar1 < Global_262145.f_26080)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_26060 && iVar1 < Global_262145.f_26081)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_26061 && iVar1 < Global_262145.f_26082)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_26062 && iVar1 < Global_262145.f_26083)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_26063 && iVar1 < Global_262145.f_26084)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_26064 && iVar1 < Global_262145.f_26085)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_26065 && iVar1 < Global_262145.f_26086)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_26066 && iVar1 < Global_262145.f_26087)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_26067 && iVar1 < Global_262145.f_26088)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_26068 && iVar1 < Global_262145.f_26089)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_26069 && iVar1 < Global_262145.f_26090)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_26070 && iVar1 < Global_262145.f_26091)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28890 && iVar1 < Global_262145.f_28911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28891 && iVar1 < Global_262145.f_28912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28892 && iVar1 < Global_262145.f_28913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28893 && iVar1 < Global_262145.f_28914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28894 && iVar1 < Global_262145.f_28915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28895 && iVar1 < Global_262145.f_28916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28896 && iVar1 < Global_262145.f_28917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28897 && iVar1 < Global_262145.f_28918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28898 && iVar1 < Global_262145.f_28919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28899 && iVar1 < Global_262145.f_28920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28900 && iVar1 < Global_262145.f_28921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28901 && iVar1 < Global_262145.f_28922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28902 && iVar1 < Global_262145.f_28923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28903 && iVar1 < Global_262145.f_28924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28904 && iVar1 < Global_262145.f_28925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28905 && iVar1 < Global_262145.f_28926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28906 && iVar1 < Global_262145.f_28927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28907 && iVar1 < Global_262145.f_28928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28908 && iVar1 < Global_262145.f_28929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28909 && iVar1 < Global_262145.f_28930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28910 && iVar1 < Global_262145.f_28931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28933 && iVar1 < Global_262145.f_28934) && !Global_262145.f_28888)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28936 && iVar1 < Global_262145.f_28937) && !Global_262145.f_28889)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28941 && iVar1 < Global_262145.f_28944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28942 && iVar1 < Global_262145.f_28945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28943 && iVar1 < Global_262145.f_28946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29959 && iVar1 < Global_262145.f_29624)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29610 && iVar1 < Global_262145.f_29631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29611 && iVar1 < Global_262145.f_29617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29957 && iVar1 < Global_262145.f_29625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29958 && iVar1 < Global_262145.f_29626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29604 && iVar1 < Global_262145.f_29623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29605 && iVar1 < Global_262145.f_29632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29606 && iVar1 < Global_262145.f_29622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29607 && iVar1 < Global_262145.f_29620)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29953 && iVar1 < Global_262145.f_29627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29954 && iVar1 < Global_262145.f_29628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29955 && iVar1 < Global_262145.f_29629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29956 && iVar1 < Global_262145.f_29630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29608 && iVar1 < Global_262145.f_29619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29609 && iVar1 < Global_262145.f_29621)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30418 && iVar1 < Global_262145.f_30401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30419 && iVar1 < Global_262145.f_30402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30420 && iVar1 < Global_262145.f_30403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30421 && iVar1 < Global_262145.f_30404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30422 && iVar1 < Global_262145.f_30405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30423 && iVar1 < Global_262145.f_30406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30424 && iVar1 < Global_262145.f_30407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30425 && iVar1 < Global_262145.f_30408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30426 && iVar1 < Global_262145.f_30409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30435)
		{
		}
		else if (!Global_262145.f_30427 && iVar1 < Global_262145.f_30410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30428 && iVar1 < Global_262145.f_30411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30429 && iVar1 < Global_262145.f_30412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30430 && iVar1 < Global_262145.f_30413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30431 && iVar1 < Global_262145.f_30414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30436)
		{
		}
		else if (!Global_262145.f_30432 && iVar1 < Global_262145.f_30415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30433 && iVar1 < Global_262145.f_30416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30434 && iVar1 < Global_262145.f_30417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31290 && iVar1 < Global_262145.f_31273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31291 && iVar1 < Global_262145.f_31274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31292 && iVar1 < Global_262145.f_31275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31293 && iVar1 < Global_262145.f_31276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31294 && iVar1 < Global_262145.f_31277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31295 && iVar1 < Global_262145.f_31278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31296 && iVar1 < Global_262145.f_31279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31297 && iVar1 < Global_262145.f_31280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31298 && iVar1 < Global_262145.f_31281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31299 && iVar1 < Global_262145.f_31282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31300 && iVar1 < Global_262145.f_31283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31301 && iVar1 < Global_262145.f_31284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31302 && iVar1 < Global_262145.f_31285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31303 && iVar1 < Global_262145.f_31286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31304 && iVar1 < Global_262145.f_31287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31305 && iVar1 < Global_262145.f_31288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31306 && iVar1 < Global_262145.f_31289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_32214 && iVar1 < Global_262145.f_32199)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_32215 && iVar1 < Global_262145.f_32200)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_32216 && iVar1 < Global_262145.f_32201)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_32217 && iVar1 < Global_262145.f_32202)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_32218 && iVar1 < Global_262145.f_32203)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_32219 && iVar1 < Global_262145.f_32204)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_32220 && iVar1 < Global_262145.f_32205)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_32221 && iVar1 < Global_262145.f_32206)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_32222 && iVar1 < Global_262145.f_32207)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_32223 && iVar1 < Global_262145.f_32208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_32224 && iVar1 < Global_262145.f_32209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_32225 && iVar1 < Global_262145.f_32210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_32226 && iVar1 < Global_262145.f_32211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_32227 && iVar1 < Global_262145.f_32212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_32292)
		{
		}
		else if (!Global_262145.f_32228 && iVar1 < Global_262145.f_32213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33472 && iVar1 < Global_262145.f_33453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33466 && iVar1 < Global_262145.f_33447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33470 && iVar1 < Global_262145.f_33451)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33464 && iVar1 < Global_262145.f_33445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33475 && iVar1 < Global_262145.f_33456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33467 && iVar1 < Global_262145.f_33448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33476 && iVar1 < Global_262145.f_33457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33478 && iVar1 < Global_262145.f_33459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33469 && iVar1 < Global_262145.f_33450)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33477 && iVar1 < Global_262145.f_33458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33480 && iVar1 < Global_262145.f_33461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33465 && iVar1 < Global_262145.f_33446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33473 && iVar1 < Global_262145.f_33454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33479 && iVar1 < Global_262145.f_33460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33471 && iVar1 < Global_262145.f_33452)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33481 && iVar1 < Global_262145.f_33462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33468 && iVar1 < Global_262145.f_33449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33463 && iVar1 < Global_262145.f_33444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez3"))
	{
		if (!Global_262145.f_34451 && iVar1 < Global_262145.f_34435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brickade2"))
	{
		if (!Global_262145.f_34451 && iVar1 < Global_262145.f_34435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("eudora"))
	{
		if (!Global_262145.f_34460 && iVar1 < Global_262145.f_34443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("powersurge"))
	{
		if (!Global_262145.f_34454 && iVar1 < Global_262145.f_34438)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("journey2"))
	{
		if (!Global_262145.f_34448 && iVar1 < Global_262145.f_34432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surfer3"))
	{
		if (!Global_262145.f_34449 && iVar1 < Global_262145.f_34433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity3"))
	{
		if (!Global_262145.f_34446 && iVar1 < Global_262145.f_34430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("panthere"))
	{
		if (!Global_262145.f_34457 && iVar1 < Global_262145.f_34441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boor"))
	{
		if (!Global_262145.f_34461 && iVar1 < Global_262145.f_34445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon2"))
	{
		if (!Global_262145.f_34458 && iVar1 < Global_262145.f_34442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip2"))
	{
		if (!Global_262145.f_34447 && iVar1 < Global_262145.f_34431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("r300"))
	{
		if (!Global_262145.f_34450 && iVar1 < Global_262145.f_34434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virtue"))
	{
		if (!Global_262145.f_34459 && iVar1 < Global_262145.f_34444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi8"))
	{
		if (!Global_262145.f_34455 && iVar1 < Global_262145.f_34439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("broadway"))
	{
		if (!Global_262145.f_34456 && iVar1 < Global_262145.f_34440)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tahoma"))
	{
		if (!Global_262145.f_34453 && iVar1 < Global_262145.f_34437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taxi"))
	{
		if (!Global_262145.f_34452 && iVar1 < Global_262145.f_34436)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("exemplar"))
	{
		if (!Global_262145.f_35402 && !Global_262145.f_35403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cogcabrio"))
	{
		if (!Global_262145.f_35404 && !Global_262145.f_35405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrust"))
	{
		if (!Global_262145.f_35406 && !Global_262145.f_35407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vindicator"))
	{
		if (!Global_262145.f_35408 && !Global_262145.f_35409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette3"))
	{
		if (!Global_262145.f_35410 && !Global_262145.f_35411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brawler"))
	{
		if (!Global_262145.f_35412 && !Global_262145.f_35413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cognoscenti"))
	{
		if (!Global_262145.f_35414 && !Global_262145.f_35415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cognoscenti2"))
	{
		if (!Global_262145.f_35416 && !Global_262145.f_35417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cog55"))
	{
		if (!Global_262145.f_35418 && !Global_262145.f_35419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cog552"))
	{
		if (!Global_262145.f_35420 && !Global_262145.f_35421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("superd"))
	{
		if (!Global_262145.f_35422 && !Global_262145.f_35423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter4"))
	{
		if (!Global_262145.f_35424 && !Global_262145.f_35425)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter6"))
	{
		if (!Global_262145.f_35426 && !Global_262145.f_35427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alpha"))
	{
		if (!Global_262145.f_35428 && !Global_262145.f_35429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("feltzer2"))
	{
		if (!Global_262145.f_35430 && !Global_262145.f_35431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("massacro"))
	{
		if (!Global_262145.f_35432 && !Global_262145.f_35433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt"))
	{
		if (!Global_262145.f_35434 && !Global_262145.f_35435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt2"))
	{
		if (!Global_262145.f_35436 && !Global_262145.f_35437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_35438 && !Global_262145.f_35439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester"))
	{
		if (!Global_262145.f_35440 && !Global_262145.f_35441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bestiagts"))
	{
		if (!Global_262145.f_35442 && !Global_262145.f_35443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("carbonizzare"))
	{
		if (!Global_262145.f_35444 && !Global_262145.f_35445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette"))
	{
		if (!Global_262145.f_35446 && !Global_262145.f_35447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furoregt"))
	{
		if (!Global_262145.f_35448 && !Global_262145.f_35449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ninef"))
	{
		if (!Global_262145.f_35450 && !Global_262145.f_35451)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ninef2"))
	{
		if (!Global_262145.f_35452 && !Global_262145.f_35453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verlierer2"))
	{
		if (!Global_262145.f_35454 && !Global_262145.f_35455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype"))
	{
		if (!Global_262145.f_35456 && !Global_262145.f_35457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		if (!Global_262145.f_35458 && !Global_262145.f_35459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stingergt"))
	{
		if (!Global_262145.f_35460 && !Global_262145.f_35461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stinger"))
	{
		if (!Global_262145.f_35462 && !Global_262145.f_35463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette2"))
	{
		if (!Global_262145.f_35464 && !Global_262145.f_35465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb700"))
	{
		if (!Global_262145.f_35466 && !Global_262145.f_35467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mamba"))
	{
		if (!Global_262145.f_35468 && !Global_262145.f_35469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monroe"))
	{
		if (!Global_262145.f_35470 && !Global_262145.f_35471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype3"))
	{
		if (!Global_262145.f_35472 && !Global_262145.f_35473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ztype"))
	{
		if (!Global_262145.f_35474 && !Global_262145.f_35475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("voltic"))
	{
		if (!Global_262145.f_35476 && !Global_262145.f_35477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_35478 && !Global_262145.f_35479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah"))
	{
		if (!Global_262145.f_35480 && !Global_262145.f_35481)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entityxf"))
	{
		if (!Global_262145.f_35482 && !Global_262145.f_35483)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus"))
	{
		if (!Global_262145.f_35484 && !Global_262145.f_35485)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vacca"))
	{
		if (!Global_262145.f_35486 && !Global_262145.f_35487)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bullet"))
	{
		if (!Global_262145.f_35488 && !Global_262145.f_35489)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fmj"))
	{
		if (!Global_262145.f_35490 && !Global_262145.f_35491)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller2"))
	{
		if (!Global_262145.f_35492 && !Global_262145.f_35493)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller3"))
	{
		if (!Global_262145.f_35494 && !Global_262145.f_35495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller5"))
	{
		if (!Global_262145.f_35496 && !Global_262145.f_35497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller4"))
	{
		if (!Global_262145.f_35498 && !Global_262145.f_35499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller6"))
	{
		if (!Global_262145.f_35500 && !Global_262145.f_35501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("xls"))
	{
		if (!Global_262145.f_35502 && !Global_262145.f_35503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("xls2"))
	{
		if (!Global_262145.f_35504 && !Global_262145.f_35505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("prairie"))
	{
		if (!Global_262145.f_35506 && !Global_262145.f_35507)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi2"))
	{
		if (!Global_262145.f_35508 && !Global_262145.f_35509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dilettante"))
	{
		if (!Global_262145.f_35510 && !Global_262145.f_35511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("felon"))
	{
		if (!Global_262145.f_35512 && !Global_262145.f_35513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("felon2"))
	{
		if (!Global_262145.f_35514 && !Global_262145.f_35515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("f620"))
	{
		if (!Global_262145.f_35516 && !Global_262145.f_35517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jackal"))
	{
		if (!Global_262145.f_35518 && !Global_262145.f_35519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oracle2"))
	{
		if (!Global_262145.f_35520 && !Global_262145.f_35521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oracle"))
	{
		if (!Global_262145.f_35522 && !Global_262145.f_35523)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel2"))
	{
		if (!Global_262145.f_35524 && !Global_262145.f_35525)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion"))
	{
		if (!Global_262145.f_35526 && !Global_262145.f_35527)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion2"))
	{
		if (!Global_262145.f_35528 && !Global_262145.f_35529)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akuma"))
	{
		if (!Global_262145.f_35530 && !Global_262145.f_35531)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("double"))
	{
		if (!Global_262145.f_35532 && !Global_262145.f_35533)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("enduro"))
	{
		if (!Global_262145.f_35534 && !Global_262145.f_35535)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hexer"))
	{
		if (!Global_262145.f_35536 && !Global_262145.f_35537)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("innovation"))
	{
		if (!Global_262145.f_35538 && !Global_262145.f_35539)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanchez"))
	{
		if (!Global_262145.f_35540 && !Global_262145.f_35541)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanchez2"))
	{
		if (!Global_262145.f_35542 && !Global_262145.f_35543)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bati2"))
	{
		if (!Global_262145.f_35544 && !Global_262145.f_35545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio2"))
	{
		if (!Global_262145.f_35546 && !Global_262145.f_35547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruffian"))
	{
		if (!Global_262145.f_35548 && !Global_262145.f_35549)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nemesis"))
	{
		if (!Global_262145.f_35550 && !Global_262145.f_35551)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou"))
	{
		if (!Global_262145.f_35552 && !Global_262145.f_35553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pcj"))
	{
		if (!Global_262145.f_35554 && !Global_262145.f_35555)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vader"))
	{
		if (!Global_262145.f_35556 && !Global_262145.f_35557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sovereign"))
	{
		if (!Global_262145.f_35558 && !Global_262145.f_35559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet"))
	{
		if (!Global_262145.f_35560 && !Global_262145.f_35561)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratloader"))
	{
		if (!Global_262145.f_35562 && !Global_262145.f_35563)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("picador"))
	{
		if (!Global_262145.f_35564 && !Global_262145.f_35565)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero"))
	{
		if (!Global_262145.f_35566 && !Global_262145.f_35567)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner"))
	{
		if (!Global_262145.f_35568 && !Global_262145.f_35569)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa"))
	{
		if (!Global_262145.f_35570 && !Global_262145.f_35571)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blade"))
	{
		if (!Global_262145.f_35572 && !Global_262145.f_35573)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bifta"))
	{
		if (!Global_262145.f_35574 && !Global_262145.f_35575)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune"))
	{
		if (!Global_262145.f_35576 && !Global_262145.f_35577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bfinjection"))
	{
		if (!Global_262145.f_35578 && !Global_262145.f_35579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bodhi2"))
	{
		if (!Global_262145.f_35580 && !Global_262145.f_35581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kalahari"))
	{
		if (!Global_262145.f_35582 && !Global_262145.f_35583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rancherxl"))
	{
		if (!Global_262145.f_35584 && !Global_262145.f_35585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebel2"))
	{
		if (!Global_262145.f_35586 && !Global_262145.f_35587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebel"))
	{
		if (!Global_262145.f_35588 && !Global_262145.f_35589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer"))
	{
		if (!Global_262145.f_35590 && !Global_262145.f_35591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer3"))
	{
		if (!Global_262145.f_35592 && !Global_262145.f_35593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sandking2"))
	{
		if (!Global_262145.f_35594 && !Global_262145.f_35595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("washington"))
	{
		if (!Global_262145.f_35596 && !Global_262145.f_35597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter2"))
	{
		if (!Global_262145.f_35598 && !Global_262145.f_35599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("romero"))
	{
		if (!Global_262145.f_35600 && !Global_262145.f_35601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fugitive"))
	{
		if (!Global_262145.f_35602 && !Global_262145.f_35603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surge"))
	{
		if (!Global_262145.f_35604 && !Global_262145.f_35605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asea"))
	{
		if (!Global_262145.f_35606 && !Global_262145.f_35607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("premier"))
	{
		if (!Global_262145.f_35608 && !Global_262145.f_35609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("regina"))
	{
		if (!Global_262145.f_35610 && !Global_262145.f_35611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asterope"))
	{
		if (!Global_262145.f_35612 && !Global_262145.f_35613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("intruder"))
	{
		if (!Global_262145.f_35614 && !Global_262145.f_35615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater"))
	{
		if (!Global_262145.f_35616 && !Global_262145.f_35617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stanier"))
	{
		if (!Global_262145.f_35618 && !Global_262145.f_35619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ingot"))
	{
		if (!Global_262145.f_35620 && !Global_262145.f_35621)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener"))
	{
		if (!Global_262145.f_35622 && !Global_262145.f_35623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stratum"))
	{
		if (!Global_262145.f_35624 && !Global_262145.f_35625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schwarzer"))
	{
		if (!Global_262145.f_35626 && !Global_262145.f_35627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surano"))
	{
		if (!Global_262145.f_35628 && !Global_262145.f_35629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo"))
	{
		if (!Global_262145.f_35630 && !Global_262145.f_35631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo2"))
	{
		if (!Global_262145.f_35632 && !Global_262145.f_35633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("massacro2"))
	{
		if (!Global_262145.f_35634 && !Global_262145.f_35635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester2"))
	{
		if (!Global_262145.f_35636 && !Global_262145.f_35637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo"))
	{
		if (!Global_262145.f_35638 && !Global_262145.f_35639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra"))
	{
		if (!Global_262145.f_35640 && !Global_262145.f_35641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fusilade"))
	{
		if (!Global_262145.f_35642 && !Global_262145.f_35643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype2"))
	{
		if (!Global_262145.f_35644 && !Global_262145.f_35645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pigalle"))
	{
		if (!Global_262145.f_35646 && !Global_262145.f_35647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cavalcade"))
	{
		if (!Global_262145.f_35648 && !Global_262145.f_35649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cavalcade2"))
	{
		if (!Global_262145.f_35650 && !Global_262145.f_35651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bjxl"))
	{
		if (!Global_262145.f_35652 && !Global_262145.f_35653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("serrano"))
	{
		if (!Global_262145.f_35654 && !Global_262145.f_35655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gresley"))
	{
		if (!Global_262145.f_35656 && !Global_262145.f_35657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole"))
	{
		if (!Global_262145.f_35658 && !Global_262145.f_35659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger"))
	{
		if (!Global_262145.f_35660 && !Global_262145.f_35661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker"))
	{
		if (!Global_262145.f_35662 && !Global_262145.f_35663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("habanero"))
	{
		if (!Global_262145.f_35664 && !Global_262145.f_35665)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fq2"))
	{
		if (!Global_262145.f_35666 && !Global_262145.f_35667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller"))
	{
		if (!Global_262145.f_35668 && !Global_262145.f_35669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot"))
	{
		if (!Global_262145.f_35670 && !Global_262145.f_35671)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rocoto"))
	{
		if (!Global_262145.f_35672 && !Global_262145.f_35673)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("radi"))
	{
		if (!Global_262145.f_35674 && !Global_262145.f_35675)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mesa3"))
	{
		if (!Global_262145.f_35676 && !Global_262145.f_35677)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monster"))
	{
		if (!Global_262145.f_35678 && !Global_262145.f_35679)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet6"))
	{
		if (!Global_262145.f_35708 && iVar1 < Global_262145.f_35695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada2"))
	{
		if (!Global_262145.f_35707 && iVar1 < Global_262145.f_35694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brigham"))
	{
		if (!Global_262145.f_35709 && iVar1 < Global_262145.f_35696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique2"))
	{
		if (!Global_262145.f_35700 && iVar1 < Global_262145.f_35687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("l35"))
	{
		if (!Global_262145.f_35697 && iVar1 < Global_262145.f_35684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == func_52(1))
	{
		iVar0 = 1;
	}
	else if (iParam0 == joaat("ratel"))
	{
		if (!Global_262145.f_35698 && iVar1 < Global_262145.f_35685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stingertt"))
	{
		if (!Global_262145.f_35701 && iVar1 < Global_262145.f_35688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo5"))
	{
		if (!Global_262145.f_35704 && iVar1 < Global_262145.f_35691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streamer216"))
	{
		if (!Global_262145.f_35702 && iVar1 < Global_262145.f_35689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monstrociti"))
	{
		if (!Global_262145.f_35699 && iVar1 < Global_262145.f_35686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coureur"))
	{
		if (!Global_262145.f_35706 && iVar1 < Global_262145.f_35693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiju"))
	{
		if (!Global_262145.f_35703 && iVar1 < Global_262145.f_35690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("inductor"))
	{
		if (!Global_262145.f_35705 && iVar1 < Global_262145.f_35692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("inductor2"))
	{
		if (!Global_262145.f_35705 && iVar1 < Global_262145.f_35692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -122993285)
	{
		if (!Global_262145.f_36286 && iVar1 < Global_262145.f_36266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -38879449)
	{
		if (!Global_262145.f_36291 && iVar1 < Global_262145.f_36271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -465825307)
	{
		if (!Global_262145.f_36285 && iVar1 < Global_262145.f_36265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -441209695)
	{
		if (!Global_262145.f_36292 && iVar1 < Global_262145.f_36272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1233767450)
	{
		if (!Global_262145.f_36297 && iVar1 < Global_262145.f_36277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1674384553)
	{
		if (!Global_262145.f_36288 && iVar1 < Global_262145.f_36268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -478639183)
	{
		if (!Global_262145.f_36296 && iVar1 < Global_262145.f_36276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1029730482)
	{
		if (!Global_262145.f_36295 && iVar1 < Global_262145.f_36275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("police4"))
	{
		if (!Global_262145.f_36289 && iVar1 < Global_262145.f_36269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 372621319)
	{
		if (!Global_262145.f_36287 && iVar1 < Global_262145.f_36267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -741120335)
	{
		if (!Global_262145.f_36293 && iVar1 < Global_262145.f_36273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -863358884)
	{
		if (!Global_262145.f_36301 && iVar1 < Global_262145.f_36281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -768044142)
	{
		if (!Global_262145.f_36300 && iVar1 < Global_262145.f_36280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -178442374)
	{
		if (!Global_262145.f_36299 && iVar1 < Global_262145.f_36279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 167522317)
	{
		if (!Global_262145.f_36302 && iVar1 < Global_262145.f_36282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1372798934)
	{
		if (!Global_262145.f_36298 && iVar1 < Global_262145.f_36278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -842765535)
	{
		if (!Global_262145.f_36303 && iVar1 < Global_262145.f_36283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 728350375)
	{
		if (!Global_262145.f_36304 && iVar1 < Global_262145.f_36284)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_52(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

bool func_53()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_54()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_55()
{
	return 0;
}

int func_56()
{
	return 1;
}

int func_57()
{
	return 1;
}

int func_58()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_59()
{
	int iVar0;
	
	if (Global_153246 == 2)
	{
		return 1;
	}
	else if (Global_153246 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, false);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
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

int func_60(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_48(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98733[iVar0]))
		{
			if (Global_98733[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98703[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98703[iVar0], false))
			{
				if (Global_98703[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98703[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_484[24]))
	{
		if (iParam0 == Global_78038.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_78038.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_64(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98703[iVar0]))
		{
			if (Global_98703[iVar0] == iParam0)
			{
				return Global_98713[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_65(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_66(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_114370.f_7232[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_66(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_67(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_69(iParam0, 0))
		{
			func_68(iParam0, 1, 0);
			func_68(iParam0, 2, 0);
			func_68(iParam0, 3, 0);
			func_68(iParam0, 4, 0);
			func_68(iParam0, 0, 1);
			Global_78038[iParam0] = 1;
		}
	}
	else
	{
		func_68(iParam0, 0, 0);
	}
}

void func_68(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_114370.f_32752[iParam0]), bParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_114370.f_32752[iParam0]), bParam1);
	}
}

int func_69(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_114370.f_32752[iParam0], iParam1);
}

void func_70(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_74(&(Global_78038.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78038.f_139[iParam0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_78038.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_78038.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&(Global_78038.f_139[iParam0]));
			}
		}
		Global_78038[iParam0] = 1;
		if (BitTest(Global_78038.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_69(iParam0, 0)) && Global_78947.f_66 == 0) && Global_114370.f_32752.f_1958[Global_78038.f_555[0 /*21*/].f_14] != 0) && Global_114370.f_32752.f_1958[Global_78038.f_555[0 /*21*/].f_14] > 3) && (!func_72(0, Global_78038.f_555[0 /*21*/].f_12) || !func_72(1, Global_78038.f_555[0 /*21*/].f_12)))
			{
				func_71(&(Global_114370.f_32752.f_69[Global_78038.f_555[0 /*21*/].f_14 /*78*/]), &Global_78947);
				Global_79025 = Global_114370.f_32752.f_5591;
			}
			func_67(iParam0, 0);
		}
	}
}

void func_71(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_72(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_73(&(Global_114370.f_32752.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_48(Global_114370.f_32752.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_73(var uParam0)
{
	return *uParam0;
}

int func_74(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_75(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_75(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_75(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_75(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_75(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_75(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_75(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_75(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_75(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_59())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), true);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_59())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), true);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_114370.f_32752.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_114(Global_114370.f_32752.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_114370.f_32752.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_114370.f_32752.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_114370.f_32752.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_114(Global_114370.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_114370.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114370.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_114(Global_114370.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_114370.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114370.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_75(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_76(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_76(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_114370.f_9088.f_99.f_58[128] && !Global_114370.f_9088.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_114370.f_9088.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_114370.f_9088.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_78038.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_78038.f_484[iVar0], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78038.f_484[iVar0], false))
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
			VEHICLE::GET_VEHICLE_COLOURS(Global_78038.f_484[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_78038.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_78038.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_78(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_80(iParam0, Global_78038.f_139[38], 0))
			{
				func_70(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_80(iParam0, Global_78038.f_139[43], 1))
			{
				func_70(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_80(iParam0, uVar1[iVar6], 1) && func_79(ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_114(Param1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], true), true) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_78038.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78038.f_484[14], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_78038.f_484[14]) == joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_78038.f_484[14]))
				{
					func_70(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_78038.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78038.f_484[20], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_78038.f_484[20]) == joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_78038.f_484[20]))
				{
					func_70(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_79(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_80(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_98703[iVar0]))
		{
			Global_98703[iVar0] = iParam0;
			Global_98713[iVar0] = iParam1;
			Global_98723[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_98723[iVar0]))
			{
				Global_98751[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_98751[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98703[iVar0]))
		{
			if (iParam0 == 145 || Global_98713[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_98703[iVar0]) == func_75(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98703[iVar0], false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98703[iVar0], false, true);
						VEHICLE::DELETE_VEHICLE(&(Global_98703[iVar0]));
						Global_98713[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_83(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_103(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_42(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_42(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_42(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_42(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_42(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_42(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_42(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_42(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("surfer3"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_42(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_42(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_42(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_42(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_42(iVar6)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(iVar6));
				}
				iVar6++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_101(uParam1->f_5) || func_101(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_100(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_99())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::SET_DRIFT_TYRES(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_98(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_98(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			func_90(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_42(iVar7 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, true);
				}
				iVar7++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if ((((func_84() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_52(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_84()
{
	if ((((Global_4718592.f_116241 == 6 || Global_4718592.f_116241 == 7) || Global_4718592.f_116241 == 18) || Global_4718592.f_116241 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_88(7))
	{
		if (func_86(Global_2672741.f_4.f_16) || func_85(Global_2672741.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_85(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1882422[iVar0 /*142*/].f_78.f_63 != 0;
	}
	return 0;
}

int func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_87(iParam0, 9);
	}
	return 0;
}

var func_87(int iParam0, int iParam1)
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

bool func_88(int iParam0)
{
	return func_89(&(Global_2672741.f_188), iParam0);
}

var func_89(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_90(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, 255);
				}
				else
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_96(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_95(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_93(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_93(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_92(iParam0);
	if (func_91(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 32);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_92(var uParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
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
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = func_94(iParam0, 38) + 1;
		iVar1 = func_94(iParam0, 24) + 1;
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((STREAMING::IS_MODEL_VALID(Global_153258) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_153258)) && Global_153259 == iParam1)
	{
		return Global_153260;
	}
	iVar0 = (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_96(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_95(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14937)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14938)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14936)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14939)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14941)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14940)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19351)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19353)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19357)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19354)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19361)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19359)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19364)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21310)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21311)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	if (!func_97() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_97()
{
	return 0;
}

void func_98(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		bVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, bVar1 == 1);
		}
	}
}

bool func_99()
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_100(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return BitTest(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	if (!func_97() && func_102(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_103(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_110(PLAYER::PLAYER_ID(), -1))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (func_105(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_104(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_104(int iParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_105(int iParam0)
{
	if (func_109(iParam0) == 233)
	{
		return func_106(iParam0);
	}
	return -1;
}

int func_106(int iParam0)
{
	if (func_107(iParam0, 0))
	{
		return Global_1886967[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

int func_107(int iParam0, int iParam1)
{
	if (func_108(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1886967[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_108(var uParam0)
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

int func_109(int iParam0)
{
	if (func_108(iParam0))
	{
		if (func_107(iParam0, 0))
		{
			return Global_1886967[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_111(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_111(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672741.f_3)
				{
					return Global_2672741.f_2;
				}
				else if (Global_2657921[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_112(struct<3> Param0, float fParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_74(&(Global_78038.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_78038.f_555[0 /*21*/], bParam4) <= fParam3)
			{
				func_70(iVar0);
			}
		}
		iVar0++;
	}
}

int func_113(var uParam0)
{
	if (func_115(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_114(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_115(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_48(uParam0->f_12.f_66, 0, -1))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_79(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_116()
{
	return func_113(&(Global_104933.f_2890));
}

void func_117()
{
	func_118(&(Global_104933.f_2890));
}

void func_118(var uParam0)
{
	if (func_115(uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);
	}
}

int func_119(struct<3> Param0, int iParam3)
{
	return func_120(Global_104933.f_2890.f_12.f_66, Param0, iParam3);
}

int func_120(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_121() };
	}
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var3);
	if ((Var3.f_0 - Var0.f_0) > Param1.f_0)
	{
		return 0;
	}
	else if ((Var3.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var3.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

Vector3 func_121()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_122()
{
	return func_115(&(Global_104933.f_2890));
}

void func_123()
{
	STREAMING::REQUEST_MODEL(joaat("armytrailer2"));
	STREAMING::REQUEST_MODEL(joaat("packer"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
	STREAMING::REQUEST_MODEL(joaat("bison2"));
	while ((((!STREAMING::HAS_MODEL_LOADED(joaat("armytrailer2")) || !STREAMING::HAS_MODEL_LOADED(joaat("packer"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison2")))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_30))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97869[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97869[1], true, true);
			iLocal_30 = Global_97869[1];
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_30);
		}
		else
		{
			iLocal_30 = VEHICLE::CREATE_VEHICLE(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, true, true, false);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_30);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97869[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97869[2], true, true);
			iLocal_31 = Global_97869[2];
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_31, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_31, 7);
			func_126(iLocal_31, -1);
			func_125(iLocal_31, -1);
		}
		else
		{
			iLocal_31 = VEHICLE::CREATE_VEHICLE(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, true, true, false);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_31, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_31, 7);
			func_126(iLocal_31, -1);
			func_125(iLocal_31, -1);
		}
	}
	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_31, iLocal_30, 0.5f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison2"));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97869.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97869.f_9[0], true, true);
			iLocal_33[0] = Global_97869.f_9[0];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[0], iLocal_300);
			func_124(iLocal_33[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[0], true);
		}
		else
		{
			iLocal_33[0] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[0], iLocal_300);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.3f, -1542.6f, 30.4f, 3f, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_33[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[0], true);
			func_124(iLocal_33[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97869.f_9[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97869.f_9[1], true, true);
			iLocal_33[1] = Global_97869.f_9[1];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[1], iLocal_300);
			func_124(iLocal_33[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[1], true);
		}
		else
		{
			iLocal_33[1] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[1], iLocal_300);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.5028f, -1517.401f, 29.9673f, 3f, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_33[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_124(iLocal_33[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[1], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33[2]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97869.f_9[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97869.f_9[2], true, true);
			iLocal_33[2] = Global_97869.f_9[2];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[2], iLocal_300);
			func_124(iLocal_33[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[2], true);
		}
		else
		{
			iLocal_33[2] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[2], iLocal_300);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.6423f, -1541.423f, 29.2516f, 3f, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_33[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_124(iLocal_33[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[2], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33[3]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97869.f_9[3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97869.f_9[3], true, true);
			iLocal_33[3] = Global_97869.f_9[3];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[3], iLocal_300);
			func_124(iLocal_33[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[3], true);
		}
		else
		{
			iLocal_33[3] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[3], iLocal_300);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.3046f, -1573.188f, 29.8247f, 3f, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_33[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_124(iLocal_33[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[3], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33[4]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97869.f_9[4]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97869.f_9[4], true, true);
			iLocal_33[4] = Global_97869.f_9[4];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[4], iLocal_300);
			func_124(iLocal_33[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[4], true);
		}
		else
		{
			iLocal_33[4] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[4], iLocal_300);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(903.8805f, -1575.02f, 29.8327f, 3f, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_33[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_124(iLocal_33[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[4], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33[5]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97869.f_9[5]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97869.f_9[5], true, true);
			iLocal_33[5] = Global_97869.f_9[5];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[5], iLocal_300);
			func_124(iLocal_33[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[5], true);
		}
		else
		{
			iLocal_33[5] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[5], iLocal_300);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(906.2186f, -1575.108f, 29.8125f, 3f, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_33[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_124(iLocal_33[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[5], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33[6]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97869.f_9[8]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97869.f_9[8], true, true);
			iLocal_33[6] = Global_97869.f_9[8];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[6], iLocal_300);
			func_124(iLocal_33[6], 20f, 5f, 120f, -45f, 45f, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[6], true);
		}
		else
		{
			iLocal_33[6] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[6], iLocal_300);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.285f, -1561.485f, 29.6539f, 3f, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_33[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_124(iLocal_33[6], 20f, 5f, 120f, -45f, 45f, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[6], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_41[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97869.f_9[6]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97869.f_9[6], true, true);
			iLocal_41[0] = Global_97869.f_9[6];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_41[0], iLocal_301);
			func_124(iLocal_41[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_41[0], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_41[0], joaat("weapon_pistol"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_41[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_41[0] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_41[0], iLocal_301);
			func_124(iLocal_41[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_41[0], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_41[0], joaat("weapon_pistol"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_41[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_41[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97869.f_9[7]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97869.f_9[7], true, true);
			iLocal_41[1] = Global_97869.f_9[7];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_41[1], iLocal_301);
			func_124(iLocal_41[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_41[1], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_41[1], joaat("weapon_pistol"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_41[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_41[1] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_41[1], iLocal_301);
			func_124(iLocal_41[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_41[1], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_41[1], joaat("weapon_pistol"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_41[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_construct_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
}

void func_124(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
		PED::SET_PED_ID_RANGE(iParam0, fParam6);
		PED::SET_COMBAT_FLOAT(iParam0, 10, fParam7);
	}
}

void func_125(int iParam0, int iParam1)
{
	Global_64049 = iParam0;
	Global_64050 = iParam1;
}

void func_126(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_64051 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_76133)
	{
		if (iParam1 == -1 || Global_76134[iVar0 /*9*/] == iParam1)
		{
			if (Global_76134[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_76134[iVar0 /*9*/].f_6 = iParam0;
				Global_76134[iVar0 /*9*/].f_7 = 1;
				Global_76134[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_127()
{
	iLocal_61 = 0;
	while (iLocal_61 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_61]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_33[iLocal_61], true))
		{
			PED::DELETE_PED(&(iLocal_33[iLocal_61]));
		}
		iLocal_61++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_41[0], true))
	{
		PED::DELETE_PED(&(iLocal_41[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[1]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_41[1], true))
	{
		PED::DELETE_PED(&(iLocal_41[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_44) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_44, true))
	{
		PED::DELETE_PED(&iLocal_44);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_45) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_45, true))
	{
		PED::DELETE_PED(&iLocal_45);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_46) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_46, true))
	{
		PED::DELETE_PED(&iLocal_46);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_47, true))
	{
		PED::DELETE_PED(&iLocal_47);
	}
	if (!func_31())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 519.1906f, -2980.994f, 5.0443f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 270.1911f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_30) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_30, true))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_30);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_97869[3]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97869[3], true, false);
		VEHICLE::DELETE_VEHICLE(&(Global_97869[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_31, true))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_31);
	}
	STREAMING::REMOVE_ANIM_DICT("cellphone@str");
	STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	MISC::CLEAR_AREA(889.5f, -1553.8f, 30f, 150f, true, false, false, false);
}

void func_128()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_56))
	{
		HUD::REMOVE_BLIP(&iLocal_56);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_57))
	{
		HUD::REMOVE_BLIP(&iLocal_57);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_58))
	{
		HUD::REMOVE_BLIP(&iLocal_58);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_59))
	{
		HUD::REMOVE_BLIP(&iLocal_59);
	}
}

void func_129()
{
	Global_21032 = 0;
	func_130();
}

void func_130()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20813.f_1 == 9) || Global_20812 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
		Global_20813.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22166 = 6;
		return;
	}
}

void func_131()
{
	func_154();
	if (iLocal_60 == 0)
	{
		if (iLocal_302 == 1)
		{
			func_35();
			iLocal_302 = 0;
		}
		iLocal_303 = 0;
		iLocal_312 = 0;
		iLocal_467 = 0;
		iLocal_107 = 0;
		iLocal_108 = 0;
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		STREAMING::REMOVE_ANIM_DICT("cellphone@str");
		STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
		iLocal_394 = 1;
		iLocal_60 = 1;
	}
	if (iLocal_60 == 1)
	{
		func_153(&uLocal_135, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_153(&uLocal_135, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_153(&uLocal_135, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_153(&uLocal_135, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		iLocal_60 = 2;
	}
	if (iLocal_60 == 2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_139(&uLocal_135, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_60 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_139(&uLocal_135, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_60 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_139(&uLocal_135, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_60 = 3;
				}
			}
		}
	}
	if (iLocal_60 == 3)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_57))
		{
			if (!func_138())
			{
				if (SYSTEM::TIMERA() > 10500)
				{
					iLocal_57 = func_136(Local_114, 1);
				}
			}
		}
		if (func_138())
		{
			iLocal_60 = 4;
		}
	}
	if (iLocal_60 == 4)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, false))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_31))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_114, 4f, 4f, 2f, true, true, 2))
						{
							if (func_133(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4f, 3, 0.5f, 0, 1, 0))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
								if (HUD::DOES_BLIP_EXIST(iLocal_57))
								{
									HUD::REMOVE_BLIP(&iLocal_57);
								}
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
								func_132(0, -1);
								iLocal_60 = 0;
								iLocal_26 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_132(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_64046)
	{
	}
	Global_64046 = 0;
	if (bParam0)
	{
		Global_64047 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_76133)
		{
			if (Global_64263[Global_76134[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_76134[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_76133)
		{
			if (Global_76134[iVar0 /*9*/] > 0)
			{
				if (Global_76134[iVar0 /*9*/] == iParam1)
				{
					Global_76134[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_133(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_135(bParam5, bParam6);
	func_134(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_30) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_30 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_134(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

void func_135(bool bParam0, bool bParam1)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 73, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 138, true);
	PAD::DISABLE_CONTROL_ACTION(0, 136, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 107, true);
	PAD::DISABLE_CONTROL_ACTION(0, 110, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 87, true);
	PAD::DISABLE_CONTROL_ACTION(0, 88, true);
	PAD::DISABLE_CONTROL_ACTION(0, 113, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 117, true);
	PAD::DISABLE_CONTROL_ACTION(0, 118, true);
	PAD::DISABLE_CONTROL_ACTION(0, 119, true);
	PAD::DISABLE_CONTROL_ACTION(0, 352, true);
	PAD::DISABLE_CONTROL_ACTION(0, 131, true);
	PAD::DISABLE_CONTROL_ACTION(0, 132, true);
	PAD::DISABLE_CONTROL_ACTION(0, 123, true);
	PAD::DISABLE_CONTROL_ACTION(0, 126, true);
	PAD::DISABLE_CONTROL_ACTION(0, 129, true);
	PAD::DISABLE_CONTROL_ACTION(0, 130, true);
	PAD::DISABLE_CONTROL_ACTION(0, 133, true);
	PAD::DISABLE_CONTROL_ACTION(0, 134, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
}

int func_136(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_137(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_137(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_138()
{
	if (Global_22166 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_139(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_152(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_22214 = 0;
	Global_22173 = 1;
	Global_22180 = 0;
	Global_22175 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 0;
	Global_22171 = 0;
	Global_22218 = 0;
	Global_22220 = 0;
	if (iParam5 == 1)
	{
		Global_22178 = 1;
	}
	else
	{
		Global_22178 = 0;
	}
	Global_2883585 = 0;
	return func_140(sParam3, iParam4, bParam8);
}

int func_140(char* sParam0, int iParam1, bool bParam2)
{
	Global_22167 = 0;
	if (Global_22166 == 0 || Global_22168 == 2)
	{
		if (Global_22166 != 0)
		{
			if (iParam1 > Global_22168)
			{
				if (Global_22173 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20813.f_1 = 3;
					Global_22166 = 0;
					Global_22167 = 1;
					Global_22219 = 0;
					Global_22162 = 0;
					Global_22163 = 0;
					Global_22177 = 0;
					Global_22176 = 0;
					Global_20812 = 0;
				}
				else
				{
					func_130();
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
		if (func_151(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_150();
		Global_21455 = { Global_21620 };
		Global_22172 = Global_22173;
		Global_22179 = Global_22180;
		Global_2883586 = Global_2883585;
		Global_22181 = { Global_22197 };
		Global_22174 = Global_22175;
		Global_23156 = Global_23157;
		Global_23164 = { Global_23170 };
		Global_23158 = Global_23159;
		Global_23160 = Global_23161;
		Global_23162 = Global_23163;
		Global_21785.f_370 = Global_23155;
		Global_21785.f_368 = Global_23153;
		Global_21785.f_369 = Global_23154;
		Global_22162 = Global_22163;
		if (Global_22172)
		{
			MISC::CLEAR_BIT(&Global_8683, 20);
			MISC::CLEAR_BIT(&Global_8684, 17);
			MISC::CLEAR_BIT(&Global_8685, false);
			if (bParam2)
			{
				func_149();
				if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20813.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20779 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_148())
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
				if (!Global_79248)
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
			if (func_147())
			{
				return 0;
			}
			else
			{
				switch (Global_20813.f_1)
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
				if (BitTest(Global_8683, 9))
				{
					return 0;
				}
			}
			func_146();
			Global_22176 = bParam2;
		}
		Global_22168 = iParam1;
		StringCopy(&Global_21785, sParam0, 24);
		Global_21032 = 0;
		func_145();
		func_141();
		return 1;
	}
	if (Global_22166 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22168 || iParam1 == Global_22168)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_130();
	}
	return 0;
}

void func_141()
{
	if (!func_142())
	{
		return;
	}
	if (Global_22172)
	{
		MemCopy(&(Global_1970561.f_1), {Global_21785}, 4);
		Global_1970561 = Global_7998;
		Global_1970561.f_6 = Global_22176;
	}
}

int func_142()
{
	if (!Global_262145.f_29155)
	{
		return 0;
	}
	if (!Global_79248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_144())
	{
		return 0;
	}
	if (func_143(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_143(int iParam0)
{
	return func_87(iParam0, 20);
}

int func_144()
{
	return -1;
}

void func_145()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21034[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22166 = 1;
}

void func_146()
{
	Global_22219 = Global_22218;
	Global_22213 = Global_22214;
	Global_22260 = { Global_22248 };
	Global_22266 = { Global_22254 };
	Global_22221 = Global_22220;
	Global_22290 = { Global_22272 };
	Global_22296 = { Global_22278 };
	Global_22302 = { Global_22284 };
	Global_22308 = { Global_22314 };
	Global_7998 = Global_7999;
	Global_8000 = Global_8001;
	Global_22177 = Global_22178;
	Global_22179 = Global_22180;
	Global_22181 = { Global_22197 };
	Global_22170 = Global_22171;
	Global_23182 = 0;
	Global_22215 = 0;
	Global_22216 = 0;
	MISC::CLEAR_BIT(&Global_8684, 16);
}

int func_147()
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_148()
{
	int iVar0;
	int iVar1;
	
	if (Global_79248)
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

void func_149()
{
	if (func_16(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[0 /*29*/])
			{
				Global_20813 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[1 /*29*/])
			{
				Global_20813 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[2 /*29*/])
			{
				Global_20813 = 2;
			}
			else
			{
				Global_20813 = 0;
			}
		}
	}
	else
	{
		Global_20813 = func_14();
		if (Global_20813 == 145)
		{
			Global_20813 = 3;
		}
		if (Global_79248)
		{
			Global_20813 = 3;
		}
		if (Global_20813 > 3)
		{
			Global_20813 = 3;
		}
	}
}

void func_150()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21455[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21455[iVar0 /*10*/].f_1), "", 24);
		Global_21455[iVar0 /*10*/].f_7 = 0;
		Global_21455[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21455.f_161 = -99;
	Global_21455.f_162 = { 0f, 0f, 0f };
}

bool func_151(int iParam0, int iParam1)
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

void func_152(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21620 = { *uParam0 };
	Global_7999 = iParam1;
	StringCopy(&Global_22236, sParam2, 24);
	Global_23155 = iParam5;
	if (iParam3 == 0)
	{
		Global_23153 = 1;
		Global_23151 = 0;
	}
	else
	{
		Global_23153 = 0;
		Global_23151 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23154 = 1;
		Global_23152 = 0;
	}
	else
	{
		Global_23154 = 0;
		Global_23152 = 1;
	}
}

void func_153(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79248)
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

void func_154()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, false))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_31))
			{
				if (func_159("HELP_1"))
				{
					HUD::CLEAR_HELP(true);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_56))
				{
					HUD::REMOVE_BLIP(&iLocal_56);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_59))
				{
					if (iLocal_393 == 1)
					{
						if (MISC::GET_GAME_TIMER() < iLocal_107 + 7500)
						{
							HUD::CLEAR_PRINTS();
						}
					}
					HUD::REMOVE_BLIP(&iLocal_59);
				}
				if (iLocal_26 == 4)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_467 == 0)
						{
							AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_LOST");
							iLocal_467 = 1;
						}
						if (iLocal_312 == 1)
						{
							if (MISC::GET_GAME_TIMER() < iLocal_108 + 7500)
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_312 = 0;
						}
						if (iLocal_60 > 3)
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_57))
							{
								iLocal_57 = func_136(Local_114, 1);
							}
							if (iLocal_303 == 0)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									func_158("GOD_2", 7500, 1);
									iLocal_303 = 1;
								}
							}
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_57))
						{
							HUD::REMOVE_BLIP(&iLocal_57);
						}
						if (iLocal_312 == 0)
						{
							HUD::CLEAR_PRINTS();
							func_158("GOD_4", 7500, -1);
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_COPS");
							iLocal_108 = MISC::GET_GAME_TIMER();
							iLocal_312 = 1;
							iLocal_467 = 0;
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_56))
				{
					HUD::REMOVE_BLIP(&iLocal_56);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_57))
				{
					HUD::REMOVE_BLIP(&iLocal_57);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_30, false))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_59))
					{
						iLocal_59 = func_156(iLocal_30, 0, 0);
						HUD::SET_BLIP_AS_FRIENDLY(iLocal_59, true);
						if (HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_PRINTS();
						}
						if (iLocal_393 == 0)
						{
							func_158("GOD_6", 7500, -1);
							iLocal_107 = MISC::GET_GAME_TIMER();
							iLocal_393 = 1;
						}
						if (!func_159("HELP_1"))
						{
							func_155("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_59))
			{
				HUD::REMOVE_BLIP(&iLocal_59);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::REMOVE_BLIP(&iLocal_57);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_56))
				{
					iLocal_56 = func_156(iLocal_31, 0, 0);
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, true);
				}
			}
			if (iLocal_313 == 0)
			{
				HUD::CLEAR_PRINTS();
				func_158("GOD_5", 7500, -1);
				iLocal_313 = 1;
			}
		}
	}
}

void func_155(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_156(int iParam0, bool bParam1, bool bParam2)
{
	return func_157(iParam0, !bParam1, bParam2);
}

int func_157(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_137(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_137(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_137(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_158(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

bool func_159(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_160()
{
	if (iLocal_60 > 1)
	{
		func_154();
	}
	if (iLocal_60 == 0)
	{
		if (iLocal_302 == 1)
		{
			func_35();
			iLocal_302 = 0;
		}
		iLocal_395 = 0;
		iLocal_396 = 0;
		iLocal_397 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_402[0] = 0;
		iLocal_402[1] = 0;
		iLocal_405[0] = 0;
		iLocal_405[1] = 0;
		iLocal_408 = 0;
		iLocal_409 = 0;
		iLocal_410 = 0;
		iLocal_411 = 0;
		iLocal_412 = 0;
		iLocal_413 = 0;
		iLocal_414 = 0;
		iLocal_421 = 0;
		iLocal_422 = 0;
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_426 = 0;
		iLocal_427 = 0;
		iLocal_428 = 0;
		iLocal_429 = 0;
		iLocal_430 = 0;
		iLocal_431[0] = 0;
		iLocal_431[1] = 0;
		iLocal_434[0] = 0;
		iLocal_434[1] = 0;
		iLocal_437[0] = 0;
		iLocal_437[1] = 0;
		iLocal_440[0] = 0;
		iLocal_440[1] = 0;
		iLocal_443[0] = 0;
		iLocal_443[1] = 0;
		iLocal_446[0] = 0;
		iLocal_446[1] = 0;
		iLocal_449[0] = 0;
		iLocal_449[1] = 0;
		iLocal_453 = 0;
		iLocal_456 = 0;
		iLocal_457[0] = 0;
		iLocal_460[0] = 0;
		iLocal_457[1] = 0;
		iLocal_460[1] = 0;
		iLocal_464 = 0;
		iLocal_465 = 0;
		iLocal_466 = 0;
		iLocal_480 = 0;
		iLocal_313 = 0;
		iLocal_314 = 0;
		iLocal_319 = 0;
		iLocal_385 = 0;
		iLocal_386 = 0;
		iLocal_387 = 0;
		iLocal_388 = 0;
		iLocal_389 = 0;
		iLocal_390 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_393 = 0;
		iLocal_415 = 0;
		iLocal_463 = 0;
		iLocal_481 = 0;
		iLocal_485 = 0;
		iLocal_452 = 0;
		iLocal_107 = 0;
		iLocal_108 = 0;
		iLocal_61 = 0;
		while (iLocal_61 <= 6)
		{
			iLocal_304[iLocal_61] = 0;
			iLocal_353[iLocal_61] = 0;
			iLocal_369[iLocal_61] = 0;
			iLocal_377[iLocal_61] = 0;
			iLocal_361[iLocal_61] = 0;
			iLocal_61++;
		}
		STREAMING::REQUEST_ANIM_DICT("cellphone@str");
		STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				iLocal_56 = func_156(iLocal_31, 0, 0);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, true);
			}
		}
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_31())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				func_28(iLocal_32, -1, 1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_32);
			}
			else
			{
				func_28(0, -1, 1);
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_START");
		MISC::CLEAR_AREA(43.5f, -615.8f, 32.4f, 50f, true, false, false, false);
		iLocal_394 = 1;
		iLocal_60 = 1;
	}
	if (iLocal_60 == 1)
	{
		if (iLocal_463 == 0)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
				func_158("GOD_1", 7500, 1);
				iLocal_463 = 1;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, false))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_TRUCK");
				if (HUD::DOES_BLIP_EXIST(iLocal_56))
				{
					HUD::REMOVE_BLIP(&iLocal_56);
				}
				func_161(656, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				iLocal_60 = 2;
			}
		}
	}
	if (iLocal_60 == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_31))
				{
					if (func_159("HELP_1"))
					{
						HUD::CLEAR_HELP(true);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_56))
					{
						HUD::REMOVE_BLIP(&iLocal_56);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_59))
					{
						HUD::REMOVE_BLIP(&iLocal_59);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_117, Local_130, true) < 100f)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_314 == 1)
							{
								if (MISC::GET_GAME_TIMER() < iLocal_108 + 7500)
								{
									HUD::CLEAR_PRINTS();
									iLocal_314 = 0;
								}
							}
							if (iLocal_415 == 0)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
								func_158("GOD_7", 7500, -1);
								iLocal_415 = 1;
							}
						}
						else if (iLocal_314 == 0)
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
							AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_108 = MISC::GET_GAME_TIMER();
							func_158("GOD_4", 7500, -1);
							iLocal_314 = 1;
						}
					}
					else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						iLocal_60 = 0;
						iLocal_26 = 4;
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_56))
					{
						HUD::REMOVE_BLIP(&iLocal_56);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_30, false))
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_59))
						{
							iLocal_59 = func_156(iLocal_30, 0, 0);
							HUD::SET_BLIP_AS_FRIENDLY(iLocal_59, true);
							if (HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								HUD::CLEAR_PRINTS();
							}
							if (iLocal_393 == 0)
							{
								func_158("GOD_6", 7500, -1);
								iLocal_393 = 1;
							}
							if (!func_159("HELP_1"))
							{
								func_155("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_59))
				{
					HUD::REMOVE_BLIP(&iLocal_59);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_56))
					{
						iLocal_56 = func_156(iLocal_31, 0, 0);
						HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, true);
					}
				}
				if (iLocal_313 == 0)
				{
					HUD::CLEAR_PRINTS();
					func_158("GOD_5", 7500, -1);
					iLocal_313 = 1;
				}
			}
		}
	}
}

void func_161(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_64048 = iParam0;
	if (!Global_64046)
	{
		Global_64046 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_76133)
		{
			if (Global_76134[iVar0 /*9*/] == iParam0)
			{
				Global_76134[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_162()
{
	if (iLocal_60 == 0)
	{
		if (iLocal_302 == 1)
		{
			func_35();
			iLocal_302 = 0;
		}
		func_185();
		func_123();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_97869[3]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97869[3], false))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Global_97869[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97869[3], true, true);
					func_164(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_97869[3])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_97869[3]))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Global_97869[3]))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Global_97869[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97869[3], true, true);
					func_164(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_163(79);
		iLocal_394 = 1;
		iLocal_60 = 1;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 0;
		iLocal_26 = 3;
	}
}

void func_163(int iParam0)
{
	if (Global_98294 != -1)
	{
		if (iParam0 == Global_98294)
		{
			Global_98298 = 1;
			return;
		}
	}
}

void func_164(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_104933.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_104933.f_4, false))
		{
			if (func_184(24) != Global_104933.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_181(ENTITY::GET_ENTITY_COORDS(Global_104933.f_4, true), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_165(Global_104933.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_165(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78038.f_484[25], false))
			{
				if (Global_78038.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_180(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_41(iParam0, &Var0);
		if (func_114(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_79026 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_178(iParam5, &Var0, Param1, fParam4, func_64(iParam0));
		func_166(iParam5, iParam0, 0);
	}
}

void func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_74(&(Global_78038.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_78038.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_78038.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_78038.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_78945 != -1 && Global_78945 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_114370.f_32752.f_4801 = func_167();
			}
			if (iParam1 != Global_78038.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_184(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_40(iVar0, 145);
					}
				}
				Global_78944 = iParam1;
				Global_78945 = iParam0;
				Global_78946 = iParam2;
			}
		}
	}
}

var func_167()
{
	var uVar0;
	
	func_177(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_176(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_175(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_170(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_169(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_168(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_168(var uParam0, int iParam1)
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

void func_169(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_170(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_174(*uParam0);
	iVar1 = func_172(*uParam0);
	if (iParam1 < 1 || iParam1 > func_171(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_171(int iParam0, int iParam1)
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

var func_172(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_173(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_173(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_174(var uParam0)
{
	return uParam0 & 15;
}

void func_175(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_176(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_177(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_178(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_74(&(Global_78038.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_78038.f_555[0 /*21*/].f_9, 10))
		{
			func_179(iParam0);
			func_71(uParam1, &(Global_114370.f_32752.f_69[Global_78038.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_78038.f_555[0 /*21*/].f_9, 11))
			{
				Global_114370.f_32752.f_1864[Global_78038.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_114370.f_32752.f_1934[Global_78038.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_114370.f_32752.f_1864[Global_78038.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_114370.f_32752.f_1934[Global_78038.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_114370.f_32752.f_1958[Global_78038.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_67(iParam0, 1);
		}
	}
}

void func_179(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_74(&(Global_78038.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_78038.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_78038.f_139[iParam0]));
			Global_78038.f_139[iParam0] = 0;
		}
		if (BitTest(Global_78038.f_555[0 /*21*/].f_9, 13))
		{
			func_67(iParam0, 0);
		}
	}
}

void func_180(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_179(iParam0);
	func_67(iParam0, 0);
}

int func_181(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_182(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_182(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_96410[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_96410[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_183(iVar0) || iParam4 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_96410[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

var func_183(int iParam0)
{
	return BitTest(Global_114370.f_7232[iParam0], 0);
}

int func_184(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_78038.f_139[iParam0];
}

void func_185()
{
	Global_95550 = 1;
}

void func_186()
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
	iLocal_51 = PED::ADD_SCENARIO_BLOCKING_AREA(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, false, true, true, true, 1);
	iLocal_52 = PED::ADD_SCENARIO_BLOCKING_AREA(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, false, true, true, true, 1);
	iLocal_53 = PED::ADD_SCENARIO_BLOCKING_AREA(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, false, true, true, true, 1);
	iLocal_54 = PED::ADD_SCENARIO_BLOCKING_AREA(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, false, true, true, true, 1);
	iLocal_49 = PED::ADD_SCENARIO_BLOCKING_AREA(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, false, true, true, true, 1);
	iLocal_50 = PED::ADD_SCENARIO_BLOCKING_AREA(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, false, true, true, true, 1);
	if (func_30())
	{
		if (Global_95549 == 1)
		{
			func_188(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_481 = 1;
			iLocal_302 = 1;
			iLocal_60 = 0;
			iLocal_26 = 5;
		}
		else if (func_187() == 0)
		{
			if (func_122() && func_119(7f, 7f, 7f, 1))
			{
				func_188(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_188(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_302 = 1;
			iLocal_481 = 1;
			iLocal_60 = 0;
			iLocal_26 = 3;
		}
	}
	else if (func_223(0))
	{
		iLocal_302 = 1;
		iLocal_481 = 1;
		iLocal_60 = 0;
		iLocal_26 = 3;
	}
	else
	{
		iLocal_60 = 0;
		iLocal_26 = 2;
	}
}

int func_187()
{
	if (!Global_101392 == 10 && !Global_101392 == 9)
	{
		return 0;
	}
	return Global_101392.f_2;
}

void func_188(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_30())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_101392.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		Global_101388 = { Param0 };
		Global_101391 = fParam3;
		Global_101387 = 1;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(Global_101392.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_101392.f_20), 14);
		}
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_101392.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_101392.f_20), 24);
		}
		func_29(1);
	}
}

void func_189()
{
	if (!func_30())
	{
		iLocal_26 = 1;
	}
	else
	{
		iLocal_26 = 1;
	}
}

void func_190()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 45f, -616.2f, 30.8f, true) < 150f)
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
			{
				iLocal_47 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, true, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_47, 324, true);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
	{
		if (!PED::IS_PED_INJURED(iLocal_47))
		{
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(65.2f, -617.2f, 30.8f, 5f, false))
			{
				if (iLocal_454 == 0)
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_47))
					{
						TASK::CLEAR_PED_TASKS(iLocal_47);
					}
					else
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_47);
					}
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_47, 65.2f, -617.2f, 31f, 2f, 0);
					PED::SET_PED_KEEP_TASK(iLocal_47, true);
					iLocal_111 = MISC::GET_GAME_TIMER();
					iLocal_454 = 1;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_111 + 5000)
				{
					if (!PED::IS_PED_USING_ANY_SCENARIO(iLocal_47))
					{
						iLocal_454 = 0;
					}
				}
			}
			if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_47, 1) < 20f)
			{
				if (iLocal_419 == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_47, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
					iLocal_419 = 1;
				}
			}
			else if (iLocal_419 == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_47, PLAYER::PLAYER_PED_ID(), 1, 0, 2);
				iLocal_419 = 0;
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 45f, -616.2f, 30.8f, true) < 50f)
	{
		if (iLocal_455 == 0)
		{
			iLocal_112 = 498972213;
			iLocal_113 = -512924631;
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_112, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, true, true, false);
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_113, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, true, true, false);
			iLocal_455 = 1;
		}
		if (iLocal_455 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (Local_117.f_0 > 35f)
				{
					if (fLocal_133 < 1f)
					{
						fLocal_133 = (fLocal_133 + 0.02f);
					}
					else
					{
						fLocal_133 = 1f;
					}
					if (fLocal_133 <= 1f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_112, fLocal_133, false, true);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_113, fLocal_133, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_112, 4, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_113, 4, false, true);
						iLocal_420 = 0;
					}
				}
				if (Local_117.f_0 < 35f)
				{
					if (fLocal_133 > 0f)
					{
						fLocal_133 = (fLocal_133 - 0.02f);
					}
					else
					{
						fLocal_133 = 0f;
					}
					if (fLocal_133 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_112, fLocal_133, false, true);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_113, fLocal_133, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_112, 4, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_113, 4, false, true);
						iLocal_420 = 0;
					}
				}
			}
			else if (iLocal_420 == 0)
			{
				if (Local_117.f_0 < 35f)
				{
					if (fLocal_133 > 0f)
					{
						fLocal_133 = (fLocal_133 - 0.02f);
					}
					else
					{
						fLocal_133 = 0f;
					}
					if (fLocal_133 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_112, fLocal_133, false, true);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_113, fLocal_133, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_112, 4, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_113, 4, false, true);
						iLocal_420 = 1;
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, false, true, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
			{
				if (!PED::IS_PED_INJURED(iLocal_47))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_417 == 0)
						{
							if (iLocal_416 == 0)
							{
								func_153(&uLocal_135, 4, iLocal_47, "FHPBSecGuard", 0, 1);
								if (func_191(&uLocal_135, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_416 = 1;
								}
							}
						}
						else if (iLocal_418 == 0)
						{
							func_153(&uLocal_135, 4, iLocal_47, "FHPBSecGuard", 0, 1);
							if (func_191(&uLocal_135, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_418 = 1;
							}
						}
					}
					else if (iLocal_417 == 0)
					{
						func_153(&uLocal_135, 4, iLocal_47, "FHPBSecGuard", 0, 1);
						if (func_191(&uLocal_135, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_417 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_191(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_152(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22173 = 0;
	Global_22175 = 0;
	Global_22180 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 0;
	Global_2883585 = 0;
	return func_140(sParam2, iParam3, 0);
}

float func_192(int iParam0, int iParam1, bool bParam2)
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

void func_193()
{
	int iVar0;
	
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (!func_197() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (iLocal_26 == 3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && iLocal_29 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_27 == 1)
						{
							if (iLocal_390 == 0)
							{
								if (func_195() && func_194())
								{
									if (func_191(&uLocal_135, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_110 = MISC::GET_GAME_TIMER();
										iLocal_390 = 1;
									}
								}
							}
						}
						if (iLocal_27 == 1)
						{
							if (iLocal_390 == 1 && MISC::GET_GAME_TIMER() > iLocal_110 + 7000)
							{
								if (func_195() && func_194())
								{
									if (func_191(&uLocal_135, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_110 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_27 == 2)
					{
						if (iLocal_428 == 0)
						{
							if (func_195())
							{
								if (func_191(&uLocal_135, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_93 = MISC::GET_GAME_TIMER();
									iLocal_428 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_29 == 2 && iLocal_27 == 1)
				{
					if (iLocal_453 == 0)
					{
						if (func_195() && func_194())
						{
							if (func_191(&uLocal_135, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_106 = MISC::GET_GAME_TIMER();
								iLocal_453 = 1;
							}
						}
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_106 + 8000)
					{
						if (func_195() && func_194())
						{
							if (func_191(&uLocal_135, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_106 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (iLocal_27 == 4)
				{
					if (iLocal_389 == 0)
					{
						func_129();
						if (func_195())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_191(&uLocal_135, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_75 = MISC::GET_GAME_TIMER();
									iLocal_385 = 1;
									iLocal_389 = 1;
								}
							}
							else
							{
								iLocal_75 = MISC::GET_GAME_TIMER();
								iLocal_385 = 1;
								iLocal_389 = 1;
							}
						}
					}
					if (iLocal_389 == 1)
					{
						if (iLocal_385 == 0)
						{
							iLocal_75 = MISC::GET_GAME_TIMER();
							iLocal_385 = 1;
						}
						if (iLocal_385 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_75 + 9000)
							{
								if (func_195())
								{
									if (func_191(&uLocal_135, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_385 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_27 == 3)
				{
					if (iLocal_425 == 1)
					{
						if (iLocal_387 == 0)
						{
							if (iLocal_388 == 1)
							{
								if (func_195())
								{
									if (func_191(&uLocal_135, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_387 = 1;
									}
								}
							}
						}
					}
					if (iLocal_386 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, false))
								{
									if (func_195())
									{
										if (func_191(&uLocal_135, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_76 = MISC::GET_GAME_TIMER();
											iLocal_387 = 1;
										}
									}
								}
							}
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_76 + 10000)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, false))
								{
									if (func_195())
									{
										if (func_191(&uLocal_135, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_76 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
					if (iLocal_426 == 1)
					{
						if (iLocal_427 == 0)
						{
							if (func_195())
							{
								if (func_191(&uLocal_135, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_427 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_194()
{
	if (func_14() == 0)
	{
		func_153(&uLocal_135, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_153(&uLocal_135, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_153(&uLocal_135, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_195()
{
	int iVar0;
	
	iLocal_64 = 0;
	while (iLocal_64 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_64]))
		{
			if (!PED::IS_PED_INJURED(iLocal_33[iLocal_64]))
			{
				iVar0 = func_196(PLAYER::PLAYER_PED_ID(), iLocal_300, 0, 0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_33[iLocal_64] && func_192(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 15f)
				{
					func_153(&uLocal_135, 5, iLocal_33[iLocal_64], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_64++;
	}
	return 0;
}

int func_196(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar17]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar17]))
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar17]))
								{
									return iVar0[iVar17];
								}
							}
							else
							{
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2) <= (iVar0 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0[(iVar17 + iParam2)]))
							{
								if (!PED::IS_PED_INJURED(iVar0[(iVar17 + iParam2)]))
								{
									if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[(iVar17 + iParam2)]))
											{
												return iVar0[(iVar17 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar17 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

int func_197()
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_198()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		}
		else
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		}
	}
	func_205();
	if (iLocal_402[0])
	{
		if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_431[0] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_41[0], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
				iLocal_431[0] = 1;
			}
			if (iLocal_431[0] == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_41[0], joaat("script_task_look_at_entity")) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_41[0], joaat("script_task_look_at_entity")) != 1)
				{
					iLocal_431[0] = 0;
				}
			}
		}
		else if (iLocal_431[0] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_41[0], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			iLocal_431[0] = 0;
		}
	}
	if (iLocal_402[1])
	{
		if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_41[1], PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_431[1] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_41[1], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
				iLocal_431[1] = 1;
			}
			if (iLocal_431[1] == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_41[1], joaat("script_task_look_at_entity")) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_41[1], joaat("script_task_look_at_entity")) != 1)
				{
					iLocal_431[1] = 0;
				}
			}
		}
		else if (iLocal_431[1] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_41[1], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			iLocal_431[1] = 0;
		}
	}
	if (iLocal_402[0] && iLocal_402[1])
	{
		if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1))
		{
			iLocal_397 = 1;
			iLocal_398 = 0;
		}
		else
		{
			iLocal_397 = 0;
			iLocal_398 = 1;
		}
	}
	else
	{
		if (iLocal_402[0] && !iLocal_402[1])
		{
			iLocal_397 = 1;
			iLocal_398 = 0;
		}
		if (iLocal_402[1] && !iLocal_402[0])
		{
			iLocal_397 = 0;
			iLocal_398 = 1;
		}
	}
	switch (iLocal_29)
	{
		case 0:
			if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
			{
				if (!TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", true);
				}
				if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_41[0]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(iLocal_41[0]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(863.1551f, -1564.572f, 29.3231f, 5f, true))
								{
									iLocal_103[0] = MISC::GET_GAME_TIMER();
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_41[0]))
									{
										if (iLocal_460[0] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_41[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_457[0] = 0;
											iLocal_460[0] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_103[0] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_41[0], true), 863.1551f, -1564.572f, 29.3231f, true) > 3f)
									{
										if (iLocal_457[0] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_41[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 0.25f, 0, 40000f);
											iLocal_460[0] = 0;
											iLocal_457[0] = 1;
										}
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_41[1]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(iLocal_41[1]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(940.2881f, -1573.877f, 29.3866f, 5f, true))
								{
									iLocal_103[1] = MISC::GET_GAME_TIMER();
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_41[1]))
									{
										if (iLocal_460[1] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_41[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_457[1] = 0;
											iLocal_460[1] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_103[1] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_41[1], true), 940.2881f, -1573.877f, 29.3866f, true) > 3f)
									{
										if (iLocal_457[1] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_41[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 0.25f, 0, 40000f);
											iLocal_460[1] = 0;
											iLocal_457[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_41[0]))
				{
					if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < 20f)
					{
						if ((func_204(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || func_203(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 100f) || PED::CAN_PED_SEE_HATED_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, false, true, 0))
								{
									if (iLocal_449[0] == 0)
									{
										if (!PED::IS_PED_FACING_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_41[0]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_41[0]);
											}
											else
											{
												TASK::CLEAR_PED_TASKS(iLocal_41[0]);
											}
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_41[0], PLAYER::PLAYER_PED_ID(), 5000);
											iLocal_100[0] = MISC::GET_GAME_TIMER();
											func_202(iLocal_41[0]);
											iLocal_449[0] = 1;
										}
									}
									if (iLocal_449[0] == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_100[0] + 5000)
										{
											iLocal_449[0] = 0;
										}
									}
									if (iLocal_405[0] == 0 && iLocal_405[1] == 0)
									{
										if (iLocal_401 == 0)
										{
											func_200(iLocal_41[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_80 = MISC::GET_GAME_TIMER();
											iLocal_401 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_80 + 15000)
										{
											func_200(iLocal_41[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_80 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_405[0] == 1)
										{
											if (iLocal_408 == 0)
											{
												func_200(iLocal_41[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_86 = MISC::GET_GAME_TIMER();
												iLocal_408 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_86 + 15000)
											{
												func_200(iLocal_41[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_86 = MISC::GET_GAME_TIMER();
											}
										}
										if (iLocal_405[1] == 1)
										{
											if (iLocal_409 == 0)
											{
												func_200(iLocal_41[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_87 = MISC::GET_GAME_TIMER();
												iLocal_409 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_87 + 15000)
											{
												func_200(iLocal_41[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_87 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_41[1]))
				{
					if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) < 15f)
					{
						if ((func_204(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || func_203(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 100f))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, false, true, 0))
								{
									if (iLocal_449[1] == 0)
									{
										if (!PED::IS_PED_FACING_PED(iLocal_41[1], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_41[1]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_41[1]);
											}
											else
											{
												TASK::CLEAR_PED_TASKS(iLocal_41[1]);
											}
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_41[1], PLAYER::PLAYER_PED_ID(), 5000);
											iLocal_100[1] = MISC::GET_GAME_TIMER();
											func_202(iLocal_41[1]);
											iLocal_449[1] = 1;
										}
									}
									if (iLocal_449[1] == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_100[1] + 5000)
										{
											iLocal_449[1] = 0;
										}
									}
									if (iLocal_405[0] == 0 && iLocal_405[1] == 0)
									{
										if (iLocal_401 == 0)
										{
											func_200(iLocal_41[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_80 = MISC::GET_GAME_TIMER();
											iLocal_401 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_80 + 15000)
										{
											func_200(iLocal_41[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_80 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_405[1] == 1)
										{
											if (iLocal_408 == 0)
											{
												func_200(iLocal_41[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_86 = MISC::GET_GAME_TIMER();
												iLocal_408 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_86 + 15000)
											{
												func_200(iLocal_41[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_86 = MISC::GET_GAME_TIMER();
											}
										}
										if (iLocal_405[0] == 1)
										{
											if (iLocal_409 == 0)
											{
												func_200(iLocal_41[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_87 = MISC::GET_GAME_TIMER();
												iLocal_409 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_87 + 15000)
											{
												func_200(iLocal_41[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_87 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_481 == 0)
			{
				iLocal_481 = 1;
			}
			if (func_199() || iLocal_396 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_41[0]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_97[0] = MISC::GET_GAME_TIMER();
							iLocal_443[0] = 1;
							if (iLocal_440[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_41[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_41[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_41[0]);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_41[0], 50, true);
								TASK::TASK_COMBAT_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_202(iLocal_41[0]);
								iLocal_440[0] = 1;
							}
						}
						else if (iLocal_446[0] == 0)
						{
							if (iLocal_443[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_41[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_41[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_41[0]);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_41[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 0.25f, 0, 40000f);
								func_202(iLocal_41[0]);
								iLocal_446[0] = 1;
							}
							if (iLocal_443[0] == 1)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_97[0] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_41[0]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_41[0]);
									}
									else
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_41[0]);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_41[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 0.25f, 0, 40000f);
									func_202(iLocal_41[0]);
									iLocal_446[0] = 1;
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_41[1]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[1], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_97[1] = MISC::GET_GAME_TIMER();
							iLocal_443[1] = 1;
							if (iLocal_440[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_41[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_41[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_41[1]);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_41[1], 50, true);
								TASK::TASK_COMBAT_PED(iLocal_41[1], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_202(iLocal_41[1]);
								iLocal_440[1] = 1;
							}
						}
						else if (iLocal_446[1] == 0)
						{
							if (iLocal_443[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_41[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_41[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_41[1]);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_41[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 0.25f, 0, 40000f);
								func_202(iLocal_41[1]);
								iLocal_446[1] = 1;
							}
							if (iLocal_443[1] == 1)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_97[1] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_41[1]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_41[1]);
									}
									else
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_41[1]);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_41[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 0.25f, 0, 40000f);
									func_202(iLocal_41[1]);
									iLocal_446[1] = 1;
								}
							}
						}
					}
				}
				if (func_199())
				{
					if (iLocal_410 == 0)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							iLocal_410 = 1;
						}
					}
					if (iLocal_397 == 1)
					{
						if (iLocal_399 == 0)
						{
							if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[0]))
								{
									func_200(iLocal_41[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_85 = MISC::GET_GAME_TIMER();
									iLocal_399 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_85 + 7000)
						{
							if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[0]))
								{
									func_200(iLocal_41[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_85 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (iLocal_398 == 1)
					{
						if (iLocal_399 == 0)
						{
							if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[1]))
								{
									func_200(iLocal_41[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_85 = MISC::GET_GAME_TIMER();
									iLocal_399 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_85 + 7000)
						{
							if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[1]))
								{
									func_200(iLocal_41[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_85 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_456 == 0)
					{
						iLocal_48 = func_196(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
						if (iLocal_48 != 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
							{
								if (!PED::IS_PED_INJURED(iLocal_48))
								{
									if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_48, 1) < 35f)
									{
										iLocal_456 = 1;
									}
								}
							}
						}
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_456 == 0)
					{
						if (iLocal_397 == 1)
						{
							if (iLocal_400 == 0)
							{
								if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[0]))
									{
										func_200(iLocal_41[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_84 = MISC::GET_GAME_TIMER();
										iLocal_400 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_84 + 7000)
							{
								if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[0]))
									{
										func_200(iLocal_41[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_84 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						if (iLocal_398 == 1)
						{
							if (iLocal_400 == 0)
							{
								if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[1]))
									{
										func_200(iLocal_41[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_84 = MISC::GET_GAME_TIMER();
										iLocal_400 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_84 + 7000)
							{
								if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[1]))
									{
										func_200(iLocal_41[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_84 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
			}
			if (!func_199())
			{
				if (iLocal_412 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 893.2f, -1556.5f, 30f, true) < 18f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_41[0]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_79 = MISC::GET_GAME_TIMER();
									iLocal_412 = 1;
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[1]))
						{
							if (!PED::IS_PED_INJURED(iLocal_41[1]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_79 = MISC::GET_GAME_TIMER();
									iLocal_412 = 1;
								}
							}
						}
					}
				}
				if (iLocal_396 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_41[0]))
						{
							if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_434[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_41[0]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_41[0]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_41[0]);
										}
										TASK::TASK_GO_TO_ENTITY(iLocal_41[0], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 2f, 0);
										func_202(iLocal_41[0]);
										iLocal_434[0] = 1;
									}
									iLocal_94[0] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_94[0] + 500)
								{
									if (iLocal_437[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_41[0]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_41[0]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_41[0]);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_41[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, -1, 0.25f, 0, 40000f);
										func_202(iLocal_41[0]);
										iLocal_437[0] = 1;
									}
								}
							}
							else if (iLocal_482[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_41[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_41[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_41[0]);
								}
								TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(iLocal_55, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_41[0], iLocal_55);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
								func_202(iLocal_41[0]);
								iLocal_482[0] = 1;
							}
							if (iLocal_452 == 0)
							{
								if (iLocal_429 == 0 || iLocal_401 == 1)
								{
									if (iLocal_395 == 0)
									{
										if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[0]))
											{
												func_200(iLocal_41[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_81 = MISC::GET_GAME_TIMER();
												iLocal_82 = MISC::GET_GAME_TIMER();
												iLocal_79 = MISC::GET_GAME_TIMER();
												iLocal_412 = 1;
												iLocal_395 = 1;
												iLocal_405[0] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_81 + 7000)
									{
										if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[0]))
											{
												func_200(iLocal_41[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_81 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_401 == 0)
								{
									if (iLocal_430 == 0)
									{
										if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[0]))
											{
												func_200(iLocal_41[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_395 = 1;
												iLocal_430 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_82 + 7000)
							{
								if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < 15f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[0]))
									{
										func_200(iLocal_41[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_82 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_41[1]))
						{
							if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[1], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_434[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_41[1]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_41[1]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_41[1]);
										}
										TASK::TASK_GO_TO_ENTITY(iLocal_41[1], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 2f, 0);
										func_202(iLocal_41[1]);
										iLocal_434[1] = 1;
									}
									iLocal_94[1] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_94[1] + 500)
								{
									if (iLocal_437[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_41[1]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_41[1]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_41[1]);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_41[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, -1, 0.25f, 0, 40000f);
										func_202(iLocal_41[1]);
										iLocal_437[1] = 1;
									}
								}
							}
							else if (iLocal_482[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_41[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_41[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_41[1]);
								}
								TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(iLocal_55, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_41[1], iLocal_55);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
								func_202(iLocal_41[1]);
								iLocal_482[1] = 1;
							}
							if (iLocal_452 == 0)
							{
								if (iLocal_429 == 0 || iLocal_401 == 1)
								{
									if (iLocal_395 == 0)
									{
										if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[1]))
											{
												func_200(iLocal_41[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_81 = MISC::GET_GAME_TIMER();
												iLocal_83 = MISC::GET_GAME_TIMER();
												iLocal_79 = MISC::GET_GAME_TIMER();
												iLocal_412 = 1;
												iLocal_395 = 1;
												iLocal_405[1] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_81 + 7000)
									{
										if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[1]))
											{
												func_200(iLocal_41[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_81 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_401 == 0)
								{
									if (iLocal_430 == 0)
									{
										if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[1]))
											{
												func_200(iLocal_41[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_395 = 1;
												iLocal_430 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_83 + 7000)
							{
								if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) < 10f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_41[1]))
									{
										func_200(iLocal_41[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_83 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_412 == 1)
					{
						if (iLocal_452 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_79 + 22000)
							{
								iLocal_452 = 1;
							}
						}
					}
					if (iLocal_412 == 1)
					{
						if (iLocal_396 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_79 + 30000)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
								iLocal_396 = 1;
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, true))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_41[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_396 = 1;
								}
							}
							if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_31, 1) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_41[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_396 = 1;
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_41[0]))
						{
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID()))
									{
										iLocal_396 = 1;
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_41[1]))
						{
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[1], PLAYER::PLAYER_PED_ID()))
									{
										iLocal_396 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_199()
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_78 = 0;
		while (iLocal_78 <= 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_78]))
			{
				if (!PED::IS_PED_INJURED(iLocal_33[iLocal_78]))
				{
					if (func_204(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_203(0))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_78], PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_78++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_41[0]))
			{
				if (func_204(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_203(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_41[1]))
			{
				if (func_204(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_203(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[1], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_200(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_201(iParam3), false);
}

int func_201(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_202(int iParam0)
{
	if (iParam0 == iLocal_41[0])
	{
		iLocal_431[0] = 0;
		iLocal_457[0] = 0;
		iLocal_460[0] = 0;
		iLocal_449[0] = 0;
		iLocal_440[0] = 0;
		iLocal_446[0] = 0;
		iLocal_434[0] = 0;
		iLocal_437[0] = 0;
		iLocal_482[0] = 0;
	}
	if (iParam0 == iLocal_41[1])
	{
		iLocal_431[1] = 0;
		iLocal_457[1] = 0;
		iLocal_460[1] = 0;
		iLocal_449[1] = 0;
		iLocal_440[1] = 0;
		iLocal_446[1] = 0;
		iLocal_434[1] = 0;
		iLocal_437[1] = 0;
		iLocal_482[1] = 0;
	}
}

int func_203(int iParam0)
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

int func_204(int iParam0)
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true);
	return uVar0;
}

void func_205()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Local_117 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_41[0]))
		{
			Local_123[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_41[0], true) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_41[1]))
		{
			Local_123[1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_41[1], true) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_41[0]))
		{
			iLocal_402[0] = 1;
		}
		else
		{
			iLocal_402[0] = 0;
		}
	}
	else
	{
		iLocal_402[0] = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_41[1]))
		{
			iLocal_402[1] = 1;
		}
		else
		{
			iLocal_402[1] = 0;
		}
	}
	else
	{
		iLocal_402[1] = 0;
	}
	if (iLocal_29 != 0)
	{
		if (iLocal_29 == 1)
		{
			if (iLocal_402[0] == 1)
			{
				if (iLocal_402[1] == 1)
				{
					if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1))
					{
						if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < 20f)
						{
							if (((Local_117.f_0 < Local_123[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, false, true, 0))
							{
								iLocal_29 = 0;
								iLocal_457[0] = 0;
								iLocal_460[0] = 0;
								iLocal_457[1] = 0;
								iLocal_460[1] = 0;
								iLocal_103[0] = MISC::GET_GAME_TIMER();
								iLocal_103[1] = MISC::GET_GAME_TIMER();
							}
						}
						else if (Local_117.f_0 < Local_123[0 /*3*/])
						{
							iLocal_29 = 0;
							iLocal_457[0] = 0;
							iLocal_460[0] = 0;
							iLocal_457[1] = 0;
							iLocal_460[1] = 0;
							iLocal_103[0] = MISC::GET_GAME_TIMER();
							iLocal_103[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) < 15f)
					{
						if ((Local_117.f_0 > Local_123[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, false, true, 0))
						{
							iLocal_29 = 0;
							iLocal_457[0] = 0;
							iLocal_460[0] = 0;
							iLocal_457[1] = 0;
							iLocal_460[1] = 0;
							iLocal_103[0] = MISC::GET_GAME_TIMER();
							iLocal_103[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (Local_117.f_0 > Local_123[1 /*3*/])
					{
						iLocal_29 = 0;
						iLocal_457[0] = 0;
						iLocal_460[0] = 0;
						iLocal_457[1] = 0;
						iLocal_460[1] = 0;
						iLocal_103[0] = MISC::GET_GAME_TIMER();
						iLocal_103[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1))
				{
					if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < 15f)
					{
						if ((Local_117.f_0 < Local_123[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, false, true, 0))
						{
							iLocal_29 = 0;
							iLocal_457[0] = 0;
							iLocal_460[0] = 0;
							iLocal_457[1] = 0;
							iLocal_460[1] = 0;
							iLocal_103[0] = MISC::GET_GAME_TIMER();
							iLocal_103[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (Local_117.f_0 < Local_123[0 /*3*/])
					{
						iLocal_29 = 0;
						iLocal_457[0] = 0;
						iLocal_460[0] = 0;
						iLocal_457[1] = 0;
						iLocal_460[1] = 0;
						iLocal_103[0] = MISC::GET_GAME_TIMER();
						iLocal_103[1] = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (iLocal_402[1] == 1)
			{
				if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) < 15f)
				{
					if ((Local_117.f_0 > Local_123[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, false, true, 0))
					{
						iLocal_29 = 0;
						iLocal_457[0] = 0;
						iLocal_460[0] = 0;
						iLocal_457[1] = 0;
						iLocal_460[1] = 0;
						iLocal_103[0] = MISC::GET_GAME_TIMER();
						iLocal_103[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (Local_117.f_0 > Local_123[1 /*3*/])
				{
					iLocal_29 = 0;
					iLocal_457[0] = 0;
					iLocal_460[0] = 0;
					iLocal_457[1] = 0;
					iLocal_460[1] = 0;
					iLocal_103[0] = MISC::GET_GAME_TIMER();
					iLocal_103[1] = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (iLocal_29 == 2)
		{
			if (iLocal_396 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, false, true, 0) || Local_117.f_0 > 942f)
				{
					if (!PED::IS_PED_INJURED(iLocal_41[1]))
					{
						if (Local_117.f_0 > Local_123[1 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 90f))
							{
								iLocal_29 = 0;
								iLocal_457[0] = 0;
								iLocal_460[0] = 0;
								iLocal_457[1] = 0;
								iLocal_460[1] = 0;
								iLocal_103[0] = MISC::GET_GAME_TIMER();
								iLocal_103[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (Local_117.f_0 > 942f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 90f))
						{
							iLocal_29 = 0;
							iLocal_457[0] = 0;
							iLocal_460[0] = 0;
							iLocal_457[1] = 0;
							iLocal_460[1] = 0;
							iLocal_103[0] = MISC::GET_GAME_TIMER();
							iLocal_103[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, false, true, 0) || Local_117.f_0 < 860f)
				{
					if (!PED::IS_PED_INJURED(iLocal_41[0]))
					{
						if (Local_117.f_0 < Local_123[0 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 90f))
							{
								iLocal_29 = 0;
								iLocal_457[0] = 0;
								iLocal_460[0] = 0;
								iLocal_457[1] = 0;
								iLocal_460[1] = 0;
								iLocal_103[0] = MISC::GET_GAME_TIMER();
								iLocal_103[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (Local_117.f_0 < 860f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 90f))
						{
							iLocal_29 = 0;
							iLocal_457[0] = 0;
							iLocal_460[0] = 0;
							iLocal_457[1] = 0;
							iLocal_460[1] = 0;
							iLocal_103[0] = MISC::GET_GAME_TIMER();
							iLocal_103[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	if (iLocal_29 != 1)
	{
		if (iLocal_29 != 2)
		{
			if (iLocal_402[0] == 1)
			{
				if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < 20f)
				{
					if ((func_204(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || func_203(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, false, true, 0))
						{
							if (Local_117.f_0 > Local_123[0 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 90f))
							{
								iLocal_29 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, false, true, 0))
						{
							iLocal_29 = 1;
						}
					}
				}
			}
			if (iLocal_402[1] == 1)
			{
				if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) < 15f)
				{
					if ((func_204(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || func_203(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, false, true, 0))
						{
							if (Local_117.f_0 < Local_123[1 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 90f))
							{
								iLocal_29 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_29 != 2)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_29 = 2;
			iLocal_396 = 1;
		}
		if (iLocal_480 == 1)
		{
			iLocal_29 = 2;
			iLocal_396 = 1;
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_41[0]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_29 = 2;
						iLocal_396 = 1;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_41[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_41[1]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_29 = 2;
						iLocal_396 = 1;
					}
				}
			}
		}
		if (iLocal_429 == 0)
		{
			if (iLocal_428 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_93 + 4000)
				{
					iLocal_92 = 0;
					while (iLocal_92 <= 6)
					{
						if (func_197())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_92]))
							{
								if (!PED::IS_PED_INJURED(iLocal_33[iLocal_92]))
								{
									if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_33[iLocal_92]))
									{
										iLocal_29 = 2;
										iLocal_429 = 1;
									}
								}
							}
						}
						iLocal_92++;
					}
				}
			}
		}
		if ((iLocal_27 == 4 || iLocal_27 == 3) || iLocal_428 == 1)
		{
			iLocal_29 = 2;
			iLocal_425 = 1;
			iLocal_396 = 1;
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_402[0] == 1)
			{
				if (func_204(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_203(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_29 = 2;
					}
				}
			}
			if (iLocal_402[1] == 1)
			{
				if (func_204(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_203(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_29 = 2;
					}
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_117, Local_130, true) < 36f)
		{
			if (iLocal_402[0] == 1)
			{
				if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID()))
				{
					iLocal_29 = 2;
				}
				if (func_192(iLocal_41[0], PLAYER::PLAYER_PED_ID(), 1) < 20f)
				{
					if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_41[0]))
					{
						iLocal_29 = 2;
					}
				}
			}
			if (iLocal_402[1] == 1)
			{
				if (Local_117.f_2 < 36f || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_29 = 2;
					}
					if (func_192(iLocal_41[1], PLAYER::PLAYER_PED_ID(), 1) < 20f)
					{
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_41[1]))
						{
							iLocal_29 = 2;
						}
					}
				}
			}
		}
		if (iLocal_402[0] == 1)
		{
			if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[0], 1) < 20f)
			{
				if (Local_117.f_0 > Local_123[0 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, false, true, 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[0], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_41[0]))
					{
						iLocal_29 = 2;
					}
				}
			}
		}
		if (iLocal_402[1] == 1)
		{
			if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_41[1], 1) < 20f)
			{
				if (Local_117.f_0 < Local_123[1 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, false, true, 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_41[1], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_41[1]))
					{
						iLocal_29 = 2;
					}
				}
			}
		}
	}
}

void func_206()
{
	iLocal_62 = 0;
	while (iLocal_62 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_62]))
		{
			if (!PED::IS_PED_INJURED(iLocal_33[iLocal_62]))
			{
				if (iLocal_328[iLocal_62] == 0)
				{
					if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_62], 1) > 20f)
					{
						iLocal_328[iLocal_62] = 1;
					}
				}
				if (iLocal_328[iLocal_62] == 1)
				{
					if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_62], 1) < 20f)
					{
						iLocal_328[iLocal_62] = 0;
					}
				}
			}
			else if (iLocal_328[iLocal_62] == 0)
			{
				iLocal_328[iLocal_62] = 1;
			}
		}
		else if (iLocal_328[iLocal_62] == 0)
		{
			iLocal_328[iLocal_62] = 1;
		}
		iLocal_62++;
	}
	if (((((iLocal_328[0] == 1 && iLocal_328[1] == 1) && iLocal_328[2] == 1) && iLocal_328[3] == 1) && iLocal_328[4] == 1) && iLocal_328[5] == 1)
	{
		iLocal_336 = 1;
	}
	else
	{
		iLocal_336 = 0;
	}
	iLocal_61 = 0;
	while (iLocal_61 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_61]))
		{
			if (!PED::IS_PED_INJURED(iLocal_33[iLocal_61]))
			{
				func_211(iLocal_33[iLocal_61]);
				if (iLocal_26 == 3 || iLocal_26 == 4)
				{
					if (iLocal_29 == 2 && iLocal_27 == 0)
					{
						func_210(1);
						if (iLocal_414 == 1)
						{
							func_129();
						}
					}
					if (PED::HAS_PED_RECEIVED_EVENT(iLocal_33[iLocal_61], 18))
					{
						if (iLocal_27 != 4)
						{
							func_210(4);
							if (iLocal_414 == 1)
							{
								func_208();
							}
							iLocal_480 = 1;
						}
					}
					if (iLocal_27 != 4)
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_210(4);
							if (iLocal_414 == 1)
							{
								func_208();
							}
						}
					}
					if ((((((((func_207(iLocal_33[iLocal_61], iLocal_33[0]) || func_207(iLocal_33[iLocal_61], iLocal_33[1])) || func_207(iLocal_33[iLocal_61], iLocal_33[2])) || func_207(iLocal_33[iLocal_61], iLocal_33[3])) || func_207(iLocal_33[iLocal_61], iLocal_33[4])) || func_207(iLocal_33[iLocal_61], iLocal_33[5])) || func_207(iLocal_33[iLocal_61], iLocal_33[6])) || func_207(iLocal_33[iLocal_61], iLocal_41[0])) || func_207(iLocal_33[iLocal_61], iLocal_41[1]))
					{
						if (iLocal_27 != 4)
						{
							func_210(4);
							if (iLocal_414 == 1)
							{
								func_208();
							}
							iLocal_480 = 1;
						}
					}
					if ((func_204(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || func_203(0))
					{
						if (iLocal_396 == 0)
						{
							if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_61], 1) > 20f)
							{
								if (iLocal_320[iLocal_61] == 1)
								{
									iLocal_320[iLocal_61] = 0;
								}
								if (((((iLocal_336 == 1 && iLocal_27 != 0) && iLocal_27 != 2) && iLocal_27 != 3) && iLocal_27 != 4) && iLocal_29 != 2)
								{
									func_210(0);
								}
							}
							if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_61], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()))
							{
								if (((iLocal_27 != 1 && iLocal_27 != 2) && iLocal_27 != 3) && iLocal_27 != 4)
								{
									if (iLocal_429 == 0 && iLocal_396 == 0)
									{
										func_210(1);
										if (iLocal_414 == 1)
										{
											func_129();
										}
									}
									else
									{
										func_210(3);
										if (iLocal_414 == 1)
										{
											func_208();
										}
									}
								}
							}
							if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_61], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_320[iLocal_61] == 0)
								{
									iLocal_67[iLocal_61] = MISC::GET_GAME_TIMER();
									iLocal_320[iLocal_61] = 1;
								}
								if (iLocal_320[iLocal_61] == 1)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_67[iLocal_61] + 24000)
									{
										if ((iLocal_27 != 2 && iLocal_27 != 3) && iLocal_27 != 4)
										{
											func_210(2);
											if (iLocal_414 == 1)
											{
												func_208();
											}
										}
									}
								}
							}
						}
						if (iLocal_396 == 1)
						{
							if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_61], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_27 != 3 && iLocal_27 != 4)
								{
									func_210(3);
									if (iLocal_414 == 1)
									{
										func_208();
									}
								}
							}
						}
						if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_411 == 0)
							{
								iLocal_88 = MISC::GET_GAME_TIMER();
								iLocal_411 = 1;
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_88 + 3000)
							{
								if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_61], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_27 != 3 && iLocal_27 != 4)
									{
										func_210(3);
										if (iLocal_414 == 1)
										{
											func_208();
										}
									}
								}
							}
						}
						else if (iLocal_411 == 1)
						{
							iLocal_411 = 0;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, true))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_27 != 3 && iLocal_27 != 4)
										{
											iLocal_388 = 1;
											func_210(3);
											if (iLocal_414 == 1)
											{
												func_208();
											}
										}
									}
								}
								if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_31, 1) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_27 != 3 && iLocal_27 != 4)
										{
											iLocal_388 = 1;
											func_210(3);
											if (iLocal_414 == 1)
											{
												func_208();
											}
										}
									}
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, false, true, 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[0]))
										{
											if (!PED::IS_PED_INJURED(iLocal_33[0]))
											{
												if (ENTITY::IS_ENTITY_AT_COORD(iLocal_33[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, false, true, 0))
												{
													if (iLocal_27 != 3 && iLocal_27 != 4)
													{
														iLocal_388 = 1;
														func_210(3);
														if (iLocal_414 == 1)
														{
															func_208();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[6]))
						{
							if (!PED::IS_PED_INJURED(iLocal_33[6]))
							{
								if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_33[6], 1) < 20f)
								{
									if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, false, true, 0))
									{
										if (PED::CAN_PED_SEE_HATED_PED(iLocal_33[6], PLAYER::PLAYER_PED_ID()))
										{
											if (Local_117.f_2 > 31f)
											{
												if (iLocal_27 != 3 && iLocal_27 != 4)
												{
													iLocal_426 = 1;
													func_210(3);
													if (iLocal_414 == 1)
													{
														func_208();
													}
												}
											}
											else if (((iLocal_27 != 1 && iLocal_27 != 2) && iLocal_27 != 3) && iLocal_27 != 4)
											{
												func_210(1);
												if (iLocal_414 == 1)
												{
													func_129();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_319 == 0)
						{
							iLocal_66 = MISC::GET_GAME_TIMER();
							iLocal_319 = 1;
						}
						if (iLocal_319 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_66 + 4000 || iLocal_27 == 3)
							{
								if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_61], 1) < 20f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_27 != 4)
										{
											func_210(4);
											if (iLocal_414 == 1)
											{
												func_208();
											}
										}
									}
								}
							}
						}
						if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_61], 1) < 40f)
						{
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_33[iLocal_61]))
								{
									if (iLocal_27 != 4)
									{
										func_210(4);
										if (iLocal_414 == 1)
										{
											func_208();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_61++;
	}
}

int func_207(int iParam0, int iParam1)
{
	if (((func_192(iParam0, iParam1, 1) < 20f && PED::IS_PED_FACING_PED(iParam0, iParam1, 90f)) && !PED::IS_PED_INJURED(iParam0)) && PED::IS_PED_INJURED(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_208()
{
	Global_21032 = 0;
	func_209();
}

void func_209()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
	}
}

void func_210(int iParam0)
{
	iLocal_27 = iParam0;
	iLocal_65 = 0;
}

void func_211(int iParam0)
{
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (iParam0 == iLocal_33[iLocal_63])
		{
			if (func_192(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_337[iLocal_63] == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
					iLocal_337[iLocal_63] = 1;
				}
			}
			else if (iLocal_337[iLocal_63] == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1, 1072, 3);
				iLocal_337[iLocal_63] = 0;
			}
		}
		iLocal_63++;
	}
	switch (iLocal_27)
	{
		case 0:
			if (iLocal_65 == 0)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
				if (iParam0 == iLocal_33[0])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_33[1])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_33[2])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_33[3])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_33[4])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_33[5])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_33[6])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_65++;
			}
			if (iLocal_65 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[4]))
				{
					if (!PED::IS_PED_INJURED(iLocal_33[4]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[5]))
						{
							if (!PED::IS_PED_INJURED(iLocal_33[5]))
							{
								if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_33[4], 1) < 25f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, false, true, 0) || Local_117.f_1 > -1573f)
									{
										if (iLocal_414 == 0)
										{
											func_153(&uLocal_135, 3, iLocal_33[4], "CONSTRUCTION2", 0, 1);
											func_153(&uLocal_135, 5, iLocal_33[5], "CONSTRUCTION3", 0, 1);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_33[4], iLocal_33[5], -1, 0, 2);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_33[5], iLocal_33[4], -1, 0, 2);
											if (!func_197())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_191(&uLocal_135, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_414 = 1;
													}
												}
											}
										}
									}
								}
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, false, true, 1))
								{
									if (iLocal_421 == 0)
									{
										iLocal_90 = MISC::GET_GAME_TIMER();
										iLocal_421 = 1;
									}
									if (iLocal_421 == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_90 + 4000)
										{
											if (iLocal_414 == 0)
											{
												func_153(&uLocal_135, 3, iLocal_33[4], "CONSTRUCTION2", 0, 1);
												func_153(&uLocal_135, 5, iLocal_33[5], "CONSTRUCTION3", 0, 1);
												TASK::TASK_LOOK_AT_ENTITY(iLocal_33[4], iLocal_33[5], -1, 0, 2);
												TASK::TASK_LOOK_AT_ENTITY(iLocal_33[5], iLocal_33[4], -1, 0, 2);
												if (!func_197())
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (func_191(&uLocal_135, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_414 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_414 == 1 && !func_197())
								{
									if (iLocal_413 == 0)
									{
										if (TASK::DOES_SCENARIO_EXIST_IN_AREA(865f, -1558.1f, 29.5f, 3f, false))
										{
											TASK::TASK_CLEAR_LOOK_AT(iLocal_33[4]);
											TASK::TASK_CLEAR_LOOK_AT(iLocal_33[5]);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_33[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_413 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_33[6])
				{
					if (iLocal_422 == 0)
					{
						if (iLocal_423 == 0)
						{
							iLocal_91 = MISC::GET_GAME_TIMER();
							iLocal_423 = 1;
						}
						if (MISC::GET_GAME_TIMER() > iLocal_91 + 30000)
						{
							if (iLocal_422 == 0)
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(925f, -1561f, 30f, 3f, false))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_33[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_422 = 1;
									iLocal_423 = 0;
								}
							}
						}
					}
					if (iLocal_422 == 1)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_33[6], 925f, -1561f, 30f, 3f, 3f, 3f, false, true, 0))
						{
							if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_33[6], 1) < 15f && Local_117.f_2 < 40f)
							{
								if (iLocal_424 == 0)
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(909.5f, -1515.5f, 30f, 3f, false))
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_424 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_65 == 0)
			{
				iLocal_63 = 0;
				while (iLocal_63 <= 6)
				{
					if (iLocal_29 == 0)
					{
						if (iParam0 == iLocal_33[iLocal_63])
						{
							if (func_192(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f)
							{
								if (iLocal_345[iLocal_63] == 0)
								{
									if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
										}
										if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS(iParam0);
										}
										TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
										TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2f, 1f, 2f, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
										TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_55);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
										iLocal_337[iLocal_63] = 0;
										iLocal_345[iLocal_63] = 1;
									}
								}
								if (iLocal_345[iLocal_63] == 1)
								{
									if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
										iLocal_345[iLocal_63] = 0;
									}
								}
							}
							else
							{
								if (iLocal_345[iLocal_63] == 1)
								{
									iLocal_345[iLocal_63] = 0;
								}
								if (iParam0 == iLocal_33[0])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[0], true);
										}
									}
								}
								if (iParam0 == iLocal_33[1])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[1], 917.4f, -1517.4f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[1], true);
										}
									}
								}
								if (iParam0 == iLocal_33[2])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[2], true);
										}
									}
								}
								if (iParam0 == iLocal_33[3])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[3], 884.2f, -1574.1f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[3], true);
										}
									}
								}
								if (iParam0 == iLocal_33[4])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[4], 904f, -1575f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[4], true);
										}
									}
								}
								if (iParam0 == iLocal_33[5])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[5], true);
										}
									}
								}
								if (iParam0 == iLocal_33[6])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[6], 889.5f, -1562f, 29.7f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[6], true);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_33[iLocal_63])
					{
						if (func_192(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f)
						{
							if (iLocal_345[iLocal_63] == 0)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_55);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
									iLocal_337[iLocal_63] = 0;
									iLocal_345[iLocal_63] = 1;
								}
							}
							if (iLocal_345[iLocal_63] == 1)
							{
								if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
									iLocal_345[iLocal_63] = 0;
								}
							}
						}
						else
						{
							if (iLocal_345[iLocal_63] == 1)
							{
								iLocal_345[iLocal_63] = 0;
							}
							if (iParam0 == iLocal_33[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[0], true);
									}
								}
							}
							if (iParam0 == iLocal_33[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[1], true);
									}
								}
							}
							if (iParam0 == iLocal_33[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[2], true);
									}
								}
							}
							if (iParam0 == iLocal_33[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[3], true);
									}
								}
							}
							if (iParam0 == iLocal_33[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[4], true);
									}
								}
							}
							if (iParam0 == iLocal_33[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[5], true);
									}
								}
							}
							if (iParam0 == iLocal_33[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[6], true);
									}
								}
							}
						}
					}
					iLocal_63++;
				}
			}
			break;
		
		case 2:
			if (iLocal_481 == 0)
			{
				iLocal_481 = 1;
			}
			if (iLocal_65 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_300, joaat("player"));
				iLocal_65++;
			}
			if (iLocal_65 == 1)
			{
				iLocal_63 = 0;
				while (iLocal_63 <= 6)
				{
					if (iParam0 == iLocal_33[iLocal_63])
					{
						if (func_192(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 15f)
						{
							if (func_192(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 3f)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_perform_sequence")) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_perform_sequence")) != 1)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
									TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1f, 1f, 2f, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_55);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
									iLocal_337[iLocal_63] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_33[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[0], true);
									}
								}
							}
							if (iParam0 == iLocal_33[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[1], true);
									}
								}
							}
							if (iParam0 == iLocal_33[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[2], true);
									}
								}
							}
							if (iParam0 == iLocal_33[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[3], true);
									}
								}
							}
							if (iParam0 == iLocal_33[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[4], true);
									}
								}
							}
							if (iParam0 == iLocal_33[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[5], true);
									}
								}
							}
							if (iParam0 == iLocal_33[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[6], true);
									}
								}
							}
						}
					}
					iLocal_63++;
				}
			}
			break;
		
		case 3:
			if (iLocal_481 == 0)
			{
				iLocal_481 = 1;
			}
			if (iLocal_391 == 0)
			{
				if (iLocal_392 == 0)
				{
					iLocal_77 = MISC::GET_GAME_TIMER();
					iLocal_392 = 1;
				}
				if (iLocal_392 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_77 + 9000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						iLocal_391 = 1;
					}
				}
			}
			if (iLocal_65 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_300, joaat("player"));
				iLocal_65++;
			}
			if (iLocal_65 == 1)
			{
				if (iLocal_26 == 3)
				{
					iLocal_63 = 0;
					while (iLocal_63 <= 6)
					{
						if (iParam0 == iLocal_33[iLocal_63])
						{
							if (func_192(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 100f)
							{
								if (iLocal_353[iLocal_63] == 0)
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
									iLocal_353[iLocal_63] = 1;
								}
								if (iLocal_361[iLocal_63] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
									iLocal_337[iLocal_63] = 0;
									iLocal_361[iLocal_63] = 1;
								}
							}
						}
						iLocal_63++;
					}
					if (iLocal_466 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_33[0]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, true) && ENTITY::IS_ENTITY_AT_COORD(iLocal_31, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, false, true, 0))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[0]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_33[0]);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[0]))
											{
												TASK::CLEAR_PED_TASKS(iLocal_33[0]);
											}
											TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 917.8f, -1561f, 29f, 3f, -1, 0.25f, 0, 40000f);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
											TASK::TASK_PLAY_ANIM(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_33[0], iLocal_55);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
											iLocal_466 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_466 == 1 && iLocal_485 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_33[0]))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_33[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, false, true, 0))
								{
									func_153(&uLocal_135, 3, iLocal_33[0], "FHPrepBWorker", 0, 1);
									func_200(iLocal_33[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_485 = 1;
								}
							}
						}
					}
					if (iLocal_465 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_77 + 3000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[5]))
							{
								if (!PED::IS_PED_INJURED(iLocal_33[5]))
								{
									TASK::TASK_PLAY_ANIM(iLocal_33[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0f, false, false, false);
									iLocal_109 = MISC::GET_GAME_TIMER();
									iLocal_465 = 1;
								}
							}
						}
					}
					else if (iLocal_464 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_109 + 5000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[5]))
							{
								if (!PED::IS_PED_INJURED(iLocal_33[5]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_33[5]);
									TASK::TASK_COMBAT_PED(iLocal_33[5], PLAYER::PLAYER_PED_ID(), 0, 16);
									iLocal_464 = 1;
								}
							}
						}
					}
				}
				iLocal_63 = 0;
				while (iLocal_63 <= 6)
				{
					if (iLocal_304[iLocal_63] == 0)
					{
						if (iParam0 == iLocal_33[iLocal_63])
						{
							if (ENTITY::DOES_ENTITY_EXIST(iParam0))
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
									if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
									{
										if (func_192(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 200f)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
											{
												TASK::CLEAR_PED_TASKS(iParam0);
											}
											TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
											iLocal_304[iLocal_63] = 1;
										}
									}
									else if (func_192(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 100f)
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
										}
										if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS(iParam0);
										}
										TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
										iLocal_304[iLocal_63] = 1;
									}
								}
							}
						}
					}
					iLocal_63++;
				}
			}
			if (iLocal_26 == 4)
			{
				iLocal_63 = 0;
				while (iLocal_63 <= 6)
				{
					if (iLocal_304[iLocal_63] == 0)
					{
						if (iParam0 == iLocal_33[iLocal_63])
						{
							if (ENTITY::DOES_ENTITY_EXIST(iParam0))
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
									TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
									PED::SET_PED_KEEP_TASK(iParam0, true);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
									iLocal_304[iLocal_63] = 1;
								}
							}
						}
					}
					iLocal_63++;
				}
			}
			break;
		
		case 4:
			if (iLocal_481 == 0)
			{
				iLocal_481 = 1;
			}
			if (iLocal_391 == 0)
			{
				if (iLocal_392 == 0)
				{
					iLocal_77 = MISC::GET_GAME_TIMER();
					iLocal_392 = 1;
				}
				if (iLocal_392 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_77 + 6000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						iLocal_391 = 1;
					}
				}
			}
			if (iLocal_65 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_300, joaat("player"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
				iLocal_65++;
			}
			if (iLocal_65 == 1)
			{
				iLocal_63 = 0;
				while (iLocal_63 <= 6)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_63]))
					{
						if (!PED::IS_PED_INJURED(iLocal_33[iLocal_63]))
						{
							if (func_192(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_63], 1) < 15f)
							{
								if (func_212(iLocal_33[iLocal_63], 6))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_63], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_377[iLocal_63] == 0)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[iLocal_63]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_33[iLocal_63]);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[iLocal_63]))
											{
												TASK::CLEAR_PED_TASKS(iLocal_33[iLocal_63]);
											}
											TASK::TASK_HANDS_UP(iLocal_33[iLocal_63], -1, PLAYER::PLAYER_PED_ID(), -1, 0);
											iLocal_377[iLocal_63] = 1;
											iLocal_369[iLocal_63] = 0;
											iLocal_337[iLocal_63] = 0;
											iLocal_89 = MISC::GET_GAME_TIMER();
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_89 + 300)
									{
										iLocal_369[iLocal_63] = 0;
									}
								}
								else if (iLocal_369[iLocal_63] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[iLocal_63]))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_33[iLocal_63]);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[iLocal_63]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_33[iLocal_63]);
									}
									TASK::TASK_SMART_FLEE_PED(iLocal_33[iLocal_63], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
									iLocal_369[iLocal_63] = 1;
									iLocal_377[iLocal_63] = 0;
								}
							}
							else if (iLocal_369[iLocal_63] == 0)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[iLocal_63]))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_33[iLocal_63]);
								}
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[iLocal_63]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_33[iLocal_63]);
								}
								TASK::TASK_SMART_FLEE_PED(iLocal_33[iLocal_63], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
								iLocal_369[iLocal_63] = 1;
								iLocal_377[iLocal_63] = 0;
							}
						}
					}
					iLocal_63++;
				}
			}
			break;
	}
}

int func_212(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam1))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_213()
{
	iLocal_44 = func_26(0);
	iLocal_45 = func_26(1);
	iLocal_46 = func_26(2);
	if (func_34(iLocal_44, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_44))
		{
			if (!func_33(iLocal_44))
			{
				if (!func_215())
				{
					if (func_214(iLocal_44))
					{
						if (func_32(iLocal_44, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_44, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_44, true);
							TASK::CLEAR_PED_TASKS(iLocal_44);
							iLocal_471 = 0;
							iLocal_474 = 0;
							iLocal_477 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_471 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_471 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_44, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_44, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							iLocal_471 = 1;
						}
					}
				}
				if (iLocal_471 == 0)
				{
					if (func_215())
					{
						iLocal_471 = 1;
					}
				}
				if (iLocal_468 == 1)
				{
					if ((func_214(iLocal_44) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_44, true)) && iLocal_471 == 0)
					{
						Local_120 = { ENTITY::GET_ENTITY_COORDS(iLocal_44, true) };
						PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_120.f_0, Local_120.f_1, Local_114.f_0, Local_114.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_474 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_120.f_0, Local_120.f_1, Local_114.f_0, Local_114.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_44, PED::GET_VEHICLE_PED_IS_IN(iLocal_44, false), Local_114, 4, 30f, 786468, 3f, 15f, false);
									iLocal_477 = 0;
									iLocal_474 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_120, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_477 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_44, PED::GET_VEHICLE_PED_IS_IN(iLocal_44, false), VEHICLE::GET_CLOSEST_VEHICLE(Local_120, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_474 = 0;
								iLocal_477 = 1;
							}
						}
						else if (iLocal_474 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_120.f_0, Local_120.f_1, Local_114.f_0, Local_114.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_44, PED::GET_VEHICLE_PED_IS_IN(iLocal_44, false), Local_114, 4, 30f, 786468, 3f, 15f, false);
								iLocal_477 = 0;
								iLocal_474 = 1;
							}
						}
					}
					else
					{
						iLocal_471 = 1;
					}
				}
				if (iLocal_471 == 1)
				{
					if (func_25(iLocal_44))
					{
						iLocal_471 = 0;
					}
				}
			}
		}
	}
	if (func_34(iLocal_46, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_46))
		{
			if (!func_33(iLocal_46))
			{
				if (!func_215())
				{
					if (func_214(iLocal_46))
					{
						if (func_32(iLocal_46, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_46, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_46, true);
							TASK::CLEAR_PED_TASKS(iLocal_46);
							iLocal_473 = 0;
							iLocal_475 = 0;
							iLocal_478 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_473 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_473 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_46, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_46, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							iLocal_473 = 1;
						}
					}
				}
				if (iLocal_473 == 0)
				{
					if (func_215())
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_469 == 1)
				{
					if ((func_214(iLocal_46) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_46, true)) && iLocal_473 == 0)
					{
						Local_120 = { ENTITY::GET_ENTITY_COORDS(iLocal_46, true) };
						PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_120.f_0, Local_120.f_1, Local_114.f_0, Local_114.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_475 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_120.f_0, Local_120.f_1, Local_114.f_0, Local_114.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_46, PED::GET_VEHICLE_PED_IS_IN(iLocal_46, false), Local_114, 4, 30f, 786468, 3f, 15f, false);
									iLocal_478 = 0;
									iLocal_475 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_120, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_478 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_46, PED::GET_VEHICLE_PED_IS_IN(iLocal_46, false), VEHICLE::GET_CLOSEST_VEHICLE(Local_120, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_475 = 0;
								iLocal_478 = 1;
							}
						}
						else if (iLocal_475 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_120.f_0, Local_120.f_1, Local_114.f_0, Local_114.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_46, PED::GET_VEHICLE_PED_IS_IN(iLocal_46, false), Local_114, 4, 30f, 786468, 3f, 15f, false);
								iLocal_478 = 0;
								iLocal_475 = 1;
							}
						}
					}
					else
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_473 == 1)
				{
					if (func_25(iLocal_46))
					{
						iLocal_473 = 0;
					}
				}
			}
		}
	}
	if (func_34(iLocal_45, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_45))
		{
			if (!func_33(iLocal_45))
			{
				if (!func_215())
				{
					if (func_214(iLocal_45))
					{
						if (func_32(iLocal_45, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_45, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_45, true);
							TASK::CLEAR_PED_TASKS(iLocal_45);
							iLocal_472 = 0;
							iLocal_476 = 0;
							iLocal_479 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_472 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_472 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_45, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_45, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							iLocal_472 = 1;
						}
					}
				}
				if (iLocal_472 == 0)
				{
					if (func_215())
					{
						iLocal_472 = 1;
					}
				}
				if (iLocal_470 == 1)
				{
					if ((func_214(iLocal_45) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_45, true)) && iLocal_472 == 0)
					{
						Local_120 = { ENTITY::GET_ENTITY_COORDS(iLocal_45, true) };
						PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_120.f_0, Local_120.f_1, Local_114.f_0, Local_114.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_476 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_120.f_0, Local_120.f_1, Local_114.f_0, Local_114.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_45, PED::GET_VEHICLE_PED_IS_IN(iLocal_45, false), Local_114, 4, 30f, 786468, 3f, 15f, false);
									iLocal_479 = 0;
									iLocal_476 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_120, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_479 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_45, PED::GET_VEHICLE_PED_IS_IN(iLocal_45, false), VEHICLE::GET_CLOSEST_VEHICLE(Local_120, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_476 = 0;
								iLocal_479 = 1;
							}
						}
						else if (iLocal_476 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_120.f_0, Local_120.f_1, Local_114.f_0, Local_114.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_45, PED::GET_VEHICLE_PED_IS_IN(iLocal_45, false), Local_114, 4, 30f, 786468, 3f, 15f, false);
								iLocal_479 = 0;
								iLocal_476 = 1;
							}
						}
					}
					else
					{
						iLocal_472 = 1;
					}
				}
				if (iLocal_472 == 1)
				{
					if (func_25(iLocal_45))
					{
						iLocal_472 = 0;
					}
				}
			}
		}
	}
}

int func_214(int iParam0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == iParam0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
					{
						if ((PED::IS_PED_IN_VEHICLE(iParam0, iLocal_31, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_31, -1, false) == iParam0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_31, Local_114, 3f, 3f, 3f, false, true, 0))
						{
							if (iParam0 == iLocal_44)
							{
								iLocal_468 = 1;
							}
							if (iParam0 == iLocal_46)
							{
								iLocal_469 = 1;
							}
							if (iParam0 == iLocal_45)
							{
								iLocal_470 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_44)
	{
		iLocal_468 = 0;
	}
	if (iParam0 == iLocal_46)
	{
		iLocal_469 = 0;
	}
	if (iParam0 == iLocal_45)
	{
		iLocal_470 = 0;
	}
	return 0;
}

bool func_215()
{
	return Global_23570;
}

void func_216()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, false))
		{
			func_219(3);
			return;
		}
		else
		{
			if (func_218(&iLocal_31))
			{
				func_219(2);
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_30))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_30, false))
				{
					func_219(1);
					return;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_30, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_31))
					{
						if ((VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_30) || func_217(iLocal_30)) || func_218(&iLocal_30))
						{
							func_219(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_26 == 3 || iLocal_26 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_30))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_30, false))
			{
				if (func_192(iLocal_30, PLAYER::PLAYER_PED_ID(), 1) > 600f)
				{
					func_219(5);
					return;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
	{
		if (PED::IS_PED_INJURED(iLocal_47))
		{
			func_219(6);
			return;
		}
	}
}

int func_217(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_219(int iParam0)
{
	iLocal_28 = iParam0;
	if (iLocal_26 != 6)
	{
		iLocal_26 = 6;
		iLocal_60 = 0;
	}
}

void func_220(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_114370.f_9088.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_114370.f_9088.f_99.f_58[iParam0] = iParam1;
}

void func_221()
{
	if (iLocal_26 == 5)
	{
		if (iLocal_481 == 0)
		{
			func_222(657);
		}
	}
}

void func_222(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_64039 = 0;
	if (!Global_64263[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_76133)
	{
		if (Global_76134[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_76134[iVar1 /*9*/].f_1 = 1;
			Global_76134[iVar1 /*9*/].f_2 = 0f;
			if (Global_76134[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_223(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

void func_224()
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("phantom"), false);
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_49, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_50, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_51, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_52, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_53, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_54, false);
	if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", false);
		}
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_112))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_112, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_113))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_113, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_225()
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_114370.f_9088 || func_223(0))
	{
		if (!func_226())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_92124[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_226()
{
	if (((Global_101392 == 13 || Global_101392 == 10) || Global_101392 == 11) || Global_101392 == 12)
	{
		return 0;
	}
	return 1;
}

