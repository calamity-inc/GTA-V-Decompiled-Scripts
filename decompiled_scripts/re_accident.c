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
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
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
	struct<3> Local_41 = { 0, 0, 0 } ;
	bool bLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	float fLocal_55 = 0f;
	float fLocal_56 = 0f;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	struct<5> Local_64[31];
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	struct<5> Local_227[14];
	float fLocal_298 = 0f;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	struct<3> Local_303 = { 0, 0, 0 } ;
	struct<3> Local_306 = { 0, 0, 0 } ;
	struct<3> Local_309 = { 0, 0, 0 } ;
	struct<3> Local_312 = { 0, 0, 0 } ;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	bool bLocal_341 = 0;
	bool bLocal_342 = 0;
	bool bLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	var uLocal_356 = 16;
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
	var uLocal_367 = 0;
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
	var uLocal_401 = 0;
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
	struct<3> Local_521 = { 0, 0, 0 } ;
	struct<3> Local_524 = { 0, 0, 0 } ;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	var uLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	bool bLocal_534 = 0;
	struct<33> Local_535 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_568 = 1;
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
	iLocal_16 = 3;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	iLocal_49 = -1;
	iLocal_52 = -1;
	fLocal_55 = 0.5f;
	fLocal_56 = 0f;
	iLocal_221 = 1;
	fLocal_298 = 160f;
	iLocal_302 = 55000;
	Local_309 = { 30f, 30f, 5f };
	iLocal_350 = -1;
	Local_521 = { -458.4085f, -984.6459f, 22.5892f };
	Local_524 = { -458.1934f, -995.4897f, 22.7427f };
	Local_303 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_182();
	}
	if (CLOCK::GET_CLOCK_HOURS() > 18 || CLOCK::GET_CLOCK_HOURS() < 5)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_140(Local_303, -1, 0, 0, 0))
	{
		func_137(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (!func_136())
			{
				if (func_135())
				{
					func_182();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_CA", 0);
			switch (iLocal_299)
			{
				case 0:
					if (func_123())
					{
						func_182();
					}
					func_117();
					func_114(&Local_535);
					break;
				
				case 1:
					func_23();
					func_114(&Local_535);
					func_14();
					break;
				
				case 2:
					if (((ENTITY::DOES_ENTITY_EXIST(iLocal_315) && PED::IS_PED_DEAD_OR_DYING(iLocal_315, true)) && iLocal_346 < 5) && !bLocal_343)
					{
						func_13();
					}
					func_1();
					break;
			}
		}
		else
		{
			func_182();
		}
	}
}

void func_1()
{
	if (iLocal_532 && !iLocal_533)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
		iLocal_345 = 0;
		while (iLocal_345 < 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_325[iLocal_345]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_325[iLocal_345], false);
			}
			iLocal_345++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_317, 0f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_317, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_337))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_337, false);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
		func_2(0, 1, 1, 0, 0, 0, 0);
		iLocal_340 = 1;
		MISC::SET_TIME_SCALE(1f);
		STREAMING::REMOVE_ANIM_DICT("re@construction");
		if (CAM::DOES_CAM_EXIST(iLocal_527))
		{
			CAM::DESTROY_CAM(iLocal_527, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_321))
		{
			HUD::REMOVE_BLIP(&iLocal_321);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_322))
		{
			HUD::REMOVE_BLIP(&iLocal_322);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_323))
		{
			HUD::REMOVE_BLIP(&iLocal_323);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_324))
		{
			HUD::REMOVE_BLIP(&iLocal_324);
		}
		iLocal_533 = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_325[0]) || ENTITY::DOES_ENTITY_EXIST(iLocal_325[1]))
	{
		if (!CAM::IS_SPHERE_VISIBLE(Local_306 + Vector(20f, 0f, 0f), 30f) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_306, 80f, 80f, 80f, false, true, 0))
		{
			func_182();
		}
	}
}

void func_2(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_12(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20813.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_11())
			{
				Global_20813.f_1 = 3;
			}
			Global_22166 = 5;
		}
		func_10(1, bParam3, iParam2, 0);
		Global_64044 = 1;
		Global_76372 = 1;
		Global_79246 = 1;
	}
	else
	{
		func_12(0);
		HUD::THEFEED_RESUME();
		Global_64044 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_10(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_8(PLAYER::PLAYER_ID())) && !func_4(PLAYER::PLAYER_ID(), 0)) && !func_3()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_8(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_79246 = 0;
	}
}

bool func_3()
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_18, 14);
}

bool func_4(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_7(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_5(-1, 0) == 8;
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

int func_5(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
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

int func_6()
{
	return Global_1574925;
}

int func_7(var uParam0)
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

int func_8(int iParam0)
{
	if (func_4(iParam0, 0))
	{
		return 1;
	}
	if (func_9())
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

bool func_9()
{
	return BitTest(Global_2621446, 3);
}

int func_10(bool bParam0, bool bParam1, var uParam2, bool bParam3)
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

int func_11()
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)
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

void func_13()
{
	if (iLocal_350 == -1)
	{
		iLocal_350 = MISC::GET_GAME_TIMER() + 5000;
	}
	if (MISC::GET_GAME_TIMER() > iLocal_350)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_317))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_317, false);
			ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_317, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
			{
				VEHICLE::EXPLODE_VEHICLE(iLocal_317, true, false);
			}
		}
	}
}

void func_14()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_22();
		func_21();
		func_18();
		func_15();
	}
}

