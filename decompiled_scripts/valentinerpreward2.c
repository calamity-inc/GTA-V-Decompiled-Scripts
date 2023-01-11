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
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 3;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_75 = 0;
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
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.64.02";
	iLocal_20 = -1;
	iLocal_21 = -1;
	iLocal_27 = 10000;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1577991 = MISC::GET_HASH_KEY(sLocal_0);
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (func_119())
		{
			func_117();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692733.f_3)
		{
			func_116();
			func_115();
			func_112();
			func_110();
			func_109();
			func_103();
			func_95();
			func_92();
			func_89();
			func_86();
			func_77();
			func_76();
			func_68();
			func_67();
			func_62();
			func_58();
			func_53();
			func_43();
			func_24();
			func_3();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_2();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (Global_4718592.f_113724 == 380938673 || Global_4718592.f_113724 == 1597839856)
	{
		if (!BitTest(Global_4718592.f_35, 2))
		{
			MISC::SET_BIT(&(Global_4718592.f_35), 2);
		}
	}
}

void func_2()
{
	if (!Global_2683862.f_24)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(0, 220, true);
	PAD::DISABLE_CONTROL_ACTION(0, 221, true);
	PAD::DISABLE_CONTROL_ACTION(0, 295, true);
	PAD::DISABLE_CONTROL_ACTION(0, 294, true);
	PAD::DISABLE_CONTROL_ACTION(0, 270, true);
	PAD::DISABLE_CONTROL_ACTION(0, 271, true);
	PAD::DISABLE_CONTROL_ACTION(0, 290, true);
	PAD::DISABLE_CONTROL_ACTION(0, 1, true);
	PAD::DISABLE_CONTROL_ACTION(0, 5, true);
	PAD::DISABLE_CONTROL_ACTION(0, 6, true);
	PAD::DISABLE_CONTROL_ACTION(0, 239, true);
	PAD::DISABLE_CONTROL_ACTION(0, 240, true);
}

