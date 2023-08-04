#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	struct<3> Local_16 = { 0, 0, 0 } ;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	struct<13> Local_30 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[3] = { 0, 0, 0 };
	struct<2> Local_53 = { 0, 0 } ;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<2> Local_66 = { 0, 0 } ;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70[415] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	bool bLocal_496 = 0;
	int iLocal_497 = 0;
	var uLocal_498 = 3;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 3;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.67.05";
	iLocal_20 = -1;
	iLocal_21 = -1;
	iLocal_24 = 10000;
	iLocal_490 = 1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	Global_1578010 = MISC::GET_HASH_KEY(sLocal_0);
	func_229();
	while (true)
	{
		if (func_228())
		{
			func_226();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692776.f_3)
		{
			func_225();
			func_224();
			func_221();
			func_219();
			func_218();
			func_215();
			func_213();
			func_205();
			func_197();
			func_195();
			func_185();
			func_177();
			func_176();
			func_171();
			func_158();
			func_154();
			func_120();
			func_115();
			func_113();
			func_104();
			func_101();
			func_95();
			func_94();
			func_93();
			func_84();
			func_83();
			func_72();
			func_71();
			func_60();
			func_47();
			func_39();
			func_33();
			func_21();
			func_18();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_17();
			func_16();
			func_5();
			func_4();
			func_2();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (Global_4718592.f_117591 == 1327987538)
	{
		if (!BitTest(Global_4718592.f_35, 2))
		{
			MISC::SET_BIT(&(Global_4718592.f_35), 2);
		}
	}
}

void func_2()
{
	if (func_3(Global_4718592.f_117591) == 10)
	{
		if (Global_262145.f_33950)
		{
			Global_262145.f_33950 = 0;
		}
	}
}

int func_3(int iParam0)
{
	if (iParam0 == Global_262145.f_31922[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_31922[1])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_31922[2])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_31922[3])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_31922[4])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_31922[5])
	{
		return 12;
	}
	return -1;
}

void func_4()
{
	if (Global_4718592.f_117591 != Global_262145.f_33923[2])
	{
		return;
	}
	if (Global_4718592.f_1816[0 /*24279*/].f_17130[4] == 0)
	{
		return;
	}
	if (BitTest(Global_2684820.f_3883, 0) && BitTest(Global_1574942, 4))
	{
		Global_4718592.f_1816[0 /*24279*/].f_17130[4] = 0;
	}
}

void func_5()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((Global_262145.f_33952[10] != Global_4718592.f_117591 || Global_1574964) || !Global_1574965)
	{
		func_15();
		return;
	}
	MISC::CLEAR_BIT(&(Global_4718592.f_161355[1 /*566*/].f_18), 7);
	MISC::CLEAR_BIT(&(Global_4718592.f_161355[1 /*566*/].f_18), 29);
	Global_4980736.f_110349[42 /*1098*/].f_944[0] = 3;
	Global_4980736.f_110349[58 /*1098*/].f_944[0] = 3;
	if (Global_1058071.f_14[0] > 7 || Global_1058071.f_14[0] < 6)
	{
		func_14(&iLocal_49);
		return;
	}
	iVar0 = func_12(&iLocal_49);
	iVar1 = 600;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			iVar1 = 900;
		}
	}
	func_11(iVar0);
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar2 = CUTSCENE::GET_CUTSCENE_END_TIME();
		iVar3 = CUTSCENE::GET_CUTSCENE_TIME();
		if (iVar3 >= (iVar2 - 300) && !func_10(&Local_53))
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			func_9(&Local_53, 0, 0);
		}
	}
	else if (func_10(&Local_53) && func_8(Local_53, iVar1, 0))
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		func_7(&Local_53);
		iLocal_48 = 1;
		func_6(iVar0);
	}
}

void func_6(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
	VEHICLE::SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(iParam0, false);
	VEHICLE::SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(iParam0, false);
	VEHICLE::SET_VEHICLE_HANDBRAKE(iParam0, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 30f);
}

void func_7(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_8(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_9(var uParam0, bool bParam1, bool bParam2)
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

bool func_10(var uParam0)
{
	return uParam0->f_1;
}

void func_11(int iParam0)
{
	if (iLocal_48)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	ENTITY::SET_ENTITY_VELOCITY(iParam0, 0f, 0f, 0f);
}

int func_12(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1058071.f_268 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0]))
		{
		}
		else if (ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]) != joaat("cargoplane2"))
		{
		}
		else if (func_13(iParam0, Global_1058071.f_233[iVar0]))
		{
		}
		else
		{
			return Global_1058071.f_233[iVar0];
		}
		iVar0++;
	}
	return 0;
}

int func_13(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (iParam1 == (*uParam0)[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1058071.f_268 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0]))
		{
		}
		else if (ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]) != joaat("cargoplane2"))
		{
		}
		else if (func_13(iParam0, Global_1058071.f_233[iVar0]))
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1]))
				{
				}
				else
				{
					(*iParam0)[iVar1] = Global_1058071.f_233[iVar0];
				}
				else
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
}

void func_15()
{
	int iVar0;
	
	func_7(&Local_53);
	iLocal_48 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_49[iVar0] = 0;
		iVar0++;
	}
}

void func_16()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) >= 1)
	{
		return;
	}
	if (Global_2635560.f_2978)
	{
	}
	Global_2635560.f_2978 = 0;
}

void func_17()
{
	if ((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) != 0 && Global_262145.f_33952[8] != Global_4718592.f_117591) && !(Global_1574964 || Global_1574965))
	{
		MISC::SET_BIT(&Global_1574994, 29);
	}
}

void func_18()
{
	if ((!Global_1971297 && func_19(PLAYER::PLAYER_ID())) && !Global_1971295)
	{
		Global_1971295 = 1;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_VEHICLE_SPAWN")) < 1)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(iLocal_497))
		{
			SCRIPT::TERMINATE_THREAD(iLocal_497);
		}
		iLocal_494 = 0;
		iLocal_495 = 0;
		bLocal_496 = false;
		return;
	}
	if (Global_1971295 && !bLocal_496)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(iLocal_497))
		{
			SCRIPT::TERMINATE_THREAD(iLocal_497);
		}
		if (iLocal_494)
		{
			iLocal_494 = 0;
			iLocal_495 = 0;
			bLocal_496 = false;
		}
		else
		{
			return;
		}
	}
	if (iLocal_494 && iLocal_495)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_VEHICLE_REWARD")) >= 0 && SCRIPT::IS_THREAD_ACTIVE(iLocal_497))
		{
			Global_1971295 = 0;
			iLocal_495 = 0;
			bLocal_496 = false;
		}
	}
	if (iLocal_494)
	{
		return;
	}
	if (!Global_1971295 && !bLocal_496)
	{
		bLocal_496 = true;
		iLocal_495 = 0;
		Global_1971295 = 1;
	}
	if (bLocal_496)
	{
		SCRIPT::REQUEST_SCRIPT("AM_MP_VEHICLE_REWARD");
		if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_VEHICLE_REWARD"))
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_VEHICLE_REWARD")) < 1 && !SCRIPT::IS_THREAD_ACTIVE(iLocal_497))
			{
				if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_VEHICLE_REWARD", -1, true, 0))
				{
					iLocal_497 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("AM_MP_VEHICLE_REWARD"), 2050);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_VEHICLE_REWARD");
					iLocal_494 = 1;
					iLocal_495 = 1;
				}
				else if (!Global_1971295)
				{
					Global_1971295 = 1;
				}
			}
			else if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_497))
			{
				if (!Global_1971295)
				{
					Global_1971295 = 1;
				}
			}
		}
	}
}

var func_19(int iParam0)
{
	return func_20(&(Global_2657704[iParam0 /*463*/].f_442), 0);
}

var func_20(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_21()
{
	if (func_28(PLAYER::PLAYER_ID()))
	{
		if (SCRIPT::DOES_SCRIPT_EXIST("appMPJobListNEW") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpjoblistnew")) > 0)
		{
			func_22(0);
		}
	}
}

void func_22(int iParam0)
{
	if (func_27())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_26())
		{
			func_24(1, 1);
		}
		else
		{
			func_24(0, 0);
		}
	}
	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8371, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21845 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 30);
	}
	if (!func_23())
	{
		Global_20500.f_1 = 3;
	}
}

