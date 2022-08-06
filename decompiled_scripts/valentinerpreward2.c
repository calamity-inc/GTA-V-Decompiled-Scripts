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
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = 0;
	int iLocal_33 = 0;
	struct<2> Local_34 = { 0, 0 } ;
	int iLocal_36[4] = { 0, 0, 0, 0 };
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	struct<2> Local_43 = { 0, 0 } ;
	struct<2> Local_45 = { 0, 0 } ;
	struct<2> Local_47 = { 0, 0 } ;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60[5] = { 0, 0, 0, 0, 0 };
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_80[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.58.02";
	iLocal_20 = -1;
	iLocal_21 = -1;
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
		if (func_187())
		{
			func_185();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723612.f_3)
		{
			func_184();
			func_183();
			func_180();
			func_178();
			func_177();
			func_175();
			func_174();
			func_173();
			func_161();
			func_155();
			func_150();
			func_148();
			func_145();
			func_140();
			func_136();
			func_129();
			func_122();
			func_83();
			func_74();
			func_58();
			func_56();
			func_53();
			func_46();
			func_45();
			func_44();
			func_28();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_27();
			func_25();
			func_15();
			func_14();
			func_13();
			func_12();
			func_11();
			func_5();
			func_3();
		}
		else
		{
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
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) == 0)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4718592.f_180134.f_2817 - 1))
		{
			iLocal_60[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	if (!Global_1575033)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4718592.f_180134.f_2817 - 1))
		{
			if (iLocal_60[iVar0] != 0)
			{
				bVar1 = false;
				while (bVar1 <= 4)
				{
					if (BitTest(iLocal_60[iVar0], bVar1))
					{
						Global_4718592.f_180134[iVar0 /*256*/].f_49[bVar1 /*12*/].f_1++;
						MISC::CLEAR_BIT(&(iLocal_60[iVar0]), bVar1);
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
				MISC::SET_BIT(&(iLocal_60[iVar0]), bVar1);
			}
			bVar1++;
		}
		iVar0++;
	}
}

void func_2()
{
	if (iLocal_66)
	{
		iLocal_66 = 0;
	}
	if (iLocal_67)
	{
		iLocal_67 = 0;
	}
}

void func_3()
{
	int iVar0;
	
	if (iLocal_92)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) == 0)
		{
			iLocal_92 = 0;
		}
		return;
	}
	if (iLocal_93)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller")) == 0)
		{
			iLocal_93 = 0;
		}
		return;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller")) == 0)
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
				func_4(&(Global_4980736.f_94390[iVar0 /*1004*/].f_140), 1);
			}
			if (BitTest(Global_4980736.f_94390[iVar0 /*1004*/].f_542, 30))
			{
				func_4(&(Global_4980736.f_94390[iVar0 /*1004*/].f_140), 7);
			}
			if (BitTest(Global_4980736.f_94390[iVar0 /*1004*/].f_547, 9))
			{
				func_4(&(Global_4980736.f_94390[iVar0 /*1004*/].f_140), 3);
			}
			if (BitTest(Global_4980736.f_94390[iVar0 /*1004*/].f_544, 30))
			{
				func_4(&(Global_4980736.f_94390[iVar0 /*1004*/].f_140), 4);
			}
			if (BitTest(Global_4980736.f_94390[iVar0 /*1004*/].f_537, 13))
			{
				func_4(&(Global_4980736.f_94390[iVar0 /*1004*/].f_140), 5);
			}
		}
		iVar0++;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		iLocal_92 = 1;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller")) > 0)
	{
		iLocal_93 = 1;
	}
}

void func_4(var uParam0, int iParam1)
{
	MISC::SET_BIT(uParam0[(iParam1 / 32)], (iParam1 % 32));
}

void func_5()
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
	bool bVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	
	if (Global_4718592.f_168757 == 90)
	{
		iVar0 = PLAYER::PLAYER_ID();
		if (PLAYER::GET_PLAYER_TEAM(iVar0) == 0)
		{
			iVar1 = PLAYER::GET_PLAYER_TEAM(iVar0);
			iVar2 = Global_1058069.f_14[iVar1];
			if ((iVar2 < 0 || iVar2 >= 17) || iVar1 != 0)
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
			if (!func_10(iVar7, 1, 1))
			{
				return;
			}
			if (!func_10(iVar0, 1, 1))
			{
				return;
			}
			fVar8 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar5, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar7), true));
			if (fVar8 < fVar3)
			{
				iLocal_54 = 1;
				if (func_9(&uLocal_52))
				{
					func_8(&uLocal_52);
				}
				bVar9 = true;
			}
			else if (func_9(&uLocal_52))
			{
				bVar9 = true;
			}
			if (bVar9)
			{
				fVar10 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iVar4)) - 100f);
				fVar11 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar4)) - 100f);
				fVar12 = ((fVar10 / fVar11) * 100f);
				if (fVar12 <= 11f)
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar5);
					iLocal_54 = 0;
					func_8(&uLocal_52);
					return;
				}
			}
			if ((iLocal_54 && fVar8 >= fVar3) && !func_9(&uLocal_52))
			{
				func_7(&uLocal_52, 0, 0);
				iLocal_54 = 0;
			}
			if (func_9(&uLocal_52))
			{
				iVar13 = func_6(&uLocal_52, 0, 0);
				iVar14 = Global_4718592.f_658[iVar1 /*22957*/].f_1781[iVar2];
				if (iVar13 > iVar14)
				{
					func_8(&uLocal_52);
				}
			}
		}
	}
}

int func_6(var uParam0, bool bParam1, bool bParam2)
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

void func_7(var uParam0, bool bParam1, bool bParam2)
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

