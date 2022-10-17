#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	struct<3> Local_20 = { 0, 0, 0 } ;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	bool bLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	struct<2> Local_38 = { 0, 0 } ;
	int iLocal_40[4] = { 0, 0, 0, 0 };
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	struct<2> Local_47 = { 0, 0 } ;
	struct<2> Local_49 = { 0, 0 } ;
	struct<2> Local_51 = { 0, 0 } ;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	float fLocal_56 = 0f;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	struct<2> Local_62 = { 0, 0 } ;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_96[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	struct<2> Local_120 = { 0, 0 } ;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	struct<2> Local_127 = { 0, 0 } ;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	bool bLocal_138 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.58.05";
	iLocal_3 = -1;
	iLocal_4 = -1;
	iLocal_24 = -1;
	iLocal_25 = -1;
	iLocal_124 = -1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1577989 = MISC::GET_HASH_KEY(sLocal_0);
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (func_293())
		{
			func_291();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723612.f_3)
		{
			func_282();
			func_281();
			func_280();
			func_277();
			func_275();
			func_274();
			func_272();
			func_271();
			func_270();
			func_260();
			func_254();
			func_249();
			func_247();
			func_244();
			func_239();
			func_235();
			func_228();
			func_221();
			func_184();
			func_178();
			func_164();
			func_162();
			func_160();
			func_156();
			func_155();
			func_154();
			func_148();
			func_143();
			func_142();
			func_131();
			func_129();
			func_123();
			func_116();
			func_110();
			func_91();
			func_86();
			func_84();
			func_77();
			func_69();
			func_64();
			func_63();
			func_56();
		}
		func_53();
		func_43();
		func_42();
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_41();
			func_40();
			func_31();
			func_30();
			func_29();
			func_28();
			func_27();
			func_24();
			func_22();
			func_19();
			func_18();
			func_16();
			func_12();
			func_11();
			func_9();
			func_8();
			func_7();
		}
		else
		{
			func_6();
			func_5();
			func_2();
		}
		func_1();
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) == 0)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4718592.f_180134.f_2817 - 1))
		{
			iLocal_70[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	if (!Global_1575033)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4718592.f_180134.f_2817 - 1))
		{
			if (iLocal_70[iVar0] != 0)
			{
				bVar1 = false;
				while (bVar1 <= 4)
				{
					if (BitTest(iLocal_70[iVar0], bVar1))
					{
						Global_4718592.f_180134[iVar0 /*256*/].f_49[bVar1 /*12*/].f_1++;
						MISC::CLEAR_BIT(&(iLocal_70[iVar0]), bVar1);
					}
					bVar1++;
				}
			}
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_180134.f_2817 - 1))
	{
		bVar1 = false;
		while (bVar1 <= 4)
		{
			iVar2 = Global_4718592.f_180134[iVar0 /*256*/].f_49[bVar1 /*12*/].f_1;
			if (iVar2 > 31 && iVar2 <= 60)
			{
				Global_4718592.f_180134[iVar0 /*256*/].f_49[bVar1 /*12*/].f_1 = (Global_4718592.f_180134[iVar0 /*256*/].f_49[bVar1 /*12*/].f_1 - 1);
				MISC::SET_BIT(&(iLocal_70[iVar0]), bVar1);
			}
			bVar1++;
		}
		iVar0++;
	}
}

void func_2()
{
	if (func_4(&Local_62))
	{
		MISC::CLEAR_BIT(&Global_1574942, 6);
	}
	func_3(&Local_62);
	iLocal_64 = 0;
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_4(var uParam0)
{
	return uParam0->f_1;
}

void func_5()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_61)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_4718592.f_658[iVar0 /*22957*/].f_1745[iVar1] = 0f;
			Global_4718592.f_658[iVar0 /*22957*/].f_1763[iVar1] = 0;
			Global_4718592.f_658[iVar0 /*22957*/].f_1781[iVar1] = 0;
			Global_4718592.f_658[iVar0 /*22957*/].f_1799[iVar1] = 0;
			Global_4718592.f_658[iVar0 /*22957*/].f_1817[iVar1] = 0;
			Global_4718592.f_658[iVar0 /*22957*/].f_1835[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iLocal_61 = 0;
}

void func_6()
{
	if (iLocal_82)
	{
		iLocal_82 = 0;
	}
	if (iLocal_83)
	{
		iLocal_83 = 0;
	}
	if (iLocal_110)
	{
		iLocal_110 = 0;
		Global_1922042 = -1;
	}
}

void func_7()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) == 0)
	{
		return;
	}
	if (Global_4718592 == 1 && Global_4718592.f_168758 >= 6)
	{
		return;
	}
	MISC::SET_BIT(&(Global_4718592.f_162934), 15);
	MISC::SET_BIT(&(Global_4718592.f_162934), 16);
}

void func_8()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 5011.289f, -5760.976f, 27.45767f, 5003.436f, -5756.048f, 30.54644f, 1.8f, false, true, 0))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 5010.309f, -5758.543f, 28.8497f, true, false, false, true);
		ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

void func_9()
{
	int iVar0;
	int iVar1;
	
	if (!func_10())
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar0 < 1)
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (iLocal_134 == 0)
	{
		iLocal_134 = iVar1;
	}
	if (iLocal_134 != iVar1)
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_134, true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_134, false, true);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_134);
			iLocal_134 = iVar1;
		}
	}
}

int func_10()
{
	if ((((((Global_4718592.f_116524 == 798118803 || Global_4718592.f_116524 == 1451106821) || Global_4718592.f_116524 == 666726606) || Global_4718592.f_116524 == -128380641) || Global_4718592.f_116524 == 1359250298) || Global_4718592.f_116524 == 1854108781) || Global_4718592.f_116524 == 2144011286)
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	if (Global_1574965)
	{
		return;
	}
	if (Global_4718592 == 1 && Global_4718592.f_168758 >= 6)
	{
		if (Global_1836583 < 120)
		{
			Global_1922042 = 120;
			iLocal_110 = 1;
		}
	}
}

void func_12()
{
	if (Global_4718592.f_175385 == 0)
	{
		return;
	}
	if (!func_15())
	{
		if (!BitTest(Global_1574942, 6))
		{
			MISC::SET_BIT(&Global_1574942, 6);
		}
		return;
	}
	if (!func_4(&Local_62))
	{
		func_14(&Local_62, 0, 0);
	}
	if (func_4(&Local_62))
	{
		if (func_13(Local_62, 5000, 0))
		{
			MISC::CLEAR_BIT(&Global_1574942, 6);
		}
		else
		{
			MISC::SET_BIT(&Global_1574942, 6);
		}
	}
}

int func_13(int iParam0, var uParam1, int iParam2, bool bParam3)
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

void func_14(var uParam0, bool bParam1, bool bParam2)
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

int func_15()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 <= 31)
	{
		iVar1 = bVar0;
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 2) && !BitTest(iLocal_64, bVar0))
		{
			return 0;
		}
		else if (!BitTest(iLocal_64, bVar0))
		{
			MISC::SET_BIT(&iLocal_64, bVar0);
		}
		bVar0++;
	}
	return 1;
}

void func_16()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_race_controler")) == 0)
	{
		iLocal_125 = 0;
		return;
	}
	if (!BitTest(Global_4718592.f_162497, 12))
	{
		return;
	}
	if (iLocal_125)
	{
		return;
	}
	if (!Global_1836364)
	{
		return;
	}
	if (func_17(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		iLocal_125 = 1;
	}
}

int func_17(int iParam0)
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

void func_18()
{
	if (Global_4718592.f_168757 == 90)
	{
		iLocal_61 = 1;
	}
}

void func_19()
{
	if (func_20(Global_4718592.f_116524) != 5)
	{
		return;
	}
	if (BitTest(Global_4980736.f_94390[25 /*1004*/].f_535, 17))
	{
		return;
	}
	MISC::SET_BIT(&(Global_4980736.f_94390[25 /*1004*/].f_535), 17);
}

int func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_21(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_21(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32760[iParam0];
	}
	return -1;
}

void func_22()
{
	int iVar0;
	
	if (iLocal_108)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
		{
			iLocal_108 = 0;
		}
		return;
	}
	if (iLocal_109)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller")) == 0)
		{
			iLocal_109 = 0;
		}
		return;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller")) == 0)
	{
		return;
	}
	if (!Global_1574965)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_94384 - 1))
	{
		if (!BitTest(Global_4980736.f_94390[iVar0 /*1004*/].f_140[0], 2))
		{
			if (BitTest(Global_4980736.f_94390[iVar0 /*1004*/].f_530, 15))
			{
				func_23(&(Global_4980736.f_94390[iVar0 /*1004*/].f_140), 1);
			}
			if (BitTest(Global_4980736.f_94390[iVar0 /*1004*/].f_542, 30))
			{
				func_23(&(Global_4980736.f_94390[iVar0 /*1004*/].f_140), 7);
			}
			if (BitTest(Global_4980736.f_94390[iVar0 /*1004*/].f_547, 9))
			{
				func_23(&(Global_4980736.f_94390[iVar0 /*1004*/].f_140), 3);
			}
			if (BitTest(Global_4980736.f_94390[iVar0 /*1004*/].f_544, 30))
			{
				func_23(&(Global_4980736.f_94390[iVar0 /*1004*/].f_140), 4);
			}
			if (BitTest(Global_4980736.f_94390[iVar0 /*1004*/].f_537, 13))
			{
				func_23(&(Global_4980736.f_94390[iVar0 /*1004*/].f_140), 5);
			}
		}
		iVar0++;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		iLocal_108 = 1;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller")) > 0)
	{
		iLocal_109 = 1;
	}
}

void func_23(var uParam0, int iParam1)
{
	MISC::SET_BIT(uParam0[(iParam1 / 32)], (iParam1 % 32));
}

void func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	
	if (Global_4718592.f_168757 != 90)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_PLAYER_TEAM(iVar0);
	iVar2 = 0;
	if (iVar1 != -1 && iVar1 < 4)
	{
		iVar2 = Global_1058069.f_14[iVar1];
	}
	if (Global_1574964)
	{
		if (fLocal_60 != 0f)
		{
			if (((iVar1 != -1 && iVar1 < 4) && iVar2 != -1) && iVar2 < 17)
			{
				Global_4718592.f_658[iVar1 /*22957*/].f_1745[iVar2] = fLocal_60;
			}
			fLocal_60 = 0f;
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		iLocal_59 = 0;
		func_3(&uLocal_57);
		return;
	}
	if (PLAYER::GET_PLAYER_TEAM(iVar0) != 0)
	{
		return;
	}
	if ((((iVar1 != 0 || iVar1 == -1) || iVar1 >= 4) || iVar2 < 0) || iVar2 >= 17)
	{
		return;
	}
	fVar3 = Global_4718592.f_658[iVar1 /*22957*/].f_1745[iVar2];
	iVar4 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar5 = iVar4;
	iVar6 = ENTITY::GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(iVar5, 1);
	if (iVar6 < 0)
	{
		return;
	}
	iVar7 = iVar6;
	if (!func_26(iVar7, 1, 1))
	{
		return;
	}
	if (!func_26(iVar0, 1, 1) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (fLocal_56 > 11f)
		{
			MISC::SET_BIT(&(Global_1058031.f_33), 30);
			if (fLocal_60 == 0f)
			{
				fLocal_60 = fVar3;
				FIRE::STOP_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 400, PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
			}
			Global_4718592.f_658[iVar1 /*22957*/].f_1745[iVar2] = 0f;
			func_3(&uLocal_57);
			iLocal_59 = 0;
		}
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	if (fLocal_60 != 0f)
	{
		Global_4718592.f_658[iVar1 /*22957*/].f_1745[iVar2] = fLocal_60;
		fLocal_60 = 0f;
	}
	fVar8 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iVar4)) - 100f);
	fVar9 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar4)) - 100f);
	fVar10 = ((fVar8 / fVar9) * 100f);
	fLocal_56 = fVar10;
	fVar11 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar5, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar7), true));
	if (fVar11 < fVar3)
	{
		iLocal_59 = 1;
		if (func_4(&uLocal_57))
		{
			func_3(&uLocal_57);
		}
		bVar12 = true;
	}
	else if (func_4(&uLocal_57))
	{
		bVar12 = true;
	}
	if (bVar12)
	{
		if (fVar10 <= 11f)
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar5);
			iLocal_59 = 0;
			func_3(&uLocal_57);
			return;
		}
	}
	if ((iLocal_59 && fVar11 >= fVar3) && !func_4(&uLocal_57))
	{
		func_14(&uLocal_57, 0, 0);
		iLocal_59 = 0;
	}
	if (func_4(&uLocal_57))
	{
		iVar13 = func_25(&uLocal_57, 0, 0);
		iVar14 = Global_4718592.f_658[iVar1 /*22957*/].f_1781[iVar2];
		if (iVar13 > iVar14)
		{
			func_3(&uLocal_57);
		}
	}
}