void func_3()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar49;
	float fVar50;
	struct<3> Var51;
	
	if (func_23(&uLocal_14))
	{
		MISC::SET_BIT(&Global_8254, 2);
		if (func_22(&uLocal_14, 60000, 0))
		{
			func_21(&uLocal_14, 0, 0);
			func_20(&uLocal_14);
		}
	}
	if (func_23(&uLocal_12) && func_22(&uLocal_12, 1000, 0))
	{
		if (iLocal_21 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_21 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_21, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_22(&uLocal_12, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_21))
			{
				AUDIO::STOP_SOUND(iLocal_21);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_21);
			iLocal_21 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_21(&uLocal_12, 0, 0);
			func_20(&uLocal_12);
		}
	}
	if (!iLocal_6 && !func_15())
	{
		return;
	}
	iLocal_6 = 1;
	MISC::SET_BIT(&Global_8254, 2);
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
			iVar1 = func_14(7869, -1, 0);
			func_11(7869, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&Var2);
			Local_16 = { ENTITY::GET_ENTITY_COORDS(iLocal_5, false) };
			iLocal_19 = 0;
		}
	}
	else
	{
		func_10();
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
				if (func_22(&uLocal_8, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_5, false);
					func_21(&uLocal_8, 0, 0);
					func_20(&uLocal_8);
					func_9(&uLocal_10, 0, 0);
					iLocal_7 = 1;
				}
			}
			else
			{
				fVar49 = (SYSTEM::TO_FLOAT(func_8(&uLocal_10, 0, 0)) / SYSTEM::TO_FLOAT(func_7()));
				fVar50 = (SYSTEM::TO_FLOAT(func_8(&uLocal_8, 0, 0)) / SYSTEM::TO_FLOAT(func_6()));
				fVar50 = (fVar50 * fVar49);
				Var51 = { func_4(Local_16, func_5(), fVar50) };
				ENTITY::SET_ENTITY_COORDS(iLocal_5, Var51, true, false, false, true);
				if (fVar50 >= 1f)
				{
					iLocal_19++;
					Local_16 = { ENTITY::GET_ENTITY_COORDS(iLocal_5, false) };
					func_21(&uLocal_8, 0, 0);
					func_20(&uLocal_8);
					if (func_6() == -1)
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
						func_21(&uLocal_10, 0, 0);
						func_20(&uLocal_10);
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

Vector3 func_4(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_5()
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

int func_6()
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

int func_7()
{
	return 3150;
}

int func_8(var uParam0, bool bParam1, bool bParam2)
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

void func_10()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_5, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_5, Var0, 2, true);
}

void func_11(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_12(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_12(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
		if (iVar1 > -1)
		{
			Global_2804739 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804739 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	return Global_1574918;
}

int func_14(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805027[iParam0 /*3*/][func_12(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_15()
{
	if (((((((func_19(22107, -1) && Global_2639783 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_18(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2684799.f_3076.f_178 >= 1) && Global_2684799.f_3076.f_178 < 4) && func_17()) && func_16())
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	if (func_19(15476, -1) && func_14(5453, func_13(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_17()
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

bool func_18(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

bool func_19(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_13();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_20(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_21(var uParam0, bool bParam1, bool bParam2)
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

int func_22(var uParam0, int iParam1, bool bParam2)
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

bool func_23(var uParam0)
{
	return uParam0->f_1;
}

void func_24()
{
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !func_41()) || !func_40(PLAYER::PLAYER_ID(), 0, 1))
	{
		return;
	}
	if (!func_39(PLAYER::PLAYER_ID(), 0) || !func_37(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_36())
	{
		func_25();
	}
}

void func_25()
{
	int iVar0;
	int iVar1[20];
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 == 0)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) <= 4)
			{
				Global_1968823[iVar0 /*10*/] = func_35(iVar0, 1, &iVar1);
				Global_1968823[iVar0 /*10*/].f_9 = 2;
			}
			else
			{
				Global_1968823[iVar0 /*10*/] = func_35(iVar0, 0, &iVar1);
				Global_1968823[iVar0 /*10*/].f_9 = 0;
			}
		}
		else
		{
			Global_1968823[iVar0 /*10*/] = func_35(iVar0, 0, &iVar1);
			Global_1968823[iVar0 /*10*/].f_9 = 1;
		}
		func_31(iVar0);
		func_26(iVar0);
		iVar0++;
	}
}

void func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_30(iParam0, Global_1968823[iParam0 /*10*/].f_1[iVar0], &iVar1, &iVar2);
		iVar2++;
		Global_1968823[iParam0 /*10*/].f_5[iVar0] = MISC::GET_RANDOM_INT_IN_RANGE(iVar1, iVar2);
		if (iParam0 > 0 && func_29(Global_1968823[iParam0 /*10*/].f_1[iVar0], Global_1968823[iParam0 /*10*/].f_5[iVar0]))
		{
			if (bVar3)
			{
				Global_1968823[iParam0 /*10*/].f_5[iVar0] = (Global_1968823[iParam0 /*10*/].f_5[iVar0] - func_27(Global_1968823[iParam0 /*10*/].f_1[iVar0]));
			}
			bVar3 = true;
		}
		iVar0++;
	}
}

int func_27(int iParam0)
{
	return (func_28(iParam0) / 5);
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_24388;
		
		case 2:
			return Global_262145.f_24389;
		
		case 3:
			return Global_262145.f_24390;
		
		case 4:
			return Global_262145.f_24391;
		
		case 5:
			return Global_262145.f_24392;
		
		case 6:
			return Global_262145.f_24393;
		
		case 0:
			return Global_262145.f_24394;
		
		default:
	}
	return 0;
}

bool func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	return iParam1 > iVar0 * 4;
}

void func_30(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 > 0)
	{
		iVar0 = 1;
	}
	else if (Global_1968823[iParam0 /*10*/] > 20)
	{
		iVar0 = 2;
	}
	switch (iParam1)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 10;
					break;
				
				case 1:
					*uParam2 = 11;
					*uParam3 = 50;
					break;
				
				case 2:
					*uParam2 = 41;
					*uParam3 = 50;
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 20;
					break;
				
				case 1:
					*uParam2 = 21;
					*uParam3 = 100;
					break;
				
				case 2:
					*uParam2 = 81;
					*uParam3 = 100;
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 2;
					break;
				
				case 1:
					*uParam2 = 3;
					*uParam3 = 10;
					break;
				
				case 2:
					*uParam2 = 9;
					*uParam3 = 10;
					break;
			}
			break;
		
		case 3:
			switch (iVar0)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 4;
					break;
				
				case 1:
					*uParam2 = 5;
					*uParam3 = 20;
					break;
				
				case 2:
					*uParam2 = 17;
					*uParam3 = 20;
					break;
			}
			break;
		
		case 4:
			switch (iVar0)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 16;
					break;
				
				case 1:
					*uParam2 = 17;
					*uParam3 = 80;
					break;
				
				case 2:
					*uParam2 = 65;
					*uParam3 = 80;
					break;
			}
			break;
		
		case 5:
			switch (iVar0)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 12;
					break;
				
				case 1:
					*uParam2 = 13;
					*uParam3 = 60;
					break;
				
				case 2:
					*uParam2 = 49;
					*uParam3 = 60;
					break;
			}
			break;
		
		case 6:
			switch (iVar0)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 8;
					break;
				
				case 1:
					*uParam2 = 9;
					*uParam3 = 40;
					break;
				
				case 2:
					*uParam2 = 33;
					*uParam3 = 40;
					break;
			}
			break;
	}
}

void func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[6];
	int iVar10;
	int iVar11;
	
	iVar2 = 6;
	func_34(&uVar3);
	iVar0 = iParam0;
	while (iVar0 > 0)
	{
		iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		iVar11 = 0;
		if (func_33(&uVar3, Global_1968823[(iVar0 - 1) /*10*/].f_1[iVar10], &iVar11))
		{
			func_32(&uVar3, iVar11);
			iVar0 = (iVar0 - 1);
			iVar2 = (iVar2 - 1);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		Global_1968823[iParam0 /*10*/].f_1[iVar0] = uVar3[iVar1];
		func_32(&uVar3, iVar1);
		iVar2 = (iVar2 - 1);
		iVar0++;
	}
}

void func_32(var uParam0, int iParam1)
{
	int iVar0;
	
	(*uParam0)[iParam1] = -1;
	iVar0 = iParam1;
	while (iVar0 <= (6 - 2))
	{
		if ((*uParam0)[iVar0] == -1)
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
			(*uParam0)[iVar0 + 1] = -1;
		}
		iVar0++;
	}
}