void func_8(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

int func_10(int iParam0, bool bParam1, bool bParam2)
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

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_controler")) == 0)
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
			if (!iLocal_67)
			{
				iLocal_67 = 1;
				iVar0 = 0;
				while (iVar0 <= 10)
				{
					uLocal_68[iVar0] = Global_4718592.f_180134[iVar0 /*256*/].f_37.f_3;
					uLocal_80[iVar0] = Global_4718592.f_180134[iVar0 /*256*/].f_43.f_3;
					Global_4718592.f_180134[iVar0 /*256*/].f_37.f_3 = 0;
					Global_4718592.f_180134[iVar0 /*256*/].f_43.f_3 = 0;
					iVar0++;
				}
			}
		}
		else if (iLocal_67)
		{
			iLocal_67 = 0;
			iVar0 = 0;
			while (iVar0 <= 10)
			{
				Global_4718592.f_180134[iVar0 /*256*/].f_37.f_3 = uLocal_68[iVar0];
				Global_4718592.f_180134[iVar0 /*256*/].f_43.f_3 = uLocal_80[iVar0];
				iVar0++;
			}
		}
	}
}

void func_12()
{
	if (Global_4718592.f_116524 == 380938673 || Global_4718592.f_116524 == 1597839856)
	{
		if (!BitTest(Global_4718592.f_35, 2))
		{
			MISC::SET_BIT(&(Global_4718592.f_35), 2);
		}
	}
}

void func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_controler")) == 0)
	{
		iLocal_66 = 0;
		return;
	}
	if (iLocal_66)
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
	iLocal_66 = 1;
}

void func_14()
{
	if ((Global_4718592 == 1 && Global_4718592.f_168758 >= 6) && Global_1836382)
	{
		Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_10 = Global_2715699.f_3813.f_9;
		Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_9 = Global_2715699.f_3813.f_1;
	}
}

void func_15()
{
	bool bVar0;
	bool bVar1;
	var uVar2[4];
	int iVar7;
	
	if ((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || Global_1575058) || Global_1574964) || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_24())
	{
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1575058) || Global_1574964)
		{
			if (fLocal_41 > 0f || fLocal_42 > 0f)
			{
				func_23();
				fLocal_41 = 0f;
				fLocal_42 = 0f;
				func_8(&Local_43);
				func_8(&Local_45);
				func_8(&Local_47);
			}
		}
		return;
	}
	bVar0 = fLocal_42 > 40f;
	if (!Global_1575058 && !bVar0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || func_22())
		{
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (!Global_1574965)
				{
					return;
				}
				bVar1 = true;
				if (!PAD::_IS_USING_KEYBOARD(0))
				{
					func_21(&(uVar2[0]), &(uVar2[1]), &(uVar2[2]), &(uVar2[3]), 0);
					iVar7 = 0;
					while (iVar7 < 4)
					{
						if (func_20(uVar2[iVar7], &(iLocal_36[iVar7])))
						{
							bVar1 = false;
						}
						iVar7++;
					}
				}
				else
				{
					bVar1 = true;
					if (func_17())
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (!func_9(&Local_43))
					{
						func_7(&Local_43, 0, 0);
					}
					if (func_9(&Local_43) && func_16(Local_43, 2000, 0))
					{
						fLocal_41 = (fLocal_41 + MISC::GET_FRAME_TIME());
					}
				}
				else
				{
					if (func_9(&Local_43))
					{
						func_8(&Local_43);
						func_23();
					}
					fLocal_42 = (fLocal_42 + MISC::GET_FRAME_TIME());
					fLocal_41 = 0f;
				}
				if ((MISC::GET_FRAME_COUNT() % 60) == 0)
				{
				}
				if (fLocal_41 > 40f)
				{
					NETWORK::NETWORK_BAIL(55457, Global_1940663[0], Global_1940663[1]);
				}
			}
			else
			{
				func_23();
			}
		}
		else
		{
			func_23();
		}
	}
	else if (bVar0)
	{
	}
}

int func_16(int iParam0, var uParam1, int iParam2, bool bParam3)
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

int func_17()
{
	bool bVar0;
	var uVar1[4];
	
	bVar0 = true;
	if (func_9(&Local_45) && func_16(Local_45, 4000, 0))
	{
		func_8(&Local_45);
	}
	func_21(&(uVar1[0]), &(uVar1[1]), &(uVar1[2]), &(uVar1[3]), 0);
	if (func_19(uVar1[3], &(iLocal_36[3])))
	{
		bVar0 = false;
	}
	if ((((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 61) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 62)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 63)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 64)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 76)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 74)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 36)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 25)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 24)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 22)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 23)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 21)) || !bVar0)
	{
		func_18(&Local_45, 0, 0);
	}
	if (func_9(&Local_45))
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2)
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

int func_19(int iParam0, var uParam1)
{
	if ((iParam0 > 1 || iParam0 < -1) && *uParam1 != iParam0)
	{
		*uParam1 = iParam0;
		return 1;
	}
	return 0;
}

int func_20(int iParam0, var uParam1)
{
	if ((iParam0 > 10 || iParam0 < -10) && *uParam1 != iParam0)
	{
		*uParam1 = iParam0;
		func_18(&Local_47, 0, 0);
		return 1;
	}
	if (((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 76) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 74)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 36)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 25)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 24)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 22)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 23)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 21))
	{
		func_18(&Local_47, 0, 0);
		return 1;
	}
	if (func_9(&Local_47))
	{
		if (func_16(Local_47, 2500, 0))
		{
			func_8(&Local_47);
		}
		return 1;
	}
	return 0;
}

void func_21(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

var func_22()
{
	return Global_2714762.f_691;
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_36[iVar0] = 0;
		iVar0++;
	}
}

bool func_24()
{
	return (Global_4718592 == 0 && Global_4718592.f_2 == 6);
}