int func_25(var uParam0, bool bParam1, bool bParam2)
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

int func_26(int iParam0, bool bParam1, bool bParam2)
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
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_27()
{
	int iVar0;
	int iVar1;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) == 0)
	{
		return;
	}
	if (Global_1575033)
	{
		return;
	}
	if (Global_4718592 == 1 && Global_4718592.f_168758 >= 6)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (iVar1 == joaat("weapon_precisionrifle") || iVar1 == joaat("weapon_tacticalrifle"))
		{
			if (!iLocal_83)
			{
				iLocal_83 = 1;
				iVar0 = 0;
				while (iVar0 <= 10)
				{
					uLocal_84[iVar0] = Global_4718592.f_180134[iVar0 /*256*/].f_37.f_3;
					uLocal_96[iVar0] = Global_4718592.f_180134[iVar0 /*256*/].f_43.f_3;
					Global_4718592.f_180134[iVar0 /*256*/].f_37.f_3 = 0;
					Global_4718592.f_180134[iVar0 /*256*/].f_43.f_3 = 0;
					iVar0++;
				}
			}
		}
		else if (iLocal_83)
		{
			iLocal_83 = 0;
			iVar0 = 0;
			while (iVar0 <= 10)
			{
				Global_4718592.f_180134[iVar0 /*256*/].f_37.f_3 = uLocal_84[iVar0];
				Global_4718592.f_180134[iVar0 /*256*/].f_43.f_3 = uLocal_96[iVar0];
				iVar0++;
			}
		}
	}
}

void func_28()
{
	if (Global_4718592.f_116524 == 380938673 || Global_4718592.f_116524 == 1597839856)
	{
		if (!BitTest(Global_4718592.f_35, 2))
		{
			MISC::SET_BIT(&(Global_4718592.f_35), 2);
		}
	}
}

void func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) == 0)
	{
		iLocal_82 = 0;
		return;
	}
	if (iLocal_82)
	{
		return;
	}
	if (Global_1574965)
	{
		return;
	}
	if (Global_1574967)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_180134.f_2817 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			iVar2 = Global_4718592.f_180134[iVar0 /*256*/].f_49[iVar1 /*12*/].f_1;
			if (iVar2 > 31 && iVar2 <= 60)
			{
				Global_4718592.f_180134[iVar0 /*256*/].f_49[iVar1 /*12*/].f_1 = (Global_4718592.f_180134[iVar0 /*256*/].f_49[iVar1 /*12*/].f_1 - 1);
			}
			iVar1++;
		}
		iVar0++;
	}
	iLocal_82 = 1;
}

void func_30()
{
	if ((Global_4718592 == 1 && Global_4718592.f_168758 >= 6) && Global_1836382)
	{
		Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_10 = Global_2715699.f_3813.f_9;
		Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_9 = Global_2715699.f_3813.f_1;
	}
}

void func_31()
{
	bool bVar0;
	bool bVar1;
	var uVar2[4];
	int iVar7;
	
	if ((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || Global_1575058) || Global_1574964) || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_39())
	{
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1575058) || Global_1574964)
		{
			if (fLocal_45 > 0f || fLocal_46 > 0f)
			{
				func_38();
				fLocal_45 = 0f;
				fLocal_46 = 0f;
				func_3(&Local_47);
				func_3(&Local_49);
				func_3(&Local_51);
			}
		}
		return;
	}
	bVar0 = fLocal_46 > 40f;
	if (!Global_1575058 && !bVar0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || func_37())
		{
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (!Global_1574965)
				{
					return;
				}
				bVar1 = true;
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
				{
					func_36(&(uVar2[0]), &(uVar2[1]), &(uVar2[2]), &(uVar2[3]), 0);
					iVar7 = 0;
					while (iVar7 < 4)
					{
						if (func_35(uVar2[iVar7], &(iLocal_40[iVar7])))
						{
							bVar1 = false;
						}
						iVar7++;
					}
				}
				else
				{
					bVar1 = true;
					if (func_32())
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (!func_4(&Local_47))
					{
						func_14(&Local_47, 0, 0);
					}
					if (func_4(&Local_47) && func_13(Local_47, 2000, 0))
					{
						fLocal_45 = (fLocal_45 + MISC::GET_FRAME_TIME());
					}
				}
				else
				{
					if (func_4(&Local_47))
					{
						func_3(&Local_47);
						func_38();
					}
					fLocal_46 = (fLocal_46 + MISC::GET_FRAME_TIME());
					fLocal_45 = 0f;
				}
				if ((MISC::GET_FRAME_COUNT() % 60) == 0)
				{
				}
				if (fLocal_45 > 40f)
				{
					NETWORK::NETWORK_BAIL(55457, Global_1940663[0], Global_1940663[1]);
				}
			}
			else
			{
				func_38();
			}
		}
		else
		{
			func_38();
		}
	}
	else if (bVar0)
	{
	}
}

int func_32()
{
	bool bVar0;
	var uVar1[4];
	
	bVar0 = true;
	if (func_4(&Local_49) && func_13(Local_49, 4000, 0))
	{
		func_3(&Local_49);
	}
	func_36(&(uVar1[0]), &(uVar1[1]), &(uVar1[2]), &(uVar1[3]), 0);
	if (func_34(uVar1[3], &(iLocal_40[3])))
	{
		bVar0 = false;
	}
	if ((((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 61) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 62)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 63)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 64)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 76)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 74)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 36)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 25)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 24)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 22)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 23)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 21)) || !bVar0)
	{
		func_33(&Local_49, 0, 0);
	}
	if (func_4(&Local_49))
	{
		return 1;
	}
	return 0;
}

void func_33(var uParam0, bool bParam1, bool bParam2)
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

int func_34(int iParam0, var uParam1)
{
	if ((iParam0 > 1 || iParam0 < -1) && *uParam1 != iParam0)
	{
		*uParam1 = iParam0;
		return 1;
	}
	return 0;
}

int func_35(int iParam0, var uParam1)
{
	if ((iParam0 > 10 || iParam0 < -10) && *uParam1 != iParam0)
	{
		*uParam1 = iParam0;
		func_33(&Local_51, 0, 0);
		return 1;
	}
	if (((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 76) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 74)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 36)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 25)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 24)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 22)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 23)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 21))
	{
		func_33(&Local_51, 0, 0);
		return 1;
	}
	if (func_4(&Local_51))
	{
		if (func_13(Local_51, 2500, 0))
		{
			func_3(&Local_51);
		}
		return 1;
	}
	return 0;
}

void func_36(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

var func_37()
{
	return Global_2714762.f_691;
}

void func_38()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_40[iVar0] = 0;
		iVar0++;
	}
}

bool func_39()
{
	return (Global_4718592 == 0 && Global_4718592.f_2 == 6);
}

void func_40()
{
	int iVar0;
	int iVar1;
	
	if (!func_10())
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		return;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ENTITY::GET_ENTITY_MODEL(iVar1) != joaat("hunter"))
	{
		return;
	}
	WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("vehicle_weapon_hunter_barrage"));
}

void func_41()
{
	int iVar0;
	
	if (!func_10())
	{
		return;
	}
	if (!Global_1574965)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		MISC::SET_BIT(&(Global_4980736.f_5[iVar0 /*273*/].f_90), false);
		iVar0++;
	}
}

void func_42()
{
	struct<3> Var0;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!iLocal_113)
	{
		Var0 = { -878.0269f, -359.4522f, 36.2491f };
		iVar3 = joaat("hei_prop_bh1_08_mp_gar2");
		Var4 = { -878.5042f, -358.2391f, 34.6839f };
		Var7 = { -858.5212f, -400.1935f, 53.7559f };
		if ((func_26(PLAYER::PLAYER_ID(), 1, 1) && func_17(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var4, Var7, 20f, false, true, 0))
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Var0, 3f, iVar3, false))
			{
				iLocal_113 = 1;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_114))
			{
				STREAMING::REQUEST_MODEL(iVar3);
				if (STREAMING::HAS_MODEL_LOADED(iVar3))
				{
					iLocal_114 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar3, Var0, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iLocal_114, 0f, 0f, 27f, 2, true);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_114, true);
					ENTITY::SET_ENTITY_COLLISION(iLocal_114, true, false);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_114, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_114, true);
					iLocal_113 = 1;
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
				}
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_114))
		{
			OBJECT::DELETE_OBJECT(&iLocal_114);
		}
		iLocal_113 = 0;
	}
}

void func_43()
{
	if (!func_51(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_47())
	{
		if (((!func_45() || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || func_44()) && !Global_2815059.f_6773)
		{
			Global_2815059.f_6773 = 1;
		}
	}
}

var func_44()
{
	return Global_1575058;
}

int func_45()
{
	if (func_46() == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()
{
	return Global_1574632.f_18;
}

bool func_47()
{
	return func_48(0);
}

int func_48(bool bParam0)
{
	var uVar0;
	
	uVar0 = Global_1659753[func_49(-1)];
	if (BitTest(uVar0, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_50();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_50()
{
	return Global_1574918;
}

int func_51(int iParam0)
{
	if (iParam0 != func_52())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_336 != 0;
	}
	return 0;
}

int func_52()
{
	return -1;
}

void func_53()
{
	func_55();
	func_54();
}

void func_54()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) == 0)
	{
		return;
	}
	if (Global_4718592.f_168758 >= 6 && Global_262145.f_25749 == 0)
	{
		NETWORK::NETWORK_BAIL(1, 0, 0);
	}
}

void func_55()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) == 0)
	{
		return;
	}
	if (Global_4718592.f_168758 >= 6 && Global_262145.f_25749 == 0)
	{
		Global_1574607 = 1;
		NETWORK::NETWORK_BAIL(1, 0, 0);
	}
}

void func_56()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !func_45())
	{
		func_62(0);
		return;
	}
	switch (iLocal_136)
	{
		case 0:
			if (func_60())
			{
				func_62(1);
			}
			break;
		
		case 1:
			if (!func_60())
			{
				func_62(0);
			}
			if (func_59() && !func_58())
			{
				func_62(2);
			}
			break;
		
		case 2:
			if (!func_60())
			{
				func_62(0);
			}
			if (!func_59() || func_58())
			{
				func_62(1);
			}
			if (func_57())
			{
				func_62(3);
				bLocal_138 = bLocal_137;
			}
			break;
		
		case 3:
			if (!func_60())
			{
				func_62(0);
				bVar0 = true;
			}
			if (!func_59() || func_58())
			{
				func_62(1);
				bVar0 = true;
			}
			if (!func_57())
			{
				func_62(2);
				bVar0 = true;
			}
			if (bVar0)
			{
				if (bLocal_138 != PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bLocal_138, 0);
				}
			}
			break;
	}
	bLocal_137 = PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID());
}

bool func_57()
{
	return Global_1963987;
}

bool func_58()
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192 != 0;
}

bool func_59()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

bool func_60()
{
	return func_61(PLAYER::PLAYER_ID(), 7);
}

var func_61(int iParam0, int iParam1)
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

void func_62(int iParam0)
{
	if (iParam0 != iLocal_136)
	{
		iLocal_136 = iParam0;
	}
}

void func_63()
{
	if (func_58())
	{
		if (!iLocal_135)
		{
			Global_1946105 = 1;
			iLocal_135 = 1;
		}
	}
	else if (iLocal_135)
	{
		iLocal_135 = 0;
		Global_1946105 = 0;
	}
}