int func_33(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			*iParam2 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_34(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		(*uParam0)[iVar0] = iVar0;
		iVar0++;
	}
}

int func_35(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = 0;
	iVar2 = 1;
	iVar3 = (20 - iParam0);
	if (bParam1)
	{
		iVar2 = 21;
		iVar3 = 27;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar2, iVar3);
		iVar4 = iVar0;
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar2, iVar3);
		iVar4 = (*iParam2)[iVar0];
		(*iParam2)[iVar0] = 0;
		iVar1 = iVar0;
		while (iVar1 <= (20 - 2))
		{
			if ((*iParam2)[iVar1] == 0)
			{
				(*iParam2)[iVar1] = (*iParam2)[iVar1 + 1];
				(*iParam2)[iVar1 + 1] = 0;
			}
			iVar1++;
		}
	}
	return iVar4;
}

int func_36()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1968823[iVar0 /*10*/].f_1[iVar1] == 7)
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_37(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (Global_1853910[iParam0 /*862*/].f_267.f_310 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_38()
{
	return -1;
}

int func_39(int iParam0, bool bParam1)
{
	if (iParam0 == func_38())
	{
		return 0;
	}
	if (Global_1853910[iParam0 /*862*/].f_267.f_193[0 /*13*/] != 0)
	{
		return 1;
	}
	if (Global_1853910[iParam0 /*862*/].f_267.f_193[5 /*13*/] != 0)
	{
		return 1;
	}
	if (Global_1853910[iParam0 /*862*/].f_267.f_293 != 0)
	{
		return 1;
	}
	if (Global_1853910[iParam0 /*862*/].f_267.f_116[0 /*3*/] != -1)
	{
		return 1;
	}
	if (bParam1)
	{
		return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_133, 14);
	}
	return 0;
}

int func_40(int iParam0, bool bParam1, bool bParam2)
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
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_41()
{
	if (func_42() == 0)
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	return Global_1574632.f_18;
}

void func_43()
{
	if ((func_50(PLAYER::PLAYER_ID()) && func_49(PLAYER::PLAYER_PED_ID())) && CAM::IS_SCREEN_FADED_IN())
	{
		if (!iLocal_91)
		{
			if ((func_48() && MISC::ARE_STRINGS_EQUAL(&(Global_23270.f_1), "SUB_SUPPLIES")) && !func_18(PLAYER::PLAYER_PED_ID(), func_47(), 1.5f))
			{
				iLocal_91 = 1;
			}
		}
		else
		{
			if (func_44(PLAYER::PLAYER_PED_ID()))
			{
				Global_44199 = 1;
			}
			if ((func_48() && MISC::ARE_STRINGS_EQUAL(&(Global_23270.f_1), "SUB_SUPPLIES")) && func_18(PLAYER::PLAYER_PED_ID(), func_47(), 1f))
			{
				iLocal_91 = 0;
			}
		}
	}
	else if (iLocal_91)
	{
		iLocal_91 = 0;
	}
}

int func_44(int iParam0)
{
	if (func_46(iParam0))
	{
		return 1;
	}
	if (func_45(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_45(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1360.612f, 161.8972f, -99.9951f, -1368.39f, 161.8997f, -97.24433f, 7.25f, false, true, 0);
}

bool func_46(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1352.578f, 161.7798f, -100.4443f, -1352.477f, 168.3758f, -97.94434f, 6f, false, true, 0);
}

Vector3 func_47()
{
	return -1352.45f, 146.7562f, -99.6944f;
}

bool func_48()
{
	return MISC::GET_GAME_TIMER() <= Global_23270.f_6321 + 100;
}

int func_49(int iParam0)
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

int func_50(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (func_51(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_51(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_52(Global_2657589[iParam0 /*466*/].f_321.f_7) == 22;
			}
		}
	}
	return 0;
}

int func_52(int iParam0)
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

void func_53()
{
	if (iLocal_90)
	{
		if (func_57(PLAYER::PLAYER_ID()) || func_56(PLAYER::PLAYER_ID()))
		{
			return;
		}
		else
		{
			iLocal_90 = 0;
		}
	}
	if ((Global_1836858.f_5 != -1 && func_56(PLAYER::PLAYER_ID())) && func_55(PLAYER::PLAYER_ID()) == 160)
	{
		func_54();
		iLocal_90 = 1;
	}
}

void func_54()
{
	Global_1836858.f_24 = 1;
}

int func_55(int iParam0)
{
	if (iParam0 != func_38() && func_40(iParam0, 1, 1))
	{
		return Global_2657589[iParam0 /*466*/].f_321.f_17;
	}
	return -1;
}

int func_56(int iParam0)
{
	if (iParam0 != func_38() && func_40(iParam0, 1, 1))
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321, 3);
	}
	return 0;
}