void func_25()
{
	int iVar0;
	int iVar1;
	
	if (!func_26())
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

int func_26()
{
	if ((((((Global_4718592.f_116524 == 798118803 || Global_4718592.f_116524 == 1451106821) || Global_4718592.f_116524 == 666726606) || Global_4718592.f_116524 == -128380641) || Global_4718592.f_116524 == 1359250298) || Global_4718592.f_116524 == 1854108781) || Global_4718592.f_116524 == 2144011286)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	int iVar0;
	
	if (!func_26())
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

void func_28()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar49;
	float fVar50;
	struct<3> Var51;
	
	if (func_9(&uLocal_14))
	{
		MISC::SET_BIT(&Global_8137, 2);
		if (func_43(&uLocal_14, 60000, 0))
		{
			func_18(&uLocal_14, 0, 0);
			func_8(&uLocal_14);
		}
	}
	if (func_9(&uLocal_12) && func_43(&uLocal_12, 1000, 0))
	{
		if (iLocal_21 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_21 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_21, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_43(&uLocal_12, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_21))
			{
				AUDIO::STOP_SOUND(iLocal_21);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_21);
			iLocal_21 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_18(&uLocal_12, 0, 0);
			func_8(&uLocal_12);
		}
	}
	if (!iLocal_6 && !func_38())
	{
		return;
	}
	iLocal_6 = 1;
	MISC::SET_BIT(&Global_8137, 2);
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
			iVar1 = func_37(7869, -1, 0);
			func_34(7869, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Var2);
			Local_16 = { ENTITY::GET_ENTITY_COORDS(iLocal_5, false) };
			iLocal_19 = 0;
		}
	}
	else
	{
		func_33();
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
				if (func_43(&uLocal_8, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_5, false);
					func_18(&uLocal_8, 0, 0);
					func_8(&uLocal_8);
					func_7(&uLocal_10, 0, 0);
					iLocal_7 = 1;
				}
			}
			else
			{
				fVar49 = (SYSTEM::TO_FLOAT(func_6(&uLocal_10, 0, 0)) / SYSTEM::TO_FLOAT(func_32()));
				fVar50 = (SYSTEM::TO_FLOAT(func_6(&uLocal_8, 0, 0)) / SYSTEM::TO_FLOAT(func_31()));
				fVar50 = (fVar50 * fVar49);
				Var51 = { func_29(Local_16, func_30(), fVar50) };
				ENTITY::SET_ENTITY_COORDS(iLocal_5, Var51, true, false, false, true);
				if (fVar50 >= 1f)
				{
					iLocal_19++;
					Local_16 = { ENTITY::GET_ENTITY_COORDS(iLocal_5, false) };
					func_18(&uLocal_8, 0, 0);
					func_8(&uLocal_8);
					if (func_31() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_5);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_20))
						{
							AUDIO::STOP_SOUND(iLocal_20);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_20);
						iLocal_20 = -1;
						func_7(&uLocal_12, 0, 0);
						func_7(&uLocal_14, 0, 0);
						func_18(&uLocal_10, 0, 0);
						func_8(&uLocal_10);
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

Vector3 func_29(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_30()
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

int func_31()
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

int func_32()
{
	return 3150;
}

void func_33()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_5, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_5, Var0, 2, true);
}

void func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
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

int func_36()
{
	return Global_1574918;
}

