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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.67.04";
	iLocal_20 = -1;
	iLocal_21 = -1;
	iLocal_24 = 10000;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1578010 = MISC::GET_HASH_KEY(sLocal_0);
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	func_238();
	while (true)
	{
		if (func_237())
		{
			func_235();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692776.f_3)
		{
			func_234();
			func_233();
			func_230();
			func_228();
			func_227();
			func_224();
			func_222();
			func_216();
			func_208();
			func_206();
			func_196();
			func_188();
			func_187();
			func_182();
			func_170();
			func_166();
			func_133();
			func_124();
			func_123();
			func_116();
			func_113();
			func_111();
			func_72();
			func_71();
			func_70();
			func_61();
			func_59();
			func_45();
			func_43();
			func_32();
			func_17();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_16();
			func_15();
			func_4();
			func_3();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (func_2(Global_4718592.f_117591) == 10)
	{
		if (Global_262145.f_33950)
		{
			Global_262145.f_33950 = 0;
		}
	}
}

int func_2(int iParam0)
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

void func_3()
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

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((Global_262145.f_33952[10] != Global_4718592.f_117591 || Global_1574964) || !Global_1574965)
	{
		func_14();
		return;
	}
	MISC::CLEAR_BIT(&(Global_4718592.f_161355[1 /*566*/].f_18), 7);
	MISC::CLEAR_BIT(&(Global_4718592.f_161355[1 /*566*/].f_18), 29);
	Global_4980736.f_110349[42 /*1098*/].f_944[0] = 3;
	Global_4980736.f_110349[58 /*1098*/].f_944[0] = 3;
	if (Global_1058071.f_14[0] > 7 || Global_1058071.f_14[0] < 6)
	{
		func_13(&iLocal_49);
		return;
	}
	iVar0 = func_11(&iLocal_49);
	iVar1 = 600;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			iVar1 = 900;
		}
	}
	func_10(iVar0);
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar2 = CUTSCENE::GET_CUTSCENE_END_TIME();
		iVar3 = CUTSCENE::GET_CUTSCENE_TIME();
		if (iVar3 >= (iVar2 - 300) && !func_9(&Local_53))
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			func_8(&Local_53, 0, 0);
		}
	}
	else if (func_9(&Local_53) && func_7(Local_53, iVar1, 0))
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		func_6(&Local_53);
		iLocal_48 = 1;
		func_5(iVar0);
	}
}

void func_5(int iParam0)
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

void func_6(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_7(int iParam0, var uParam1, int iParam2, bool bParam3)
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

void func_8(var uParam0, bool bParam1, bool bParam2)
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

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

void func_10(int iParam0)
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

int func_11(int iParam0)
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
		else if (func_12(iParam0, Global_1058071.f_233[iVar0]))
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

int func_12(var uParam0, int iParam1)
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

void func_13(int iParam0)
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
		else if (func_12(iParam0, Global_1058071.f_233[iVar0]))
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

void func_14()
{
	int iVar0;
	
	func_6(&Local_53);
	iLocal_48 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_49[iVar0] = 0;
		iVar0++;
	}
}

void func_15()
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

void func_16()
{
	if ((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) != 0 && Global_262145.f_33952[8] != Global_4718592.f_117591) && !(Global_1574964 || Global_1574965))
	{
		MISC::SET_BIT(&Global_1574994, 29);
	}
}

void func_17()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (func_31(91))
	{
		func_30(&uLocal_68, 1, 0);
		bVar1 = true;
	}
	if (!iLocal_486)
	{
		if (func_9(&uLocal_68))
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
							if (!func_27(Global_1586488[iVar0 /*142*/].f_66))
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
				func_6(&uLocal_68);
			}
		}
	}
	else
	{
		bVar1 = true;
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_contact_requests")) <= 0)
		{
			func_6(&uLocal_68);
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
			func_6(&uLocal_68);
		}
	}
	if (!bVar1)
	{
		iVar2 = func_24(5396, -1);
		if (iVar2 == joaat("hauler2") || iVar2 == joaat("phantom3"))
		{
			if (Global_1586488[158 /*142*/].f_66 == 0)
			{
				Global_1586488[158 /*142*/].f_66 = iVar2;
				func_18(158, 158, -1);
			}
		}
	}
}

void func_18(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_20(iParam0, iParam1, iParam2);
	if (iParam0 >= 415)
	{
		return;
	}
	if (iParam2 == func_19() || iParam2 == -1)
	{
		Global_1945123[iParam0] = iParam1;
	}
}

int func_19()
{
	return Global_1574918;
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_22(func_23(iParam0), iParam1, iParam2);
		func_22(func_21(iParam0), 0, iParam2);
	}
	else
	{
		func_22(func_23(iParam0), 255, iParam2);
		func_22(func_21(iParam0), (iParam1 - 255), iParam2);
	}
}

int func_21(int iParam0)
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

