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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	struct<22> Local_81 = { 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	struct<14> Local_106 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_120[32];
	var uLocal_217 = 0;
	int iLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	int iLocal_226 = 0;
	bool bLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	struct<2> Local_231 = { 0, 0 } ;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 16;
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
	char* sLocal_404 = NULL;
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	func_391(ScriptParam_0);
	while (true)
	{
		func_390();
		if (func_382() || !func_381(PLAYER::PLAYER_ID(), 0, 1))
		{
			func_379();
		}
		switch (func_378(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_377() == 2)
				{
					Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 2;
				}
				else if (func_377() == 6)
				{
					Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 5;
				}
				break;
			
			case 2:
				if (func_377() == 2)
				{
					func_370();
					func_54();
				}
				else if (func_377() == 6)
				{
					Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 5;
				}
				if (((func_51(PLAYER::PLAYER_ID(), 1, 0) || func_48(PLAYER::PLAYER_ID())) || BitTest(uLocal_219, 8)) || BitTest(uLocal_219, 16))
				{
					Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 6;
				}
				break;
			
			case 5:
				func_47(&(Local_81.f_19));
				if (func_46(&(Local_81.f_19)))
				{
					Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 6;
				}
				break;
			
			case 3:
				Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 6;
			
			case 6:
				func_379();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_377())
			{
				case 0:
					func_45(&(Local_81.f_17), 0, 0);
					Local_81.f_1 = 2;
					break;
				
				case 2:
					func_41();
					func_39();
					func_3();
					if (func_1())
					{
						Local_81.f_1 = 6;
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
	if (func_2())
	{
		return 1;
	}
	return 0;
}

bool func_2()
{
	return BitTest(Local_81.f_0, 6);
}

void func_3()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_81.f_2)
		{
			case 0:
				if (!BitTest(Local_81.f_0, 10))
				{
					if (func_38(&(Local_81.f_17), 300000, 0))
					{
						MISC::SET_BIT(&Local_81, 10);
					}
				}
				if (!BitTest(Local_81.f_0, 10))
				{
					if (BitTest(Local_81.f_0, 0))
					{
						Local_81.f_5 = func_37();
						Local_81.f_2 = 1;
						Local_81.f_4 = 0;
					}
				}
				break;
			
			case 1:
				if (func_6())
				{
					MISC::SET_BIT(&Local_81, 3);
					MISC::CLEAR_BIT(&Local_81, 13);
					func_45(&(Local_81.f_21), 0, 0);
					Local_81.f_2 = 2;
				}
				break;
			
			case 2:
				if (BitTest(Local_81.f_0, 4))
				{
					func_4(Local_81.f_5);
					Local_81.f_2 = 7;
				}
				break;
			
			case 7:
				func_4(Local_81.f_5);
				break;
			}
	}
}

void func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_5(&(Local_81.f_9[0]));
			func_5(&(Local_81.f_12[0]));
			break;
	}
}

void func_5(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_6()
{
	if (Local_81.f_5 == 0)
	{
		if (!BitTest(Local_81.f_0, 1))
		{
			bLocal_227 = false;
			iLocal_228 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			iLocal_105 = 0;
			Local_81.f_3 = -1;
			Local_81.f_4 = 0;
			MISC::SET_BIT(&Local_81, true);
		}
		if (!BitTest(Local_81.f_0, 2))
		{
			if (func_36())
			{
				MISC::SET_BIT(&Local_81, 2);
			}
		}
		else if (func_7())
		{
			return 1;
		}
	}
	return 0;
}

int func_7()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	iVar0 = func_35();
	iVar1 = func_34();
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_12[0]))
	{
		if (Local_81.f_15 == 0)
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
			Local_81.f_15 = 1;
		}
		if (!BitTest(Local_81.f_0, 13))
		{
			if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					if (func_33(1, 1, 1))
					{
						if (func_27(1, 1, 1))
						{
							MISC::SET_BIT(&Local_81, 13);
						}
					}
				}
			}
		}
		if (BitTest(Local_81.f_0, 13))
		{
			if (func_26(iVar1))
			{
				if (func_26(iVar0))
				{
					if (func_14(&Var2, &fVar5))
					{
						if (func_11(&(Local_81.f_12[0]), iVar1, Var2, fVar5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_VEH(Local_81.f_12[0]), true);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_81.f_12[0]), "Not_Allow_As_Saved_Veh", 1);
							}
							Local_81.f_15 = 1;
						}
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_12[0]))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
		{
			if (Local_81.f_16 == 0)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
				Local_81.f_16 = 1;
			}
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				if (func_26(iVar0))
				{
					if (func_9(Local_81.f_12[0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_12[0]))
						{
							if (func_8(&(Local_81.f_9[0]), Local_81.f_12[0], 26, iVar0, -1, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_81.f_9[0]), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_81.f_9[0]), true, 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_81.f_9[0]), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_81.f_9[0]), Global_1837186);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_81.f_9[0]), true, 0f);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_81.f_9[0]), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
								Local_81.f_16 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]) || !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_12[0]))
	{
		return 0;
	}
	return 1;
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_9(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_10(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_10(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2810701.f_6636 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_12(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_12(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_13(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2667223.f_2921[1 /*6*/].f_5 == iParam5 && Global_2667223.f_2921[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2667223.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667223.f_2921[iVar0 /*6*/] = { Global_2667223.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667223.f_2921[1 /*6*/] = { Param0 };
		Global_2667223.f_2921[1 /*6*/].f_3 = fParam3;
		Global_2667223.f_2921[1 /*6*/].f_4 = iParam4;
		Global_2667223.f_2921[1 /*6*/].f_5 = iParam5;
	}
}

int func_13(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680263.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2680263.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680263.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2680263.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_14(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!func_25(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_228)
	{
		case 0:
			if (BitTest(Local_81.f_4, iLocal_228))
			{
				Var0 = { -1232.842f, -1095.003f, 2.2331f };
				Var3 = { -1226.248f, -1089.819f, 10.1513f };
				Var6 = { func_24(0, 0) };
				fVar9 = 19.7853f;
			}
			break;
		
		case 1:
			if (BitTest(Local_81.f_4, iLocal_228))
			{
				Var0 = { -622.0966f, 250.3288f, 75.7075f };
				Var3 = { -614.8635f, 255.2288f, 88.7755f };
				Var6 = { func_24(0, 1) };
				fVar9 = 266.4686f;
			}
			break;
		
		case 2:
			if (BitTest(Local_81.f_4, iLocal_228))
			{
				Var0 = { 794.4784f, -2034.339f, 25.2469f };
				Var3 = { 798.8026f, -2026.004f, 33.2793f };
				Var6 = { func_24(0, 2) };
				fVar9 = 355.9428f;
			}
			break;
		
		case 3:
			if (BitTest(Local_81.f_4, iLocal_228))
			{
				Var0 = { -1623.919f, 1249.831f, 135.2495f };
				Var3 = { -1621.554f, 1257.98f, 145.2376f };
				Var6 = { func_24(0, 3) };
				fVar9 = 353.7463f;
			}
			break;
		
		case 4:
			if (BitTest(Local_81.f_4, iLocal_228))
			{
				Var0 = { 1118.077f, 1875.035f, 60.3776f };
				Var3 = { 1127.638f, 1883.083f, 70.1053f };
				Var6 = { func_24(0, 4) };
				fVar9 = 201.3967f;
			}
			break;
	}
	if (iLocal_228 < 5)
	{
		if (!func_25(Var0, 0f, 0f, 0f, 0))
		{
			if (Local_81.f_3 == -1)
			{
				Local_81.f_3 = NETWORK::NETWORK_ADD_ENTITY_AREA(Var0, Var3);
			}
			else if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_81.f_3))
			{
				if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Local_81.f_3))
				{
					if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Local_81.f_3))
					{
						if (!func_15(Var6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var6 };
							*uParam1 = fVar9;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_81.f_3);
							return 1;
						}
						else
						{
							iLocal_228++;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_81.f_3);
							Local_81.f_3 = -1;
						}
					}
					else
					{
						iLocal_228++;
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_81.f_3);
						Local_81.f_3 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_228++;
		}
	}
	else
	{
		iLocal_228 = 0;
	}
	return 0;
}

int func_15(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_381(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_20(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_381(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_16(iVar1) || !bParam10) && !Global_2689224[iVar1 /*451*/].f_266)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_20(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_20(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2689224[iParam0 /*451*/].f_252)
	{
		return 1;
	}
	return 0;
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1574915;
}

Vector3 func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_23() && Global_1853131[iVar0 /*888*/].f_858) && !func_22(Global_1853131[iVar0 /*888*/].f_859))
	{
		return Global_1853131[iVar0 /*888*/].f_859;
	}
	return func_21(iParam0);
}

Vector3 func_21(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_22(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_23()
{
	return Global_2714635.f_19;
}

Vector3 func_24(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				Var0 = { -1228.99f, -1092.231f, 7.0465f };
			}
			else if (iParam1 == 1)
			{
				Var0 = { -618.6293f, 252.6611f, 80.5897f };
			}
			else if (iParam1 == 2)
			{
				Var0 = { 796.6768f, -2029.602f, 28.1346f };
			}
			else if (iParam1 == 3)
			{
				Var0 = { -1622.881f, 1253.516f, 139.6713f };
			}
			else if (iParam1 == 4)
			{
				Var0 = { 1123.27f, 1878.917f, 65.7957f };
			}
			break;
	}
	return Var0;
}

bool func_25(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_26(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_27(int iParam0, bool bParam1, bool bParam2)
{
	return func_28(0, iParam0, 1, bParam1, bParam2);
}

int func_28(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1656884, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_32(iParam0) - func_31(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_31(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_32(iParam0) - func_30(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_31(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_32(iParam0) - func_31(iParam0, 1));
		}
		if (!bParam4 && Global_1853131[PLAYER::PLAYER_ID() /*888*/] != 3)
		{
			iVar1 = (iVar1 - func_29(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1656884.f_1;
			break;
		
		case 1:
			return Global_1656884.f_2;
			break;
		
		case 2:
			return Global_1656884.f_3;
			break;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689224[iVar0 /*451*/].f_216;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689224[iVar0 /*451*/].f_217;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689224[iVar0 /*451*/].f_218;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1656892;
			break;
		
		case 1:
			return Global_1656893;
			break;
		
		case 2:
			return Global_1656894;
			break;
	}
	return 0;
}

bool func_33(int iParam0, bool bParam1, bool bParam2)
{
	return func_28(1, iParam0, 1, bParam1, bParam2);
}

int func_34()
{
	return joaat("cavalcade");
}

int func_35()
{
	return joaat("a_m_y_business_03");
}

int func_36()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	if (BitTest(Local_81.f_0, 1))
	{
		if (iLocal_105 >= Local_120.f_0)
		{
			if (bLocal_227 < 5)
			{
				bLocal_227++;
			}
			iLocal_105 = 0;
		}
		if (iLocal_105 == 0)
		{
			MISC::SET_BIT(&uLocal_219, true);
		}
		if (bLocal_227 < 5)
		{
			iVar9 = iLocal_105;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar9)))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar9));
				if (func_381(iVar0, 1, 1))
				{
					iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
					if (BitTest(uLocal_219, 1))
					{
						Var2 = { func_24(Local_81.f_5, bLocal_227) };
						Var5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
						fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Var5, true);
						if (fVar8 < 300f)
						{
							MISC::CLEAR_BIT(&uLocal_219, true);
						}
					}
				}
			}
			iLocal_105++;
			if (iLocal_105 == Local_120.f_0)
			{
				if (BitTest(uLocal_219, 1))
				{
					MISC::SET_BIT(&(Local_81.f_4), bLocal_227);
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_37()
{
	return 0;
}

int func_38(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_45(uParam0, bParam2, 0);
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

void func_39()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_81.f_6)
		{
			case 0:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_12[0]))
				{
					Local_81.f_6 = 1;
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
				{
					if (!func_40(Local_81.f_9[0]))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_12[0]))
						{
							if (func_9(Local_81.f_12[0]))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_81.f_9[0]), NETWORK::NET_TO_VEH(Local_81.f_12[0])))
								{
									if (BitTest(Local_81.f_0, 7))
									{
										MISC::SET_BIT(&Local_81, 9);
										Local_81.f_6 = 2;
									}
									else if (BitTest(Local_81.f_0, 14))
									{
										MISC::SET_BIT(&Local_81, 9);
										Local_81.f_6 = 2;
									}
									else if (BitTest(Local_81.f_0, 19))
									{
										Local_81.f_6 = 3;
									}
								}
								else
								{
									Local_81.f_6 = 4;
								}
							}
							else
							{
								Local_81.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
				{
					if (!func_40(Local_81.f_9[0]))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_81.f_9[0])))
						{
							Local_81.f_6 = 4;
						}
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_12[0]))
						{
							if (!func_9(Local_81.f_12[0]))
							{
								Local_81.f_6 = 3;
							}
							else if (BitTest(Local_81.f_0, 19))
							{
								Local_81.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
				{
					if (!func_40(Local_81.f_9[0]))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_81.f_9[0]), false))
						{
							Local_81.f_6 = 4;
						}
					}
				}
				break;
			
			case 4:
				break;
			}
	}
}