int func_57(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_52(Global_2657589[iParam0 /*466*/].f_321.f_7) == 26;
			}
		}
	}
	return 0;
}

void func_58()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		func_60();
		return;
	}
	if (!Global_1574965)
	{
		func_60();
		return;
	}
	if (Global_4718592.f_113724 != 1871729633 || Global_1058070.f_14[0] != 1)
	{
		func_60();
		return;
	}
	if (!iLocal_75)
	{
		iLocal_75 = 1;
		iVar0 = 0;
		while (iVar0 <= (Global_1058070.f_266 - 1))
		{
			iVar1 = Global_4980736.f_5994[iVar0 /*492*/].f_15;
			switch (iVar1)
			{
				case joaat("xm3_prop_xm3_lsd_flask"):
				case joaat("xm3_prop_xm3_lsd_beaker"):
				case joaat("xm3_prop_xm3_lsd_bottle_01a"):
				case joaat("xm3_prop_xm3_lsd_bottle_02a"):
				case joaat("xm3_prop_xm3_lsd_bottle_03a"):
				case joaat("xm3_prop_xm3_lsd_bottles1"):
				case joaat("xm3_prop_xm3_lsd_bottles2"):
				case joaat("xm3_prop_xm3_lsd_bottles3"):
				case joaat("xm3_prop_xm3_set_eqpt_lsd"):
					iLocal_42[iLocal_41] = iVar0;
					iLocal_41++;
					break;
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_41 - 1))
	{
		iVar2 = iLocal_42[iVar0];
		if (!func_59(iVar2))
		{
		}
		else
		{
			iVar3 = Global_1058070.f_119[iVar2];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
			}
			else if (ENTITY::IS_ENTITY_DEAD(iVar3, false))
			{
			}
			else
			{
				fVar4 = OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(iVar3, false);
				if (fVar4 < 0.1f)
				{
					ENTITY::SET_ENTITY_HEALTH(iVar3, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_59(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 32);
}

void func_60()
{
	if (iLocal_41 > 0)
	{
		func_61(&iLocal_42, -1);
		iLocal_41 = 0;
		iLocal_75 = 0;
	}
}

void func_61(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

void func_62()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		func_65();
	}
	else
	{
		func_63();
	}
}

void func_63()
{
	bool bVar0;
	
	if (iLocal_32 == 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < 26)
	{
		if (BitTest(iLocal_32, bVar0))
		{
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_64(bVar0), false);
			MISC::CLEAR_BIT(&iLocal_32, bVar0);
		}
		bVar0++;
	}
	iLocal_33 = 0;
	Global_2766575 = 0;
}

char* func_64(bool bParam0)
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

void func_65()
{
	int iVar0;
	bool bVar1;
	
	if (!func_66(Global_4718592.f_113724))
	{
		return;
	}
	iVar0 = func_14(9877, -1, 0);
	if (iVar0 == 0)
	{
		return;
	}
	bVar1 = false;
	while (bVar1 < 26)
	{
		if (!BitTest(iLocal_33, bVar1))
		{
			if (BitTest(iVar0, bVar1))
			{
			}
			MISC::SET_BIT(&iLocal_33, bVar1);
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_64(bVar1), true);
		}
		if (BitTest(iVar0, bVar1) && !BitTest(iLocal_32, bVar1))
		{
			MISC::SET_BIT(&iLocal_32, bVar1);
			Global_2766575 = 1;
		}
		bVar1++;
	}
}

int func_66(int iParam0)
{
	if ((iParam0 == Global_262145.f_31722[0] || iParam0 == Global_262145.f_31722[1]) || iParam0 == Global_262145.f_31722[2])
	{
		return 1;
	}
	return 0;
}

void func_67()
{
	if (BitTest(Global_1950108.f_8, 25))
	{
		if (Global_4282954 != -1)
		{
			Global_4282954 = -1;
		}
	}
}

void func_68()
{
	if (PLAYER::PLAYER_ID() == func_38())
	{
		iLocal_31 = 0;
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_2793044.f_299))
	{
		iLocal_31 = 0;
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_2793044.f_299, false))
	{
		iLocal_31 = 0;
		return;
	}
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_2793044.f_299, false))
	{
		iLocal_31 = 0;
		return;
	}
	if (func_56(PLAYER::PLAYER_ID()))
	{
		iLocal_31 = 0;
		return;
	}
	if (func_51(PLAYER::PLAYER_ID()) && Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10 == PLAYER::PLAYER_ID())
	{
		iLocal_31 = 0;
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_AREA(Global_2793044.f_299, -1372.786f, 135.814f, -100.586f, -1319.589f, 169.764f, -87.918f, false, true, 0))
	{
		iLocal_31 = 0;
		return;
	}
	if (iLocal_31)
	{
		return;
	}
	func_69(1, 0, 0, 0, 0, 0, 0);
	iLocal_31 = 1;
}