void func_15()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	Var1 = { 0f, 0f, 0f };
	if (iLocal_220 == 0)
	{
		if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_227[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_227.f_0)
			{
				if (iVar0 > 0)
				{
					fVar4 = (fVar4 + MISC::GET_DISTANCE_BETWEEN_COORDS(Local_227[(iVar0 - 1) /*5*/], Local_227[iVar0 /*5*/], true));
				}
				if (Local_227[iVar0 /*5*/].f_4)
				{
					if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_227[iVar0 /*5*/]))
					{
						fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_227[iVar0 /*5*/], Var1, true);
						if (fVar6 < fVar7)
						{
							fVar7 = fVar6;
							fVar8 = fVar4;
							iVar5 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar7 < fLocal_55)
			{
				iVar5 = iVar5;
				iLocal_220 = 1;
				iLocal_222 = MISC::GET_GAME_TIMER();
				fVar8 = fVar8;
				Local_60 = { Local_227[iVar5 /*5*/] };
				iLocal_63 = iVar5;
				iLocal_223 = iVar5 * 2;
				iLocal_225 = iLocal_223;
				iLocal_226 = iLocal_223;
				if (iLocal_226 < 0)
				{
					iLocal_226 = 0;
				}
				if (iLocal_225 >= Local_227.f_0 * 2)
				{
					iLocal_225 = (Local_227.f_0 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_220 == 1)
	{
		GRAPHICS::SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME();
		fVar9 = (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_222)) / fLocal_298);
		iVar10 = (SYSTEM::FLOOR((fVar9 / (1f / 2f))) - 1);
		iVar11 = (iLocal_223 + iVar10);
		iVar12 = (iLocal_223 - iVar10);
		if (iVar11 >= 28)
		{
			iVar11 = 27;
		}
		if (iVar12 < 0)
		{
			iVar12 = 0;
		}
		if (iVar11 > iLocal_225)
		{
			iVar0 = iLocal_225 + 1;
			while (iVar0 <= iVar11)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_227.f_0)
				{
					if (Local_227[iVar13 /*5*/].f_4)
					{
						func_16(iVar0, 1);
					}
					else
					{
						iVar11 = (iVar0 - 1);
						iVar0 = iVar11 + 1;
					}
				}
				iVar0++;
			}
			iLocal_225 = iVar11;
		}
		if (iVar12 < iLocal_226)
		{
			iVar0 = (iLocal_226 - 1);
			while (iVar0 >= iVar12)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_227.f_0)
				{
					if (Local_227[iVar13 /*5*/].f_4)
					{
						func_16(iVar0, 1);
					}
					else
					{
						iVar12 = iVar0 + 1;
						iVar0 = (iVar12 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_226 = iVar12;
		}
		iVar0 = 0;
		while (iVar0 < Local_64.f_0)
		{
			if ((MISC::GET_GAME_TIMER() - Local_64[iVar0 /*5*/].f_4) > 1000)
			{
				GRAPHICS::FADE_DECALS_IN_RANGE(Local_64[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((MISC::GET_GAME_TIMER() - Local_64[iVar0 /*5*/].f_4) > 6000)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_64[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_16(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 14)
			{
				func_17(Local_227[(iParam0 / 2) /*5*/] + Local_227[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_56, fLocal_56, fLocal_56), bParam1);
			}
		}
		else if ((iParam0 / 2) < 14)
		{
			func_17(Local_227[(iParam0 / 2) /*5*/] + Vector(fLocal_56, fLocal_56, fLocal_56), bParam1);
		}
	}
}

void func_17(struct<3> Param0, bool bParam3)
{
	if (iLocal_221 == 0)
	{
		bParam3 = false;
	}
	FIRE::REMOVE_SCRIPT_FIRE(Local_64[iLocal_224 /*5*/]);
	if (Local_64[iLocal_224 /*5*/].f_4 != 0)
	{
		GRAPHICS::FADE_DECALS_IN_RANGE(Local_64[iLocal_224 /*5*/].f_1, 0.4f, 1f);
	}
	Local_64[iLocal_224 /*5*/].f_4 = MISC::GET_GAME_TIMER();
	Local_64[iLocal_224 /*5*/].f_1 = { Param0 };
	Local_64[iLocal_224 /*5*/] = FIRE::START_SCRIPT_FIRE(Param0, iLocal_53, bParam3);
	iLocal_224++;
	if (iLocal_224 >= 31)
	{
		iLocal_224 = 0;
	}
}

void func_18()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_48)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (PAD::IS_CONTROL_PRESSED(0, 24) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_54 == 0)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 8f, 4);
					iLocal_54 = MISC::GET_GAME_TIMER() + 250;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_54)
				{
					if (!bLocal_44)
					{
						fVar4 = 9999.9f;
						Local_57 = { func_20() };
						iVar0 = 0;
						while (iVar0 < Local_227.f_0)
						{
							if (HUD::DOES_BLIP_EXIST(Local_227[iVar0 /*5*/].f_3))
							{
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_57, HUD::GET_BLIP_COORDS(Local_227[iVar0 /*5*/].f_3), true);
								fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_227[iVar0 /*5*/], HUD::GET_BLIP_COORDS(Local_227[iVar0 /*5*/].f_3), true);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_227[iVar0 /*5*/] = { Local_57 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_50 != -1)
							{
								if (MISC::ABSI((iLocal_51 - iVar5)) > 1)
								{
									iLocal_51 = -1;
								}
								if (iLocal_51 == -1)
								{
									iLocal_51 = iLocal_50;
								}
								if (MISC::ABSI((iLocal_51 - iVar5)) < 3 && MISC::ABSI((iLocal_51 - iVar5)) > 0)
								{
									if (iLocal_51 < iVar5)
									{
										iVar6 = iLocal_51;
										while (iVar6 <= (iVar5 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(Local_227[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_227[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_227[iVar6 /*5*/].f_3, 0);
													Local_227[iVar6 /*5*/].f_4 = 1;
													iLocal_52 = (iLocal_52 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_51)
										{
											if (HUD::DOES_BLIP_EXIST(Local_227[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_227[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_227[iVar6 /*5*/].f_3, 0);
													Local_227[iVar6 /*5*/].f_4 = 1;
													iLocal_52 = (iLocal_52 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_51 = iLocal_50;
								}
								if (iVar5 == 0)
								{
									if (HUD::DOES_BLIP_EXIST(Local_227[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_227[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_227[iVar5 /*5*/].f_3, 0);
											Local_227[iVar5 /*5*/].f_4 = 1;
											iLocal_52 = (iLocal_52 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (HUD::DOES_BLIP_EXIST(Local_227[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_227[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_227[iVar5 /*5*/].f_3, 0);
											Local_227[iVar5 /*5*/].f_4 = 1;
											iLocal_52 = (iLocal_52 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (func_19(Local_227[iVar5 + 1 /*5*/]))
									{
										if (HUD::DOES_BLIP_EXIST(Local_227[iVar5 /*5*/].f_3))
										{
											if (HUD::GET_BLIP_ALPHA(Local_227[iVar5 /*5*/].f_3) > 0)
											{
												HUD::SET_BLIP_ALPHA(Local_227[iVar5 /*5*/].f_3, 0);
												Local_227[iVar5 /*5*/].f_4 = 1;
												iLocal_52 = (iLocal_52 - 1);
											}
										}
									}
								}
							}
							iLocal_50 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_50 = -1;
				iLocal_51 = -1;
				iLocal_54 = 0;
			}
		}
	}
}

int func_19(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_20()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	var uVar8;
	
	iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID(), 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iVar0, iVar1) };
		Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(iVar0), 0.35f, 0f, -0.15f) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &uVar8, false, false);
		Var5 = { Var2.f_0, Var2.f_1, uVar8 };
	}
	return Var5;
}

void func_21()
{
	int iVar0;
	
	if (iLocal_46)
	{
		if (iLocal_220)
		{
			iVar0 = 0;
			while (iVar0 < Local_64.f_0)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_64[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_46 = 0;
		iLocal_220 = 1;
		iLocal_222 = MISC::GET_GAME_TIMER();
		iVar0 = 0;
		while (iVar0 < Local_227.f_0)
		{
			Local_227[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_49 != -1)
		{
			iLocal_226 = iLocal_49;
			iLocal_225 = iLocal_49;
			iLocal_223 = iLocal_49;
		}
		else
		{
			iLocal_226 = -1;
			iLocal_225 = -1;
			iLocal_223 = iLocal_49;
		}
		iLocal_224 = 1;
	}
}

void func_22()
{
	if (!iLocal_47)
	{
		iLocal_47 = 1;
	}
}

void func_23()
{
	switch (iLocal_300)
	{
		case 0:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false, -1);
			STREAMING::REQUEST_ANIM_DICT("re@construction");
			if (Local_535.f_32 <= 0)
			{
				Local_535.f_32 = MISC::GET_FRAME_COUNT();
			}
			func_113(&Local_535, joaat("s_m_m_dockwork_01"));
			func_113(&Local_535, joaat("prop_generator_01a"));
			func_113(&Local_535, joaat("p_amb_phone_01"));
			func_110(&Local_535);
			if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false, -1) && STREAMING::HAS_ANIM_DICT_LOADED("re@construction")) && func_106(&Local_535))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_317, false))
				{
					iLocal_315 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_317, 26, joaat("s_m_m_dockwork_01"), -1, true, true);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_315, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_315, 3, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_315, 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_315, 8, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(iLocal_315, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0.4f, false, false, false);
					iLocal_338 = OBJECT::CREATE_OBJECT(joaat("p_amb_phone_01"), -455.6561f, -985.8071f, 22.4868f, true, true, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_phone_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_338, iLocal_315, PED::GET_PED_BONE_INDEX(iLocal_315, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_315, 17, true);
					PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_315, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_315, true);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_315, false);
					func_105(&uLocal_356, 3, iLocal_315, "RECONACWorker", 0, 1);
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_315, "S_M_Y_GENERICWORKER_01_WHITE_01");
					iLocal_316 = PED::CREATE_PED(26, joaat("s_m_m_dockwork_01"), -462.2982f, -978.3272f, 65f, 221.4041f, true, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_316, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_316, true, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_316, true);
					EVENT::SET_DECISION_MAKER(iLocal_315, joaat("empty"));
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(joaat("empty"), 24);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(joaat("empty"), 47);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(joaat("empty"), 62);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(joaat("empty"), 138);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(joaat("empty"), 56);
					iLocal_337 = OBJECT::CREATE_OBJECT(joaat("prop_generator_01a"), Local_524.f_0, (Local_524.f_1 + 0.5f), (Local_524.f_2 - 0.25f), true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_337, 75f);
					ENTITY::SET_ENTITY_PROOFS(iLocal_337, false, true, true, false, false, false, false, false);
					iLocal_531 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sparking_generator", iLocal_337, 0f, 0f, 0.2f, 0f, 0f, 0f, 1f, false, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_337, true);
					func_104(&uLocal_356, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_349 = MISC::GET_GAME_TIMER();
					iLocal_300 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_339)
			{
				func_99();
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!iLocal_340)
				{
					if (!PED::IS_PED_INJURED(iLocal_315))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -532.2208f, -849.2668f, 19.7038f, -531.6973f, -1065.341f, 60.7893f, 190.8125f, false, true, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_322))
								{
									iLocal_322 = func_98(iLocal_317, 0, 0);
								}
							}
						}
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_315, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_317, PLAYER::PLAYER_PED_ID(), true))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_317, false);
							TASK::CLEAR_PED_TASKS(iLocal_315);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_355);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_355);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_315, iLocal_355);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_355);
							func_97();
						}
						STREAMING::REQUEST_MODEL(joaat("prop_ld_pipe_single_01"));
						if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -473.1686f, -984.6405f, 22.487f, 40f, 40f, 5f, false, true, 0) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && func_96(1, 0, 1)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_pipe_single_01")))
						{
							if (!func_136())
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
								{
									iLocal_320 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								}
								func_86(1);
							}
							iLocal_339 = 1;
						}
					}
					else
					{
						func_97();
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(iLocal_315))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_315, false))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_317, false) && !HUD::DOES_BLIP_EXIST(iLocal_322))
							{
								iLocal_322 = func_98(iLocal_317, 0, 0);
							}
						}
						else if (!HUD::DOES_BLIP_EXIST(iLocal_321))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_322))
							{
								HUD::REMOVE_BLIP(&iLocal_322);
							}
							iLocal_321 = func_83(iLocal_315, 0, 145);
						}
					}
					func_53();
					func_50();
					if (!PED::IS_PED_INJURED(iLocal_315))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_315, Local_309, false, true, 0))
						{
							if (!bLocal_341)
							{
								func_49();
							}
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_321))
						{
							HUD::REMOVE_BLIP(&iLocal_321);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_322))
						{
							HUD::REMOVE_BLIP(&iLocal_322);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_323))
						{
							HUD::REMOVE_BLIP(&iLocal_323);
						}
						if (PED::IS_PED_INJURED(iLocal_315) || ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
						{
							func_97();
						}
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_318, false))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_323))
						{
							HUD::REMOVE_BLIP(&iLocal_323);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_317, false) && !HUD::DOES_BLIP_EXIST(iLocal_322))
							{
								iLocal_322 = func_98(iLocal_317, 0, 0);
							}
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_318, false))
				{
					if (iLocal_351 >= 3)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_323))
							{
								HUD::REMOVE_BLIP(&iLocal_323);
								if (!PED::IS_PED_INJURED(iLocal_315) && !ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_315, false) && !HUD::DOES_BLIP_EXIST(iLocal_322))
									{
										iLocal_322 = func_98(iLocal_317, 0, 0);
									}
								}
							}
						}
						else if (!PED::IS_PED_INJURED(iLocal_315) && !ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_315, false) && HUD::DOES_BLIP_EXIST(iLocal_322))
							{
								HUD::REMOVE_BLIP(&iLocal_322);
								if (!HUD::DOES_BLIP_EXIST(iLocal_323))
								{
									iLocal_323 = func_98(iLocal_318, 0, 0);
								}
							}
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_315))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
						{
							iLocal_345 = 0;
							while (iLocal_345 < 11)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_325[iLocal_345]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_325[iLocal_345], false);
								}
								iLocal_345++;
							}
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
				{
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_317))
					{
						iLocal_345 = 0;
						while (iLocal_345 < 11)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_325[iLocal_345]))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_325[iLocal_345], false);
							}
							iLocal_345++;
						}
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_317, false);
						if (!PED::IS_PED_INJURED(iLocal_315))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_315, false))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_315, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_315, 116, false);
								PED::SET_PED_CONFIG_FLAG(iLocal_315, 29, false);
								if (!bLocal_343)
								{
									func_47();
									SYSTEM::WAIT(0);
									func_25(&uLocal_356, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
									while (func_24())
									{
										SYSTEM::WAIT(0);
									}
									bLocal_343 = true;
								}
								if (!PED::IS_PED_INJURED(iLocal_315))
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_315, 99, 0, 0);
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_317, false);
									ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_317, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
									VEHICLE::EXPLODE_VEHICLE(iLocal_317, true, false);
								}
								func_97();
							}
						}
					}
				}
			}
			break;
	}
}