void func_22(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_23(int iParam0)
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

int func_24(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_25(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_25(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_26(uParam1));
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_27(int iParam0)
{
	if (func_28(iParam0))
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

int func_28(int iParam0)
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

int func_29(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
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

int func_31(int iParam0)
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

void func_32()
{
	int iVar0;
	int iVar1;
	
	if (func_41(PLAYER::PLAYER_ID()))
	{
		if (!func_40())
		{
			if (func_39())
			{
				iVar0 = func_38("OFF_SEAT_RGSIT0");
				StringCopy(&(Global_44123[iVar0 /*32*/].f_8), "MPJAC_SIT", 16);
			}
		}
	}
	else if (func_36(PLAYER::PLAYER_ID()))
	{
		if (!func_34())
		{
			if (func_33())
			{
				iVar1 = func_38("CLB_SEAT_RGSIT0");
				StringCopy(&(Global_44123[iVar1 /*32*/].f_8), "MPJAC_SIT", 16);
			}
		}
	}
}

bool func_33()
{
	return func_38("CLB_SEAT_RGSIT0") != -1;
}

bool func_34()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!func_35(PLAYER::PLAYER_PED_ID()))
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

int func_35(int iParam0)
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

int func_36(int iParam0)
{
	if (func_37(Global_1853988[iParam0 /*867*/].f_267.f_33, -1))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0, int iParam1)
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

int func_38(char* sParam0)
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

bool func_39()
{
	return func_38("OFF_SEAT_RGSIT0") != -1;
}

bool func_40()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!func_35(PLAYER::PLAYER_PED_ID()))
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

int func_41(int iParam0)
{
	if (func_42(Global_1853988[iParam0 /*867*/].f_267.f_33))
	{
		return 1;
	}
	return 0;
}

int func_42(int iParam0)
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

void func_43()
{
	if (Global_2672524.f_947.f_6 >= 0)
	{
		if (Global_2766622 == 54 || Global_2766622 == 27)
		{
			if (Global_2766716.f_7729 == 0)
			{
				if (HUD::IS_PAUSE_MENU_ACTIVE() || !func_44(PLAYER::PLAYER_ID(), 1, 1))
				{
					Global_2766625 = 1;
					if (Global_1574582.f_1)
					{
						Global_1574582.f_1 = 0;
						Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_9 = 0;
						if (func_44(PLAYER::PLAYER_ID(), 1, 0))
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

int func_44(int iParam0, bool bParam1, bool bParam2)
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

void func_45()
{
	if (func_57(PLAYER::PLAYER_ID()) && Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_10 == PLAYER::PLAYER_ID())
	{
		if ((!iLocal_65 && !func_56()) && ((((func_55() || func_54()) || func_53()) || func_52()) || func_51()))
		{
			if (Global_2694610)
			{
				func_30(&Local_66, 1, 0);
			}
			else
			{
				Global_2694610 = 1;
				iLocal_65 = 1;
				func_8(&Local_66, 1, 0);
			}
		}
		else if (iLocal_65 && ((func_56() || func_50(Local_66, 1500, 1)) || func_48()))
		{
			Global_2694610 = 0;
			iLocal_65 = 0;
			func_6(&Local_66);
		}
	}
	if ((iLocal_65 && Global_2694610) && !func_46(PLAYER::PLAYER_ID()))
	{
		Global_2694610 = 0;
		iLocal_65 = 0;
		func_6(&Local_66);
	}
}

int func_46(int iParam0)
{
	if (iParam0 != func_47())
	{
		if (func_44(iParam0, 1, 1))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7 != -1;
		}
		else if ((Global_1575063 && iParam0 == PLAYER::PLAYER_ID()) && func_44(iParam0, 1, 0))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_47()
{
	return -1;
}

int func_48()
{
	if (func_49())
	{
		return Global_1950844.f_530 == 0;
	}
	return 0;
}

bool func_49()
{
	return Global_1950844.f_529;
}

int func_50(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_9(&iParam0))
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

var func_51()
{
	return BitTest(Global_1048576.f_10, 18);
}

var func_52()
{
	return Global_2672524.f_3575;
}

bool func_53()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

var func_54()
{
	return Global_1836768.f_78;
}

bool func_55()
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 != 0;
}

bool func_56()
{
	return Global_1575063;
}

int func_57(int iParam0)
{
	if (iParam0 != func_47())
	{
		if (func_44(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_58(Global_2657704[iParam0 /*463*/].f_321.f_7) == 24;
			}
		}
	}
	return 0;
}

int func_58(int iParam0)
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

void func_59()
{
	int iVar0;
	
	if (iLocal_64)
	{
		return;
	}
	if (!func_60())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		iLocal_64 = 0;
		return;
	}
	if (func_2(Global_4718592.f_117591) != 4)
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

bool func_60()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_61()
{
	bool bVar0;
	int iVar1;
	
	if (!func_68(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (((((func_44(PLAYER::PLAYER_ID(), 1, 1) && func_67(PLAYER::PLAYER_ID())) && func_66(PLAYER::PLAYER_ID())) && !func_65(PLAYER::PLAYER_ID())) && !func_64(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_IN())
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
			func_63(0);
			func_62(0, -1, 1);
		}
	}
}

void func_62(bool bParam0, int iParam1, bool bParam2)
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

void func_63(bool bParam0)
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

int func_64(int iParam0)
{
	if (iParam0 != func_47())
	{
		if (func_44(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_47())
			{
				return func_58(Global_2657704[iParam0 /*463*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_47())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_307, 30);
	}
	return 0;
}

int func_66(int iParam0)
{
	if (iParam0 != func_47())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_6, 21);
	}
	return 0;
}

int func_67(int iParam0)
{
	if (iParam0 != func_47())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_307, 12);
	}
	return 0;
}

bool func_68(int iParam0)
{
	return func_69(iParam0);
}

int func_69(int iParam0)
{
	if (iParam0 != func_47())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_299, 1);
	}
	return 0;
}

void func_70()
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

void func_71()
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

void func_72()
{
	if (!func_109())
	{
		return;
	}
	if (!func_107())
	{
		return;
	}
	if (func_106() && !BitTest(Global_1586488[158 /*142*/].f_103, 15))
	{
		if (func_35(Global_2794162.f_305[0]))
		{
			func_73(Global_2794162.f_305[0], 158, 1, 1, 0, 1, 1, 0, 0, -1, 0);
			func_18(158, 158, -1);
		}
	}
}

void func_73(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_104();
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		}
		if (bParam5)
		{
			MISC::SET_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 12);
			MISC::CLEAR_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 15);
			MISC::CLEAR_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 2);
			MISC::CLEAR_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 8);
			MISC::CLEAR_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 9);
			func_102();
			func_101(iParam1, 1);
			Global_1956835 = 1;
		}
		func_91(iParam0, &(Global_1586488[iParam1 /*142*/]), bParam5);
		Global_1586488[iParam1 /*142*/].f_70 = 1;
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_1586488[iParam1 /*142*/].f_103), true);
			MISC::CLEAR_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 6);
			MISC::CLEAR_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 7);
		}
		if (bParam3)
		{
			MISC::CLEAR_BIT(&(Global_1586488[iParam1 /*142*/].f_103), false);
			func_90("[personal_vehicle] MP_SAVED_VEHICLE_OUT_GARAGE cleared", 0);
			func_89();
		}
		else
		{
			MISC::SET_BIT(&(Global_1586488[iParam1 /*142*/].f_103), false);
			func_90("[personal_vehicle] MP_SAVED_VEHICLE_OUT_GARAGE set", 0);
			func_89();
		}
		if (bParam4)
		{
			func_88(iParam1);
		}
		if (bParam6)
		{
			MISC::SET_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 15);
			MISC::SET_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 2);
		}
		if (bParam7)
		{
			switch (iParam10)
			{
				case 0:
					MISC::SET_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 27);
					break;
				
				case 1:
					MISC::SET_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 28);
					break;
				}
		}
		if (bParam8)
		{
			MISC::SET_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 13);
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				if (BitTest(iVar0, 3))
				{
					MISC::SET_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 2);
					func_90("[personal_vehicle] MP_SAVED_VEHICLE_INSURED set as vehicle has insurance decorator", 0);
					func_89();
				}
			}
		}
		if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
		{
			func_87(&iParam0, &(Global_1586488[iParam1 /*142*/].f_9), &(Global_1586488[iParam1 /*142*/].f_59));
			if (func_86(iParam1, &uVar1))
			{
				if (bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE() == iParam0)
				{
					Global_2359296[func_85() /*5568*/].f_593.f_86 = iParam1 + 1;
				}
				MISC::SET_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 25);
				MISC::CLEAR_BIT(&(Global_1586488[iParam1 /*142*/].f_103), 26);
			}
		}
		Global_2359296[func_85() /*5568*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_74(iParam1, &(Global_1586488[iParam1 /*142*/]), 0, iParam9, 0, 0);
	}
}

int func_74(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2359296[func_85() /*5568*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_84(1411, iParam0);
	func_22(iVar1, uParam1->f_138, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_84(1412, iParam0);
	func_22(iVar1, uParam1->f_139, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_84(1413, iParam0);
	func_22(iVar1, *uParam1, iParam3);
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (iVar0 < 25)
		{
			iVar1 = (func_84(1414, iParam0) + iVar0);
			func_22(iVar1, uParam1->f_9[iVar0], iParam3);
		}
		else
		{
			iVar1 = (func_83(iParam0) + (iVar0 - 25));
			func_22(iVar1, uParam1->f_9[iVar0], iParam3);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = (func_84(1439, iParam0) + iVar0);
		func_22(iVar1, uParam1->f_59[iVar0], iParam3);
		iVar0++;
	}
	iVar1 = func_84(1441, iParam0);
	func_22(iVar1, uParam1->f_62, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_84(1442, iParam0);
	func_22(iVar1, uParam1->f_63, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_84(1443, iParam0);
	func_22(iVar1, uParam1->f_64, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_84(1444, iParam0);
	func_22(iVar1, uParam1->f_65, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_84(1445, iParam0);
	func_22(iVar1, uParam1->f_67, iParam3);
	iVar1 = func_84(1446, iParam0);
	func_22(iVar1, uParam1->f_68, iParam3);
	iVar1 = func_84(1447, iParam0);
	func_22(iVar1, uParam1->f_69, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_84(1448, iParam0);
	func_22(iVar1, uParam1->f_70, -1);
	iVar1 = func_84(1449, iParam0);
	func_22(iVar1, uParam1->f_71, iParam3);
	iVar1 = func_84(1450, iParam0);
	func_22(iVar1, uParam1->f_72, iParam3);
	iVar1 = func_84(1451, iParam0);
	func_22(iVar1, uParam1->f_73, iParam3);
	iVar1 = func_84(1452, iParam0);
	func_22(iVar1, uParam1->f_5, iParam3);
	iVar1 = func_84(1453, iParam0);
	func_22(iVar1, uParam1->f_6, iParam3);
	iVar1 = func_84(1454, iParam0);
	func_22(iVar1, uParam1->f_7, iParam3);
	iVar1 = func_84(1455, iParam0);
	func_22(iVar1, uParam1->f_8, iParam3);
	iVar1 = func_84(3880, iParam0);
	func_22(iVar1, uParam1->f_74, iParam3);
	iVar1 = func_84(3881, iParam0);
	func_22(iVar1, uParam1->f_75, iParam3);
	iVar1 = func_84(3882, iParam0);
	func_22(iVar1, uParam1->f_76, iParam3);
	iVar1 = func_82(iParam0);
	func_22(iVar1, uParam1->f_97, iParam3);
	iVar1 = func_81(iParam0);
	func_22(iVar1, uParam1->f_99, iParam3);
	iVar1 = func_80(iParam0);
	func_22(iVar1, uParam1->f_98, iParam3);
	iVar1 = func_77(iParam0, 0);
	func_22(iVar1, uParam1->f_102, iParam3);
	iVar2 = Global_2359296[func_85() /*5568*/].f_681.f_1275;
	if (bParam5)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	func_76(1629, iVar2, iParam3, 1);
	if (!bParam4)
	{
	}
	func_76(func_75(1, iParam0), uParam1->f_103, iParam3, 1);
	if (!bParam4)
	{
	}
	func_76(func_75(2, iParam0), uParam1->f_104, iParam3, 1);
	if (!bParam4)
	{
	}
	func_76(func_75(3, iParam0), uParam1->f_105, iParam3, 1);
	if (!bParam4)
	{
	}
	func_76(func_75(4, iParam0), uParam1->f_66, iParam3, 1);
	func_76(func_75(5, iParam0), uParam1->f_77, iParam3, 1);
	if (!bParam4)
	{
	}
	func_76(func_75(7, iParam0), uParam1->f_140, iParam3, 1);
	if (!bParam4)
	{
	}
	return 1;
}

