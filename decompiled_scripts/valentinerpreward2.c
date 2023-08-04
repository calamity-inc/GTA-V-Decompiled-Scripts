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
	int iLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	bool bLocal_497 = 0;
	int iLocal_498 = 0;
	struct<2> Local_499[3];
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.67.06";
	iLocal_20 = -1;
	iLocal_21 = -1;
	iLocal_24 = 10000;
	iLocal_491 = 1;
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
	func_244();
	while (true)
	{
		if (func_243())
		{
			func_241();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692776.f_3)
		{
			func_240();
			func_239();
			func_236();
			func_234();
			func_233();
			func_230();
			func_228();
			func_220();
			func_212();
			func_210();
			func_200();
			func_192();
			func_191();
			func_186();
			func_173();
			func_169();
			func_135();
			func_130();
			func_129();
			func_127();
			func_118();
			func_115();
			func_109();
			func_108();
			func_107();
			func_98();
			func_97();
			func_87();
			func_86();
			func_76();
			func_62();
			func_54();
			func_50();
			func_38();
			func_35();
			func_34();
			func_24();
			func_22();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_21();
			func_20();
			func_9();
			func_8();
			func_6();
			func_5();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	var uVar0;
	var uVar1;
	struct<56> Var2;
	int iVar69;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		return;
	}
	if (Global_4718592.f_117591 != func_4(7))
	{
		return;
	}
	if (Global_4718592.f_118170[56 /*218*/].f_27 == 5)
	{
		return;
	}
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_198190), &(Global_4980736.f_110349[20 /*1098*/]), 1098);
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_110349[20 /*1098*/]), &(Global_4980736.f_110349[5 /*1098*/]), 1098);
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_110349[5 /*1098*/]), &(Global_4980736.f_198190), 1098);
	uVar0 = Global_4718592.f_99800[0 /*4*/][func_3(20)];
	uVar1 = Global_4718592.f_99800[0 /*4*/][func_3(5)];
	if (BitTest(uVar0, func_2(20)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99800[0 /*4*/][func_3(5)]), func_2(5));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99800[0 /*4*/][func_3(5)]), func_2(5));
	}
	if (BitTest(uVar1, func_2(5)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99800[0 /*4*/][func_3(20)]), func_2(20));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99800[0 /*4*/][func_3(20)]), func_2(20));
	}
	uVar0 = Global_4718592.f_99783[0 /*4*/][func_3(20)];
	uVar1 = Global_4718592.f_99783[0 /*4*/][func_3(5)];
	if (BitTest(uVar0, func_2(20)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99783[0 /*4*/][func_3(5)]), func_2(5));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99783[0 /*4*/][func_3(5)]), func_2(5));
	}
	if (BitTest(uVar1, func_2(5)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99783[0 /*4*/][func_3(20)]), func_2(20));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99783[0 /*4*/][func_3(20)]), func_2(20));
	}
	uVar0 = Global_4718592.f_99766[0 /*4*/][func_3(20)];
	uVar1 = Global_4718592.f_99766[0 /*4*/][func_3(5)];
	if (BitTest(uVar0, func_2(20)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99766[0 /*4*/][func_3(5)]), func_2(5));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99766[0 /*4*/][func_3(5)]), func_2(5));
	}
	if (BitTest(uVar1, func_2(5)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99766[0 /*4*/][func_3(20)]), func_2(20));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99766[0 /*4*/][func_3(20)]), func_2(20));
	}
	Var2 = 12;
	Var2.f_37 = 12;
	Var2.f_51 = -1;
	Var2.f_52 = -1;
	Var2.f_53 = -1;
	Var2.f_54 = -1;
	Var2.f_55 = -1;
	Var2.f_55.f_2 = 1065353216;
	Var2.f_55.f_6.f_3 = 1132396544;
	Var2.f_55.f_10 = -1;
	Var2.f_55.f_11 = -1;
	MISC::COPY_SCRIPT_STRUCT(&Var2, &(Global_4980736.f_110349[20 /*1098*/].f_738), 67);
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_110349[20 /*1098*/].f_738), &(Global_4980736.f_110349[5 /*1098*/].f_738), 67);
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_110349[5 /*1098*/].f_738), &Var2, 67);
	iVar69 = 0;
	while (iVar69 < 17)
	{
		uVar0 = Global_4718592.f_1816[0 /*24279*/].f_8986[iVar69 /*81*/][20];
		uVar1 = Global_4718592.f_1816[0 /*24279*/].f_8986[iVar69 /*81*/][5];
		Global_4718592.f_1816[0 /*24279*/].f_8986[iVar69 /*81*/][20] = uVar1;
		Global_4718592.f_1816[0 /*24279*/].f_8986[iVar69 /*81*/][5] = uVar0;
		uVar0 = Global_4718592.f_1816[0 /*24279*/].f_20184[iVar69 /*81*/][20];
		uVar1 = Global_4718592.f_1816[0 /*24279*/].f_20184[iVar69 /*81*/][5];
		Global_4718592.f_1816[0 /*24279*/].f_20184[iVar69 /*81*/][20] = uVar1;
		Global_4718592.f_1816[0 /*24279*/].f_20184[iVar69 /*81*/][5] = uVar0;
		uVar0 = Global_4718592.f_1816[0 /*24279*/].f_21562[iVar69 /*81*/][20];
		uVar1 = Global_4718592.f_1816[0 /*24279*/].f_21562[iVar69 /*81*/][5];
		Global_4718592.f_1816[0 /*24279*/].f_21562[iVar69 /*81*/][20] = uVar1;
		Global_4718592.f_1816[0 /*24279*/].f_21562[iVar69 /*81*/][5] = uVar0;
		iVar69++;
	}
	Global_4718592.f_118170[56 /*218*/].f_27 = 5;
}

int func_2(int iParam0)
{
	return (iParam0 - func_3(iParam0) * 31);
}

int func_3(int iParam0)
{
	return (iParam0 / 31);
}

int func_4(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33952[iParam0];
	}
	return -1;
}

void func_5()
{
	if (Global_4718592.f_117591 == 1327987538)
	{
		if (!BitTest(Global_4718592.f_35, 2))
		{
			MISC::SET_BIT(&(Global_4718592.f_35), 2);
		}
	}
}

void func_6()
{
	if (func_7(Global_4718592.f_117591) == 10)
	{
		if (Global_262145.f_33950)
		{
			Global_262145.f_33950 = 0;
		}
	}
}

int func_7(int iParam0)
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

void func_8()
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

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((Global_262145.f_33952[10] != Global_4718592.f_117591 || Global_1574964) || !Global_1574965)
	{
		func_19();
		return;
	}
	MISC::CLEAR_BIT(&(Global_4718592.f_161355[1 /*566*/].f_18), 7);
	MISC::CLEAR_BIT(&(Global_4718592.f_161355[1 /*566*/].f_18), 29);
	Global_4980736.f_110349[42 /*1098*/].f_944[0] = 3;
	Global_4980736.f_110349[58 /*1098*/].f_944[0] = 3;
	if (Global_1058071.f_14[0] > 7 || Global_1058071.f_14[0] < 6)
	{
		func_18(&iLocal_49);
		return;
	}
	iVar0 = func_16(&iLocal_49);
	iVar1 = 600;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			iVar1 = 900;
		}
	}
	func_15(iVar0);
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar2 = CUTSCENE::GET_CUTSCENE_END_TIME();
		iVar3 = CUTSCENE::GET_CUTSCENE_TIME();
		if (iVar3 >= (iVar2 - 300) && !func_14(&Local_53))
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			func_13(&Local_53, 0, 0);
		}
	}
	else if (func_14(&Local_53) && func_12(Local_53, iVar1, 0))
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		func_11(&Local_53);
		iLocal_48 = 1;
		func_10(iVar0);
	}
}