int func_37(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_35(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_38()
{
	if (((((((func_42(22107, -1) && Global_2671449 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_41(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2715699.f_3076.f_178 >= 1) && Global_2715699.f_3076.f_178 < 4) && func_40()) && func_39())
	{
		return 1;
	}
	return 0;
}

int func_39()
{
	if (func_42(15476, -1) && func_37(5453, func_36(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_40()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
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

bool func_41(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

bool func_42(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_43(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

void func_44()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		if (iLocal_94)
		{
			STREAMING::REMOVE_IPL("xm_hatch_closed");
			iLocal_94 = 0;
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
	iLocal_94 = 1;
}

void func_45()
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

void func_46()
{
	int iVar0;
	
	if (!func_51(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_47(0))
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

int func_47(int iParam0)
{
	if (func_49(PLAYER::PLAYER_ID()))
	{
		return func_48(PLAYER::PLAYER_ID(), iParam0);
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	if (func_49(iParam0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1;
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_50())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_50()
{
	return -1;
}

int func_51(int iParam0)
{
	if (func_52(Global_1853348[iParam0 /*834*/].f_267.f_32, -1))
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
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

void func_53()
{
	int iVar0;
	
	if (func_55(PLAYER::PLAYER_PED_ID()) && Global_75485)
	{
		if (Global_75603 == 16 && Global_75602 == 179)
		{
			iVar0 = Global_77051;
			if (!func_54())
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

int func_54()
{
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_295.f_7, 1) || Global_262145.f_24715)
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0)
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

void func_56()
{
	if (!func_57())
	{
		if (func_9(&uLocal_57))
		{
			func_8(&uLocal_57);
		}
		iLocal_59 = 0;
	}
	if (iLocal_59)
	{
		return;
	}
	if (!func_9(&uLocal_57))
	{
		func_18(&uLocal_57, 0, 0);
	}
	if (!func_43(&uLocal_57, 35000, 0))
	{
		return;
	}
	iLocal_59 = 1;
	Global_2714762.f_43.f_3 = 3;
	Global_2714762.f_43.f_40 = 1;
	MISC::SET_BIT(&(Global_4718592.f_27), 22);
	CAM::DO_SCREEN_FADE_OUT(0);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
	CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
}

int func_57()
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

void func_58()
{
	int iVar0;
	int iVar1;
	
	if (((func_55(PLAYER::PLAYER_PED_ID()) && func_71(PLAYER::PLAYER_ID())) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !func_70(PLAYER::PLAYER_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
		iVar1 = func_69(PLAYER::PLAYER_PED_ID(), 0);
		if (func_55(iVar0) && iVar1 == -1)
		{
			if (func_67(PLAYER::PLAYER_ID()))
			{
				if (Global_4282954 != -1 && Global_2359296[func_66() /*5567*/].f_681.f_2 != Global_4282954)
				{
					if (!iLocal_56)
					{
						func_61(1, 0, 1, 0, 0, 0, 0);
						iLocal_56 = 1;
					}
					if (!func_59())
					{
						iLocal_56 = 0;
						Global_2359296[func_66() /*5567*/].f_681.f_2 = Global_4282954;
					}
				}
			}
		}
	}
}

int func_59()
{
	if (func_60(2) || func_60(1))
	{
		return 1;
	}
	return 0;
}

bool func_60(int iParam0)
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_1, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_2, (iParam0 - 32));
}

void func_61(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_65() < 0 && Global_1958535)
	{
		return;
	}
	if (func_60(35))
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
		func_64(2);
	}
	else
	{
		func_64(1);
	}
	if (bParam1)
	{
		func_64(11);
	}
	if (bParam2)
	{
		func_64(32);
		if (bParam3)
		{
			if (func_65() >= 0 && BitTest(Global_1585857[func_65() /*142*/].f_103, 0))
			{
				func_64(33);
			}
		}
		else
		{
			func_63(33);
		}
		if (func_65() >= 0)
		{
			if (func_62(Global_1585857[func_65() /*142*/].f_66))
			{
				func_64(40);
			}
		}
	}
	else if (bParam5)
	{
		func_64(37);
	}
	if (bParam4)
	{
		func_64(36);
	}
	if (func_60(36))
	{
		if (func_60(2))
		{
			func_63(36);
		}
	}
	if (bParam6)
	{
		func_64(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2815059.f_424 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_62(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_63(bool bParam0)
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

void func_64(bool bParam0)
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

int func_65()
{
	if (Global_2359296[func_66() /*5567*/].f_681.f_2 >= 363)
	{
		Global_2359296[func_66() /*5567*/].f_681.f_2 = -1;
		return -1;
	}
	return Global_2359296[func_66() /*5567*/].f_681.f_2;
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_67(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2689235[iParam0 /*453*/].f_244 > -1)
		{
			if (func_68(Global_2689235[iParam0 /*453*/].f_244) == 5)
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

int func_68(int iParam0)
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

int func_69(int iParam0, bool bParam1)
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

int func_70(int iParam0)
{
	if (iParam0 != func_50() && func_10(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 3);
	}
	return 0;
}

int func_71(int iParam0)
{
	if (iParam0 == func_50())
	{
		return 0;
	}
	if (func_72(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_73(Global_2689235[iParam0 /*453*/].f_318.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_73(int iParam0)
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

void func_74()
{
	if ((func_82() || !func_80()) || !func_10(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (func_79(PLAYER::PLAYER_PED_ID(), 886.1063f, -983.7135f, 30.59999f, 1) < 20f)
	{
		Global_2815059.f_6753 = 1;
		iLocal_55 = 1;
	}
	else if (iLocal_55)
	{
		Global_2815059.f_6753 = 0;
		iLocal_55 = 0;
	}
	if (Global_2815059.f_6753 && iLocal_55)
	{
		if (func_77())
		{
			if (!func_76())
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
				func_75(1);
			}
			Global_1836844.f_20 = 1;
			Global_1836844.f_21 = 39;
		}
	}
}

void func_75(bool bParam0)
{
	if (bParam0)
	{
		if (func_76())
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

bool func_76()
{
	return BitTest(Global_1958711, 5);
}

bool func_77()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_76())
	{
		iVar0 = func_78();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	return ENTITY::IS_ENTITY_AT_COORD(iVar0, 886.1063f, -983.7135f, 30.59999f, 4.25f, 5.5f, 5f, false, true, 0);
}

int func_78()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		return Global_1958711.f_20;
	}
	return -1;
}

float func_79(int iParam0, struct<3> Param1, bool bParam4)
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

int func_80()
{
	if (func_81() == 0)
	{
		return 1;
	}
	return 0;
}

int func_81()
{
	return Global_1574632.f_18;
}

bool func_82()
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192 != 0;
}

void func_83()
{
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return;
	}
	if (BitTest(Global_4718592.f_162538, 0) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_112();
		func_84();
	}
}

void func_84()
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
		func_110();
		if (Global_1648034.f_1146 == -1 || Global_1648034.f_1146 == -2)
		{
			iVar0 = func_37(1885, -1, 0);
			if (iVar0 > 0)
			{
				Global_1648034.f_1146 = 5;
			}
			else
			{
				iVar0 = func_37(1884, -1, 0);
				if (iVar0 > 0)
				{
					Global_1648034.f_1146 = 4;
				}
				else
				{
					iVar0 = func_37(1883, -1, 0);
					if (iVar0 > 0)
					{
						Global_1648034.f_1146 = 3;
					}
					else
					{
						iVar0 = func_37(1882, -1, 0);
						if (iVar0 > 0)
						{
							Global_1648034.f_1146 = 2;
						}
						else
						{
							iVar0 = func_37(1881, -1, 0);
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
		iVar1 = func_101();
		bVar2 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) >= SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * IntToFloat((20 * iVar1))));
		if (func_100(PLAYER::PLAYER_ID()) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_99(Global_4718592.f_116524)))
		{
			bVar3 = true;
		}
		if (func_97(PLAYER::PLAYER_ID()) || func_96())
		{
			bVar4 = true;
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 362))
		{
			if (((((((((Global_1648034.f_1146 != -1 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != 2) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != 1) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != 0) && !bVar4) && !bVar3) && !func_95(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (Global_1648034.f_1146 == -2)
				{
					func_94("WPWH_ARMOR_NO", 5000);
					Global_1648034.f_1147 = 1;
					Global_1922036 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_MP_SOUNDSET", true);
					Global_1648034.f_1146 = -2;
					return;
				}
				if (bVar2)
				{
					func_94("WPWH_ARMOR_FL", 5000);
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
					func_93(1881, 1, -1);
				}
				else if (Global_1648034.f_1146 == 2)
				{
					iVar5 = (iVar5 + SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * 40f)));
					func_93(1882, 1, -1);
				}
				else if (Global_1648034.f_1146 == 3)
				{
					iVar5 = (iVar5 + SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * 60f)));
					func_93(1883, 1, -1);
				}
				else if (Global_1648034.f_1146 == 4)
				{
					iVar5 = (iVar5 + SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * 80f)));
					func_93(1884, 1, -1);
				}
				else if (Global_1648034.f_1146 == 5)
				{
					iVar5 = (iVar5 + SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * 100f)));
					func_93(1885, 1, -1);
				}
				iVar6 = func_92(Global_1648034.f_1146);
				iVar7 = 1927737204;
				iVar8 = 1702063850;
				iVar9 = 813560150;
				func_85(0, iVar6, iVar7, 1, 0, iVar8, 0, iVar9, 0);
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

void func_85(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
		else if (Global_1888831.f_3.f_2 != func_90())
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_89(&(Global_1888831.f_3));
		unk_0x887DAD63CF5B7908(&(Global_1888831.f_3));
		func_88();
	}
	Global_1888831 = 1;
	Global_1888831.f_3 = iParam0;
	if (func_86())
	{
		Global_1888831.f_3.f_2 = func_90();
	}
	Global_1888831.f_3.f_6 = iParam1;
	Global_1888831.f_3.f_5 = iParam2;
	Global_1888831.f_3.f_7 = (Global_1888831.f_3.f_7 + iParam3);
	Global_1888831.f_3.f_3 = iParam4;
	Global_1888831.f_3.f_8 = iParam8;
	Global_1888831.f_3.f_1 = iParam5;
	Global_1888831.f_3.f_4 = iParam7;
	Global_1888831.f_3.f_9 = iParam6;
	func_8(&(Global_1888831.f_1));
	func_7(&(Global_1888831.f_1), 0, 0);
}

int func_86()
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_87() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_87()
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

void func_88()
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
	func_8(&(Global_1888831.f_1));
}

void func_89(var uParam0)
{
}

int func_90()
{
	struct<13> Var0;
	
	Var0 = { func_87() };
	return func_91(&Var0);
}

int func_91(var* uParam0)
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

int func_92(int iParam0)
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

void func_93(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_37(iParam0, func_35(iParam2), 0);
	iVar0 = (iVar0 - iParam1);
	func_34(iParam0, iVar0, iParam2, 1, 0);
}

void func_94(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_95(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (FILES::_0x7796B21B76221BC5(iParam0, 11, joaat("JUGG_SUIT")))
	{
		return 1;
	}
	return 0;
}

int func_96()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2671449.f_58) && !Global_2671449.f_57 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_97(int iParam0)
{
	return func_98(iParam0) == joaat("weapon_minigun");
}

int func_98(int iParam0)
{
	return Global_1892703[iParam0 /*599*/].f_579;
}

int func_99(int iParam0)
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

bool func_100(int iParam0)
{
	return Global_2689235[iParam0 /*453*/].f_119 == 4;
}

int func_101()
{
	if (func_102(160))
	{
		return 5;
	}
	else if (func_102(159))
	{
		return 4;
	}
	else if (func_102(158))
	{
		return 3;
	}
	else if (func_102(157))
	{
		return 2;
	}
	else if (func_102(156))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_109())
	{
		return 0;
	}
	uVar0 = func_104(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_103(iVar1));
}

int func_103(int iParam0)
{
	return (iParam0 % 32);
}

int func_104(var uParam0)
{
	int iVar0;
	
	iVar0 = func_37(func_105(uParam0, 999), -1, 0);
	return iVar0;
}

int func_105(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_108(iVar0);
	if (((func_107() == 0 || func_106() == 0) || iParam1 == 0) || (func_107() == 999 && func_106() == 999))
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

int func_106()
{
	return Global_31960;
}

int func_107()
{
	return Global_31959;
}

int func_108(int iParam0)
{
	return (iParam0 / 32);
}

bool func_109()
{
	return Global_1575037;
}

void func_110()
{
	if (Global_1648034.f_1147)
	{
		if (((!func_111("WPWH_SNACK_NO") && !func_111("WPWH_SNACK_FL")) && !func_111("WPWH_ARMOR_NO")) && !func_111("WPWH_ARMOR_FL"))
		{
			Global_1648034.f_1147 = 0;
		}
	}
}

bool func_111(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_112()
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
		iVar0 = func_37(1278, -1, 0);
		if (iVar0 > 0)
		{
			Global_1648034.f_1145 = 66;
		}
		else
		{
			iVar0 = func_37(62, -1, 0);
			if (iVar0 > 0)
			{
				Global_1648034.f_1145 = 60;
			}
			else
			{
				iVar0 = func_37(1277, -1, 0);
				if (iVar0 > 0)
				{
					Global_1648034.f_1145 = 65;
				}
				else
				{
					iVar0 = func_37(1276, -1, 0);
					if (iVar0 > 0)
					{
						Global_1648034.f_1145 = 64;
					}
					else
					{
						iVar0 = func_37(10404, -1, 0);
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
			if (((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != 2) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != 1) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != 0) && !func_120()) && !func_95(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (Global_1648034.f_1145 == -1)
				{
					func_94("WPWH_SNACK_NO", 5000);
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
					func_94("WPWH_SNACK_FL", 5000);
					Global_1648034.f_1147 = 1;
					Global_1922036 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_MP_SOUNDSET", true);
					Global_1648034.f_1145 = -1;
					return;
				}
				func_115(func_116(2, Global_1648034.f_1145));
				func_114(Global_1648034.f_1145);
				iVar4 = func_113(Global_1648034.f_1145);
				iVar5 = 1359863693;
				iVar6 = 1702063850;
				iVar7 = 813560150;
				func_85(0, iVar4, iVar5, 1, 0, iVar6, 0, iVar7, 0);
				Global_1648034.f_1145 = -1;
			}
		}
	}
}

int func_113(int iParam0)
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

void func_114(int iParam0)
{
	switch (iParam0)
	{
		case 66:
			func_93(1278, 1, -1);
			break;
		
		case 65:
			func_93(1277, 1, -1);
			break;
		
		case 64:
			func_93(1276, 1, -1);
			break;
		
		case 60:
			func_93(62, 1, -1);
			break;
		
		case 63:
			func_93(10404, 1, -1);
			break;
	}
}

void func_115(int iParam0)
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

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = func_119(iParam0, iParam1);
	iVar1 = func_118(iParam0, iParam1);
	fVar2 = func_117(iParam0, iParam1);
	if (iVar1 > 0)
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT((iVar0 * iVar1)) * fVar2));
	}
	return SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * fVar2));
}

float func_117(int iParam0, int iParam1)
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

int func_118(int iParam0, int iParam1)
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

int func_119(int iParam0, int iParam1)
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

int func_120()
{
	if (func_121())
	{
		return 0;
	}
	return BitTest(Global_2815059.f_4660, 24);
}

bool func_121()
{
	return Global_2787908;
}

void func_122()
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
	if (func_42(34707, -1) && !BitTest(Global_1978994, 27))
	{
		return;
	}
	sVar0 = "HIDDEN_RADIO_MPSUM2_NEWS";
	if (!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_PLAYER_RADIO_STATION_NAME(), sVar0))
	{
		return;
	}
	func_123(0);
}

void func_123(int iParam0)
{
	if (func_128())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_127(0))
		{
			func_124(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

void func_124(int iParam0)
{
	if (func_128())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_76())
		{
			func_126(1, 1);
		}
		else
		{
			func_126(0, 0);
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
	if (!func_125())
	{
		Global_20266.f_1 = 3;
	}
}

int func_125()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_126(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_127(0))
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

int func_127(int iParam0)
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_128()
{
	return BitTest(Global_1958711, 19);
}

void func_129()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723612.f_3)
	{
		switch (iLocal_49)
		{
			case 0:
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					return;
				}
				if (Global_1946250.f_497 && func_135(Global_1946250.f_3371))
				{
					func_133(1);
					iLocal_49 = 1;
				}
				break;
			
			case 1:
				func_133(1);
				if ((!func_82() && func_80()) && Global_1946244 == 7)
				{
					bVar0 = true;
				}
				else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					bVar0 = true;
				}
				else if ((func_80() && !func_132(PLAYER::PLAYER_ID())) && !func_131(PLAYER::PLAYER_ID()))
				{
					bVar0 = true;
				}
				if (func_130() == 37 && Global_262145.f_10721)
				{
					func_7(&uLocal_50, 1, 0);
				}
				if (bVar0)
				{
					iLocal_49 = 2;
				}
				break;
			
			case 2:
				func_133(0);
				iLocal_49 = 0;
				break;
		}
	}
	else if (iLocal_49 != 0)
	{
		func_133(0);
		iLocal_49 = 0;
	}
	if (func_9(&uLocal_50))
	{
		if (func_43(&uLocal_50, 20000, 1))
		{
			func_8(&uLocal_50);
			Global_262145.f_10721 = 1;
		}
		else
		{
			Global_262145.f_10721 = 0;
		}
	}
}

int func_130()
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192;
}

int func_131(int iParam0)
{
	if (iParam0 != func_50() && func_10(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 4);
	}
	return 0;
}

int func_132(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_10(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && iParam0 == PLAYER::PLAYER_ID()) && func_10(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

void func_133(bool bParam0)
{
	func_134(bParam0);
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

void func_134(bool bParam0)
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

int func_135(int iParam0)
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

void func_136()
{
	if (!func_26())
	{
		if (iLocal_33)
		{
			iLocal_30 = 0;
			iLocal_31 = 0;
			bLocal_32 = false;
			func_8(&Local_34);
			iLocal_33 = 0;
		}
		return;
	}
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == 0)
	{
		return;
	}
	if (!iLocal_33)
	{
		iLocal_33 = 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (iLocal_30 != PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_30 != 0)
			{
				iLocal_31 = 1;
				func_18(&Local_34, 0, 0);
			}
			iLocal_30 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (CAM::IS_SCREEN_FADING_IN() && iLocal_31)
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		bLocal_32 = true;
	}
	else if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (iLocal_31)
		{
			if (func_16(Local_34, 2500, 0))
			{
				if (bLocal_32)
				{
					CAM::DO_SCREEN_FADE_IN(100);
				}
				func_137(iLocal_30, 0);
				iLocal_31 = 0;
				func_8(&Local_34);
			}
		}
	}
}

void func_137(int iParam0, int iParam1)
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
	func_138(iParam0, &(Var0.f_1), 0);
	func_138(iParam0, &(Var0.f_2), 1);
	func_138(iParam0, &(Var0.f_3), 2);
	func_138(iParam0, &(Var0.f_4), 3);
	func_138(iParam0, &(Var0.f_5), 4);
	func_138(iParam0, &(Var0.f_6), 5);
	func_138(iParam0, &(Var0.f_7), 6);
	func_138(iParam0, &(Var0.f_8), 7);
	func_138(iParam0, &(Var0.f_9), 8);
	func_138(iParam0, &(Var0.f_10), 9);
	func_138(iParam0, &(Var0.f_11), 10);
	func_138(iParam0, &(Var0.f_12), 11);
	func_138(iParam0, &(Var0.f_13), 12);
	func_138(iParam0, &(Var0.f_14), 13);
	func_138(iParam0, &(Var0.f_15), 14);
	func_138(iParam0, &(Var0.f_16), 15);
	func_138(iParam0, &(Var0.f_17), 16);
	func_138(iParam0, &(Var0.f_21), 23);
	func_138(iParam0, &(Var0.f_22), 24);
	func_138(iParam0, &(Var0.f_26), 27);
	func_138(iParam0, &(Var0.f_27), 28);
	func_138(iParam0, &(Var0.f_28), 29);
	func_138(iParam0, &(Var0.f_29), 30);
	func_138(iParam0, &(Var0.f_30), 31);
	func_138(iParam0, &(Var0.f_31), 32);
	func_138(iParam0, &(Var0.f_32), 33);
	func_138(iParam0, &(Var0.f_33), 35);
	func_138(iParam0, &(Var0.f_34), 37);
	func_138(iParam0, &(Var0.f_35), 39);
	func_138(iParam0, &(Var0.f_36), 40);
	func_138(iParam0, &(Var0.f_37), 41);
	func_138(iParam0, &(Var0.f_38), 42);
	func_138(iParam0, &(Var0.f_39), 43);
	func_138(iParam0, &(Var0.f_40), 44);
	func_138(iParam0, &(Var0.f_41), 45);
	func_138(iParam0, &(Var0.f_42), 46);
	func_138(iParam0, &(Var0.f_43), 47);
	func_138(iParam0, &(Var0.f_44), 48);
}

void func_138(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = *uParam1;
	iVar0 = func_139(iVar0, -1, VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam2));
	if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam2) >= iVar0)
	{
		VEHICLE::SET_VEHICLE_MOD(iParam0, iParam2, iVar0, false);
	}
	else
	{
		*uParam1 = -1;
	}
}

int func_139(int iParam0, int iParam1, int iParam2)
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

void func_140()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		func_143();
	}
	else
	{
		func_141();
	}
}

void func_141()
{
	bool bVar0;
	
	if (iLocal_28 == 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= 25)
	{
		if (BitTest(iLocal_28, bVar0))
		{
			AUDIO::_SET_RADIO_STATION_IS_VISIBLE(func_142(bVar0), false);
			MISC::CLEAR_BIT(&iLocal_28, bVar0);
		}
		bVar0++;
	}
	iLocal_29 = 0;
	Global_2789831 = 0;
}

char* func_142(bool bParam0)
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

void func_143()
{
	bool bVar0;
	var uVar1;
	
	if (!func_144(Global_4718592.f_116524))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= 25)
	{
		uVar1 = func_37(9877, -1, 0);
		if (!BitTest(iLocal_29, bVar0))
		{
			if (BitTest(uVar1, bVar0))
			{
			}
			MISC::SET_BIT(&iLocal_29, bVar0);
			AUDIO::_SET_RADIO_STATION_IS_VISIBLE(func_142(bVar0), true);
		}
		if (!BitTest(uVar1, bVar0) && !BitTest(iLocal_28, bVar0))
		{
			MISC::SET_BIT(&iLocal_28, bVar0);
			Global_2789831 = 1;
		}
		bVar0++;
	}
}

int func_144(int iParam0)
{
	if ((iParam0 == Global_262145.f_31710[0] || iParam0 == Global_262145.f_31710[1]) || iParam0 == Global_262145.f_31710[2])
	{
		return 1;
	}
	return 0;
}

void func_145()
{
	if (!func_10(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (!func_147(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_146())
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1007.262f, -79.05004f, -100.0031f, -1008.166f, -79.02464f, -98.00307f, 0.9f, false, true, 0))
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.16f);
	}
}

int func_146()
{
	if (BitTest(Global_1946250.f_506, 29) || BitTest(Global_1946250.f_506, 30))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_73(Global_2689235[iParam0 /*453*/].f_318.f_6) == 21;
			}
		}
	}
	return 0;
}

void func_148()
{
	int iVar0;
	
	iLocal_27++;
	if (iLocal_27 == 30)
	{
		iLocal_27 = 0;
	}
	else
	{
		return;
	}
	if (((((((((!func_55(PLAYER::PLAYER_PED_ID()) || !func_10(PLAYER::PLAYER_ID(), 1, 1)) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) || !func_80()) || func_70(PLAYER::PLAYER_ID())) || func_149(PLAYER::PLAYER_ID())) || func_132(PLAYER::PLAYER_ID())) || Global_2703735.f_3428) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_55(iVar0))
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

int func_149(int iParam0)
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

void func_150()
{
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_153(PLAYER::PLAYER_ID(), 0, 1)) && func_151(PLAYER::PLAYER_ID()))
	{
		MISC::SET_BIT(&(Global_1946250.f_4523.f_1), 21);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_4523.f_1), 21);
	}
}

