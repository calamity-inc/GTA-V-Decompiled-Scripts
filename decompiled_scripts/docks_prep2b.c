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
	int iLocal_29[1] = { 0 };
	int iLocal_31[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47[1] = { 0 };
	int iLocal_49[1] = { 0 };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61[1] = { 0 };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<8> Local_68[13];
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	var uLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200[2] = { 0, 0 };
	int iLocal_203 = 0;
	int iLocal_204[2] = { 0, 0 };
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213[1] = { 0 };
	int iLocal_215[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_229[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_243[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_257[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290[2] = { 0, 0 };
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	struct<3> Local_309 = { 0, 0, 0 } ;
	struct<3> Local_312 = { 0, 0, 0 } ;
	struct<3> Local_315 = { 0, 0, 0 } ;
	struct<3> Local_318 = { 0, 0, 0 } ;
	float fLocal_321 = 0f;
	char* sLocal_322 = NULL;
	var uLocal_323[4] = { 0, 0, 0, 0 };
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 4;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 4;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 4;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 4;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 4;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 4;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 8;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 16;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 3;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	int iLocal_570 = 0;
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
	Local_309 = { -2145.486f, 3018.294f, 31.81f };
	Local_312 = { 1744.308f, 3270.673f, 40.2076f };
	fLocal_321 = 330.4836f;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_300();
		func_298();
	}
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 30f);
	func_296();
	if (!func_295())
	{
		iLocal_26 = 0;
	}
	else
	{
		iLocal_26 = 1;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePortOfLSHeistPrep2B", 0);
		func_294();
		func_288();
		func_287();
		func_286();
		func_284();
		switch (iLocal_26)
		{
			case 0:
				func_283();
				break;
			
			case 1:
				func_278();
				break;
			
			case 2:
				func_260();
				break;
			
			case 3:
				func_252();
				break;
			
			case 4:
				func_144();
				break;
			
			case 5:
				func_29();
				break;
			
			case 6:
				func_4();
				break;
		}
		if (iLocal_26 != 6)
		{
			if (iLocal_195 == 1)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	if ((iLocal_26 == 2 || iLocal_26 == 3) || iLocal_26 == 4)
	{
		if (iLocal_198 == 1)
		{
			func_3(1);
			return;
		}
	}
	if (iLocal_26 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
			{
				if (func_2(iLocal_46, PLAYER::PLAYER_PED_ID(), 1) > 850f)
				{
					func_3(2);
					return;
				}
			}
		}
	}
	if (iLocal_26 == 3 || iLocal_26 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
			{
				if (func_2(iLocal_46, PLAYER::PLAYER_PED_ID(), 1) > 100f)
				{
					func_3(2);
					return;
				}
				else if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_46, 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_46, 1, 40000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_46, 0, 7000))
				{
					func_3(3);
					return;
				}
			}
		}
	}
}

float func_2(int iParam0, int iParam1, bool bParam2)
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

void func_3(int iParam0)
{
	iLocal_27 = iParam0;
	if (iLocal_26 != 6)
	{
		iLocal_26 = 6;
		iLocal_173 = 0;
	}
}

void func_4()
{
	switch (iLocal_173)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			switch (iLocal_27)
			{
				case 0:
					break;
				
				case 1:
					sLocal_322 = "DP_FAIL1";
					break;
				
				case 2:
					sLocal_322 = "DP_FAIL2";
					break;
				
				case 3:
					sLocal_322 = "DP_FAIL3";
					break;
			}
			if (iLocal_27 == 0)
			{
				func_13(0);
			}
			else
			{
				func_11(sLocal_322);
			}
			iLocal_173 = 1;
			break;
		
		case 1:
			if (func_10())
			{
				if (func_9())
				{
				}
				else
				{
					func_7(-1139.164f, 2662.465f, 16.9873f, 74.9925f);
					func_5(-1147.504f, 2663.104f, 17.0938f, 40.2433f);
				}
				func_298();
			}
			break;
	}
}

void func_5(struct<3> Param0, float fParam3)
{
	func_6(&(Global_107680.f_2890), Param0, fParam3);
}

void func_6(var uParam0, struct<3> Param1, var uParam4)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam4;
}

void func_7(struct<3> Param0, float fParam3)
{
	if (func_8(Global_79780, 0f, 0f, 0f, 0))
	{
		Global_79780 = { Param0 };
		Global_79783 = fParam3;
	}
}

bool func_8(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_9()
{
	if (Global_101688 == 7)
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	if (Global_4)
	{
		return 1;
	}
	if (Global_101688 == 7 || Global_101688 == 8)
	{
		return 1;
	}
	return 0;
}

void func_11(char* sParam0)
{
	func_12(sParam0);
	func_13(0);
}

void func_12(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_79772, sParam0, 16);
			StringCopy(&Global_79776, "", 16);
			if (RECORDING::IS_REPLAY_RECORDING())
			{
				RECORDING::STOP_REPLAY_RECORDING();
			}
		}
	}
}

void func_13(int iParam0)
{
	int iVar0;
	
	if (Global_114135.f_9089 || func_28(0))
	{
		iVar0 = func_27();
		if (!func_14(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_92415[iVar0 /*5*/].f_1), 5);
		Global_101724 = iParam0;
	}
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_19();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_92415[iParam0 /*5*/];
	iVar1 = Global_79810.f_109[iVar0 /*4*/];
	func_18(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_15(&(Global_114135.f_2367.f_539), iVar1);
	if (Global_95838 == Global_101725)
	{
		Global_114135.f_9089.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_92451[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_114135.f_9089.f_330[iVar1 /*6*/].f_2++;
	Global_95838 = Global_101725;
	if (iParam0 == -1)
	{
		if (Global_114135.f_9089)
		{
		}
		return 0;
	}
	if (BitTest(Global_92415[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_92415[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_15(var uParam0, int iParam1)
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
		iVar1 = Global_114135.f_18537[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_114135.f_9089.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_17(Global_114135.f_18537[iVar0], &Var2, &fVar5))
			{
				Global_114135.f_18537[iVar0] = 318;
				func_16(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_99053[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_99053[iVar0 /*29*/].f_9 = 0f;
				Global_99053[iVar0 /*29*/].f_12 = 0f;
				Global_99053[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_99053[iVar0 /*29*/].f_10 = 0f;
				Global_99053[iVar0 /*29*/].f_13 = 0f;
				Global_99053[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_99053[iVar0 /*29*/].f_11 = 0f;
				Global_99053[iVar0 /*29*/].f_14 = 0f;
				Global_99053[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_99053[iVar0 /*29*/].f_26 = 0f;
				Global_99053[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_99053[iVar0 /*29*/].f_27 = 0f;
				Global_99053[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_99053[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_16(var uParam0)
{
	*uParam0 = -15;
}

int func_17(int iParam0, var uParam1, float fParam2)
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
			return func_17(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_17(8, uParam1, fParam2);
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

void func_18(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_95648[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_95648[iParam0 /*2*/] = 0;
	}
}

void func_19()
{
	Global_101723 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79772))
		{
			switch (func_20())
			{
				case 0:
					StringCopy(&Global_79772, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_79772, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_79772, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_79776, "", 16);
		}
		Global_101723 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79772))
		{
			switch (func_20())
			{
				case 0:
					StringCopy(&Global_79772, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_79772, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_79772, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_79776, "", 16);
		}
		Global_101723 = 0;
		MISC::SET_BIT(&(Global_101688.f_20), 25);
	}
}

int func_20()
{
	func_21();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_21()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_25(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_24(PLAYER::PLAYER_PED_ID());
			if (func_23(iVar0) && (!func_22(14) || Global_113083))
			{
				if (Global_114135.f_2367.f_539.f_4321 != iVar0 && func_23(Global_114135.f_2367.f_539.f_4321))
				{
					Global_114135.f_2367.f_539.f_4322 = Global_114135.f_2367.f_539.f_4321;
				}
				Global_114135.f_2367.f_539.f_4323 = iVar0;
				Global_114135.f_2367.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_4321 != 145)
			{
				Global_114135.f_2367.f_539.f_4323 = Global_114135.f_2367.f_539.f_4321;
			}
			return;
		}
	}
	Global_114135.f_2367.f_539.f_4321 = 145;
}

bool func_22(int iParam0)
{
	return Global_44181 == iParam0;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_26(int iParam0)
{
	return Global_2201[iParam0 /*29*/];
}

int func_27()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_92415[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_28(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79788, 0);
}

void func_29()
{
	func_136();
	if (iLocal_173 == 0)
	{
		if (iLocal_194 == 1)
		{
			iLocal_195 = 0;
			func_34();
			iLocal_194 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_46, false);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, 0);
				}
			}
		}
		iLocal_195 = 1;
		iLocal_173 = 1;
	}
	if (iLocal_173 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, true))
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_46, 0, false);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_46, 1, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_46, 2);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_46, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_46, true);
					func_30();
				}
			}
		}
	}
}

void func_30()
{
	func_32(0, 0);
	func_31(1, 1);
	func_298();
}

void func_31(int iParam0, int iParam1)
{
	Global_79808 = iParam1;
	if (Global_64302)
	{
		return;
	}
	if (Global_64329)
	{
		Global_64329 = 0;
		return;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_64302)
		{
		}
		Global_64328 = iParam0;
		Global_64302 = 1;
		Global_64313 = 1;
	}
}

void func_32(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_64310)
	{
		Global_64310 = iParam1;
	}
	if (bParam0)
	{
		if ((func_28(0) && Global_79786.f_1 == 1) && func_33(Global_79786))
		{
		}
		else
		{
			Global_64308 = 1;
		}
	}
	if (Global_114135.f_9089 || func_28(0))
	{
		iVar0 = func_27();
		iVar1 = Global_92415[iVar0 /*5*/];
		uVar2 = Global_79810.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_114135.f_9089)
			{
			}
			return;
		}
		if (BitTest(Global_92415[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_92415[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_92415[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_79788, true);
		Global_79804 = uVar2;
		Global_79805 = MISC::GET_GAME_TIMER();
	}
}

int func_33(int iParam0)
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

void func_34()
{
	func_134();
	func_133();
	func_37();
	if (!func_36() || func_28(0))
	{
		func_35();
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_35()
{
	switch (iLocal_26)
	{
		case 2:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, -1);
				}
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1565.084f, 2780.813f, 16.4022f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 53.6086f);
			}
			break;
		
		case 3:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (func_20() == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, -1);
						}
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_46, false);
					}
				}
			}
			break;
		
		case 4:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (func_20() == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, -1);
						}
					}
				}
			}
			break;
		
		case 5:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (func_20() == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, -1);
						}
					}
				}
			}
			break;
	}
}

bool func_36()
{
	return BitTest(Global_101688.f_20, 13);
}

void func_37()
{
	switch (iLocal_26)
	{
		case 2:
			MISC::CLEAR_AREA(-1588.1f, 2794.9f, 17.2f, 20f, true, false, false, false);
			func_126(-1720.5f, 2568.4f, 67.1f, -1523.2f, 3002f, -70f, 100f, -1155.06f, 2665.979f, 17.0939f, 219.2079f, 1, 0, 1, 0, 0);
			MISC::CLEAR_AREA_OF_OBJECTS(-1588.1f, 2794.9f, 17.2f, 20f, 6);
			STREAMING::REQUEST_MODEL(joaat("cargobob"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_marine_01"));
			STREAMING::REQUEST_MODEL(joaat("s_m_m_pilot_02"));
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			while (((!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_pilot_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("buzzard")))
			{
				SYSTEM::WAIT(0);
			}
			if (func_295())
			{
				if (func_125())
				{
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(func_124()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_124()))
					{
						func_122();
						while (!func_121())
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			iLocal_199 = 0;
			iLocal_174 = 0;
			while (iLocal_174 <= 12)
			{
				iLocal_273[iLocal_174] = 0;
				iLocal_174++;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_46))
			{
				MISC::CLEAR_AREA(Local_309, 10f, true, false, false, false);
				iLocal_46 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), Local_309, fLocal_321, true, true, false);
				VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_46, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_46, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_46, true, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), true);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_46, true);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_46, false);
				func_120(iLocal_46, 0);
			}
			func_117();
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")))
				{
					MISC::CLEAR_AREA(-1866.446f, 3071.395f, 31.8104f, 10f, true, false, false, false);
					iLocal_47[0] = VEHICLE::CREATE_VEHICLE(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, true, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_47[0], true, 1);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_47[0], true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_47[0], 5f);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_47[0], "DH_P_2B_ENEMY_CHOPPERS", 0f);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("buzzard"));
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_47[0], false);
				}
			}
			if (func_295())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53))
				{
					if (func_125())
					{
						if (!VEHICLE::IS_THIS_MODEL_A_HELI(func_124()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_124()))
						{
							iLocal_53 = func_38(-1535.209f, 2744.551f, 16.6437f, 47.9754f);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_124());
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_53, true);
							VEHICLE::SET_VEHICLE_STRONG(iLocal_53, true);
						}
					}
				}
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::SET_POLICE_RADAR_BLIPS(true);
			break;
		
		case 3:
			AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
			SYSTEM::WAIT(1500);
			STREAMING::REQUEST_MODEL(joaat("cargobob"));
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_marine_01"));
			STREAMING::REQUEST_MODEL(joaat("s_m_m_pilot_02"));
			while (((!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")) || !STREAMING::HAS_MODEL_LOADED(joaat("buzzard"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_pilot_02")))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_199 = 0;
			iLocal_174 = 0;
			while (iLocal_174 <= 12)
			{
				iLocal_273[iLocal_174] = 0;
				iLocal_174++;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_46))
			{
				MISC::CLEAR_AREA(Local_309, 10f, true, false, false, false);
				iLocal_46 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), Local_309, fLocal_321, true, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_46, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_46, true, 1);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_46);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), true);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_46, true);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_46, false);
				func_120(iLocal_46, 0);
			}
			func_117();
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")))
				{
					MISC::CLEAR_AREA(-1866.446f, 3071.395f, 31.8104f, 10f, true, false, false, false);
					iLocal_47[0] = VEHICLE::CREATE_VEHICLE(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, true, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_47[0], true, 1);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_47[0], true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_47[0], 5f);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_47[0], "DH_P_2B_ENEMY_CHOPPERS", 0f);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("buzzard"));
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_47[0], false);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
			{
				iLocal_29[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_47[0], 26, joaat("s_m_m_pilot_02"), -1, true, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_02"));
			}
			else if (!PED::IS_PED_IN_VEHICLE(iLocal_29[0], iLocal_47[0], false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_29[0], iLocal_47[0], -1);
			}
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), -1, false, true);
			AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", true);
			AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", true, true);
			break;
		
		case 4:
			STREAMING::REQUEST_MODEL(joaat("cargobob"));
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_46))
			{
				MISC::CLEAR_AREA(Local_309, 10f, true, false, false, false);
				iLocal_46 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), -629.1677f, 2871.31f, 385.0313f, 283.1214f, true, true, false);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_46, true, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), true);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_46, false);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_46, true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_46, true, true, false);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_46);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_46, 30f);
				func_120(iLocal_46, 0);
			}
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), -1, false, true);
			break;
		
		case 5:
			STREAMING::REQUEST_MODEL(joaat("cargobob"));
			STREAMING::REQUEST_MODEL(joaat("sandking"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")) || !STREAMING::HAS_MODEL_LOADED(joaat("sandking")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_46))
			{
				MISC::CLEAR_AREA(1749.61f, 3272.95f, 40.1533f, 5f, true, false, false, false);
				iLocal_46 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), 1749.61f, 3272.95f, 40.1533f, 51.128f, true, true, false);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_46, true, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
				VEHICLE::SET_VEHICLE_STRONG(iLocal_46, true);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_46, false);
				func_120(iLocal_46, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]))
			{
				iLocal_49[0] = VEHICLE::CREATE_VEHICLE(joaat("sandking"), 1754.951f, 3290.994f, 40.1176f, 182.397f, true, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_49[0], true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sandking"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]))
			{
				iLocal_212 = 1;
			}
			break;
	}
}