int func_23()
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_25(0))
		{
			Global_20704 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20437);
			}
			Global_20428 = { Global_20446[Global_20445 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
	else if (Global_20704 == 1)
	{
		Global_20704 = 0;
		Global_20428 = { Global_20453[Global_20445 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20437);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
}

int func_25(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20500.f_1 > 3)
		{
			if (BitTest(Global_8370, 14))
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
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_26()
{
	return BitTest(Global_1963795, 5);
}

bool func_27()
{
	return BitTest(Global_1963795, 19);
}

int func_28(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_29(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_31(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_30(Global_2657704[iParam0 /*463*/].f_321.f_7) == 22;
			}
		}
	}
	return 0;
}

int func_30(int iParam0)
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
		case 79:
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
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
	}
	return -1;
}

int func_31(int iParam0, bool bParam1, bool bParam2)
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
				if (iVar0 == Global_2672524.f_3)
				{
					return Global_2672524.f_2;
				}
				else if (Global_2657704[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_32()
{
	return -1;
}

void func_33()
{
	if (func_38(PLAYER::PLAYER_ID()))
	{
		if (func_37() && !func_36())
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) == 863149140)
			{
				func_35(&uLocal_491, 1, 0);
			}
		}
	}
	if (func_10(&uLocal_491))
	{
		if (!Global_4593995)
		{
			Global_4593995 = 1;
		}
		else if (func_34(&uLocal_491, 5000, 1))
		{
			func_7(&uLocal_491);
			Global_4593995 = 0;
		}
	}
	if (Global_1836768.f_78)
	{
		if (!iLocal_493)
		{
			if (!BitTest(Global_1950844.f_2, 27))
			{
				MISC::SET_BIT(&(Global_1950844.f_2), 27);
				iLocal_493 = 1;
			}
		}
	}
	else if (iLocal_493)
	{
		MISC::CLEAR_BIT(&(Global_1950844.f_2), 27);
		iLocal_493 = 0;
	}
}

int func_34(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_9(uParam0, bParam2, 0);
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

void func_35(var uParam0, bool bParam1, bool bParam2)
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

int func_36()
{
	if (Global_2672524.f_947.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_37()
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

int func_38(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_31(iParam0, 1, 1))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7 != -1;
		}
		else if ((Global_1575063 && iParam0 == PLAYER::PLAYER_ID()) && func_31(iParam0, 1, 0))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

void func_39()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (func_46(PLAYER::PLAYER_ID()) == 276 && func_44(PLAYER::PLAYER_ID()) == 3)
	{
		if (func_43(PLAYER::PLAYER_ID()))
		{
			if (CAM::IS_SCREEN_FADING_OUT())
			{
				bVar3 = true;
				bVar1 = true;
			}
		}
		else
		{
			bVar0 = true;
			if (func_42(PLAYER::PLAYER_ID()))
			{
				bVar2 = true;
			}
		}
	}
	if (bVar3)
	{
		func_41(1);
	}
	if (bVar0)
	{
		if (!iLocal_487)
		{
			func_40(1);
			iLocal_487 = 1;
		}
	}
	else if (iLocal_487)
	{
		func_40(0);
		iLocal_487 = 0;
	}
	if (bVar1)
	{
		if (!iLocal_489)
		{
			Global_1950843 = 1;
			iLocal_489 = 1;
		}
	}
	else if (iLocal_489)
	{
		if (Global_1950843)
		{
			Global_1950843 = 0;
		}
		iLocal_489 = 0;
	}
	if (bVar2)
	{
		if (Global_2625764 == 145)
		{
			if (!iLocal_488)
			{
				Global_2625764 = 79;
				iLocal_488 = 1;
			}
		}
	}
	else if (iLocal_488)
	{
		if (Global_2625764 == 79)
		{
			Global_2625764 = 145;
		}
		iLocal_488 = 0;
	}
}

void func_40(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_100885.f_1414[39]), 2);
		MISC::SET_BIT(&(Global_100885.f_1414[40]), 2);
		MISC::SET_BIT(&(Global_100885.f_1414[41]), 2);
		MISC::SET_BIT(&(Global_100885.f_1414[42]), 2);
		MISC::SET_BIT(&(Global_100885.f_1414[43]), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_100885.f_1414[39]), 2);
		MISC::CLEAR_BIT(&(Global_100885.f_1414[40]), 2);
		MISC::CLEAR_BIT(&(Global_100885.f_1414[41]), 2);
		MISC::CLEAR_BIT(&(Global_100885.f_1414[42]), 2);
		MISC::CLEAR_BIT(&(Global_100885.f_1414[43]), 2);
	}
}

void func_41(int iParam0)
{
	if (func_27())
	{
		return;
	}
	if (!Global_20500.f_1 == 1)
	{
		if (func_25(0))
		{
			func_22(iParam0);
		}
		MISC::SET_BIT(&Global_8371, 2);
	}
}

bool func_42(int iParam0)
{
	return Global_2657704[iParam0 /*463*/].f_272;
}

int func_43(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_31(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_30(Global_2657704[iParam0 /*463*/].f_321.f_7) == 23;
			}
		}
	}
	return 0;
}

int func_44(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

int func_45(int iParam0, int iParam1)
{
	if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_33;
	}
	return -1;
}

void func_47()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (func_59(91))
	{
		func_35(&uLocal_68, 1, 0);
		bVar1 = true;
	}
	if (!iLocal_486)
	{
		if (func_10(&uLocal_68))
		{
			if (!func_34(&uLocal_68, 60000, 1))
			{
				bVar1 = true;
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_contact_requests")) > 0)
				{
					iLocal_486 = 1;
					iVar0 = 0;
					while (iVar0 < 415)
					{
						iLocal_70[iVar0] = 0;
						if (STREAMING::IS_MODEL_A_VEHICLE(Global_1586488[iVar0 /*142*/].f_66))
						{
							if (!func_57(Global_1586488[iVar0 /*142*/].f_66))
							{
								iLocal_70[iVar0] = Global_1586488[iVar0 /*142*/].f_66;
								Global_1586488[iVar0 /*142*/].f_66 = 0;
							}
						}
						iVar0++;
					}
				}
			}
			else
			{
				func_7(&uLocal_68);
			}
		}
	}
	else
	{
		bVar1 = true;
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_contact_requests")) <= 0)
		{
			func_7(&uLocal_68);
			iVar0 = 0;
			while (iVar0 < 415)
			{
				if (iLocal_70[iVar0] != 0)
				{
					Global_1586488[iVar0 /*142*/].f_66 = iLocal_70[iVar0];
				}
				iLocal_70[iVar0] = 0;
				iVar0++;
			}
			iLocal_486 = 0;
			func_7(&uLocal_68);
		}
	}
	if (!bVar1)
	{
		iVar2 = func_54(5396, -1);
		if (iVar2 == joaat("hauler2") || iVar2 == joaat("phantom3"))
		{
			if (Global_1586488[158 /*142*/].f_66 == 0)
			{
				Global_1586488[158 /*142*/].f_66 = iVar2;
				func_48(158, 158, -1);
			}
		}
	}
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_50(iParam0, iParam1, iParam2);
	if (iParam0 >= 415)
	{
		return;
	}
	if (iParam2 == func_49() || iParam2 == -1)
	{
		Global_1945123[iParam0] = iParam1;
	}
}

int func_49()
{
	return Global_1574918;
}

void func_50(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_52(func_53(iParam0), iParam1, iParam2);
		func_52(func_51(iParam0), 0, iParam2);
	}
	else
	{
		func_52(func_53(iParam0), 255, iParam2);
		func_52(func_51(iParam0), (iParam1 - 255), iParam2);
	}
}

int func_51(int iParam0)
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28069 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30200 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31548 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34096 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36594 + iParam0) - 337);
	}
	else if (iParam0 < 415)
	{
		return ((41160 + iParam0) - 363);
	}
	return (24625 + iParam0);
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_49();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_53(int iParam0)
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31538 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34076 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36568 + iParam0) - 337);
	}
	else if (iParam0 < 415)
	{
		return ((41108 + iParam0) - 363);
	}
	return (4036 + iParam0);
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_55(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_55(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_56(uParam1));
}

int func_56(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
		if (iVar1 > -1)
		{
			Global_2805862 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2805862 = 1;
		}
	}
	return iVar0;
}