int func_24()
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_25(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_46(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_26(sParam2, iParam3, 0);
}

int func_26(char* sParam0, int iParam1, bool bParam2)
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
					func_45();
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
		if (func_44(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_43();
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
			MISC::CLEAR_BIT(&Global_8685, 0);
			if (bParam2)
			{
				func_35();
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
				if (func_34())
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
			if (func_11())
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
			func_33();
			Global_22176 = bParam2;
		}
		Global_22168 = iParam1;
		StringCopy(&Global_21785, sParam0, 24);
		Global_21032 = 0;
		func_32();
		func_27();
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
		func_45();
	}
	return 0;
}

void func_27()
{
	if (!func_28())
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

int func_28()
{
	if (!Global_262145.f_29155)
	{
		return 0;
	}
	if (!Global_79248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_31())
	{
		return 0;
	}
	if (func_29(PLAYER::PLAYER_ID()))
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

bool func_29(int iParam0)
{
	return func_30(iParam0, 20);
}

var func_30(int iParam0, int iParam1)
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_31()
{
	return -1;
}

void func_32()
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

void func_33()
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

int func_34()
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

void func_35()
{
	if (func_42(14))
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
		Global_20813 = func_36();
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

int func_36()
{
	func_37();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_37()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_40(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_39(PLAYER::PLAYER_PED_ID());
			if (func_38(iVar0) && (!func_42(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_38(Global_114370.f_2366.f_539.f_4321))
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

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_41(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_41(int iParam0)
{
	return Global_2139[iParam0 /*29*/];
}

bool func_42(int iParam0)
{
	return Global_43922 == iParam0;
}

void func_43()
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

bool func_44(int iParam0, int iParam1)
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

void func_45()
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

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21620 = { *uParam0 };
	Global_7999 = iParam1;
	StringCopy(&Global_22236, sParam2, 24);
	Global_23155 = uParam5;
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

void func_47()
{
	Global_21032 = 0;
	func_48();
}

void func_48()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
	}
}

void func_49()
{
	switch (iLocal_351)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_315))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_349) > 3000)
				{
					func_25(&uLocal_356, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_353 = MISC::GET_GAME_TIMER();
					iLocal_349 = MISC::GET_GAME_TIMER();
					iLocal_351 = 2;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_315))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_349) > 3000)
				{
					iLocal_349 = MISC::GET_GAME_TIMER();
					iLocal_351++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_315))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_349) > 5000 && !func_24())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_354 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_315, false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_318, false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
								{
									if (!HUD::DOES_BLIP_EXIST(iLocal_323))
									{
										iLocal_323 = func_98(iLocal_318, 0, 0);
										if (HUD::DOES_BLIP_EXIST(iLocal_322))
										{
											HUD::REMOVE_BLIP(&iLocal_322);
										}
									}
								}
							}
							else if (!HUD::DOES_BLIP_EXIST(iLocal_323))
							{
								iLocal_323 = func_98(iLocal_318, 0, 0);
								if (HUD::DOES_BLIP_EXIST(iLocal_322))
								{
									HUD::REMOVE_BLIP(&iLocal_322);
								}
							}
						}
					}
					if (iLocal_354 == joaat("bulldozer"))
					{
						func_25(&uLocal_356, "CONACAU", "CONAC_HELP2", 4, 0, 0, 0);
					}
					else
					{
						func_25(&uLocal_356, "CONACAU", "CONAC_HELP3", 4, 0, 0, 0);
					}
					iLocal_349 = MISC::GET_GAME_TIMER();
					iLocal_351++;
				}
			}
			break;
		
		case 3:
			if (MISC::GET_GAME_TIMER() - iLocal_349) > MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000)
			{
				if (!func_24())
				{
					func_25(&uLocal_356, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_349 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
}

void func_50()
{
	switch (iLocal_347)
	{
		case 0:
			GRAPHICS::ADD_PETROL_DECAL(Local_524 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::START_PETROL_TRAIL_DECALS(1f);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_521, 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_521 - Vector(0f, 4f, 0f), 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_521 - Vector(0f, 8f, 0f), 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_524, 1f);
			GRAPHICS::END_PETROL_TRAIL_DECALS();
			iLocal_353 = MISC::GET_GAME_TIMER();
			iLocal_347 = 2;
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_353) > iLocal_302 || func_52())
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_531))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_531, false);
				}
				func_51();
				if (!bLocal_343)
				{
					if (!PED::IS_PED_INJURED(iLocal_315) && !ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
					{
						if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_315, iLocal_317, -1, false, false) && !VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_315, iLocal_317, 0, false, false))
						{
							func_47();
							SYSTEM::WAIT(0);
							func_25(&uLocal_356, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_343 = true;
						}
					}
				}
				MISC::ENABLE_DISPATCH_SERVICE(3, true);
				MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(80f);
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, false, true, true);
				MISC::CREATE_INCIDENT(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_530, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_347 = 3;
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_317))
			{
				if (!FIRE::IS_ENTITY_ON_FIRE(iLocal_317))
				{
				}
			}
			if (iLocal_346 < 2)
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_317, false);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_317, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
						VEHICLE::EXPLODE_VEHICLE(iLocal_317, true, false);
					}
				}
			}
			break;
	}
}

void func_51()
{
	iLocal_46 = 1;
}

int func_52()
{
	if (iLocal_220 == 1)
	{
		return 1;
	}
	return 0;
}