int func_38(struct<3> Param0, float fParam3)
{
	return func_39(&(Global_107680.f_2890), Param0, fParam3, 0);
}

int func_39(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_116(uParam0))
	{
		if (func_8(Param1, 0f, 0f, 0f, 0))
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
		if (func_115(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
			func_114(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam4, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, false, false, true);
				}
				func_82(iVar0, &(uParam0->f_12), 0, 1);
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
							func_81(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_81(uParam0->f_11, 2);
						}
					}
					VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, false);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					func_80(iVar0, uParam0->f_11);
				}
				else if ((!func_77(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar8 = func_76(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_69(iVar8);
					}
				}
				if (((Global_101688 != 13 && Global_101688 != 10) && Global_101688 != 11) && Global_101688 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_101688.f_3)) == Global_79317)
					{
						if (uParam0->f_12.f_66 == Global_114135.f_32754.f_69[21 /*78*/].f_66)
						{
							func_66(24, 0);
							func_69(24);
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
			iParam1 = Global_114135.f_2367.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_114135.f_32754.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114135.f_32754.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_114135.f_32754.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_114135.f_32754.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_114135.f_32754.f_5592[iVar1] = iVar2;
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
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_114135.f_32754.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114135.f_32754.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_114135.f_32754.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_114135.f_32754.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_114135.f_32754.f_5590 = iParam1;
	Global_79234 = iParam0;
	Global_114135.f_32754.f_5588 = 1;
	func_41(iParam0, &(Global_114135.f_32754.f_5510));
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
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_64(iParam0, 0, 0)) || func_64(iParam0, 1, 0)) || func_64(iParam0, 2, 0)) || func_63(iParam0) != 145) || func_62(iParam0)) || func_61(iParam0)) || func_60(iParam0)) || func_59(iParam0)) || !func_47(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_61(iParam0))
		{
		}
		if (func_61(iParam0))
		{
		}
		if (func_64(iParam0, 0, 0))
		{
		}
		if (func_64(iParam0, 1, 0))
		{
		}
		if (func_64(iParam0, 2, 0))
		{
		}
		if (func_63(iParam0) != 145)
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
		case joaat("towtruck3"):
		case joaat("towtruck4"):
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
		if (!func_58())
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
				else
				{
					iVar0++;
				}
				if (iParam0 == joaat("blimp"))
				{
					if ((((!func_57() && !func_56()) && !func_55()) && !func_54()) && !func_58())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_53() || MISC::IS_PC_VERSION()) || func_52())
					{
					}
					else if (!func_55())
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
	
	if (Global_2707691)
	{
		return 1;
	}
	if ((!Global_2707692 && iParam1 >= 0) && iParam1 <= 547)
	{
		if (BitTest(Global_1586535[iParam1 /*143*/].f_104, 2))
		{
			return 1;
		}
	}
	iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar1 = 0;
	switch (iParam0)
	{
		case -1321131184:
			iVar1 = Global_262145.f_35588[0];
			break;
		
		case -1289225626:
			iVar1 = Global_262145.f_35588[1];
			break;
		
		case -362690998:
			iVar1 = Global_262145.f_35588[2];
			break;
		
		case -1948949064:
			iVar1 = Global_262145.f_35588[3];
			break;
		
		case -1466692365:
			iVar1 = Global_262145.f_35588[4];
			break;
		
		case -352682313:
			iVar1 = Global_262145.f_35588[5];
			break;
		
		case 2042703219:
			iVar1 = Global_262145.f_35588[6];
			break;
		
		case 1484920335:
			iVar1 = Global_262145.f_35588[7];
			break;
		
		case 1891140410:
			iVar1 = Global_262145.f_35588[8];
			break;
		
		case 1992041063:
			iVar1 = Global_262145.f_35588[9];
			break;
		
		case 858355070:
			iVar1 = Global_262145.f_35588[10];
			break;
		
		case 1534326199:
			iVar1 = Global_262145.f_35588[11];
			break;
		
		case 84351789:
			iVar1 = Global_262145.f_35588[12];
			break;
		
		case -660007725:
			iVar1 = Global_262145.f_35588[13];
			break;
		
		case -973016778:
			iVar1 = Global_262145.f_35588[14];
			break;
		
		case 127317925:
			iVar1 = Global_262145.f_35588[15];
			break;
		
		case joaat("taco"):
			iVar1 = Global_262145.f_35588[16];
			break;
		
		case joaat("predator"):
			iVar1 = Global_262145.f_35588[17];
			break;
	}
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_52()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_53()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_54()
{
	return 0;
}

int func_55()
{
	return 1;
}

int func_56()
{
	return 1;
}

int func_57()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_58()
{
	int iVar0;
	
	if (Global_153015 == 2)
	{
		return 1;
	}
	else if (Global_153015 == 3)
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
				MISC::SET_BIT(&Global_28, 2);
				MISC::SET_BIT(&Global_28, 4);
				MISC::SET_BIT(&Global_28, 6);
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

int func_59(int iParam0)
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

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99024[iVar0]))
		{
			if (Global_99024[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98994[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98994[iVar0], false))
			{
				if (Global_98994[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98994[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_78329.f_484[24]))
	{
		if (iParam0 == Global_78329.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78329.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_78329.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)
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
		if (ENTITY::DOES_ENTITY_EXIST(Global_98994[iVar0]))
		{
			if (Global_98994[iVar0] == iParam0)
			{
				return Global_99004[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_64(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_65(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_114135.f_7233[iVar9], 0))
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

int func_65(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_66(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_68(iParam0, 0))
		{
			func_67(iParam0, 1, 0);
			func_67(iParam0, 2, 0);
			func_67(iParam0, 3, 0);
			func_67(iParam0, 4, 0);
			func_67(iParam0, 0, 1);
			Global_78329[iParam0] = 1;
		}
	}
	else
	{
		func_67(iParam0, 0, 0);
	}
}

void func_67(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_114135.f_32754[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_114135.f_32754[iParam0]), bParam1);
	}
}

int func_68(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_114135.f_32754[iParam0], iParam1);
}

void func_69(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_73(&(Global_78329.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78329.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78329.f_139[iParam0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_78329.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_78329.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&(Global_78329.f_139[iParam0]));
			}
		}
		Global_78329[iParam0] = 1;
		if (BitTest(Global_78329.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_68(iParam0, 0)) && Global_79238.f_66 == 0) && Global_114135.f_32754.f_1958[Global_78329.f_555[0 /*21*/].f_14] != 0) && Global_114135.f_32754.f_1958[Global_78329.f_555[0 /*21*/].f_14] > 3) && (!func_71(0, Global_78329.f_555[0 /*21*/].f_12) || !func_71(1, Global_78329.f_555[0 /*21*/].f_12)))
			{
				func_70(&(Global_114135.f_32754.f_69[Global_78329.f_555[0 /*21*/].f_14 /*78*/]), &Global_79238);
				Global_79316 = Global_114135.f_32754.f_5591;
			}
			func_66(iParam0, 0);
		}
	}
}

void func_70(var uParam0, var uParam1)
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