int func_57(int iParam0)
{
	if (func_58(iParam0))
	{
		return 1;
	}
	if ((((((((((((((((((((iParam0 == joaat("blazer5") || iParam0 == joaat("boxville5")) || iParam0 == joaat("dune5")) || iParam0 == joaat("phantom2")) || iParam0 == joaat("ruiner2")) || iParam0 == joaat("technical2")) || iParam0 == joaat("voltic2")) || iParam0 == joaat("wastelander")) || iParam0 == joaat("trailersmall2")) || iParam0 == joaat("technical3")) || iParam0 == joaat("insurgent3")) || iParam0 == joaat("khanjali")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("riot2")) || iParam0 == joaat("thruster")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("deluxo")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2")) || iParam0 == joaat("oppressor2"))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("airbus"):
		case joaat("airtug"):
		case joaat("ambulance"):
		case joaat("annihilator"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("asea2"):
		case joaat("baletrailer"):
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("benson"):
		case joaat("besra"):
		case joaat("biff"):
		case joaat("blimp"):
		case joaat("blimp2"):
		case joaat("boattrailer"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("bulldozer"):
		case joaat("burrito"):
		case joaat("burrito3"):
		case joaat("burrito4"):
		case joaat("burrito5"):
		case joaat("bus"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("camper"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("cargobob3"):
		case joaat("cargoplane"):
		case joaat("coach"):
		case joaat("crusader"):
		case joaat("cuban800"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dinghy"):
		case joaat("dinghy2"):
		case joaat("dinghy3"):
		case joaat("docktrailer"):
		case joaat("docktug"):
		case joaat("dodo"):
		case joaat("dump"):
		case joaat("dune2"):
		case joaat("duster"):
		case joaat("emperor3"):
		case joaat("fbi"):
		case joaat("fbi2"):
		case joaat("firetruk"):
		case joaat("fixter"):
		case joaat("flatbed"):
		case joaat("forklift"):
		case joaat("freight"):
		case joaat("freightcar"):
		case joaat("freightcont1"):
		case joaat("freightcont2"):
		case joaat("freightgrain"):
		case joaat("frogger"):
		case joaat("frogger2"):
		case joaat("gburrito"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("hauler"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("jet"):
		case joaat("jetmax"):
		case joaat("journey"):
		case joaat("lazer"):
		case joaat("limo2"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("mammatus"):
		case joaat("marshall"):
		case joaat("marquis"):
		case joaat("maverick"):
		case joaat("mesa2"):
		case joaat("metrotrain"):
		case joaat("monster"):
		case joaat("miljet"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("phantom"):
		case joaat("police"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("pounder"):
		case joaat("pranger"):
		case joaat("predator"):
		case joaat("proptrailer"):
		case joaat("raketrailer"):
		case joaat("rancherxl2"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("riot"):
		case joaat("ripley"):
		case joaat("rubble"):
		case joaat("rumpo2"):
		case joaat("sadler2"):
		case joaat("savage"):
		case joaat("scrap"):
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("shamal"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
		case joaat("skylift"):
		case joaat("speeder"):
		case joaat("speedo2"):
		case joaat("squalo"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("stretch"):
		case joaat("stunt"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("suntrap"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("taco"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("tankercar"):
		case joaat("taxi"):
		case joaat("technical"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("tiptruck"):
		case joaat("tiptruck2"):
		case joaat("titan"):
		case joaat("toro"):
		case joaat("tourbus"):
		case joaat("tr2"):
		case joaat("tr3"):
		case joaat("tr4"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tractor3"):
		case joaat("trailerlogs"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("trailersmall"):
		case joaat("trash"):
		case joaat("trash2"):
		case joaat("trflat"):
		case joaat("tropic"):
		case joaat("tvtrailer"):
		case joaat("utillitruck"):
		case joaat("utillitruck2"):
		case joaat("utillitruck3"):
		case joaat("valkyrie"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("cargobob4"):
		case joaat("dinghy4"):
		case joaat("seashark3"):
		case joaat("speeder2"):
		case joaat("toro2"):
		case joaat("tropic2"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("valkyrie2"):
		case joaat("dune4"):
		case joaat("ruiner3"):
		case joaat("brickade"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("vetir"):
		case joaat("longfin"):
		case joaat("patrolboat"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("mule5"):
			return 0;
		
		default:
	}
	if (((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("conada"):
		case joaat("conada2"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("streamer216"):
		case joaat("raiju"):
			return 1;
		
		default:
	}
	return 0;
}

int func_59(int iParam0)
{
	if ((Global_22959 || Global_22958) || Global_22960)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 172)
	{
		if (Global_20500.f_1 == 10)
		{
			if (Global_7685 == iParam0)
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
	return 0;
}

void func_60()
{
	int iVar0;
	int iVar1;
	
	if (func_69(PLAYER::PLAYER_ID()))
	{
		if (!func_68())
		{
			if (func_67())
			{
				iVar0 = func_66("OFF_SEAT_RGSIT0");
				StringCopy(&(Global_44123[iVar0 /*32*/].f_8), "MPJAC_SIT", 16);
			}
		}
	}
	else if (func_64(PLAYER::PLAYER_ID()))
	{
		if (!func_62())
		{
			if (func_61())
			{
				iVar1 = func_66("CLB_SEAT_RGSIT0");
				StringCopy(&(Global_44123[iVar1 /*32*/].f_8), "MPJAC_SIT", 16);
			}
		}
	}
}

bool func_61()
{
	return func_66("CLB_SEAT_RGSIT0") != -1;
}

bool func_62()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!func_63(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	switch (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33)
	{
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1114.575f, -3161.203f, -37.87047f };
			Var3 = { 1117.76f, -3161.251f, -35.30797f };
			fVar6 = 2.9375f;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1008.052f, -3171.083f, -39.90714f };
			Var3 = { 1008.271f, -3168.189f, -37.34464f };
			fVar6 = 1.5625f;
			break;
		
		default:
			return 0;
			break;
	}
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, false, true, 0);
}

int func_63(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (func_65(Global_1853988[iParam0 /*867*/].f_267.f_33, -1))
	{
		return 1;
	}
	return 0;
}

int func_65(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_66(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_44123[iVar0 /*32*/].f_8)) && MISC::ARE_STRINGS_EQUAL(&(Global_44123[iVar0 /*32*/].f_8), sParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_67()
{
	return func_66("OFF_SEAT_RGSIT0") != -1;
}

bool func_68()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!func_63(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	switch (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33)
	{
		case 87:
			Var0 = { -1556.616f, -572.9843f, 107.5237f };
			Var3 = { -1554.045f, -576.6298f, 109.3354f };
			fVar6 = 2.1875f;
			break;
		
		case 88:
			Var0 = { -1370.352f, -463.2942f, 71.04904f };
			Var3 = { -1374.76f, -463.8354f, 72.86154f };
			fVar6 = 2.1875f;
			break;
		
		case 89:
			Var0 = { -125.7556f, -639.4572f, 167.8274f };
			Var3 = { -125.2504f, -643.829f, 169.6399f };
			fVar6 = 2.1875f;
			break;
		
		case 90:
			Var0 = { -81.66152f, -803.5988f, 242.3928f };
			Var3 = { -80.11616f, -799.4528f, 244.2053f };
			fVar6 = 2.1875f;
			break;
		
		default:
			return 0;
			break;
	}
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, false, true, 0);
}

int func_69(int iParam0)
{
	if (func_70(Global_1853988[iParam0 /*867*/].f_267.f_33))
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

void func_71()
{
	if (Global_2672524.f_947.f_6 >= 0)
	{
		if (Global_2766622 == 54 || Global_2766622 == 27)
		{
			if (Global_2766716.f_7729 == 0)
			{
				if (HUD::IS_PAUSE_MENU_ACTIVE() || !func_31(PLAYER::PLAYER_ID(), 1, 1))
				{
					Global_2766625 = 1;
					if (Global_1574582.f_1)
					{
						Global_1574582.f_1 = 0;
						Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_9 = 0;
						if (func_31(PLAYER::PLAYER_ID(), 1, 0))
						{
							PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
						}
						PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
						NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
						NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
						NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
					}
				}
			}
		}
	}
}

void func_72()
{
	if (func_82(PLAYER::PLAYER_ID()) && Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_10 == PLAYER::PLAYER_ID())
	{
		if ((!iLocal_65 && !func_81()) && ((((func_80() || func_79()) || func_78()) || func_77()) || func_76()))
		{
			if (Global_2694610)
			{
				func_35(&Local_66, 1, 0);
			}
			else
			{
				Global_2694610 = 1;
				iLocal_65 = 1;
				func_9(&Local_66, 1, 0);
			}
		}
		else if (iLocal_65 && ((func_81() || func_75(Local_66, 1500, 1)) || func_73()))
		{
			Global_2694610 = 0;
			iLocal_65 = 0;
			func_7(&Local_66);
		}
	}
	if ((iLocal_65 && Global_2694610) && !func_38(PLAYER::PLAYER_ID()))
	{
		Global_2694610 = 0;
		iLocal_65 = 0;
		func_7(&Local_66);
	}
}

int func_73()
{
	if (func_74())
	{
		return Global_1950844.f_530 == 0;
	}
	return 0;
}

bool func_74()
{
	return Global_1950844.f_529;
}

int func_75(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_10(&iParam0))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

var func_76()
{
	return BitTest(Global_1048576.f_10, 18);
}

var func_77()
{
	return Global_2672524.f_3575;
}

bool func_78()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

var func_79()
{
	return Global_1836768.f_78;
}

bool func_80()
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 != 0;
}

bool func_81()
{
	return Global_1575063;
}

int func_82(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_31(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_30(Global_2657704[iParam0 /*463*/].f_321.f_7) == 24;
			}
		}
	}
	return 0;
}

void func_83()
{
	int iVar0;
	
	if (iLocal_64)
	{
		return;
	}
	if (MISC::IS_PC_VERSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		iLocal_64 = 0;
		return;
	}
	if (func_3(Global_4718592.f_117591) != 4)
	{
		iLocal_64 = 0;
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 79)
	{
		if ((Global_4980736.f_110349[iVar0 /*1098*/].f_27 == joaat("a_m_y_carclub_01") || Global_4980736.f_110349[iVar0 /*1098*/].f_27 == joaat("a_m_y_studioparty_01")) || Global_4980736.f_110349[iVar0 /*1098*/].f_27 == joaat("a_f_y_clubcust_04"))
		{
			Global_4980736.f_110349[iVar0 /*1098*/].f_27 = 0;
		}
		iVar0++;
	}
	iLocal_64 = 1;
}

void func_84()
{
	bool bVar0;
	int iVar1;
	
	if (!func_91(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (((((func_31(PLAYER::PLAYER_ID(), 1, 1) && func_90(PLAYER::PLAYER_ID())) && func_89(PLAYER::PLAYER_ID())) && !func_88(PLAYER::PLAYER_ID())) && !func_87(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_IN())
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			bVar0 = true;
		}
		else
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (!VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("avenger3")))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			func_86(0);
			func_85(0, -1, 1);
		}
	}
}

void func_85(bool bParam0, int iParam1, bool bParam2)
{
	if ((!SCRIPT::IS_THREAD_ACTIVE(Global_2646835.f_1582) || Global_2646835.f_1582 == SCRIPT::GET_ID_OF_THIS_THREAD()) || bParam2)
	{
		if (bParam0)
		{
			Global_2646835.f_1582 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_2646835.f_1583 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_2646835.f_1582 = -1;
		}
		Global_2646835.f_1585 = iParam1;
		Global_2646835.f_1587 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_86(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_6, 21))
		{
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_6), 21);
		}
	}
	else if (BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_6, 21))
	{
		MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_6), 21);
	}
}

int func_87(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_31(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_32())
			{
				return func_30(Global_2657704[iParam0 /*463*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_88(int iParam0)
{
	if (iParam0 != func_32())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_307, 30);
	}
	return 0;
}

int func_89(int iParam0)
{
	if (iParam0 != func_32())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_6, 21);
	}
	return 0;
}

int func_90(int iParam0)
{
	if (iParam0 != func_32())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_307, 12);
	}
	return 0;
}

bool func_91(int iParam0)
{
	return func_92(iParam0);
}

int func_92(int iParam0)
{
	if (iParam0 != func_32())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_299, 1);
	}
	return 0;
}

void func_93()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iLocal_62 = 0;
		iLocal_63 = 0;
		return;
	}
	if (Global_4718592.f_117591 != Global_262145.f_33923[0])
	{
		iLocal_62 = 0;
		iLocal_63 = 0;
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		iLocal_62 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		iLocal_63 = 0;
	}
	if (iLocal_62 == 0)
	{
		iLocal_62 = Global_2794162.f_310;
	}
	if (iLocal_63 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0]))
			{
			}
			else if (ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]) == joaat("draugur"))
			{
				iLocal_63 = Global_1058071.f_233[iVar0];
			}
			else
			{
				iVar0++;
			}
		}
	}
	if (iLocal_62 != 0 && iLocal_63 != 0)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iLocal_63, false) && SYSTEM::VDIST2(-876.92f, -2769.47f, -49.22f, ENTITY::GET_ENTITY_COORDS(iLocal_63, true)) < 25f) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_63) == 0)
		{
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_63, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-880f, -2770f, -49f, "M23_1_dlc_int_01_M23_1"));
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_62, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_63, false))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_63) != INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-880f, -2770f, -49f, "M23_1_dlc_int_01_M23_1"))
			{
				return;
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_63))
			{
				NETWORK::NETWORK_EXPLODE_VEHICLE(iLocal_63, true, false, -1);
			}
		}
	}
}

void func_94()
{
	int iVar0;
	
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0) || !Global_2683883.f_24)
	{
		iLocal_61 = 0;
		return;
	}
	if (iLocal_61)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_1750 - 1))
	{
		switch (Global_1978379.f_35)
		{
			case 1:
				Global_4718592.f_180959[iVar0 /*20*/] = 0;
				break;
			
			case 2:
				Global_4718592.f_180959[iVar0 /*20*/] = 1;
				break;
			
			case 3:
				Global_4718592.f_180959[iVar0 /*20*/] = 2;
				break;
			
			case 4:
				Global_4718592.f_180959[iVar0 /*20*/] = 3;
				break;
			
			case 5:
				Global_4718592.f_180959[iVar0 /*20*/] = 4;
				break;
		}
		iVar0++;
	}
	iLocal_61 = 1;
}

void func_95()
{
	if (func_100())
	{
		return;
	}
	if (!func_98())
	{
		return;
	}
	if (!func_96())
	{
		return;
	}
	if (!func_91(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if ((Global_1945123[190] - 1) != 190)
	{
		Global_1945123[190] = 191;
	}
}

int func_96()
{
	if (func_97() == 0)
	{
		return 1;
	}
	return 0;
}

int func_97()
{
	return Global_1574632.f_18;
}

int func_98()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_99()) > 0 && Global_1574666 == 2)
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_100()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_101()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (((!iLocal_60 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_SMPL_INTERIOR_EXT")) > 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", 81, false, 0)) && INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1103.562f, -3000f, -40f, "gr_grdlc_int_01") == 0)
	{
		if ((!func_103(PLAYER::PLAYER_ID(), 1, 1) && !func_74()) && !func_102(PLAYER::PLAYER_ID()))
		{
			iLocal_60 = 1;
			MISC::SET_BIT(&(Global_1950844.f_4601), 3);
		}
	}
	else if (((iLocal_60 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_SMPL_INTERIOR_EXT")) > 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", 81, false, 0)) && INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1103.562f, -3000f, -40f, "gr_grdlc_int_01") != 0)
	{
		iLocal_60 = 0;
		MISC::CLEAR_BIT(&(Global_1950844.f_4601), 3);
	}
}

int func_102(int iParam0)
{
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 11))
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_104()
{
	if (func_111(PLAYER::PLAYER_ID()) != 2)
	{
		return;
	}
	if (Global_2794162.f_6788 < 6)
	{
		return;
	}
	func_105(930, 1);
}

void func_105(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0 || !func_106(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (bParam1)
		{
			if (Global_1956878.f_5713[iVar0] == iParam0)
			{
				return;
			}
			if (Global_1956878.f_5713[iVar0] == 0)
			{
				if (iVar1 == -1)
				{
					iVar1 = iVar0;
				}
			}
		}
		else if (Global_1956878.f_5713[iVar0] == iParam0)
		{
			Global_1956878.f_5713[iVar0] = 0;
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iVar1 > -1)
		{
			Global_1956878.f_5713[iVar1] = iParam0;
		}
	}
}

bool func_106(int iParam0)
{
	return func_107(iParam0, PLAYER::PLAYER_ID());
}

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 != func_32() && func_31(iParam1, 0, 1))
	{
		if (Global_1956878.f_5818.f_3 != 0)
		{
			return 1;
		}
		if (iParam0 != 0)
		{
			iVar0 = iParam1;
			if (func_109(iParam1, 1))
			{
				iVar0 = func_108(iParam1);
			}
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (Global_2650208.f_199.f_962[iVar1 /*75*/] == iVar0)
				{
					iVar2 = 0;
					while (iVar2 < 18)
					{
						if (Global_2650208.f_199.f_962[iVar1 /*75*/].f_1[iVar2] == iParam0)
						{
							return 1;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_108(int iParam0)
{
	if (iParam0 != func_32())
	{
		return Global_1895156[iParam0 /*609*/].f_10;
	}
	return func_32();
}

bool func_109(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_110(iParam0))
		{
			return 0;
		}
	}
	return Global_1895156[iParam0 /*609*/].f_10 != func_32();
}

int func_110(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_32())
		{
			return Global_1895156[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_111(int iParam0)
{
	if (func_46(iParam0) == 317)
	{
		return func_112(iParam0, 317);
	}
	return -1;
}

int func_112(int iParam0, int iParam1)
{
	if (func_46(iParam0) == iParam1)
	{
		return func_44(iParam0);
	}
	return -1;
}

void func_113()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_111(PLAYER::PLAYER_ID()) != 2)
	{
		return;
	}
	if (!func_63(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!func_63(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (((iVar1 != joaat("cargobob") && iVar1 != joaat("cargobob2")) && iVar1 != joaat("cargobob3")) && iVar1 != joaat("cargobob4"))
	{
		return;
	}
	if (func_114(PLAYER::PLAYER_PED_ID(), 1) != -1)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 103) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 103))
	{
		iVar2 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iVar0);
		if (func_63(iVar2) && ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
		{
			VEHICLE::SET_CARGOBOB_FORCE_DONT_DETACH_VEHICLE(iVar0, false);
			VEHICLE::DETACH_ENTITY_FROM_CARGOBOB(iVar0, iVar2);
		}
	}
}

int func_114(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_115()
{
	if (!iLocal_57)
	{
		if ((func_29(PLAYER::PLAYER_ID()) && BitTest(Global_1950844.f_8, 25)) && func_117() != PLAYER::PLAYER_ID())
		{
			iLocal_57 = 1;
		}
	}
	else
	{
		if (!func_29(PLAYER::PLAYER_ID()))
		{
			iLocal_57 = 0;
			MISC::CLEAR_BIT(&(Global_1950844.f_8), 25);
			return;
		}
		if (((func_116() && Global_1950837 != 3) && !MISC::ARE_STRINGS_EQUAL(&(Global_23390.f_1), "CMOD_MOD_E")) && !Global_1950844.f_3432)
		{
			if (BitTest(Global_1950844.f_8, 25))
			{
				MISC::CLEAR_BIT(&(Global_1950844.f_8), 25);
			}
		}
		else if (!BitTest(Global_1950844.f_8, 25))
		{
			MISC::SET_BIT(&(Global_1950844.f_8), 25);
		}
	}
}

var func_116()
{
	return BitTest(Global_78938, 8);
}

int func_117()
{
	return func_118(PLAYER::PLAYER_ID());
}

int func_118(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_32())
	{
		return iParam0;
	}
	if (func_119(iParam0) != -1)
	{
		iVar0 = func_30(func_119(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_109(iParam0, 0))
			{
				return func_108(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_32();
		}
		return Global_2657704[iParam0 /*463*/].f_321.f_10;
	}
	return func_32();
}

int func_119(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_31(iParam0, 1, 1))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
		else if (((Global_1575063 || Global_2635560.f_2780) && iParam0 == PLAYER::PLAYER_ID()) && func_31(iParam0, 1, 0))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
	}
	return -1;
}

void func_120()
{
	struct<4> Var0;
	struct<4> Var4;
	struct<16> Var8;
	
	if (((Global_2766625 || ((func_31(PLAYER::PLAYER_ID(), 1, 1) && func_96()) && !iLocal_55)) || func_153(17)) || iLocal_56)
	{
		if (!iLocal_55)
		{
		}
		iLocal_55 = 1;
		StringCopy(&Var0, "&#166;", 16);
		StringCopy(&Var4, "&#8249;", 16);
		if (Global_2766625)
		{
		}
		else if (func_153(17))
		{
			iLocal_56 = 1;
		}
		if (func_110(PLAYER::PLAYER_ID()))
		{
			iLocal_56 = 0;
			Var8 = { func_149() };
			if (func_148(&Var8, Var0) || func_148(&Var8, Var4))
			{
				if (func_147(PLAYER::PLAYER_ID()))
				{
					func_133(&Var8, 0, 1);
				}
				else
				{
					func_133(&Var8, 1, 1);
				}
				func_131();
			}
		}
		if (func_130(PLAYER::PLAYER_ID()))
		{
			StringCopy(&Var8, func_124(PLAYER::PLAYER_ID()), 64);
			if (func_148(&Var8, Var0) || func_148(&Var8, Var4))
			{
				func_121(Var8);
			}
		}
	}
}

void func_121(char[64] cParam0)
{
	func_122(55, 56, &cParam0, -1, 1);
	Global_1914706[PLAYER::PLAYER_ID() /*299*/].f_283 = { cParam0 };
}

void func_122(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar10[32];
	int iVar18;
	int iVar19;
	
	iVar0 = func_123(iParam0, iParam3);
	iVar1 = func_123(iParam1, iParam3);
	if (iVar0 != 0 && iVar1 != 0)
	{
		StringCopy(&cVar2, "", 32);
		StringCopy(&cVar10, "", 32);
		iVar18 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
		if (iVar18 > 0)
		{
			iVar19 = 10;
			if (iVar18 < 10)
			{
				iVar19 = iVar18;
			}
			StringCopy(&cVar2, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 0, iVar19, 31), 32);
			if (iVar18 > 10)
			{
				StringCopy(&cVar10, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 10, iVar18, 31), 32);
			}
		}
		STATS::STAT_SET_STRING(iVar0, &cVar2, bParam4);
		STATS::STAT_SET_STRING(iVar1, &cVar10, bParam4);
	}
}

var func_123(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(3, uParam0, func_56(uParam1));
}

char* func_124(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("DEFAULT_LAB_N");
	if (iParam0 == func_32())
	{
		return sVar0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_129(&(Global_1914706[iParam0 /*299*/].f_283));
		return sVar0;
	}
	if (Global_1895156[iParam0 /*609*/].f_10.f_121 != Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121)
	{
		return sVar0;
	}
	if (func_128(iParam0, 28) || (func_128(PLAYER::PLAYER_ID(), 28) && !func_126(iParam0)))
	{
		return sVar0;
	}
	iVar1 = func_108(iParam0);
	if (iVar1 != func_32())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!func_125() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return sVar0;
			}
		}
	}
	if (iVar1 != func_32())
	{
		sVar0 = func_129(&(Global_1914706[iVar1 /*299*/].f_283));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return sVar0;
		}
		else
		{
			return sVar0;
		}
	}
	return sVar0;
}

bool func_125()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_126(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_127(iParam0) };
	if (func_125())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_127(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

var func_128(int iParam0, int iParam1)
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

var func_129(var uParam0)
{
	return uParam0;
}

int func_130(int iParam0)
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_479, 14);
}

void func_131()
{
	int iVar0;
	struct<2> Var1;
	
	Var1.f_0 = 2103624094;
	Var1.f_1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0] != func_32())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0]))
			{
				SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var1, 2, func_132(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0]));
			}
		}
		iVar0++;
	}
}

var func_132(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

void func_133(char* sParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_143(1) || iParam1 == 0)
		{
			func_122(47, 48, sParam0, -1, 1);
			if (func_142() && iParam1 == 0)
			{
				func_141(sParam0, bParam2);
			}
		}
		else
		{
			func_122(119, 121, sParam0, -1, 1);
			if (func_140() && iParam1 == 1)
			{
				func_138(sParam0, bParam2);
			}
		}
	}
	StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_105), sParam0, 64);
	Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121 = LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();
	if ((!func_125() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_136())
	{
		func_135(28);
	}
	else
	{
		func_134(28);
	}
}

void func_134(bool bParam0)
{
	MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}

void func_135(bool bParam0)
{
	MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}

int func_136()
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	if (func_137())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	else if (func_125())
	{
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_137()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_138(char* sParam0, bool bParam1)
{
	struct<16> Var0;
	
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_122(45, 46, sParam0, -1, 1);
			Var0 = { func_139(119, 121, -1) };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				func_122(119, 121, sParam0, -1, 1);
			}
		}
	}
	if ((!func_125() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_136())
	{
		func_135(28);
	}
	else
	{
		func_134(28);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_339), sParam0, 64);
	}
}

struct<16> func_139(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	char cVar18[32];
	
	iVar0 = func_123(iParam0, iParam2);
	iVar1 = func_123(iParam1, iParam2);
	StringCopy(&Var2, STATS::STAT_GET_STRING(iVar0, -1), 64);
	StringCopy(&cVar18, STATS::STAT_GET_STRING(iVar1, -1), 32);
	StringConCat(&Var2, &cVar18, 64);
	return Var2;
}

int func_140()
{
	return func_110(PLAYER::PLAYER_ID());
}

void func_141(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_122(49, 50, sParam0, -1, 1);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_355), sParam0, 64);
	}
	if ((!func_125() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_136())
	{
		func_135(28);
	}
	else
	{
		func_134(28);
	}
}