void func_64()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if ((func_68(PLAYER::PLAYER_ID()) == 276 && func_66(PLAYER::PLAYER_ID()) == 3) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tuner_sandbox_activity")) > 0)
	{
		if (!iLocal_132)
		{
			func_65(1);
			iLocal_132 = 1;
		}
		if (!iLocal_133)
		{
			MISC::SET_BIT(&(Global_1946250.f_4523), 2);
			iLocal_133 = 1;
		}
	}
	else if (iLocal_132)
	{
		iLocal_132 = 0;
		func_65(0);
	}
	else if (iLocal_133)
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_4523), 2);
		iLocal_133 = 0;
	}
}

void func_65(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_2815059.f_4660), false);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), false);
	}
}

int func_66(int iParam0)
{
	if (func_67(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_67(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_68(int iParam0)
{
	if (func_67(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

void func_69()
{
	if (func_75(PLAYER::PLAYER_ID()) && Global_1957730)
	{
		if (!iLocal_131)
		{
			func_74(45, 1, 1);
			iLocal_131 = 1;
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
		{
			PAD::DISABLE_CONTROL_ACTION(2, 58, true);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(2, 51, true);
		}
	}
	else if (iLocal_131)
	{
		Global_1957730 = 0;
		func_70(45, 1, 1);
		iLocal_131 = 0;
	}
}

void func_70(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100493.f_1393[iParam0]), bParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_31959 == 0)
		{
			iVar0 = func_72(func_73(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, bParam1);
			func_71(func_73(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

void func_71(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_49(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_73(int iParam0)
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
			return 11352;
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
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		default:
			break;
	}
	return 13122;
}

void func_74(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100493.f_1393[iParam0]), bParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_31959 == 0)
		{
			iVar0 = func_72(func_73(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, bParam1);
			func_71(func_73(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_75(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_76(Global_2689235[iParam0 /*453*/].f_318.f_6) == 23;
			}
		}
	}
	return 0;
}

int func_76(int iParam0)
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
	}
	return -1;
}

void func_77()
{
	int iVar0;
	
	if (!iLocal_130)
	{
		if (((func_75(PLAYER::PLAYER_ID()) || func_83(PLAYER::PLAYER_ID())) || func_82()) && !func_81())
		{
			if (func_80())
			{
				iLocal_130 = 1;
			}
		}
	}
	else if (func_78(PLAYER::PLAYER_ID()))
	{
		iVar0 = 0;
		while (iVar0 < 363)
		{
			if (BitTest(Global_1585857[iVar0 /*142*/].f_103, 15))
			{
				if (Global_1585857[iVar0 /*142*/].f_140 == 0 && !BitTest(Global_1585857[iVar0 /*142*/].f_103, 13))
				{
					MISC::SET_BIT(&(Global_1585857[iVar0 /*142*/].f_103), 13);
				}
			}
			iVar0++;
		}
		iLocal_130 = 0;
	}
}

int func_78(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2689235[iParam0 /*453*/].f_244 > -1)
		{
			if (func_79(Global_2689235[iParam0 /*453*/].f_244) == 4 || func_79(Global_2689235[iParam0 /*453*/].f_244) == 5)
			{
				return 1;
			}
		}
		if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0)
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
	}
	return 6;
}

int func_80()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_4(&(Global_2815059.f_2309[iVar0 /*44*/].f_41)) && ((Global_2815059.f_2309[iVar0 /*44*/].f_6 == 174 || Global_2815059.f_2309[iVar0 /*44*/].f_6 == 185) || Global_2815059.f_2309[iVar0 /*44*/].f_6 == 186))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_81()
{
	return Global_75485;
}

bool func_82()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_luxury_showroom")) > 0;
}

int func_83(int iParam0)
{
	if (iParam0 != func_52())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 25);
	}
	return 0;
}

void func_84()
{
	if (func_72(func_85(0), -1, 0) > 40 && Global_2789412[0 /*106*/].f_66 != joaat("weevil"))
	{
		Global_2789412[0 /*106*/].f_66 = joaat("weevil");
	}
	if (func_72(func_85(1), -1, 0) > 40 && Global_2789412[1 /*106*/].f_66 != joaat("brioso2"))
	{
		Global_2789412[1 /*106*/].f_66 = joaat("brioso2");
	}
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9861;
		
		case 1:
			return 9862;
		
		default:
	}
	return 13122;
}

void func_86()
{
	if (func_87(PLAYER::PLAYER_ID()))
	{
		if (!iLocal_129)
		{
			MISC::SET_BIT(&(Global_4718592.f_33), 23);
			iLocal_129 = 1;
		}
	}
	else if (iLocal_129)
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_33), 23);
		iLocal_129 = 0;
	}
}

int func_87(int iParam0)
{
	if (iParam0 != func_52())
	{
		if ((func_90(iParam0) || func_89(iParam0)) || func_88(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0)
{
	if (iParam0 != func_52())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_3, 6);
	}
	return 0;
}

int func_89(int iParam0)
{
	if (iParam0 != func_52())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 29);
	}
	return 0;
}

int func_90(int iParam0)
{
	if (iParam0 != func_52())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_2, 16);
	}
	return 0;
}

void func_91()
{
	if (func_68(PLAYER::PLAYER_ID()) == 297 && func_66(PLAYER::PLAYER_ID()) == 1)
	{
		if (!iLocal_126)
		{
			if (!func_4(&Local_127))
			{
				func_14(&Local_127, 1, 0);
			}
			else if (func_109(Local_127, 1000, 1))
			{
				func_107();
				func_101(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
				func_92(0, 0, 0, 0, 0);
				iLocal_126 = 1;
				func_3(&Local_127);
			}
		}
	}
	else if (iLocal_126)
	{
		iLocal_126 = 0;
		func_3(&Local_127);
	}
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2703735.f_1571.f_703.f_16 != func_52())
	{
		if (BitTest(Global_2689235[Global_2703735.f_1571.f_703.f_16 /*453*/].f_416, 0) && func_93())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674954 = 0;
	}
	Global_2667225.f_490 = iParam0;
	Global_2667225.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2667225.f_490.f_2 = iParam1;
	Global_2667225.f_490.f_3 = iParam2;
	Global_2667225.f_490.f_4 = iParam3;
	Global_2667225.f_490.f_5 = iParam4;
}

int func_93()
{
	if ((((((func_68(PLAYER::PLAYER_ID()) == 229 || func_68(PLAYER::PLAYER_ID()) == 191) || func_100()) || func_99()) || func_98()) || Global_2788199.f_227 == 1) || (Global_2667225.f_1753 && func_94(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_94(int iParam0)
{
	if (func_97(iParam0))
	{
		return 1;
	}
	if (func_95(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_95(int iParam0)
{
	return func_96(iParam0, 20);
}

var func_96(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_97(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

var func_98()
{
	return Global_2788198;
}

var func_99()
{
	return Global_1836579;
}

int func_100()
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_101(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_106())
		{
			func_105();
		}
		Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_714.f_504 = iParam1;
		Global_2667225.f_714.f_505 = iParam2;
		Global_2667225.f_714.f_506 = iParam10;
		func_107();
		func_92(8, 0, 0, 0, 0);
		Global_2667225.f_714.f_507 = iParam11;
		Global_2667225.f_714.f_512 = iParam3;
		Global_2667225.f_714.f_513 = iParam4;
		Global_2667225.f_714.f_510 = iParam5;
		Global_2667225.f_714.f_511 = iParam6;
		Global_2667225.f_714.f_514 = iParam7;
		Global_2667225.f_714.f_515 = iParam8;
		Global_2667225.f_714.f_516 = iParam9;
		Global_2667225.f_714.f_517 = iParam14;
		Global_2667225.f_714.f_508 = iParam12;
		Global_2667225.f_714.f_509 = iParam13;
		Global_2667225.f_1753 = 1;
	}
	else
	{
		func_102();
	}
}

void func_102()
{
	if (func_106() && !func_104())
	{
		func_105();
	}
	if (func_104())
	{
		func_103();
	}
	else
	{
		func_107();
		func_92(0, 0, 0, 0, 0);
		Global_2667225.f_1753 = 0;
		Global_2667225.f_1752 = 0;
	}
}

void func_103()
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_714), &(Global_2667225.f_1233), 519);
	Global_2667225.f_490 = { Global_2667225.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_714.f_518)
	{
		Global_2667225.f_1752 = 0;
	}
}

int func_104()
{
	if ((Global_2667225.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_1233.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_1233.f_518))
	{
		return 1;
	}
	return 0;
}

void func_105()
{
	if (func_104())
	{
		if (Global_2667225.f_714.f_518 == Global_2667225.f_1233.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_714.f_518)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_1233), &(Global_2667225.f_714), 519);
		Global_2667225.f_496 = { Global_2667225.f_490 };
		Global_2667225.f_1752 = 1;
	}
}

int func_106()
{
	if ((Global_2667225.f_1753 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_714.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_714.f_518))
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	if (func_106() && !func_104())
	{
		func_105();
	}
	func_108();
	Global_2667225.f_714 = 0;
}

void func_108()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2667225.f_714.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

int func_109(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_4(&iParam0))
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

void func_110()
{
	struct<16> Var0;
	char* sVar16;
	
	if (iLocal_123)
	{
		if (func_26(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (iLocal_124 != func_50() || !func_115(PLAYER::PLAYER_ID()))
			{
				iLocal_123 = 0;
				iLocal_124 = -1;
			}
		}
	}
	else if (func_26(PLAYER::PLAYER_ID(), 0, 1))
	{
		if (func_115(PLAYER::PLAYER_ID()))
		{
			Var0 = { func_114(47, 48, -1) };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				sVar16 = func_113();
				func_111(47, 48, sVar16, -1, 1);
			}
			iLocal_124 = func_50();
			iLocal_123 = 1;
		}
	}
}

void func_111(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar10[32];
	int iVar18;
	int iVar19;
	
	if (func_112())
	{
		iVar0 = Global_2868353[iParam0 /*3*/][func_49(iParam3)];
		iVar1 = Global_2868353[iParam1 /*3*/][func_49(iParam3)];
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
}

int func_112()
{
	return 1;
	return 0;
}

char* func_113()
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM");
}

struct<16> func_114(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	char cVar18[32];
	
	iVar0 = Global_2868353[iParam0 /*3*/][func_49(iParam2)];
	iVar1 = Global_2868353[iParam1 /*3*/][func_49(iParam2)];
	StringCopy(&Var2, STATS::STAT_GET_STRING(iVar0, -1), 64);
	StringCopy(&cVar18, STATS::STAT_GET_STRING(iVar1, -1), 32);
	StringConCat(&Var2, &cVar18, 64);
	return Var2;
}

int func_115(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_131, 14);
}

void func_116()
{
	if (func_17(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_119)
		{
			if (((BitTest(Global_1946250, 27) && BitTest(Global_1946250.f_5, 20)) && (Global_2676154.f_1 == 15 || Global_2676154.f_1 == 17)) && func_122(1))
			{
				iLocal_119 = 1;
				func_14(&Local_120, 0, 0);
			}
		}
		else
		{
			if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_119(), "base", 3) && func_122(1)) && func_45())
			{
				MISC::SET_BIT(&Global_1946250, 27);
				MISC::SET_BIT(&(Global_1946250.f_5), 20);
				func_118(5);
				func_117(0);
				iLocal_119 = 0;
				func_3(&Local_120);
			}
			if (func_109(Local_120, 10000, 0))
			{
				iLocal_119 = 0;
				func_3(&Local_120);
			}
		}
	}
}

void func_117(int iParam0)
{
	Global_2676154 = iParam0;
}