int func_75(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 363:
					return 11434;
				
				case 364:
					return 11441;
				
				case 365:
					return 11448;
				
				case 366:
					return 11455;
				
				case 367:
					return 11462;
				
				case 368:
					return 11469;
				
				case 369:
					return 11476;
				
				case 370:
					return 11483;
				
				case 371:
					return 11490;
				
				case 372:
					return 11497;
				
				case 373:
					return 11504;
				
				case 374:
					return 11511;
				
				case 375:
					return 11518;
				
				case 376:
					return 11525;
				
				case 377:
					return 11532;
				
				case 378:
					return 11539;
				
				case 379:
					return 11546;
				
				case 380:
					return 11553;
				
				case 381:
					return 11560;
				
				case 382:
					return 11567;
				
				case 383:
					return 11574;
				
				case 384:
					return 11581;
				
				case 385:
					return 11588;
				
				case 386:
					return 11595;
				
				case 387:
					return 11602;
				
				case 388:
					return 11609;
				
				case 389:
					return 11616;
				
				case 390:
					return 11623;
				
				case 391:
					return 11630;
				
				case 392:
					return 11637;
				
				case 393:
					return 11644;
				
				case 394:
					return 11651;
				
				case 395:
					return 11658;
				
				case 396:
					return 11665;
				
				case 397:
					return 11672;
				
				case 398:
					return 11679;
				
				case 399:
					return 11686;
				
				case 400:
					return 11693;
				
				case 401:
					return 11700;
				
				case 402:
					return 11707;
				
				case 403:
					return 11714;
				
				case 404:
					return 11721;
				
				case 405:
					return 11728;
				
				case 406:
					return 11735;
				
				case 407:
					return 11742;
				
				case 408:
					return 11749;
				
				case 409:
					return 11756;
				
				case 410:
					return 11763;
				
				case 411:
					return 11770;
				
				case 412:
					return 11777;
				
				case 413:
					return 11784;
				
				case 414:
					return 11791;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 363:
					return 11435;
				
				case 364:
					return 11442;
				
				case 365:
					return 11449;
				
				case 366:
					return 11456;
				
				case 367:
					return 11463;
				
				case 368:
					return 11470;
				
				case 369:
					return 11477;
				
				case 370:
					return 11484;
				
				case 371:
					return 11491;
				
				case 372:
					return 11498;
				
				case 373:
					return 11505;
				
				case 374:
					return 11512;
				
				case 375:
					return 11519;
				
				case 376:
					return 11526;
				
				case 377:
					return 11533;
				
				case 378:
					return 11540;
				
				case 379:
					return 11547;
				
				case 380:
					return 11554;
				
				case 381:
					return 11561;
				
				case 382:
					return 11568;
				
				case 383:
					return 11575;
				
				case 384:
					return 11582;
				
				case 385:
					return 11589;
				
				case 386:
					return 11596;
				
				case 387:
					return 11603;
				
				case 388:
					return 11610;
				
				case 389:
					return 11617;
				
				case 390:
					return 11624;
				
				case 391:
					return 11631;
				
				case 392:
					return 11638;
				
				case 393:
					return 11645;
				
				case 394:
					return 11652;
				
				case 395:
					return 11659;
				
				case 396:
					return 11666;
				
				case 397:
					return 11673;
				
				case 398:
					return 11680;
				
				case 399:
					return 11687;
				
				case 400:
					return 11694;
				
				case 401:
					return 11701;
				
				case 402:
					return 11708;
				
				case 403:
					return 11715;
				
				case 404:
					return 11722;
				
				case 405:
					return 11729;
				
				case 406:
					return 11736;
				
				case 407:
					return 11743;
				
				case 408:
					return 11750;
				
				case 409:
					return 11757;
				
				case 410:
					return 11764;
				
				case 411:
					return 11771;
				
				case 412:
					return 11778;
				
				case 413:
					return 11785;
				
				case 414:
					return 11792;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 363:
					return 11436;
				
				case 364:
					return 11443;
				
				case 365:
					return 11450;
				
				case 366:
					return 11457;
				
				case 367:
					return 11464;
				
				case 368:
					return 11471;
				
				case 369:
					return 11478;
				
				case 370:
					return 11485;
				
				case 371:
					return 11492;
				
				case 372:
					return 11499;
				
				case 373:
					return 11506;
				
				case 374:
					return 11513;
				
				case 375:
					return 11520;
				
				case 376:
					return 11527;
				
				case 377:
					return 11534;
				
				case 378:
					return 11541;
				
				case 379:
					return 11548;
				
				case 380:
					return 11555;
				
				case 381:
					return 11562;
				
				case 382:
					return 11569;
				
				case 383:
					return 11576;
				
				case 384:
					return 11583;
				
				case 385:
					return 11590;
				
				case 386:
					return 11597;
				
				case 387:
					return 11604;
				
				case 388:
					return 11611;
				
				case 389:
					return 11618;
				
				case 390:
					return 11625;
				
				case 391:
					return 11632;
				
				case 392:
					return 11639;
				
				case 393:
					return 11646;
				
				case 394:
					return 11653;
				
				case 395:
					return 11660;
				
				case 396:
					return 11667;
				
				case 397:
					return 11674;
				
				case 398:
					return 11681;
				
				case 399:
					return 11688;
				
				case 400:
					return 11695;
				
				case 401:
					return 11702;
				
				case 402:
					return 11709;
				
				case 403:
					return 11716;
				
				case 404:
					return 11723;
				
				case 405:
					return 11730;
				
				case 406:
					return 11737;
				
				case 407:
					return 11744;
				
				case 408:
					return 11751;
				
				case 409:
					return 11758;
				
				case 410:
					return 11765;
				
				case 411:
					return 11772;
				
				case 412:
					return 11779;
				
				case 413:
					return 11786;
				
				case 414:
					return 11793;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 363:
					return 11437;
				
				case 364:
					return 11444;
				
				case 365:
					return 11451;
				
				case 366:
					return 11458;
				
				case 367:
					return 11465;
				
				case 368:
					return 11472;
				
				case 369:
					return 11479;
				
				case 370:
					return 11486;
				
				case 371:
					return 11493;
				
				case 372:
					return 11500;
				
				case 373:
					return 11507;
				
				case 374:
					return 11514;
				
				case 375:
					return 11521;
				
				case 376:
					return 11528;
				
				case 377:
					return 11535;
				
				case 378:
					return 11542;
				
				case 379:
					return 11549;
				
				case 380:
					return 11556;
				
				case 381:
					return 11563;
				
				case 382:
					return 11570;
				
				case 383:
					return 11577;
				
				case 384:
					return 11584;
				
				case 385:
					return 11591;
				
				case 386:
					return 11598;
				
				case 387:
					return 11605;
				
				case 388:
					return 11612;
				
				case 389:
					return 11619;
				
				case 390:
					return 11626;
				
				case 391:
					return 11633;
				
				case 392:
					return 11640;
				
				case 393:
					return 11647;
				
				case 394:
					return 11654;
				
				case 395:
					return 11661;
				
				case 396:
					return 11668;
				
				case 397:
					return 11675;
				
				case 398:
					return 11682;
				
				case 399:
					return 11689;
				
				case 400:
					return 11696;
				
				case 401:
					return 11703;
				
				case 402:
					return 11710;
				
				case 403:
					return 11717;
				
				case 404:
					return 11724;
				
				case 405:
					return 11731;
				
				case 406:
					return 11738;
				
				case 407:
					return 11745;
				
				case 408:
					return 11752;
				
				case 409:
					return 11759;
				
				case 410:
					return 11766;
				
				case 411:
					return 11773;
				
				case 412:
					return 11780;
				
				case 413:
					return 11787;
				
				case 414:
					return 11794;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 363:
					return 11438;
				
				case 364:
					return 11445;
				
				case 365:
					return 11452;
				
				case 366:
					return 11459;
				
				case 367:
					return 11466;
				
				case 368:
					return 11473;
				
				case 369:
					return 11480;
				
				case 370:
					return 11487;
				
				case 371:
					return 11494;
				
				case 372:
					return 11501;
				
				case 373:
					return 11508;
				
				case 374:
					return 11515;
				
				case 375:
					return 11522;
				
				case 376:
					return 11529;
				
				case 377:
					return 11536;
				
				case 378:
					return 11543;
				
				case 379:
					return 11550;
				
				case 380:
					return 11557;
				
				case 381:
					return 11564;
				
				case 382:
					return 11571;
				
				case 383:
					return 11578;
				
				case 384:
					return 11585;
				
				case 385:
					return 11592;
				
				case 386:
					return 11599;
				
				case 387:
					return 11606;
				
				case 388:
					return 11613;
				
				case 389:
					return 11620;
				
				case 390:
					return 11627;
				
				case 391:
					return 11634;
				
				case 392:
					return 11641;
				
				case 393:
					return 11648;
				
				case 394:
					return 11655;
				
				case 395:
					return 11662;
				
				case 396:
					return 11669;
				
				case 397:
					return 11676;
				
				case 398:
					return 11683;
				
				case 399:
					return 11690;
				
				case 400:
					return 11697;
				
				case 401:
					return 11704;
				
				case 402:
					return 11711;
				
				case 403:
					return 11718;
				
				case 404:
					return 11725;
				
				case 405:
					return 11732;
				
				case 406:
					return 11739;
				
				case 407:
					return 11746;
				
				case 408:
					return 11753;
				
				case 409:
					return 11760;
				
				case 410:
					return 11767;
				
				case 411:
					return 11774;
				
				case 412:
					return 11781;
				
				case 413:
					return 11788;
				
				case 414:
					return 11795;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 363:
					return 11440;
				
				case 364:
					return 11447;
				
				case 365:
					return 11454;
				
				case 366:
					return 11461;
				
				case 367:
					return 11468;
				
				case 368:
					return 11475;
				
				case 369:
					return 11482;
				
				case 370:
					return 11489;
				
				case 371:
					return 11496;
				
				case 372:
					return 11503;
				
				case 373:
					return 11510;
				
				case 374:
					return 11517;
				
				case 375:
					return 11524;
				
				case 376:
					return 11531;
				
				case 377:
					return 11538;
				
				case 378:
					return 11545;
				
				case 379:
					return 11552;
				
				case 380:
					return 11559;
				
				case 381:
					return 11566;
				
				case 382:
					return 11573;
				
				case 383:
					return 11580;
				
				case 384:
					return 11587;
				
				case 385:
					return 11594;
				
				case 386:
					return 11601;
				
				case 387:
					return 11608;
				
				case 388:
					return 11615;
				
				case 389:
					return 11622;
				
				case 390:
					return 11629;
				
				case 391:
					return 11636;
				
				case 392:
					return 11643;
				
				case 393:
					return 11650;
				
				case 394:
					return 11657;
				
				case 395:
					return 11664;
				
				case 396:
					return 11671;
				
				case 397:
					return 11678;
				
				case 398:
					return 11685;
				
				case 399:
					return 11692;
				
				case 400:
					return 11699;
				
				case 401:
					return 11706;
				
				case 402:
					return 11713;
				
				case 403:
					return 11720;
				
				case 404:
					return 11727;
				
				case 405:
					return 11734;
				
				case 406:
					return 11741;
				
				case 407:
					return 11748;
				
				case 408:
					return 11755;
				
				case 409:
					return 11762;
				
				case 410:
					return 11769;
				
				case 411:
					return 11776;
				
				case 412:
					return 11783;
				
				case 413:
					return 11790;
				
				case 414:
					return 11797;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 363:
					return 11439;
				
				case 364:
					return 11446;
				
				case 365:
					return 11453;
				
				case 366:
					return 11460;
				
				case 367:
					return 11467;
				
				case 368:
					return 11474;
				
				case 369:
					return 11481;
				
				case 370:
					return 11488;
				
				case 371:
					return 11495;
				
				case 372:
					return 11502;
				
				case 373:
					return 11509;
				
				case 374:
					return 11516;
				
				case 375:
					return 11523;
				
				case 376:
					return 11530;
				
				case 377:
					return 11537;
				
				case 378:
					return 11544;
				
				case 379:
					return 11551;
				
				case 380:
					return 11558;
				
				case 381:
					return 11565;
				
				case 382:
					return 11572;
				
				case 383:
					return 11579;
				
				case 384:
					return 11586;
				
				case 385:
					return 11593;
				
				case 386:
					return 11600;
				
				case 387:
					return 11607;
				
				case 388:
					return 11614;
				
				case 389:
					return 11621;
				
				case 390:
					return 11628;
				
				case 391:
					return 11635;
				
				case 392:
					return 11642;
				
				case 393:
					return 11649;
				
				case 394:
					return 11656;
				
				case 395:
					return 11663;
				
				case 396:
					return 11670;
				
				case 397:
					return 11677;
				
				case 398:
					return 11684;
				
				case 399:
					return 11691;
				
				case 400:
					return 11698;
				
				case 401:
					return 11705;
				
				case 402:
					return 11712;
				
				case 403:
					return 11719;
				
				case 404:
					return 11726;
				
				case 405:
					return 11733;
				
				case 406:
					return 11740;
				
				case 407:
					return 11747;
				
				case 408:
					return 11754;
				
				case 409:
					return 11761;
				
				case 410:
					return 11768;
				
				case 411:
					return 11775;
				
				case 412:
					return 11782;
				
				case 413:
					return 11789;
				
				case 414:
					return 11796;
				
				default:
			}
			break;
	}
	return 1630;
}