bool func_142()
{
	return func_147(PLAYER::PLAYER_ID());
}

bool func_143(bool bParam0)
{
	return func_144(PLAYER::PLAYER_ID(), bParam0);
}

bool func_144(int iParam0, bool bParam1)
{
	return func_145(iParam0, bParam1, 1);
}

int func_145(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_32())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_146(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1895156[iParam0 /*609*/].f_10;
	if (iVar0 != func_32() && Global_1895156[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0, int iParam1)
{
	if (iParam0 != func_32())
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_32())
		{
			if (Global_1895156[iParam0 /*609*/].f_10 == iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_147(int iParam0)
{
	return func_146(iParam0, 1);
}

int func_148(char* sParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<16> Var7;
	
	iVar0 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		iVar3 = MISC::GET_HASH_KEY(&cParam1);
		iVar4 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
		iVar5 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam1);
		iVar6 = 0;
		while (iVar6 <= (iVar4 - 1))
		{
			if ((iVar6 + iVar5) > iVar4)
			{
				return 0;
			}
			else if (MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar6, (iVar6 + iVar5))) == iVar3)
			{
				iVar1 = iVar6;
				iVar2 = (iVar6 + iVar5);
				iVar0 = 1;
			}
			else
			{
				iVar6++;
			}
		}
		if (iVar6 != 0)
		{
			StringConCat(&Var7, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, iVar1), 64);
		}
		if (iVar6 != (iVar4 - iVar5))
		{
			StringConCat(&Var7, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar2, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0)), 64);
		}
		*sParam0 = { Var7 };
	}
	return iVar0;
}