void func_118(int iParam0)
{
	if (!Global_2671449 == iParam0)
	{
		Global_2671449.f_1 = 0;
	}
	Global_2671449 = iParam0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2671449.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

char* func_119()
{
	if (func_120())
	{
		return "ANIM@AMB@CLUBHOUSE@SEATING@FEMALE@VAR_B@BASE@";
	}
	else
	{
		return "ANIM@AMB@CLUBHOUSE@SEATING@MALE@VAR_B@BASE@";
	}
	return "";
}

bool func_120()
{
	return func_121(PLAYER::PLAYER_ID());
}

int func_121(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_122(int iParam0)
{
	return Global_2676154 == iParam0;
}

void func_123()
{
	if (!iLocal_115)
	{
		iLocal_116 = func_72(2060, -1, 0);
		iLocal_115 = 1;
	}
	else if (!func_4(&uLocal_117))
	{
		if (func_128())
		{
			func_14(&uLocal_117, 0, 0);
		}
	}
	else
	{
		if (func_128())
		{
			func_33(&uLocal_117, 0, 0);
			return;
		}
		if (func_127(&uLocal_117, 31000, 0))
		{
			func_124(-35837372, 10, 0);
			func_3(&uLocal_117);
		}
	}
}

void func_124(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_126(iParam1, iParam2))
	{
		iVar0 = func_125();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_125()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725297[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_126(int iParam0, var uParam1)
{
	if (Global_1575046)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575058) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_127(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_14(uParam0, bParam2, 0);
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

int func_128()
{
	int iVar0;
	
	if (func_81())
	{
		iVar0 = func_72(2060, -1, 0);
		if (iLocal_116 != iVar0)
		{
			iLocal_116 = iVar0;
		}
	}
	else if ((func_75(PLAYER::PLAYER_ID()) || func_83(PLAYER::PLAYER_ID())) || func_82())
	{
		iVar0 = func_72(2060, -1, 0);
		if (iLocal_116 != iVar0)
		{
			iLocal_116 = iVar0;
			return 1;
		}
	}
	return 0;
}

void func_129()
{
	if (func_81())
	{
		if (HUD::GET_CURRENT_WEBSITE_ID() == 2)
		{
			if (HUD::GET_CURRENT_WEBPAGE_ID() == 8)
			{
				func_130();
			}
		}
	}
}

void func_130()
{
	if (!Global_1931939)
	{
	}
	Global_1931939 = 1;
}

void func_131()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar49;
	float fVar50;
	struct<3> Var51;
	
	if (func_4(&uLocal_18))
	{
		MISC::SET_BIT(&Global_8137, 2);
		if (func_127(&uLocal_18, 60000, 0))
		{
			func_33(&uLocal_18, 0, 0);
			func_3(&uLocal_18);
		}
	}
	if (func_4(&uLocal_16) && func_127(&uLocal_16, 1000, 0))
	{
		if (iLocal_25 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_25 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_25, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_127(&uLocal_16, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_25))
			{
				AUDIO::STOP_SOUND(iLocal_25);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_25);
			iLocal_25 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_33(&uLocal_16, 0, 0);
			func_3(&uLocal_16);
		}
	}
	if (!iLocal_10 && !func_137())
	{
		return;
	}
	iLocal_10 = 1;
	MISC::SET_BIT(&Global_8137, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_9))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_9 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 360.8759f, 5623.427f, 780.1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_9, true);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_9, 8000);
			iVar1 = func_72(7869, -1, 0);
			func_71(7869, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&Var2);
			Local_20 = { ENTITY::GET_ENTITY_COORDS(iLocal_9, false) };
			iLocal_23 = 0;
		}
	}
	else
	{
		func_136();
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_24 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_24 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_24, "07", iLocal_9, "DLC_GR_CS2_Sounds", false, 0);
			}
			if (!iLocal_11)
			{
				if (func_127(&uLocal_12, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_9, false);
					func_33(&uLocal_12, 0, 0);
					func_3(&uLocal_12);
					func_14(&uLocal_14, 0, 0);
					iLocal_11 = 1;
				}
			}
			else
			{
				fVar49 = (SYSTEM::TO_FLOAT(func_25(&uLocal_14, 0, 0)) / SYSTEM::TO_FLOAT(func_135()));
				fVar50 = (SYSTEM::TO_FLOAT(func_25(&uLocal_12, 0, 0)) / SYSTEM::TO_FLOAT(func_134()));
				fVar50 = (fVar50 * fVar49);
				Var51 = { func_132(Local_20, func_133(), fVar50) };
				ENTITY::SET_ENTITY_COORDS(iLocal_9, Var51, true, false, false, true);
				if (fVar50 >= 1f)
				{
					iLocal_23++;
					Local_20 = { ENTITY::GET_ENTITY_COORDS(iLocal_9, false) };
					func_33(&uLocal_12, 0, 0);
					func_3(&uLocal_12);
					if (func_134() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_9);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_24))
						{
							AUDIO::STOP_SOUND(iLocal_24);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_24);
						iLocal_24 = -1;
						func_14(&uLocal_16, 0, 0);
						func_14(&uLocal_18, 0, 0);
						func_33(&uLocal_14, 0, 0);
						func_3(&uLocal_14);
						Local_20 = { 0f, 0f, 0f };
						iLocal_23 = 0;
						iLocal_10 = 0;
						iLocal_11 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_132(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_133()
{
	switch (iLocal_23)
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

int func_134()
{
	switch (iLocal_23)
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

int func_135()
{
	return 3150;
}

void func_136()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_9, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_9, Var0, 2, true);
}

int func_137()
{
	if (((((((func_141(22107, -1) && Global_2671449 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_140(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2715699.f_3076.f_178 >= 1) && Global_2715699.f_3076.f_178 < 4) && func_139()) && func_138())
	{
		return 1;
	}
	return 0;
}

int func_138()
{
	if (func_141(15476, -1) && func_72(5453, func_50(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_139()
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

bool func_140(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

bool func_141(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_142()
{
	if (func_68(PLAYER::PLAYER_ID()) == 276 && func_66(PLAYER::PLAYER_ID()) == 3)
	{
		if (!func_45())
		{
			Global_2815059.f_5195.f_43 = 1;
		}
	}
}

void func_143()
{
	bool bVar0;
	
	if (!Global_2789203)
	{
		Global_2789203.f_1[0 /*3*/] = { 986.8618f, 74.74512f, 112.0391f };
		Global_2789203.f_11[0 /*3*/] = { 975.716f, 57.44831f, 118.0387f };
		Global_2789203.f_21[0] = 14.5625f;
		Global_2789203 = 1;
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		bVar0 = false;
		if (func_146(PLAYER::PLAYER_ID()) && func_17(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 982.1278f, 67.92721f, 115.1641f, 985.1523f, 66.03695f, 116.9141f, 2.125f, false, true, 0))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			if (!iLocal_122)
			{
				func_144(1);
				iLocal_122 = 1;
			}
		}
		else if (iLocal_122)
		{
			func_144(0);
			iLocal_122 = 0;
		}
	}
}

void func_144(int iParam0)
{
	if (func_145() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2653189)
	{
		return;
	}
	Global_2653189 = iParam0;
	Global_2653191 = 0;
	Global_2653192 = 0;
}

int func_145()
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_147(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_147(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_76(Global_2689235[iParam0 /*453*/].f_318.f_6) == 15;
			}
		}
	}
	return 0;
}

void func_148()
{
	if (func_17(PLAYER::PLAYER_PED_ID()) && func_152(PLAYER::PLAYER_ID()))
	{
		if (func_151())
		{
			if (!Global_262145.f_19172 && !iLocal_112)
			{
				Global_262145.f_19172 = 1;
				iLocal_112 = 1;
			}
			if ((!func_150("BB_PASS") && !Global_75485) && !HUD::IS_PAUSE_MENU_ACTIVE())
			{
				func_149("BB_PASS", -1);
			}
		}
		else if (iLocal_112)
		{
			if (Global_262145.f_19172)
			{
				Global_262145.f_19172 = 0;
			}
			if (func_150("BB_PASS"))
			{
				HUD::CLEAR_HELP(true);
			}
			iLocal_112 = 0;
		}
	}
}

void func_149(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_150(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_151()
{
	if (((Global_1574582 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::DOES_ENTITY_EXIST(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_484)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_484, false)) < 4.5f)
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0)
{
	if (func_153(Global_1853348[iParam0 /*834*/].f_267.f_32, -1))
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0, int iParam1)
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

void func_154()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		if (iLocal_111)
		{
			STREAMING::REMOVE_IPL("xm_hatch_closed");
			iLocal_111 = 0;
		}
		return;
	}
	if (!BitTest(Global_4718592.f_162495, 13))
	{
		return;
	}
	if (STREAMING::IS_IPL_ACTIVE("xm_hatch_closed"))
	{
		return;
	}
	STREAMING::REQUEST_IPL("xm_hatch_closed");
	iLocal_111 = 1;
}

void func_155()
{
	if (Global_1648034.f_236 == joaat("weapon_precisionrifle"))
	{
		if (Global_1648034.f_1142 == 1 || Global_1648034.f_1149 == 1)
		{
			Global_1648034.f_1149 = 0;
			Global_1648034.f_1140 = 0;
		}
	}
}

void func_156()
{
	int iVar0;
	
	if (!func_152(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_157(0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_43792[iVar0 /*32*/].f_8), "CLU_BAR_PROMPT2"))
			{
				StringCopy(&(Global_43792[iVar0 /*32*/].f_8), "CLU_BAR_PROMPT", 16);
				HUD::CLEAR_HELP(true);
			}
		}
		iVar0++;
	}
}

int func_157(int iParam0)
{
	if (func_159(PLAYER::PLAYER_ID()))
	{
		return func_158(PLAYER::PLAYER_ID(), iParam0);
	}
	return 0;
}

int func_158(int iParam0, int iParam1)
{
	if (func_159(iParam0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1;
	}
	return 0;
}

int func_159(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_52())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

void func_160()
{
	int iVar0;
	
	if (func_17(PLAYER::PLAYER_PED_ID()) && Global_75485)
	{
		if (Global_75603 == 16 && Global_75602 == 179)
		{
			iVar0 = Global_77051;
			if (!func_161())
			{
				switch (Global_75606)
				{
					case 20:
						iVar0 = 1;
						break;
					
					case 21:
						iVar0 = 2;
						break;
					
					case 22:
						iVar0 = 3;
						break;
					
					case 23:
						iVar0 = 4;
						break;
					
					case 24:
						iVar0 = 5;
						break;
					
					case 25:
						iVar0 = 6;
						break;
					
					case 26:
						iVar0 = 7;
						break;
					
					case 27:
						iVar0 = 8;
						break;
					
					case 28:
						iVar0 = 9;
						break;
					
					case 29:
						iVar0 = 10;
						break;
				}
			}
			else
			{
				switch (Global_75606)
				{
					case 10:
						iVar0 = 1;
						break;
					
					case 11:
						iVar0 = 2;
						break;
					
					case 12:
						iVar0 = 3;
						break;
					
					case 13:
						iVar0 = 4;
						break;
					
					case 14:
						iVar0 = 5;
						break;
					
					case 15:
						iVar0 = 6;
						break;
					
					case 16:
						iVar0 = 7;
						break;
					
					case 17:
						iVar0 = 8;
						break;
					
					case 18:
						iVar0 = 9;
						break;
					
					case 19:
						iVar0 = 10;
						break;
					}
			}
			if (Global_77051 != iVar0)
			{
				Global_77051 = iVar0;
			}
		}
	}
}

int func_161()
{
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_295.f_7, 1) || Global_262145.f_24715)
	{
		return 1;
	}
	return 0;
}

void func_162()
{
	if (!func_163())
	{
		if (func_4(&uLocal_67))
		{
			func_3(&uLocal_67);
		}
		iLocal_69 = 0;
	}
	if (iLocal_69)
	{
		return;
	}
	if (!func_4(&uLocal_67))
	{
		func_33(&uLocal_67, 0, 0);
	}
	if (!func_127(&uLocal_67, 35000, 0))
	{
		return;
	}
	iLocal_69 = 1;
	Global_2714762.f_43.f_3 = 3;
	Global_2714762.f_43.f_40 = 1;
	MISC::SET_BIT(&(Global_4718592.f_27), 22);
	CAM::DO_SCREEN_FADE_OUT(0);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
	CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
}

int func_163()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (!Global_2714762.f_24)
	{
		return 0;
	}
	if (!BitTest(Global_2714762.f_43.f_4, 0) && !Global_2714762.f_43.f_57)
	{
		return 0;
	}
	if (Global_2714762.f_43 == -1)
	{
		return 0;
	}
	if (Global_2714762.f_43.f_3 != 6)
	{
		return 0;
	}
	return 1;
}

void func_164()
{
	int iVar0;
	int iVar1;
	
	if (((func_17(PLAYER::PLAYER_PED_ID()) && func_176(PLAYER::PLAYER_ID())) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !func_175(PLAYER::PLAYER_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
		iVar1 = func_174(PLAYER::PLAYER_PED_ID(), 0);
		if (func_17(iVar0) && iVar1 == -1)
		{
			if (func_173(PLAYER::PLAYER_ID()))
			{
				if (Global_4282954 != -1 && Global_2359296[func_172() /*5567*/].f_681.f_2 != Global_4282954)
				{
					if (!iLocal_66)
					{
						func_167(1, 0, 1, 0, 0, 0, 0);
						iLocal_66 = 1;
					}
					if (!func_165())
					{
						iLocal_66 = 0;
						Global_2359296[func_172() /*5567*/].f_681.f_2 = Global_4282954;
					}
				}
			}
		}
	}
}

int func_165()
{
	if (func_166(2) || func_166(1))
	{
		return 1;
	}
	return 0;
}

bool func_166(int iParam0)
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_1, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_2, (iParam0 - 32));
}

void func_167(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_171() < 0 && Global_1958535)
	{
		return;
	}
	if (func_166(35))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703735.f_61.f_52, 3))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703735.f_61.f_56, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (BitTest(Global_2703735.f_61.f_60, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (bParam0)
	{
		func_170(2);
	}
	else
	{
		func_170(1);
	}
	if (bParam1)
	{
		func_170(11);
	}
	if (bParam2)
	{
		func_170(32);
		if (bParam3)
		{
			if (func_171() >= 0 && BitTest(Global_1585857[func_171() /*142*/].f_103, 0))
			{
				func_170(33);
			}
		}
		else
		{
			func_169(33);
		}
		if (func_171() >= 0)
		{
			if (func_168(Global_1585857[func_171() /*142*/].f_66))
			{
				func_170(40);
			}
		}
	}
	else if (bParam5)
	{
		func_170(37);
	}
	if (bParam4)
	{
		func_170(36);
	}
	if (func_166(36))
	{
		if (func_166(2))
		{
			func_169(36);
		}
	}
	if (bParam6)
	{
		func_170(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2815059.f_424 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_168(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_169(bool bParam0)
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_2703735.f_61.f_1, bParam0))
		{
			MISC::CLEAR_BIT(&(Global_2703735.f_61.f_1), bParam0);
		}
	}
	else if (BitTest(Global_2703735.f_61.f_2, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_61.f_2), (bParam0 - 32));
	}
}

void func_170(bool bParam0)
{
	if (bParam0 < 32)
	{
		if (!BitTest(Global_2703735.f_61.f_1, bParam0))
		{
			MISC::SET_BIT(&(Global_2703735.f_61.f_1), bParam0);
		}
	}
	else if (!BitTest(Global_2703735.f_61.f_2, (bParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2703735.f_61.f_2), (bParam0 - 32));
	}
}

int func_171()
{
	if (Global_2359296[func_172() /*5567*/].f_681.f_2 >= 363)
	{
		Global_2359296[func_172() /*5567*/].f_681.f_2 = -1;
		return -1;
	}
	return Global_2359296[func_172() /*5567*/].f_681.f_2;
}

int func_172()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_173(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2689235[iParam0 /*453*/].f_244 > -1)
		{
			if (func_79(Global_2689235[iParam0 /*453*/].f_244) == 5)
			{
				return 1;
			}
		}
		if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_174(int iParam0, bool bParam1)
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

int func_175(int iParam0)
{
	if (iParam0 != func_52() && func_26(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 3);
	}
	return 0;
}

int func_176(int iParam0)
{
	if (iParam0 == func_52())
	{
		return 0;
	}
	if (func_177(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_177(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_76(Global_2689235[iParam0 /*453*/].f_318.f_6) == 9;
			}
		}
	}
	return 0;
}

void func_178()
{
	if ((func_58() || !func_45()) || !func_26(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (func_183(PLAYER::PLAYER_PED_ID(), 886.1063f, -983.7135f, 30.59999f, 1) < 20f)
	{
		Global_2815059.f_6753 = 1;
		iLocal_65 = 1;
	}
	else if (iLocal_65)
	{
		Global_2815059.f_6753 = 0;
		iLocal_65 = 0;
	}
	if (Global_2815059.f_6753 && iLocal_65)
	{
		if (func_181())
		{
			if (!func_180())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 884.7175f, -992.0203f, 31.4746f);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 884.7175f, -992.0203f, 31.4746f, false, false, false, true);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 884.7175f, -992.0203f, 31.4746f, false, false, false, true);
				}
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			else
			{
				func_179(1);
			}
			Global_1836844.f_20 = 1;
			Global_1836844.f_21 = 39;
		}
	}
}