int func_151(int iParam0)
{
	if (func_152(Global_1853348[iParam0 /*834*/].f_267.f_32))
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0)
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

int func_153(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_50())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_154(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_50() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0, int iParam1)
{
	if (iParam0 != func_50())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_50())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_155()
{
	if (((((func_55(PLAYER::PLAYER_PED_ID()) && !func_132(PLAYER::PLAYER_ID())) && !func_70(PLAYER::PLAYER_ID())) && ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_304[1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2815059.f_304[1], false)) && func_156(Global_2815059.f_304[1]))
	{
		iLocal_26 = 1;
		MISC::SET_BIT(&(Global_1946250.f_4523), 3);
	}
	else if (iLocal_26)
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_4523), 3);
		iLocal_26 = 0;
	}
}

int func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5[25];
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		func_158(81, &Var2);
		iVar1 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar5);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uVar5[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar5[iVar0])) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uVar5[iVar0], false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar0], false) && !func_157(uVar5[iVar0], 1))
				{
					if (func_79(uVar5[iVar0], Var2, 1) < 8f)
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

int func_157(int iParam0, bool bParam1)
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

void func_158(int iParam0, var uParam1)
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
		if (func_160(PLAYER::PLAYER_ID()))
		{
			if (func_159(*uParam1))
			{
				if (Global_1946250.f_3630 != func_50())
				{
					if (!func_159(Global_2689235[Global_1946250.f_3630 /*453*/].f_318.f_11))
					{
						*uParam1 = { Global_2689235[Global_1946250.f_3630 /*453*/].f_318.f_11 };
					}
				}
			}
		}
	}
}