void func_76(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_25(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_77(int iParam0, bool bParam1)
{
	if (iParam0 <= 38)
	{
		if (iParam0 < 10)
		{
			if (bParam1)
			{
				return (4212 + iParam0);
			}
			else
			{
				return (31488 + iParam0);
			}
		}
		else if (iParam0 > 12 && iParam0 < 23)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 3);
			}
			else
			{
				return ((31488 + iParam0) - 3);
			}
		}
		else if (iParam0 > 25 && iParam0 < 36)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 6);
			}
			else
			{
				return ((31488 + iParam0) - 6);
			}
		}
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return ((6015 + iParam0) - 39);
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7252 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9310 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30134 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30134 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_78(11))
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15361;
	}
	else if (iParam0 < 184)
	{
		return ((18036 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18953 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21942 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24535 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26319 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28039 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31488 + 30 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34036 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36528 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36528 + ((iParam0 - 337) - 3));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return (41004 + (iParam0 - 363));
	}
	return 0;
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
		
		case 25:
			return 317;
			break;
		
		case 26:
			return 337;
			break;
		
		case 27:
			return 350;
			break;
		
		case 28:
			return 363;
			break;
		
		case 29:
			return 413;
			break;
	}
	if (iParam0 >= 1000)
	{
		return -1;
	}
	return (func_79(iParam0, -1, 1) * iParam0 + 1);
}

int func_79(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 == 127)
			{
				return 10;
			}
			else if (iParam1 == 128)
			{
				return 20;
			}
			else if (iParam1 == 129)
			{
				return 50;
			}
			else if (iParam1 <= 130 && iParam1 > 0)
			{
				if (Global_1312228[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1312228[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1312228[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
		case 27:
		case 28:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
		
		case 25:
			return 10;
			break;
		
		case 26:
			return 20;
			break;
		
		case 29:
			return 50;
			break;
	}
	return 0;
}

int func_80(int iParam0)
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_78(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31528 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34056 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36548 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36548 + ((iParam0 - 337) - 3));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return ((41056 + iParam0) - 363);
	}
	return 0;
}

int func_81(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_78(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31478 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34016 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36508 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36508 + ((iParam0 - 337) - 3));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return ((40952 + iParam0) - 363);
	}
	return 0;
}