void func_179(bool bParam0)
{
	if (bParam0)
	{
		if (func_180())
		{
			if (!BitTest(Global_1958711, 9))
			{
				MISC::SET_BIT(&Global_1958711, 9);
			}
		}
	}
	else if (BitTest(Global_1958711, 9))
	{
		MISC::CLEAR_BIT(&Global_1958711, 9);
	}
}

bool func_180()
{
	return BitTest(Global_1958711, 5);
}

bool func_181()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_180())
	{
		iVar0 = func_182();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	return ENTITY::IS_ENTITY_AT_COORD(iVar0, 886.1063f, -983.7135f, 30.59999f, 4.25f, 5.5f, 5f, false, true, 0);
}

int func_182()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		return Global_1958711.f_20;
	}
	return -1;
}

float func_183(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

void func_184()
{
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return;
	}
	if (BitTest(Global_4718592.f_162538, 0) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_211();
		func_185();
	}
}

void func_185()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (BitTest(Global_4718592.f_32, 28) || BitTest(Global_4718592.f_17, 14))
	{
		return;
	}
	if ((HUD::IS_HUD_COMPONENT_ACTIVE(19) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		func_210();
		if (Global_1648034.f_1146 == -1 || Global_1648034.f_1146 == -2)
		{
			iVar0 = func_72(1885, -1, 0);
			if (iVar0 > 0)
			{
				Global_1648034.f_1146 = 5;
			}
			else
			{
				iVar0 = func_72(1884, -1, 0);
				if (iVar0 > 0)
				{
					Global_1648034.f_1146 = 4;
				}
				else
				{
					iVar0 = func_72(1883, -1, 0);
					if (iVar0 > 0)
					{
						Global_1648034.f_1146 = 3;
					}
					else
					{
						iVar0 = func_72(1882, -1, 0);
						if (iVar0 > 0)
						{
							Global_1648034.f_1146 = 2;
						}
						else
						{
							iVar0 = func_72(1881, -1, 0);
							if (iVar0 > 0)
							{
								Global_1648034.f_1146 = 1;
							}
							else
							{
								Global_1648034.f_1146 = -2;
							}
						}
					}
				}
			}
		}
		iVar1 = func_201();
		bVar2 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) >= SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * IntToFloat((20 * iVar1))));
		if (func_200(PLAYER::PLAYER_ID()) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_199(Global_4718592.f_116524)))
		{
			bVar3 = true;
		}
		if (func_197(PLAYER::PLAYER_ID()) || func_196())
		{
			bVar4 = true;
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 362))
		{
			if (((((((((Global_1648034.f_1146 != -1 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != 2) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != 1) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != 0) && !bVar4) && !bVar3) && !func_195(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (Global_1648034.f_1146 == -2)
				{
					func_149("WPWH_ARMOR_NO", 5000);
					Global_1648034.f_1147 = 1;
					Global_1922036 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_MP_SOUNDSET", true);
					Global_1648034.f_1146 = -2;
					return;
				}
				if (bVar2)
				{
					func_149("WPWH_ARMOR_FL", 5000);
					Global_1648034.f_1147 = 1;
					Global_1922036 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_MP_SOUNDSET", true);
					Global_1648034.f_1146 = -2;
					return;
				}
				iVar5 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID());
				if (Global_1648034.f_1146 == 1)
				{
					iVar5 = (iVar5 + SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * 20f)));
					func_194(1881, 1, -1);
				}
				else if (Global_1648034.f_1146 == 2)
				{
					iVar5 = (iVar5 + SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * 40f)));
					func_194(1882, 1, -1);
				}
				else if (Global_1648034.f_1146 == 3)
				{
					iVar5 = (iVar5 + SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * 60f)));
					func_194(1883, 1, -1);
				}
				else if (Global_1648034.f_1146 == 4)
				{
					iVar5 = (iVar5 + SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * 80f)));
					func_194(1884, 1, -1);
				}
				else if (Global_1648034.f_1146 == 5)
				{
					iVar5 = (iVar5 + SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * 100f)));
					func_194(1885, 1, -1);
				}
				iVar6 = func_193(Global_1648034.f_1146);
				iVar7 = 1927737204;
				iVar8 = 1702063850;
				iVar9 = 813560150;
				func_186(0, iVar6, iVar7, 1, 0, iVar8, 0, iVar9, 0);
				if (iVar5 > PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID()))
				{
					iVar5 = PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID());
				}
				PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), iVar5);
				Global_1648034.f_1146 = -2;
			}
		}
	}
	else if (Global_1648034.f_1146 != -1)
	{
		Global_1648034.f_1146 = -1;
		Global_1648034.f_1147 = 1;
		if (Global_1922036)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_THIS_PRINT("FM_DROP_START1");
				HUD::CLEAR_THIS_PRINT("FM_DROP_START2");
				HUD::CLEAR_THIS_PRINT("FM_DROP_START3");
				HUD::CLEAR_THIS_PRINT("FM_DROP_START4");
				HUD::CLEAR_HELP(true);
			}
			Global_1922036 = 0;
		}
		if (Global_1648034.f_1147)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_THIS_PRINT("WPWH_SNACK_NO");
				HUD::CLEAR_THIS_PRINT("WPWH_SNACK_FL");
				HUD::CLEAR_THIS_PRINT("WPWH_ARMOR_NO");
				HUD::CLEAR_THIS_PRINT("WPWH_ARMOR_FL");
				HUD::CLEAR_HELP(true);
			}
			Global_1648034.f_1147 = 0;
		}
	}
}

void func_186(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = false;
	if (Global_1888831)
	{
		if (Global_1888831.f_3.f_6 != iParam1)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3 != iParam0)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_3 != iParam4)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_5 != iParam2)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_1 != iParam5)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_4 != iParam7)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_9 != iParam6)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_2 != func_191())
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_190(&(Global_1888831.f_3));
		STATS::PLAYSTATS_INVENTORY(&(Global_1888831.f_3));
		func_189();
	}
	Global_1888831 = 1;
	Global_1888831.f_3 = iParam0;
	if (func_187())
	{
		Global_1888831.f_3.f_2 = func_191();
	}
	Global_1888831.f_3.f_6 = iParam1;
	Global_1888831.f_3.f_5 = iParam2;
	Global_1888831.f_3.f_7 = (Global_1888831.f_3.f_7 + iParam3);
	Global_1888831.f_3.f_3 = iParam4;
	Global_1888831.f_3.f_8 = iParam8;
	Global_1888831.f_3.f_1 = iParam5;
	Global_1888831.f_3.f_4 = iParam7;
	Global_1888831.f_3.f_9 = iParam6;
	func_3(&(Global_1888831.f_1));
	func_14(&(Global_1888831.f_1), 0, 0);
}

int func_187()
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_188() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_188()
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

void func_189()
{
	Global_1888831 = 0;
	Global_1888831.f_3 = 0;
	Global_1888831.f_3.f_2 = 0;
	Global_1888831.f_3.f_6 = 0;
	Global_1888831.f_3.f_5 = 0;
	Global_1888831.f_3.f_7 = 0;
	Global_1888831.f_3.f_3 = 0;
	Global_1888831.f_3.f_8 = 0;
	Global_1888831.f_3.f_1 = 0;
	Global_1888831.f_3.f_4 = 0;
	Global_1888831.f_3.f_9 = 0;
	func_3(&(Global_1888831.f_1));
}