int func_40(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_41()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (iLocal_104 >= Local_120.f_0)
		{
			iLocal_104 = 0;
			iLocal_226 = 0;
			MISC::CLEAR_BIT(&uLocal_219, false);
			MISC::SET_BIT(&uLocal_219, 5);
			MISC::CLEAR_BIT(&Local_81, 5);
			MISC::CLEAR_BIT(&Local_81, 17);
			MISC::CLEAR_BIT(&uLocal_219, 14);
			MISC::CLEAR_BIT(&uLocal_219, 19);
			if (!BitTest(Local_81.f_0, 16))
			{
				if (BitTest(Local_81.f_0, 18))
				{
					if (!BitTest(Local_81.f_0, 4))
					{
						MISC::SET_BIT(&Local_81, 16);
					}
				}
			}
			if (func_44(&(Local_81.f_21)))
			{
				if (!BitTest(Local_81.f_0, 12))
				{
					if (func_38(&(Local_81.f_21), 360000, 0))
					{
						MISC::SET_BIT(&Local_81, 12);
					}
					if (!BitTest(Local_81.f_0, 15))
					{
						if (func_38(&(Local_81.f_21), 240000, 0))
						{
							MISC::SET_BIT(&Local_81, 15);
						}
					}
				}
				else
				{
					MISC::SET_BIT(&uLocal_219, 9);
				}
			}
		}
		iVar0 = iLocal_104;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			bVar2 = iVar3;
			if (BitTest(uLocal_219, 5))
			{
				if (Local_120[iVar0 /*3*/].f_2 < 7)
				{
					MISC::CLEAR_BIT(&uLocal_219, 5);
				}
			}
			if (!BitTest(Local_81.f_0, 0))
			{
				if (BitTest(Local_120[iVar0 /*3*/], 0))
				{
					iLocal_226++;
				}
			}
			else if (BitTest(Local_120[iVar0 /*3*/], 2))
			{
				if (!BitTest(Local_81.f_0, 17))
				{
					if (!BitTest(Local_81.f_7, bVar2))
					{
						if (Local_120[iVar0 /*3*/].f_2 > 4)
						{
							MISC::SET_BIT(&(Local_81.f_7), bVar2);
							MISC::SET_BIT(&Local_81, 17);
						}
					}
				}
				if (!BitTest(Local_81.f_0, 5))
				{
					MISC::SET_BIT(&Local_81, 5);
				}
				if (!BitTest(Local_81.f_0, 4))
				{
					if (BitTest(Local_120[iVar0 /*3*/], 1))
					{
						Local_81.f_8 = iVar3;
						MISC::SET_BIT(&Local_81, 4);
						MISC::CLEAR_BIT(&uLocal_219, 15);
						MISC::CLEAR_BIT(&Local_81, 18);
					}
				}
				if (!BitTest(Local_81.f_0, 4))
				{
					if (!BitTest(Local_81.f_0, 18))
					{
						if (BitTest(Local_120[iVar0 /*3*/], 7))
						{
							MISC::SET_BIT(&Local_81, 18);
						}
					}
				}
				if (BitTest(uLocal_219, 9))
				{
					if (BitTest(Local_120[iVar0 /*3*/], 5))
					{
						MISC::CLEAR_BIT(&uLocal_219, 9);
					}
				}
				if (!BitTest(uLocal_219, 14))
				{
					if (BitTest(Local_120[iVar0 /*3*/], 6))
					{
						MISC::SET_BIT(&uLocal_219, 14);
					}
				}
				if (!BitTest(uLocal_219, 20))
				{
					if (BitTest(Local_120[iVar0 /*3*/], 8))
					{
						MISC::SET_BIT(&uLocal_219, 20);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				func_43(iVar1);
			}
			iVar1++;
		}
		iLocal_104++;
		if (iLocal_104 >= Local_120.f_0)
		{
			if (!BitTest(Local_81.f_0, 16))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
				{
					if (func_40(Local_81.f_9[0]))
					{
						if (!BitTest(Local_81.f_0, 4))
						{
							if (BitTest(uLocal_219, 15))
							{
								if (!func_44(&uLocal_224))
								{
									func_45(&uLocal_224, 0, 0);
								}
								else if (func_38(&uLocal_224, 2000, 0))
								{
									MISC::SET_BIT(&Local_81, 16);
								}
							}
						}
					}
				}
			}
			MISC::SET_BIT(&uLocal_219, false);
			if (!BitTest(Local_81.f_0, 0))
			{
				if (iLocal_226 >= 1)
				{
					MISC::SET_BIT(&Local_81, false);
				}
			}
			if (!BitTest(Local_81.f_0, 14))
			{
				if (BitTest(uLocal_219, 14))
				{
					MISC::SET_BIT(&Local_81, 14);
				}
			}
			if (!BitTest(Local_81.f_0, 19))
			{
				if (BitTest(uLocal_219, 20))
				{
					MISC::SET_BIT(&Local_81, 19);
				}
			}
			if (!BitTest(Local_81.f_0, 6))
			{
				if (BitTest(uLocal_219, 5))
				{
					if (Local_81.f_2 > 1 && Local_81.f_2 <= 7)
					{
						MISC::SET_BIT(&Local_81, 6);
					}
					else if (BitTest(Local_81.f_0, 10))
					{
						MISC::SET_BIT(&Local_81, 6);
					}
				}
			}
			if (BitTest(Local_81.f_0, 17))
			{
				MISC::CLEAR_BIT(&Local_81, 17);
				MISC::CLEAR_BIT(&Local_81, 15);
				MISC::CLEAR_BIT(&Local_81, 12);
				func_42(&(Local_81.f_21));
				func_45(&(Local_81.f_21), 0, 0);
			}
			if (!BitTest(Local_81.f_0, 11))
			{
				if (BitTest(Local_81.f_0, 12))
				{
					if (BitTest(uLocal_219, 9))
					{
						MISC::SET_BIT(&Local_81, 11);
					}
				}
			}
		}
	}
}

void func_42(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_43(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!BitTest(Local_81.f_0, 7))
		{
			if (BitTest(Local_120[iParam0 /*3*/], 3))
			{
				MISC::SET_BIT(&Local_81, 7);
			}
		}
	}
}

bool func_44(var uParam0)
{
	return uParam0->f_1;
}

void func_45(var uParam0, bool bParam1, bool bParam2)
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

int func_46(var uParam0)
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

void func_47(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_45(uParam0, 0, 0);
		}
	}
}

int func_48(int iParam0)
{
	if (func_50(iParam0))
	{
		if (!func_49(iParam0, 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_49(int iParam0, int iParam1)
{
	return BitTest(Global_2689224[iParam0 /*451*/].f_215, iParam1);
}

int func_50(int iParam0)
{
	if (Global_2689224[iParam0 /*451*/].f_215 == 0)
	{
		return 0;
	}
	return 1;
}

int func_51(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_52(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853131[iParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_52(int iParam0)
{
	return func_53(iParam0);
}

var func_53(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_11.f_1, 0);
}

void func_54()
{
	func_361();
	func_358();
	if (BitTest(Local_81.f_0, 10))
	{
		if (Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
		{
			Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
		}
	}
	if (BitTest(Local_81.f_0, 4))
	{
		if (Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 <= 6)
		{
			Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
		}
	}
	if (BitTest(Local_81.f_0, 16))
	{
		if (!BitTest(Local_81.f_0, 4))
		{
			if (Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 <= 6)
			{
				Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
				Local_106.f_2 = 1381048616;
				func_356(Local_106, func_357(1));
			}
		}
	}
	if (BitTest(Local_81.f_0, 11))
	{
		if (Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 <= 6)
		{
			Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
			Local_106.f_2 = 1381048616;
			func_356(Local_106, func_357(1));
		}
	}
	if (Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 > 0)
	{
		if (Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
		{
			if ((((func_51(PLAYER::PLAYER_ID(), 1, 0) || func_355()) || func_354() > 0) || func_49(PLAYER::PLAYER_ID(), 1)) || func_353())
			{
				Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
			}
		}
	}
	if (Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 > 0)
	{
		if (Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
		{
			if (func_351(PLAYER::PLAYER_ID()))
			{
				Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
			}
		}
	}
	switch (Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			if (BitTest(Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 0))
			{
				if (BitTest(Local_81.f_0, 3))
				{
					if (!BitTest(Local_81.f_0, 15))
					{
						MISC::SET_BIT(&(Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 2);
						func_350(11, 1);
						Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 3;
					}
					else
					{
						Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
						MISC::SET_BIT(&uLocal_219, 16);
					}
				}
			}
			break;
		
		case 3:
			if (func_349(Local_81.f_5))
			{
				func_348(Local_81.f_5);
				Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 4;
			}
			break;
		
		case 4:
			if (!func_347())
			{
				if (func_223())
				{
					Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 5;
					func_221(88, 1);
					func_220();
				}
				else if (BitTest(uLocal_219, 8))
				{
					Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
				}
			}
			else if (func_210())
			{
				Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 5;
			}
			else
			{
				if (BitTest(uLocal_219, 8))
				{
					Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
				}
				if (BitTest(Local_81.f_0, 15))
				{
					func_197(12, 116);
					Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
					MISC::SET_BIT(&uLocal_219, 16);
				}
			}
			break;
		
		case 5:
			if (Local_81.f_5 == 0)
			{
				func_63();
			}
			break;
		
		case 6:
			Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
			MISC::CLEAR_BIT(&uLocal_219, 3);
			MISC::CLEAR_BIT(&uLocal_219, 4);
			iLocal_218 = 0;
			func_197(12, 116);
			if (HUD::DOES_BLIP_EXIST(Global_1932164))
			{
				HUD::REMOVE_BLIP(&Global_1932164);
			}
			func_62(&Local_231);
			func_55();
			func_350(11, 0);
			Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 7;
			break;
		
		case 7:
			if (Local_81.f_2 == 0 && !BitTest(Local_81.f_0, 10))
			{
				Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 0;
			}
			break;
	}
}

void func_55()
{
	if (!func_61())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574755.f_9)
	{
		return;
	}
	func_56();
}

void func_56()
{
	func_58();
	func_57(0);
}

void func_57(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574755 = 20;
	StringCopy(&(Global_1574755.f_1), "", 32);
	Global_1574755.f_9 = 0;
	if (bVar0)
	{
		Global_1574755.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574755.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574755.f_12), "", 16);
	StringCopy(&(Global_1574755.f_16), "", 64);
	StringCopy(&(Global_1574755.f_32), "", 64);
	Global_1574755.f_52 = 0;
	Global_1574755.f_53 = 0;
	Global_1574755.f_54 = 0;
	Global_1574755.f_55 = -1;
	Global_1574755.f_56 = 0;
	Global_1574755.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_58()
{
	if (!func_60())
	{
	}
	if (func_61())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574755.f_12));
		func_59();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_59()
{
	switch (Global_1574755)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574755.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574755.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574755.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574755.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574755.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_32));
			return;
		
		default:
	}
}

bool func_60()
{
	if (!func_61())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574755.f_12));
	func_59();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_61()
{
	if (Global_1574755 == 20)
	{
		return 0;
	}
	return 1;
}

void func_62(int* iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
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

void func_63()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
	{
		if (!func_40(Local_81.f_9[0]))
		{
			if (HUD::DOES_BLIP_EXIST(Global_1932164))
			{
				if (func_196() || func_195())
				{
					HUD::SET_BLIP_DISPLAY(Global_1932164, 0);
				}
				else
				{
					HUD::SET_BLIP_DISPLAY(Global_1932164, 4);
				}
			}
			else
			{
				Global_1932164 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_81.f_9[0]));
				HUD::SET_BLIP_COLOUR(Global_1932164, 1);
				HUD::SET_BLIP_SCALE(Global_1932164, 0f);
			}
			if (HUD::DOES_BLIP_EXIST(Local_231.f_0))
			{
				if (func_196() || func_195())
				{
					HUD::SET_BLIP_DISPLAY(Local_231.f_0, 0);
				}
				else
				{
					HUD::SET_BLIP_DISPLAY(Local_231.f_0, 4);
				}
				if (!BitTest(uLocal_219, 10))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_231.f_0, "FM_GDM_BLP");
					MISC::SET_BIT(&uLocal_219, 10);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_231.f_1))
			{
				if (func_196() || func_195())
				{
					HUD::SET_BLIP_DISPLAY(Local_231.f_1, 0);
				}
				else
				{
					HUD::SET_BLIP_DISPLAY(Local_231.f_1, 4);
				}
				if (!BitTest(uLocal_219, 12))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_231.f_1, "FM_GDM_BLP");
					MISC::SET_BIT(&uLocal_219, 12);
				}
			}
			if (!BitTest(uLocal_219, 6))
			{
				if (!BitTest(Global_2621446, 7) && !func_191(PLAYER::PLAYER_ID(), 0, -1))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (!func_196())
						{
							func_185("FM_GDM_KIL", 0);
						}
						MISC::SET_BIT(&uLocal_219, 6);
					}
				}
			}
			else if (BitTest(Global_2621446, 7))
			{
				func_55();
				MISC::CLEAR_BIT(&uLocal_219, 6);
			}
			else if (func_184())
			{
				func_55();
				MISC::CLEAR_BIT(&uLocal_219, 6);
			}
			else if (func_191(PLAYER::PLAYER_ID(), 0, -1))
			{
				func_55();
				MISC::CLEAR_BIT(&uLocal_219, 6);
			}
		}
		else if (BitTest(uLocal_219, 6))
		{
			func_55();
			MISC::CLEAR_BIT(&uLocal_219, 6);
		}
		if (!BitTest(Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 1))
		{
			iVar1 = NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_81.f_9[0], &uVar0);
			if (iVar1 == PLAYER::PLAYER_ID())
			{
				MISC::SET_BIT(&(Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), true);
				iVar2 = func_181(func_183(PLAYER::PLAYER_ID(), 1), 1);
				if (iVar2 > 100)
				{
					iVar2 = 100;
				}
				iVar3 = iVar2 * 20;
				iVar3 = SYSTEM::ROUND((Global_262145.f_4228 * IntToFloat(iVar3)));
				func_138(2, "XPT_KAIE", -1859646258, 2131309714, iVar3, 1, -1, 0);
				if (Global_262145.f_2422 != 0f)
				{
					iVar4 = SYSTEM::ROUND(Global_262145.f_2422);
				}
				else
				{
					iVar4 = 2000;
				}
				if (Global_262145.f_2418 != 0f)
				{
					iVar5 = SYSTEM::ROUND(Global_262145.f_2418);
				}
				else
				{
					iVar5 = 8000;
				}
				if (iVar4 >= 100)
				{
					iVar6 = (iVar4 / 100);
				}
				if (iVar5 >= 100)
				{
					iVar7 = (iVar5 / 100);
				}
				iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(iVar6, iVar7 + 1) * 100;
				iVar8 = func_137(iVar8, 1);
				if (iVar8 > iVar5)
				{
					iVar8 = iVar5;
				}
				func_79(&iVar8, 1);
				if (func_78())
				{
					if (iVar8 > 0)
					{
						func_66(-352356931, iVar8, &iVar9, 0, 0, 0);
						Global_4528329[iVar9 /*85*/] = -1146479277;
					}
				}
				else
				{
					MONEY::NETWORK_EARN_FROM_AI_TARGET_KILL(iVar8, -1146479277);
				}
				func_65(5, iVar8);
			}
			else if (iVar1 != func_64())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (!BitTest(Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 7))
					{
						if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
						{
							MISC::SET_BIT(&(Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 7);
						}
					}
				}
			}
		}
	}
}