int func_82(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_78(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31468 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((33996 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36488 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36488 + ((iParam0 - 337) - 3));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return ((40900 + iParam0) - 363);
	}
	return 0;
}

int func_83(int iParam0)
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < func_78(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return (31188 + ((iParam0 - 307) * iVar0));
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return (33436 + ((iParam0 - 317) * iVar0));
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return (35928 + ((iParam0 - 337) * iVar0));
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36168 + ((iParam0 - 350) * iVar0));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return (39444 + ((iParam0 - 363) * iVar0));
	}
	return 0;
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_78(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
		else if (iParam1 > 306 && iParam1 < 317)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (31158 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (31159 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (31160 + (iParam1 - 307) * 3);
			}
		}
		else if (iParam1 >= 317 && iParam1 < 337)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (33376 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (33377 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (33378 + (iParam1 - 317) * 3);
			}
		}
		else if (iParam1 >= 337 && iParam1 < 347)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35868 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35869 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35870 + (iParam1 - 337) * 3);
			}
		}
		else if (iParam1 >= 350 && iParam1 < 360)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35898 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35899 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35900 + (iParam1 - 350) * 3);
			}
		}
		else if (iParam1 >= 363 && iParam1 <= 414)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (39288 + (iParam1 - 363) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (39289 + (iParam1 - 363) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (39290 + (iParam1 - 363) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_78(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_78(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_78(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	else if (iParam1 > 306 && iParam1 < 317)
	{
		iVar0 = (30708 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 307) * (1456 - 1411)));
	}
	else if (iParam1 >= 317 && iParam1 < 337)
	{
		iVar0 = (32476 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 317) * (1456 - 1411)));
	}
	else if (iParam1 < 347)
	{
		iVar0 = (34878 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 337) * (1456 - 1411)));
	}
	else if (iParam1 >= 347 && iParam1 <= 349)
	{
		iVar0 = ((iParam1 - 347) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35328);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35329);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35330);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35331);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35332);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35333);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35334);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35335);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35336);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35337);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35338);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35339);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35340);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35341);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35342);
		}
	}
	else if (iParam1 < 360)
	{
		iVar0 = (35373 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 350) * (1456 - 1411)));
	}
	else if (iParam1 >= 360 && iParam1 <= 362)
	{
		iVar0 = ((iParam1 - 360) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35823);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35824);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35825);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35826);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35827);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35828);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35829);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35830);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35831);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35832);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35833);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35834);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35835);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35836);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35837);
		}
	}
	else if (iParam1 >= 363 && iParam1 <= 414)
	{
		iVar0 = (36948 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 363) * (1456 - 1411)));
	}
	return iVar0;
}

int func_85()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_86(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 13 && iParam0 <= 22)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 26 && iParam0 <= 35)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 39 && iParam0 <= 48)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 52 && iParam0 <= 61)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((iParam0 >= 65 && iParam0 <= 74) || (iParam0 >= 75 && iParam0 <= 84))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((((iParam0 >= 88 && iParam0 <= 107) || (iParam0 >= 108 && iParam0 <= 127)) || (iParam0 >= 128 && iParam0 <= 147)) || (iParam0 >= 148 && iParam0 <= 155))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0 += 20;
	if (iParam0 >= 179 && iParam0 <= 185)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 191 && iParam0 <= 221)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 227 && iParam0 <= 235)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 237 && iParam0 <= 245)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 247 && iParam0 <= 255)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (iParam0 >= 258 && iParam0 <= 267)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (*uParam1 >= 212 || *uParam1 == -1)
	{
		*uParam1 = 0;
		return 0;
	}
	return *uParam1 != -1;
}

int func_87(int iParam0, var uParam1, var uParam2)
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

void func_88(int iParam0)
{
	Global_2359296[func_85() /*5568*/].f_681.f_2 = iParam0;
}

void func_89()
{
}

void func_90(char* sParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			unk_0x52B85E7F7D5BD284(sParam0, 1);
			break;
		
		case 2:
			unk_0x43AAF8DB361D31DF(sParam0, 1);
			break;
	}
}

void func_91(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	func_100(uParam1);
	if (bParam2)
	{
		uParam1->f_103 = 0;
		uParam1->f_105 = 0;
		StringCopy(&(uParam1->f_106), "", 64);
		StringCopy(&(uParam1->f_122), "", 64);
		uParam1->f_140 = 0;
		uParam1->f_138 = -1;
		uParam1->f_139 = -1;
		uParam1->f_141 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (Global_262145.f_11263)
		{
			MISC::SET_BIT(&(uParam1->f_103), 22);
		}
	}
	if (func_99(iParam0, 0))
	{
		func_98();
		MISC::SET_BIT(&(uParam1->f_103), 3);
	}
	func_92(iParam0, uParam1);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (BitTest(iVar0, 3))
			{
				MISC::SET_BIT(&(uParam1->f_103), 2);
				func_90("[personal_vehicle] MP_SAVE_VEHICLE_STORE_CAR_DETAILS_STRUCT - MP_SAVED_VEHICLE_INSURED as vehicle has insurance decorator", 0);
				func_89();
			}
		}
	}
}

void func_92(int iParam0, var uParam1)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_94(iParam0, uParam1);
		MISC::CLEAR_BIT(&(uParam1->f_95), false);
		if (BitTest(uParam1->f_77, 11))
		{
			MISC::SET_BIT(&(uParam1->f_95), false);
			func_90("GET_VEHICLE_SETUP_MP - Setting  1", 0);
			func_89();
		}
		if (VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0) && !VEHICLE::GET_DRIFT_TYRES_SET(iParam0))
		{
			uParam1->f_102 = 2;
			func_90("GET_VEHICLE_SETUP_MP - iTyreType  0", 0);
		}
		else if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			uParam1->f_102 = 1;
			func_90("GET_VEHICLE_SETUP_MP - iTyreType  BPT", 0);
		}
		else if (VEHICLE::GET_DRIFT_TYRES_SET(iParam0))
		{
			uParam1->f_102 = 3;
			func_90("GET_VEHICLE_SETUP_MP - iTyreType  LGT", 0);
		}
		if (uParam1->f_70 == 0)
		{
			func_90("GET_VEHICLE_SETUP_MP - VehicleSetupMP.VehicleSetup.eLockState = VEHICLELOCK_NONE!!", 0);
			func_89();
			uParam1->f_70 = 1;
		}
		uParam1->f_78 = AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0);
		uParam1->f_79 = AUDIO::GET_VEHICLE_HORN_SOUND_INDEX(iParam0);
		uParam1->f_80 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam0);
		VEHICLE::GET_VEHICLE_EXTRA_COLOUR_5(iParam0, &(uParam1->f_97));
		VEHICLE::GET_VEHICLE_EXTRA_COLOUR_6(iParam0, &(uParam1->f_99));
		uParam1->f_98 = VEHICLE::GET_VEHICLE_LIVERY2(iParam0);
		iVar0 = PLAYER::PLAYER_ID();
		MISC::CLEAR_BIT(&(uParam1->f_95), 3);
		if (!iVar0 == func_47())
		{
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(iVar0, &(uParam1->f_81), 13);
			MISC::SET_BIT(&(uParam1->f_95), true);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), true);
		}
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			MISC::SET_BIT(&(uParam1->f_95), 2);
			if (uParam1->f_94 == 1)
			{
				if (func_93(iParam0))
				{
					MISC::SET_BIT(&(uParam1->f_95), 3);
				}
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 2);
		}
	}
}

int func_93(int iParam0)
{
	if (Global_2794162.f_299 == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_94(int iParam0, var uParam1)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_97(uParam1);
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
		if (uParam1->f_65 == -1 && !func_96(uParam1->f_66))
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
		func_87(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_95(iVar0 + 1));
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

int func_95(int iParam0)
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

int func_96(int iParam0)
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

void func_97(var uParam0)
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

void func_98()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 415)
	{
		if (BitTest(Global_1586488[iVar0 /*142*/].f_103, 3))
		{
			MISC::CLEAR_BIT(&(Global_1586488[iVar0 /*142*/].f_103), 3);
		}
		iVar0++;
	}
}

int func_99(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (iParam1 == 0)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1"))
					{
						return 1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_100(var uParam0)
{
	func_97(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

void func_101(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (Global_2794162.f_2346[iVar0 /*44*/].f_40 == iParam0)
			{
				func_101(iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		StringCopy(&(Global_2794162.f_2346[iParam0 /*44*/]), "", 24);
		Global_2794162.f_2346[iParam0 /*44*/].f_6 = 138;
		StringCopy(&(Global_2794162.f_2346[iParam0 /*44*/].f_7), "", 64);
		StringCopy(&(Global_2794162.f_2346[iParam0 /*44*/].f_23), "", 64);
		Global_2794162.f_2346[iParam0 /*44*/].f_39 = -1;
		Global_2794162.f_2346[iParam0 /*44*/].f_40 = -1;
		func_6(&(Global_2794162.f_2346[iParam0 /*44*/].f_41));
		Global_2794162.f_2346[iParam0 /*44*/].f_43 = 0;
	}
}

void func_102()
{
	func_103(10);
}

void func_103(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1836768.f_5[iVar0]), bVar1);
}

void func_104()
{
	Global_2672524.f_62.f_73 = 0;
	func_105(25);
	func_105(24);
}

void func_105(bool bParam0)
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

bool func_106()
{
	return func_24(5396, -1) != 0;
}

int func_107()
{
	if (func_108() == 0)
	{
		return 1;
	}
	return 0;
}

int func_108()
{
	return Global_1574632.f_18;
}

int func_109()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_110()) > 0 && Global_1574666 == 2)
	{
		return 1;
	}
	return 0;
}