void func_190(var uParam0)
{
}

int func_191()
{
	struct<13> Var0;
	
	Var0 = { func_188() };
	return func_192(&Var0);
}

int func_192(var* uParam0)
{
	var uVar0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar0, 35, uParam0);
				return uVar0;
			}
		}
	}
	return -1;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1722125749;
		
		case 2:
			return -583313972;
		
		case 3:
			return 1174170707;
		
		case 4:
			return 1006076045;
		
		case 5:
			return -391796677;
		
		default:
	}
	return -1;
}

void func_194(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_72(iParam0, func_49(iParam2), 0);
	iVar0 = (iVar0 - iParam1);
	func_71(iParam0, iVar0, iParam2, 1, 0);
}

int func_195(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 11, joaat("jugg_suit")))
	{
		return 1;
	}
	return 0;
}

int func_196()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2671449.f_58) && !Global_2671449.f_57 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_197(int iParam0)
{
	return func_198(iParam0) == joaat("weapon_minigun");
}

int func_198(int iParam0)
{
	return Global_1892703[iParam0 /*599*/].f_579;
}

int func_199(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_168757 == 29)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (iParam0 == Global_262145.f_9674[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_200(int iParam0)
{
	return Global_2689235[iParam0 /*453*/].f_119 == 4;
}

int func_201()
{
	if (func_202(160))
	{
		return 5;
	}
	else if (func_202(159))
	{
		return 4;
	}
	else if (func_202(158))
	{
		return 3;
	}
	else if (func_202(157))
	{
		return 2;
	}
	else if (func_202(156))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_209())
	{
		return 0;
	}
	uVar0 = func_204(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_203(iVar1));
}

int func_203(int iParam0)
{
	return (iParam0 % 32);
}

int func_204(var uParam0)
{
	int iVar0;
	
	iVar0 = func_72(func_205(uParam0, 999), -1, 0);
	return iVar0;
}

int func_205(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_208(iVar0);
	if (((func_207() == 0 || func_206() == 0) || iParam1 == 0) || (func_207() == 999 && func_206() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 697;
				break;
			
			case 1:
				return 698;
				break;
			
			case 2:
				return 699;
				break;
			
			case 3:
				return 700;
				break;
			
			case 4:
				return 701;
				break;
			
			case 5:
				return 702;
				break;
			
			case 6:
				return 703;
				break;
			
			case 7:
				return 704;
				break;
			
			case 8:
				return 705;
				break;
			
			case 9:
				return 2055;
				break;
			
			case 10:
				return 2067;
				break;
			
			case 11:
				return 2094;
				break;
			
			case 12:
				return 2430;
				break;
			
			case 13:
				return 2950;
				break;
			
			case 14:
				return 5513;
				break;
			
			case 15:
				return 5517;
				break;
			
			case 16:
				return 5521;
				break;
			
			case 17:
				return 5525;
				break;
			
			case 18:
				return 5529;
				break;
			
			case 19:
				return 5533;
				break;
			
			case 20:
				return 5593;
				break;
			
			case 21:
				return 5597;
				break;
			
			case 22:
				return 5601;
				break;
			
			case 23:
				return 5605;
				break;
			
			case 24:
				return 5609;
				break;
			
			case 25:
				return 5613;
				break;
			
			case 26:
				return 5617;
				break;
			
			case 27:
				return 5638;
				break;
			
			case 28:
				return 5642;
				break;
			
			case 29:
				return 5646;
				break;
			
			case 30:
				return 5650;
				break;
			
			case 31:
				return 5654;
				break;
			
			case 32:
				return 5658;
				break;
			
			case 33:
				return 6468;
				break;
			
			case 34:
				return 6472;
				break;
			
			case 35:
				return 6476;
				break;
			
			case 36:
				return 6480;
				break;
			
			case 37:
				return 6484;
				break;
			
			case 38:
				return 6488;
				break;
			
			case 39:
				return 6492;
				break;
			
			case 40:
				return 10267;
				break;
		}
	}
	return 13122;
}

int func_206()
{
	return Global_31960;
}

int func_207()
{
	return Global_31959;
}

int func_208(int iParam0)
{
	return (iParam0 / 32);
}

bool func_209()
{
	return Global_1575037;
}

void func_210()
{
	if (Global_1648034.f_1147)
	{
		if (((!func_150("WPWH_SNACK_NO") && !func_150("WPWH_SNACK_FL")) && !func_150("WPWH_ARMOR_NO")) && !func_150("WPWH_ARMOR_FL"))
		{
			Global_1648034.f_1147 = 0;
		}
	}
}

void func_211()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (BitTest(Global_4718592.f_32, 28) || BitTest(Global_4718592.f_40, 4))
	{
		return;
	}
	if ((HUD::IS_HUD_COMPONENT_ACTIVE(19) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_72(1278, -1, 0);
		if (iVar0 > 0)
		{
			Global_1648034.f_1145 = 66;
		}
		else
		{
			iVar0 = func_72(62, -1, 0);
			if (iVar0 > 0)
			{
				Global_1648034.f_1145 = 60;
			}
			else
			{
				iVar0 = func_72(1277, -1, 0);
				if (iVar0 > 0)
				{
					Global_1648034.f_1145 = 65;
				}
				else
				{
					iVar0 = func_72(1276, -1, 0);
					if (iVar0 > 0)
					{
						Global_1648034.f_1145 = 64;
					}
					else
					{
						iVar0 = func_72(10404, -1, 0);
						if (iVar0 > 0)
						{
							Global_1648034.f_1145 = 63;
						}
						else
						{
							Global_1648034.f_1145 = -1;
						}
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 361))
		{
			if (((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != 2) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != 1) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != 0) && !func_219()) && !func_195(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (Global_1648034.f_1145 == -1)
				{
					func_149("WPWH_SNACK_NO", 5000);
					Global_1648034.f_1147 = 1;
					Global_1922036 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_MP_SOUNDSET", true);
					return;
				}
				iVar1 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
				iVar2 = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
				bVar3 = iVar1 >= iVar2;
				if (bVar3)
				{
					func_149("WPWH_SNACK_FL", 5000);
					Global_1648034.f_1147 = 1;
					Global_1922036 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_MP_SOUNDSET", true);
					Global_1648034.f_1145 = -1;
					return;
				}
				func_214(func_215(2, Global_1648034.f_1145));
				func_213(Global_1648034.f_1145);
				iVar4 = func_212(Global_1648034.f_1145);
				iVar5 = 1359863693;
				iVar6 = 1702063850;
				iVar7 = 813560150;
				func_186(0, iVar4, iVar5, 1, 0, iVar6, 0, iVar7, 0);
				Global_1648034.f_1145 = -1;
			}
		}
	}
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return -251807494;
			break;
		
		case 65:
			return 1199442189;
			break;
		
		case 66:
			return 1486811039;
			break;
		
		case 60:
			return -39155154;
			break;
		
		case 63:
			return 495696637;
			break;
	}
	return -1;
}

void func_213(int iParam0)
{
	switch (iParam0)
	{
		case 66:
			func_194(1278, 1, -1);
			break;
		
		case 65:
			func_194(1277, 1, -1);
			break;
		
		case 64:
			func_194(1276, 1, -1);
			break;
		
		case 60:
			func_194(62, 1, -1);
			break;
		
		case 63:
			func_194(10404, 1, -1);
			break;
	}
}

void func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	iVar1 = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
	if ((iVar0 + iParam0) > iVar1)
	{
		ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), (iVar0 + iParam0), 0);
	}
}

int func_215(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = func_218(iParam0, iParam1);
	iVar1 = func_217(iParam0, iParam1);
	fVar2 = func_216(iParam0, iParam1);
	if (iVar1 > 0)
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT((iVar0 * iVar1)) * fVar2));
	}
	return SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * fVar2));
}

float func_216(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return Global_262145.f_115;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 59:
					return Global_262145.f_115;
					break;
				
				case 60:
					return Global_262145.f_116;
					break;
				
				case 61:
					return Global_262145.f_117;
					break;
				
				case 62:
					return Global_262145.f_117;
					break;
				
				case 63:
					return Global_262145.f_118;
					break;
				
				case 64:
					return Global_262145.f_112;
					break;
				
				case 65:
					return Global_262145.f_113;
					break;
				
				case 66:
					return Global_262145.f_114;
					break;
			}
			break;
	}
	return 1f;
}

int func_217(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 5;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 59:
					return 5;
					break;
				
				case 60:
					return 4;
					break;
				
				case 61:
					return 4;
					break;
				
				case 62:
					return 4;
					break;
				
				case 63:
					return 4;
					break;
				
				case 64:
					return 3;
					break;
				
				case 65:
					return 3;
					break;
				
				case 66:
					return 3;
					break;
			}
			break;
	}
	return -1;
}

int func_218(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return -5;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 59:
					return -5;
					break;
				
				case 60:
					return 9;
					break;
				
				case 61:
					return 0;
					break;
				
				case 62:
					return 0;
					break;
				
				case 63:
					return 9;
					break;
				
				case 64:
					return 5;
					break;
				
				case 65:
					return 15;
					break;
				
				case 66:
					return 10;
					break;
			}
			break;
	}
	return 0;
}

int func_219()
{
	if (func_220())
	{
		return 0;
	}
	return BitTest(Global_2815059.f_4660, 24);
}

bool func_220()
{
	return Global_2787908;
}

void func_221()
{
	char* sVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	if (BitTest(Global_1978994, 28))
	{
		return;
	}
	if (func_141(34707, -1) && !BitTest(Global_1978994, 27))
	{
		return;
	}
	sVar0 = "HIDDEN_RADIO_MPSUM2_NEWS";
	if (!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_PLAYER_RADIO_STATION_NAME(), sVar0))
	{
		return;
	}
	func_222(0);
}

void func_222(int iParam0)
{
	if (func_227())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_226(0))
		{
			func_223(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

void func_223(int iParam0)
{
	if (func_227())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_180())
		{
			func_225(1, 1);
		}
		else
		{
			func_225(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8137, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 30);
	}
	if (!func_224())
	{
		Global_20266.f_1 = 3;
	}
}

int func_224()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_225(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_226(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20203);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
}

int func_226(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
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
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_227()
{
	return BitTest(Global_1958711, 19);
}

void func_228()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723612.f_3)
	{
		switch (iLocal_53)
		{
			case 0:
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					return;
				}
				if (Global_1946250.f_497 && func_234(Global_1946250.f_3371))
				{
					func_232(1);
					iLocal_53 = 1;
				}
				break;
			
			case 1:
				func_232(1);
				if ((!func_58() && func_45()) && Global_1946244 == 7)
				{
					bVar0 = true;
				}
				else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					bVar0 = true;
				}
				else if ((func_45() && !func_231(PLAYER::PLAYER_ID())) && !func_230(PLAYER::PLAYER_ID()))
				{
					bVar0 = true;
				}
				if (func_229() == 37 && Global_262145.f_10721)
				{
					func_14(&uLocal_54, 1, 0);
				}
				if (bVar0)
				{
					iLocal_53 = 2;
				}
				break;
			
			case 2:
				func_232(0);
				iLocal_53 = 0;
				break;
		}
	}
	else if (iLocal_53 != 0)
	{
		func_232(0);
		iLocal_53 = 0;
	}
	if (func_4(&uLocal_54))
	{
		if (func_127(&uLocal_54, 20000, 1))
		{
			func_3(&uLocal_54);
			Global_262145.f_10721 = 1;
		}
		else
		{
			Global_262145.f_10721 = 0;
		}
	}
}

int func_229()
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192;
}

int func_230(int iParam0)
{
	if (iParam0 != func_52() && func_26(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 4);
	}
	return 0;
}

int func_231(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_26(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && iParam0 == PLAYER::PLAYER_ID()) && func_26(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

void func_232(bool bParam0)
{
	func_233(bParam0);
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 21);
		MISC::SET_BIT(&(Global_1946250.f_9), 20);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_9), 21);
		MISC::CLEAR_BIT(&(Global_1946250.f_9), 20);
	}
}

void func_233(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946250.f_4), 7);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_4), 7);
	}
}