void func_69(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_74() < 0 && Global_1962819)
	{
		return;
	}
	if (func_73(35))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2672505.f_61.f_60, 3))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2672505.f_61.f_64, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (BitTest(Global_2672505.f_61.f_68, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (bParam0)
	{
		func_72(2);
	}
	else
	{
		func_72(1);
	}
	if (bParam1)
	{
		func_72(11);
	}
	if (bParam2)
	{
		func_72(32);
		if (bParam3)
		{
			if (func_74() >= 0 && BitTest(Global_1586468[func_74() /*142*/].f_103, 0))
			{
				func_72(33);
			}
		}
		else
		{
			func_71(33);
		}
		if (func_74() >= 0)
		{
			if (func_70(Global_1586468[func_74() /*142*/].f_66))
			{
				func_72(40);
			}
		}
	}
	else if (bParam5)
	{
		func_72(37);
	}
	if (bParam4)
	{
		func_72(36);
	}
	if (func_73(36))
	{
		if (func_73(2))
		{
			func_71(36);
		}
	}
	if (bParam6)
	{
		func_72(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2793044.f_436 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_70(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_71(bool bParam0)
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_2672505.f_61.f_1, bParam0))
		{
			MISC::CLEAR_BIT(&(Global_2672505.f_61.f_1), bParam0);
		}
	}
	else if (BitTest(Global_2672505.f_61.f_2, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2672505.f_61.f_2), (bParam0 - 32));
	}
}