struct<16> func_149()
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = func_108(PLAYER::PLAYER_ID());
	if (iVar0 != func_32())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_128(iVar0, 28) || func_128(PLAYER::PLAYER_ID(), 28)) || func_152(iVar0)) && !func_126(iVar0))
			{
				StringCopy(&Var1, func_150(iVar0, 0), 64);
				return Var1;
			}
			if (!func_125() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				StringCopy(&Var1, func_150(iVar0, 0), 64);
				return Var1;
			}
		}
		return Global_1895156[iVar0 /*609*/].f_10.f_105;
	}
	StringCopy(&Var1, "", 64);
	return Var1;
}

char* func_150(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_144(iParam0, 1))
		{
			return func_151();
		}
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC");
}

char* func_151()
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM");
}

int func_152(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_32())
	{
		Var0 = { func_127(iParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_125() || MISC::IS_PROSPERO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2794162.f_5231.f_7[iVar0], iVar1);
}

void func_154()
{
	if (((func_157() == 3 && func_156()) && func_80()) && func_155(Global_4718592.f_117591))
	{
		NETWORK::NETWORK_BAIL(51, 0, 0);
	}
}

int func_155(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31258[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_156()
{
	return BitTest(Global_2684820.f_1.f_2809, 5);
}

int func_157()
{
	return Global_1057409;
}

void func_158()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar49;
	float fVar50;
	struct<3> Var51;
	
	if (func_10(&uLocal_14))
	{
		MISC::SET_BIT(&Global_8371, 2);
		if (func_34(&uLocal_14, 60000, 0))
		{
			func_35(&uLocal_14, 0, 0);
			func_7(&uLocal_14);
		}
	}
	if (func_10(&uLocal_12) && func_34(&uLocal_12, 1000, 0))
	{
		if (iLocal_21 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_21 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_21, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_34(&uLocal_12, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_21))
			{
				AUDIO::STOP_SOUND(iLocal_21);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_21);
			iLocal_21 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_35(&uLocal_12, 0, 0);
			func_7(&uLocal_12);
		}
	}
	if (!iLocal_6 && !func_166())
	{
		return;
	}
	iLocal_6 = 1;
	MISC::SET_BIT(&Global_8371, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_5 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 360.8759f, 5623.427f, 780.1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_5, true);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_5, 8000);
			iVar1 = func_54(7869, -1);
			func_165(7869, iVar1 + 1, -1, 1);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&Var2);
			Local_16 = { ENTITY::GET_ENTITY_COORDS(iLocal_5, false) };
			iLocal_19 = 0;
		}
	}
	else
	{
		func_164();
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_20 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_20 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_20, "07", iLocal_5, "DLC_GR_CS2_Sounds", false, 0);
			}
			if (!iLocal_7)
			{
				if (func_34(&uLocal_8, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_5, false);
					func_35(&uLocal_8, 0, 0);
					func_7(&uLocal_8);
					func_9(&uLocal_10, 0, 0);
					iLocal_7 = 1;
				}
			}
			else
			{
				fVar49 = (SYSTEM::TO_FLOAT(func_163(&uLocal_10, 0, 0)) / SYSTEM::TO_FLOAT(func_162()));
				fVar50 = (SYSTEM::TO_FLOAT(func_163(&uLocal_8, 0, 0)) / SYSTEM::TO_FLOAT(func_161()));
				fVar50 = (fVar50 * fVar49);
				Var51 = { func_159(Local_16, func_160(), fVar50) };
				ENTITY::SET_ENTITY_COORDS(iLocal_5, Var51, true, false, false, true);
				if (fVar50 >= 1f)
				{
					iLocal_19++;
					Local_16 = { ENTITY::GET_ENTITY_COORDS(iLocal_5, false) };
					func_35(&uLocal_8, 0, 0);
					func_7(&uLocal_8);
					if (func_161() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_5);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_20))
						{
							AUDIO::STOP_SOUND(iLocal_20);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_20);
						iLocal_20 = -1;
						func_9(&uLocal_12, 0, 0);
						func_9(&uLocal_14, 0, 0);
						func_35(&uLocal_10, 0, 0);
						func_7(&uLocal_10);
						Local_16 = { 0f, 0f, 0f };
						iLocal_19 = 0;
						iLocal_6 = 0;
						iLocal_7 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_159(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_160()
{
	switch (iLocal_19)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
		
		case 1:
			return -1082.865f, 6390.52f, 924.2493f;
		
		case 2:
			return -2542.874f, 7217.514f, 1051.333f;
		
		case 3:
			return -4139.106f, 8143.302f, 1412.694f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_161()
{
	switch (iLocal_19)
	{
		case 0:
			return 2000;
		
		case 1:
			return 1000;
		
		case 2:
			return 100;
		
		case 3:
			return 50;
		
		default:
	}
	return -1;
}

int func_162()
{
	return 3150;
}

int func_163(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_164()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_5, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_5, Var0, 2, true);
}

void func_165(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_55(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_166()
{
	if (((((((func_170(22107, -1) && Global_2639889 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_169(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2684820.f_3076.f_178 >= 1) && Global_2684820.f_3076.f_178 < 4) && func_168()) && func_167())
	{
		return 1;
	}
	return 0;
}

int func_167()
{
	if (func_170(15476, -1) && func_54(5453, func_49()) > 577)
	{
		return 1;
	}
	return 0;
}

int func_168()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	MISC::GET_CURR_WEATHER_STATE(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		if ((iVar0 == joaat("rain") || iVar0 == joaat("THUNDER")) || iVar1 == -1429616491)
		{
			return 1;
		}
	}
	else if ((iVar1 == joaat("rain") || iVar1 == joaat("THUNDER")) || iVar1 == -1429616491)
	{
		return 1;
	}
	return 0;
}

bool func_169(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

bool func_170(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_171()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		func_174();
	}
	else
	{
		func_172();
	}
}

void func_172()
{
	bool bVar0;
	
	if (iLocal_46 == 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < 26)
	{
		if (BitTest(iLocal_46, bVar0))
		{
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_173(bVar0), false);
			MISC::CLEAR_BIT(&iLocal_46, bVar0);
		}
		bVar0++;
	}
	iLocal_47 = 0;
	Global_2766715 = 0;
}

char* func_173(bool bParam0)
{
	switch (bParam0)
	{
		case 9:
			return "RADIO_01_CLASS_ROCK";
		
		case 10:
			return "RADIO_02_POP";
		
		case 12:
			return "RADIO_03_HIPHOP_NEW";
		
		case 18:
			return "RADIO_04_PUNK";
		
		case 17:
			return "RADIO_06_COUNTRY";
		
		case 15:
			return "RADIO_07_DANCE_01";
		
		case 16:
			return "RADIO_08_MEXICAN";
		
		case 11:
			return "RADIO_09_HIPHOP_OLD";
		
		case 23:
			return "RADIO_11_TALK_02";
		
		case 22:
			return "RADIO_12_REGGAE";
		
		case 5:
			return "RADIO_13_JAZZ";
		
		case 6:
			return "RADIO_14_DANCE_02";
		
		case 21:
			return "RADIO_15_MOTOWN";
		
		case 13:
			return "RADIO_20_THELAB";
		
		case 14:
			return "RADIO_16_SILVERLAKE";
		
		case 20:
			return "RADIO_17_FUNK";
		
		case 19:
			return "RADIO_18_90S_ROCK";
		
		case 8:
			return "RADIO_21_DLC_XM17";
		
		case 24:
			return "RADIO_05_TALK_01";
		
		case 2:
			return "RADIO_27_DLC_PRHEI4";
		
		case 4:
			return "RADIO_23_DLC_XM19_RADIO";
		
		case 7:
			return "RADIO_22_DLC_BATTLE_MIX1_RADIO";
		
		case 0:
			return "RADIO_36_AUDIOPLAYER";
		
		case 1:
			return "RADIO_35_DLC_HEI4_MLR";
		
		case 3:
			return "RADIO_34_DLC_HEI4_KULT";
		
		case 25:
			return "RADIO_37_MOTOMAMI";
		
		default:
	}
	return "OFF";
}

void func_174()
{
	int iVar0;
	bool bVar1;
	
	if (!func_175(Global_4718592.f_117591))
	{
		return;
	}
	iVar0 = func_54(9877, -1);
	if (iVar0 == 0)
	{
		return;
	}
	bVar1 = false;
	while (bVar1 < 26)
	{
		if (!BitTest(iLocal_47, bVar1))
		{
			if (BitTest(iVar0, bVar1))
			{
			}
			MISC::SET_BIT(&iLocal_47, bVar1);
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_173(bVar1), true);
		}
		if (BitTest(iVar0, bVar1) && !BitTest(iLocal_46, bVar1))
		{
			MISC::SET_BIT(&iLocal_46, bVar1);
			Global_2766715 = 1;
		}
		bVar1++;
	}
}

int func_175(int iParam0)
{
	if ((iParam0 == Global_262145.f_31929[0] || iParam0 == Global_262145.f_31929[1]) || iParam0 == Global_262145.f_31929[2])
	{
		return 1;
	}
	return 0;
}

void func_176()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0)
	{
		if (!iLocal_45)
		{
			iLocal_45 = 1;
		}
	}
	else if (iLocal_45)
	{
		MISC::CLEAR_OVERRIDE_WEATHER();
		iLocal_45 = 0;
	}
}

void func_177()
{
	int iVar0;
	
	if (func_80() && func_184(Global_4718592.f_171044))
	{
		if (func_183() == 26)
		{
			iVar0 = func_178();
			if (iVar0 != -1)
			{
				if (func_10(&(Global_1890739[iVar0 /*138*/].f_31)))
				{
					if (func_34(&(Global_1890739[iVar0 /*138*/].f_31), 37500, 0))
					{
						iLocal_44 = 1;
						Global_2684820.f_6341 = -1;
					}
				}
			}
		}
		else if (func_183() == 41)
		{
			if (iLocal_44)
			{
				iLocal_44 = 0;
				Global_2684820.f_6341 = -1;
			}
		}
	}
}

int func_178()
{
	return func_179();
}

int func_179()
{
	struct<13> Var0;
	
	Var0 = { func_181() };
	if (func_180(Var0))
	{
		return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
	}
	return func_32();
}

bool func_180(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> func_181()
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_182(iVar0))
		{
			return Global_2684820.f_1.f_845[iVar0 /*57*/];
		}
		iVar0++;
	}
	return Var1;
}