int func_234(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if ((((iParam0 == 149 || iParam0 == 151) || iParam0 == 150) || iParam0 == 153) || iParam0 == 152)
	{
		return 1;
	}
	return 0;
}

void func_235()
{
	if (!func_10() || Global_1574964)
	{
		if (iLocal_37)
		{
			iLocal_34 = 0;
			iLocal_35 = 0;
			bLocal_36 = false;
			func_3(&Local_38);
			iLocal_37 = 0;
		}
		if (Global_1574964)
		{
		}
		return;
	}
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == 0)
	{
		return;
	}
	if (!iLocal_37)
	{
		iLocal_37 = 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (iLocal_34 != PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_34 != 0)
			{
				iLocal_35 = 1;
				func_33(&Local_38, 0, 0);
			}
			iLocal_34 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (CAM::IS_SCREEN_FADING_IN() && iLocal_35)
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		bLocal_36 = true;
	}
	else if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (iLocal_35)
		{
			if (func_13(Local_38, 2500, 0))
			{
				if (bLocal_36)
				{
					CAM::DO_SCREEN_FADE_IN(100);
				}
				func_236(iLocal_34, 0);
				iLocal_35 = 0;
				func_3(&Local_38);
			}
		}
	}
}

void func_236(int iParam0, int iParam1)
{
	struct<45> Var0;
	
	if (iParam1 == -1)
	{
		return;
	}
	Var0 = { Global_4980736.f_93429[iParam1 /*45*/] };
	if (!BitTest(Var0.f_0, 0))
	{
		return;
	}
	func_237(iParam0, &(Var0.f_1), 0);
	func_237(iParam0, &(Var0.f_2), 1);
	func_237(iParam0, &(Var0.f_3), 2);
	func_237(iParam0, &(Var0.f_4), 3);
	func_237(iParam0, &(Var0.f_5), 4);
	func_237(iParam0, &(Var0.f_6), 5);
	func_237(iParam0, &(Var0.f_7), 6);
	func_237(iParam0, &(Var0.f_8), 7);
	func_237(iParam0, &(Var0.f_9), 8);
	func_237(iParam0, &(Var0.f_10), 9);
	func_237(iParam0, &(Var0.f_11), 10);
	func_237(iParam0, &(Var0.f_12), 11);
	func_237(iParam0, &(Var0.f_13), 12);
	func_237(iParam0, &(Var0.f_14), 13);
	func_237(iParam0, &(Var0.f_15), 14);
	func_237(iParam0, &(Var0.f_16), 15);
	func_237(iParam0, &(Var0.f_17), 16);
	func_237(iParam0, &(Var0.f_21), 23);
	func_237(iParam0, &(Var0.f_22), 24);
	func_237(iParam0, &(Var0.f_26), 27);
	func_237(iParam0, &(Var0.f_27), 28);
	func_237(iParam0, &(Var0.f_28), 29);
	func_237(iParam0, &(Var0.f_29), 30);
	func_237(iParam0, &(Var0.f_30), 31);
	func_237(iParam0, &(Var0.f_31), 32);
	func_237(iParam0, &(Var0.f_32), 33);
	func_237(iParam0, &(Var0.f_33), 35);
	func_237(iParam0, &(Var0.f_34), 37);
	func_237(iParam0, &(Var0.f_35), 39);
	func_237(iParam0, &(Var0.f_36), 40);
	func_237(iParam0, &(Var0.f_37), 41);
	func_237(iParam0, &(Var0.f_38), 42);
	func_237(iParam0, &(Var0.f_39), 43);
	func_237(iParam0, &(Var0.f_40), 44);
	func_237(iParam0, &(Var0.f_41), 45);
	func_237(iParam0, &(Var0.f_42), 46);
	func_237(iParam0, &(Var0.f_43), 47);
	func_237(iParam0, &(Var0.f_44), 48);
}

void func_237(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = *uParam1;
	iVar0 = func_238(iVar0, -1, VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam2));
	if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam2) >= iVar0)
	{
		VEHICLE::SET_VEHICLE_MOD(iParam0, iParam2, iVar0, false);
	}
	else
	{
		*uParam1 = -1;
	}
}

int func_238(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_239()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		func_242();
	}
	else
	{
		func_240();
	}
}

void func_240()
{
	bool bVar0;
	
	if (iLocal_32 == 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= 25)
	{
		if (BitTest(iLocal_32, bVar0))
		{
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_241(bVar0), false);
			MISC::CLEAR_BIT(&iLocal_32, bVar0);
		}
		bVar0++;
	}
	iLocal_33 = 0;
	Global_2789831 = 0;
}

char* func_241(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "RADIO_36_AUDIOPLAYER";
		
		case 1:
			return "RADIO_37_MOTOMAMI";
		
		case 2:
			return "RADIO_12_REGGAE";
		
		case 3:
			return "RADIO_15_MOTOWN";
		
		case 4:
			return "RADIO_16_SILVERLAKE";
		
		case 5:
			return "RADIO_17_FUNK";
		
		case 6:
			return "RADIO_18_90S_ROCK";
		
		case 7:
			return "RADIO_04_PUNK";
		
		case 8:
			return "RADIO_05_TALK_01";
		
		case 9:
			return "RADIO_06_COUNTRY";
		
		case 10:
			return "RADIO_07_DANCE_01";
		
		case 11:
			return "RADIO_08_MEXICAN";
		
		case 12:
			return "RADIO_35_DLC_HEI4_MLR";
		
		case 13:
			return "RADIO_13_JAZZ";
		
		case 14:
			return "RADIO_14_DANCE_02";
		
		case 15:
			return "RADIO_20_THELAB";
		
		case 16:
			return "RADIO_34_DLC_HEI4_KULT";
		
		case 17:
			return "RADIO_21_DLC_XM17";
		
		case 18:
			return "RADIO_22_DLC_BATTLE_MIX1_RADIO";
		
		case 19:
			return "RADIO_23_DLC_XM19_RADIO";
		
		case 20:
			return "RADIO_27_DLC_PRHEI4";
		
		case 21:
			return "RADIO_01_CLASS_ROCK";
		
		case 22:
			return "RADIO_02_POP";
		
		case 23:
			return "RADIO_03_HIPHOP_NEW";
		
		case 24:
			return "RADIO_09_HIPHOP_OLD";
		
		case 25:
			return "RADIO_11_TALK_02";
		
		default:
	}
	return "OFF";
}

void func_242()
{
	bool bVar0;
	var uVar1;
	
	if (!func_243(Global_4718592.f_116524))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= 25)
	{
		uVar1 = func_72(9877, -1, 0);
		if (!BitTest(iLocal_33, bVar0))
		{
			if (BitTest(uVar1, bVar0))
			{
			}
			MISC::SET_BIT(&iLocal_33, bVar0);
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_241(bVar0), true);
		}
		if (!BitTest(uVar1, bVar0) && !BitTest(iLocal_32, bVar0))
		{
			MISC::SET_BIT(&iLocal_32, bVar0);
			Global_2789831 = 1;
		}
		bVar0++;
	}
}

int func_243(int iParam0)
{
	if ((iParam0 == Global_262145.f_31710[0] || iParam0 == Global_262145.f_31710[1]) || iParam0 == Global_262145.f_31710[2])
	{
		return 1;
	}
	return 0;
}

void func_244()
{
	if (!func_26(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (!func_246(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_245())
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1007.262f, -79.05004f, -100.0031f, -1008.166f, -79.02464f, -98.00307f, 0.9f, false, true, 0))
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.16f);
	}
}

int func_245()
{
	if (BitTest(Global_1946250.f_506, 29) || BitTest(Global_1946250.f_506, 30))
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_76(Global_2689235[iParam0 /*453*/].f_318.f_6) == 21;
			}
		}
	}
	return 0;
}

void func_247()
{
	int iVar0;
	
	iLocal_31++;
	if (iLocal_31 == 30)
	{
		iLocal_31 = 0;
	}
	else
	{
		return;
	}
	if (((((((((!func_17(PLAYER::PLAYER_PED_ID()) || !func_26(PLAYER::PLAYER_ID(), 1, 1)) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) || !func_45()) || func_175(PLAYER::PLAYER_ID())) || func_248(PLAYER::PLAYER_ID())) || func_231(PLAYER::PLAYER_ID())) || Global_2703735.f_3428) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_17(iVar0))
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

int func_248(int iParam0)
{
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 11))
	{
		return 1;
	}
	return 0;
}

void func_249()
{
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_252(PLAYER::PLAYER_ID(), 0, 1)) && func_250(PLAYER::PLAYER_ID()))
	{
		MISC::SET_BIT(&(Global_1946250.f_4523.f_1), 21);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_4523.f_1), 21);
	}
}

int func_250(int iParam0)
{
	if (func_251(Global_1853348[iParam0 /*834*/].f_267.f_32))
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0)
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

int func_252(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_52())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_253(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_52() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_253(int iParam0, int iParam1)
{
	if (iParam0 != func_52())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_52())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_254()
{
	if (((((func_17(PLAYER::PLAYER_PED_ID()) && !func_231(PLAYER::PLAYER_ID())) && !func_175(PLAYER::PLAYER_ID())) && ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_304[1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2815059.f_304[1], false)) && func_255(Global_2815059.f_304[1]))
	{
		iLocal_30 = 1;
		MISC::SET_BIT(&(Global_1946250.f_4523), 3);
	}
	else if (iLocal_30)
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_4523), 3);
		iLocal_30 = 0;
	}
}

int func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5[25];
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		func_257(81, &Var2);
		iVar1 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar5);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uVar5[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar5[iVar0])) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uVar5[iVar0], false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar0], false) && !func_256(uVar5[iVar0], 1))
				{
					if (func_183(uVar5[iVar0], Var2, 1) < 8f)
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

int func_256(int iParam0, bool bParam1)
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_257(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2815059.f_304[1];
	switch (iParam0)
	{
		case 81:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trailerlarge"))
				{
					*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -8.9f, -2f) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar1, false, false))
					{
						*uParam1 = { *uParam1, uParam1->f_1, uVar1 };
					}
					else
					{
						*uParam1 = { *uParam1, uParam1->f_1, (uParam1->f_2 - 1.5f) };
					}
				}
			}
			break;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_259(PLAYER::PLAYER_ID()))
		{
			if (func_258(*uParam1))
			{
				if (Global_1946250.f_3630 != func_52())
				{
					if (!func_258(Global_2689235[Global_1946250.f_3630 /*453*/].f_318.f_11))
					{
						*uParam1 = { Global_2689235[Global_1946250.f_3630 /*453*/].f_318.f_11 };
					}
				}
			}
		}
	}
}

int func_258(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_259(int iParam0)
{
	if (iParam0 != func_52())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 8);
	}
	return 0;
}

void func_260()
{
	int iVar0;
	
	if (func_17(PLAYER::PLAYER_PED_ID()) && func_269(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_268(PLAYER::PLAYER_ID());
		if (iVar0 != -1 && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_265(0, iVar0), func_265(1, iVar0), 5f, false, true, 0) || func_263()))
		{
			if (HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				if (!Global_75485)
				{
					Global_75485 = 1;
					bLocal_27 = true;
				}
			}
			else if (bLocal_27)
			{
				Global_75485 = 0;
			}
			if (!iLocal_26)
			{
				func_144(1);
				iLocal_26 = 1;
				func_3(&uLocal_28);
			}
		}
		else
		{
			if (bLocal_27)
			{
				Global_75485 = 0;
			}
			if (iLocal_26)
			{
				func_33(&uLocal_28, 0, 0);
				iLocal_26 = 0;
			}
		}
	}
	else
	{
		if (bLocal_27)
		{
			Global_75485 = 0;
		}
		if (iLocal_26)
		{
			func_33(&uLocal_28, 0, 0);
			iLocal_26 = 0;
		}
	}
	if (((!func_175(PLAYER::PLAYER_ID()) && !func_262()) && !func_261()) && !BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_513, 3))
	{
		if (func_4(&uLocal_28) && func_127(&uLocal_28, 5000, 0))
		{
			func_144(0);
			func_3(&uLocal_28);
		}
	}
}

bool func_261()
{
	return Global_1946250.f_4711.f_1 != -1;
}