void func_72(bool bParam0)
{
	if (bParam0 < 32)
	{
		if (!BitTest(Global_2672505.f_61.f_1, bParam0))
		{
			MISC::SET_BIT(&(Global_2672505.f_61.f_1), bParam0);
		}
	}
	else if (!BitTest(Global_2672505.f_61.f_2, (bParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2672505.f_61.f_2), (bParam0 - 32));
	}
}

bool func_73(int iParam0)
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2672505.f_61.f_1, iParam0);
	}
	return BitTest(Global_2672505.f_61.f_2, (iParam0 - 32));
}

int func_74()
{
	if (Global_2359296[func_75() /*5568*/].f_681.f_2 >= 415)
	{
		Global_2359296[func_75() /*5568*/].f_681.f_2 = -1;
		return -1;
	}
	return Global_2359296[func_75() /*5568*/].f_681.f_2;
}

int func_75()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_76()
{
	if (Global_2672505.f_61.f_57)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2793044.f_299) && !ENTITY::IS_ENTITY_DEAD(Global_2793044.f_299, false))
		{
			if (!Global_2672505.f_61.f_21)
			{
				if (iLocal_30 == -1)
				{
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(Global_2793044.f_299, "PV_Slot"))
						{
							iLocal_30 = DECORATOR::DECOR_GET_INT(Global_2793044.f_299, "PV_Slot");
						}
					}
				}
				else if (Global_2359296[func_75() /*5568*/].f_681.f_2 != iLocal_30)
				{
					if (!func_23(&uLocal_28))
					{
						func_9(&uLocal_28, 1, 0);
					}
					else if (func_22(&uLocal_28, 10000, 1))
					{
						func_69(1, 0, 1, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_20(&uLocal_28);
				iLocal_30 = -1;
			}
		}
		else
		{
			func_20(&uLocal_28);
			iLocal_30 = -1;
		}
	}
	else
	{
		func_20(&uLocal_28);
		iLocal_30 = -1;
	}
}