int func_110()
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_111()
{
	if (func_112())
	{
		return;
	}
	if (!func_109())
	{
		return;
	}
	if (!func_107())
	{
		return;
	}
	if (!func_68(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if ((Global_1945123[190] - 1) != 190)
	{
		Global_1945123[190] = 191;
	}
}

int func_112()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_113()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (((!iLocal_60 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_SMPL_INTERIOR_EXT")) > 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", 81, false, 0)) && INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1103.562f, -3000f, -40f, "gr_grdlc_int_01") == 0)
	{
		if ((!func_115(PLAYER::PLAYER_ID(), 1, 1) && !func_49()) && !func_114(PLAYER::PLAYER_ID()))
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

int func_114(int iParam0)
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

int func_115(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_47())
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

void func_116()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_118(PLAYER::PLAYER_ID()) != 2)
	{
		return;
	}
	if (!func_35(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!func_35(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (((iVar1 != joaat("cargobob") && iVar1 != joaat("cargobob2")) && iVar1 != joaat("cargobob3")) && iVar1 != joaat("cargobob4"))
	{
		return;
	}
	if (func_117(PLAYER::PLAYER_PED_ID(), 1) != -1)
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
		if (func_35(iVar2) && ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
		{
			VEHICLE::SET_CARGOBOB_FORCE_DONT_DETACH_VEHICLE(iVar0, false);
			VEHICLE::DETACH_ENTITY_FROM_CARGOBOB(iVar0, iVar2);
		}
	}
}

int func_117(int iParam0, bool bParam1)
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

int func_118(int iParam0)
{
	if (func_122(iParam0) == 317)
	{
		return func_119(iParam0, 317);
	}
	return -1;
}

int func_119(int iParam0, int iParam1)
{
	if (func_122(iParam0) == iParam1)
	{
		return func_120(iParam0);
	}
	return -1;
}

int func_120(int iParam0)
{
	if (func_121(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

int func_121(int iParam0, int iParam1)
{
	if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_122(int iParam0)
{
	if (func_121(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_33;
	}
	return -1;
}

void func_123()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (func_118(PLAYER::PLAYER_ID()) != 0)
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
	if (!func_35(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = false;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar0 = false;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!func_35(iVar1))
	{
		bVar0 = false;
	}
	if (ENTITY::GET_ENTITY_MODEL(iVar1) != joaat("toreador"))
	{
		bVar0 = false;
	}
	if (func_117(PLAYER::PLAYER_PED_ID(), 1) == -1)
	{
		bVar0 = false;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
	{
		bVar0 = false;
	}
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1115.654f, -2273.433f, 28.89841f, 1115.247f, -2278.109f, 30.92747f, 3f, false, true, 0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (!func_9(&uLocal_58))
		{
			func_8(&uLocal_58, 0, 0);
		}
		else if (func_29(&uLocal_58, 10000, 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
		}
	}
	else if (func_9(&uLocal_58))
	{
		func_6(&uLocal_58);
	}
}

void func_124()
{
	if (!iLocal_57)
	{
		if ((func_132(PLAYER::PLAYER_ID()) && BitTest(Global_1950844.f_8, 25)) && func_126() != PLAYER::PLAYER_ID())
		{
			iLocal_57 = 1;
		}
	}
	else
	{
		if (!func_132(PLAYER::PLAYER_ID()))
		{
			iLocal_57 = 0;
			MISC::CLEAR_BIT(&(Global_1950844.f_8), 25);
			return;
		}
		if (((func_125() && Global_1950837 != 3) && !MISC::ARE_STRINGS_EQUAL(&(Global_23390.f_1), "CMOD_MOD_E")) && !Global_1950844.f_3432)
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

var func_125()
{
	return BitTest(Global_78938, 8);
}

int func_126()
{
	return func_127(PLAYER::PLAYER_ID());
}

int func_127(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_47())
	{
		return iParam0;
	}
	if (func_131(iParam0) != -1)
	{
		iVar0 = func_58(func_131(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_129(iParam0, 0))
			{
				return func_128(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_47();
		}
		return Global_2657704[iParam0 /*463*/].f_321.f_10;
	}
	return func_47();
}

int func_128(int iParam0)
{
	if (iParam0 != func_47())
	{
		return Global_1895156[iParam0 /*609*/].f_10;
	}
	return func_47();
}

bool func_129(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_130(iParam0))
		{
			return 0;
		}
	}
	return Global_1895156[iParam0 /*609*/].f_10 != func_47();
}

int func_130(int iParam0)
{
	if (iParam0 != func_47())
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_47())
		{
			return Global_1895156[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_131(int iParam0)
{
	if (iParam0 != func_47())
	{
		if (func_44(iParam0, 1, 1))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
		else if (((Global_1575063 || Global_2635560.f_2780) && iParam0 == PLAYER::PLAYER_ID()) && func_44(iParam0, 1, 0))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
	}
	return -1;
}

int func_132(int iParam0)
{
	if (iParam0 != func_47())
	{
		if (func_44(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_58(Global_2657704[iParam0 /*463*/].f_321.f_7) == 22;
			}
		}
	}
	return 0;
}

void func_133()
{
	struct<4> Var0;
	struct<4> Var4;
	struct<16> Var8;
	
	if (((Global_2766625 || ((func_44(PLAYER::PLAYER_ID(), 1, 1) && func_107()) && !iLocal_55)) || func_165(17)) || iLocal_56)
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
		else if (func_165(17))
		{
			iLocal_56 = 1;
		}
		if (func_130(PLAYER::PLAYER_ID()))
		{
			iLocal_56 = 0;
			Var8 = { func_161() };
			if (func_160(&Var8, Var0) || func_160(&Var8, Var4))
			{
				if (func_159(PLAYER::PLAYER_ID()))
				{
					func_145(&Var8, 0, 1);
				}
				else
				{
					func_145(&Var8, 1, 1);
				}
				func_143();
			}
		}
		if (func_142(PLAYER::PLAYER_ID()))
		{
			StringCopy(&Var8, func_137(PLAYER::PLAYER_ID()), 64);
			if (func_160(&Var8, Var0) || func_160(&Var8, Var4))
			{
				func_134(Var8);
			}
		}
	}
}

void func_134(char[64] cParam0)
{
	func_135(55, 56, &cParam0, -1, 1);
	Global_1914706[PLAYER::PLAYER_ID() /*299*/].f_283 = { cParam0 };
}

void func_135(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar10[32];
	int iVar18;
	int iVar19;
	
	iVar0 = func_136(iParam0, iParam3);
	iVar1 = func_136(iParam1, iParam3);
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

var func_136(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(3, uParam0, func_26(uParam1));
}

char* func_137(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("DEFAULT_LAB_N");
	if (iParam0 == func_47())
	{
		return sVar0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_141(&(Global_1914706[iParam0 /*299*/].f_283));
		return sVar0;
	}
	if (Global_1895156[iParam0 /*609*/].f_10.f_121 != Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121)
	{
		return sVar0;
	}
	if (func_140(iParam0, 28) || (func_140(PLAYER::PLAYER_ID(), 28) && !func_138(iParam0)))
	{
		return sVar0;
	}
	iVar1 = func_128(iParam0);
	if (iVar1 != func_47())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!func_60() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return sVar0;
			}
		}
	}
	if (iVar1 != func_47())
	{
		sVar0 = func_141(&(Global_1914706[iVar1 /*299*/].f_283));
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

int func_138(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_139(iParam0) };
	if (func_60())
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

struct<13> func_139(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

var func_140(int iParam0, int iParam1)
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

var func_141(var uParam0)
{
	return uParam0;
}

int func_142(int iParam0)
{
	if (iParam0 == func_47())
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_479, 14);
}

void func_143()
{
	int iVar0;
	struct<2> Var1;
	
	Var1.f_0 = 2103624094;
	Var1.f_1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0] != func_47())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0]))
			{
				SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var1, 2, func_144(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0]));
			}
		}
		iVar0++;
	}
}

var func_144(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

void func_145(char* sParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_155(1) || iParam1 == 0)
		{
			func_135(47, 48, sParam0, -1, 1);
			if (func_154() && iParam1 == 0)
			{
				func_153(sParam0, bParam2);
			}
		}
		else
		{
			func_135(119, 121, sParam0, -1, 1);
			if (func_152() && iParam1 == 1)
			{
				func_150(sParam0, bParam2);
			}
		}
	}
	StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_105), sParam0, 64);
	Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121 = LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();
	if ((!func_60() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_148())
	{
		func_147(28);
	}
	else
	{
		func_146(28);
	}
}

void func_146(bool bParam0)
{
	MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}

void func_147(bool bParam0)
{
	MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}

int func_148()
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	if (func_149())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	else if (func_60())
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