int func_71(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_72(&(Global_114135.f_32754.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_48(Global_114135.f_32754.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_72(var uParam0)
{
	return *uParam0;
}

int func_73(var uParam0, int iParam1)
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
			uParam0->f_4 = func_74(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_74(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_74(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_74(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_74(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_74(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_74(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_74(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_74(2, 1);
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
			if (func_58())
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
			if (func_58())
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
		uParam0->f_4 = Global_114135.f_32754.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_8(Global_114135.f_32754.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_114135.f_32754.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_114135.f_32754.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_114135.f_32754.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_8(Global_114135.f_2367.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_114135.f_2367.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114135.f_2367.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_8(Global_114135.f_2367.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_114135.f_2367.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114135.f_2367.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_74(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_23(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_75(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_75(int iParam0, var uParam1, int iParam2)
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
			if (Global_114135.f_9089.f_99.f_58[128] && !Global_114135.f_9089.f_99.f_58[131])
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
					if (Global_114135.f_9089.f_99.f_58[119])
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
			else if (Global_114135.f_9089.f_99.f_58[118])
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

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_78329.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_78329.f_484[iVar0], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78329.f_484[iVar0], false))
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
			VEHICLE::GET_VEHICLE_COLOURS(Global_78329.f_484[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_78329.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_78329.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_77(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_79(iParam0, Global_78329.f_139[38], 0))
			{
				func_69(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_79(iParam0, Global_78329.f_139[43], 1))
			{
				func_69(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_79(iParam0, uVar1[iVar6], 1) && func_78(ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_8(Param1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], true), true) < 10f)
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
			if ((ENTITY::DOES_ENTITY_EXIST(Global_78329.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78329.f_484[14], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_78329.f_484[14]) == joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_78329.f_484[14]))
				{
					func_69(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_78329.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78329.f_484[20], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_78329.f_484[20]) == joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_78329.f_484[20]))
				{
					func_69(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_78(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

int func_79(int iParam0, int iParam1, bool bParam2)
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

void func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_98994[iVar0]))
		{
			Global_98994[iVar0] = iParam0;
			Global_99004[iVar0] = iParam1;
			Global_99014[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_99014[iVar0]))
			{
				Global_99042[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_99042[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98994[iVar0]))
		{
			if (iParam0 == 145 || Global_99004[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_98994[iVar0]) == func_74(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98994[iVar0], false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98994[iVar0], false, true);
						VEHICLE::DELETE_VEHICLE(&(Global_98994[iVar0]));
						Global_99004[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_82(int iParam0, var uParam1, bool bParam2, bool bParam3)
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
		if (!func_105(iParam0))
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
			if (func_103(uParam1->f_5) || func_103(uParam1->f_6))
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
		if (((BitTest(uParam1->f_77, 15) || func_102(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_101())
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
						func_100(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_100(iParam0, uParam1->f_69);
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
			func_91(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
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
		if ((((func_85() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_84(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (!BitTest(uParam1->f_77, 22) && func_83(iParam0, 5f))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
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

int func_83(int iParam0, float fParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3, false, false))
		{
			if (MISC::ABSF((Var0.f_2 - fVar3)) > fParam1)
			{
				return 1;
			}
		}
		else if (Var0.f_2 > (PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Var0.f_0, Var0.f_1) + fParam1))
		{
			return 1;
		}
		else if (Var0.f_2 > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_84(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_85()
{
	if ((((Global_4718592.f_118493 == 6 || Global_4718592.f_118493 == 7) || Global_4718592.f_118493 == 18) || Global_4718592.f_118493 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_89(7))
	{
		if (func_87(Global_2672939.f_4.f_16) || func_86(Global_2672939.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_86(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1882780[iVar0 /*149*/].f_82.f_66 != 0;
	}
	return 0;
}

int func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_88(iParam0, 9);
	}
	return 0;
}

var func_88(int iParam0, int iParam1)
{
	return BitTest(Global_1887549[iParam0 /*611*/].f_10.f_4, iParam1);
}

bool func_89(int iParam0)
{
	return func_90(&(Global_2672939.f_194), iParam0);
}

var func_90(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_91(int iParam0, var uParam1, var uParam2)
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
				else if (func_98(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
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
	if (func_96(ENTITY::GET_ENTITY_MODEL(*iParam0)) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_94(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_94(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_93(iParam0);
	if (func_92(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_92(int iParam0)
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

void func_93(var uParam0)
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

int func_94(int iParam0, int iParam1)
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
		iVar0 = func_95(iParam0, 38) + 1;
		iVar1 = func_95(iParam0, 24) + 1;
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

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((STREAMING::IS_MODEL_VALID(Global_153027) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_153027)) && Global_153028 == iParam1)
	{
		return Global_153029;
	}
	iVar0 = (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_98(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_96(int iParam0)
{
	if (func_97(iParam0, 1))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1891140410:
			return 1;
			break;
	}
	return 0;
}

int func_97(int iParam0, int iParam1)
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
			if (!Global_262145.f_14701)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14702)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14700)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14703)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14705)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14704)
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
			if (Global_262145.f_18948)
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
			if (Global_262145.f_18950)
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
			if (Global_262145.f_18954)
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
			if (Global_262145.f_18951)
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
			if (Global_262145.f_18958)
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
			if (Global_262145.f_18956)
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
			if (Global_262145.f_18961)
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
			if (Global_262145.f_20834)
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
			if (Global_262145.f_20835)
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

int func_98(int iParam0, int iParam1, int iParam2)
{
	if (!func_99() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	return 0;
}

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
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
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_101()
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_102(int iParam0)
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

int func_103(int iParam0)
{
	if (!func_99() && func_104(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0)
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

int func_105(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_112(PLAYER::PLAYER_ID(), -1))
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
	if (func_107(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_106(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_106(int iParam0)
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

int func_107(int iParam0)
{
	if (func_111(iParam0) == 233)
	{
		return func_108(iParam0);
	}
	return -1;
}

int func_108(int iParam0)
{
	if (func_109(iParam0, 0))
	{
		return Global_1887549[iParam0 /*611*/].f_10.f_182;
	}
	return -1;
}

int func_109(int iParam0, int iParam1)
{
	if (func_110(iParam0))
	{
		if (Global_1887549[iParam0 /*611*/].f_10.f_33 != -1 || (iParam1 && Global_1887549[iParam0 /*611*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_110(var uParam0)
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

int func_111(int iParam0)
{
	if (func_110(iParam0))
	{
		if (func_109(iParam0, 0))
		{
			return Global_1887549[iParam0 /*611*/].f_10.f_33;
		}
	}
	return -1;
}

int func_112(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_113(iParam0, 1, 1))
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

int func_113(int iParam0, bool bParam1, bool bParam2)
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
				if (iVar0 == Global_2672939.f_3)
				{
					return Global_2672939.f_2;
				}
				else if (Global_2657991[iVar0 /*467*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_114(struct<3> Param0, float fParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_73(&(Global_78329.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_78329.f_555[0 /*21*/], bParam4) <= fParam3)
			{
				func_69(iVar0);
			}
		}
		iVar0++;
	}
}

int func_115(var uParam0)
{
	if (func_116(uParam0))
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

int func_116(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_48(uParam0->f_12.f_66, 0, -1))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_78(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

void func_117()
{
	if (iLocal_199 == 0)
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_pilot_02")))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31[0]))
			{
				iLocal_31[0] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -1590.523f, 2796.302f, 15.9184f, 247.0896f, true, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31[1]))
			{
				iLocal_31[1] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2303.8f, 3387.99f, 30.034f, 58.5763f, true, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31[2]))
			{
				iLocal_31[2] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -1697.329f, 2909.941f, 31.9506f, 245.656f, true, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31[3]))
			{
				iLocal_31[3] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -1696.369f, 2905.772f, 31.9454f, 6.3714f, true, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31[4]))
			{
				iLocal_31[4] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -1843.707f, 2821.611f, 31.8528f, 271.6265f, true, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31[5]))
			{
				iLocal_31[5] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2006.877f, 2955.101f, 31.8103f, 332.0101f, true, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31[6]))
			{
				iLocal_31[6] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2010.022f, 2956.805f, 31.8103f, 288.1283f, true, true);
			}
			if (iLocal_26 != 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31[7]))
				{
					iLocal_31[7] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2140.213f, 3034.609f, 31.81f, 302.4493f, true, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31[8]))
				{
					iLocal_31[8] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2136.053f, 3031.494f, 31.81f, 38.6856f, true, true);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31[9]))
			{
				iLocal_31[9] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2035.429f, 3058.876f, 31.8103f, 169.8222f, true, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31[10]))
			{
				iLocal_31[10] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2146.467f, 3160.749f, 31.8106f, 356.4766f, true, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31[11]))
			{
				iLocal_31[11] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2280.087f, 3172.423f, 31.8103f, 353.663f, true, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31[12]))
			{
				iLocal_31[12] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2277.376f, 3177.8f, 31.8103f, 175.0685f, true, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
			{
				iLocal_29[0] = PED::CREATE_PED(26, joaat("s_m_m_pilot_02"), -1859.831f, 3071.758f, 31.8104f, 139.3607f, true, true);
				PED::SET_PED_PROP_INDEX(iLocal_29[0], 0, 2, 0, false, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_29[0], 8, 0, 0, 0);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_29[0], true, 1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_29[0], joaat("weapon_assaultrifle"), 2000, true, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_29[0], iLocal_58);
				PED::SET_PED_ACCURACY(iLocal_29[0], 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_29[0], true);
				func_119(iLocal_29[0], 595);
				func_118(iLocal_29[0], 0);
			}
			iLocal_174 = 0;
			while (iLocal_174 <= 12)
			{
				if (iLocal_273[iLocal_174] == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_31[iLocal_174]))
					{
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_31[iLocal_174], true, 1);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_31[iLocal_174], joaat("weapon_assaultrifle"), 2000, true, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_31[iLocal_174], iLocal_58);
						PED::SET_PED_ACCURACY(iLocal_31[iLocal_174], 10);
						func_119(iLocal_31[iLocal_174], 595);
						func_118(iLocal_31[iLocal_174], 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_31[iLocal_174], true);
						iLocal_273[iLocal_174] = 1;
					}
				}
				iLocal_174++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_marine_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_02"));
			iLocal_199 = 1;
		}
	}
}

void func_118(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_64338[iVar0 /*2*/] != 0)
			{
				if (Global_64338[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_64337)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_64338[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_64338[iVar1 /*2*/] = iParam0;
	Global_64338[iVar1 /*2*/].f_1 = 7;
	Global_64337++;
}

void func_119(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_76556[iVar0 /*2*/] == 0)
		{
			Global_76556[iVar0 /*2*/] = uParam0;
			Global_76556[iVar0 /*2*/].f_1 = iParam1;
			if (iVar0 == Global_76589)
			{
				Global_76589++;
			}
			return;
		}
		iVar0++;
	}
}

void func_120(int iParam0, int iParam1)
{
	Global_101688.f_22[iParam1] = iParam0;
}

bool func_121()
{
	return func_115(&(Global_107680.f_2890));
}

void func_122()
{
	func_123(&(Global_107680.f_2890));
}

void func_123(var uParam0)
{
	if (func_116(uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);
	}
}

var func_124()
{
	return Global_107680.f_2890.f_12.f_66;
}

bool func_125()
{
	return func_116(&(Global_107680.f_2890));
}

void func_126(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_127(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_127(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (bParam18)
			{
				func_132(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param3, fParam6, false, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_129(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param3 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_64(iVar0, func_20(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_128(Param11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::GET_VEHICLE_SIZE(iVar0, &Var4, &Var7);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param7, 5f, false, false, false, false, false, false, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam10);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param7, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, true), true, false, false, true);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param3, fParam6, false, false, false, false, false, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			}
			iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
			{
				ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
			}
			iVar15 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
				}
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

int func_128(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_131(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_130(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_130(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_130(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_130(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_130(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_130(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_130(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_130(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_130(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_130(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_130(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_130(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_130(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_130(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_130(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_130(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_130(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_131(struct<3> Param0)
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

void func_132(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 200f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 700f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
			}
			if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 200)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
		}
	}
}

void func_133()
{
	if (!func_36())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1738.131f, 3283.38f, 40.1261f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 25.3545f);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
	{
		PED::DELETE_PED(&(iLocal_29[0]));
	}
	iLocal_174 = 0;
	while (iLocal_174 <= 12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[iLocal_174]))
		{
			PED::DELETE_PED(&(iLocal_31[iLocal_174]));
		}
		iLocal_174++;
	}
	if (func_20() == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_323[0]))
		{
			PED::DELETE_PED(&(uLocal_323[0]));
		}
	}
	if (func_20() == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_323[2]))
		{
			PED::DELETE_PED(&(uLocal_323[2]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_47[0], 0f);
	}
	AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", true);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", false, false);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENTER_CHOPPER"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_P_2B_ENTER_CHOPPER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_45))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_45);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_53);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_46);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_47[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_98160[0]))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_98160[0], true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98160[0], true, true);
		}
		VEHICLE::DELETE_VEHICLE(&(Global_98160[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_98160[1]))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_98160[1], true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98160[1], true, true);
		}
		VEHICLE::DELETE_VEHICLE(&(Global_98160[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_98160[2]))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_98160[2], true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98160[2], true, true);
		}
		VEHICLE::DELETE_VEHICLE(&(Global_98160[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_49[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		OBJECT::DELETE_OBJECT(&iLocal_56);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		OBJECT::DELETE_OBJECT(&iLocal_57);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_54))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_54))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::DESTROY_CAM(iLocal_54, false);
	}
}

void func_134()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_59))
	{
		HUD::REMOVE_BLIP(&iLocal_59);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_60))
	{
		HUD::REMOVE_BLIP(&iLocal_60);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_63))
	{
		HUD::REMOVE_BLIP(&iLocal_63);
	}
	iLocal_174 = 0;
	while (iLocal_174 <= 12)
	{
		func_135(&(Local_68[iLocal_174 /*8*/]), 0);
		iLocal_174++;
	}
	HUD::CLEAR_GPS_MULTI_ROUTE();
}

void func_135(int* iParam0, bool bParam1)
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1) && !bParam1)
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_136()
{
	if (iLocal_26 == 5)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_59))
		{
			HUD::REMOVE_BLIP(&iLocal_59);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_60))
		{
			HUD::REMOVE_BLIP(&iLocal_60);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_59))
				{
					HUD::REMOVE_BLIP(&iLocal_59);
				}
				if (iLocal_298 == 1)
				{
					if (MISC::GET_GAME_TIMER() < iLocal_187 + 7500)
					{
						HUD::CLEAR_PRINTS();
					}
				}
				if (iLocal_26 == 4)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_60))
					{
						iLocal_60 = func_143(Local_312, 0);
					}
					if (iLocal_197 == 0)
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (!func_142() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								func_141("DP_GOD4", 7500, 1);
								iLocal_188 = MISC::GET_GAME_TIMER();
								iLocal_197 = 1;
							}
						}
					}
				}
				if (iLocal_26 == 3)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_61[0]))
					{
						uLocal_61[0] = func_140(iLocal_29[0], 1, 0);
					}
				}
			}
			else if (iLocal_26 != 5)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_59))
				{
					iLocal_59 = func_137(iLocal_46, 0, 0);
				}
				if (iLocal_26 == 3 || iLocal_26 == 4)
				{
					if (iLocal_298 == 0)
					{
						HUD::CLEAR_PRINTS();
						func_141("DP_GOD6", 7500, 1);
						iLocal_187 = MISC::GET_GAME_TIMER();
						iLocal_298 = 1;
					}
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_60))
				{
					HUD::REMOVE_BLIP(&iLocal_60);
				}
				if (iLocal_26 == 3)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
					{
						HUD::REMOVE_BLIP(&(uLocal_61[0]));
					}
				}
				if (iLocal_26 == 4)
				{
					if (iLocal_197 == 1)
					{
						if (MISC::GET_GAME_TIMER() < iLocal_188 + 7500)
						{
							HUD::CLEAR_PRINTS();
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
			if (iLocal_195 == 1)
			{
				iLocal_198 = 1;
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_59))
		{
			HUD::REMOVE_BLIP(&iLocal_59);
		}
		if (iLocal_195 == 1)
		{
			iLocal_198 = 1;
		}
	}
}

int func_137(int iParam0, bool bParam1, bool bParam2)
{
	return func_138(iParam0, !bParam1, bParam2);
}

int func_138(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_139(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_139(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_139(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_139(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_140(int iParam0, bool bParam1, bool bParam2)
{
	return func_138(iParam0, !bParam1, bParam2);
}

void func_141(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

int func_142()
{
	if (Global_22425 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_143(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_139(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

void func_144()
{
	if (iLocal_173 > 0)
	{
		func_136();
		func_251();
	}
	if (iLocal_173 == 0)
	{
		if (iLocal_194 == 1)
		{
			iLocal_195 = 0;
			func_34();
			iLocal_194 = 0;
		}
		iLocal_302 = 0;
		iLocal_303 = 0;
		iLocal_306 = 0;
		iLocal_307 = 0;
		if (HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			HUD::REMOVE_BLIP(&iLocal_63);
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_46, false);
		}
		PLAYER::SET_POLICE_RADAR_BLIPS(false);
		iLocal_174 = 0;
		while (iLocal_174 <= 12)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[iLocal_174]))
			{
				if (!PED::IS_PED_INJURED(iLocal_31[iLocal_174]))
				{
					PED::SET_PED_KEEP_TASK(iLocal_31[iLocal_174], true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_31[iLocal_174]));
				}
			}
			iLocal_174++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_47[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_29[0]));
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENTER_CHOPPER"))
		{
			AUDIO::START_AUDIO_SCENE("DH_P_2B_ENTER_CHOPPER");
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_36())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			func_249(iLocal_46, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
		iLocal_195 = 1;
		iLocal_173 = 1;
	}
	if (iLocal_173 == 1)
	{
		if (iLocal_306 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_309, true) > 800f)
						{
							func_166(2, "STAGE_FLY_CARGOBOB_TO_HANGER", 1, 0, 0, 1);
							iLocal_306 = 1;
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
				{
					if (ENTITY::IS_ENTITY_IN_AIR(iLocal_46))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_309, true) > 800f)
						{
							if (iLocal_302 == 0 && iLocal_197 == 1)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									if (!func_142() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										func_165(&uLocal_401, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
										if (func_164(&uLocal_401, "DP2BAUD", "DP2B_CHAT59", 7, 0, 0, 0))
										{
											iLocal_302 = 1;
										}
									}
								}
							}
							if (iLocal_302 == 1 && iLocal_307 == 0)
							{
								if (func_163(72) == 0)
								{
									if (!func_142())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											func_165(&uLocal_401, 3, 0, "Wade", 0, 1);
											if (func_148(&uLocal_401, 24, "DP2BAUD", "DP2B_WADEP3", 7, 1, 0, 0, 0))
											{
												iLocal_307 = 1;
											}
										}
									}
								}
								else if (!func_142())
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										func_165(&uLocal_401, 3, 0, "Wade", 0, 1);
										if (func_148(&uLocal_401, 24, "DP2BAUD", "DP2B_WADEP4", 7, 1, 0, 0, 0))
										{
											iLocal_307 = 1;
										}
									}
								}
							}
						}
						else if (func_147(71) == 0)
						{
							if (iLocal_303 == 0)
							{
								if (!func_142())
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_146("DP_HELP4", -1);
										iLocal_303 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_312, 2f, 2f, 2f, true, true, 0))
					{
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1721.001f, 3264.248f, 38.40064f, 1765.509f, 3276.518f, 46.05385f, 48.25f, false, true, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_46) && VEHICLE::IS_VEHICLE_STOPPED(iLocal_46))
						{
							func_145(1, 600);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 5f, 4);
							iLocal_173 = 0;
							iLocal_26 = 5;
						}
					}
				}
			}
		}
	}
}

void func_145(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_64316)
	{
	}
	Global_64316 = 0;
	if (bParam0)
	{
		Global_64317 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_76403)
		{
			if (Global_64533[Global_76404[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_76404[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_76403)
		{
			if (Global_76404[iVar0 /*9*/] > 0)
			{
				if (Global_76404[iVar0 /*9*/] == iParam1)
				{
					Global_76404[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_146(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_147(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114135.f_9089.f_99.f_58[iParam0];
}

bool func_148(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_162(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_22473 = 0;
	Global_22432 = 1;
	Global_22439 = 0;
	Global_22434 = 0;
	Global_23416 = 0;
	Global_23418 = 0;
	Global_23422 = 0;
	Global_22430 = 0;
	Global_22477 = 0;
	Global_22479 = 0;
	if (iParam5 == 1)
	{
		Global_22437 = 1;
	}
	else
	{
		Global_22437 = 0;
	}
	Global_2883585 = 0;
	return func_149(sParam3, iParam4, bParam8);
}

int func_149(char* sParam0, int iParam1, bool bParam2)
{
	Global_22426 = 0;
	if (Global_22425 == 0 || Global_22427 == 2)
	{
		if (Global_22425 != 0)
		{
			if (iParam1 > Global_22427)
			{
				if (Global_22432 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21066.f_1 = 3;
					Global_22425 = 0;
					Global_22426 = 1;
					Global_22478 = 0;
					Global_22421 = 0;
					Global_22422 = 0;
					Global_22436 = 0;
					Global_22435 = 0;
					Global_21065 = 0;
				}
				else
				{
					func_161();
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
		if (func_160(8, -1))
		{
			return 0;
		}
		Global_22501 = { Global_22495 };
		func_159();
		Global_21714 = { Global_21879 };
		Global_22431 = Global_22432;
		Global_22438 = Global_22439;
		Global_2883586 = Global_2883585;
		Global_22440 = { Global_22456 };
		Global_22433 = Global_22434;
		Global_23415 = Global_23416;
		Global_23423 = { Global_23429 };
		Global_23417 = Global_23418;
		Global_23419 = Global_23420;
		Global_23421 = Global_23422;
		Global_22044.f_370 = Global_23414;
		Global_22044.f_368 = Global_23412;
		Global_22044.f_369 = Global_23413;
		Global_22421 = Global_22422;
		if (Global_22431)
		{
			MISC::CLEAR_BIT(&Global_8919, 20);
			MISC::CLEAR_BIT(&Global_8920, 17);
			MISC::CLEAR_BIT(&Global_8921, false);
			if (bParam2)
			{
				func_158();
				if (Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_21066.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_21032 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_157())
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
				if (!Global_79539)
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
			if (func_156())
			{
				return 0;
			}
			else
			{
				switch (Global_21066.f_1)
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
				if (BitTest(Global_8919, 9))
				{
					return 0;
				}
			}
			func_155();
			Global_22435 = bParam2;
		}
		Global_22427 = iParam1;
		StringCopy(&Global_22044, sParam0, 24);
		Global_21291 = 0;
		func_154();
		func_150();
		return 1;
	}
	if (Global_22425 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22427 || iParam1 == Global_22427)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_161();
	}
	return 0;
}

void func_150()
{
	if (!func_151())
	{
		return;
	}
	if (Global_22431)
	{
		MemCopy(&(Global_1972230.f_1), {Global_22044}, 4);
		Global_1972230 = Global_8234;
		Global_1972230.f_6 = Global_22435;
	}
}

int func_151()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79539)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_153())
	{
		return 0;
	}
	if (func_152(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_152(int iParam0)
{
	return func_88(iParam0, 20);
}

int func_153()
{
	return -1;
}

void func_154()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21293[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22425 = 1;
}

void func_155()
{
	Global_22478 = Global_22477;
	Global_22472 = Global_22473;
	Global_22519 = { Global_22507 };
	Global_22525 = { Global_22513 };
	Global_22480 = Global_22479;
	Global_22549 = { Global_22531 };
	Global_22555 = { Global_22537 };
	Global_22561 = { Global_22543 };
	Global_22567 = { Global_22573 };
	Global_8234 = Global_8235;
	Global_8236 = Global_8237;
	Global_22436 = Global_22437;
	Global_22438 = Global_22439;
	Global_22440 = { Global_22456 };
	Global_22429 = Global_22430;
	Global_23441 = 0;
	Global_22474 = 0;
	Global_22475 = 0;
	MISC::CLEAR_BIT(&Global_8920, 16);
}

int func_156()
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	int iVar0;
	int iVar1;
	
	if (Global_79539)
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

void func_158()
{
	if (func_22(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
			{
				Global_21066 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
			{
				Global_21066 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
			{
				Global_21066 = 2;
			}
			else
			{
				Global_21066 = 0;
			}
		}
	}
	else
	{
		Global_21066 = func_20();
		if (Global_21066 == 145)
		{
			Global_21066 = 3;
		}
		if (Global_79539)
		{
			Global_21066 = 3;
		}
		if (Global_21066 > 3)
		{
			Global_21066 = 3;
		}
	}
}

void func_159()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21714[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21714[iVar0 /*10*/].f_1), "", 24);
		Global_21714[iVar0 /*10*/].f_7 = 0;
		Global_21714[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21714.f_161 = -99;
	Global_21714.f_162 = { 0f, 0f, 0f };
}

bool func_160(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1673654.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1673654.f_1048, iParam0);
}

void func_161()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23436 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21066.f_1 == 9) || Global_21065 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
		Global_21066.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22425 = 6;
		return;
	}
}

void func_162(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21879 = { *uParam0 };
	Global_8235 = iParam1;
	StringCopy(&Global_22495, sParam2, 24);
	Global_23414 = iParam5;
	if (iParam3 == 0)
	{
		Global_23412 = 1;
		Global_23410 = 0;
	}
	else
	{
		Global_23412 = 0;
		Global_23410 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23413 = 1;
		Global_23411 = 0;
	}
	else
	{
		Global_23413 = 0;
		Global_23411 = 1;
	}
}

int func_163(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114135.f_9089.f_330[iParam0 /*6*/];
}

bool func_164(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_162(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22432 = 0;
	Global_22434 = 0;
	Global_22439 = 0;
	Global_23416 = 0;
	Global_23418 = 0;
	Global_23422 = 0;
	Global_2883585 = 0;
	return func_149(sParam2, iParam3, 0);
}

void func_165(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79539)
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

void func_166(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_101725)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_101725)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_248(1);
		if (iParam0 <= Global_101725)
		{
		}
		iVar1 = func_246(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_114135.f_9089.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_244(iVar1);
			cVar3 = { Global_92451[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_114135.f_9089.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_101725, iParam0);
		}
		else
		{
			iVar5 = func_239(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_114135.f_18578[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_238(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_101725, iParam0);
			}
			else
			{
				iVar10 = func_237(&(Global_101688.f_3));
				if (iVar10 > -1)
				{
					Global_114135.f_24990.f_4[iVar10] = 0;
				}
			}
		}
		Global_95841 = iParam2;
		Global_101725 = iParam0;
		func_167(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_101725)
	{
	}
}

void func_167(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_168(&Global_107680, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_168(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_20();
	uParam0->f_1 = func_226();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_195(&(uParam0->f_2884), 0);
		func_194(PLAYER::PLAYER_PED_ID());
		func_187(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_114135.f_2367.f_539.f_294[iVar1];
		if (iVar1 == func_186())
		{
			func_177(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_101413[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_101413[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_101413[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_101413[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_101413[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_101413[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_101413[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_101413[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_101413[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_101413[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_114135.f_2367.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_114135.f_2367.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_114135.f_20568.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_61482[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_114135.f_2367.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_114135.f_2367.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_114135.f_2367.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_114135.f_2367.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_114135.f_2367.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_114135.f_2367[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_114135.f_2367[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_170(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_169(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_169(var uParam0)
{
	*uParam0 = Global_97512;
	uParam0->f_1 = Global_97513;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_170(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_24(iParam2);
	}
	if (func_176(iParam2, &iVar0, iParam3, iParam5))
	{
		func_171(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				func_171(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_171(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
	{
		func_173(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_172(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_101688.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_173(var uParam0, int iParam1, int iParam2)
{
	func_41(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_175(iParam1, 145, 0);
	uParam0->f_11 = func_63(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_174(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_79234 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78329.f_484[iVar0]))
		{
			if (iParam0 == Global_78329.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98994[iVar0]))
		{
			if (Global_98994[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_99004[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_74(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_176(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (func_64(*uParam1, func_20(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_177(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_24(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_185(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_184(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_23(iVar0))
		{
			uParam1->f_59 = Global_114135.f_2367.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_114135.f_2367.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_114135.f_2367.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_114135.f_2367.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_114135.f_2367.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_114135.f_2367.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_182(161, iParam3))
			{
				uParam1->f_59 = func_178(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_178(753, iParam3);
			}
			uParam1->f_60 = func_178(754, iParam3);
			uParam1->f_61 = func_178(755, iParam3);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_182(161, iParam3))
			{
				uParam1->f_59 = func_178(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_178(753, iParam3);
			}
		}
	}
}

int func_178(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_179(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_179(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_180(uParam1));
}

int func_180(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_181();
		if (iVar1 > -1)
		{
			Global_2751934 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2751934 = 1;
		}
	}
	return iVar0;
}

var func_181()
{
	return Global_1574926;
}

int func_182(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_183(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_183(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_180(uParam1));
}

void func_184(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_185(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_186()
{
	func_21();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_187(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_24(iParam0);
	if (func_23(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_188(iParam0, &(Global_114135.f_2367.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_114135.f_2367.f_539.f_1730[iVar2 /*4*/][iVar0] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
					if (Global_114135.f_2367.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_114135.f_2367.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), iVar3, true);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, true);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, true);
			}
		}
	}
}

void func_188(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	bool bVar73;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_193(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_193(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
					Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_191(Var4.f_0, bVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_191(Var4.f_0, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = FILES::GET_NUM_DLC_WEAPONS_SP();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((FILES::GET_DLC_WEAPON_DATA_SP(iVar9, &Var11) && !func_190(Var11.f_1)) && iVar72 < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
						Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					bVar73 = false;
					bVar1 = false;
					while (bVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar9))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar9, bVar1, &Var50))
						{
							if (!func_189(Var50.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var50.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), bVar73);
								}
								bVar73++;
							}
						}
						bVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo_slide"):
		case joaat("component_pistol_mk2_camo_02_slide"):
		case joaat("component_pistol_mk2_camo_03_slide"):
		case joaat("component_pistol_mk2_camo_04_slide"):
		case joaat("component_pistol_mk2_camo_05_slide"):
		case joaat("component_pistol_mk2_camo_06_slide"):
		case joaat("component_pistol_mk2_camo_07_slide"):
		case joaat("component_pistol_mk2_camo_08_slide"):
		case joaat("component_pistol_mk2_camo_09_slide"):
		case joaat("component_pistol_mk2_camo_10_slide"):
		case joaat("component_pistol_mk2_camo_ind_01_slide"):
		case joaat("component_snspistol_mk2_camo_slide"):
		case joaat("component_snspistol_mk2_camo_02_slide"):
		case joaat("component_snspistol_mk2_camo_03_slide"):
		case joaat("component_snspistol_mk2_camo_04_slide"):
		case joaat("component_snspistol_mk2_camo_05_slide"):
		case joaat("component_snspistol_mk2_camo_06_slide"):
		case joaat("component_snspistol_mk2_camo_07_slide"):
		case joaat("component_snspistol_mk2_camo_08_slide"):
		case joaat("component_snspistol_mk2_camo_09_slide"):
		case joaat("component_snspistol_mk2_camo_10_slide"):
		case joaat("component_snspistol_mk2_camo_ind_01_slide"):
		case joaat("component_pistol_mk2_varmod_xm3_slide"):
			return 1;
			break;
	}
	return 0;
}

int func_190(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case joaat("weapon_metaldetector"):
			case joaat("weapon_precisionrifle"):
			case joaat("weapon_tacticalrifle"):
			case joaat("weapon_pistolxm3"):
			case joaat("weapon_candycane"):
			case joaat("weapon_railgunxm3"):
			case 350597077:
			case joaat("weapon_battlerifle"):
			case joaat("weapon_snowlauncher"):
			case -624951259:
			case -1916886713:
				return 1;
				break;
			}
	}
	return 0;
}

int func_191(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
				
				case 5:
					iVar0 = 1400690398;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
				
				case 7:
					iVar0 = joaat("component_microsmg_varmod_xm3");
					break;
				
				case 8:
					iVar0 = 1694268374;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
				
				case 10:
					iVar0 = 1605520746;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
				
				case 4:
					iVar0 = joaat("component_pumpshotgun_varmod_xm3");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 4:
					iVar0 = 221907180;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
				
				case 8:
					iVar0 = 302671608;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		case joaat("weapon_bat"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bat_varmod_xm3");
					break;
				
				case 1:
					iVar0 = joaat("component_bat_varmod_xm3_01");
					break;
				
				case 2:
					iVar0 = joaat("component_bat_varmod_xm3_02");
					break;
				
				case 3:
					iVar0 = joaat("component_bat_varmod_xm3_03");
					break;
				
				case 4:
					iVar0 = joaat("component_bat_varmod_xm3_04");
					break;
				
				case 5:
					iVar0 = joaat("component_bat_varmod_xm3_05");
					break;
				
				case 6:
					iVar0 = joaat("component_bat_varmod_xm3_06");
					break;
				
				case 7:
					iVar0 = joaat("component_bat_varmod_xm3_07");
					break;
				
				case 8:
					iVar0 = joaat("component_bat_varmod_xm3_08");
					break;
				
				case 9:
					iVar0 = joaat("component_bat_varmod_xm3_09");
					break;
			}
			break;
		
		case joaat("weapon_rpg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -1240142720;
					break;
			}
			break;
		
		case joaat("weapon_battlerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -292433650;
					break;
				
				case 1:
					iVar0 = 494808810;
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -1675905033;
					break;
			}
			break;
		
		case -1916886713:
			switch (bParam1)
			{
				case 0:
					iVar0 = -584965981;
					break;
				
				case 1:
					iVar0 = 291145905;
					break;
				
				case 2:
					iVar0 = 1978284360;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_192(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_189(Var43.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_192(int iParam0, var* uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_193(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_194(int iParam0)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (func_23(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_114135.f_2367.f_539.f_294[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_195(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_79788, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_79788, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_79788, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_79788, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_198(&iVar0))
		{
			if (func_197(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, false, true, 0))
		{
			iVar5 = func_20();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_196(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_196(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam3);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_197(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_8(*uParam1, 0f, 0f, 0f, 0);
}

int func_198(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_225())
		{
			*uParam0 = func_204(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, 0, 1, -1);
			if (func_203(*uParam0) && !func_199(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_199(int iParam0)
{
	return func_200(iParam0, 0, 1);
}

int func_200(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101740.f_1421[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_202() == 0)
		{
			return BitTest(func_178(func_201(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_114135.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_201(int iParam0)
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
			return 13519;
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
		
		case 61:
			return 12447;
			break;
		
		default:
			break;
	}
	return 15468;
}

int func_202()
{
	return Global_33087;
}

int func_203(int iParam0)
{
	return func_200(iParam0, 5, 1);
}

int func_204(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 61)
	{
		if (iParam3 == 6 || iParam3 == func_224(iVar0))
		{
			if (!bParam5 || func_223(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_205(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_205(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_220(Global_103852);
			break;
		
		case 46:
			if (Global_1845051 != func_153())
			{
				if (func_219(Global_1845051))
				{
					return func_212(2, 2);
				}
				else if (func_211(Global_1845051))
				{
					return func_212(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return func_209(-9.9f, -0.5f, 1f);
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1965191;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
		
		case 56:
			switch (func_208())
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.166f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.718f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
		
		case 58:
			return func_206();
			break;
		
		case 59:
			return 560f, -405f, -69.6591f;
			break;
		
		case 60:
			return -1299.691f, -3017.165f, -48.2612f;
			break;
		
		case 61:
			return 756.7726f, -993.5798f, -47.3777f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_206()
{
	if (!func_128(Global_1950373))
	{
		return Global_1950373;
	}
	switch (func_207())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
		
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
		
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
		
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
		
		case 4:
			return 795.583f, 1210.78f, 338.962f;
		
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
		
		case 6:
			return -789.719f, 5400.921f, 33.915f;
		
		case 7:
			return -24.384f, 3048.167f, 40.703f;
		
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
		
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
		
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
		
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
		
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
		
		case 13:
			return -57.208f, -2658.793f, 5.737f;
		
		case 14:
			return 1905.017f, 565.222f, 175.558f;
		
		case 15:
			return 974.484f, -1718.798f, 30.296f;
		
		case 16:
			return 779.077f, -3266.297f, 5.719f;
		
		case 17:
			return -587.728f, -1637.208f, 19.611f;
		
		case 18:
			return 733.99f, -736.803f, 26.165f;
		
		case 19:
			return -1694.632f, -454.082f, 40.712f;
		
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
		
		case 21:
			return -496.618f, 40.231f, 52.316f;
		
		case 22:
			return 275.527f, 66.509f, 94.108f;
		
		case 23:
			return 260.928f, -763.35f, 30.559f;
		
		case 24:
			return -478.025f, -741.45f, 30.299f;
		
		case 25:
			return 894.94f, 3603.911f, 32.56f;
		
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
		
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
		
		case 28:
			return 1101.032f, -335.172f, 66.944f;
		
		case 29:
			return 149.683f, -1655.674f, 29.028f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_207()
{
	return Global_2652568.f_2706;
}

int func_208()
{
	return Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_8;
}

Vector3 func_209(struct<3> Param0)
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_210(), 0f, Param0);
}

Vector3 func_210()
{
	return -880f, -2770f, -50f;
}

int func_211(int iParam0)
{
	if (iParam0 != func_153())
	{
		if ((BitTest(Global_1845221[iParam0 /*889*/].f_268.f_294, 0) || BitTest(Global_1845221[iParam0 /*889*/].f_268.f_294, 1)) || BitTest(Global_1845221[iParam0 /*889*/].f_268.f_294, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_212(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1845051 != func_153())
	{
		if (iParam1 == 3)
		{
			if (func_213(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1845221[Global_1845051 /*889*/].f_268.f_294, 4))
			{
				if (func_213(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (BitTest(Global_1845221[Global_1845051 /*889*/].f_268.f_294, 5))
			{
				if (func_213(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_213(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_218(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_218(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_216(iParam0) };
	}
	else
	{
		Var12 = { func_215(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_214(Var18, -Var0.f_3.f_2) };
	Var18 = { func_214(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_214(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_215(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_216(int iParam0)
{
	return func_217(iParam0);
}

struct<6> func_217(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_218(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_219(int iParam0)
{
	if (iParam0 != func_153())
	{
		if ((BitTest(Global_1845221[iParam0 /*889*/].f_268.f_294, 3) || BitTest(Global_1845221[iParam0 /*889*/].f_268.f_294, 4)) || BitTest(Global_1845221[iParam0 /*889*/].f_268.f_294, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_220(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return func_210();
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 23:
			return 745.7956f, -993.1193f, -47.37674f;
			break;
		
		case 17:
			if (func_221() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		case 21:
			return 570f, -415f, -70f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_221()
{
	return func_222(PLAYER::PLAYER_ID());
}

int func_222(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2657991[iParam0 /*467*/].f_324.f_3, 28, 31);
}

int func_223(int iParam0)
{
	return func_200(iParam0, 0, 0);
}

int func_224(int iParam0)
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
		
		case 61:
			return 3;
			break;
	}
	return 6;
}

bool func_225()
{
	return Global_101740.f_399 > 0;
}

var func_226()
{
	var uVar0;
	
	func_236(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_235(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_234(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_229(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_228(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_227(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_227(var uParam0, int iParam1)
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

void func_228(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_229(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_233(*uParam0);
	iVar1 = func_231(*uParam0);
	if (iParam1 < 1 || iParam1 > func_230(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_230(int iParam0, int iParam1)
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

var func_231(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_232(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_232(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_233(var uParam0)
{
	return uParam0 & 15;
}

void func_234(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_235(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_236(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_237(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_238(int iParam0)
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

int func_239(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = MISC::GET_HASH_KEY(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_240(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_240(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_241(uParam1, "Abigail1", func_243(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_242(iParam0), 1, 0);
			break;
		
		case 1:
			func_241(uParam1, "Abigail2", func_243(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_242(iParam0), 1, 0);
			break;
		
		case 2:
			func_241(uParam1, "Barry1", func_243(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_242(iParam0), 1, 0);
			break;
		
		case 3:
			func_241(uParam1, "Barry2", func_243(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_242(iParam0), 1, 1);
			break;
		
		case 4:
			func_241(uParam1, "Barry3", func_243(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 5:
			func_241(uParam1, "Barry3A", func_243(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 6:
			func_241(uParam1, "Barry3C", func_243(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 7:
			func_241(uParam1, "Barry4", func_243(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_242(iParam0), 0, 0);
			break;
		
		case 8:
			func_241(uParam1, "Dreyfuss1", func_243(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 9:
			func_241(uParam1, "Epsilon1", func_243(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 10:
			func_241(uParam1, "Epsilon2", func_243(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_242(iParam0), 1, 0);
			break;
		
		case 11:
			func_241(uParam1, "Epsilon3", func_243(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 12:
			func_241(uParam1, "Epsilon4", func_243(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 13:
			func_241(uParam1, "Epsilon5", func_243(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_242(iParam0), 1, 0);
			break;
		
		case 14:
			func_241(uParam1, "Epsilon6", func_243(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 15:
			func_241(uParam1, "Epsilon7", func_243(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 16:
			func_241(uParam1, "Epsilon8", func_243(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_242(iParam0), 1, 0);
			break;
		
		case 17:
			func_241(uParam1, "Extreme1", func_243(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 18:
			func_241(uParam1, "Extreme2", func_243(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 19:
			func_241(uParam1, "Extreme3", func_243(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 20:
			func_241(uParam1, "Extreme4", func_243(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 21:
			func_241(uParam1, "Fanatic1", func_243(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_242(iParam0), 1, 0);
			break;
		
		case 22:
			func_241(uParam1, "Fanatic2", func_243(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_242(iParam0), 1, 0);
			break;
		
		case 23:
			func_241(uParam1, "Fanatic3", func_243(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_242(iParam0), 0, 1);
			break;
		
		case 24:
			func_241(uParam1, "Hao1", func_243(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_242(iParam0), 0, 1);
			break;
		
		case 25:
			func_241(uParam1, "Hunting1", func_243(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 26:
			func_241(uParam1, "Hunting2", func_243(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 27:
			func_241(uParam1, "Josh1", func_243(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_242(iParam0), 1, 0);
			break;
		
		case 28:
			func_241(uParam1, "Josh2", func_243(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_242(iParam0), 1, 1);
			break;
		
		case 29:
			func_241(uParam1, "Josh3", func_243(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_242(iParam0), 1, 1);
			break;
		
		case 30:
			func_241(uParam1, "Josh4", func_243(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_242(iParam0), 1, 0);
			break;
		
		case 31:
			func_241(uParam1, "Maude1", func_243(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 32:
			func_241(uParam1, "Minute1", func_243(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 33:
			func_241(uParam1, "Minute2", func_243(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 34:
			func_241(uParam1, "Minute3", func_243(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 35:
			func_241(uParam1, "MrsPhilips1", func_243(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 36:
			func_241(uParam1, "MrsPhilips2", func_243(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 37:
			func_241(uParam1, "Nigel1", func_243(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_242(iParam0), 1, 0);
			break;
		
		case 38:
			func_241(uParam1, "Nigel1A", func_243(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_242(iParam0), 1, 1);
			break;
		
		case 39:
			func_241(uParam1, "Nigel1B", func_243(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_242(iParam0), 1, 1);
			break;
		
		case 40:
			func_241(uParam1, "Nigel1C", func_243(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_242(iParam0), 1, 1);
			break;
		
		case 41:
			func_241(uParam1, "Nigel1D", func_243(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_242(iParam0), 1, 1);
			break;
		
		case 42:
			func_241(uParam1, "Nigel2", func_243(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_242(iParam0), 1, 1);
			break;
		
		case 43:
			func_241(uParam1, "Nigel3", func_243(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_242(iParam0), 1, 1);
			break;
		
		case 44:
			func_241(uParam1, "Omega1", func_243(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 45:
			func_241(uParam1, "Omega2", func_243(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 46:
			func_241(uParam1, "Paparazzo1", func_243(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 47:
			func_241(uParam1, "Paparazzo2", func_243(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 48:
			func_241(uParam1, "Paparazzo3", func_243(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 49:
			func_241(uParam1, "Paparazzo3A", func_243(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 50:
			func_241(uParam1, "Paparazzo3B", func_243(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 51:
			func_241(uParam1, "Paparazzo4", func_243(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 52:
			func_241(uParam1, "Rampage1", func_243(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 54:
			func_241(uParam1, "Rampage3", func_243(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_242(iParam0), 1, 0);
			break;
		
		case 55:
			func_241(uParam1, "Rampage4", func_243(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_242(iParam0), 1, 0);
			break;
		
		case 56:
			func_241(uParam1, "Rampage5", func_243(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_242(iParam0), 0, 0);
			break;
		
		case 53:
			func_241(uParam1, "Rampage2", func_243(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_242(iParam0), 1, 0);
			break;
		
		case 57:
			func_241(uParam1, "TheLastOne", func_243(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 58:
			func_241(uParam1, "Tonya1", func_243(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 59:
			func_241(uParam1, "Tonya2", func_243(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 60:
			func_241(uParam1, "Tonya3", func_243(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 61:
			func_241(uParam1, "Tonya4", func_243(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		case 62:
			func_241(uParam1, "Tonya5", func_243(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_242(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_241(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_242(int iParam0)
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

struct<2> func_243(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_238(iParam0) };
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

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_245(Global_114135.f_9089.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_245(Global_114135.f_9089.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_245(Global_114135.f_9089.f_99.f_205[11]);
			break;
		
		case 90:
			return func_245(Global_114135.f_9089.f_99.f_205[7]);
			break;
		
		case 93:
			return func_245(Global_114135.f_9089.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_246(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = func_247(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_247(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_92451[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_248(bool bParam0)
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
			Global_114135.f_20568.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_114135.f_20568.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_114135.f_20568.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_114135.f_20568.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_114135.f_20568.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_114135.f_20568.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61490[iVar0 /*3*/][0] = Global_114135.f_20568[iVar0];
		Global_61490.f_31[iVar0 /*3*/][0] = Global_114135.f_20568.f_11[iVar0];
		Global_61490.f_62[iVar0 /*3*/][0] = Global_114135.f_20568.f_22[iVar0];
		Global_61490.f_93[iVar0 /*3*/][0] = Global_114135.f_20568.f_33[iVar0];
		Global_61490.f_124[iVar0 /*3*/][0] = Global_114135.f_20568.f_44[iVar0];
		Global_61490.f_155[iVar0 /*3*/][0] = Global_114135.f_20568.f_55[iVar0];
		Global_61490.f_186[iVar0 /*3*/][0] = Global_114135.f_20568.f_66[iVar0];
		Global_61490.f_217[iVar0 /*3*/][0] = Global_114135.f_20568.f_77[iVar0];
		Global_61490.f_248[iVar0 /*3*/][0] = Global_114135.f_20568.f_88[iVar0];
		if (!bParam0)
		{
			Global_61490[iVar0 /*3*/][1] = Global_114135.f_20568[iVar0];
			Global_61490.f_31[iVar0 /*3*/][1] = Global_114135.f_20568.f_11[iVar0];
			Global_61490.f_62[iVar0 /*3*/][1] = Global_114135.f_20568.f_22[iVar0];
			Global_61490.f_93[iVar0 /*3*/][1] = Global_114135.f_20568.f_33[iVar0];
			Global_61490.f_124[iVar0 /*3*/][1] = Global_114135.f_20568.f_44[iVar0];
			Global_61490.f_155[iVar0 /*3*/][1] = Global_114135.f_20568.f_55[iVar0];
			Global_61490.f_186[iVar0 /*3*/][1] = Global_114135.f_20568.f_66[iVar0];
			Global_61490.f_217[iVar0 /*3*/][1] = Global_114135.f_20568.f_77[iVar0];
			Global_61490.f_248[iVar0 /*3*/][1] = Global_114135.f_20568.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	if (func_295() && func_36())
	{
		while (Global_101683 != 6)
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
		func_250(0);
	}
}

void func_250(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_101688.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_101688.f_20), 13);
	}
}

void func_251()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_312, true) < 500f)
	{
		if (iLocal_212 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]))
			{
				STREAMING::REQUEST_MODEL(joaat("sandking"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("sandking")))
				{
					iLocal_49[0] = VEHICLE::CREATE_VEHICLE(joaat("sandking"), 1754.951f, 3290.994f, 40.1176f, 182.397f, true, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_49[0], true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sandking"));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]))
			{
				iLocal_212 = 1;
			}
		}
	}
	else if (iLocal_212 == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_312, true) > 550f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_49[0]));
			}
			iLocal_212 = 0;
		}
	}
}

void func_252()
{
	if (iLocal_173 > 0)
	{
		func_136();
		func_258();
		func_251();
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 4)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
		func_257();
		func_256();
		iLocal_174 = 0;
		while (iLocal_174 <= 12)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
			{
				func_255(iLocal_31[iLocal_174], &(Local_68[iLocal_174 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
			}
			else
			{
				func_135(&(Local_68[iLocal_174 /*8*/]), 0);
			}
			iLocal_174++;
		}
	}
	if (iLocal_173 == 0)
	{
		if (iLocal_194 == 1)
		{
			iLocal_195 = 0;
			func_34();
			iLocal_194 = 0;
		}
		iLocal_197 = 0;
		iLocal_200[0] = 0;
		iLocal_200[1] = 0;
		iLocal_203 = 0;
		iLocal_204[0] = 0;
		iLocal_204[1] = 0;
		iLocal_207 = 0;
		iLocal_212 = 0;
		iLocal_213[0] = 0;
		iLocal_271 = 0;
		iLocal_272 = 0;
		iLocal_293 = 0;
		iLocal_294 = 0;
		iLocal_295 = 0;
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_181 = MISC::GET_GAME_TIMER();
		iLocal_186 = MISC::GET_GAME_TIMER();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_46, false);
		}
		func_166(1, "STAGE_ESCAPE_MILITARY", 0, 0, 0, 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_36())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			func_249(iLocal_46, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENTER_CHOPPER"))
		{
			AUDIO::START_AUDIO_SCENE("DH_P_2B_ENTER_CHOPPER");
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
		{
			AUDIO::START_AUDIO_SCENE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
		}
		func_254(602, 0);
		PLAYER::SET_POLICE_RADAR_BLIPS(false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
			{
				func_253(iLocal_46, -1);
			}
		}
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
		iLocal_195 = 1;
		iLocal_173 = 1;
	}
	if (iLocal_173 == 1)
	{
		if (iLocal_204[0] == 1)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_61[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_47[0], 0f);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
			}
			func_145(1, 602);
			func_254(600, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_46, 1721.001f, 3264.248f, 38.40064f, 1765.509f, 3276.518f, 46.05385f, 48.25f, false, true, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							iLocal_173 = 0;
							iLocal_26 = 5;
						}
						else
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							func_30();
						}
					}
					else
					{
						iLocal_173 = 0;
						iLocal_26 = 4;
					}
				}
			}
		}
		else if (iLocal_207 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_181 + 10000)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								func_141("DP_GOD5", 7500, 1);
								iLocal_207 = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_253(int iParam0, int iParam1)
{
	Global_64319 = iParam0;
	Global_64320 = iParam1;
}

void func_254(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_64318 = iParam0;
	if (!Global_64316)
	{
		Global_64316 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_76403)
		{
			if (Global_76404[iVar0 /*9*/] == iParam0)
			{
				Global_76404[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

int func_255(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			bVar0 = true;
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
				}
				else
				{
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
		if (!iParam9 == -1 || iParam12)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_256()
{
	iLocal_51 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f, joaat("lazer"), 4);
	iLocal_52 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f, joaat("lazer"), 16386);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_51) && ENTITY::IS_ENTITY_IN_AIR(iLocal_51))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			iLocal_63 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_51);
			HUD::SET_BLIP_AS_FRIENDLY(iLocal_63, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::IS_ENTITY_IN_AIR(iLocal_52))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_64))
		{
			iLocal_64 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_52);
			HUD::SET_BLIP_AS_FRIENDLY(iLocal_64, false);
		}
	}
}

void func_257()
{
	if (iLocal_26 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
				{
					Local_318 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
							{
								if (!PED::IS_PED_INJURED(iLocal_29[0]))
								{
									if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_29[0], 1) < 600f)
									{
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_318, -75.8f, -819.9f, 326f, true) > 1600f && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_318, -2159f, 3067f, 33f, true) < 1000f)
										{
											if (Local_318.f_2 > 70f)
											{
												if (iLocal_28 != 2)
												{
													iLocal_213[0] = 1;
													iLocal_28 = 2;
												}
											}
											else if (iLocal_28 != 1)
											{
												iLocal_213[0] = 1;
												iLocal_28 = 1;
											}
											if (iLocal_271 == 1)
											{
												if (iLocal_272 == 0)
												{
													if (!func_142())
													{
														if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															func_165(&uLocal_401, 4, 0, "PilotDispatch", 0, 1);
															func_165(&uLocal_401, 5, 0, "PilotDispatch2", 0, 1);
															if (func_164(&uLocal_401, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
															{
																iLocal_272 = 1;
															}
														}
													}
												}
											}
										}
										else
										{
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_318, -75.8f, -819.9f, 326f, true) < 1600f)
											{
												if (iLocal_28 != 3)
												{
													iLocal_213[0] = 1;
													iLocal_28 = 3;
												}
												if (iLocal_271 == 0)
												{
													if (!func_142())
													{
														if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															func_165(&uLocal_401, 4, 0, "PilotDispatch", 0, 1);
															func_165(&uLocal_401, 5, 0, "PilotDispatch2", 0, 1);
															if (func_164(&uLocal_401, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
															{
																iLocal_271 = 1;
															}
														}
													}
												}
											}
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_318, -2159f, 3067f, 33f, true) > 1000f)
											{
												if (iLocal_28 != 3)
												{
													iLocal_213[0] = 1;
													iLocal_28 = 3;
												}
											}
										}
									}
									else if (iLocal_28 != 4)
									{
										iLocal_213[0] = 1;
										iLocal_28 = 4;
									}
								}
							}
						}
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_318, -75.8f, -819.9f, 326f, true) > 1600f)
				{
					if (iLocal_28 != 0)
					{
						iLocal_213[0] = 1;
						iLocal_28 = 0;
					}
					if (iLocal_271 == 1)
					{
						if (iLocal_272 == 0)
						{
							if (!func_142())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									func_165(&uLocal_401, 4, 0, "PilotDispatch", 0, 1);
									func_165(&uLocal_401, 5, 0, "PilotDispatch2", 0, 1);
									if (func_164(&uLocal_401, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
									{
										iLocal_272 = 1;
									}
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_28 != 3)
					{
						iLocal_213[0] = 1;
						iLocal_28 = 3;
					}
					if (iLocal_271 == 0)
					{
						if (!func_142())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								func_165(&uLocal_401, 4, 0, "PilotDispatch", 0, 1);
								func_165(&uLocal_401, 5, 0, "PilotDispatch2", 0, 1);
								if (func_164(&uLocal_401, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
								{
									iLocal_271 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_200[0] == 0)
	{
		if (iLocal_26 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47[0], false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_29[0]))
						{
							if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_29[0], 1) < 200f)
							{
								Local_315 = { ENTITY::GET_ENTITY_COORDS(iLocal_47[0], true) };
								TASK::CLEAR_PED_TASKS(iLocal_29[0]);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_29[0], Local_315, 10f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_29[0], 250f, 0);
								iLocal_200[0] = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_26 == 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47[0], false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_29[0]))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_61[0]))
							{
								uLocal_61[0] = func_140(iLocal_29[0], 1, 0);
							}
							Local_315 = { ENTITY::GET_ENTITY_COORDS(iLocal_47[0], true) };
							TASK::CLEAR_PED_TASKS(iLocal_29[0]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_570);
							if (!PED::IS_PED_IN_VEHICLE(iLocal_29[0], iLocal_47[0], false))
							{
								TASK::TASK_ENTER_VEHICLE(0, iLocal_47[0], 20000, -1, 2f, 1, 0, 0);
							}
							TASK::TASK_HELI_MISSION(0, iLocal_47[0], 0, 0, Local_315.f_0, Local_315.f_1, (Local_315.f_2 + 20f), 4, 30f, 10f, -1f, 170, 40, -1f, 0);
							TASK::TASK_HELI_MISSION(0, iLocal_47[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 40, -1f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_570);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_29[0], iLocal_570);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_570);
							iLocal_200[0] = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_26 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47[0], false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_29[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_29[0], iLocal_47[0], false))
						{
							if (MISC::GET_GAME_TIMER() > (iLocal_186 + 90000))
							{
								if (iLocal_295 == 0)
								{
									PED::SET_PED_ACCURACY(iLocal_29[0], 100);
									iLocal_294 = 0;
									iLocal_295 = 1;
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_186 + 10000 && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
							{
								if (iLocal_295 == 0)
								{
									PED::SET_PED_ACCURACY(iLocal_29[0], 100);
									iLocal_294 = 0;
									iLocal_295 = 1;
								}
							}
							else if (iLocal_294 == 0)
							{
								PED::SET_PED_ACCURACY(iLocal_29[0], 0);
								iLocal_295 = 0;
								iLocal_294 = 1;
							}
							if (func_2(iLocal_47[0], PLAYER::PLAYER_PED_ID(), 1) < 300f)
							{
								if (iLocal_297 == 0)
								{
									WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iLocal_29[0], joaat("vehicle_weapon_space_rocket"));
									PED::SET_PED_FIRING_PATTERN(iLocal_29[0], -1857128337);
									iLocal_296 = 0;
									iLocal_297 = 1;
								}
							}
							else if (iLocal_296 == 0)
							{
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iLocal_29[0], joaat("vehicle_weapon_player_buzzard"));
								PED::SET_PED_FIRING_PATTERN(iLocal_29[0], 1566631136);
								iLocal_297 = 0;
								iLocal_296 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_203 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47[0], false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_29[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_29[0], iLocal_47[0], false))
							{
								PED::SET_PED_ACCURACY(iLocal_29[0], 0);
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iLocal_29[0], joaat("vehicle_weapon_space_rocket"));
								iLocal_203 = 1;
							}
						}
					}
				}
			}
		}
		switch (iLocal_28)
		{
			case 0:
				if (iLocal_213[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
							{
								if (!PED::IS_PED_INJURED(iLocal_29[0]))
								{
									TASK::TASK_HELI_MISSION(iLocal_29[0], iLocal_47[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 15, 10, -1f, 0);
									iLocal_213[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_213[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
							{
								if (!PED::IS_PED_INJURED(iLocal_29[0]))
								{
									TASK::TASK_HELI_MISSION(iLocal_29[0], iLocal_47[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 50, 20, -1f, 0);
									iLocal_213[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (iLocal_213[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
							{
								if (!PED::IS_PED_INJURED(iLocal_29[0]))
								{
									TASK::TASK_HELI_MISSION(iLocal_29[0], iLocal_47[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 70, -1f, 0);
									iLocal_213[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (iLocal_213[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
							{
								if (!PED::IS_PED_INJURED(iLocal_29[0]))
								{
									TASK::TASK_HELI_MISSION(iLocal_29[0], iLocal_47[0], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_47[0], 20f, 0f, 0f), 4, 10f, 10f, ENTITY::GET_ENTITY_HEADING(iLocal_47[0]), SYSTEM::ROUND(ENTITY::GET_ENTITY_HEIGHT(iLocal_47[0], ENTITY::GET_ENTITY_COORDS(iLocal_47[0], true), true, true)), 100, -1f, 0);
									iLocal_213[0] = 0;
								}
							}
						}
					}
				}
				if (iLocal_293 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_318, -2159f, 3067f, 33f, true) > 1000f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47[0], false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
								{
									if (!PED::IS_PED_INJURED(iLocal_29[0]))
									{
										TASK::TASK_HELI_MISSION(iLocal_29[0], iLocal_47[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 170, 70, -1f, 0);
										iLocal_293 = 1;
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (iLocal_213[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
							{
								if (!PED::IS_PED_INJURED(iLocal_29[0]))
								{
									TASK::TASK_HELI_MISSION(iLocal_29[0], iLocal_47[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, 50f, -1f, 200, 170, -1f, 0);
									iLocal_213[0] = 0;
								}
							}
						}
					}
				}
				break;
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
	{
		if (PED::IS_PED_INJURED(iLocal_29[0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_61[0]));
			}
			iLocal_204[0] = 1;
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_61[0]));
		}
		iLocal_204[0] = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47[0], false))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_61[0]));
			}
			iLocal_204[0] = 1;
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_61[0]));
		}
		iLocal_204[0] = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47[0], false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_29[0]))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_29[0], iLocal_47[0], false))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
						{
							HUD::SET_BLIP_SCALE(uLocal_61[0], 1f);
						}
					}
					if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_29[0], 1) > 600f)
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_61[0]));
						}
						iLocal_204[0] = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_29[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_29[0]))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iLocal_29[0]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_29[0]);
				ENTITY::SET_ENTITY_HEALTH(iLocal_29[0], 0, 0, 0);
				if (HUD::DOES_BLIP_EXIST(uLocal_61[0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_61[0]));
				}
				iLocal_204[0] = 1;
			}
		}
	}
}

void func_258()
{
	if (iLocal_208 == 0)
	{
		if ((((func_259(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 0, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1598.278f, 2803.98f, 17.01772f, -1665.98f, 2895.398f, 34.58953f, 14.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1648.554f, 2873.74f, 24.85017f, -1673.864f, 2889.698f, 38.18856f, 14.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1647.446f, 2873.969f, 24.82373f, -1667.316f, 2914.302f, 39.39478f, 14.5f, false, true, 0))
		{
			iLocal_208 = 1;
		}
	}
	if (iLocal_208 == 1)
	{
		if ((((!func_259(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 0, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1598.278f, 2803.98f, 17.01772f, -1665.98f, 2895.398f, 34.58953f, 14.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1648.554f, 2873.74f, 24.85017f, -1673.864f, 2889.698f, 38.18856f, 14.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1647.446f, 2873.969f, 24.82373f, -1667.316f, 2914.302f, 39.39478f, 14.5f, false, true, 0))
		{
			iLocal_208 = 0;
		}
	}
	if (iLocal_199 == 1)
	{
		if (((iLocal_208 == 1 || iLocal_287 == 1) || iLocal_300 == 1) || iLocal_209 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 4)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
			iLocal_174 = 0;
			while (iLocal_174 <= 12)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[iLocal_174]))
				{
					if (!PED::IS_PED_INJURED(iLocal_31[iLocal_174]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false) || iLocal_210 == 1)
								{
									if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[iLocal_174], 1) < 39f)
									{
										if (iLocal_215[iLocal_174] == 0)
										{
											TASK::CLEAR_PED_TASKS(iLocal_31[iLocal_174]);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_31[iLocal_174], ENTITY::GET_ENTITY_COORDS(iLocal_31[iLocal_174], true), 50f, false, false);
											TASK::TASK_COMBAT_PED(iLocal_31[iLocal_174], PLAYER::PLAYER_PED_ID(), 0, 16);
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_31[iLocal_174], 51, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_31[iLocal_174], 43, true);
											iLocal_229[iLocal_174] = 0;
											iLocal_243[iLocal_174] = 0;
											iLocal_257[iLocal_174] = 0;
											iLocal_215[iLocal_174] = 1;
										}
									}
									else if (iLocal_229[iLocal_174] == 0)
									{
										TASK::CLEAR_PED_TASKS(iLocal_31[iLocal_174]);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_570);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_46, true), 2f, -1, 20f, 0, 40000f);
										TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_570);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_31[iLocal_174], iLocal_570);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_570);
										iLocal_243[iLocal_174] = 0;
										iLocal_257[iLocal_174] = 0;
										iLocal_215[iLocal_174] = 0;
										iLocal_229[iLocal_174] = 1;
									}
								}
								else
								{
									if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[iLocal_174], 1) < 39f)
									{
										if (iLocal_243[iLocal_174] == 0)
										{
											TASK::CLEAR_PED_TASKS(iLocal_31[iLocal_174]);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_31[iLocal_174], ENTITY::GET_ENTITY_COORDS(iLocal_31[iLocal_174], true), 50f, false, false);
											TASK::TASK_COMBAT_PED(iLocal_31[iLocal_174], PLAYER::PLAYER_PED_ID(), 0, 16);
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_31[iLocal_174], 51, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_31[iLocal_174], 43, true);
											iLocal_229[iLocal_174] = 0;
											iLocal_257[iLocal_174] = 0;
											iLocal_215[iLocal_174] = 0;
											iLocal_243[iLocal_174] = 1;
										}
									}
									if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[iLocal_174], 1) > 41f && func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[iLocal_174], 1) < 400f)
									{
										if (iLocal_257[iLocal_174] == 0)
										{
											iLocal_193 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
											TASK::CLEAR_PED_TASKS(iLocal_31[iLocal_174]);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_31[iLocal_174], ENTITY::GET_ENTITY_COORDS(iLocal_31[iLocal_174], true), 50f, false, false);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_570);
											if (iLocal_193 == 0)
											{
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 2f, 2f, 0);
											}
											else if (iLocal_193 == 1)
											{
												TASK::TASK_STAND_STILL(0, 500);
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 2f, 2f, 0);
											}
											else if (iLocal_193 == 2)
											{
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 3f, 2f, 0);
											}
											else if (iLocal_193 == 3)
											{
												TASK::TASK_STAND_STILL(0, 500);
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 3f, 2f, 0);
											}
											TASK::CLOSE_SEQUENCE_TASK(iLocal_570);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_31[iLocal_174], iLocal_570);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_570);
											iLocal_229[iLocal_174] = 0;
											iLocal_243[iLocal_174] = 0;
											iLocal_215[iLocal_174] = 0;
											iLocal_257[iLocal_174] = 1;
										}
									}
								}
							}
						}
					}
				}
				iLocal_174++;
			}
		}
		if (((iLocal_208 == 0 && iLocal_287 == 0) && iLocal_300 == 0) && iLocal_209 == 0)
		{
			iLocal_191 = 0;
			while (iLocal_191 <= 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[iLocal_191]))
				{
					if (!PED::IS_PED_INJURED(iLocal_31[iLocal_191]))
					{
						if (func_2(iLocal_31[iLocal_191], PLAYER::PLAYER_PED_ID(), 1) < 25f)
						{
							if (iLocal_290[iLocal_191] == 0)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_31[iLocal_191]))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_31[iLocal_191]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_31[iLocal_191]);
								}
								TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_31[iLocal_191], PLAYER::PLAYER_PED_ID(), -1, false);
								iLocal_290[iLocal_191] = 1;
							}
							if (iLocal_301 == 1)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_189 + 20000)
								{
									iLocal_300 = 1;
								}
							}
						}
						else if (func_2(iLocal_31[iLocal_191], PLAYER::PLAYER_PED_ID(), 1) > 30f)
						{
							if (iLocal_290[iLocal_191] == 1)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_31[iLocal_191]))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_31[iLocal_191]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_31[iLocal_191]);
								}
								TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_31[iLocal_191], PLAYER::PLAYER_PED_ID(), 1, false);
								iLocal_290[iLocal_191] = 0;
							}
						}
					}
				}
				iLocal_191++;
			}
		}
	}
}

int func_259(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	bool bVar110;
	int iVar111;
	
	bVar110 = false;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], bVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

void func_260()
{
	if (iLocal_173 > 0)
	{
		func_136();
		func_258();
		func_257();
	}
	if (iLocal_173 == 0)
	{
		if (iLocal_194 == 1)
		{
			iLocal_195 = 0;
			func_34();
			iLocal_194 = 0;
		}
		iLocal_196 = 0;
		iLocal_199 = 0;
		iLocal_200[0] = 0;
		iLocal_200[1] = 0;
		iLocal_208 = 0;
		iLocal_209 = 0;
		iLocal_210 = 0;
		iLocal_288 = 0;
		iLocal_289 = 0;
		iLocal_290[0] = 0;
		iLocal_290[1] = 0;
		iLocal_300 = 0;
		iLocal_301 = 0;
		iLocal_304 = 0;
		iLocal_305 = 0;
		iLocal_308 = 0;
		iLocal_189 = 0;
		iLocal_174 = 0;
		while (iLocal_174 <= 12)
		{
			iLocal_215[iLocal_174] = 0;
			iLocal_229[iLocal_174] = 0;
			iLocal_243[iLocal_174] = 0;
			iLocal_257[iLocal_174] = 0;
			iLocal_174++;
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
		iLocal_180 = MISC::GET_GAME_TIMER();
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("lazer"), true);
		STREAMING::REQUEST_MODEL(joaat("s_m_y_marine_01"));
		STREAMING::REQUEST_MODEL(joaat("s_m_m_pilot_02"));
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98160[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98160[0], false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98160[0], true, true);
					iLocal_46 = Global_98160[0];
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_46, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_46, true, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), true);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_46, false);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_46, true);
					func_120(iLocal_46, 0);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98160[1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98160[1], false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98160[1], true, true);
					iLocal_47[0] = Global_98160[1];
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_47[0], true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_47[0], true, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_47[0], false);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_47[0], "DH_P_2B_ENEMY_CHOPPERS", 0f);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_47[0], false);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_98160[2]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98160[2], false))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Global_98160[2])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98160[2], true, true);
					func_268(1734.799f, 3234.833f, 40.7041f, 321.0399f, 0, 145);
				}
				if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_98160[2])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_98160[2]))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Global_98160[2]))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Global_98160[2])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98160[2], true, true);
					func_268(1748.05f, 3294.7f, 40.106f, 204.2419f, 0, 145);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_98160.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98160.f_9[0], true, true);
			iLocal_31[0] = Global_98160.f_9[0];
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_98160.f_9[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98160.f_9[1], true, true);
			iLocal_31[1] = Global_98160.f_9[1];
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_46, false);
		}
		AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", true);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_36())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			func_249(iLocal_53, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		func_267(PLAYER::PLAYER_PED_ID(), -1);
		func_266(73);
		iLocal_195 = 1;
		iLocal_173 = 1;
	}
	if (iLocal_173 == 1)
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_GUARD"))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_GUARD"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_GUARD", false);
			}
		}
		func_117();
		if (iLocal_209 == 0)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_180 + 3000)
			{
				iLocal_182 = 0;
				while (iLocal_182 <= 12)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[iLocal_182]))
					{
						if (!PED::IS_PED_INJURED(iLocal_31[iLocal_182]))
						{
							if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[iLocal_182], 1) < 40f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_31[iLocal_182], PLAYER::PLAYER_PED_ID()))
								{
									if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
									{
										AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
										AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", true, true);
										iLocal_209 = 1;
									}
									if (iLocal_208 == 1)
									{
										AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
										AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", true, true);
										iLocal_209 = 1;
									}
									if (iLocal_305 == 0)
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_265(0))
										{
											if (func_264(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
											{
												iLocal_192 = MISC::GET_GAME_TIMER();
												iLocal_305 = 1;
											}
										}
									}
									else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_265(0))
									{
										if (func_264(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
										{
											if (MISC::GET_GAME_TIMER() > iLocal_192 + 3000)
											{
												AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
												AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", true, true);
												iLocal_209 = 1;
											}
										}
										else if (iLocal_304 == 0)
										{
											iLocal_305 = 0;
											iLocal_304 = 1;
										}
									}
								}
							}
						}
					}
					iLocal_182++;
				}
			}
		}
		if (iLocal_196 == 0)
		{
			HUD::CLEAR_PRINTS();
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
			func_141("DP_GOD2", 7500, 1);
			iLocal_196 = 1;
		}
		if (iLocal_208 == 1)
		{
			if (!func_263(5))
			{
				func_262(5);
			}
		}
		else if (func_263(5))
		{
			func_261(5);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
			{
				if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_46, 1) < 30f)
				{
					iLocal_210 = 1;
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), -1, false, true);
					iLocal_173 = 0;
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
					iLocal_26 = 3;
				}
			}
		}
	}
}

void func_261(bool bParam0)
{
	MISC::CLEAR_BIT(&Global_97518, iParam0);
}

void func_262(bool bParam0)
{
	MISC::SET_BIT(&Global_97518, iParam0);
}

bool func_263(int iParam0)
{
	return BitTest(Global_97518, iParam0);
}

int func_264(int iParam0)
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true);
	return uVar0;
}

int func_265(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_21066.f_1 > 3)
		{
			if (BitTest(Global_8919, 14))
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
	if (Global_21066.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_266(int iParam0)
{
	if (Global_98585 != -1)
	{
		if (iParam0 == Global_98585)
		{
			Global_98589 = 1;
			return;
		}
	}
}

void func_267(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_64321 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_76403)
	{
		if (iParam1 == -1 || Global_76404[iVar0 /*9*/] == iParam1)
		{
			if (Global_76404[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_76404[iVar0 /*9*/].f_6 = iParam0;
				Global_76404[iVar0 /*9*/].f_7 = 1;
				Global_76404[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_268(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_104696.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_104696.f_4, false))
		{
			if (func_277(24) != Global_104696.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_274(ENTITY::GET_ENTITY_COORDS(Global_104696.f_4, true), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_269(Global_104696.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_269(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
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
			if (ENTITY::DOES_ENTITY_EXIST(Global_78329.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78329.f_484[25], false))
			{
				if (Global_78329.f_484[25] == iParam0)
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
		func_273(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_41(iParam0, &Var0);
		if (func_8(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_79317 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_271(iParam5, &Var0, Param1, fParam4, func_63(iParam0));
		func_270(iParam5, iParam0, 0);
	}
}

void func_270(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_73(&(Global_78329.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_78329.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_78329.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_78329.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_79236 != -1 && Global_79236 != iParam0)
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
				Global_114135.f_32754.f_4801 = func_226();
			}
			if (iParam1 != Global_78329.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_277(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_40(iVar0, 145);
					}
				}
				Global_79235 = iParam1;
				Global_79236 = iParam0;
				Global_79237 = iParam2;
			}
		}
	}
}

void func_271(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_73(&(Global_78329.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_78329.f_555[0 /*21*/].f_9, 10))
		{
			func_272(iParam0);
			func_70(uParam1, &(Global_114135.f_32754.f_69[Global_78329.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_78329.f_555[0 /*21*/].f_9, 11))
			{
				Global_114135.f_32754.f_1864[Global_78329.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_114135.f_32754.f_1934[Global_78329.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_114135.f_32754.f_1864[Global_78329.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_114135.f_32754.f_1934[Global_78329.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_114135.f_32754.f_1958[Global_78329.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_66(iParam0, 1);
		}
	}
}

void func_272(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_73(&(Global_78329.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78329.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_78329.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_78329.f_139[iParam0]));
			Global_78329.f_139[iParam0] = 0;
		}
		if (BitTest(Global_78329.f_555[0 /*21*/].f_9, 13))
		{
			func_66(iParam0, 0);
		}
	}
}

void func_273(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_272(iParam0);
	func_66(iParam0, 0);
}

int func_274(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_275(Param0, iParam3, 1);
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

int func_275(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_96701[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_96701[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_276(iVar0) || iParam4 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_96701[iVar0 /*10*/].f_3, true);
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

var func_276(int iParam0)
{
	return BitTest(Global_114135.f_7233[iParam0], 0);
}

int func_277(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_78329.f_139[iParam0];
}

void func_278()
{
	if (iLocal_173 == 0)
	{
		func_282(1, 0);
		func_282(2, 0);
		func_282(7, 0);
		func_282(8, 0);
		func_282(9, 0);
		func_282(10, 0);
		func_282(4, 0);
		func_282(12, 0);
		PED::ADD_RELATIONSHIP_GROUP("MarineGroupHash", &iLocal_58);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_58, joaat("player"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("army"), joaat("player"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_58, joaat("army"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("army"), iLocal_58);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_58);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_58, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), joaat("army"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("army"), joaat("COP"));
		if (func_295())
		{
			if (Global_95840 == 1)
			{
				if (func_281() == 0)
				{
					func_280(Local_309, fLocal_321, 1, 0);
					iLocal_194 = 1;
					iLocal_173 = 0;
					iLocal_26 = 3;
				}
				if (func_281() == 1)
				{
					func_280(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_194 = 1;
					iLocal_173 = 0;
					iLocal_26 = 4;
				}
				if (func_281() == 2)
				{
					func_279();
				}
			}
			else
			{
				if (func_281() == 0)
				{
					func_280(-1565.084f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
					iLocal_194 = 1;
					iLocal_173 = 0;
					iLocal_26 = 2;
				}
				if (func_281() == 1)
				{
					func_280(Local_309, fLocal_321, 1, 0);
					iLocal_194 = 1;
					iLocal_173 = 0;
					iLocal_26 = 3;
				}
				if (func_281() == 2)
				{
					func_280(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_194 = 1;
					iLocal_173 = 0;
					iLocal_26 = 4;
				}
			}
		}
		else if (func_28(0))
		{
			func_280(-1565.084f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
			iLocal_194 = 1;
			iLocal_173 = 0;
			iLocal_26 = 2;
		}
		else
		{
			iLocal_173 = 0;
			iLocal_26 = 2;
		}
	}
}

void func_279()
{
	iLocal_195 = 0;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1747.04f, 3267.456f, 40.246f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 229.0887f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_46);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_46))
	{
		STREAMING::REQUEST_MODEL(joaat("cargobob"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_46 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), 1740.852f, 3263.161f, 40.2743f, 280.3712f, true, true, false);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_46, 0, true);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_46, 1, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_46, 2);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_46, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_46, true);
		VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_46, false);
		func_120(iLocal_46, 0);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(800);
		SYSTEM::WAIT(0);
	}
	func_30();
}

void func_280(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_295())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_101688.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		Global_101684 = { Param0 };
		Global_101687 = fParam3;
		Global_101683 = 1;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(Global_101688.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_101688.f_20), 14);
		}
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_101688.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_101688.f_20), 24);
		}
		func_250(1);
	}
}

int func_281()
{
	if (!Global_101688 == 10 && !Global_101688 == 9)
	{
		return 0;
	}
	return Global_101688.f_2;
}

void func_282(int iParam0, bool bParam1)
{
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(iParam0, !bParam1);
	MISC::ENABLE_DISPATCH_SERVICE(iParam0, bParam1);
}

void func_283()
{
	if (!func_295())
	{
		if (iLocal_173 == 0)
		{
			iLocal_26 = 1;
		}
	}
	else
	{
		iLocal_173 = 0;
		iLocal_26 = 1;
	}
}

void func_284()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_46, false))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_46))
					{
						if (func_285(PLAYER::PLAYER_PED_ID(), iLocal_46) == -1)
						{
							PAD::DISABLE_CONTROL_ACTION(0, 114, true);
						}
					}
				}
			}
		}
	}
}

int func_285(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_286()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_26 == 2 || iLocal_26 == 3)
		{
			if (func_259(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 200, 0) || iLocal_209 == 1)
			{
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			}
		}
		if (iLocal_26 == 4)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_309, true) > 1000f)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
	}
}

void func_287()
{
}

void func_288()
{
	if (iLocal_287 == 0)
	{
		iLocal_183 = 0;
		while (iLocal_183 <= 12)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[iLocal_183]))
			{
				if (!PED::IS_PED_INJURED(iLocal_31[iLocal_183]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_31[iLocal_183], PLAYER::PLAYER_PED_ID()))
					{
						if (func_2(iLocal_31[iLocal_183], PLAYER::PLAYER_PED_ID(), 1) < 40f)
						{
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								iLocal_287 = 1;
							}
						}
						if (func_2(iLocal_31[iLocal_183], PLAYER::PLAYER_PED_ID(), 1) < 25f)
						{
							if (func_264(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
							{
								if (func_293(iLocal_31[iLocal_183], 6))
								{
									iLocal_287 = 1;
								}
							}
						}
					}
				}
			}
			iLocal_183++;
		}
	}
	if (iLocal_211 == 0)
	{
		if (func_20() == 2)
		{
			func_165(&uLocal_401, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			iLocal_211 = 1;
		}
	}
	if (iLocal_208 == 0)
	{
		iLocal_190 = 0;
		while (iLocal_190 <= 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[iLocal_190]))
			{
				if (!PED::IS_PED_INJURED(iLocal_31[iLocal_190]))
				{
					if (iLocal_288 == 0 && iLocal_289 == 0)
					{
						if (!func_142())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[iLocal_190], 1) < 25f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_31[iLocal_190], PLAYER::PLAYER_PED_ID()))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_265(0))
										{
											if (func_264(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
											{
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[0]))
												{
													if (!PED::IS_PED_INJURED(iLocal_31[0]))
													{
														if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[0], 1) < 30f)
														{
															func_165(&uLocal_401, 4, iLocal_31[0], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[1]))
												{
													if (!PED::IS_PED_INJURED(iLocal_31[1]))
													{
														if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[1], 1) < 30f)
														{
															func_165(&uLocal_401, 4, iLocal_31[1], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (func_164(&uLocal_401, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_185 = MISC::GET_GAME_TIMER();
													iLocal_184 = MISC::GET_GAME_TIMER();
													iLocal_288 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_289 == 0 && iLocal_288 == 0)
					{
						if (!func_142())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[iLocal_190], 1) < 25f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_31[iLocal_190], PLAYER::PLAYER_PED_ID()))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
										{
											if (func_264(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || func_265(0))
											{
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[0]))
												{
													if (!PED::IS_PED_INJURED(iLocal_31[0]))
													{
														if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[0], 1) < 30f)
														{
															func_165(&uLocal_401, 4, iLocal_31[0], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[1]))
												{
													if (!PED::IS_PED_INJURED(iLocal_31[1]))
													{
														if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[1], 1) < 30f)
														{
															func_165(&uLocal_401, 4, iLocal_31[1], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (func_164(&uLocal_401, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_185 = MISC::GET_GAME_TIMER();
													iLocal_184 = MISC::GET_GAME_TIMER();
													iLocal_289 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_288 == 1 || iLocal_289 == 1)
					{
						if (iLocal_287 == 0 && iLocal_208 == 0)
						{
							if (iLocal_308 == 0)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_184 + 8000)
								{
									if (!func_142())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[iLocal_190], 1) < 25f)
											{
												if (PED::CAN_PED_SEE_HATED_PED(iLocal_31[iLocal_190], PLAYER::PLAYER_PED_ID()))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_265(0))
													{
														if (func_264(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
														{
															if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[0]))
															{
																if (!PED::IS_PED_INJURED(iLocal_31[0]))
																{
																	if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[0], 1) < 30f)
																	{
																		func_165(&uLocal_401, 4, iLocal_31[0], "ARMY_Guard01", 0, 1);
																	}
																}
															}
															if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[1]))
															{
																if (!PED::IS_PED_INJURED(iLocal_31[1]))
																{
																	if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[1], 1) < 30f)
																	{
																		func_165(&uLocal_401, 4, iLocal_31[1], "ARMY_Guard01", 0, 1);
																	}
																}
															}
															if (func_164(&uLocal_401, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_184 = MISC::GET_GAME_TIMER();
																iLocal_308 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
							}
							if (MISC::GET_GAME_TIMER() > iLocal_185 + 8000)
							{
								if (!func_142())
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[iLocal_190], 1) < 25f)
										{
											if (PED::CAN_PED_SEE_HATED_PED(iLocal_31[iLocal_190], PLAYER::PLAYER_PED_ID()))
											{
												if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
												{
													if (func_264(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || func_265(0))
													{
														if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[0]))
														{
															if (!PED::IS_PED_INJURED(iLocal_31[0]))
															{
																if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[0], 1) < 30f)
																{
																	func_165(&uLocal_401, 4, iLocal_31[0], "ARMY_Guard01", 0, 1);
																}
															}
														}
														if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[1]))
														{
															if (!PED::IS_PED_INJURED(iLocal_31[1]))
															{
																if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[1], 1) < 30f)
																{
																	func_165(&uLocal_401, 4, iLocal_31[1], "ARMY_Guard01", 0, 1);
																}
															}
														}
														if (iLocal_308 == 0)
														{
															if (func_164(&uLocal_401, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_185 = MISC::GET_GAME_TIMER();
																iLocal_308 = 1;
															}
														}
														if (iLocal_301 == 0)
														{
															iLocal_189 = MISC::GET_GAME_TIMER();
															iLocal_301 = 1;
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
				}
			}
			iLocal_190++;
		}
	}
	if (MISC::GET_GAME_TIMER() > iLocal_175 + 12000)
	{
		if (iLocal_208 == 1 || iLocal_287 == 1)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				if (!func_142())
				{
					if (func_292())
					{
						iLocal_179 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
						if (iLocal_179 == 0)
						{
							func_289(func_291(), "OVER_THERE", 9);
							iLocal_175 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_179 == 1)
						{
							func_289(func_291(), "PROVOKE_TRESSPASS", 9);
							iLocal_175 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_179 == 2)
						{
							func_289(func_291(), "UP_THERE", 9);
							iLocal_175 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_179 == 3)
						{
							func_289(func_291(), "suspect_spotted", 9);
							iLocal_175 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_179 == 4)
						{
							func_289(func_291(), "GENERIC_INSULT_HIGH", 9);
							iLocal_175 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_179 == 5)
						{
							func_289(func_291(), "GENERIC_INSULT_MED", 9);
							iLocal_175 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
}

void func_289(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_290(iParam2), 1);
}

int func_290(int iParam0)
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

int func_291()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, false, true, &iVar0, false, true, -1);
	}
	iLocal_177 = 0;
	while (iLocal_177 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[iLocal_177]))
		{
			if (!PED::IS_PED_INJURED(iLocal_31[iLocal_177]))
			{
				if (iVar0 == iLocal_31[iLocal_177])
				{
					return iLocal_31[iLocal_177];
				}
			}
		}
		iLocal_177++;
	}
	return 0;
}

int func_292()
{
	iLocal_178 = 0;
	while (iLocal_178 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31[iLocal_178]))
		{
			if (!PED::IS_PED_INJURED(iLocal_31[iLocal_178]))
			{
				if (func_2(PLAYER::PLAYER_PED_ID(), iLocal_31[iLocal_178], 1) < 25f)
				{
					return 1;
				}
			}
		}
		iLocal_178++;
	}
	return 0;
}

int func_293(int iParam0, int iParam1)
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

void func_294()
{
	if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_HELI"))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_HELI"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_HELI", false);
		}
	}
}

int func_295()
{
	if (Global_101688 == 10 || Global_101688 == 9)
	{
		return 1;
	}
	return 0;
}

void func_296()
{
	func_297(73);
	HUD::REQUEST_ADDITIONAL_TEXT("DOCKP2B", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(4, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2024.2f, 2968f, 30.2f, -2004f, 2921.5f, 37.6f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2133.3f, 2993.7f, 41.1f, -2152.7f, 3039.4f, 31.6f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, false, true);
	iLocal_65 = PED::ADD_SCENARIO_BLOCKING_AREA(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, false, true, true, true, 1);
	iLocal_67 = PED::ADD_SCENARIO_BLOCKING_AREA(-2168.3f, 3223.6f, 52.8f, -2156.2f, 3205f, 29f, false, true, true, true, 1);
	MISC::CLEAR_AREA(-1876.8f, 2806.1f, 32.3f, 8f, true, false, false, false);
	MISC::CLEAR_AREA(-1857.7f, 2797.9f, 32.4f, 8f, true, false, false, false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicOnMission", true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buzzard"), true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 0);
}

void func_297(int iParam0)
{
	Global_97518 = 0;
	switch (iParam0)
	{
		case 72:
			func_262(2);
			func_262(4);
			break;
		
		case 73:
			func_262(0);
			func_262(1);
			func_262(7);
			break;
		
		case 92:
			func_262(10);
			func_262(9);
			func_262(13);
			func_262(6);
			break;
		
		case 68:
			func_262(11);
			break;
		
		case 78:
			func_262(14);
			break;
		
		case 79:
			func_262(3);
			break;
		
		default:
			break;
	}
}

void func_298()
{
	func_299();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buzzard"), false);
	PLAYER::SET_POLICE_RADAR_BLIPS(true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, true, true);
	VEHICLE::CLEAR_VEHICLE_GENERATOR_AREA_OF_INTEREST();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_65, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_66, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_67, false);
	func_282(1, 1);
	func_282(2, 1);
	func_282(7, 1);
	func_282(8, 1);
	func_282(9, 1);
	func_282(10, 1);
	func_282(4, 1);
	func_282(12, 1);
	func_134();
	if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_GUARD"))
	{
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_GUARD"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_GUARD", true);
		}
	}
	AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", true);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", false, false);
	AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicOnMission", false);
	iLocal_174 = 0;
	while (iLocal_174 <= 12)
	{
		func_135(&(Local_68[iLocal_174 /*8*/]), 0);
		iLocal_174++;
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_HELI"))
	{
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_HELI"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_HELI", true);
		}
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_58);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_299()
{
	Global_97518 = 0;
}

void func_300()
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_114135.f_9089 || func_28(0))
	{
		if (!func_301())
		{
			iVar0 = func_27();
			if (iVar0 != -1)
			{
				if (!func_14(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_92415[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_19();
		}
	}
}

int func_301()
{
	if (((Global_101688 == 13 || Global_101688 == 10) || Global_101688 == 11) || Global_101688 == 12)
	{
		return 0;
	}
	return 1;
}