void func_77()
{
	if (func_85(PLAYER::PLAYER_ID()) && func_79() == PLAYER::PLAYER_ID())
	{
		if ((PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_WARNING_MESSAGE_ACTIVE()) || func_78())
		{
			func_21(&uLocal_25, 1, 0);
			Global_1949962 = 1;
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				iLocal_27 = 30000;
			}
		}
	}
	if (func_23(&uLocal_25))
	{
		if (func_22(&uLocal_25, iLocal_27, 1))
		{
			func_20(&uLocal_25);
			Global_1949962 = 0;
			iLocal_27 = 10000;
		}
	}
}

bool func_78()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

int func_79()
{
	return func_80(PLAYER::PLAYER_ID());
}

int func_80(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_38())
	{
		return iParam0;
	}
	if (func_84(iParam0) != -1)
	{
		iVar0 = func_52(func_84(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_82(iParam0, 0))
			{
				return func_81(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_38();
		}
		return Global_2657589[iParam0 /*466*/].f_321.f_10;
	}
	return func_38();
}

int func_81(int iParam0)
{
	if (iParam0 != func_38())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_38();
}

bool func_82(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_83(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_38();
}

int func_83(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_38())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_84(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (func_40(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
		else if (((Global_1575060 || Global_2635559.f_2680) && iParam0 == PLAYER::PLAYER_ID()) && func_40(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
	}
	return -1;
}

int func_85(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (func_40(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_52(Global_2657589[iParam0 /*466*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

void func_86()
{
	if (!func_88() && !func_87())
	{
		if (!STATS::STAT_IS_STATS_TRACKING_ENABLED())
		{
			if (((func_41() && func_40(PLAYER::PLAYER_ID(), 0, 1)) && CAM::IS_SCREEN_FADED_IN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				STATS::STAT_ENABLE_STATS_TRACKING();
			}
		}
	}
}

bool func_87()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("animal_controller")) > 0;
}

bool func_88()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0;
}

void func_89()
{
	int iVar0;
	
	iLocal_24++;
	if (iLocal_24 == 30)
	{
		iLocal_24 = 0;
	}
	else
	{
		return;
	}
	if (((((((((!func_49(PLAYER::PLAYER_PED_ID()) || !func_40(PLAYER::PLAYER_ID(), 1, 1)) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) || !func_41()) || func_56(PLAYER::PLAYER_ID())) || func_91(PLAYER::PLAYER_ID())) || func_90(PLAYER::PLAYER_ID())) || Global_2672505.f_3541) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_49(iVar0))
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

int func_90(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (func_40(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
		else if ((Global_1575060 && iParam0 == PLAYER::PLAYER_ID()) && func_40(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_91(int iParam0)
{
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 11))
	{
		return 1;
	}
	return 0;
}

void func_92()
{
	if (!func_40(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (!iLocal_23)
	{
		if ((Global_1950108.f_513 != -1 && MISC::ARE_STRINGS_EQUAL(&(Global_23270.f_1), "MP_MAN_VEH1")) && func_94() == 9)
		{
			iLocal_23 = 1;
		}
	}
	else if (!func_48())
	{
		if (func_93())
		{
			PAD::DISABLE_CONTROL_ACTION(2, 51, true);
			PAD::DISABLE_CONTROL_ACTION(2, 52, true);
		}
		else if (func_49(Global_2793044.f_299))
		{
			if (!func_93())
			{
				func_69(1, 0, 1, 0, 0, 0, 0);
			}
		}
		else
		{
			iLocal_23 = 0;
			StringCopy(&(Global_23270.f_1), "", 16);
		}
	}
}

int func_93()
{
	if (func_73(2) || func_73(1))
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	return func_52(Global_1950108.f_513);
}

void func_95()
{
	int iVar0;
	
	if (!func_40(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (func_90(PLAYER::PLAYER_ID()) || func_101(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_98() || func_97("CMOD_TRIG", &Global_44195))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (func_96(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -2, false))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 75, true);
				}
			}
		}
	}
}

int func_96(int iParam0, bool bParam1)
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

bool func_97(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_98()
{
	if (((((func_99(39, 5, 0) || func_99(40, 5, 0)) || func_99(41, 5, 0)) || func_99(42, 5, 0)) || func_99(43, 5, 0)) || func_99(44, 5, 0))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100733.f_1407[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_32163 == 0)
		{
			return BitTest(func_14(func_100(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_100(int iParam0)
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
			return 12385;
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
	return 14192;
}

int func_101(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2657589[iParam0 /*466*/].f_246 > -1)
		{
			if (func_102(Global_2657589[iParam0 /*466*/].f_246) == 5)
			{
				return 1;
			}
		}
		if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_102(int iParam0)
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

void func_103()
{
	int iVar0;
	int iVar1;
	
	if ((func_40(PLAYER::PLAYER_ID(), 1, 1) && func_108(PLAYER::PLAYER_ID())) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_49(iVar0) && func_96(PLAYER::PLAYER_PED_ID(), 0) == -1)
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if ((((iVar1 == joaat("openwheel1") || iVar1 == joaat("openwheel2")) || iVar1 == joaat("formula")) || iVar1 == joaat("formula2")) || iVar1 == joaat("oppressor2"))
			{
				if (!iLocal_22)
				{
					iLocal_22 = 1;
					func_107(45, 1, 1);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 51, true);
				PAD::DISABLE_CONTROL_ACTION(2, 52, true);
				Global_44199 = 1;
				if (CAM::IS_GAMEPLAY_CAM_RENDERING() && !func_106("CMOD_FTRIG"))
				{
					func_105("CMOD_FTRIG");
				}
			}
		}
	}
	else if (iLocal_22)
	{
		iLocal_22 = 0;
		func_104(45, 1, 1);
		if (func_106("CMOD_FTRIG"))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_104(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_32163 == 0)
		{
			iVar0 = func_14(func_100(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, bParam1);
			func_11(func_100(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

void func_105(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_106(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_107(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_32163 == 0)
		{
			iVar0 = func_14(func_100(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, bParam1);
			func_11(func_100(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

int func_108(int iParam0)
{
	if (iParam0 == func_38())
	{
		return 0;
	}
	if (func_85(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_109()
{
	if ((Global_112594 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0) && func_41())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_110()
{
	int iVar0;
	
	if (!iLocal_4)
	{
		if (Global_1836395)
		{
			iVar0 = func_111(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10593 = 1;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1836395)
	{
		iLocal_4 = 0;
	}
}

int func_111(int iParam0)
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

void func_112()
{
	if (!iLocal_3)
	{
		if (Global_1836395)
		{
			if (func_114() || func_113())
			{
				Global_262145.f_20169 = 1;
			}
			else
			{
				Global_262145.f_20169 = 0;
			}
			iLocal_3 = 1;
		}
	}
	else if (!Global_1836395)
	{
		iLocal_3 = 0;
	}
}

int func_113()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_111(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10702)
	{
		return 0;
	}
	uVar1[0] = func_111(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_111(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_111(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_111(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10698 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10702)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_114()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_111(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10701)
	{
		return 0;
	}
	uVar1[0] = func_111(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_111(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_111(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_111(joaat("mpply_prevseason4exploitlevel"));
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

void func_115()
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < Global_1853910)
		{
			MISC::SET_BIT(&(Global_1853910[iVar0 /*862*/].f_799), true);
			iVar0++;
		}
	}
}

void func_116()
{
	if (Global_262145.f_10677 != 120)
	{
		Global_262145.f_10677 = 120;
	}
}

void func_117()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_118(0.69f, 0.06f, "STRING", sLocal_0);
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

void func_118(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_119()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