bool func_149()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_150(char* sParam0, bool bParam1)
{
	struct<16> Var0;
	
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_135(45, 46, sParam0, -1, 1);
			Var0 = { func_151(119, 121, -1) };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				func_135(119, 121, sParam0, -1, 1);
			}
		}
	}
	if ((!func_60() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_148())
	{
		func_147(28);
	}
	else
	{
		func_146(28);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_339), sParam0, 64);
	}
}

struct<16> func_151(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	char cVar18[32];
	
	iVar0 = func_136(iParam0, iParam2);
	iVar1 = func_136(iParam1, iParam2);
	StringCopy(&Var2, STATS::STAT_GET_STRING(iVar0, -1), 64);
	StringCopy(&cVar18, STATS::STAT_GET_STRING(iVar1, -1), 32);
	StringConCat(&Var2, &cVar18, 64);
	return Var2;
}

int func_152()
{
	return func_130(PLAYER::PLAYER_ID());
}

void func_153(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_135(49, 50, sParam0, -1, 1);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_355), sParam0, 64);
	}
	if ((!func_60() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_148())
	{
		func_147(28);
	}
	else
	{
		func_146(28);
	}
}

bool func_154()
{
	return func_159(PLAYER::PLAYER_ID());
}

bool func_155(bool bParam0)
{
	return func_156(PLAYER::PLAYER_ID(), bParam0);
}

bool func_156(int iParam0, bool bParam1)
{
	return func_157(iParam0, bParam1, 1);
}

int func_157(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_47())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_158(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1895156[iParam0 /*609*/].f_10;
	if (iVar0 != func_47() && Global_1895156[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0, int iParam1)
{
	if (iParam0 != func_47())
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_47())
		{
			if (Global_1895156[iParam0 /*609*/].f_10 == iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_159(int iParam0)
{
	return func_158(iParam0, 1);
}

int func_160(char* sParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4)
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

struct<16> func_161()
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = func_128(PLAYER::PLAYER_ID());
	if (iVar0 != func_47())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_140(iVar0, 28) || func_140(PLAYER::PLAYER_ID(), 28)) || func_164(iVar0)) && !func_138(iVar0))
			{
				StringCopy(&Var1, func_162(iVar0, 0), 64);
				return Var1;
			}
			if (!func_60() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				StringCopy(&Var1, func_162(iVar0, 0), 64);
				return Var1;
			}
		}
		return Global_1895156[iVar0 /*609*/].f_10.f_105;
	}
	StringCopy(&Var1, "", 64);
	return Var1;
}

char* func_162(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_156(iParam0, 1))
		{
			return func_163();
		}
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC");
}

char* func_163()
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM");
}

int func_164(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_47())
	{
		Var0 = { func_139(iParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_60() || MISC::IS_PROSPERO_VERSION())
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

bool func_165(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2794162.f_5231.f_7[iVar0], iVar1);
}

void func_166()
{
	if (((func_169() == 3 && func_168()) && func_55()) && func_167(Global_4718592.f_117591))
	{
		NETWORK::NETWORK_BAIL(51, 0, 0);
	}
}

int func_167(int iParam0)
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

var func_168()
{
	return BitTest(Global_2684820.f_1.f_2809, 5);
}

int func_169()
{
	return Global_1057409;
}

void func_170()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar49;
	float fVar50;
	struct<3> Var51;
	
	if (func_9(&uLocal_14))
	{
		MISC::SET_BIT(&Global_8371, 2);
		if (func_29(&uLocal_14, 60000, 0))
		{
			func_30(&uLocal_14, 0, 0);
			func_6(&uLocal_14);
		}
	}
	if (func_9(&uLocal_12) && func_29(&uLocal_12, 1000, 0))
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
			func_6(&uLocal_12);
		}
	}
	if (!iLocal_6 && !func_177())
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
			iVar1 = func_24(7869, -1);
			func_76(7869, iVar1 + 1, -1, 1);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&Var2);
			Local_16 = { ENTITY::GET_ENTITY_COORDS(iLocal_5, false) };
			iLocal_19 = 0;
		}
	}
	else
	{
		func_176();
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
					func_6(&uLocal_8);
					func_8(&uLocal_10, 0, 0);
					iLocal_7 = 1;
				}
			}
			else
			{
				fVar49 = (SYSTEM::TO_FLOAT(func_175(&uLocal_10, 0, 0)) / SYSTEM::TO_FLOAT(func_174()));
				fVar50 = (SYSTEM::TO_FLOAT(func_175(&uLocal_8, 0, 0)) / SYSTEM::TO_FLOAT(func_173()));
				fVar50 = (fVar50 * fVar49);
				Var51 = { func_171(Local_16, func_172(), fVar50) };
				ENTITY::SET_ENTITY_COORDS(iLocal_5, Var51, true, false, false, true);
				if (fVar50 >= 1f)
				{
					iLocal_19++;
					Local_16 = { ENTITY::GET_ENTITY_COORDS(iLocal_5, false) };
					func_30(&uLocal_8, 0, 0);
					func_6(&uLocal_8);
					if (func_173() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_5);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_20))
						{
							AUDIO::STOP_SOUND(iLocal_20);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_20);
						iLocal_20 = -1;
						func_8(&uLocal_12, 0, 0);
						func_8(&uLocal_14, 0, 0);
						func_30(&uLocal_10, 0, 0);
						func_6(&uLocal_10);
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

Vector3 func_171(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_172()
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

int func_173()
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

int func_174()
{
	return 3150;
}

int func_175(var uParam0, bool bParam1, bool bParam2)
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

void func_176()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_5, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_5, Var0, 2, true);
}

int func_177()
{
	if (((((((func_181(22107, -1) && Global_2639889 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_180(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2684820.f_3076.f_178 >= 1) && Global_2684820.f_3076.f_178 < 4) && func_179()) && func_178())
	{
		return 1;
	}
	return 0;
}

int func_178()
{
	if (func_181(15476, -1) && func_24(5453, func_19()) > 577)
	{
		return 1;
	}
	return 0;
}

int func_179()
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

bool func_180(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

bool func_181(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_182()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		func_185();
	}
	else
	{
		func_183();
	}
}

void func_183()
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
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_184(bVar0), false);
			MISC::CLEAR_BIT(&iLocal_46, bVar0);
		}
		bVar0++;
	}
	iLocal_47 = 0;
	Global_2766715 = 0;
}

char* func_184(bool bParam0)
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

void func_185()
{
	int iVar0;
	bool bVar1;
	
	if (!func_186(Global_4718592.f_117591))
	{
		return;
	}
	iVar0 = func_24(9877, -1);
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
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_184(bVar1), true);
		}
		if (BitTest(iVar0, bVar1) && !BitTest(iLocal_46, bVar1))
		{
			MISC::SET_BIT(&iLocal_46, bVar1);
			Global_2766715 = 1;
		}
		bVar1++;
	}
}

int func_186(int iParam0)
{
	if ((iParam0 == Global_262145.f_31929[0] || iParam0 == Global_262145.f_31929[1]) || iParam0 == Global_262145.f_31929[2])
	{
		return 1;
	}
	return 0;
}

void func_187()
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

void func_188()
{
	int iVar0;
	
	if (func_55() && func_195(Global_4718592.f_171044))
	{
		if (func_194() == 26)
		{
			iVar0 = func_189();
			if (iVar0 != -1)
			{
				if (func_9(&(Global_1890739[iVar0 /*138*/].f_31)))
				{
					if (func_29(&(Global_1890739[iVar0 /*138*/].f_31), 37500, 0))
					{
						iLocal_44 = 1;
						Global_2684820.f_6341 = -1;
					}
				}
			}
		}
		else if (func_194() == 41)
		{
			if (iLocal_44)
			{
				iLocal_44 = 0;
				Global_2684820.f_6341 = -1;
			}
		}
	}
}

int func_189()
{
	return func_190();
}

int func_190()
{
	struct<13> Var0;
	
	Var0 = { func_192() };
	if (func_191(Var0))
	{
		return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
	}
	return func_47();
}

bool func_191(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> func_192()
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_193(iVar0))
		{
			return Global_2684820.f_1.f_845[iVar0 /*57*/];
		}
		iVar0++;
	}
	return Var1;
}