void func_53()
{
	struct<3> Var0;
	
	switch (iLocal_346)
	{
		case 0:
			if (iLocal_351 >= 2)
			{
				if (!PED::IS_PED_INJURED(iLocal_315) && !ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_315, false))
					{
						iLocal_346++;
					}
					OBJECT::DELETE_OBJECT(&iLocal_338);
					if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_315, iLocal_317, -1, false, false) || VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_315, iLocal_317, 0, false, false))
					{
						if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_315, iLocal_317, -1, false, false))
						{
							bLocal_342 = true;
							Local_312 = { ENTITY::GET_ENTITY_COORDS(iLocal_317, false) + Vector(0f, -1f, -3f) };
						}
						else
						{
							Local_312 = { ENTITY::GET_ENTITY_COORDS(iLocal_317, false) + Vector(0f, 1.5f, -3f) };
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_312, 4.2f, 4f, 5f, false, true, 0))
						{
							if (!bLocal_341)
							{
								func_47();
								SYSTEM::WAIT(0);
								func_25(&uLocal_356, "CONACAU", "CONAC_FREE", 4, 0, 0, 0);
								bLocal_341 = true;
							}
						}
						else
						{
							bLocal_341 = true;
							iLocal_346++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_315) && !ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_318, false))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_318, false, true, true, false, false, false, false, false);
				}
				ENTITY::SET_ENTITY_PROOFS(iLocal_315, false, true, false, false, false, false, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_317, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_355);
				if (bLocal_342)
				{
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 0.25f, 0, 40000f);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 0.25f, 0, 40000f);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_355);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_315, iLocal_355);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_355);
				PED::SET_PED_KEEP_TASK(iLocal_315, true);
				iLocal_349 = MISC::GET_GAME_TIMER();
				iLocal_346++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_315))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_349) > 500 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_315, false))
				{
					iLocal_302 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_317, false))
					{
					}
					func_47();
					SYSTEM::WAIT(0);
					func_25(&uLocal_356, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_349 = MISC::GET_GAME_TIMER();
					iLocal_346++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_315))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_315, -464.7217f, -989.7214f, 22.4867f, 3f, 10f, 3f, false, true, 0) || (MISC::GET_GAME_TIMER() - iLocal_349) > 10000)
				{
					func_25(&uLocal_356, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_346++;
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_315))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_315, -472.7056f, -991.105f, 22.4867f, 3f, 30f, 3f, false, true, 0) || (MISC::GET_GAME_TIMER() - iLocal_349) > 10000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_317, false);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_317, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
						VEHICLE::EXPLODE_VEHICLE(iLocal_317, true, false);
					}
					iLocal_346++;
				}
			}
			break;
		
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_349) > 3000)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_317, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_317, false);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_317, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
					VEHICLE::EXPLODE_VEHICLE(iLocal_317, true, false);
				}
				if (!PED::IS_PED_INJURED(iLocal_315))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RE14A_SAFE");
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_318, false))
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_318, false, false, false, false, false, false, false, false);
					}
					ENTITY::SET_ENTITY_PROOFS(iLocal_315, false, false, false, false, false, false, false, false);
					PED::SET_PED_CAN_RAGDOLL(iLocal_315, true);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_315, true);
					PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_315, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_315, false);
					EVENT::SET_DECISION_MAKER(iLocal_315, joaat("DEFAULT"));
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::OPEN_SEQUENCE_TASK(&iLocal_355);
					TASK::TASK_PLAY_ANIM(0, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::SET_SEQUENCE_TO_REPEAT(iLocal_355, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_355);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_315, iLocal_355);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_355);
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, false, true, true);
				MISC::CREATE_INCIDENT(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_530, 0, 0);
				iLocal_349 = MISC::GET_GAME_TIMER();
				iLocal_346++;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_315))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_349) > 6400)
				{
					Var0 = { -477.2774f, -990.0638f, 23.5497f };
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_320))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_320, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_318))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_318, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_355);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_PICNIC", Var0, 304.8172f, 0, true, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_355);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_315, iLocal_355);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_355);
					func_25(&uLocal_356, "CONACAU", "CONAC_THANK", 4, 0, 0, 0);
					func_54();
				}
			}
			else
			{
				func_97();
			}
			break;
	}
}

void func_54()
{
	while (!func_82())
	{
		SYSTEM::WAIT(0);
	}
	func_77(func_36(), 4, 2);
	func_58(-1, 0);
	func_55();
	iLocal_299 = 2;
}

void func_55()
{
	func_56();
}