void func_10(int iParam0)
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

void func_11(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_12(int iParam0, var uParam1, int iParam2, bool bParam3)
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

void func_13(var uParam0, bool bParam1, bool bParam2)
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

bool func_14(var uParam0)
{
	return uParam0->f_1;
}

void func_15(int iParam0)
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

int func_16(int iParam0)
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
		else if (func_17(iParam0, Global_1058071.f_233[iVar0]))
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

int func_17(var uParam0, int iParam1)
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

void func_18(int iParam0)
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
		else if (func_17(iParam0, Global_1058071.f_233[iVar0]))
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

void func_19()
{
	int iVar0;
	
	func_11(&Local_53);
	iLocal_48 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_49[iVar0] = 0;
		iVar0++;
	}
}

void func_20()
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

void func_21()
{
	if ((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) != 0 && Global_262145.f_33952[8] != Global_4718592.f_117591) && !(Global_1574964 || Global_1574965))
	{
		MISC::SET_BIT(&Global_1574994, 29);
	}
}

void func_22()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		iLocal_509 = 0;
		return;
	}
	if (Global_4718592.f_171045 != 6 && Global_4718592.f_171045 != 7)
	{
		return;
	}
	if (iLocal_509)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_110343 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_110349[iVar0 /*1098*/].f_944[iVar1] >= 91)
			{
				func_23(&(Global_4980736.f_110349[iVar0 /*1098*/].f_944[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_91870 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_91874[iVar0 /*529*/].f_52[iVar1] >= 91)
			{
				func_23(&(Global_4980736.f_91874[iVar0 /*529*/].f_52[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_42750 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_42751[iVar0 /*160*/].f_99[iVar1] >= 91)
			{
				func_23(&(Global_4980736.f_42751[iVar0 /*160*/].f_99[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_74915 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_74917[iVar0 /*225*/].f_115[iVar1] >= 91)
			{
				func_23(&(Global_4980736.f_74917[iVar0 /*225*/].f_115[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_219864 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_219865[iVar0 /*178*/].f_100[iVar1] >= 91)
			{
				func_23(&(Global_4980736.f_219865[iVar0 /*178*/].f_100[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_144662 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4718592.f_118170[iVar0 /*218*/].f_195[iVar1] >= 91)
			{
				func_23(&(Global_4718592.f_118170[iVar0 /*218*/].f_195[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_24223 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_24224[iVar0 /*275*/].f_254[iVar1] >= 91)
			{
				func_23(&(Global_4980736.f_24224[iVar0 /*275*/].f_254[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4718592.f_175537[iVar0 /*115*/].f_109[iVar1] >= 91)
			{
				func_23(&(Global_4718592.f_175537[iVar0 /*115*/].f_109[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_199684 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_199691[iVar0 /*66*/].f_60[iVar1] >= 91)
			{
				func_23(&(Global_4980736.f_199691[iVar0 /*66*/].f_60[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (Global_4718592.f_1750 - 1))
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4980736.f_199685[iVar2] - 1))
		{
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				if (Global_4980736.f_203652[iVar2 /*3961*/][iVar0 /*66*/].f_60[iVar1] >= 91)
				{
					func_23(&(Global_4980736.f_203652[iVar2 /*3961*/][iVar0 /*66*/].f_60[iVar1]));
				}
				iVar1++;
			}
			iVar0++;
		}
		iVar2++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_82343 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_82352[iVar0 /*156*/].f_71[iVar1] >= 91)
			{
				func_23(&(Global_4980736.f_82352[iVar0 /*156*/].f_71[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_6201 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_6204[iVar0 /*546*/].f_343[iVar1] >= 91)
			{
				func_23(&(Global_4980736.f_6204[iVar0 /*546*/].f_343[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iLocal_509 = 1;
}

void func_23(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	iVar0 += 5;
	*uParam0 = iVar0;
}

void func_24()
{
	if (func_32())
	{
		if ((PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_31())
		{
			func_30(&uLocal_506, 1, 0);
		}
	}
	if (func_14(&uLocal_506))
	{
		Global_44322 = 1;
		if (func_29(&uLocal_506, 5000, 1))
		{
			func_11(&uLocal_506);
		}
	}
	if ((func_25() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_31())
	{
		if (!iLocal_508)
		{
			NETWORK::NETWORK_SUPPRESS_INVITE(true);
			iLocal_508 = 1;
		}
	}
	else if (iLocal_508)
	{
		NETWORK::NETWORK_SUPPRESS_INVITE(false);
		iLocal_508 = 0;
	}
}

int func_25()
{
	if (func_28(PLAYER::PLAYER_ID()) || func_26())
	{
		return 1;
	}
	return 0;
}

bool func_26()
{
	return func_27() == 1;
}

int func_27()
{
	return Global_1978359;
}

var func_28(int iParam0)
{
	return Global_2657704[iParam0 /*463*/].f_444.f_1;
}

int func_29(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_13(uParam0, bParam2, 0);
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

void func_30(var uParam0, bool bParam1, bool bParam2)
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

bool func_31()
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 != 0;
}

bool func_32()
{
	return func_33("HI_LEAVE") != -1;
}

int func_33(char* sParam0)
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

void func_34()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0 || Global_4718592.f_117591 != Global_262145.f_33923[1])
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			func_11(&(Local_499[iVar0 /*2*/]));
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!ENTITY::IS_ENTITY_ATTACHED(Global_1058071.f_119[iVar0]))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(Global_1058071.f_119[iVar0], true) };
			fVar4 = 0f;
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &fVar4, true, false);
			if ((Var1.f_2 - fVar4) > 1.5f)
			{
				if (!func_14(&(Local_499[iVar0 /*2*/])))
				{
					func_30(&(Local_499[iVar0 /*2*/]), 0, 0);
				}
				else if (func_12(Local_499[iVar0 /*2*/], 3000, 0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1058071.f_119[iVar0]))
					{
						ENTITY::SET_ENTITY_COORDS(Global_1058071.f_119[iVar0], Global_4980736.f_6204[iVar0 /*546*/], true, false, false, true);
						OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(Global_1058071.f_119[iVar0]);
						func_11(&(Local_499[iVar0 /*2*/]));
					}
				}
			}
			else
			{
				func_11(&(Local_499[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
}

void func_35()
{
	if ((!Global_1971297 && func_36(PLAYER::PLAYER_ID())) && !Global_1971295)
	{
		Global_1971295 = 1;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_VEHICLE_SPAWN")) < 1)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(iLocal_498))
		{
			SCRIPT::TERMINATE_THREAD(iLocal_498);
		}
		iLocal_495 = 0;
		iLocal_496 = 0;
		bLocal_497 = false;
		return;
	}
	if (Global_1971295 && !bLocal_497)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(iLocal_498))
		{
			SCRIPT::TERMINATE_THREAD(iLocal_498);
		}
		if (iLocal_495)
		{
			iLocal_495 = 0;
			iLocal_496 = 0;
			bLocal_497 = false;
		}
		else
		{
			return;
		}
	}
	if (iLocal_495 && iLocal_496)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_VEHICLE_REWARD")) >= 0 && SCRIPT::IS_THREAD_ACTIVE(iLocal_498))
		{
			Global_1971295 = 0;
			iLocal_496 = 0;
			bLocal_497 = false;
		}
	}
	if (iLocal_495)
	{
		return;
	}
	if (!Global_1971295 && !bLocal_497)
	{
		bLocal_497 = true;
		iLocal_496 = 0;
		Global_1971295 = 1;
	}
	if (bLocal_497)
	{
		SCRIPT::REQUEST_SCRIPT("AM_MP_VEHICLE_REWARD");
		if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_VEHICLE_REWARD"))
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_VEHICLE_REWARD")) < 1 && !SCRIPT::IS_THREAD_ACTIVE(iLocal_498))
			{
				if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_VEHICLE_REWARD", -1, true, 0))
				{
					iLocal_498 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("AM_MP_VEHICLE_REWARD"), 2050);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_VEHICLE_REWARD");
					iLocal_495 = 1;
					iLocal_496 = 1;
				}
				else if (!Global_1971295)
				{
					Global_1971295 = 1;
				}
			}
			else if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_498))
			{
				if (!Global_1971295)
				{
					Global_1971295 = 1;
				}
			}
		}
	}
}

var func_36(int iParam0)
{
	return func_37(&(Global_2657704[iParam0 /*463*/].f_442), 0);
}

var func_37(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_38()
{
	if (func_45(PLAYER::PLAYER_ID()))
	{
		if (SCRIPT::DOES_SCRIPT_EXIST("appMPJobListNEW") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpjoblistnew")) > 0)
		{
			func_39(0);
		}
	}
}

void func_39(int iParam0)
{
	if (func_44())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_43())
		{
			func_41(1, 1);
		}
		else
		{
			func_41(0, 0);
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
	if (!func_40())
	{
		Global_20500.f_1 = 3;
	}
}

int func_40()
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_42(0))
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

int func_42(int iParam0)
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

bool func_43()
{
	return BitTest(Global_1963795, 5);
}

bool func_44()
{
	return BitTest(Global_1963795, 19);
}

int func_45(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_46(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_46(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_47(Global_2657704[iParam0 /*463*/].f_321.f_7) == 22;
			}
		}
	}
	return 0;
}

int func_47(int iParam0)
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

int func_48(int iParam0, bool bParam1, bool bParam2)
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

int func_49()
{
	return -1;
}

void func_50()
{
	if (func_53(PLAYER::PLAYER_ID()))
	{
		if (func_52() && !func_51())
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) == 863149140)
			{
				func_30(&uLocal_492, 1, 0);
			}
		}
	}
	if (func_14(&uLocal_492))
	{
		if (!Global_4593995)
		{
			Global_4593995 = 1;
		}
		else if (func_29(&uLocal_492, 5000, 1))
		{
			func_11(&uLocal_492);
			Global_4593995 = 0;
		}
	}
	if (Global_1836768.f_78)
	{
		if (!iLocal_494)
		{
			if (!BitTest(Global_1950844.f_2, 27))
			{
				MISC::SET_BIT(&(Global_1950844.f_2), 27);
				iLocal_494 = 1;
			}
		}
	}
	else if (iLocal_494)
	{
		MISC::CLEAR_BIT(&(Global_1950844.f_2), 27);
		iLocal_494 = 0;
	}
}

int func_51()
{
	if (Global_2672524.f_947.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_52()
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

int func_53(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 1, 1))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7 != -1;
		}
		else if ((Global_1575063 && iParam0 == PLAYER::PLAYER_ID()) && func_48(iParam0, 1, 0))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

void func_54()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (func_61(PLAYER::PLAYER_ID()) == 276 && func_59(PLAYER::PLAYER_ID()) == 3)
	{
		if (func_58(PLAYER::PLAYER_ID()))
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
			if (func_57(PLAYER::PLAYER_ID()))
			{
				bVar2 = true;
			}
		}
	}
	if (bVar3)
	{
		func_56(1);
	}
	if (bVar0)
	{
		if (!iLocal_488)
		{
			func_55(1);
			iLocal_488 = 1;
		}
	}
	else if (iLocal_488)
	{
		func_55(0);
		iLocal_488 = 0;
	}
	if (bVar1)
	{
		if (!iLocal_490)
		{
			Global_1950843 = 1;
			iLocal_490 = 1;
		}
	}
	else if (iLocal_490)
	{
		if (Global_1950843)
		{
			Global_1950843 = 0;
		}
		iLocal_490 = 0;
	}
	if (bVar2)
	{
		if (Global_2625764 == 145)
		{
			if (!iLocal_489)
			{
				Global_2625764 = 79;
				iLocal_489 = 1;
			}
		}
	}
	else if (iLocal_489)
	{
		if (Global_2625764 == 79)
		{
			Global_2625764 = 145;
		}
		iLocal_489 = 0;
	}
}

void func_55(bool bParam0)
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

void func_56(int iParam0)
{
	if (func_44())
	{
		return;
	}
	if (!Global_20500.f_1 == 1)
	{
		if (func_42(0))
		{
			func_39(iParam0);
		}
		MISC::SET_BIT(&Global_8371, 2);
	}
}

bool func_57(int iParam0)
{
	return Global_2657704[iParam0 /*463*/].f_272;
}

int func_58(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_47(Global_2657704[iParam0 /*463*/].f_321.f_7) == 23;
			}
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	if (func_60(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

int func_60(int iParam0, int iParam1)
{
	if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0)
{
	if (func_60(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_33;
	}
	return -1;
}

void func_62()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (func_75(91))
	{
		func_30(&uLocal_68, 1, 0);
		bVar1 = true;
	}
	if (!iLocal_486)
	{
		if (func_14(&uLocal_68))
		{
			if (!func_29(&uLocal_68, 60000, 1))
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
							if (!func_73(Global_1586488[iVar0 /*142*/].f_66))
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
				func_11(&uLocal_68);
			}
		}
	}
	else
	{
		bVar1 = true;
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_contact_requests")) <= 0)
		{
			func_11(&uLocal_68);
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
			func_11(&uLocal_68);
		}
	}
	if (!bVar1)
	{
		iVar2 = func_70(5396, -1);
		if (iVar2 == joaat("hauler2") || iVar2 == joaat("phantom3"))
		{
			if (Global_1586488[158 /*142*/].f_66 == 0)
			{
				Global_1586488[158 /*142*/].f_66 = iVar2;
				func_64(158, 158, -1);
			}
		}
	}
	if (iLocal_487 >= 0 && iLocal_487 < 415)
	{
		if ((!BitTest(Global_1586488[iLocal_487 /*142*/].f_103, 2) && Global_1586488[iLocal_487 /*142*/].f_66 != 0) && func_63(Global_1586488[iLocal_487 /*142*/].f_66))
		{
			MISC::SET_BIT(&(Global_1586488[iLocal_487 /*142*/].f_103), 2);
			if (iVar0 == 0)
			{
				if (!BitTest(Global_1586488[iLocal_487 /*142*/].f_103, 15))
				{
					MISC::SET_BIT(&(Global_1586488[iLocal_487 /*142*/].f_103), 15);
				}
			}
		}
	}
	iLocal_487++;
	if (iLocal_487 >= 415)
	{
		iLocal_487 = 0;
	}
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("coquette"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt2"):
		case joaat("rapidgt"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("vacca"):
		case joaat("ztype"):
		case joaat("akuma"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("elegy2"):
		case joaat("khamelion"):
		case joaat("hotknife"):
		case joaat("carbonrs"):
		case joaat("voltic"):
		case joaat("comet2"):
		case joaat("surano"):
		case joaat("banshee"):
		case joaat("blazer3"):
		case joaat("jester"):
		case joaat("massacro"):
		case joaat("turismor"):
		case joaat("zentorno"):
		case joaat("huntley"):
		case joaat("alpha"):
		case joaat("paradise"):
		case joaat("bifta"):
		case joaat("kalahari"):
		case joaat("btype"):
		case joaat("thrust"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("coquette2"):
		case joaat("monster"):
		case joaat("sovereign"):
		case joaat("innovation"):
		case joaat("hakuchou"):
		case joaat("furoregt"):
		case joaat("boxville4"):
		case joaat("casco"):
		case joaat("dinghy3"):
		case joaat("enduro"):
		case joaat("gburrito2"):
		case joaat("guardian"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kuruma"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("mule3"):
		case joaat("savage"):
		case joaat("technical"):
		case joaat("valkyrie"):
		case joaat("velum2"):
		case joaat("blista2"):
		case joaat("dodo"):
		case joaat("dukes"):
		case joaat("marshall"):
		case joaat("stalion"):
		case joaat("submersible2"):
		case joaat("blista3"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
		case joaat("dominator2"):
		case joaat("dukes2"):
		case joaat("gauntlet2"):
		case joaat("stalion2"):
		case joaat("blimp2"):
		case joaat("jester2"):
		case joaat("massacro2"):
		case joaat("ratloader2"):
		case joaat("slamvan"):
		case joaat("barracks3"):
		case joaat("slamvan2"):
		case joaat("brawler"):
		case joaat("chino"):
		case joaat("coquette3"):
		case joaat("feltzer3"):
		case joaat("luxor2"):
		case joaat("osiris"):
		case joaat("swift2"):
		case joaat("t20"):
		case joaat("toro"):
		case joaat("vindicator"):
		case joaat("virgo"):
		case joaat("windsor"):
		case joaat("faction"):
		case joaat("moonbeam"):
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("btype2"):
		case joaat("lurcher"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("virgo3"):
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("baller5"):
		case joaat("baller6"):
		case joaat("cog55"):
		case joaat("cog552"):
		case joaat("cognoscenti"):
		case joaat("cognoscenti2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter5"):
		case joaat("schafter4"):
		case joaat("schafter6"):
		case joaat("verlierer2"):
		case joaat("tampa"):
		case joaat("banshee2"):
		case joaat("sultanrs"):
		case joaat("btype3"):
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
		case joaat("le7b"):
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("contender"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("tyrus"):
		case joaat("sheava"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("lynx"):
		case joaat("avarus"):
		case joaat("blazer4"):
		case joaat("chimera"):
		case joaat("daemon2"):
		case joaat("defiler"):
		case joaat("esskey"):
		case joaat("faggio3"):
		case joaat("faggio"):
		case joaat("hakuchou2"):
		case joaat("manchez"):
		case joaat("nightblade"):
		case joaat("raptor"):
		case joaat("ratbike"):
		case joaat("sanctus"):
		case joaat("shotaro"):
		case joaat("tornado6"):
		case joaat("vortex"):
		case joaat("wolfsbane"):
		case joaat("youga2"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("comet2"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("elegy2"):
		case joaat("elegy"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("italigtb2"):
		case joaat("nero"):
		case joaat("nero2"):
		case joaat("penetrator"):
		case joaat("specter"):
		case joaat("specter2"):
		case joaat("tempesta"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("ruiner3"):
		case joaat("technical2"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("gp1"):
		case joaat("infernus2"):
		case joaat("ruston"):
		case joaat("turismo2"):
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("cyclone"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("visione"):
		case joaat("vigilante"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("barrage"):
		case joaat("volatol"):
		case joaat("comet4"):
		case joaat("neon"):
		case joaat("streiter"):
		case joaat("sentinel3"):
		case joaat("yosemite"):
		case joaat("sc1"):
		case joaat("autarch"):
		case joaat("gt500"):
		case joaat("hustler"):
		case joaat("revolter"):
		case joaat("pariah"):
		case joaat("raiden"):
		case joaat("savestra"):
		case joaat("riata"):
		case joaat("hermes"):
		case joaat("comet5"):
		case joaat("z190"):
		case joaat("viseris"):
		case joaat("kamacho"):
		case joaat("gb200"):
		case joaat("fagaloa"):
		case joaat("ellie"):
		case joaat("issi3"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("speedo4"):
		case joaat("oppressor2"):
		case joaat("scramjet"):
		case joaat("freecrawler"):
		case joaat("menacer"):
		case joaat("patriot2"):
		case joaat("stafford"):
		case joaat("swinger"):
		case joaat("terbyte"):
		case joaat("strikeforce"):
		case joaat("pbus2"):
		case joaat("blimp3"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("rcbandito"):
		case joaat("zr380"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("jugular"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("stryder"):
		case joaat("retinue2"):
		case joaat("formula2"):
		case joaat("yosemite2"):
		case joaat("furia"):
		case joaat("gauntlet5"):
		case joaat("club"):
		case joaat("dukes3"):
		case joaat("yosemite3"):
		case joaat("peyote3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("coquette4"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("alkonost"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("kosatka"):
		case joaat("toreador"):
		case joaat("italirsx"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("annihilator2"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("astron"):
		case joaat("baller7"):
		case joaat("buffalo4"):
		case joaat("comet7"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("ignus"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("cinquemila"):
		case joaat("reever"):
		case joaat("shinobi"):
		case joaat("iwagen"):
		case joaat("brioso3"):
		case joaat("corsita"):
		case joaat("draugur"):
		case joaat("greenwood"):
		case joaat("kanjosj"):
		case joaat("lm87"):
		case joaat("postlude"):
		case joaat("rhinehart"):
		case joaat("sm722"):
		case joaat("tenf"):
		case joaat("tenf2"):
		case joaat("torero2"):
		case joaat("vigero2"):
		case joaat("weevil2"):
		case joaat("ruiner4"):
		case joaat("sentinel4"):
		case joaat("omnisegt"):
		case joaat("manchez3"):
		case joaat("brickade2"):
		case joaat("eudora"):
		case joaat("powersurge"):
		case joaat("surfer3"):
		case joaat("journey2"):
		case joaat("entity3"):
		case joaat("panthere"):
		case joaat("boor"):
		case joaat("everon2"):
		case joaat("tulip2"):
		case joaat("r300"):
		case joaat("virtue"):
		case joaat("issi8"):
		case joaat("broadway"):
		case joaat("tahoma"):
		case joaat("conada2"):
		case joaat("gauntlet6"):
		case joaat("brigham"):
		case joaat("clique2"):
		case joaat("l35"):
		case joaat("ratel"):
		case joaat("stingertt"):
		case joaat("buffalo5"):
		case joaat("streamer216"):
		case joaat("monstrociti"):
		case joaat("coureur"):
		case joaat("speedo5"):
		case joaat("raiju"):
		case joaat("inductor"):
		case joaat("inductor2"):
			return 1;
			break;
	}
	return 0;
}

void func_64(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_66(iParam0, iParam1, iParam2);
	if (iParam0 >= 415)
	{
		return;
	}
	if (iParam2 == func_65() || iParam2 == -1)
	{
		Global_1945123[iParam0] = iParam1;
	}
}

int func_65()
{
	return Global_1574918;
}

void func_66(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_68(func_69(iParam0), iParam1, iParam2);
		func_68(func_67(iParam0), 0, iParam2);
	}
	else
	{
		func_68(func_69(iParam0), 255, iParam2);
		func_68(func_67(iParam0), (iParam1 - 255), iParam2);
	}
}

int func_67(int iParam0)
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

void func_68(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_65();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_69(int iParam0)
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

int func_70(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_71(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_71(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_72(uParam1));
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_65();
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

int func_73(int iParam0)
{
	if (func_74(iParam0))
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

int func_74(int iParam0)
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

int func_75(int iParam0)
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

void func_76()
{
	int iVar0;
	int iVar1;
	
	if (func_84(PLAYER::PLAYER_ID()))
	{
		if (!func_83())
		{
			if (func_82())
			{
				iVar0 = func_33("OFF_SEAT_RGSIT0");
				StringCopy(&(Global_44123[iVar0 /*32*/].f_8), "MPJAC_SIT", 16);
			}
		}
	}
	else if (func_80(PLAYER::PLAYER_ID()))
	{
		if (!func_78())
		{
			if (func_77())
			{
				iVar1 = func_33("CLB_SEAT_RGSIT0");
				StringCopy(&(Global_44123[iVar1 /*32*/].f_8), "MPJAC_SIT", 16);
			}
		}
	}
}

bool func_77()
{
	return func_33("CLB_SEAT_RGSIT0") != -1;
}

bool func_78()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!func_79(PLAYER::PLAYER_PED_ID()))
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

int func_79(int iParam0)
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

int func_80(int iParam0)
{
	if (func_81(Global_1853988[iParam0 /*867*/].f_267.f_33, -1))
	{
		return 1;
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
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

bool func_82()
{
	return func_33("OFF_SEAT_RGSIT0") != -1;
}

bool func_83()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!func_79(PLAYER::PLAYER_PED_ID()))
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

int func_84(int iParam0)
{
	if (func_85(Global_1853988[iParam0 /*867*/].f_267.f_33))
	{
		return 1;
	}
	return 0;
}

int func_85(int iParam0)
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

void func_86()
{
	if (Global_2672524.f_947.f_6 >= 0)
	{
		if (Global_2766622 == 54 || Global_2766622 == 27)
		{
			if (Global_2766716.f_7729 == 0)
			{
				if (HUD::IS_PAUSE_MENU_ACTIVE() || !func_48(PLAYER::PLAYER_ID(), 1, 1))
				{
					Global_2766625 = 1;
					if (Global_1574582.f_1)
					{
						Global_1574582.f_1 = 0;
						Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_9 = 0;
						if (func_48(PLAYER::PLAYER_ID(), 1, 0))
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

void func_87()
{
	if (func_96(PLAYER::PLAYER_ID()) && Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_10 == PLAYER::PLAYER_ID())
	{
		if ((!iLocal_65 && !func_95()) && ((((func_31() || func_94()) || func_93()) || func_92()) || func_91()))
		{
			if (Global_2694610)
			{
				func_30(&Local_66, 1, 0);
			}
			else
			{
				Global_2694610 = 1;
				iLocal_65 = 1;
				func_13(&Local_66, 1, 0);
			}
		}
		else if (iLocal_65 && ((func_95() || func_90(Local_66, 1500, 1)) || func_88()))
		{
			Global_2694610 = 0;
			iLocal_65 = 0;
			func_11(&Local_66);
		}
	}
	if ((iLocal_65 && Global_2694610) && !func_53(PLAYER::PLAYER_ID()))
	{
		Global_2694610 = 0;
		iLocal_65 = 0;
		func_11(&Local_66);
	}
}

int func_88()
{
	if (func_89())
	{
		return Global_1950844.f_530 == 0;
	}
	return 0;
}

bool func_89()
{
	return Global_1950844.f_529;
}

int func_90(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_14(&iParam0))
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

var func_91()
{
	return BitTest(Global_1048576.f_10, 18);
}

var func_92()
{
	return Global_2672524.f_3575;
}

bool func_93()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

var func_94()
{
	return Global_1836768.f_78;
}

bool func_95()
{
	return Global_1575063;
}

int func_96(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_47(Global_2657704[iParam0 /*463*/].f_321.f_7) == 24;
			}
		}
	}
	return 0;
}

void func_97()
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
	if (func_7(Global_4718592.f_117591) != 4)
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

void func_98()
{
	bool bVar0;
	int iVar1;
	
	if (!func_105(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (((((func_48(PLAYER::PLAYER_ID(), 1, 1) && func_104(PLAYER::PLAYER_ID())) && func_103(PLAYER::PLAYER_ID())) && !func_102(PLAYER::PLAYER_ID())) && !func_101(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_IN())
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
			func_100(0);
			func_99(0, -1, 1);
		}
	}
}

void func_99(bool bParam0, int iParam1, bool bParam2)
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

void func_100(bool bParam0)
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

int func_101(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_49())
			{
				return func_47(Global_2657704[iParam0 /*463*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_102(int iParam0)
{
	if (iParam0 != func_49())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_307, 30);
	}
	return 0;
}

int func_103(int iParam0)
{
	if (iParam0 != func_49())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_6, 21);
	}
	return 0;
}

int func_104(int iParam0)
{
	if (iParam0 != func_49())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_307, 12);
	}
	return 0;
}

bool func_105(int iParam0)
{
	return func_106(iParam0);
}

int func_106(int iParam0)
{
	if (iParam0 != func_49())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_299, 1);
	}
	return 0;
}

void func_107()
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

void func_108()
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

void func_109()
{
	if (func_114())
	{
		return;
	}
	if (!func_112())
	{
		return;
	}
	if (!func_110())
	{
		return;
	}
	if (!func_105(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if ((Global_1945123[190] - 1) != 190)
	{
		Global_1945123[190] = 191;
	}
}

int func_110()
{
	if (func_111() == 0)
	{
		return 1;
	}
	return 0;
}

int func_111()
{
	return Global_1574632.f_18;
}

int func_112()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_113()) > 0 && Global_1574666 == 2)
	{
		return 1;
	}
	return 0;
}

int func_113()
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_114()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_115()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (((!iLocal_60 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_SMPL_INTERIOR_EXT")) > 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", 81, false, 0)) && INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1103.562f, -3000f, -40f, "gr_grdlc_int_01") == 0)
	{
		if ((!func_117(PLAYER::PLAYER_ID(), 1, 1) && !func_89()) && !func_116(PLAYER::PLAYER_ID()))
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

int func_116(int iParam0)
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

int func_117(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_49())
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

void func_118()
{
	if (func_125(PLAYER::PLAYER_ID()) != 2)
	{
		return;
	}
	if (Global_2794162.f_6788 < 6)
	{
		return;
	}
	func_119(930, 1);
}

void func_119(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0 || !func_120(iParam0))
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

bool func_120(int iParam0)
{
	return func_121(iParam0, PLAYER::PLAYER_ID());
}

int func_121(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 != func_49() && func_48(iParam1, 0, 1))
	{
		if (Global_1956878.f_5818.f_3 != 0)
		{
			return 1;
		}
		if (iParam0 != 0)
		{
			iVar0 = iParam1;
			if (func_123(iParam1, 1))
			{
				iVar0 = func_122(iParam1);
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

int func_122(int iParam0)
{
	if (iParam0 != func_49())
	{
		return Global_1895156[iParam0 /*609*/].f_10;
	}
	return func_49();
}

bool func_123(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_124(iParam0))
		{
			return 0;
		}
	}
	return Global_1895156[iParam0 /*609*/].f_10 != func_49();
}

int func_124(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_49())
		{
			return Global_1895156[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_125(int iParam0)
{
	if (func_61(iParam0) == 317)
	{
		return func_126(iParam0, 317);
	}
	return -1;
}

int func_126(int iParam0, int iParam1)
{
	if (func_61(iParam0) == iParam1)
	{
		return func_59(iParam0);
	}
	return -1;
}

void func_127()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_125(PLAYER::PLAYER_ID()) != 2)
	{
		return;
	}
	if (!func_79(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!func_79(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (((iVar1 != joaat("cargobob") && iVar1 != joaat("cargobob2")) && iVar1 != joaat("cargobob3")) && iVar1 != joaat("cargobob4"))
	{
		return;
	}
	if (func_128(PLAYER::PLAYER_PED_ID(), 1) != -1)
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
		if (func_79(iVar2) && ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
		{
			VEHICLE::SET_CARGOBOB_FORCE_DONT_DETACH_VEHICLE(iVar0, false);
			VEHICLE::DETACH_ENTITY_FROM_CARGOBOB(iVar0, iVar2);
		}
	}
}

int func_128(int iParam0, bool bParam1)
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

void func_129()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (func_125(PLAYER::PLAYER_ID()) != 0)
	{
		bVar0 = false;
	}
	if (Global_2794162.f_6788 != 9)
	{
		bVar0 = false;
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		bVar0 = false;
	}
	if (!func_79(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = false;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar0 = false;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!func_79(iVar1))
		{
			bVar0 = false;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iVar1) != joaat("toreador"))
		{
			bVar0 = false;
		}
		else if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (func_128(PLAYER::PLAYER_PED_ID(), 1) == -1)
	{
		bVar0 = false;
	}
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1115.654f, -2273.433f, 28.89841f, 1115.247f, -2278.109f, 30.92747f, 3f, false, true, 0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (!func_14(&uLocal_58))
		{
			func_13(&uLocal_58, 0, 0);
		}
		else if (func_29(&uLocal_58, 10000, 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
		}
	}
	else if (func_14(&uLocal_58))
	{
		func_11(&uLocal_58);
	}
}

void func_130()
{
	if (!iLocal_57)
	{
		if ((func_46(PLAYER::PLAYER_ID()) && BitTest(Global_1950844.f_8, 25)) && func_132() != PLAYER::PLAYER_ID())
		{
			iLocal_57 = 1;
		}
	}
	else
	{
		if (!func_46(PLAYER::PLAYER_ID()))
		{
			iLocal_57 = 0;
			MISC::CLEAR_BIT(&(Global_1950844.f_8), 25);
			return;
		}
		if (((func_131() && Global_1950837 != 3) && !MISC::ARE_STRINGS_EQUAL(&(Global_23390.f_1), "CMOD_MOD_E")) && !Global_1950844.f_3432)
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

var func_131()
{
	return BitTest(Global_78938, 8);
}

int func_132()
{
	return func_133(PLAYER::PLAYER_ID());
}

int func_133(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_49())
	{
		return iParam0;
	}
	if (func_134(iParam0) != -1)
	{
		iVar0 = func_47(func_134(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_123(iParam0, 0))
			{
				return func_122(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_49();
		}
		return Global_2657704[iParam0 /*463*/].f_321.f_10;
	}
	return func_49();
}

int func_134(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 1, 1))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
		else if (((Global_1575063 || Global_2635560.f_2780) && iParam0 == PLAYER::PLAYER_ID()) && func_48(iParam0, 1, 0))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
	}
	return -1;
}

void func_135()
{
	struct<4> Var0;
	struct<4> Var4;
	struct<16> Var8;
	
	if (((Global_2766625 || ((func_48(PLAYER::PLAYER_ID(), 1, 1) && func_110()) && !iLocal_55)) || func_168(17)) || iLocal_56)
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
		else if (func_168(17))
		{
			iLocal_56 = 1;
		}
		if (func_124(PLAYER::PLAYER_ID()))
		{
			iLocal_56 = 0;
			Var8 = { func_164() };
			if (func_163(&Var8, Var0) || func_163(&Var8, Var4))
			{
				if (func_162(PLAYER::PLAYER_ID()))
				{
					func_148(&Var8, 0, 1);
				}
				else
				{
					func_148(&Var8, 1, 1);
				}
				func_146();
			}
		}
		if (func_145(PLAYER::PLAYER_ID()))
		{
			StringCopy(&Var8, func_139(PLAYER::PLAYER_ID()), 64);
			if (func_163(&Var8, Var0) || func_163(&Var8, Var4))
			{
				func_136(Var8);
			}
		}
	}
}

void func_136(char[64] cParam0)
{
	func_137(55, 56, &cParam0, -1, 1);
	Global_1914706[PLAYER::PLAYER_ID() /*299*/].f_283 = { cParam0 };
}

void func_137(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar10[32];
	int iVar18;
	int iVar19;
	
	iVar0 = func_138(iParam0, iParam3);
	iVar1 = func_138(iParam1, iParam3);
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

var func_138(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(3, uParam0, func_72(uParam1));
}

char* func_139(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("DEFAULT_LAB_N");
	if (iParam0 == func_49())
	{
		return sVar0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_144(&(Global_1914706[iParam0 /*299*/].f_283));
		return sVar0;
	}
	if (Global_1895156[iParam0 /*609*/].f_10.f_121 != Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121)
	{
		return sVar0;
	}
	if (func_143(iParam0, 28) || (func_143(PLAYER::PLAYER_ID(), 28) && !func_141(iParam0)))
	{
		return sVar0;
	}
	iVar1 = func_122(iParam0);
	if (iVar1 != func_49())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!func_140() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return sVar0;
			}
		}
	}
	if (iVar1 != func_49())
	{
		sVar0 = func_144(&(Global_1914706[iVar1 /*299*/].f_283));
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

bool func_140()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_141(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_142(iParam0) };
	if (func_140())
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

struct<13> func_142(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

var func_143(int iParam0, int iParam1)
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

var func_144(var uParam0)
{
	return uParam0;
}

int func_145(int iParam0)
{
	if (iParam0 == func_49())
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_479, 14);
}

void func_146()
{
	int iVar0;
	struct<2> Var1;
	
	Var1.f_0 = 2103624094;
	Var1.f_1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0] != func_49())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0]))
			{
				SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var1, 2, func_147(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0]));
			}
		}
		iVar0++;
	}
}

var func_147(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

void func_148(char* sParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_158(1) || iParam1 == 0)
		{
			func_137(47, 48, sParam0, -1, 1);
			if (func_157() && iParam1 == 0)
			{
				func_156(sParam0, bParam2);
			}
		}
		else
		{
			func_137(119, 121, sParam0, -1, 1);
			if (func_155() && iParam1 == 1)
			{
				func_153(sParam0, bParam2);
			}
		}
	}
	StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_105), sParam0, 64);
	Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121 = LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();
	if ((!func_140() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_151())
	{
		func_150(28);
	}
	else
	{
		func_149(28);
	}
}

void func_149(bool bParam0)
{
	MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}

void func_150(bool bParam0)
{
	MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}

int func_151()
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	if (func_152())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	else if (func_140())
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

bool func_152()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_153(char* sParam0, bool bParam1)
{
	struct<16> Var0;
	
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_137(45, 46, sParam0, -1, 1);
			Var0 = { func_154(119, 121, -1) };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				func_137(119, 121, sParam0, -1, 1);
			}
		}
	}
	if ((!func_140() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_151())
	{
		func_150(28);
	}
	else
	{
		func_149(28);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_339), sParam0, 64);
	}
}

struct<16> func_154(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	char cVar18[32];
	
	iVar0 = func_138(iParam0, iParam2);
	iVar1 = func_138(iParam1, iParam2);
	StringCopy(&Var2, STATS::STAT_GET_STRING(iVar0, -1), 64);
	StringCopy(&cVar18, STATS::STAT_GET_STRING(iVar1, -1), 32);
	StringConCat(&Var2, &cVar18, 64);
	return Var2;
}

int func_155()
{
	return func_124(PLAYER::PLAYER_ID());
}

void func_156(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_137(49, 50, sParam0, -1, 1);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_355), sParam0, 64);
	}
	if ((!func_140() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_151())
	{
		func_150(28);
	}
	else
	{
		func_149(28);
	}
}

bool func_157()
{
	return func_162(PLAYER::PLAYER_ID());
}

bool func_158(bool bParam0)
{
	return func_159(PLAYER::PLAYER_ID(), bParam0);
}

bool func_159(int iParam0, bool bParam1)
{
	return func_160(iParam0, bParam1, 1);
}

int func_160(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_49())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_161(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1895156[iParam0 /*609*/].f_10;
	if (iVar0 != func_49() && Global_1895156[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0, int iParam1)
{
	if (iParam0 != func_49())
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_49())
		{
			if (Global_1895156[iParam0 /*609*/].f_10 == iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_162(int iParam0)
{
	return func_161(iParam0, 1);
}

int func_163(char* sParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4)
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

struct<16> func_164()
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = func_122(PLAYER::PLAYER_ID());
	if (iVar0 != func_49())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_143(iVar0, 28) || func_143(PLAYER::PLAYER_ID(), 28)) || func_167(iVar0)) && !func_141(iVar0))
			{
				StringCopy(&Var1, func_165(iVar0, 0), 64);
				return Var1;
			}
			if (!func_140() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				StringCopy(&Var1, func_165(iVar0, 0), 64);
				return Var1;
			}
		}
		return Global_1895156[iVar0 /*609*/].f_10.f_105;
	}
	StringCopy(&Var1, "", 64);
	return Var1;
}

char* func_165(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_159(iParam0, 1))
		{
			return func_166();
		}
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC");
}

char* func_166()
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM");
}

int func_167(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_49())
	{
		Var0 = { func_142(iParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_140() || MISC::IS_PROSPERO_VERSION())
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

bool func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2794162.f_5231.f_7[iVar0], iVar1);
}

void func_169()
{
	if (((func_172() == 3 && func_171()) && func_31()) && func_170(Global_4718592.f_117591))
	{
		NETWORK::NETWORK_BAIL(51, 0, 0);
	}
}

int func_170(int iParam0)
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

var func_171()
{
	return BitTest(Global_2684820.f_1.f_2809, 5);
}

int func_172()
{
	return Global_1057409;
}

void func_173()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar49;
	float fVar50;
	struct<3> Var51;
	
	if (func_14(&uLocal_14))
	{
		MISC::SET_BIT(&Global_8371, 2);
		if (func_29(&uLocal_14, 60000, 0))
		{
			func_30(&uLocal_14, 0, 0);
			func_11(&uLocal_14);
		}
	}
	if (func_14(&uLocal_12) && func_29(&uLocal_12, 1000, 0))
	{
		if (iLocal_21 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_21 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_21, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_29(&uLocal_12, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_21))
			{
				AUDIO::STOP_SOUND(iLocal_21);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_21);
			iLocal_21 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_30(&uLocal_12, 0, 0);
			func_11(&uLocal_12);
		}
	}
	if (!iLocal_6 && !func_181())
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
			iVar1 = func_70(7869, -1);
			func_180(7869, iVar1 + 1, -1, 1);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&Var2);
			Local_16 = { ENTITY::GET_ENTITY_COORDS(iLocal_5, false) };
			iLocal_19 = 0;
		}
	}
	else
	{
		func_179();
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
				if (func_29(&uLocal_8, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_5, false);
					func_30(&uLocal_8, 0, 0);
					func_11(&uLocal_8);
					func_13(&uLocal_10, 0, 0);
					iLocal_7 = 1;
				}
			}
			else
			{
				fVar49 = (SYSTEM::TO_FLOAT(func_178(&uLocal_10, 0, 0)) / SYSTEM::TO_FLOAT(func_177()));
				fVar50 = (SYSTEM::TO_FLOAT(func_178(&uLocal_8, 0, 0)) / SYSTEM::TO_FLOAT(func_176()));
				fVar50 = (fVar50 * fVar49);
				Var51 = { func_174(Local_16, func_175(), fVar50) };
				ENTITY::SET_ENTITY_COORDS(iLocal_5, Var51, true, false, false, true);
				if (fVar50 >= 1f)
				{
					iLocal_19++;
					Local_16 = { ENTITY::GET_ENTITY_COORDS(iLocal_5, false) };
					func_30(&uLocal_8, 0, 0);
					func_11(&uLocal_8);
					if (func_176() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_5);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_20))
						{
							AUDIO::STOP_SOUND(iLocal_20);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_20);
						iLocal_20 = -1;
						func_13(&uLocal_12, 0, 0);
						func_13(&uLocal_14, 0, 0);
						func_30(&uLocal_10, 0, 0);
						func_11(&uLocal_10);
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

Vector3 func_174(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_175()
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

int func_176()
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

int func_177()
{
	return 3150;
}

int func_178(var uParam0, bool bParam1, bool bParam2)
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

void func_179()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_5, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_5, Var0, 2, true);
}

void func_180(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_71(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_181()
{
	if (((((((func_185(22107, -1) && Global_2639889 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_184(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2684820.f_3076.f_178 >= 1) && Global_2684820.f_3076.f_178 < 4) && func_183()) && func_182())
	{
		return 1;
	}
	return 0;
}

int func_182()
{
	if (func_185(15476, -1) && func_70(5453, func_65()) > 577)
	{
		return 1;
	}
	return 0;
}

int func_183()
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

bool func_184(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

bool func_185(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_65();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_186()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		func_189();
	}
	else
	{
		func_187();
	}
}

void func_187()
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
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_188(bVar0), false);
			MISC::CLEAR_BIT(&iLocal_46, bVar0);
		}
		bVar0++;
	}
	iLocal_47 = 0;
	Global_2766715 = 0;
}

char* func_188(bool bParam0)
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

void func_189()
{
	int iVar0;
	bool bVar1;
	
	if (!func_190(Global_4718592.f_117591))
	{
		return;
	}
	iVar0 = func_70(9877, -1);
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
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_188(bVar1), true);
		}
		if (BitTest(iVar0, bVar1) && !BitTest(iLocal_46, bVar1))
		{
			MISC::SET_BIT(&iLocal_46, bVar1);
			Global_2766715 = 1;
		}
		bVar1++;
	}
}

int func_190(int iParam0)
{
	if ((iParam0 == Global_262145.f_31929[0] || iParam0 == Global_262145.f_31929[1]) || iParam0 == Global_262145.f_31929[2])
	{
		return 1;
	}
	return 0;
}

void func_191()
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

void func_192()
{
	int iVar0;
	
	if (func_31() && func_199(Global_4718592.f_171044))
	{
		if (func_198() == 26)
		{
			iVar0 = func_193();
			if (iVar0 != -1)
			{
				if (func_14(&(Global_1890739[iVar0 /*138*/].f_31)))
				{
					if (func_29(&(Global_1890739[iVar0 /*138*/].f_31), 37500, 0))
					{
						iLocal_44 = 1;
						Global_2684820.f_6341 = -1;
					}
				}
			}
		}
		else if (func_198() == 41)
		{
			if (iLocal_44)
			{
				iLocal_44 = 0;
				Global_2684820.f_6341 = -1;
			}
		}
	}
}

int func_193()
{
	return func_194();
}

int func_194()
{
	struct<13> Var0;
	
	Var0 = { func_196() };
	if (func_195(Var0))
	{
		return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
	}
	return func_49();
}

bool func_195(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> func_196()
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_197(iVar0))
		{
			return Global_2684820.f_1.f_845[iVar0 /*57*/];
		}
		iVar0++;
	}
	return Var1;
}

bool func_197(int iParam0)
{
	return BitTest(Global_2684820.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

int func_198()
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192;
}

bool func_199(int iParam0)
{
	return iParam0 == 88;
}

void func_200()
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_262145.f_33923[0] == Global_4718592.f_117591) && (Global_1058071.f_14[0] >= 4 || Global_1058071.f_14[0] <= 6))
	{
		Var0 = { func_203(101) };
		bVar3 = OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 2961.077f, 2743.28f, 40.7426f, 2957.497f, 2756.674f, 45.11757f, 15f, false, true);
		if (!func_202())
		{
			if (bVar3 || Global_1058071.f_14[0] == 5)
			{
				iVar5 = func_201(&iVar4);
				if (((iVar4 >= 0 && iVar4 < 4) && iVar5 >= 0) || iVar5 < 17)
				{
					MISC::SET_BIT(&(Global_4718592.f_1816[iVar4 /*24279*/].f_8212[iVar5]), 12);
				}
			}
		}
		else if ((!bVar3 && Global_1058071.f_14[0] < 5) || Global_1058071.f_14[0] > 5)
		{
			iVar7 = func_201(&iVar6);
			if (((iVar6 >= 0 && iVar6 < 4) && iVar7 >= 0) || iVar7 < 17)
			{
				MISC::CLEAR_BIT(&(Global_4718592.f_1816[iVar6 /*24279*/].f_8212[iVar7]), 12);
			}
		}
	}
}

var func_201(var uParam0)
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

int func_202()
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	iVar1 = func_201(&iVar0);
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

Vector3 func_203(int iParam0)
{
	switch (iParam0)
	{
		case 101:
			return func_204();
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_204()
{
	struct<3> Var0;
	int iVar3;
	var uVar4;
	
	Var0 = { 0f, 0f, 0f };
	iVar3 = func_205();
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

var func_205()
{
	int iVar0;
	var uVar1[25];
	int iVar27;
	int iVar28;
	var uVar29[25];
	int iVar55;
	
	if (func_123(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() != func_209())
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
								if (VEHICLE::IS_VEHICLE_MODEL(uVar1[iVar0], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(uVar1[iVar0], func_208(1)))
								{
									if (func_206(uVar1[iVar0]) == func_209())
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
	else if (PLAYER::PLAYER_ID() == func_209() && !ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310))
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
						if (VEHICLE::IS_VEHICLE_MODEL(uVar29[iVar28], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(uVar29[iVar28], func_208(1)))
						{
							if (func_206(uVar29[iVar28]) == PLAYER::PLAYER_ID())
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

int func_206(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, func_208(1)))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "Creator_Trailer"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Creator_Trailer");
					return func_207(iVar0, 0, 1, 0);
				}
			}
		}
	}
	return func_49();
}

int func_207(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_48(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_48(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_49();
}

int func_208(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_209()
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}

void func_210()
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
	if (((((((((!func_79(PLAYER::PLAYER_PED_ID()) || !func_48(PLAYER::PLAYER_ID(), 1, 1)) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) || !func_110()) || func_211(PLAYER::PLAYER_ID())) || func_116(PLAYER::PLAYER_ID())) || func_53(PLAYER::PLAYER_ID())) || Global_2672524.f_3542) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_79(iVar0))
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

int func_211(int iParam0)
{
	if (iParam0 != func_49() && func_48(iParam0, 1, 1))
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321, 3);
	}
	return 0;
}

void func_212()
{
	var uVar0;
	
	if (iLocal_29)
	{
		if ((((((func_219() == -1 && func_218() == 999) && func_110()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !CAM::IS_SCREEN_FADING_OUT())
		{
			iLocal_29 = 0;
			func_217(0);
			STATS::STAT_SET_BLOCK_SAVES(false);
			func_214();
		}
	}
	if (!iLocal_28)
	{
		NETWORK::NETWORK_GET_LOCAL_HANDLE(&Local_30, 13);
		if (func_195(Local_30))
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
			if (!func_213())
			{
				func_217(1);
				iLocal_29 = 1;
			}
			iLocal_28 = 0;
		}
	}
}

bool func_213()
{
	return Global_32561;
}

void func_214()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_215(0, iVar0);
		STATS::STAT_CLEAR_SLOT_FOR_RELOAD(iVar0);
		iVar0++;
	}
	STATS::FORCE_CLOUD_MP_STATS_DOWNLOAD_AND_OVERWRITE_LOCAL_SAVE();
}

void func_215(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		func_216();
	}
	Global_1574538[iParam1] = iParam0;
}

void func_216()
{
	Global_2694561 = 0;
}

void func_217(int iParam0)
{
	Global_32561 = iParam0;
}

int func_218()
{
	return Global_32284;
}

int func_219()
{
	return Global_32283;
}

void func_220()
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
				else if (Global_2359296[func_227() /*5568*/].f_681.f_2 != iLocal_27)
				{
					if (!func_14(&uLocal_25))
					{
						func_13(&uLocal_25, 1, 0);
					}
					else if (func_29(&uLocal_25, 10000, 1))
					{
						func_221(1, 0, 1, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_11(&uLocal_25);
				iLocal_27 = -1;
			}
		}
		else
		{
			func_11(&uLocal_25);
			iLocal_27 = -1;
		}
	}
	else
	{
		func_11(&uLocal_25);
		iLocal_27 = -1;
	}
}

void func_221(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_226() < 0 && Global_1963618)
	{
		return;
	}
	if (func_225(35))
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
		func_224(2);
	}
	else
	{
		func_224(1);
	}
	if (bParam1)
	{
		func_224(11);
	}
	if (bParam2)
	{
		func_224(32);
		if (bParam3)
		{
			if (func_226() >= 0 && BitTest(Global_1586488[func_226() /*142*/].f_103, 0))
			{
				func_224(33);
			}
		}
		else
		{
			func_223(33);
		}
		if (func_226() >= 0)
		{
			if (func_222(Global_1586488[func_226() /*142*/].f_66))
			{
				func_224(40);
			}
		}
	}
	else if (bParam5)
	{
		func_224(37);
	}
	if (bParam4)
	{
		func_224(36);
	}
	if (func_225(36))
	{
		if (func_225(2))
		{
			func_223(36);
		}
	}
	if (bParam6)
	{
		func_224(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2794162.f_440 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_222(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_223(bool bParam0)
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

void func_224(bool bParam0)
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

bool func_225(int iParam0)
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2672524.f_62.f_1, iParam0);
	}
	return BitTest(Global_2672524.f_62.f_2, (iParam0 - 32));
}

int func_226()
{
	if (Global_2359296[func_227() /*5568*/].f_681.f_2 >= 415)
	{
		Global_2359296[func_227() /*5568*/].f_681.f_2 = -1;
		return -1;
	}
	return Global_2359296[func_227() /*5568*/].f_681.f_2;
}

int func_227()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_228()
{
	if (func_229(PLAYER::PLAYER_ID()) && func_132() == PLAYER::PLAYER_ID())
	{
		if ((PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_WARNING_MESSAGE_ACTIVE()) || func_93())
		{
			func_30(&uLocal_22, 1, 0);
			Global_1950697 = 1;
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				iLocal_24 = 30000;
			}
		}
	}
	if (func_14(&uLocal_22))
	{
		if (func_29(&uLocal_22, iLocal_24, 1))
		{
			func_11(&uLocal_22);
			Global_1950697 = 0;
			iLocal_24 = 10000;
		}
	}
}

int func_229(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_47(Global_2657704[iParam0 /*463*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

void func_230()
{
	if (!func_232() && !func_231())
	{
		if (!STATS::STAT_IS_STATS_TRACKING_ENABLED())
		{
			if (((func_110() && func_48(PLAYER::PLAYER_ID(), 0, 1)) && CAM::IS_SCREEN_FADED_IN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				STATS::STAT_ENABLE_STATS_TRACKING();
			}
		}
	}
}

bool func_231()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("animal_controller")) > 0;
}

bool func_232()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0;
}

void func_233()
{
	if ((Global_112755 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0) && func_110())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_234()
{
	int iVar0;
	
	if (!iLocal_4)
	{
		if (Global_1836398)
		{
			iVar0 = func_235(joaat("mpply_char_exploit_level"));
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

int func_235(int iParam0)
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

void func_236()
{
	if (!iLocal_3)
	{
		if (Global_1836398)
		{
			if (func_238() || func_237())
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

int func_237()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_235(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10874)
	{
		return 0;
	}
	uVar1[0] = func_235(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_235(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_235(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_235(joaat("mpply_prevseason4exploitlevel"));
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

int func_238()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_235(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10873)
	{
		return 0;
	}
	uVar1[0] = func_235(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_235(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_235(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_235(joaat("mpply_prevseason4exploitlevel"));
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

void func_239()
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

void func_240()
{
	if (Global_262145.f_10849 != 120)
	{
		Global_262145.f_10849 = 120;
	}
}

void func_241()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_242(0.69f, 0.06f, "STRING", sLocal_0);
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

void func_242(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_243()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_244()
{
	Global_112837 = 1;
}