bool func_193(int iParam0)
{
	return BitTest(Global_2684820.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

int func_194()
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192;
}

bool func_195(int iParam0)
{
	return iParam0 == 88;
}

void func_196()
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_262145.f_33923[0] == Global_4718592.f_117591) && (Global_1058071.f_14[0] >= 4 || Global_1058071.f_14[0] <= 6))
	{
		Var0 = { func_199(101) };
		bVar3 = OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 2961.077f, 2743.28f, 40.7426f, 2957.497f, 2756.674f, 45.11757f, 15f, false, true);
		if (!func_198())
		{
			if (bVar3 || Global_1058071.f_14[0] == 5)
			{
				iVar5 = func_197(&iVar4);
				if (((iVar4 >= 0 && iVar4 < 4) && iVar5 >= 0) || iVar5 < 17)
				{
					MISC::SET_BIT(&(Global_4718592.f_1816[iVar4 /*24279*/].f_8212[iVar5]), 12);
				}
			}
		}
		else if ((!bVar3 && Global_1058071.f_14[0] < 5) || Global_1058071.f_14[0] > 5)
		{
			iVar7 = func_197(&iVar6);
			if (((iVar6 >= 0 && iVar6 < 4) && iVar7 >= 0) || iVar7 < 17)
			{
				MISC::CLEAR_BIT(&(Global_4718592.f_1816[iVar6 /*24279*/].f_8212[iVar7]), 12);
			}
		}
	}
}

var func_197(var uParam0)
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

int func_198()
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	iVar1 = func_197(&iVar0);
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

Vector3 func_199(int iParam0)
{
	switch (iParam0)
	{
		case 101:
			return func_200();
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_200()
{
	struct<3> Var0;
	int iVar3;
	var uVar4;
	
	Var0 = { 0f, 0f, 0f };
	iVar3 = func_201();
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

var func_201()
{
	int iVar0;
	var uVar1[25];
	int iVar27;
	int iVar28;
	var uVar29[25];
	int iVar55;
	
	if (func_129(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() != func_205())
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
								if (VEHICLE::IS_VEHICLE_MODEL(uVar1[iVar0], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(uVar1[iVar0], func_204(1)))
								{
									if (func_202(uVar1[iVar0]) == func_205())
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
	else if (PLAYER::PLAYER_ID() == func_205() && !ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310))
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
						if (VEHICLE::IS_VEHICLE_MODEL(uVar29[iVar28], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(uVar29[iVar28], func_204(1)))
						{
							if (func_202(uVar29[iVar28]) == PLAYER::PLAYER_ID())
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

int func_202(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, func_204(1)))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "Creator_Trailer"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Creator_Trailer");
					return func_203(iVar0, 0, 1, 0);
				}
			}
		}
	}
	return func_47();
}

int func_203(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_44(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_44(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_47();
}

int func_204(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_205()
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}

void func_206()
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
	if (((((((((!func_35(PLAYER::PLAYER_PED_ID()) || !func_44(PLAYER::PLAYER_ID(), 1, 1)) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) || !func_107()) || func_207(PLAYER::PLAYER_ID())) || func_114(PLAYER::PLAYER_ID())) || func_46(PLAYER::PLAYER_ID())) || Global_2672524.f_3542) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_35(iVar0))
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

int func_207(int iParam0)
{
	if (iParam0 != func_47() && func_44(iParam0, 1, 1))
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321, 3);
	}
	return 0;
}

void func_208()
{
	var uVar0;
	
	if (iLocal_29)
	{
		if ((((((func_215() == -1 && func_214() == 999) && func_107()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !CAM::IS_SCREEN_FADING_OUT())
		{
			iLocal_29 = 0;
			func_213(0);
			STATS::STAT_SET_BLOCK_SAVES(false);
			func_210();
		}
	}
	if (!iLocal_28)
	{
		NETWORK::NETWORK_GET_LOCAL_HANDLE(&Local_30, 13);
		if (func_191(Local_30))
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
			if (!func_209())
			{
				func_213(1);
				iLocal_29 = 1;
			}
			iLocal_28 = 0;
		}
	}
}

bool func_209()
{
	return Global_32561;
}

void func_210()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_211(0, iVar0);
		STATS::STAT_CLEAR_SLOT_FOR_RELOAD(iVar0);
		iVar0++;
	}
	STATS::FORCE_CLOUD_MP_STATS_DOWNLOAD_AND_OVERWRITE_LOCAL_SAVE();
}

void func_211(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		func_212();
	}
	Global_1574538[iParam1] = iParam0;
}

void func_212()
{
	Global_2694561 = 0;
}

void func_213(int iParam0)
{
	Global_32561 = iParam0;
}

int func_214()
{
	return Global_32284;
}

int func_215()
{
	return Global_32283;
}

void func_216()
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
				else if (Global_2359296[func_85() /*5568*/].f_681.f_2 != iLocal_27)
				{
					if (!func_9(&uLocal_25))
					{
						func_8(&uLocal_25, 1, 0);
					}
					else if (func_29(&uLocal_25, 10000, 1))
					{
						func_217(1, 0, 1, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_6(&uLocal_25);
				iLocal_27 = -1;
			}
		}
		else
		{
			func_6(&uLocal_25);
			iLocal_27 = -1;
		}
	}
	else
	{
		func_6(&uLocal_25);
		iLocal_27 = -1;
	}
}

void func_217(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_221() < 0 && Global_1963618)
	{
		return;
	}
	if (func_220(35))
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
		func_219(2);
	}
	else
	{
		func_219(1);
	}
	if (bParam1)
	{
		func_219(11);
	}
	if (bParam2)
	{
		func_219(32);
		if (bParam3)
		{
			if (func_221() >= 0 && BitTest(Global_1586488[func_221() /*142*/].f_103, 0))
			{
				func_219(33);
			}
		}
		else
		{
			func_105(33);
		}
		if (func_221() >= 0)
		{
			if (func_218(Global_1586488[func_221() /*142*/].f_66))
			{
				func_219(40);
			}
		}
	}
	else if (bParam5)
	{
		func_219(37);
	}
	if (bParam4)
	{
		func_219(36);
	}
	if (func_220(36))
	{
		if (func_220(2))
		{
			func_105(36);
		}
	}
	if (bParam6)
	{
		func_219(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2794162.f_440 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_218(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_219(bool bParam0)
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

bool func_220(int iParam0)
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2672524.f_62.f_1, iParam0);
	}
	return BitTest(Global_2672524.f_62.f_2, (iParam0 - 32));
}

int func_221()
{
	if (Global_2359296[func_85() /*5568*/].f_681.f_2 >= 415)
	{
		Global_2359296[func_85() /*5568*/].f_681.f_2 = -1;
		return -1;
	}
	return Global_2359296[func_85() /*5568*/].f_681.f_2;
}

void func_222()
{
	if (func_223(PLAYER::PLAYER_ID()) && func_126() == PLAYER::PLAYER_ID())
	{
		if ((PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_WARNING_MESSAGE_ACTIVE()) || func_53())
		{
			func_30(&uLocal_22, 1, 0);
			Global_1950697 = 1;
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				iLocal_24 = 30000;
			}
		}
	}
	if (func_9(&uLocal_22))
	{
		if (func_29(&uLocal_22, iLocal_24, 1))
		{
			func_6(&uLocal_22);
			Global_1950697 = 0;
			iLocal_24 = 10000;
		}
	}
}

int func_223(int iParam0)
{
	if (iParam0 != func_47())
	{
		if (func_44(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_58(Global_2657704[iParam0 /*463*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

void func_224()
{
	if (!func_226() && !func_225())
	{
		if (!STATS::STAT_IS_STATS_TRACKING_ENABLED())
		{
			if (((func_107() && func_44(PLAYER::PLAYER_ID(), 0, 1)) && CAM::IS_SCREEN_FADED_IN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				STATS::STAT_ENABLE_STATS_TRACKING();
			}
		}
	}
}

bool func_225()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("animal_controller")) > 0;
}

bool func_226()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0;
}

void func_227()
{
	if ((Global_112755 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0) && func_107())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_228()
{
	int iVar0;
	
	if (!iLocal_4)
	{
		if (Global_1836398)
		{
			iVar0 = func_229(joaat("mpply_char_exploit_level"));
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

int func_229(int iParam0)
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

void func_230()
{
	if (!iLocal_3)
	{
		if (Global_1836398)
		{
			if (func_232() || func_231())
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

int func_231()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_229(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10874)
	{
		return 0;
	}
	uVar1[0] = func_229(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_229(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_229(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_229(joaat("mpply_prevseason4exploitlevel"));
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

int func_232()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_229(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10873)
	{
		return 0;
	}
	uVar1[0] = func_229(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_229(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_229(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_229(joaat("mpply_prevseason4exploitlevel"));
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

void func_233()
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

void func_234()
{
	if (Global_262145.f_10849 != 120)
	{
		Global_262145.f_10849 = 120;
	}
}

void func_235()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_236(0.69f, 0.06f, "STRING", sLocal_0);
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

void func_236(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_237()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_238()
{
	Global_112837 = 1;
}