int func_64()
{
	return -1;
}

void func_65(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23766 == 0 || Global_262145.f_23766 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23766 == 1)
			{
				Global_2810701.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6841)
				{
					iParam1 = Global_262145.f_6841;
				}
				Global_2810701.f_284 = iParam1;
				Global_2810701.f_285 = 0;
			}
		}
	}
}

void func_66(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_78())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28039)
			{
				func_67(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_67(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_28039)
			{
				func_67(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
			func_67(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_67(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_78())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726400)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4528329[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_74(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4528329[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4528329[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4529830 = 1;
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_73(1, iParam4);
			Global_4529830 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_68(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_68(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_69(iParam0);
	}
}

void func_69(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_78())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_72(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_70(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_70(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_71(&(uParam0->f_14));
	func_71(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_71(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_72(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_73(int iParam0, int iParam1)
{
	Global_2727588 = iParam1;
	Global_2727587 = iParam0;
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_78())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4528329[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4528329[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4528329[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4528329[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4528329[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4528329[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4528329[iVar0 /*85*/].f_66 = iParam0;
			Global_4528329[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4528329[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4528329[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4528329[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4528329[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4528329[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4529816 = 0;
			if (bParam6)
			{
				Global_4528329[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_75(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_75(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -1141953949;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_77(Var0.f_1);
	if ((Global_262145.f_23845 && !Global_262145.f_23846) && !Global_262145.f_23847)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_76();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar36);
	}
}

void func_76()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_77(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_78()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_136())
		{
			if (func_135(0))
			{
				if (!func_131(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_130()))
					{
						if (func_129() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_129());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_127(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_84("GB_BCUT_TICK1", func_130(), iVar0, 0, 0, 1);
						}
						func_83(20);
						func_80(func_130(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_80(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_381(bParam0, 0, 1))
	{
		Var0.f_0 = 657959395;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_82(bParam0);
		func_81(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_77(bParam0));
	}
}

void func_81(var uParam0, var uParam1)
{
	*uParam0 = Global_1921039.f_9;
	*uParam1 = Global_1921039.f_10;
}

var func_82(int iParam0)
{
	return Global_1893551[iParam0 /*599*/].f_510;
}

void func_83(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2810701.f_5194.f_7[iVar0]), bVar1);
}

int func_84(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_91(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_89(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_85(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_85(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_88() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_17(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_86(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1941037.f_5[iVar0 /*53*/] = iParam0;
		Global_1941037.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1941037.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1941037.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1941037.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1941037.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1941037.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1941037 - 1))
	{
		if (iParam0 > Global_1941037.f_5[iVar0 /*53*/].f_1)
		{
			func_87(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1941037++;
	if (Global_1941037 > 5)
	{
		Global_1941037 = 5;
		return Global_1941037;
	}
	return (Global_1941037 - 1);
}

void func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1941037.f_5[iVar0 /*53*/] = { Global_1941037.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_88()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_89(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_90(&cVar0);
}

var func_90(char[4] cParam0)
{
	return cParam0;
}

int func_91(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_351(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_81734[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_351(PLAYER::PLAYER_ID()) || (func_126() && func_125())) && !BitTest(Global_2810701.f_4660, 31)) && !bParam4)
	{
		iVar1 = func_124();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_381(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_81734[iParam1] != -1)
							{
								return func_122(iParam1, iParam0, 0);
							}
							else
							{
								return func_104(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_104(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_81734[iParam1] != -1)
				{
					return func_122(iParam1, iParam0, 0);
				}
				else
				{
					return func_92(0, -1, 0);
				}
			}
			else
			{
				return func_92(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_81734[iParam1] != -1)
		{
			return func_122(iParam1, iParam0, 0);
		}
		else
		{
			return func_104(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_104(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_92(bool bParam0, int iParam1, bool bParam2)
{
	return func_93(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_93(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_103() || (func_102() && func_100())) && Global_1655692.f_1)
	{
		if (bParam1)
		{
			return func_99(iParam2, iVar0);
		}
		else
		{
			return func_99(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_98(iVar0, iParam2, 0) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_97(1);
				}
				else
				{
					return func_97(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_94(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_94(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_97(1);
	}
	return func_97(0);
}

int func_94(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_96(iParam0, iParam1, iParam3);
	if (func_95(Global_4718592.f_87009, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_138376 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9278[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_98(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_97(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_98(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 0);
				
				case 1:
					return BitTest(Global_4718592.f_544, 1);
				
				case 2:
					return BitTest(Global_4718592.f_544, 2);
				
				case 3:
					return BitTest(Global_4718592.f_544, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 4);
				
				case 1:
					return BitTest(Global_4718592.f_544, 5);
				
				case 2:
					return BitTest(Global_4718592.f_544, 6);
				
				case 3:
					return BitTest(Global_4718592.f_544, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 8);
				
				case 1:
					return BitTest(Global_4718592.f_544, 9);
				
				case 2:
					return BitTest(Global_4718592.f_544, 10);
				
				case 3:
					return BitTest(Global_4718592.f_544, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 12);
				
				case 1:
					return BitTest(Global_4718592.f_544, 13);
				
				case 2:
					return BitTest(Global_4718592.f_544, 14);
				
				case 3:
					return BitTest(Global_4718592.f_544, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_99(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_96(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_100()
{
	if (func_101())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_142560, 4);
}

bool func_101()
{
	return BitTest(Global_4718592.f_132162, 12);
}

bool func_102()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_142560, 0);
	}
	return ((BitTest(Global_4718592.f_142560, 0) || Global_1923666) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_103()
{
	if (func_101() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853131[PLAYER::PLAYER_ID() /*888*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853131[iVar2 /*888*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_113())
			{
				iVar3 = func_109(iParam0);
				if (!iVar3 == -1)
				{
					return func_107(iVar3);
				}
			}
			if ((func_106(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_98(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_97(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_105(1);
			}
			else
			{
				return func_93(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836580 || Global_1836571) || Global_1853131[iParam0 /*888*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836580 == 1 && Global_1836590 == 0))
			{
				return func_97(1);
			}
			else
			{
				return func_93(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836575 && Global_1836066.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_109(iParam0);
	if (!iVar4 == -1)
	{
		return func_107(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_105(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_106(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_107(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_108(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_108(int iParam0)
{
	return Global_2680263.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_109(int iParam0)
{
	if (!iParam0 == func_64())
	{
		if (func_111(iParam0, 1))
		{
			return Global_2680263.f_818.f_11[func_110(iParam0)];
		}
	}
	return -1;
}

int func_110(int iParam0)
{
	if (iParam0 != func_64())
	{
		return Global_1893551[iParam0 /*599*/].f_10;
	}
	return func_64();
}

bool func_111(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_112(iParam0))
		{
			return 0;
		}
	}
	return Global_1893551[iParam0 /*599*/].f_10 != func_64();
}

int func_112(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_64())
		{
			return Global_1893551[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_113()
{
	if ((((((func_121() || func_120()) || func_23()) || func_119()) || func_118()) || func_116()) || func_114())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_114()
{
	return func_115(Global_4718592.f_87009);
}

int func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31359[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_116()
{
	return func_117(Global_4718592.f_87009);
}

int func_117(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30700[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_118()
{
	return Global_2714635.f_24;
}

var func_119()
{
	return Global_2714635.f_21;
}

var func_120()
{
	return Global_2714635.f_18;
}

var func_121()
{
	return Global_2714635.f_17;
}

int func_122(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058068.f_14[iParam0];
	if (func_113())
	{
		iVar2 = func_109(iParam1);
		if (!iVar2 == -1)
		{
			return func_107(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_595[iParam0 /*17044*/].f_7447[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_64())
	{
		if (Global_4718592.f_81734[iParam0] != -1 && Global_4718592.f_81734[iParam0] <= 4)
		{
			if (Global_4718592.f_81734[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_81734[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_81734[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_81734[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_81734[iParam0];
			}
		}
		else
		{
			iVar0 = func_93(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_123(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_98(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_105(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_123(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_138533;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_138534;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_138535;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_138536;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_124()
{
	return Global_2621446.f_2;
}

var func_125()
{
	return BitTest(Global_2621446, 4);
}

var func_126()
{
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 14);
}

void func_127(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_128(1);
	}
	else
	{
		iVar1 = func_128(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_128(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12655;
}

int func_129()
{
	return Global_262145.f_12654;
}

bool func_130()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10;
}

bool func_131(bool bParam0)
{
	return func_132(PLAYER::PLAYER_ID(), bParam0);
}

int func_132(int iParam0, bool bParam1)
{
	return func_133(iParam0, bParam1, 1);
}

int func_133(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_64())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_134(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893551[iParam0 /*599*/].f_10;
	if (iVar0 != func_64() && Global_1893551[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_134(int iParam0, int iParam1)
{
	if (iParam0 != func_64())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_64())
		{
			if (Global_1893551[iParam0 /*599*/].f_10 == iParam0 && Global_1893551[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_135(bool bParam0)
{
	return func_111(PLAYER::PLAYER_ID(), bParam0);
}

bool func_136()
{
	return func_112(PLAYER::PLAYER_ID());
}

int func_137(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

var func_138(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_139(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_139(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_140(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_140(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_180(PLAYER::PLAYER_ID()) || func_179(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9894 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9894;
		}
	}
	else if (func_177() || func_173(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23051 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_23051;
		}
	}
	else if (Global_262145.f_6892 > 20000)
	{
		iVar2 = 20000;
	}
	else
	{
		iVar2 = Global_262145.f_6892;
	}
	if (func_172(sParam2))
	{
	}
	if (func_171())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_169(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_168(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_166(0, &iVar1);
					break;
				
				case 3:
					func_166(1, &iVar1);
					break;
				
				case 1:
					func_163(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957933)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_160(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_151((func_159(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_2 != -1)
				{
					func_160(1166, iVar1, -1);
				}
				func_145(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_141((func_143(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_141((func_143(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_141(int iParam0)
{
	if (func_171())
	{
		Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_5 = iParam0;
		func_142(joaat("mpply_globalxp"), iParam0);
	}
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_143(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_381(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_144(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853131[iParam0 /*888*/].f_205.f_5;
			}
		}
		else
		{
			return func_144(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_144(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_145(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_150(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_148(func_149(&Var0));
			if (iVar13 == 0)
			{
				func_147(&Global_1655492, iParam0);
				func_146(joaat("mpply_crew_local_xp_0"), Global_1655492);
			}
			else if (iVar13 == 1)
			{
				func_147(&Global_1655493, iParam0);
				func_146(joaat("mpply_crew_local_xp_1"), Global_1655493);
			}
			else if (iVar13 == 2)
			{
				func_147(&Global_1655494, iParam0);
				func_146(joaat("mpply_crew_local_xp_2"), Global_1655494);
			}
			else if (iVar13 == 3)
			{
				func_147(&Global_1655495, iParam0);
				func_146(joaat("mpply_crew_local_xp_3"), Global_1655495);
			}
			else if (iVar13 == 4)
			{
				func_147(&Global_1655496, iParam0);
				func_146(joaat("mpply_crew_local_xp_4"), Global_1655496);
			}
		}
	}
}

void func_146(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1655487 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1655490 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1655491 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1655492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1655493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1655494 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1655495 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1655496 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1655497 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1655498 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1655499 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1655500 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1655501 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1655502 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1655503 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_147(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_148(int iParam0)
{
	if (iParam0 == Global_1655487)
	{
		return 0;
	}
	else if (iParam0 == Global_1655488)
	{
		return 1;
	}
	else if (iParam0 == Global_1655489)
	{
		return 2;
	}
	else if (iParam0 == Global_1655490)
	{
		return 3;
	}
	else if (iParam0 == Global_1655491)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_149(var* uParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2725175;
		}
	}
	return Global_2725175;
}

struct<13> func_150(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_151(int iParam0, int iParam1, int iParam2)
{
	if (func_171())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9862 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1655637[func_158(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1655637[func_158(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9861 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9861 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_157(PLAYER::PLAYER_ID()))
		{
			Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_1 = iParam0;
			Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_6 = func_181(iParam0, 1);
		}
		func_156(640, iParam0, -1, 1);
		func_155(641, func_181(iParam0, 1), -1, 1, 0);
		Global_1655637[func_158(-1)] = iParam0;
		func_152(-1109644434, 7, 0);
	}
}

void func_152(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_154(iParam1, iParam2))
	{
		iVar0 = func_153();
		Global_2725127[iVar0] = iParam1;
		Global_2725138[iVar0] = iParam0;
	}
}

int func_153()
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

int func_154(int iParam0, var uParam1)
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

void func_155(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2822371[iParam0 /*3*/][func_158(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_156(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2822371[iParam0 /*3*/][func_158(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655565[func_158(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655571[func_158(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655577[func_158(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655583[func_158(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655589[func_158(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655535[func_158(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655541[func_158(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655547[func_158(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655553[func_158(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655559[func_158(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655505[func_158(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655511[func_158(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655517[func_158(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655523[func_158(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655529[func_158(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655595[func_158(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655601[func_158(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655607[func_158(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655613[func_158(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655619[func_158(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655625[func_158(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655631[func_158(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655637[func_158(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655643[func_158(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863698[0 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863698[1 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863698[2 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863698[3 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 10874:
			Global_2863859[func_158(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655649[func_158(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655655[func_158(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655661[func_158(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655667[func_158(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655673[func_158(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655679[func_158(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863777[0 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863777[1 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863777[2 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863777[3 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863777[4 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863862[0 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863862[1 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863862[2 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863862[3 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863862[4 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863878[0 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863878[1 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863878[2 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863878[3 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863878[4 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863777[5 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863698[4 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863894[func_158(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863903[func_158(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863897[func_158(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863906[func_158(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863900[func_158(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863909[func_158(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863912[func_158(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863777[6 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863698[5 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863777[7 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863698[6 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863777[8 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863698[7 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863777[9 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863698[8 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863777[10 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863698[9 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863777[11 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863698[10 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863777[12 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863698[11 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863777[13 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863698[12 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863777[14 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863698[13 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863777[15 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863698[14 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863777[16 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863698[15 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863777[17 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863698[16 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863698[17 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863698[18 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863698[19 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863698[20 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863915[func_158(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863918[func_158(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863921[func_158(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863924[func_158(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863927[func_158(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863930[func_158(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863933[func_158(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863936[func_158(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863939[func_158(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863942[func_158(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863945[func_158(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863948[func_158(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863951[func_158(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863954[func_158(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863698[21 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863777[23 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863698[22 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863777[24 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863698[23 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863698[24 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863698[25 /*3*/][func_158(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_157(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703660.f_1, iParam0);
	}
	return 1;
}

int func_158(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_159(int iParam0)
{
	if (Global_1574631.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1655637[func_158(-1)];
			}
			else if (func_157(iParam0))
			{
				return Global_1853131[iParam0 /*888*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1655637[func_158(-1)];
	}
	return 0;
}

void func_160(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_162(iParam0, func_158(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_161(iParam0))
	{
		func_155(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_156(iParam0, iVar0, iParam2, 1);
	}
}

int func_161(int iParam0)
{
	if (Global_1655486)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10874:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
			case 9912:
				return 1;
				break;
			}
	}
	return 0;
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2822371[iParam0 /*3*/][func_158(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_163(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_98(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_165(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_164(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_164(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_164(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_165(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2783316 = { func_150(iParam0) };
		Global_2783329 = { func_150(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783316))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783329))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783246, 35, &Global_2783316);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783281, 35, &Global_2783329);
				if (Global_2783246 == Global_2783281)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_166(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_381(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_165(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_381(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_167(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_165(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_164(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_164(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_167(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_21(iParam0), func_21(iParam1));
	return 0f;
}

int func_168(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_164(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_169(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_159(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_159(PLAYER::PLAYER_ID());
		}
	}
	if (func_170(8000, 0, 0) > 0)
	{
		if (func_170(8000, 0, 0) < (iParam0 + func_159(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_170(8000, 0, 0) - func_159(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_170(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_294354[iParam0];
}

int func_171()
{
	return 1;
}

int func_172(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0)
{
	return func_174(func_175(iParam0));
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_175(int iParam0)
{
	if (func_176(iParam0, 0))
	{
		return Global_1893551[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_176(int iParam0, int iParam1)
{
	if (Global_1893551[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1893551[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_177()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_23();
	}
	return func_178(Global_4718592.f_87009);
}

int func_178(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_179(int iParam0)
{
	return Global_2689224[iParam0 /*451*/].f_119 == 2;
}

bool func_180(int iParam0)
{
	return Global_2689224[iParam0 /*451*/].f_119 == 7;
}

int func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_182(iParam0, 0);
}

int func_182(int iParam0, int iParam1)
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
		if (Global_294354[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_294354[iVar3] < iParam0)
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

int func_183(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_159(iParam0);
}

bool func_184()
{
	return Global_75027;
}

void func_185(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_189(sParam0))
	{
		return;
	}
	func_56();
	Global_1574755 = 0;
	StringCopy(&(Global_1574755.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574755.f_9 = MISC::GET_HASH_KEY(&(Global_1574755.f_1));
	StringCopy(&(Global_1574755.f_12), sParam0, 16);
	func_188();
	func_187(bParam1);
	func_186();
}

void func_186()
{
	MISC::SET_BIT(&(Global_1574755.f_59), true);
}

void func_187(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574755.f_59), false);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574755.f_59), false);
}

void func_188()
{
	Global_1574755.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574755.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_189(char* sParam0)
{
	if (!func_61())
	{
		return 0;
	}
	if (Global_1574755 == 11)
	{
		return func_190(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574755.f_12));
}

bool func_190(char* sParam0)
{
	if (!func_61())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574755.f_16));
}

int func_191(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1853131[iParam0 /*888*/].f_267.f_30 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
	{
		if (iParam2 == -1 || func_194(Global_2689224[iParam0 /*451*/].f_317.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_192(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_192(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_64())
	{
		return iParam0;
	}
	if (func_193(iParam0) != -1)
	{
		iVar0 = func_194(func_193(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_111(iParam0, 0))
			{
				return func_110(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_64();
		}
		return Global_2689224[iParam0 /*451*/].f_317.f_9;
	}
	return func_64();
}

int func_193(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_381(iParam0, 1, 1))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6;
		}
		else if (((Global_1575054 || Global_2667223.f_2680) && iParam0 == PLAYER::PLAYER_ID()) && func_381(iParam0, 1, 0))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6;
		}
	}
	return -1;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

var func_195()
{
	return Global_2678391.f_1865;
}

int func_196()
{
	return 1;
}

void func_197(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_209(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!iParam1 == Global_2656325[iVar0 /*46*/].f_8)
	{
		return;
	}
	if (!Global_2656325[iVar0 /*46*/].f_4 && Global_2656325[iVar0 /*46*/])
	{
		Global_2656325[iVar0 /*46*/].f_4 = 1;
		func_201();
	}
	func_198(iVar0);
}

void func_198(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1655318)
	{
		return;
	}
	if (Global_2656325[iParam0 /*46*/].f_26 != -1)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_2656325[iParam0 /*46*/].f_26);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1655318)
	{
		Global_2656325[iVar0 /*46*/] = { Global_2656325[iVar1 /*46*/] };
		Global_2656325[iVar0 /*46*/] = { Global_2656325[iVar1 /*46*/] };
		iVar0++;
		iVar1++;
	}
	func_200(iVar0);
	Global_1655318 = (Global_1655318 - 1);
	if (Global_1655289)
	{
		if (Global_1655287 > 0)
		{
			func_199();
		}
	}
}

void func_199()
{
	Global_1655289 = 0;
}

void func_200(int iParam0)
{
	Global_2656325[iParam0 /*46*/] = 0;
	Global_2656325[iParam0 /*46*/].f_2 = 0;
	Global_2656325[iParam0 /*46*/].f_3 = 0;
	Global_2656325[iParam0 /*46*/].f_4 = 0;
	Global_2656325[iParam0 /*46*/].f_5 = func_64();
	Global_2656325[iParam0 /*46*/].f_6 = 145;
	Global_2656325[iParam0 /*46*/].f_7 = 1;
	Global_2656325[iParam0 /*46*/].f_8 = -1;
	Global_2656325[iParam0 /*46*/].f_9 = -1;
	StringCopy(&(Global_2656325[iParam0 /*46*/].f_10), "", 64);
	Global_2656325[iParam0 /*46*/].f_26 = -1;
	StringCopy(&(Global_2656325[iParam0 /*46*/].f_27), "", 32);
	Global_2656325[iParam0 /*46*/].f_35 = -1;
	Global_2656325[iParam0 /*46*/].f_36 = -1;
	Global_2656325[iParam0 /*46*/].f_37 = 0;
	Global_2656325[iParam0 /*46*/].f_39 = 0;
	Global_2656325[iParam0 /*46*/].f_40 = -1;
	Global_2656325[iParam0 /*46*/].f_41 = 0;
	Global_2656325[iParam0 /*46*/].f_42 = 0;
	Global_2656325[iParam0 /*46*/].f_43 = 0;
	Global_2656325[iParam0 /*46*/].f_45 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2656325[iParam0 /*46*/].f_38 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_201()
{
	Global_22348 = (Global_22348 - 1);
	if (Global_22348 < 0)
	{
		func_208("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_202();
}

void func_202()
{
	if (!Global_20145)
	{
		if (Global_19954.f_1 == 6)
		{
			func_207(Global_19935, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_203(1);
			func_207(Global_19935, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19934), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_203(int iParam0)
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
	
	Global_22353 = 0;
	Global_8429 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8393[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_206(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7831[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7831[iVar1 /*15*/].f_4)
					{
						if (Global_8393[iVar0] == 0)
						{
							Global_8357[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_7825, 3))
								{
									iVar2 = 42;
									Global_20148 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20148 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_205(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2725228)
							{
								if (iVar1 == 14)
								{
									func_204(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8393[iVar0] = 1;
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
				if (iParam0 == Global_7831[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7831[iVar1 /*15*/].f_4)
					{
						if (Global_8393[iVar0] == 0)
						{
							Global_8357[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_112922.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_112922.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_112922.f_14141[iVar3 /*104*/].f_99[Global_19954] == 1)
											{
												Global_22353++;
											}
										}
									}
									iVar3++;
								}
								func_204(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22353), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_77858)
								{
									iVar4 = 0;
									iVar4 = Global_4534061;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4534062[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4534062[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4534062[iVar5 /*104*/].f_99[Global_19954] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_204(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19954)
									{
										case 0:
											iVar6 = Global_43791;
											break;
										
										case 1:
											iVar6 = Global_43792;
											break;
										
										case 2:
											iVar6 = Global_43793;
											break;
										
										default:
											break;
									}
									func_204(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_204(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_205(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7830);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_7825, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_205(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_7825, 3))
								{
									iVar8 = 42;
									Global_20148 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20148 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_205(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_205(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_7831[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_7825, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19935, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7831[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_205(&(Global_7831[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7831[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1889925.f_1;
								func_204(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_204(Global_19935, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7831[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8393[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_204(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_205(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_205(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_205(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_205(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_205(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_205(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_206(int iParam0)
{
	return Global_42602 == iParam0;
}

void func_207(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_208(char* sParam0)
{
	if (Global_22348 != 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
		}
		Global_22348 = 0;
	}
}

int func_209(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1655318)
	{
		if (!Global_2656325[iVar0 /*46*/].f_7)
		{
			if (Global_2656325[iVar0 /*46*/].f_6 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_210()
{
	if (!BitTest(uLocal_219, 17))
	{
		func_212(12, 116, "", 1, 0, 1, 0);
		MISC::SET_BIT(&uLocal_219, 17);
	}
	else if (!BitTest(uLocal_219, 18))
	{
		if (func_211(12, 116))
		{
			MISC::SET_BIT(&uLocal_219, 18);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_209(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2656325[iVar0 /*46*/].f_8)
	{
		return 0;
	}
	if (!Global_2656325[iVar0 /*46*/].f_2)
	{
		return 0;
	}
	func_198(iVar0);
	Global_2657490 = MISC::GET_GAME_TIMER() + 1500;
	return 1;
}

void func_212(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_209(iParam0);
	if (bParam5)
	{
		if (iVar0 != -1)
		{
			func_198(iVar0);
		}
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_213(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1, iParam4, iParam6);
}

void func_213(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)
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
	
	iVar0 = func_64();
	iVar1 = 145;
	if (bParam2)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_219())
		{
			return;
		}
	}
	iVar2 = Global_1655318;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2656325[iVar2 /*46*/] = { Global_2656325[iVar3 /*46*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1655318++;
	if (Global_1655318 > 12)
	{
		Global_1655318 = 12;
	}
	iVar4 = 0;
	if (Global_2656325[1 /*46*/].f_1)
	{
		Global_2656325[0 /*46*/] = { Global_2656325[1 /*46*/] };
		Global_2656325[1 /*46*/] = { Var5 };
		iVar4 = 1;
	}
	if (iVar4 == 0)
	{
		Global_2656325[iVar4 /*46*/].f_1 = uParam10;
	}
	else
	{
		Global_2656325[iVar4 /*46*/].f_1 = 0;
	}
	Global_2656325[iVar4 /*46*/] = 0;
	Global_2656325[iVar4 /*46*/].f_2 = 0;
	Global_2656325[iVar4 /*46*/].f_3 = 0;
	Global_2656325[iVar4 /*46*/].f_4 = 0;
	Global_2656325[iVar4 /*46*/].f_5 = iVar0;
	Global_2656325[iVar4 /*46*/].f_6 = iVar1;
	Global_2656325[iVar4 /*46*/].f_7 = bParam2;
	Global_2656325[iVar4 /*46*/].f_8 = iParam0;
	Global_2656325[iVar4 /*46*/].f_9 = -1;
	StringCopy(&(Global_2656325[iVar4 /*46*/].f_10), sParam3, 64);
	Global_2656325[iVar4 /*46*/].f_26 = -1;
	StringCopy(&(Global_2656325[iVar4 /*46*/].f_27), sParam4, 32);
	Global_2656325[iVar4 /*46*/].f_35 = iParam6;
	Global_2656325[iVar4 /*46*/].f_36 = iParam7;
	Global_2656325[iVar4 /*46*/].f_37 = 0;
	Global_2656325[iVar4 /*46*/].f_38 = NETWORK::GET_NETWORK_TIME();
	Global_2656325[iVar4 /*46*/].f_39 = uParam5;
	Global_2656325[iVar4 /*46*/].f_40 = Global_2657489;
	Global_2656325[iVar4 /*46*/].f_44 = iParam8;
	Global_2656325[iVar4 /*46*/].f_45 = uParam9;
	if (iParam0 == 123 || iParam0 == 234)
	{
		Global_2656325[iVar4 /*46*/].f_9 = func_216();
	}
	else if (iParam0 == 272)
	{
		Global_2656325[iVar4 /*46*/].f_9 = iParam6;
	}
	else if (iParam0 == 212)
	{
		Global_2656325[iVar4 /*46*/].f_9 = iParam6;
	}
	Global_2657489++;
	func_215();
	Global_2656325[iVar4 /*46*/].f_41 = 0;
	Global_2656325[iVar4 /*46*/].f_42 = 0;
	Global_2656325[iVar4 /*46*/].f_43 = 0;
	if (func_214())
	{
		if (bParam2)
		{
			bVar51 = true;
			if (bVar51)
			{
				Var52 = { func_150(iVar0) };
				iVar65 = NETWORK::_0x36391F397731595D(&Var52);
				if (iVar65 != -1)
				{
					Global_2656325[iVar4 /*46*/].f_41 = iVar65;
					Global_2656325[iVar4 /*46*/].f_42 = 1;
					Global_2656325[iVar4 /*46*/].f_43 = 0;
				}
			}
		}
	}
}

bool func_214()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

void func_215()
{
	Global_1655291 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 30000);
}

int func_216()
{
	char cVar0[24];
	int iVar6;
	int iVar7;
	var uVar8;
	bool bVar9;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_218() };
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
				StringCopy(&cVar0, func_217(53, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_217(54, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_217(55, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_217(56, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_217(57, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_217(58, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_217(59, -1), 24);
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
	uVar8 = func_162(10391, -1, 0);
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

char* func_217(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = Global_2862274[iParam0 /*3*/][func_158(iParam1)];
	return STATS::STAT_GET_STRING(iVar0, -1);
}

struct<6> func_218()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1938246.f_10)))
	{
		iVar7 = func_162(10392, -1, 0);
		if (iVar7 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar6 = MISC::_0xECF041186C5A94DC(iVar7);
			if (iVar6 != -1)
			{
				Var0 = { Global_794709.f_203837[Global_794709.f_177589[iVar6 /*13*/].f_10 /*6*/] };
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
			}
		}
		Global_1938246.f_10 = { Var0 };
		return Var0;
	}
	return Global_1938246.f_10;
}

bool func_219()
{
	return Global_1575013 == 10;
}

void func_220()
{
	int iVar0;
	
	iVar0 = Global_1655625[func_158(-1)];
	MISC::SET_BIT(&iVar0, 8);
	func_156(1304, iVar0, -1, 1);
}

void func_221(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2359296[func_222() /*5559*/].f_675.f_19 = iVar0;
			break;
		
		case 19:
			Global_2359296[func_222() /*5559*/].f_675.f_18 = iVar0;
			break;
		
		case 74:
			Global_2359296[func_222() /*5559*/].f_675.f_12 = iVar0;
			break;
		
		case 29:
			Global_2359296[func_222() /*5559*/].f_675.f_14 = iVar0;
			break;
		
		case 8:
			Global_2359296[func_222() /*5559*/].f_675.f_15 = iVar0;
			break;
		
		case 31:
			Global_2359296[func_222() /*5559*/].f_675.f_16 = iVar0;
			break;
		
		case 3:
			Global_2359296[func_222() /*5559*/].f_675.f_20 = iVar0;
			break;
		
		case 6:
			Global_2359296[func_222() /*5559*/].f_675.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_222() /*5559*/].f_675.f_23 = iVar0;
			break;
		
		case 76:
			Global_2359296[func_222() /*5559*/].f_675.f_24 = iVar0;
			break;
		
		case 93:
			Global_2359296[func_222() /*5559*/].f_675.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_222() /*5559*/].f_675.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2359296[func_222() /*5559*/].f_675.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2359296[func_222() /*5559*/].f_675.f_29 = iVar0;
			break;
		
		case 88:
			Global_2359296[func_222() /*5559*/].f_675.f_28 = iVar0;
			break;
		
		case 100:
			Global_2359296[func_222() /*5559*/].f_675.f_31 = iVar0;
			break;
		
		case 106:
			Global_2359296[func_222() /*5559*/].f_675.f_32 = iVar0;
			break;
		
		case 99:
			Global_2359296[func_222() /*5559*/].f_675.f_30 = iVar0;
			break;
	}
}

int func_222()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_223()
{
	if (!BitTest(uLocal_219, 4))
	{
		if (!BitTest(uLocal_219, 8) || (BitTest(uLocal_219, 8) && func_38(&uLocal_222, 600000, 0)))
		{
			if (func_229(Local_81.f_5))
			{
				MISC::SET_BIT(&uLocal_219, 4);
				MISC::CLEAR_BIT(&uLocal_219, 8);
			}
		}
	}
	else if (!func_228())
	{
		if (!BitTest(uLocal_219, 19))
		{
			if (func_227())
			{
				MISC::SET_BIT(&uLocal_219, 19);
			}
			else if (!func_226() && !func_224())
			{
				MISC::SET_BIT(&uLocal_219, 8);
				MISC::CLEAR_BIT(&uLocal_219, 4);
				func_45(&uLocal_222, 0, 0);
				iLocal_218 = 0;
			}
		}
		else if (!func_224())
		{
			if (func_226())
			{
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		MISC::SET_BIT(&uLocal_219, 8);
		MISC::CLEAR_BIT(&uLocal_219, 4);
		func_45(&uLocal_222, 0, 0);
		iLocal_218 = 0;
	}
	return 0;
}

bool func_224()
{
	return func_225();
}

bool func_225()
{
	return Global_1637335.f_40 == 3;
}

bool func_226()
{
	return Global_1637335.f_57.f_1;
}

int func_227()
{
	if (Global_21285 == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_228()
{
	if (Global_22301)
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)
{
	int iVar0;
	
	switch (iLocal_218)
	{
		case 0:
			if (func_340(0, 1, 1, 1))
			{
				if (!func_339(12, -1))
				{
					func_331(iParam0);
					iLocal_218++;
				}
			}
			break;
		
		case 1:
			iVar0 = func_330(iParam0);
			func_329(iParam0);
			if (func_230(&uLocal_239, iVar0, "FM_1AU", sLocal_404, 0, 0))
			{
				MISC::CLEAR_BIT(&uLocal_219, 11);
				iLocal_218++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_230(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_327())
	{
		return 0;
	}
	if (func_326())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_231(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_231(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
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
	iVar1 = func_325(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_324(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_319(uParam6))
	{
		return 0;
	}
	if (func_316(iVar0, iVar1, iVar2))
	{
		if (func_315())
		{
			return 0;
		}
		func_314();
		return func_238(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_237(iParam4))
	{
		return 0;
	}
	func_232(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_232(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1637335.f_40.f_1 = iParam0;
	Global_1637335.f_40.f_2 = iParam1;
	Global_1637335.f_40.f_3 = iParam2;
	StringCopy(&(Global_1637335.f_40.f_4), sParam3, 16);
	Global_1637335.f_40.f_8 = iParam4;
	Global_1637335.f_40.f_9 = iParam5;
	Global_1637335.f_40.f_14 = uParam6;
	func_233(iParam4);
	func_314();
	Global_1637335.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_233(int iParam0)
{
	if (func_236(iParam0))
	{
		func_235();
		return;
	}
	func_234();
}

void func_234()
{
	Global_1637335.f_40.f_10 = 0;
}

void func_235()
{
	Global_1637335.f_40.f_10 = 1;
}

int func_236(int iParam0)
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

bool func_237(int iParam0)
{
	return iParam0 > Global_1637335.f_40.f_8;
}

int func_238(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_313();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_310(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_307(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_310(uParam0, sParam3, sParam4);
		}
		return func_290(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_289(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_277(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_276(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_239(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_239(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_275();
	bVar0 = true;
	if (func_241(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_240(120000);
		return 1;
	}
	return 0;
}

void func_240(int iParam0)
{
	Global_1637335.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1637335.f_40.f_12 = 1;
}

int func_241(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_64();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_269(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1637335.f_40.f_13))
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
	sVar4 = func_268(sParam5, bParam6, &iVar3);
	uVar5 = func_266(iParam7, &iVar3);
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
		bVar12 = func_265(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_245(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_244();
	}
	func_275();
	func_243();
	func_242();
	return 1;
}

void func_242()
{
	Global_1637335.f_57 = 0;
	Global_1637335.f_57.f_1 = 0;
}

void func_243()
{
	Global_1637335.f_40 = 3;
}

void func_244()
{
	MISC::SET_BIT(&Global_7824, 8);
}

int func_245(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_246(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8531 = iParam6;
			MISC::SET_BIT(&Global_4535327, false);
		}
		return 1;
	}
	return 0;
}

int func_246(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_258();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19954 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19954 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19954 == 1)
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
		if (Global_4535312 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_257() == 0)
	{
		func_255();
		return 0;
	}
	func_254(Global_4535311);
	StringCopy(&(Global_4534062[Global_4535311 /*104*/]), sParam1, 64);
	Global_4534062[Global_4535311 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4534062[Global_4535311 /*104*/].f_24 = iParam2;
	}
	Global_4534062[Global_4535311 /*104*/].f_25 = iParam7;
	Global_4534062[Global_4535311 /*104*/].f_26 = uParam8;
	Global_4534062[Global_4535311 /*104*/].f_29 = uParam9;
	Global_4534062[Global_4535311 /*104*/].f_30 = uParam12;
	Global_4534062[Global_4535311 /*104*/].f_31 = uParam11;
	Global_4534062[Global_4535311 /*104*/].f_28 = 0;
	Global_4534062[Global_4535311 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4534062[Global_4535311 /*104*/].f_33), sParam4, 64);
	Global_4534062[Global_4535311 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4534062[Global_4535311 /*104*/].f_50), sParam5, 64);
	Global_4534062[Global_4535311 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4534062[Global_4535311 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4534062[Global_4535311 /*104*/].f_83), sParam15, 64);
	func_258();
	switch (iParam16)
	{
		case 3:
			Global_4534062[Global_4535311 /*104*/].f_99[Global_19954] = 1;
			break;
		
		case 0:
			Global_4534062[Global_4535311 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4534062[Global_4535311 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4534062[Global_4535311 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19954)
		{
			case 0:
				func_253(0);
				break;
			
			case 1:
				func_253(1);
				break;
			
			case 2:
				func_253(2);
				break;
			
			case 3:
				func_253(3);
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
				Global_4535312 = 1;
				break;
			
			case 0:
				Global_4535312 = 1;
				break;
			
			case 2:
				Global_4535312 = 1;
				break;
			
			case 1:
				Global_4535312 = 1;
				break;
			}
	}
	Global_22354[Global_4535311] = 0;
	if (bParam10)
	{
		func_258();
		if (Global_19897)
		{
			StringCopy(&Global_19943, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19954)
			{
				case 0:
					StringCopy(&Global_19943, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19943, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19943, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19943, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_252())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19943, true);
			}
		}
	}
	if (!Global_20145)
	{
		if (Global_19954.f_1 == 6)
		{
			func_207(Global_19935, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_203(1);
			func_207(Global_19935, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19934), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973361 != -1 && iParam0 == Global_1973361)
	{
		bVar1 = true;
	}
	func_247(iParam0, sParam1, bVar1, func_251(PLAYER::PLAYER_ID()));
	return 1;
}

void func_247(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (!func_248())
	{
		return;
	}
	STATS::_PLAYSTATS_NPC_PHONE(iParam0, -1180597171, MISC::GET_HASH_KEY(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973361 = -1;
	}
}

int func_248()
{
	if (!Global_262145.f_28542)
	{
		return 0;
	}
	if (!Global_77858)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_64())
	{
		return 0;
	}
	if (func_249(PLAYER::PLAYER_ID()))
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

bool func_249(int iParam0)
{
	return func_250(iParam0, 20);
}

var func_250(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_251(int iParam0)
{
	return Global_1853131[iParam0 /*888*/].f_205.f_6;
}

bool func_252()
{
	return Global_1575054;
}

void func_253(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_112922.f_14051[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_254(int iParam0)
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
	Global_4534062[iParam0 /*104*/].f_18 = iVar0;
	Global_4534062[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4534062[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4534062[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4534062[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4534062[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_255()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4535311 = 11;
	Global_4534062[Global_4535311 /*104*/].f_18 = -1;
	Global_4534062[Global_4535311 /*104*/].f_18.f_1 = 0;
	Global_4534062[Global_4535311 /*104*/].f_18.f_2 = 0;
	Global_4534062[Global_4535311 /*104*/].f_18.f_3 = 0;
	Global_4534062[Global_4535311 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_256(Global_4534062[iVar2 /*104*/].f_18, Global_4534062[Global_4535311 /*104*/].f_18))
		{
			Global_4535311 = iVar2;
		}
		iVar2++;
	}
	Global_4534062[Global_4535311 /*104*/].f_24 = 1;
}

int func_256(struct<6> Param0, struct<6> Param6)
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

int func_257()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4534062[iVar2 /*104*/].f_24 == 0)
		{
			Global_4535311 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4535311 = 11;
	Global_4534062[Global_4535311 /*104*/].f_18 = -1;
	Global_4534062[Global_4535311 /*104*/].f_18.f_1 = 0;
	Global_4534062[Global_4535311 /*104*/].f_18.f_2 = 0;
	Global_4534062[Global_4535311 /*104*/].f_18.f_3 = 0;
	Global_4534062[Global_4535311 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4534062[iVar2 /*104*/].f_24 == 0 || Global_4534062[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_256(Global_4534062[iVar2 /*104*/].f_18, Global_4534062[Global_4535311 /*104*/].f_18))
			{
				Global_4535311 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4535311 == 11)
	{
		return 0;
	}
	Global_4534062[Global_4535311 /*104*/].f_99[0] = 0;
	Global_4534062[Global_4535311 /*104*/].f_99[1] = 0;
	Global_4534062[Global_4535311 /*104*/].f_99[2] = 0;
	return 1;
}

void func_258()
{
	if (func_206(14))
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
		Global_19954 = func_259();
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

var func_259()
{
	func_260();
	return Global_112922.f_2363.f_539.f_4321;
}

void func_260()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_263(Global_112922.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_262(PLAYER::PLAYER_PED_ID());
			if (func_261(iVar0) && (!func_206(14) || Global_111873))
			{
				if (Global_112922.f_2363.f_539.f_4321 != iVar0 && func_261(Global_112922.f_2363.f_539.f_4321))
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

bool func_261(int iParam0)
{
	return iParam0 < 3;
}

int func_262(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_263(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_263(int iParam0)
{
	if (func_261(iParam0))
	{
		return func_264(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_264(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

int func_265(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_246(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8531 = iParam10;
			MISC::SET_BIT(&Global_4535327, false);
		}
		return 1;
	}
	return 0;
}

int func_266(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_267(2, iParam1);
	return iParam0;
}

void func_267(int iParam0, var uParam1)
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

char* func_268(char* sParam0, bool bParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_267(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}

int func_269(int iParam0)
{
	int iVar0;
	
	iVar0 = func_272(iParam0);
	if (iVar0 == -1)
	{
		func_270(iParam0, 1);
		return 0;
	}
	Global_1656661[iVar0 /*5*/].f_4 = 1;
	return Global_1656661[iVar0 /*5*/].f_2;
}

void func_270(int iParam0, bool bParam1)
{
	if (!func_381(iParam0, 0, 1))
	{
		return;
	}
	if (func_272(iParam0) != -1)
	{
		return;
	}
	if (Global_1656824)
	{
		if (iParam0 == Global_1656824.f_1)
		{
			return;
		}
	}
	if (func_271(iParam0))
	{
		return;
	}
	if (Global_1656862 >= 32)
	{
		return;
	}
	Global_1656829[Global_1656862] = iParam0;
	Global_1656862++;
	if (bParam1)
	{
	}
}

int func_271(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656862)
	{
		if (Global_1656829[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_272(int iParam0)
{
	int iVar0;
	
	if (!func_381(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1656822 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656822)
	{
		if (Global_1656661[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1656661[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1656661[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_273(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_273(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1656822)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1656661[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1656661[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1656661[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1656661[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1656822)
	{
		Global_1656661[iVar32 /*5*/] = { Global_1656661[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_274(&(Global_1656661[iVar32 /*5*/]));
	Global_1656822 = (Global_1656822 - 1);
}

void func_274(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_64();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_275()
{
	Global_1637335.f_40.f_9 = 4;
}

int func_276(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_275();
	bVar0 = false;
	return func_241(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_277(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_278(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_278(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_64();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_269(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1637335.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22346 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_268(sParam5, bParam6, &iVar3);
	uVar5 = func_266(iParam7, &iVar3);
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
		bVar12 = func_288(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_280(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_244();
	}
	func_279();
	func_243();
	func_242();
	return 1;
}

void func_279()
{
	Global_1637335.f_40.f_9 = 3;
}

int func_280(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_7824, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_282(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8531 = iParam6;
			Global_8434[3 /*6*/] = { func_281(iParam0) };
			Global_8511 = iParam0;
			MISC::SET_BIT(&Global_7824, true);
			MISC::SET_BIT(&Global_7824, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_281(int iParam0)
{
	return Global_1918[iParam0 /*29*/].f_3;
}

int func_282(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_258();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19954 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19954 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19954 == 1)
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
		if (Global_112922.f_14051[Global_19954 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_287() == 0)
	{
		func_285();
		return 0;
	}
	func_284(Global_22352);
	StringCopy(&(Global_112922.f_14141[Global_22352 /*104*/]), sParam1, 64);
	Global_112922.f_14141[Global_22352 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_112922.f_14141[Global_22352 /*104*/].f_24 = iParam2;
	}
	Global_112922.f_14141[Global_22352 /*104*/].f_25 = iParam7;
	Global_112922.f_14141[Global_22352 /*104*/].f_26 = uParam8;
	Global_112922.f_14141[Global_22352 /*104*/].f_29 = uParam9;
	Global_112922.f_14141[Global_22352 /*104*/].f_30 = uParam12;
	Global_112922.f_14141[Global_22352 /*104*/].f_31 = uParam11;
	Global_112922.f_14141[Global_22352 /*104*/].f_28 = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_112922.f_14141[Global_22352 /*104*/].f_33), sParam4, 64);
	Global_112922.f_14141[Global_22352 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_112922.f_14141[Global_22352 /*104*/].f_50), sParam5, 64);
	Global_112922.f_14141[Global_22352 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_112922.f_14141[Global_22352 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_112922.f_14141[Global_22352 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_7824, 10))
	{
		Global_112922.f_14141[Global_22352 /*104*/].f_99[0] = 1;
		Global_112922.f_14141[Global_22352 /*104*/].f_99[1] = 1;
		Global_112922.f_14141[Global_22352 /*104*/].f_99[2] = 1;
		Global_8530 = 4;
		func_253(0);
		func_253(2);
		func_253(1);
	}
	else
	{
		func_258();
		switch (iParam16)
		{
			case 3:
				Global_112922.f_14141[Global_22352 /*104*/].f_99[Global_19954] = 1;
				break;
			
			case 0:
				Global_112922.f_14141[Global_22352 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_112922.f_14141[Global_22352 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_112922.f_14141[Global_22352 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19954)
			{
				case 0:
					func_253(0);
					Global_8530 = 0;
					break;
				
				case 1:
					func_253(1);
					Global_8530 = 1;
					break;
				
				case 2:
					func_253(2);
					Global_8530 = 2;
					break;
				
				case 3:
					func_253(3);
					Global_8530 = 3;
					break;
				
				default:
					Global_8530 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_7824, 10))
		{
			Global_112922.f_14051[0 /*20*/].f_17 = 1;
			Global_112922.f_14051[1 /*20*/].f_17 = 1;
			Global_112922.f_14051[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_112922.f_14051[Global_19954 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_112922.f_14051[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_112922.f_14051[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_112922.f_14051[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22354[Global_22352] = 0;
	if (bParam10)
	{
		func_258();
		if (Global_19897)
		{
			StringCopy(&Global_19943, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19954)
			{
				case 0:
					StringCopy(&Global_19943, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19943, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19943, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19943, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_252())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19943, true);
			}
		}
	}
	if (!Global_20145)
	{
		if (Global_19954.f_1 == 6)
		{
			func_207(Global_19935, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_203(1);
			func_207(Global_19935, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19934), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973361 != -1 && iParam0 == Global_1973361)
	{
		bVar1 = true;
	}
	func_283(iParam0, sParam1, bVar1, func_251(PLAYER::PLAYER_ID()));
	return 1;
}

void func_283(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (!func_248())
	{
		return;
	}
	STATS::_PLAYSTATS_NPC_PHONE(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973361 = -1;
	}
}

void func_284(int iParam0)
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
	Global_112922.f_14141[iParam0 /*104*/].f_18 = iVar0;
	Global_112922.f_14141[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_112922.f_14141[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_112922.f_14141[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_112922.f_14141[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_112922.f_14141[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_285()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77858)
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
	Global_22352 = 34;
	Global_112922.f_14141[Global_22352 /*104*/].f_18 = -1;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_1 = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_2 = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_3 = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_286(Global_112922.f_14141[iVar2 /*104*/].f_18, Global_112922.f_14141[Global_22352 /*104*/].f_18))
		{
			Global_22352 = iVar2;
		}
		iVar2++;
	}
	Global_112922.f_14141[Global_22352 /*104*/].f_24 = 1;
}

int func_286(struct<6> Param0, struct<6> Param6)
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

int func_287()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77858)
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
		if (Global_112922.f_14141[iVar2 /*104*/].f_24 == 0)
		{
			Global_22352 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22352 = 34;
	Global_112922.f_14141[Global_22352 /*104*/].f_18 = -1;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_1 = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_2 = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_3 = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_112922.f_14141[iVar2 /*104*/].f_24 == 0 || Global_112922.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_286(Global_112922.f_14141[iVar2 /*104*/].f_18, Global_112922.f_14141[Global_22352 /*104*/].f_18))
			{
				Global_22352 = iVar2;
			}
		}
		if (Global_112922.f_14141[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22352 == 34)
	{
		return 0;
	}
	Global_112922.f_14141[Global_22352 /*104*/].f_99[0] = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_99[1] = 0;
	Global_112922.f_14141[Global_22352 /*104*/].f_99[2] = 0;
	return 1;
}

int func_288(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	MISC::CLEAR_BIT(&Global_7824, 10);
	iVar0 = 3;
	if (func_282(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8531 = iParam10;
			Global_8434[3 /*6*/] = { func_281(iParam0) };
			Global_8511 = iParam0;
			StringCopy(&Global_8512, sParam5, 64);
			MISC::SET_BIT(&Global_7824, true);
			MISC::SET_BIT(&Global_7824, 7);
		}
		return 1;
	}
	return 0;
}

int func_289(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_279();
	bVar0 = true;
	if (func_278(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_240(120000);
		return 1;
	}
	return 0;
}

int func_290(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
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
		bVar0 = func_306(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_296(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_295(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_294(1);
		}
		func_293();
		func_243();
		func_292();
		func_291();
		return 1;
	}
	return 0;
}

void func_291()
{
	Global_2820506 = 0;
}

void func_292()
{
	Global_1637335.f_57 = 1;
	Global_1637335.f_57.f_1 = 0;
}

void func_293()
{
	Global_1637335.f_40.f_9 = 1;
}

void func_294(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7826, false);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7826, false);
	}
}

void func_295(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7824, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7824, 20);
	}
}

int func_296(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_305(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21333 = 0;
	Global_21292 = 1;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_21290 = 0;
	Global_21337 = 0;
	Global_21339 = 0;
	Global_2883585 = 0;
	return func_297(sParam3, iParam4, bParam7);
}

int func_297(char* sParam0, int iParam1, bool bParam2)
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
					func_304();
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
		if (func_339(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_303();
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
				func_258();
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
				if (func_302())
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
			if (func_301())
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
			func_300();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_299();
		func_298();
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
		func_304();
	}
	return 0;
}

void func_298()
{
	if (!func_248())
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

void func_299()
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

void func_300()
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

int func_301()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_302()
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

void func_303()
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

void func_304()
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

void func_305(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_306(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_305(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21333 = 1;
	Global_21292 = 1;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_21290 = 0;
	Global_21337 = 0;
	Global_21339 = 0;
	Global_2883585 = 0;
	return func_297(sParam3, iParam4, bParam7);
}

int func_307(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_309(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_308();
		func_293();
		func_243();
		func_292();
		func_291();
		return 1;
	}
	return 0;
}

void func_308()
{
	Global_22303 = 0;
}

bool func_309(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_305(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21333 = 0;
	Global_21292 = 1;
	Global_21299 = 0;
	Global_21294 = 1;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_21290 = 0;
	Global_21337 = 1;
	Global_21339 = 0;
	StringCopy(&Global_21433, sParam5, 24);
	Global_2883585 = 0;
	return func_297(sParam3, iParam4, bParam8);
}

int func_310(var uParam0, char* sParam1, char* sParam2)
{
	if (func_312(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_311();
		func_243();
		func_292();
		return 1;
	}
	return 0;
}

void func_311()
{
	Global_1637335.f_40.f_9 = 2;
}

bool func_312(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_305(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_297(sParam2, iParam3, 0);
}

void func_313()
{
	Global_1637335.f_55 = Global_1637335.f_40.f_1;
	Global_1637335.f_55.f_1 = Global_1637335.f_40.f_10;
}

void func_314()
{
	Global_1637335.f_40 = 1;
}

bool func_315()
{
	return Global_1637335.f_40 == 1;
}

int func_316(int iParam0, int iParam1, int iParam2)
{
	if (!func_317(iParam0))
	{
		return 0;
	}
	if (Global_1637335.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1637335.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_317(int iParam0)
{
	if (!func_318())
	{
		return 0;
	}
	if (!Global_1637335.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_318()
{
	if (Global_1637335.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_319(var uParam0)
{
	if (func_323())
	{
		return 0;
	}
	if (func_225())
	{
		return 0;
	}
	if (func_322(0))
	{
		return 0;
	}
	if (Global_1574631.f_18 != 0)
	{
		return 0;
	}
	if (Global_1932195 || func_321())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_320())
		{
			return 0;
		}
	}
	return 1;
}

bool func_320()
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1655291);
}

int func_321()
{
	if (Global_4516656.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_322(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (BitTest(Global_7824, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_323()
{
	return func_301();
}

int func_324(int iParam0, int iParam1, int iParam2)
{
	if (!func_225())
	{
		return 0;
	}
	return func_316(iParam0, iParam1, iParam2);
}

int func_325(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_326()
{
	return Global_2817527.f_1;
}

int func_327()
{
	if (Global_1637523.f_2)
	{
		return 1;
	}
	return func_328();
}

bool func_328()
{
	return func_323();
}

void func_329(int iParam0)
{
	if (!BitTest(uLocal_219, 11))
	{
		switch (iParam0)
		{
			case 0:
				sLocal_404 = "FMA_KIL1";
				MISC::SET_BIT(&uLocal_219, 11);
				break;
			}
	}
}

int func_330(int iParam0)
{
	int iVar0;
	
	iVar0 = 144;
	switch (iParam0)
	{
		case 0:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

void func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_333(12, 3, 0);
			func_332(&uLocal_239, 1, 0, "Lester", 0, 1);
			break;
	}
}

void func_332(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_333(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8510 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 160)
	{
		func_258();
		if (iParam1 == 4)
		{
			func_338(iParam0, 0, 1);
			func_338(iParam0, 1, 1);
			func_338(iParam0, 2, 1);
			func_337(iParam0, 0, 1);
			func_337(iParam0, 1, 1);
			func_337(iParam0, 2, 1);
		}
		else
		{
			if (func_336(iParam0, iParam1) == 1 && func_335(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_338(iParam0, iVar0, 1);
			func_337(iParam0, iVar0, 1);
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
						Global_8483[iParam1 /*4*/] = { func_281(iParam0) };
						Global_8500[iParam1] = 1;
						Global_8505[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19954)
					{
					}
					else
					{
						Global_8434[1 /*6*/] = { func_281(iParam0) };
						Global_8434[1 /*6*/].f_5 = iParam1;
						func_334();
					}
				}
				else
				{
					Global_8434[1 /*6*/] = { func_281(iParam0) };
					Global_8434[1 /*6*/].f_5 = iParam1;
					func_334();
				}
			}
			else
			{
				Global_8434[1 /*6*/] = { func_281(iParam0) };
				Global_8434[1 /*6*/].f_5 = iParam1;
				func_334();
			}
		}
	}
}

void func_334()
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

int func_335(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_24[iParam1];
}

int func_336(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_12[iParam1];
}

void func_337(int iParam0, int iParam1, int iParam2)
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

void func_338(int iParam0, int iParam1, int iParam2)
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

bool func_339(int iParam0, int iParam1)
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

int func_340(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_346())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_345())
	{
		return 0;
	}
	if (func_355())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_51(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_50(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_344())
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
	if (Global_1836352)
	{
		return 0;
	}
	if (func_343())
	{
		return 0;
	}
	if (func_342())
	{
		return 0;
	}
	if (func_353())
	{
		return 0;
	}
	if (Global_75027)
	{
		return 0;
	}
	if (Global_2820990)
	{
		return 0;
	}
	if (func_341())
	{
		return 0;
	}
	return 1;
}

bool func_341()
{
	return Global_2784005;
}

bool func_342()
{
	return Global_2714635.f_691;
}

bool func_343()
{
	return Global_2714635.f_845;
}

bool func_344()
{
	return Global_2703660.f_2724.f_582;
}

bool func_345()
{
	return MISC::GET_GAME_TIMER() <= Global_22830.f_6141 + 100;
}

int func_346()
{
	if (Global_21285 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_347()
{
	var uVar0;
	
	uVar0 = Global_1655625[func_158(-1)];
	if (BitTest(uVar0, 8))
	{
		return 1;
	}
	return 0;
}

void func_348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_12[0]))
			{
				Global_2703660.f_3447.f_1[0] = NETWORK::NET_TO_VEH(Local_81.f_12[0]);
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
			{
				Global_2703660.f_3447.f_4[0] = NETWORK::NET_TO_PED(Local_81.f_9[0]);
			}
			break;
	}
}

int func_349(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_12[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_350(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_215, bParam0))
		{
			MISC::SET_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_215), bParam0);
		}
	}
	else if (BitTest(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_215, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_215), bParam0);
	}
}

int func_351(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_352())
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

bool func_352()
{
	return BitTest(Global_2621446, 3);
}

bool func_353()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_192 != 0;
}

int func_354()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_193;
}

bool func_355()
{
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 0);
}

void func_356(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 677240627;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Param0, 14, iParam14);
	}
}

int func_357(int iParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_381(bVar2, 0, 0))
			{
				if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_358()
{
	if (Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 >= 5 && Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
	{
		if (BitTest(Local_81.f_0, 4))
		{
			if (!BitTest(uLocal_219, 3))
			{
				if (func_381(Local_81.f_8, 0, 1))
				{
					func_359("FM_TGDM_KIL", Local_81.f_8, 0, 0, 0, 1, 0);
				}
				MISC::SET_BIT(&uLocal_219, 3);
			}
		}
	}
}

int func_359(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar18;
	bool bVar19;
	
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4718592.f_81734[iVar1] != -1)
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_122(iVar1, iParam1, 0));
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_91(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_91(iParam1, -2, 1, 0, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_89(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2783316 = { func_150(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783246, 35, &Global_2783316))
			{
				bVar18 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2783246.f_22), "Leader") && Global_2783246.f_30 == 0)
				{
					bVar18 = true;
				}
				if (Global_2783246.f_21 > 0)
				{
					bVar19 = false;
				}
				else
				{
					bVar19 = true;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_360(&Var2) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2783246, 35), &(Global_2783246.f_17), Global_2783246.f_30, bVar18, false, Global_2783246, &Var2, Global_1576211, Global_1576212, Global_1576213);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2783246, 35), &(Global_2783246.f_17), Global_2783246.f_30, bVar18, false, Global_2783246, Global_1576211, Global_1576212, Global_1576213);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_85(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_360(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_361()
{
	int iVar0;
	
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (iLocal_229 != Local_81.f_15)
	{
		iLocal_229 = Local_81.f_15;
		NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_229);
	}
	if (iLocal_230 != Local_81.f_16)
	{
		iLocal_230 = Local_81.f_16;
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(iLocal_230);
	}
	if (func_381(PLAYER::PLAYER_ID(), 0, 1))
	{
		if (!BitTest(Local_120[iVar0 /*3*/], 0))
		{
			if (Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 0)
			{
				if (func_354() == 0)
				{
					MISC::SET_BIT(&(Local_120[iVar0 /*3*/]), false);
				}
			}
		}
		else if (BitTest(Local_120[iVar0 /*3*/], 0))
		{
			if ((func_51(PLAYER::PLAYER_ID(), 1, 0) || func_48(PLAYER::PLAYER_ID())) || func_354() > 0)
			{
				func_42(&uLocal_220);
				MISC::CLEAR_BIT(&(Local_120[iVar0 /*3*/]), false);
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!BitTest(uLocal_219, 7))
					{
						MISC::SET_BIT(&uLocal_219, 7);
						func_369();
					}
				}
				else if (BitTest(uLocal_219, 7))
				{
					MISC::CLEAR_BIT(&uLocal_219, 7);
					if (!func_49(PLAYER::PLAYER_ID(), 0))
					{
						func_367();
					}
				}
			}
		}
		if (!BitTest(Local_120[iVar0 /*3*/], 3))
		{
			if (Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 > 3 && Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
			{
				if (BitTest(Global_2703660.f_3447, 1))
				{
					MISC::SET_BIT(&(Local_120[iVar0 /*3*/]), 3);
				}
			}
		}
		if (Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 > 3)
		{
			if (!BitTest(Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 5))
			{
				if (func_366(Local_81.f_5))
				{
					MISC::SET_BIT(&(Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 5);
				}
			}
			else if (!func_366(Local_81.f_5))
			{
				MISC::CLEAR_BIT(&(Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 5);
			}
			if (!BitTest(Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 6))
			{
				if (func_363(Local_81.f_5))
				{
					MISC::SET_BIT(&(Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 6);
				}
			}
			if (!BitTest(Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 8))
			{
				if (func_362())
				{
					MISC::SET_BIT(&(Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 8);
				}
			}
		}
		if (!BitTest(uLocal_219, 13))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
			{
				if (!func_40(Local_81.f_9[0]))
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_81.f_9[0]), true, 0f);
					MISC::SET_BIT(&uLocal_219, 13);
				}
			}
		}
	}
}

int func_362()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_12[0]))
	{
		if (func_9(Local_81.f_12[0]))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_81.f_12[0]), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_81.f_12[0]), 1, 40000))
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

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
			{
				if (!func_40(Local_81.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (func_364(NETWORK::NET_TO_PED(Local_81.f_9[0])))
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_364(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (func_365())
	{
		if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_365()
{
	return Global_1836574;
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
			{
				if (!func_40(Local_81.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_81.f_9[0]), true)) < 40000f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_367()
{
	if (!Global_1574745)
	{
		return;
	}
	func_368();
}

void func_368()
{
	Global_1574745 = 0;
	StringCopy(&(Global_1574745.f_1), "", 32);
	Global_1574745.f_9 = 0;
}

void func_369()
{
	Global_1574745 = 1;
	StringCopy(&(Global_1574745.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574745.f_9 = MISC::GET_HASH_KEY(&(Global_1574745.f_1));
}

void func_370()
{
	switch (Local_81.f_6)
	{
		case 1:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_12[0]))
				{
					if (func_9(Local_81.f_12[0]))
					{
						if (!func_40(Local_81.f_9[0]))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_81.f_9[0]), NETWORK::NET_TO_VEH(Local_81.f_12[0])))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_9[0]), joaat("script_task_vehicle_drive_wander")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_9[0]), joaat("script_task_vehicle_drive_wander")) != 0)
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_81.f_9[0]), NETWORK::NET_TO_VEH(Local_81.f_12[0]), 20f, 786603);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_12[0]))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
					{
						if (func_9(Local_81.f_12[0]))
						{
							if (!func_40(Local_81.f_9[0]))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_81.f_9[0]), NETWORK::NET_TO_VEH(Local_81.f_12[0])))
								{
									if ((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_9[0]), joaat("script_task_vehicle_drive_wander")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_9[0]), joaat("script_task_vehicle_drive_wander")) != 0) || BitTest(Local_81.f_0, 9))
									{
										TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_81.f_9[0]), NETWORK::NET_TO_VEH(Local_81.f_12[0]), 30f, 786469);
										if (BitTest(Local_81.f_0, 9))
										{
											MISC::CLEAR_BIT(&Local_81, 9);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
			{
				if (!func_40(Local_81.f_9[0]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_9[0]), joaat("script_task_leave_any_vehicle")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_9[0]), joaat("script_task_leave_any_vehicle")) != 0)
					{
						if (func_374(Local_81.f_9[0]))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_9[0]))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_81.f_9[0]), 0, 0);
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
			{
				if (!func_40(Local_81.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_9[0]), joaat("script_task_smart_flee_ped")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_9[0]), joaat("script_task_smart_flee_ped")) != 0)
						{
							if (func_374(Local_81.f_9[0]))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_9[0]))
								{
									TASK::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(Local_81.f_9[0]), PLAYER::PLAYER_PED_ID(), 500f, -1, false, true);
								}
							}
						}
					}
				}
			}
			break;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_9[0]))
	{
		if ((Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 >= 5 && Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6) && !func_191(PLAYER::PLAYER_ID(), 0, -1))
		{
			func_371(Local_81.f_9[0], &Local_231, -1082130432, 0, 1, 0, 0, -1, -1, 1, 0);
		}
		else
		{
			func_62(&Local_231);
		}
	}
}

void func_371(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_373())
		{
			Global_2703660 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_372(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2703660, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10);
		}
		else
		{
			func_372(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2703660, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_62(iParam1);
	}
}

int func_372(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11)
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
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && uParam11)
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
					HUD::_SET_PED_HAS_AI_BLIP_WITH_COLOR(iParam0, true, iParam8);
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
			HUD::_SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!iParam9 == -1)
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
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
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

bool func_373()
{
	return Global_1575030;
}

int func_374(int iParam0)
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
	{
		return 1;
	}
	if (func_375(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_376(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_376(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_377()
{
	return Local_81.f_1;
}

int func_378(int iParam0)
{
	return Local_120[iParam0 /*3*/].f_1;
}

void func_379()
{
	func_55();
	func_350(11, 0);
	func_197(12, 116);
	MISC::CLEAR_BIT(&(Global_2703660.f_3447), false);
	MISC::CLEAR_BIT(&(Global_2703660.f_3447), true);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() > -1)
		{
			Local_120[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_81.f_3))
			{
				NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_81.f_3);
			}
			Local_81.f_3 = -1;
		}
	}
	if (HUD::DOES_BLIP_EXIST(Global_1932164))
	{
		HUD::REMOVE_BLIP(&Global_1932164);
	}
	MISC::CLEAR_BIT(&uLocal_219, 3);
	MISC::CLEAR_BIT(&uLocal_219, 4);
	iLocal_218 = 0;
	if (HUD::DOES_BLIP_EXIST(Local_231.f_0))
	{
		HUD::REMOVE_BLIP(&Local_231);
	}
	func_380();
}

void func_380()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_381(int iParam0, bool bParam1, bool bParam2)
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
				if (iVar0 == Global_2703660.f_3)
				{
					return Global_2703660.f_2;
				}
				else if (Global_2689224[iVar0 /*451*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_382()
{
	if (Global_1575030 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_389())
	{
		return 1;
	}
	if (Global_2727490)
	{
		return 1;
	}
	if (func_388())
	{
		return 1;
	}
	if (func_387(159))
	{
		if (!func_386())
		{
			return 1;
		}
	}
	if (func_387(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_383() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_383()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_383()
{
	switch (func_385())
	{
		case 0:
			return func_384();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_384()
{
	switch (Global_2727594)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_385()
{
	return Global_31511;
}

bool func_386()
{
	return Global_2714635.f_698;
}

int func_387(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_388()
{
	return Global_2725233;
}

bool func_389()
{
	return Global_2714635.f_693;
}

void func_390()
{
	SYSTEM::WAIT(0);
}

void func_391(struct<21> Param0)
{
	func_394(func_395(Param0.f_0), Param0);
	func_393(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_81, 23, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_120, 97, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_392())
	{
		func_379();
	}
	MISC::SET_BIT(&(Global_2703660.f_3447), false);
	MISC::CLEAR_BIT(&(Global_2703660.f_3447), true);
}

int func_392()
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
		if (func_389())
		{
			return 0;
		}
		if (func_387(157))
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

int func_393(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_380();
			}
			else
			{
				return 0;
			}
		}
		if (!func_373())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_380();
					}
					else
					{
						return 0;
					}
				}
				if (func_389())
				{
					if (!bParam2)
					{
						func_380();
					}
					else
					{
						return 0;
					}
				}
				if (func_387(157))
				{
					if (!bParam2)
					{
						func_380();
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
					func_380();
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
		Global_1574665 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_380();
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
			func_380();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_394(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_380();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_395(int iParam0)
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
		
		case joaat("mpsv_lp0_31"):
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
		
		case 146:
			return 32;
		
		case 147:
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
		
		case 158:
			return 32;
		
		case 159:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 153:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 154:
			return 32;
		
		case 155:
			return 32;
		
		case 160:
			return 32;
		
		case 161:
			return 32;
		
		case 162:
			return 32;
		
		case 163:
			return 32;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
			return 4;
		
		case 167:
			return 2;
		
		case 168:
			return 2;
		
		case 150:
			return 1;
		
		case 170:
			return 2;
		
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
			return 0;
		
		case 192:
			return 1;
		
		case 177:
			return 4;
		
		case 180:
			return 4;
		
		case 181:
			return 1;
		
		case 182:
			return 1;
		
		case 188:
			return 1;
		
		case 184:
			return 2;
		
		case 189:
			return 1;
		
		case 185:
			return 1;
		
		case 183:
			return 2;
		
		case 186:
			return 8;
		
		case 187:
			return 8;
		
		case 190:
			return 1;
		
		case 191:
			return 2;
		
		case 142:
			return 8;
		
		case 178:
			return 16;
		
		case 179:
			return 32;
		
		default:
	}
	switch (func_396(func_397(iParam0, 1)))
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

int func_396(int iParam0)
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
		
		case 268:
			return 2;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

int func_397(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 164:
			return 15;
		
		case 171:
			return 8;
		
		case 165:
			return 14;
		
		case 169:
			return 122;
		
		case 172:
			return 1;
		
		case 170:
			return 5;
		
		case 173:
			return 6;
		
		case 166:
			return 11;
		
		case 174:
			return 0;
		
		case 175:
			return 2;
		
		case 167:
			return 13;
		
		case 176:
			return 3;
		
		case 168:
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
		
		case joaat("mpsv_lp0_31"):
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
		
		default:
	}
	if (bParam1)
	{
	}
	return 286;
}