bool func_262()
{
	return Global_1946250.f_4716 != -1;
}

int func_263()
{
	if (func_264())
	{
		if ((MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "FIX_REC_MENU_T") || MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "AGENCY_HELI_H4")) || MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "OF_PA_MENUI_1b"))
		{
			return 1;
		}
	}
	return 0;
}

bool func_264()
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

Vector3 func_265(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_267(iParam1, 0), func_266(iParam1, 0), 6.1458f, 3.6035f, 0.0002f);
			break;
		
		case 1:
			return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_267(iParam1, 0), func_266(iParam1, 0), 9.8062f, -0.0547f, 2.8373f);
			break;
	}
	return 0f, 0f, 0f;
}

float func_266(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 155:
				return -110f;
				break;
			
			case 156:
				return -63.05f;
				break;
			
			case 157:
				return 89.85f;
				break;
			
			case 158:
				return 0f;
				break;
			
			default:
				return 0f;
				break;
			}
	}
	return 0f;
}

Vector3 func_267(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 155:
				return 384.814f, -60.727f, 102.363f;
				break;
			
			case 156:
				return -1020.286f, -427.3018f, 62.86114f;
				break;
			
			case 157:
				return -589.4757f, -716.5259f, 112.0051f;
				break;
			
			case 158:
				return -1003.911f, -759.604f, 60.89419f;
				break;
			
			default:
				return -1120f, -70f, -100f;
				break;
			}
	}
	return -1070f, -70f, -100f;
}

int func_268(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_26(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
		else if (((Global_1575058 || Global_2667225.f_2680) && iParam0 == PLAYER::PLAYER_ID()) && func_26(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
	}
	return -1;
}

int func_269(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_76(Global_2689235[iParam0 /*453*/].f_318.f_6) == 24;
			}
		}
	}
	return 0;
}

void func_270()
{
	if (BitTest(Global_1946250.f_8, 25))
	{
		if (Global_4282954 != -1)
		{
			Global_4282954 = -1;
		}
	}
}

void func_271()
{
	switch (Global_262145.f_31064)
	{
		case joaat("mamba"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.655f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("warrener2"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.565f;
			Global_1966152 = -3.3f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("zr350"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.98f;
			Global_1966152 = -2.7f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("futo2"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.849f;
			Global_1966152 = -4f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("dominator8"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.87f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("previon"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 1.025f;
			Global_1966152 = -3.1f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("growler"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.7f;
			Global_1966152 = -2f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("jester4"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.725f;
			Global_1966152 = -2.9f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("calico"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.735f;
			Global_1966152 = -2.9f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("dominator7"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.735f;
			Global_1966152 = -2.9f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("rt3000"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.695f;
			Global_1966152 = -2.7f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("tailgater2"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.715f;
			Global_1966152 = -3.2f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("cypher"):
			Global_1966149 = 0f;
			Global_1966150 = -1.61f;
			Global_1966151 = 0.755f;
			Global_1966152 = -5f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("sultan3"):
			Global_1966149 = 0f;
			Global_1966150 = -1.6f;
			Global_1966151 = 0.695f;
			Global_1966152 = -3.2f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("clique"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.655f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("ardent"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.655f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("euros"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.655f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("comet6"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.795f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("btype"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.695f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("comet7"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.675f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("sentinel2"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.695f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("nero"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.81f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("rapidgt3"):
			Global_1966149 = 0f;
			Global_1966150 = -1.77f;
			Global_1966151 = 0.975f;
			Global_1966152 = -5.1f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("italigto"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.715f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("hakuchou2"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.905f;
			Global_1966152 = -3.9f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("turismo2"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.985f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("zentorno"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.915f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("verlierer2"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.835f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("youga2"):
			Global_1966149 = 0f;
			Global_1966150 = -2f;
			Global_1966151 = 1.235f;
			Global_1966152 = -7f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("gb200"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.595f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("specter"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.615f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("fmj"):
			Global_1966149 = 0f;
			Global_1966150 = -1.59f;
			Global_1966151 = 0.705f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("gauntlet3"):
			Global_1966149 = 0f;
			Global_1966150 = -1.58f;
			Global_1966151 = 0.655f;
			Global_1966152 = -3.5f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("zion3"):
			Global_1966149 = 0f;
			Global_1966150 = -1.56f;
			Global_1966151 = 0.695f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("granger2"):
			Global_1966149 = 0f;
			Global_1966150 = -2.25f;
			Global_1966151 = 0.905f;
			Global_1966152 = -7f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("vstr"):
			Global_1966149 = 0f;
			Global_1966150 = -1.74f;
			Global_1966151 = 0.725f;
			Global_1966152 = -4.7f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("adder"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.92f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("swinger"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.755f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("retinue"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.735f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("club"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.685f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("osiris"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 0.895f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("vagrant"):
			Global_1966149 = 0f;
			Global_1966150 = -1.52f;
			Global_1966151 = 1.025f;
			Global_1966152 = -2.6f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
		
		case joaat("flashgt"):
			Global_1966149 = 0f;
			Global_1966150 = -1.77f;
			Global_1966151 = 1.105f;
			Global_1966152 = -4f;
			Global_1966153 = 0f;
			Global_1966154 = 180f;
			break;
	}
}

void func_272()
{
	switch (func_273())
	{
		case joaat("mamba"):
			Global_1966137 = 0.53f;
			break;
		
		case joaat("growler"):
			Global_1966137 = 0.6f;
			break;
		
		case joaat("slamtruck"):
			Global_1966137 = 0.6f;
			break;
		
		case joaat("raiden"):
			Global_1966137 = 0.95f;
			break;
		
		case joaat("jugular"):
			Global_1966137 = 0.65f;
			break;
		
		case joaat("tampa2"):
			Global_1966137 = 0.65f;
			break;
		
		case joaat("t20"):
			Global_1966137 = 0.83f;
			break;
		
		case joaat("zion3"):
			Global_1966137 = 0.59f;
			break;
		
		case joaat("flashgt"):
			Global_1966137 = 0.75f;
			break;
		
		case joaat("retinue"):
			Global_1966137 = 0.62f;
			break;
		
		case joaat("torero"):
			Global_1966137 = 0.75f;
			break;
		
		case joaat("savestra"):
			Global_1966137 = 0.62f;
			break;
		
		case joaat("tailgater2"):
			Global_1966137 = 0.62f;
			break;
		
		case joaat("euros"):
			Global_1966137 = 0.6f;
			break;
		
		case joaat("jb7002"):
			Global_1966137 = 0.8f;
			break;
		
		case joaat("revolter"):
			Global_1966137 = 0.75f;
			break;
		
		case joaat("entityxf"):
			Global_1966137 = 0.65f;
			break;
		
		case joaat("turismor"):
			Global_1966137 = 0.42f;
			break;
		
		case joaat("rt3000"):
			Global_1966137 = 0.6f;
			break;
		
		case joaat("sugoi"):
			Global_1966137 = 0.58f;
			break;
		
		case joaat("cinquemila"):
			Global_1966137 = 0.65f;
			break;
		
		case joaat("reaper"):
			Global_1966137 = 0.75f;
			break;
		
		case joaat("cypher"):
			Global_1966137 = 0.68f;
			break;
		
		case joaat("rapidgt3"):
			Global_1966137 = 0.9f;
			break;
		
		case joaat("paragon"):
			Global_1966137 = 0.68f;
			break;
		
		case joaat("tempesta"):
			Global_1966137 = 0.6f;
			break;
		
		case joaat("cyclone"):
			Global_1966137 = 0.58f;
			break;
	}
}

int func_273()
{
	return Global_262145.f_26763;
}

void func_274()
{
	if ((Global_112332 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0) && func_45())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_275()
{
	int iVar0;
	
	if (!iLocal_8)
	{
		if (Global_1836383)
		{
			iVar0 = func_276(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10592 = 1;
			}
			iLocal_8 = 1;
		}
	}
	else if (!Global_1836383)
	{
		iLocal_8 = 0;
	}
}

int func_276(int iParam0)
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

void func_277()
{
	if (!iLocal_7)
	{
		if (Global_1836383)
		{
			if (func_279() || func_278())
			{
				Global_262145.f_20214 = 1;
			}
			else
			{
				Global_262145.f_20214 = 0;
			}
			iLocal_7 = 1;
		}
	}
	else if (!Global_1836383)
	{
		iLocal_7 = 0;
	}
}

int func_278()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_276(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10701)
	{
		return 0;
	}
	uVar1[0] = func_276(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_276(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_276(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_276(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10697 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10701)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_279()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_276(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10700)
	{
		return 0;
	}
	uVar1[0] = func_276(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_276(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_276(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_276(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10696 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10700)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_280()
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < Global_1853348)
		{
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_772), true);
			iVar0++;
		}
	}
}

void func_281()
{
	if (Global_262145.f_10676 != 120)
	{
		Global_262145.f_10676 = 120;
	}
}

void func_282()
{
	struct<3> Var0;
	bool bVar3;
	
	if (func_290())
	{
		return;
	}
	bVar3 = false;
	if (Global_1836844.f_21 != -1 && iLocal_4 != -1)
	{
		Global_1836844.f_20 = 0;
		Global_1836844.f_21 = -1;
		iLocal_4 = -1;
	}
	if (func_127(&uLocal_5, 500, 0))
	{
		if (func_26(PLAYER::PLAYER_ID(), 1, 1))
		{
			iLocal_3 = func_288();
		}
		else
		{
			iLocal_3 = -1;
		}
		func_33(&uLocal_5, 0, 0);
	}
	if (iLocal_3 != -1)
	{
		if (func_284(iLocal_3))
		{
			bVar3 = true;
			Var0 = { func_283(iLocal_3) };
		}
	}
	if (bVar3)
	{
		if (!func_180())
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Var0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, false, false, false, true);
				}
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, false, false, false, true);
			}
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		else
		{
			func_179(1);
		}
		Global_1836844.f_20 = 1;
		Global_1836844.f_21 = iLocal_3;
		iLocal_4 = iLocal_3;
	}
}

Vector3 func_283(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 229.0116f, -1643.355f, 28.2873f;
		
		case 1:
			return 293.7642f, 144.9374f, 103.0358f;
		
		case 2:
			return 1156.309f, -541.5432f, 63.6497f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_284(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_180())
	{
		iVar0 = func_182();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, func_287(iParam0), func_286(iParam0), func_285(iParam0), false, true, 0);
}

float func_285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		
		case 1:
			return 20.75f;
		
		case 2:
			return 1.75f;
		
		default:
	}
	return 0f;
}

Vector3 func_286(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 198.5528f, -1659.867f, 35.01322f;
		
		case 1:
			return 299.3682f, 128.9781f, 120.2999f;
		
		case 2:
			return 1153.93f, -549.896f, 67.02487f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 212.3601f, -1643.885f, 32.70328f;
		
		case 1:
			return 301.751f, 136.1791f, 112.2999f;
		
		case 2:
			return 1155.986f, -549.4083f, 63.72763f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_288()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	
	iVar1 = -1;
	fVar2 = 10000f;
	iVar4 = PLAYER::PLAYER_PED_ID();
	if (func_180())
	{
		iVar4 = func_182();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		Var5 = { ENTITY::GET_ENTITY_COORDS(iVar4, true) };
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Var8 = { func_289(iVar0) };
			if (!func_258(Var8))
			{
				fVar3 = SYSTEM::VDIST2(Var5, Var8);
				if (fVar3 < fVar2)
				{
					fVar2 = fVar3;
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

Vector3 func_289(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { func_287(iParam0) };
	Var3 = { func_286(iParam0) };
	fVar6 = ((Var0.f_0 + Var3.f_0) / 2f);
	fVar7 = ((Var0.f_1 + Var3.f_1) / 2f);
	fVar8 = ((Var0.f_2 + Var3.f_2) / 2f);
	return fVar6, fVar7, fVar8;
}

int func_290()
{
	if (Global_2815059.f_6753)
	{
		return 1;
	}
	if (!func_45())
	{
		return 1;
	}
	if (func_58())
	{
		return 1;
	}
	return 0;
}

void func_291()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_292(0.69f, 0.06f, "STRING", sLocal_0);
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

void func_292(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_293()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