int func_159(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	if (iParam0 != func_50())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 8);
	}
	return 0;
}

void func_161()
{
	int iVar0;
	
	if (func_55(PLAYER::PLAYER_PED_ID()) && func_172(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_171(PLAYER::PLAYER_ID());
		if (iVar0 != -1 && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_168(0, iVar0), func_168(1, iVar0), 5f, false, true, 0) || func_166()))
		{
			if (HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				if (!Global_75485)
				{
					Global_75485 = 1;
					bLocal_23 = true;
				}
			}
			else if (bLocal_23)
			{
				Global_75485 = 0;
			}
			if (!iLocal_22)
			{
				func_164(1);
				iLocal_22 = 1;
				func_8(&uLocal_24);
			}
		}
		else
		{
			if (bLocal_23)
			{
				Global_75485 = 0;
			}
			if (iLocal_22)
			{
				func_18(&uLocal_24, 0, 0);
				iLocal_22 = 0;
			}
		}
	}
	else
	{
		if (bLocal_23)
		{
			Global_75485 = 0;
		}
		if (iLocal_22)
		{
			func_18(&uLocal_24, 0, 0);
			iLocal_22 = 0;
		}
	}
	if (((!func_70(PLAYER::PLAYER_ID()) && !func_163()) && !func_162()) && !BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_513, 3))
	{
		if (func_9(&uLocal_24) && func_43(&uLocal_24, 5000, 0))
		{
			func_164(0);
			func_8(&uLocal_24);
		}
	}
}