int func_56()
{
	if (func_57(0))
	{
		return 0;
	}
	if (Global_101431.f_8)
	{
		if (Global_101431.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101431.f_10 > 1)
	{
		return 0;
	}
	Global_101431.f_10++;
	return 1;
}

int func_57(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

void func_58(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_75();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_74(iParam0))
	{
		func_73(iParam0, bParam1);
		if (!func_72(51))
		{
			func_68("RE_REWARD", 1, 0, 4000, 10000, func_71(), 0, 138, 0);
			func_67(51);
		}
		if (func_66(iParam0))
		{
			Global_114370.f_24998.f_2 = 3;
		}
		if (func_65(iParam0, bParam1) != 322)
		{
			func_60(func_65(iParam0, bParam1), Local_41.f_0, Local_41.f_1);
		}
		Global_114358 = bParam1;
		if (Global_114356 == 0)
		{
			if (((Global_114359 == 1 || Global_114359 == 5) || Global_114359 == 11) || Global_114359 == 25)
			{
				func_59(2);
			}
			else if ((Global_114359 == 26 || Global_114359 == 8) || Global_114359 == 17)
			{
				func_59(7);
			}
			else
			{
				func_59(1);
			}
		}
	}
}

void func_59(int iParam0)
{
	Global_114356 = iParam0;
}

void func_60(int iParam0, var uParam1, var uParam2)
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
		func_64((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_114370.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114370.f_10197[iParam0 /*12*/].f_6 == 11 || Global_114370.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_114370.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_114370.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_114370.f_10197[iParam0 /*12*/].f_11 = uParam2;
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
		func_61();
	}
}

void func_61()
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
	Global_114106 = 0;
	Global_114107 = 0;
	Global_114108 = 0;
	Global_114109 = 0;
	Global_114110 = 0;
	Global_114111 = 0;
	Global_114112 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114370.f_10197.f_3853;
	Global_114370.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_114370.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_114370.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_114106++;
					fVar1 = (fVar1 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_114107++;
					fVar2 = (fVar2 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_114108++;
					fVar3 = (fVar3 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_114109++;
					fVar4 = (fVar4 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_114110++;
					fVar5 = (fVar5 + (Global_114370.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_114111++;
					fVar6 = (fVar6 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_114112++;
					fVar7 = (fVar7 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_114089 > 0)
	{
		if (Global_114106 == Global_114089)
		{
			fVar1 = 55f;
		}
	}
	if (Global_114090 > 0)
	{
		if (Global_114107 == Global_114090)
		{
			fVar2 = 10f;
		}
	}
	if (Global_114091 > 0)
	{
		if (Global_114108 == Global_114091)
		{
			fVar3 = 0f;
		}
	}
	if (Global_114092 > 0)
	{
		if (Global_114109 == Global_114092)
		{
			fVar4 = 10f;
		}
	}
	if (Global_114093 > 0)
	{
		if (((Global_114110 == Global_114093 || (Global_114093 * 10 / Global_114110) < 41) || Global_114110 > Global_114096) || Global_114110 == Global_114096)
		{
			if (!BitTest(Global_114370.f_10197.f_3856, 14))
			{
				if (Global_114110 == Global_114093)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_114093, 0);
					MISC::SET_BIT(&(Global_114370.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_114094 > 0)
	{
		if (Global_114111 == Global_114094)
		{
			fVar6 = 15f;
		}
	}
	if (Global_114095 > 0)
	{
		if (Global_114112 == Global_114095)
		{
			fVar7 = 5f;
		}
	}
	Global_114370.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_114110 > Global_114096 || Global_114110 == Global_114096)
	{
		iVar9 = Global_114096;
	}
	else
	{
		iVar9 = Global_114110;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_114106, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_114089, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_114107, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_114090, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_114108, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_114091, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_114109, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_114092, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_114096, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_114112 + Global_114111), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_114095 + Global_114094), true);
	Global_114113 = (Global_114106 * 100 / Global_114089);
	Global_114115 = ((Global_114108 + Global_114107) * 100 / (Global_114091 + Global_114090));
	Global_114114 = ((Global_114109 + iVar9) * 100 / (Global_114092 + Global_114096));
	Global_114116 = ((Global_114111 + Global_114112) * 100 / (Global_114094 + Global_114095));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_114370.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_114113, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_114114, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_114115, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_114370.f_10197.f_3853))
	{
		func_63(13, SYSTEM::FLOOR(Global_114370.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79248)
		{
			if (func_62() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_114104 = 0;
				}
				if (!Global_64038)
				{
					func_56();
				}
			}
		}
	}
}

int func_62()
{
	return Global_32828;
}

int func_63(int iParam0, int iParam1)
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
	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_64(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_65(int iParam0, bool bParam1)
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
			if (bParam1 == 1)
			{
				return 281;
			}
			if (bParam1 == 2)
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
			if (bParam1 == 1)
			{
				return 271;
			}
			if (bParam1 == 2)
			{
				return 272;
			}
			if (bParam1 == 3)
			{
				return 273;
			}
			if (bParam1 == 4)
			{
				return 274;
			}
			if (bParam1 == 5)
			{
				return 275;
			}
			if (bParam1 == 6)
			{
				return 276;
			}
			if (bParam1 == 7)
			{
				return 277;
			}
			if (bParam1 == 8)
			{
				return 278;
			}
			if (bParam1 == 9)
			{
				return 279;
			}
			if (bParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 246;
			}
			if (bParam1 == 2)
			{
				return 247;
			}
			if (bParam1 == 3)
			{
				return 248;
			}
			if (bParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return 260;
			}
			if (bParam1 == 2)
			{
				return 261;
			}
			if (bParam1 == 3)
			{
				return 262;
			}
			if (bParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 224;
			}
			if (bParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 244;
			}
			if (bParam1 == 2)
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
			if (bParam1 == 1)
			{
				return 221;
			}
			if (bParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return 213;
			}
			if (bParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 267;
			}
			if (bParam1 == 2)
			{
				return 268;
			}
			if (bParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 227;
			}
			if (bParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 257;
			}
			if (bParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 229;
			}
			if (bParam1 == 2)
			{
				return 230;
			}
			if (bParam1 == 3)
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

int func_66(int iParam0)
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

void func_67(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_114370.f_20413.f_150[iVar1]), bVar0);
	}
}

void func_68(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_69(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_69(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
	while (iVar0 < Global_114370.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_114370.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_114370.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_114370.f_20413.f_145++;
		func_70();
	}
}

void func_70()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_114370.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_20413.f_145)
	{
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[0])
			{
				Global_114370.f_20413.f_146[0] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[1])
			{
				Global_114370.f_20413.f_146[1] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[2])
			{
				Global_114370.f_20413.f_146[2] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_71()
{
	func_37();
	switch (Global_114370.f_2366.f_539.f_4321)
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

int func_72(int iParam0)
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
		return BitTest(Global_114370.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_73(int iParam0, bool bParam1)
{
	MISC::SET_BIT(&(Global_114370.f_24998.f_8[iParam0]), bParam1);
}

int func_74(int iParam0)
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

int func_75()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_76(Var0);
	return uVar16;
}

int func_76(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_114370.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_114370.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 14626;
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
			if (iVar1 != 14626)
			{
				iVar0 = func_81(iVar1, -1);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_78(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_78(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_79(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

var func_79(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_80(uParam1));
}

int func_80(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
		if (iVar1 > -1)
		{
			Global_2750546 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750546 = 1;
		}
	}
	return iVar0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_79(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_82()
{
	return 1;
}

int func_83(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_84(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2139[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2139[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_84(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_85(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_85(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_85(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_85(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_86(int iParam0)
{
	if (func_90())
	{
		Global_114360 = 1;
		Global_114357 = MISC::GET_GAME_TIMER();
		if (func_66(Global_114359))
		{
			func_87(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_66(Global_114359))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_114370.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_88(func_89(iParam0), -1);
					Global_114370.f_24998.f_2++;
					MISC::SET_BIT(&Global_114366, false);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_114366, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_88(func_89(iParam0), -1);
					Global_114370.f_24998.f_3++;
					MISC::SET_BIT(&Global_114366, true);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_114366, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_88(func_89(iParam0), -1);
					Global_114370.f_24998.f_4++;
					MISC::SET_BIT(&Global_114366, 2);
				}
			}
			break;
	}
}

void func_88(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_89(int iParam0)
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

int func_90()
{
	switch (func_91(&Global_32888, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_91(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_95(0))
		{
			return 0;
		}
		Global_43886++;
		*uParam0 = Global_43886;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23572.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43922 = iParam2;
		Global_43884 = *uParam0;
		Global_43885 = iParam4;
		Global_43883 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43883 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43883)
			{
				if (Global_43889[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43884 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_93(iParam2))
		{
			return 0;
		}
		if (Global_43883 == 8)
		{
			return 0;
		}
		Global_43886++;
		*uParam0 = Global_43886;
		Global_43889[Global_43883 /*4*/] = Global_43886;
		Global_43889[Global_43883 /*4*/].f_1 = iParam1;
		Global_43889[Global_43883 /*4*/].f_2 = iParam2;
		Global_43889[Global_43883 /*4*/].f_3 = 0;
		Global_43883 = (Global_43883 + 1);
		if (iParam4 != 0)
		{
			func_92(uParam0, iParam4);
		}
	}
	return 2;
}

void func_92(var uParam0, int iParam1)
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

bool func_93(int iParam0)
{
	return func_94(iParam0, Global_43922);
}

int func_94(int iParam0, int iParam1)
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

int func_95(int iParam0)
{
	if (Global_43922 == 15)
	{
		return 0;
	}
	if (func_93(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)
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

void func_97()
{
	AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
	iLocal_299 = 2;
}

int func_98(int iParam0, bool bParam1, bool bParam2)
{
	return func_84(iParam0, !bParam1, bParam2);
}

void func_99()
{
	if (func_102(1000))
	{
		func_47();
		CAM::DO_SCREEN_FADE_OUT(800);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
		{
			VEHICLE::SET_VEHICLE_DAMAGE(iLocal_317, 0f, 1f, 1f, 200f, 800f, true);
		}
		bLocal_534 = true;
		iLocal_301 = 8;
	}
	switch (iLocal_301)
	{
		case 0:
			func_2(1, 1, 1, 0, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			HUD::CLEAR_ALL_HELP_MESSAGES();
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, false);
			}
			MISC::CLEAR_AREA_OF_PEDS(Local_306, 50f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(Local_306, 30f, false, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(Local_306, 100f, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_306, 8f, 8f, 8f, false, true, 0))
				{
					iLocal_319 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_319, true, false);
					VEHICLE::DELETE_VEHICLE(&iLocal_319);
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -473.1686f, -984.6405f, 22.487f, 15f, 15f, 5f, false, true, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -477.3538f, -972.67f, 22.5494f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 237.4839f);
			}
			iLocal_528 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, -0.1371f, -0.0346f, -29.6605f, 28f, true, 2);
			iLocal_529 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, 69.4831f, -0.0346f, -40.8884f, 28f, true, 2);
			CAM::SHAKE_CAM(iLocal_528, "HAND_SHAKE", 0.3f);
			CAM::SHAKE_CAM(iLocal_529, "HAND_SHAKE", 0.3f);
			func_101();
			CAM::SET_CAM_ACTIVE(iLocal_528, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			SYSTEM::WAIT(500);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_529, iLocal_528, 3500, 1, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_START");
			iLocal_352 = MISC::GET_GAME_TIMER();
			iLocal_301 = 1;
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - iLocal_352) > 3500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_348, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iLocal_325[0], true);
				func_100(iLocal_528);
				func_100(iLocal_529);
				iLocal_528 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -455.4617f, -990.631f, 61.6885f, -89.0761f, -0.0146f, -49.881f, 80.5355f, true, 2);
				iLocal_529 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -455.4543f, -990.6208f, 61.012f, -89.0759f, -0.0146f, -47.8226f, 80.5355f, true, 2);
				CAM::SHAKE_CAM(iLocal_528, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(iLocal_529, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_529, iLocal_528, 4000, 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_315))
				{
					TASK::CLEAR_PED_TASKS(iLocal_315);
					TASK::TASK_LOOK_AT_COORD(iLocal_315, -461.4785f, -984.8583f, 28.0809f, 30000, 2080, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_338))
				{
					ENTITY::DETACH_ENTITY(iLocal_338, true, true);
					OBJECT::DELETE_OBJECT(&iLocal_338);
				}
				iLocal_352 = MISC::GET_GAME_TIMER();
				iLocal_301 = 2;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_352) > 1500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				iLocal_352 = MISC::GET_GAME_TIMER();
				iLocal_301 = 3;
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_352) > 500)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_325[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_325[0], false);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_325[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, true, true, true, false, true);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_325[0], 11, false);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_325[0], 18, false);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_325[0], 19, false);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_325[0], 23, false);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_325[0], 9, false);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_325[0], 12, false);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_325[0], 17, false);
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_reconstruct_pipefall_debris", iLocal_325[0], 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				iLocal_352 = MISC::GET_GAME_TIMER();
				iLocal_301 = 4;
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_352) > 2000)
			{
				func_100(iLocal_528);
				func_100(iLocal_529);
				iLocal_528 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 25.437f, -0.0087f, -118.3831f, 34f, true, 2);
				iLocal_529 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 2.0695f, -0.0087f, -120.2811f, 34f, true, 2);
				CAM::SHAKE_CAM(iLocal_528, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(iLocal_529, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_529, iLocal_528, 1000, 3, 3);
				AUDIO::STOP_SOUND(iLocal_348);
				iLocal_352 = MISC::GET_GAME_TIMER();
				iLocal_301 = 5;
			}
			break;
		
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_352) > 500)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_317, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
					VEHICLE::SET_VEHICLE_DAMAGE(iLocal_317, 0f, 1f, 1f, 200f, 800f, true);
					if (!PED::IS_PED_INJURED(iLocal_315))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_315);
					}
					TASK::TASK_PLAY_ANIM(iLocal_315, "re@construction", "idle_panic", 8f, -8f, -1, 16, 0f, false, false, false);
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_reconstruct_pipe_impact", iLocal_317, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
					func_25(&uLocal_356, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (CAM::DOES_CAM_EXIST(iLocal_528) && CAM::DOES_CAM_EXIST(iLocal_529))
					{
						CAM::SHAKE_CAM(iLocal_528, "HAND_SHAKE", 1.5f);
						CAM::SHAKE_CAM(iLocal_529, "HAND_SHAKE", 1.5f);
					}
					iLocal_352 = MISC::GET_GAME_TIMER();
					iLocal_301 = 6;
				}
			}
			break;
		
		case 6:
			if ((MISC::GET_GAME_TIMER() - iLocal_352) > 500)
			{
				func_100(iLocal_528);
				func_100(iLocal_529);
				iLocal_528 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -459.2609f, -987.5602f, 24.2611f, 0.583f, 0.2617f, -32.7532f, 49.9914f, true, 2);
				iLocal_529 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -459.0622f, -987.2584f, 24.2661f, 5.0301f, 0.2617f, -36.7308f, 49.9914f, true, 2);
				CAM::SHAKE_CAM(iLocal_528, "HAND_SHAKE", 0.5f);
				CAM::SHAKE_CAM(iLocal_529, "HAND_SHAKE", 0.5f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_529, iLocal_528, 2500, 3, 3);
				if (!PED::IS_PED_INJURED(iLocal_315))
				{
					TASK::TASK_LOOK_AT_COORD(iLocal_315, ENTITY::GET_ENTITY_COORDS(iLocal_315, true) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_352 = MISC::GET_GAME_TIMER();
				iLocal_301 = 7;
			}
			break;
		
		case 7:
			if ((MISC::GET_GAME_TIMER() - iLocal_352) > 2200 && !iLocal_344)
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_344 = 1;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_352) > 2500)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_317, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_317, true);
				}
				iLocal_301 = 8;
			}
			break;
		
		case 8:
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_PIPES");
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_325[0]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_325[0]));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_317, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_317, 250f);
				ENTITY::SET_ENTITY_COORDS(iLocal_317, Local_306, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_317, 80f);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_306, 50f, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_315))
			{
				TASK::CLEAR_PED_TASKS(iLocal_315);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_315);
				TASK::TASK_PLAY_ANIM(iLocal_315, "re@construction", "idle_panic", 8f, -8f, -1, 1, 0f, false, false, false);
			}
			CAM::SET_CAM_ACTIVE(iLocal_528, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(iLocal_528, false);
			CAM::DESTROY_CAM(iLocal_529, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
			func_2(0, 1, 1, 0, 0, 0, 0);
			iLocal_349 = MISC::GET_GAME_TIMER();
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pipe_stack_01"));
			iLocal_325[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -457.8815f, -988.9059f, 22.9554f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_325[1], -0.1939f, 105.0058f, 77.3964f, 2, true);
			iLocal_325[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -451.5131f, -986.8079f, 24.6947f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_325[2], 24.3941f, 32.5423f, 80.6862f, 2, true);
			iLocal_325[3] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -450.8099f, -985.9972f, 24.7104f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_325[3], 24.1841f, 110.287f, 78.4357f, 2, true);
			iLocal_325[4] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.6558f, -987.3979f, 22.9537f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_325[4], -0.0264f, 29.5754f, 79.1811f, 2, true);
			iLocal_325[5] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.1279f, -988.4162f, 22.9889f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_325[5], -0.6337f, 108.4339f, 77.9539f, 2, true);
			iLocal_325[6] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -457.0807f, -987.3059f, 23.7564f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_325[6], 0.0929f, 74.2657f, 79.3839f, 2, true);
			iLocal_325[7] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.6558f, -983.7804f, 22.9712f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_325[7], -0.0264f, 29.5754f, 80.9061f, 2, true);
			iLocal_325[8] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -455.3279f, -983.1712f, 22.9564f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_325[8], -0.1087f, 109.7339f, 80.9789f, 2, true);
			iLocal_325[9] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.1632f, -983.9359f, 23.7964f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_325[9], -0.3321f, 74.1907f, 81.6089f, 2, true);
			iLocal_325[10] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -454.644f, -994.1709f, 23.3329f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_325[10], 5.7811f, 104.6058f, 104.6964f, 2, true);
			iLocal_345 = 0;
			while (iLocal_345 < 11)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_325[iLocal_345]))
				{
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_325[iLocal_345], true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_325[iLocal_345], true);
				}
				iLocal_345++;
			}
			if (bLocal_534)
			{
				CAM::DO_SCREEN_FADE_IN(800);
				while (CAM::IS_SCREEN_FADING_IN())
				{
					SYSTEM::WAIT(0);
				}
			}
			iLocal_340 = 1;
			iLocal_339 = 0;
			break;
	}
}