bool func_182(int iParam0)
{
	return BitTest(Global_2684820.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

int func_183()
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192;
}

bool func_184(int iParam0)
{
	return iParam0 == 88;
}

void func_185()
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_262145.f_33923[0] == Global_4718592.f_117591) && (Global_1058071.f_14[0] >= 4 || Global_1058071.f_14[0] <= 6))
	{
		Var0 = { func_188(101) };
		bVar3 = OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 2961.077f, 2743.28f, 40.7426f, 2957.497f, 2756.674f, 45.11757f, 15f, false, true);
		if (!func_187())
		{
			if (bVar3 || Global_1058071.f_14[0] == 5)
			{
				iVar5 = func_186(&iVar4);
				if (((iVar4 >= 0 && iVar4 < 4) && iVar5 >= 0) || iVar5 < 17)
				{
					MISC::SET_BIT(&(Global_4718592.f_1816[iVar4 /*24279*/].f_8212[iVar5]), 12);
				}
			}
		}
		else if ((!bVar3 && Global_1058071.f_14[0] < 5) || Global_1058071.f_14[0] > 5)
		{
			iVar7 = func_186(&iVar6);
			if (((iVar6 >= 0 && iVar6 < 4) && iVar7 >= 0) || iVar7 < 17)
			{
				MISC::CLEAR_BIT(&(Global_4718592.f_1816[iVar6 /*24279*/].f_8212[iVar7]), 12);
			}
		}
	}
}