bool func_162()
{
	return Global_1946250.f_4711.f_1 != -1;
}

bool func_163()
{
	return Global_1946250.f_4716 != -1;
}

void func_164(int iParam0)
{
	if (func_165() && iParam0)
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

int func_165()
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if (func_167())
	{
		if ((MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "FIX_REC_MENU_T") || MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "AGENCY_HELI_H4")) || MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "OF_PA_MENUI_1b"))
		{
			return 1;
		}
	}
	return 0;
}

bool func_167()
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

Vector3 func_168(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_170(iParam1, 0), func_169(iParam1, 0), 6.1458f, 3.6035f, 0.0002f);
			break;
		
		case 1:
			return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_170(iParam1, 0), func_169(iParam1, 0), 9.8062f, -0.0547f, 2.8373f);
			break;
	}
	return 0f, 0f, 0f;
}

float func_169(int iParam0, int iParam1)
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

Vector3 func_170(int iParam0, int iParam1)
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

int func_171(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_10(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
		else if (((Global_1575058 || Global_2667225.f_2680) && iParam0 == PLAYER::PLAYER_ID()) && func_10(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
	}
	return -1;
}

int func_172(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_73(Global_2689235[iParam0 /*453*/].f_318.f_6) == 24;
			}
		}
	}
	return 0;
}