void func_100(int iParam0)
{
	if (CAM::DOES_CAM_EXIST(iParam0))
	{
		CAM::DESTROY_CAM(iParam0, false);
	}
}

void func_101()
{
	AUDIO::START_PRELOADED_CONVERSATION();
	Global_23158 = 0;
}

int func_102(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_29) > iParam0)
		{
			Global_28 = MISC::GET_GAME_TIMER();
		}
		Global_29 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			if (func_103())
			{
				Global_28 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_103()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_104(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_46(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_23159 = 1;
	Global_23163 = 0;
	Global_23161 = iParam7;
	Global_2883585 = 0;
	return func_26(sParam2, iParam3, 0);
}

void func_105(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_106(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_107(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_107(var uParam0)
{
	return func_108(*uParam0, "NULL", uParam0->f_1);
}

int func_108(char* sParam0, char* sParam1, int iParam2)
{
	if (BitTest(sParam0, 30))
	{
		if (BitTest(sParam0, 29))
		{
			switch (func_109(sParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(sParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_109(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_110(var uParam0)
{
	func_111(uParam0, 9, -1, 0);
}

void func_111(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_112(bParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*2*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			MISC::SET_BIT(uParam0[iVar0 /*2*/], bParam1);
			MISC::SET_BIT(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
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
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_113(var uParam0, int iParam1)
{
	func_111(uParam0, 0, iParam1, 0);
}

void func_114(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_32 + uParam0->f_33) || BitTest(Global_101392.f_20, 2)) || BitTest(Global_101392.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
					{
						func_115(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_115(int* iParam0)
{
	func_116(iParam0, "NULL", iParam0->f_1);
}

void func_116(int* iParam0, char* sParam1, int iParam2)
{
	if (BitTest(*iParam0, 30))
	{
		switch (func_109(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, BitTest(*iParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(*iParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_117()
{
	int iVar0;
	
	func_113(&Local_535, joaat("bulldozer"));
	func_113(&Local_535, joaat("utillitruck2"));
	func_113(&Local_535, joaat("prop_pipe_stack_01"));
	if (func_106(&Local_535))
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck2"), true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_303 + Vector(50f, 50f, 50f), Local_303 - Vector(50f, 50f, 50f), false, true, true, true, 1);
		Local_306 = { -455.6561f, -985.8071f, 22.4868f };
		iLocal_317 = VEHICLE::CREATE_VEHICLE(joaat("utillitruck2"), Local_306, 80f, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_317, false, true, false);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_317, 3);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_317, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_317, 2, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_317, 3, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_317, 4, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_317, 5, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_317, 6, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_317, 7, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_317, true);
		ENTITY::SET_ENTITY_PROOFS(iLocal_317, false, false, false, true, false, false, false, false);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_317, 10000);
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_317, 5f);
		iLocal_318 = VEHICLE::CREATE_VEHICLE(joaat("bulldozer"), -472.9444f, -966.671f, 22.5534f, 181.8365f, true, true, false);
		MISC::CLEAR_AREA(Local_306, 10f, true, false, false, false);
		iLocal_325[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pipe_stack_01"), -453.2f, -986.1f, 59.45f, true, true, false);
		ENTITY::SET_ENTITY_HEADING(iLocal_325[0], 90f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_325[0], true);
		ENTITY::SET_ENTITY_PROOFS(iLocal_325[0], true, true, true, true, false, false, false, false);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_325[0], 10000000);
		Local_227[0 /*5*/] = { Local_524 };
		Local_227[1 /*5*/] = { Local_524 + Vector(0f, 0.5f, 0f) };
		Local_227[2 /*5*/] = { Local_524 + Vector(0f, 1f, 0f) };
		Local_227[3 /*5*/] = { Local_524 + Vector(0f, 2.5f, 0f) };
		Local_227[4 /*5*/] = { Local_524 + Vector(0f, 3f, 0f) };
		Local_227[5 /*5*/] = { Local_524 + Vector(0f, 3.5f, 0f) };
		Local_227[6 /*5*/] = { Local_524 + Vector(0f, 4f, 0f) };
		Local_227[7 /*5*/] = { Local_524 + Vector(0f, 4.5f, 0f) };
		Local_227[8 /*5*/] = { Local_524 + Vector(0f, 5f, 0f) };
		Local_227[9 /*5*/] = { Local_524 + Vector(0f, 5.5f, 0f) };
		Local_227[10 /*5*/] = { Local_524 + Vector(0f, 6f, 0f) };
		Local_227[11 /*5*/] = { Local_524 + Vector(0f, 6.5f, 0f) };
		Local_227[12 /*5*/] = { Local_524 + Vector(0f, 7f, 0f) };
		Local_227[13 /*5*/] = { Local_521 };
		iVar0 = 0;
		while (iVar0 < Local_227.f_0)
		{
			Local_227[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_324))
		{
		}
		func_118(&Local_535, 0);
		iLocal_532 = 1;
		iLocal_299 = 1;
	}
}

void func_118(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_120(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_119(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_119(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_120(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			func_121(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_121(var uParam0)
{
	func_122(*uParam0, "NULL", uParam0->f_1);
}

void func_122(int iParam0, char* sParam1, int iParam2)
{
	if (BitTest(iParam0, 30))
	{
		switch (func_109(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, BitTest(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

int func_123()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_41) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_134())
		{
			return 0;
		}
	}
	if (func_130())
	{
		return 1;
	}
	if (func_124(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_124(float fParam0, bool bParam1)
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
		if (func_38(func_36()))
		{
			iVar36 = func_71();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_114370.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_114370.f_18577[iVar32 /*6*/], 3))
				{
					func_125(iVar32, &Var0);
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

void func_125(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_126(uParam1, "Abigail1", func_128(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 1:
			func_126(uParam1, "Abigail2", func_128(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 2:
			func_126(uParam1, "Barry1", func_128(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 3:
			func_126(uParam1, "Barry2", func_128(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 4:
			func_126(uParam1, "Barry3", func_128(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 5:
			func_126(uParam1, "Barry3A", func_128(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 6:
			func_126(uParam1, "Barry3C", func_128(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 7:
			func_126(uParam1, "Barry4", func_128(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_127(iParam0), 0, 0);
			break;
		
		case 8:
			func_126(uParam1, "Dreyfuss1", func_128(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 9:
			func_126(uParam1, "Epsilon1", func_128(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 10:
			func_126(uParam1, "Epsilon2", func_128(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 11:
			func_126(uParam1, "Epsilon3", func_128(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 12:
			func_126(uParam1, "Epsilon4", func_128(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 13:
			func_126(uParam1, "Epsilon5", func_128(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 14:
			func_126(uParam1, "Epsilon6", func_128(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 15:
			func_126(uParam1, "Epsilon7", func_128(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 16:
			func_126(uParam1, "Epsilon8", func_128(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 17:
			func_126(uParam1, "Extreme1", func_128(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 18:
			func_126(uParam1, "Extreme2", func_128(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 19:
			func_126(uParam1, "Extreme3", func_128(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 20:
			func_126(uParam1, "Extreme4", func_128(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 21:
			func_126(uParam1, "Fanatic1", func_128(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_127(iParam0), 1, 0);
			break;
		
		case 22:
			func_126(uParam1, "Fanatic2", func_128(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_127(iParam0), 1, 0);
			break;
		
		case 23:
			func_126(uParam1, "Fanatic3", func_128(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_127(iParam0), 0, 1);
			break;
		
		case 24:
			func_126(uParam1, "Hao1", func_128(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_127(iParam0), 0, 1);
			break;
		
		case 25:
			func_126(uParam1, "Hunting1", func_128(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 26:
			func_126(uParam1, "Hunting2", func_128(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 27:
			func_126(uParam1, "Josh1", func_128(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 28:
			func_126(uParam1, "Josh2", func_128(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 29:
			func_126(uParam1, "Josh3", func_128(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 30:
			func_126(uParam1, "Josh4", func_128(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 31:
			func_126(uParam1, "Maude1", func_128(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 32:
			func_126(uParam1, "Minute1", func_128(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 33:
			func_126(uParam1, "Minute2", func_128(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 34:
			func_126(uParam1, "Minute3", func_128(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 35:
			func_126(uParam1, "MrsPhilips1", func_128(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 36:
			func_126(uParam1, "MrsPhilips2", func_128(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 37:
			func_126(uParam1, "Nigel1", func_128(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 38:
			func_126(uParam1, "Nigel1A", func_128(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 39:
			func_126(uParam1, "Nigel1B", func_128(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_127(iParam0), 1, 1);
			break;
		
		case 40:
			func_126(uParam1, "Nigel1C", func_128(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_127(iParam0), 1, 1);
			break;
		
		case 41:
			func_126(uParam1, "Nigel1D", func_128(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_127(iParam0), 1, 1);
			break;
		
		case 42:
			func_126(uParam1, "Nigel2", func_128(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 43:
			func_126(uParam1, "Nigel3", func_128(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 44:
			func_126(uParam1, "Omega1", func_128(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 45:
			func_126(uParam1, "Omega2", func_128(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 46:
			func_126(uParam1, "Paparazzo1", func_128(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 47:
			func_126(uParam1, "Paparazzo2", func_128(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 48:
			func_126(uParam1, "Paparazzo3", func_128(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 49:
			func_126(uParam1, "Paparazzo3A", func_128(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 50:
			func_126(uParam1, "Paparazzo3B", func_128(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 51:
			func_126(uParam1, "Paparazzo4", func_128(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 52:
			func_126(uParam1, "Rampage1", func_128(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 54:
			func_126(uParam1, "Rampage3", func_128(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 55:
			func_126(uParam1, "Rampage4", func_128(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 56:
			func_126(uParam1, "Rampage5", func_128(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 53:
			func_126(uParam1, "Rampage2", func_128(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 57:
			func_126(uParam1, "TheLastOne", func_128(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 58:
			func_126(uParam1, "Tonya1", func_128(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 59:
			func_126(uParam1, "Tonya2", func_128(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 60:
			func_126(uParam1, "Tonya3", func_128(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 61:
			func_126(uParam1, "Tonya4", func_128(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 62:
			func_126(uParam1, "Tonya5", func_128(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_126(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_127(int iParam0)
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

struct<2> func_128(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_129(iParam0) };
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

struct<2> func_129(int iParam0)
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

int func_130()
{
	if (func_133() && !func_134())
	{
		return 1;
	}
	if (func_132() && func_131())
	{
		return 1;
	}
	return 0;
}

bool func_131()
{
	return Global_114088 > 0;
}

int func_132()
{
	if (Global_98294 != -1)
	{
		return 1;
	}
	return 0;
}

int func_133()
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 20);
	}
	return 0;
}

int func_134()
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

int func_135()
{
	if (!func_93(5))
	{
		return 1;
	}
	if (func_130())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_134())
		{
			return 0;
		}
	}
	if (func_124(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_136()
{
	if ((Global_114359 == func_75() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_114360)
	{
		return 1;
	}
	return 0;
}

void func_137(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_75();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_139(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114356 = 0;
	func_138();
}

void func_138()
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

void func_139(int iParam0)
{
	Global_114359 = iParam0;
}

int func_140(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152957)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_75();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_181())
		{
			return 0;
		}
	}
	Local_41 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_134())
			{
				return 0;
			}
		}
		if (!Global_114370.f_9088)
		{
			return 0;
		}
		if (func_57(0))
		{
			return 0;
		}
		if (func_130())
		{
			return 0;
		}
		if (func_180())
		{
			return 0;
		}
		if (Global_114359 != -1)
		{
			return 0;
		}
		if (func_38(func_36()))
		{
			if (func_124(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_41.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_179(iParam3))
		{
			return 0;
		}
		if (func_38(func_36()))
		{
			if (func_178(func_36()) == 4 || func_178(func_36()) == 5)
			{
				return 0;
			}
		}
		if (func_38(func_36()))
		{
			if (!func_177(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_176(Global_114370.f_24998.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_114361) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_175())
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
		if (!func_166(4))
		{
			return 0;
		}
		if (!func_93(5))
		{
			return 0;
		}
		if (func_165(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_4 && iParam3 != 10)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_165(0, 0))
		{
			return 0;
		}
		if (Global_32975)
		{
			return 0;
		}
		if (func_179(30) && !func_165(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_38(func_36()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_114370.f_2366.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_114370.f_2366.f_539.f_2296[iVar4];
				if (func_164(iVar8))
				{
					if (func_142(iVar4))
					{
						if (!func_141(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_36() != iVar4)
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

bool func_141(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_142(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_114370.f_2366.f_539.f_2296[iParam0];
	return func_143(iVar0);
}

int func_143(int iParam0)
{
	return func_144(iParam0, 1);
}

int func_144(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_164(iParam0))
	{
		return 0;
	}
	func_145(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_145(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_146(func_157(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_146(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_156(iParam0, iParam1))
	{
		iVar0 = func_155(iParam1);
		iVar1 = func_153(iParam0);
		iVar2 = (func_153(iParam0) - func_153(iParam1));
		iVar3 = (func_155(iParam0) - func_155(iParam1));
		iVar4 = (func_152(iParam0) - func_152(iParam1));
		iVar5 = (func_151(iParam0) - func_151(iParam1));
		iVar6 = (func_150(iParam0) - func_150(iParam1));
		iVar7 = (func_149(iParam0) - func_149(iParam1));
	}
	else
	{
		iVar0 = func_155(iParam0);
		iVar1 = func_153(iParam1);
		iVar2 = (func_153(iParam1) - func_153(iParam0));
		iVar3 = (func_155(iParam1) - func_155(iParam0));
		iVar4 = (func_152(iParam1) - func_152(iParam0));
		iVar5 = (func_151(iParam1) - func_151(iParam0));
		iVar6 = (func_150(iParam1) - func_150(iParam0));
		iVar7 = (func_149(iParam1) - func_149(iParam0));
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
		iVar4 = (iVar4 + func_148(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_147(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_147(float fParam0, float fParam1, float fParam2)
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

int func_148(int iParam0, int iParam1)
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

int func_149(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_150(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_151(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_152(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_153(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_154(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_154(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_155(int iParam0)
{
	return iParam0 & 15;
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_164(iParam1) || !func_164(iParam0))
	{
		return 1;
	}
	iVar0 = func_153(iParam0);
	iVar1 = func_153(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_155(iParam0);
	iVar1 = func_155(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_152(iParam0);
	iVar1 = func_152(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_150(iParam0);
	iVar1 = func_150(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	var uVar0;
	
	func_163(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_162(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_161(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_160(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_159(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_158(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_158(var uParam0, int iParam1)
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

void func_159(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_160(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_155(*uParam0);
	iVar1 = func_153(*uParam0);
	if (iParam1 < 1 || iParam1 > func_148(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_162(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_163(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_164(int iParam0)
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
	iVar0 = func_149(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_150(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_151(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_153(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_155(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_152(iParam0);
	if (iVar5 < 1 || iVar5 > func_148(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_165(int iParam0, bool bParam1)
{
	if (BitTest(Global_114370.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_36();
				if (!func_38(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_174()) || Global_113417) || Global_32831) || func_173()) || func_44(8, -1)) || func_172()) || func_171()) || func_170()) || func_169()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_174()) || Global_32831) || func_173()) || func_44(8, -1)) || func_170()) || func_172()) || func_171()) || func_169()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_174()) || Global_113417) || Global_32831) || func_173()) || func_44(8, -1)) || func_170()) || func_172()) || func_171()) || func_169()) || Global_114370.f_7691.f_919[iVar0] == 5) || Global_44469 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_174()) || Global_113417) || Global_32831) || func_173()) || func_44(8, -1)) || func_172()) || func_171()) || func_169()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_174() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_44(8, -1)) || func_169()) || func_168()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_44(8, -1) || func_172()) || func_171()) || func_168()) || func_167())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_174()) || Global_32831) || func_173()) || func_44(8, -1)) || func_171()) || func_170()) || func_169()) || Global_114370.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_174()) || func_171()) || Global_113417) || Global_32831) || func_173()) || Global_45122) || func_44(8, -1)) || func_170()) || func_168()) || func_169()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_174()) || Global_113417) || Global_32831) || func_173()) || func_44(8, -1)) || func_170()) || func_168()) || func_172()) || func_171()) || func_169())
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

var func_167()
{
	return Global_101431.f_1;
}

int func_168()
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 13);
	}
	return 0;
}

int func_169()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_170()
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

bool func_171()
{
	return Global_101444.f_394 > 0;
}

bool func_172()
{
	return Global_101444.f_393 > 0;
}

var func_173()
{
	return Global_1575079;
}

int func_174()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98850.f_44 == 1;
	}
	return 0;
}

int func_175()
{
	func_35();
	if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_176(int iParam0)
{
	return func_156(func_157(), iParam0);
}

int func_177(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_36();
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

int func_178(int iParam0)
{
	if (!func_38(iParam0))
	{
		return 7;
	}
	return Global_114370.f_7691.f_919[iParam0];
}

int func_179(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_181())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_114370.f_24998, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_114370.f_24998.f_1, iVar0);
	}
	return iVar1;
}

int func_180()
{
	int iVar0;
	
	if (Global_32980)
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

int func_181()
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

void func_182()
{
	if (iLocal_532)
	{
		if (!iLocal_533)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
			func_221();
			if (!PED::IS_PED_INJURED(iLocal_315))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_315, 317, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_320, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_320, false) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_320, 50f, 50f, 50f, false, true, 0))
				{
					func_194(iLocal_320, 0, 145);
				}
			}
			iLocal_345 = 0;
			while (iLocal_345 < 11)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_325[iLocal_345]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_325[iLocal_345], false);
				}
				iLocal_345++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_317, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_317, 0f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_317, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_337))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_337, false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			func_2(0, 1, 1, 0, 0, 0, 0);
			iLocal_340 = 1;
			MISC::SET_TIME_SCALE(1f);
			STREAMING::REMOVE_ANIM_DICT("re@construction");
			if (CAM::DOES_CAM_EXIST(iLocal_527))
			{
				CAM::DESTROY_CAM(iLocal_527, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_321))
			{
				HUD::REMOVE_BLIP(&iLocal_321);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_322))
			{
				HUD::REMOVE_BLIP(&iLocal_322);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_323))
			{
				HUD::REMOVE_BLIP(&iLocal_323);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_324))
			{
				HUD::REMOVE_BLIP(&iLocal_324);
			}
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	func_118(&Local_535, 0);
	func_183(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_183(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_75();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_136())
	{
		func_187(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114361 = MISC::GET_GAME_TIMER();
		func_186(30000);
		StringCopy(&cVar0, func_185(Global_114359, 1), 64);
		if (func_74(Global_114359) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_114358, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_114356, (MISC::GET_GAME_TIMER() - Global_114357), 0);
	}
	else if (BitTest(Global_114366, 0) && Global_114370.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114366, 0);
	}
	func_184(&Global_32888);
	Global_114360 = 0;
	func_139(-1);
}

void func_184(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43884)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43883 = 0;
	Global_43885 = 0;
	Global_43922 = 15;
	Global_64035 = 0;
	Global_64036 = 0;
}

char* func_185(int iParam0, bool bParam1)
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

void func_186(int iParam0)
{
	Global_44473 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_187(int iParam0)
{
	func_188(iParam0, 0, func_193(iParam0));
}

void func_188(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_157();
	func_191(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_190(iParam0, &uVar0);
	Var1 = { func_189(&uVar0) };
}

struct<16> func_189(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_151(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_150(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_149(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_152(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_155(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_153(*uParam0), 64);
	return Var0;
}

void func_190(int iParam0, var uParam1)
{
	Global_114370.f_24998.f_43[iParam0] = *uParam1;
}

void func_191(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_153(*uParam0);
	iVar1 = func_155(*uParam0);
	iVar2 = func_152(*uParam0);
	iVar3 = func_151(*uParam0);
	iVar4 = func_150(*uParam0);
	iVar5 = func_149(*uParam0);
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
	iVar6 = func_148(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_148(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_192(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_192(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_163(uParam0, iParam1);
	func_162(uParam0, iParam2);
	func_161(uParam0, iParam3);
	func_159(uParam0, iParam5);
	func_160(uParam0, iParam4);
	func_158(uParam0, iParam6);
}

int func_193(int iParam0)
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

int func_194(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (MISC::GET_HASH_KEY(sVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_195(iParam0, iParam2);
	return 1;
}

void func_195(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_201(iParam0))
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
	func_196(iParam0, &(Global_114370.f_32752.f_5510));
}

void func_196(int iParam0, var uParam1)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_200(uParam1);
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
		if (uParam1->f_65 == -1 && !func_199(uParam1->f_66))
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
		func_198(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_197(iVar0 + 1));
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

int func_197(int iParam0)
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

int func_198(int iParam0, var uParam1, var uParam2)
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

int func_199(int iParam0)
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

void func_200(var uParam0)
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

int func_201(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_219(iParam0, 0, 0)) || func_219(iParam0, 1, 0)) || func_219(iParam0, 2, 0)) || func_218(iParam0) != 145) || func_217(iParam0)) || func_216(iParam0)) || func_215(iParam0)) || func_214(iParam0)) || !func_202(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_216(iParam0))
		{
		}
		if (func_216(iParam0))
		{
		}
		if (func_219(iParam0, 0, 0))
		{
		}
		if (func_219(iParam0, 1, 0))
		{
		}
		if (func_219(iParam0, 2, 0))
		{
		}
		if (func_218(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_202(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_203(iParam0, 0, -1))
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

int func_203(int iParam0, bool bParam1, int iParam2)
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
		if (!func_181())
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
		if ((((!func_213() && !func_212()) && !func_211()) && !func_210()) && !func_181())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_209() || MISC::IS_PC_VERSION()) || func_208())
		{
		}
		else if (!func_211())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_206(iParam0, iParam2))
		{
			return 0;
		}
	}
	if (!func_204(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_204(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_205())
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

int func_205()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_206(int iParam0, int iParam1)
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
	else if (iParam0 == func_207(1))
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

int func_207(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

bool func_208()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_209()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_210()
{
	return 0;
}

int func_211()
{
	return 1;
}

int func_212()
{
	return 1;
}

int func_213()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_203(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)
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

int func_216(int iParam0)
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

int func_217(int iParam0)
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

int func_218(int iParam0)
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

int func_219(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_220(iParam1, iVar0, &sVar1, &iVar9))
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

int func_220(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_221()
{
	Global_21032 = 0;
	func_222();
}

void func_222()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23177 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22166 = 6;
		return;
	}
}