var func_186(var uParam0)
{
	*uParam0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (*uParam0 < 4 && *uParam0 > -1)
	{
	}
	else
	{
		*uParam0 = 0;
	}
	return Global_1058071.f_14[*uParam0];
}

int func_187()
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	iVar1 = func_186(&iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return 0;
	}
	if (iVar1 < 0 || iVar1 >= 17)
	{
		return 0;
	}
	return BitTest(Global_4718592.f_1816[iVar0 /*24279*/].f_8212[iVar1], 12);
}

Vector3 func_188(int iParam0)
{
	switch (iParam0)
	{
		case 101:
			return func_189();
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_189()
{
	struct<3> Var0;
	int iVar3;
	var uVar4;
	
	Var0 = { 0f, 0f, 0f };
	iVar3 = func_190();
	if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar3, 0f, -8f, -0.6f) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar4, false, false) && !ENTITY::IS_ENTITY_IN_AIR(iVar3))
		{
			Var0 = { Var0.f_0, Var0.f_1, uVar4 };
		}
		else
		{
			Var0 = { Var0.f_0, Var0.f_1, (Var0.f_2 - 1.5f) };
		}
	}
	return Var0;
}

var func_190()
{
	int iVar0;
	var uVar1[25];
	int iVar27;
	int iVar28;
	var uVar29[25];
	int iVar55;
	
	if (func_109(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() != func_194())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310))
			{
				iVar27 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
				iVar0 = 0;
				while (iVar0 < iVar27)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar1[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar1[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uVar1[iVar0], false))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
							{
								if (VEHICLE::IS_VEHICLE_MODEL(uVar1[iVar0], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(uVar1[iVar0], func_193(1)))
								{
									if (func_191(uVar1[iVar0]) == func_194())
									{
										Global_2794162.f_310 = uVar1[iVar0];
										return uVar1[iVar0];
									}
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				return Global_2794162.f_310;
			}
		}
	}
	else if (PLAYER::PLAYER_ID() == func_194() && !ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310))
	{
		iVar55 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar29);
		iVar28 = 0;
		while (iVar28 < iVar55)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uVar29[iVar28]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar29[iVar28]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar29[iVar28], false))
				{
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(uVar29[iVar28], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(uVar29[iVar28], func_193(1)))
						{
							if (func_191(uVar29[iVar28]) == PLAYER::PLAYER_ID())
							{
								Global_2794162.f_310 = uVar29[iVar28];
								return uVar29[iVar28];
							}
						}
					}
				}
			}
			iVar28++;
		}
	}
	return Global_2794162.f_310;
}

int func_191(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, func_193(1)))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "Creator_Trailer"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Creator_Trailer");
					return func_192(iVar0, 0, 1, 0);
				}
			}
		}
	}
	return func_32();
}