void func_173()
{
	if (BitTest(Global_1946250.f_8, 25))
	{
		if (Global_4282954 != -1)
		{
			Global_4282954 = -1;
		}
	}
}

void func_174()
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
	}
}

void func_175()
{
	switch (func_176())
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
	}
}

int func_176()
{
	return Global_262145.f_26763;
}

void func_177()
{
	if ((Global_112332 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) <= 0) && func_80())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_178()
{
	int iVar0;
	
	if (!iLocal_4)
	{
		if (Global_1836383)
		{
			iVar0 = func_179(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10592 = 1;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1836383)
	{
		iLocal_4 = 0;
	}
}

int func_179(int iParam0)
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

void func_180()
{
	if (!iLocal_3)
	{
		if (Global_1836383)
		{
			if (func_182() || func_181())
			{
				Global_262145.f_20214 = 1;
			}
			else
			{
				Global_262145.f_20214 = 0;
			}
			iLocal_3 = 1;
		}
	}
	else if (!Global_1836383)
	{
		iLocal_3 = 0;
	}
}

int func_181()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_179(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10701)
	{
		return 0;
	}
	uVar1[0] = func_179(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_179(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_179(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_179(joaat("mpply_prevseason4exploitlevel"));
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

int func_182()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_179(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10700)
	{
		return 0;
	}
	uVar1[0] = func_179(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_179(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_179(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_179(joaat("mpply_prevseason4exploitlevel"));
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

void func_183()
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

void func_184()
{
	if (Global_262145.f_10676 != 120)
	{
		Global_262145.f_10676 = 120;
	}
}

void func_185()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_186(0.69f, 0.06f, "STRING", sLocal_0);
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

void func_186(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_187()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