int func_192(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_31(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_31(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_32();
}

int func_193(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_194()
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}

void func_195()
{
	int iVar0;
	
	iLocal_43++;
	if (iLocal_43 == 30)
	{
		iLocal_43 = 0;
	}
	else
	{
		return;
	}
	if (((((((((!func_63(PLAYER::PLAYER_PED_ID()) || !func_31(PLAYER::PLAYER_ID(), 1, 1)) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) || !func_96()) || func_196(PLAYER::PLAYER_ID())) || func_102(PLAYER::PLAYER_ID())) || func_38(PLAYER::PLAYER_ID())) || Global_2672524.f_3542) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_63(iVar0))
		{
			if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
			{
				if (ENTITY::GET_ENTITY_CAN_BE_DAMAGED(iVar0))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar0, 0f);
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					ENTITY::SET_ENTITY_PROOFS(iVar0, false, false, false, false, false, false, true, false);
				}
			}
		}
	}
}

int func_196(int iParam0)
{
	if (iParam0 != func_32() && func_31(iParam0, 1, 1))
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321, 3);
	}
	return 0;
}

void func_197()
{
	var uVar0;
	
	if (iLocal_29)
	{
		if ((((((func_204() == -1 && func_203() == 999) && func_96()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !CAM::IS_SCREEN_FADING_OUT())
		{
			iLocal_29 = 0;
			func_202(0);
			STATS::STAT_SET_BLOCK_SAVES(false);
			func_199();
		}
	}
	if (!iLocal_28)
	{
		NETWORK::NETWORK_GET_LOCAL_HANDLE(&Local_30, 13);
		if (func_180(Local_30))
		{
			iLocal_28 = 1;
		}
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692776.f_3)
	{
		NETWORK::NETWORK_GET_LOCAL_HANDLE(&uVar0, 13);
		if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&uVar0, &Local_30))
		{
			NETWORK::NETWORK_BAIL(0, 0, 0);
			STATS::STAT_SET_BLOCK_SAVES(true);
			if (!func_198())
			{
				func_202(1);
				iLocal_29 = 1;
			}
			iLocal_28 = 0;
		}
	}
}

bool func_198()
{
	return Global_32561;
}

void func_199()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_200(0, iVar0);
		STATS::STAT_CLEAR_SLOT_FOR_RELOAD(iVar0);
		iVar0++;
	}
	STATS::FORCE_CLOUD_MP_STATS_DOWNLOAD_AND_OVERWRITE_LOCAL_SAVE();
}

void func_200(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		func_201();
	}
	Global_1574538[iParam1] = iParam0;
}

void func_201()
{
	Global_2694561 = 0;
}

void func_202(int iParam0)
{
	Global_32561 = iParam0;
}

int func_203()
{
	return Global_32284;
}

int func_204()
{
	return Global_32283;
}

void func_205()
{
	if (Global_2672524.f_62.f_57)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_299) && !ENTITY::IS_ENTITY_DEAD(Global_2794162.f_299, false))
		{
			if (!Global_2672524.f_62.f_21)
			{
				if (iLocal_27 == -1)
				{
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(Global_2794162.f_299, "PV_Slot"))
						{
							iLocal_27 = DECORATOR::DECOR_GET_INT(Global_2794162.f_299, "PV_Slot");
						}
					}
				}
				else if (Global_2359296[func_212() /*5568*/].f_681.f_2 != iLocal_27)
				{
					if (!func_10(&uLocal_25))
					{
						func_9(&uLocal_25, 1, 0);
					}
					else if (func_34(&uLocal_25, 10000, 1))
					{
						func_206(1, 0, 1, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_7(&uLocal_25);
				iLocal_27 = -1;
			}
		}
		else
		{
			func_7(&uLocal_25);
			iLocal_27 = -1;
		}
	}
	else
	{
		func_7(&uLocal_25);
		iLocal_27 = -1;
	}
}

void func_206(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_211() < 0 && Global_1963618)
	{
		return;
	}
	if (func_210(35))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2672524.f_62.f_60, 3))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2672524.f_62.f_64, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (BitTest(Global_2672524.f_62.f_68, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (bParam0)
	{
		func_209(2);
	}
	else
	{
		func_209(1);
	}
	if (bParam1)
	{
		func_209(11);
	}
	if (bParam2)
	{
		func_209(32);
		if (bParam3)
		{
			if (func_211() >= 0 && BitTest(Global_1586488[func_211() /*142*/].f_103, 0))
			{
				func_209(33);
			}
		}
		else
		{
			func_208(33);
		}
		if (func_211() >= 0)
		{
			if (func_207(Global_1586488[func_211() /*142*/].f_66))
			{
				func_209(40);
			}
		}
	}
	else if (bParam5)
	{
		func_209(37);
	}
	if (bParam4)
	{
		func_209(36);
	}
	if (func_210(36))
	{
		if (func_210(2))
		{
			func_208(36);
		}
	}
	if (bParam6)
	{
		func_209(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2794162.f_440 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_207(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_208(bool bParam0)
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_2672524.f_62.f_1, bParam0))
		{
			MISC::CLEAR_BIT(&(Global_2672524.f_62.f_1), bParam0);
		}
	}
	else if (BitTest(Global_2672524.f_62.f_2, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2672524.f_62.f_2), (bParam0 - 32));
	}
}

void func_209(bool bParam0)
{
	if (bParam0 < 32)
	{
		if (!BitTest(Global_2672524.f_62.f_1, bParam0))
		{
			MISC::SET_BIT(&(Global_2672524.f_62.f_1), bParam0);
		}
	}
	else if (!BitTest(Global_2672524.f_62.f_2, (bParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2672524.f_62.f_2), (bParam0 - 32));
	}
}

bool func_210(int iParam0)
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2672524.f_62.f_1, iParam0);
	}
	return BitTest(Global_2672524.f_62.f_2, (iParam0 - 32));
}

int func_211()
{
	if (Global_2359296[func_212() /*5568*/].f_681.f_2 >= 415)
	{
		Global_2359296[func_212() /*5568*/].f_681.f_2 = -1;
		return -1;
	}
	return Global_2359296[func_212() /*5568*/].f_681.f_2;
}

int func_212()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_213()
{
	if (func_214(PLAYER::PLAYER_ID()) && func_117() == PLAYER::PLAYER_ID())
	{
		if ((PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_WARNING_MESSAGE_ACTIVE()) || func_78())
		{
			func_35(&uLocal_22, 1, 0);
			Global_1950697 = 1;
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				iLocal_24 = 30000;
			}
		}
	}
	if (func_10(&uLocal_22))
	{
		if (func_34(&uLocal_22, iLocal_24, 1))
		{
			func_7(&uLocal_22);
			Global_1950697 = 0;
			iLocal_24 = 10000;
		}
	}
}

int func_214(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_31(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_30(Global_2657704[iParam0 /*463*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

void func_215()
{
	if (!func_217() && !func_216())
	{
		if (!STATS::STAT_IS_STATS_TRACKING_ENABLED())
		{
			if (((func_96() && func_31(PLAYER::PLAYER_ID(), 0, 1)) && CAM::IS_SCREEN_FADED_IN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				STATS::STAT_ENABLE_STATS_TRACKING();
			}
		}
	}
}

bool func_216()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("animal_controller")) > 0;
}

bool func_217()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0;
}

void func_218()
{
	if ((Global_112755 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0) && func_96())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_219()
{
	int iVar0;
	
	if (!iLocal_4)
	{
		if (Global_1836398)
		{
			iVar0 = func_220(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10765 = 1;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1836398)
	{
		iLocal_4 = 0;
	}
}

int func_220(int iParam0)
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

void func_221()
{
	if (!iLocal_3)
	{
		if (Global_1836398)
		{
			if (func_223() || func_222())
			{
				Global_262145.f_20349 = 1;
			}
			else
			{
				Global_262145.f_20349 = 0;
			}
			iLocal_3 = 1;
		}
	}
	else if (!Global_1836398)
	{
		iLocal_3 = 0;
	}
}

int func_222()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_220(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10874)
	{
		return 0;
	}
	uVar1[0] = func_220(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_220(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_220(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_220(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10870 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10874)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_223()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_220(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10873)
	{
		return 0;
	}
	uVar1[0] = func_220(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_220(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_220(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_220(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10869 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10873)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_224()
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			MISC::SET_BIT(&(Global_1853988[iVar0 /*867*/].f_801), true);
			iVar0++;
		}
	}
}

void func_225()
{
	if (Global_262145.f_10849 != 120)
	{
		Global_262145.f_10849 = 120;
	}
}

void func_226()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_227(0.69f, 0.06f, "STRING", sLocal_0);
	}
	if (!iLocal_1)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_2)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
					{
						iLocal_1 = 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_2)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_1 = 0;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

void func_227(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_228()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_229()
{
	Global_112837 = 1;
}

