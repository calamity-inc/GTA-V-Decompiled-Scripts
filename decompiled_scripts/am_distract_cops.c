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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
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
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	struct<19> Local_92 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300000, 0, 0, 30000, 2, 0, 0 } ;
	var uLocal_111 = 0;
	struct<4> Local_112[32];
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	fLocal_63 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_292(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_282(ScriptParam_0);
	}
	else
	{
		func_279();
	}
	while (true)
	{
		func_278();
		if (func_271() || func_267(16))
		{
			func_279();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_279();
		}
		switch (func_266(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_265() == 1)
				{
					func_264();
					Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 1;
				}
				else if (func_265() == 4)
				{
					Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_265() == 1)
				{
					func_144();
				}
				else if (func_265() == 4)
				{
					func_14();
					Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_92.f_18));
				if (func_12(&(Local_92.f_18)))
				{
					Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
			
			case 4:
				func_279();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_265())
			{
				case 0:
					Local_92.f_0 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_92.f_0 = 4;
					}
					break;
				
				case 4:
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

int func_2()
{
	if (Local_92.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	struct<15> Var0;
	
	switch (Local_92.f_7)
	{
		case 0:
			if (BitTest(Local_92.f_1, 0))
			{
				Local_92.f_7 = 1;
			}
			else if (func_9(&(Local_92.f_8), 480000, 0))
			{
				Var0.f_3 = 1562851728;
				func_7(Var0, func_8(1));
				MISC::SET_BIT(&(Local_92.f_1), true);
				Local_92.f_7 = 2;
			}
			break;
		
		case 1:
			func_4();
			break;
		
		case 2:
			break;
	}
}

void func_4()
{
	if (!func_9(&(Local_92.f_10), Local_92.f_12, 0))
	{
		if (func_9(&(Local_92.f_13), Local_92.f_15, 0))
		{
			Local_92.f_17++;
			Local_92.f_16 = func_6();
			func_5(&(Local_92.f_13));
		}
	}
	else
	{
		Local_92.f_7 = 2;
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6()
{
	switch (Local_92.f_17)
	{
		case 0:
		case 1:
			return 2;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 3;
		
		case 6:
		case 7:
		case 8:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return Local_92.f_16;
}

void func_7(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)
{
	Param0.f_0 = -642704387;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam15 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Param0, 15, iParam15, Param0.f_0);
	}
}

int func_8(int iParam0)
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
			if (func_292(bVar2, 0, 0))
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

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

void func_10(var uParam0, bool bParam1, bool bParam2)
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

void func_11()
{
	int iVar0;
	
	if (Local_92.f_0 == 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_247)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_247));
			if (func_292(iVar0, 1, 1))
			{
				if (!BitTest(Local_92.f_1, 0))
				{
					if (BitTest(Local_112[iLocal_247 /*4*/].f_1, 0))
					{
						iLocal_248 = 1;
						MISC::SET_BIT(&(Local_92.f_1), false);
					}
				}
			}
		}
	}
	iLocal_247++;
	if (iLocal_247 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (iLocal_248 == 0)
		{
			if (BitTest(Local_92.f_1, 0))
			{
				MISC::CLEAR_BIT(&(Local_92.f_1), false);
			}
		}
		else
		{
			iLocal_248 = 0;
		}
		iLocal_247 = 0;
	}
}

int func_12(var uParam0)
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

void func_13(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_14()
{
	int iVar0;
	var uVar1;
	var uVar5;
	
	if (!BitTest(uLocal_241, 1))
	{
		if ((BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= (Local_92.f_16 - 1)) && Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 < 10)
		{
			Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
		}
		if (Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 > 0)
		{
			iVar0 = (Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 * Global_262145.f_8627);
			Global_2698962 = iVar0;
			func_122(&iVar0, 1);
			if (iVar0 > 0)
			{
				func_119(iVar0, 1, 1, 0);
				if (func_118())
				{
					func_106(joaat("service_earn_ambient_job_distract_cops"), iVar0, &uVar5, 0, 0, 0);
				}
				else
				{
					MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_DISTRACT_COPS", &uVar1);
				}
			}
			if (func_105())
			{
				func_92(12, "DSC_PASS0", 0, 0, -99);
			}
			else
			{
				func_92(12, "DSC_PASS1", 0, 0, -99);
			}
			func_21(51, iVar0, "DSC_CASH", "DSC_BIGM", 1, -1, -1082130432, 2, 0);
			if (BitTest(uLocal_241, 4))
			{
				if (!BitTest(uLocal_241, 5))
				{
					func_15(66, 1, -1);
				}
			}
		}
		MISC::SET_BIT(&uLocal_241, true);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_18(iParam0, func_19(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_16(iParam0, iVar0, iParam2);
}

void func_16(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_17(iParam0, uParam2);
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_17(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_19(uParam1));
}

int func_18(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_17(iParam0, uParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_20();
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

int func_20()
{
	return Global_1574926;
}

int func_21(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_91(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_89(&(Var0.f_69), iParam8);
	}
	return func_22(&Var0);
}

int func_22(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2672939.f_2912)
		{
			return 0;
		}
	}
	func_37(uParam0, uParam0->f_17);
	func_34(uParam0);
	if (func_33())
	{
		func_34(uParam0);
	}
	if (func_32(uParam0->f_1))
	{
		func_25();
		if (Global_2672939.f_2590[0 /*80*/].f_2 == 0)
		{
			Global_2672939.f_2590[0 /*80*/] = { *uParam0 };
			if (func_24(uParam0->f_69, 8192))
			{
				Global_1928805 = 1;
			}
			return 1;
		}
		if (((Global_2672939.f_2590[0 /*80*/].f_1 == 13 || Global_2672939.f_2590[0 /*80*/].f_1 == 53) || Global_2672939.f_2590[0 /*80*/].f_1 == 54) || Global_2672939.f_2590[0 /*80*/].f_1 == 58)
		{
			Global_2672939.f_2590[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2672939.f_2590[iVar0 + 1 /*80*/] = { Global_2672939.f_2590[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2672939.f_2590[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2672939.f_2590[iVar0 /*80*/].f_2 == 0)
		{
			Global_2672939.f_2590[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_25();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_89(&(Global_2672939.f_2590[iVar0 /*80*/].f_69), 2);
				Global_2672939.f_2590[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_24(uParam0->f_69, 128))
			{
				if (func_23(Global_2672939.f_2590[iVar0 /*80*/].f_1))
				{
					Global_2672939.f_2590[iVar0 /*80*/].f_2 = 5;
					func_89(&(Global_2672939.f_2590[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_24(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_25()
{
	bool bVar0;
	
	if (Global_2672939.f_2913)
	{
		return;
	}
	if (!Global_79808)
	{
		Global_79808 = 1;
		bVar0 = true;
	}
	else if (Global_79809)
	{
		Global_79809 = 0;
		bVar0 = true;
	}
	func_26();
	if (bVar0)
	{
		Global_79808 = 0;
	}
}

void func_26()
{
	Global_2672939.f_2914 = 0;
	Global_2672939.f_2914.f_582 = 0;
	func_30(&(Global_2672939.f_2914.f_1));
	Global_2672939.f_2914.f_1.f_1 = 0;
	func_27(&(Global_2672939.f_2914.f_1), 1);
}

void func_27(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_79808)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_79810)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_29(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_28(0);
}

void func_28(int iParam0)
{
	Global_79800 = iParam0;
	Global_79801 = iParam0;
}

int func_29(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79788, 0);
}

void func_30(var uParam0)
{
	func_31(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_31(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_32(int iParam0)
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

bool func_33()
{
	return Global_2684718.f_19;
}

void func_34(var uParam0)
{
	if (func_36(uParam0->f_1))
	{
		uParam0->f_72 = func_35();
	}
}

int func_35()
{
	return 21;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_37(var uParam0, int iParam1)
{
	if (func_36(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_88() || !func_292(iParam1, 0, 1))
	{
		return;
	}
	if (func_23(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_38(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_38(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!func_87(iParam0))
	{
		return 1;
	}
	if (func_85(iParam0) && !bParam4)
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
			if (Global_4718592.f_122769[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_85(PLAYER::PLAYER_ID()) || (func_84() && func_83())) && !BitTest(Global_2739811.f_4728, 31)) && !bParam4)
	{
		iVar1 = func_82();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_292(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_122769[iParam1] != -1)
							{
								return func_80(iParam1, iParam0, 0);
							}
							else
							{
								return func_56(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_56(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_122769[iParam1] != -1)
				{
					return func_80(iParam1, iParam0, 0);
				}
				else
				{
					return func_39(0, -1, 0);
				}
			}
			else
			{
				return func_39(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_122769[iParam1] != -1)
		{
			return func_80(iParam1, iParam0, 0);
		}
		else
		{
			return func_56(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_56(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_39(bool bParam0, int iParam1, bool bParam2)
{
	return func_40(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_40(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_55() || (func_54() && func_52())) && Global_1685172.f_1)
	{
		if (bParam1)
		{
			return func_51(iParam2, iVar0);
		}
		else
		{
			return func_51(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_46(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_45(1);
				}
				else
				{
					return func_45(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_41(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_41(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_45(1);
	}
	return func_45(0);
}

int func_41(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_44(iParam0, iParam1, iParam3);
	if (func_42(Global_4718592.f_128476, 1, 1))
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

int func_42(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_187633 == 65)
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (func_43(Global_4718592.f_187633, 0))
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
		if (iParam0 == Global_262145.f_9522[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0, bool bParam1)
{
	if (iParam0 == 93)
	{
		if (bParam1)
		{
			if (PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX()) == 2)
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

int func_44(int iParam0, int iParam1, int iParam2)
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
			if (!func_46(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_45(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_46(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
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
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058116.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25921, bVar0))
			{
				bVar1 = Global_1058116.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_47(iParam0, bVar0, iParam1, bVar1) || !func_47(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_47(iParam0, bVar0, iParam1, bVar1) || !func_47(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_47(iParam0, bVar0, iParam1, bVar1) || !func_47(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_47(iParam0, bVar0, iParam1, bVar1) || !func_47(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_47(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25922, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3592[iParam2 /*26190*/].f_25922, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_292(iVar1, 1, 1) || func_49(iVar1, 0)) || BitTest(Global_2657991[iVar1 /*467*/].f_202, 2)) || func_48(iVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("mp_f_freemode_01") || iVar4 == joaat("mp_m_freemode_01"))
				{
					if (iVar3 == joaat("mp_f_freemode_01") || iVar3 == joaat("mp_m_freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_48(int iParam0)
{
	return BitTest(Global_1845221[iParam0 /*889*/].f_36.f_18, 14);
}

bool func_49(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_87(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_50(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845221[iParam0 /*889*/].f_206 == 8;
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

int func_50(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
	}
	if (Global_1575064[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_51(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44(iParam1, iParam0, 4);
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

int func_52()
{
	if (func_53())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_192395, 4);
}

bool func_53()
{
	return BitTest(Global_4718592.f_180429, 12);
}

bool func_54()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_192395, 0);
	}
	return ((BitTest(Global_4718592.f_192395, 0) || Global_1920266) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_55()
{
	if (func_53() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1845221[iVar2 /*889*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_65())
			{
				iVar3 = func_61(iParam0);
				if (!iVar3 == -1)
				{
					return func_59(iVar3);
				}
			}
			if ((func_58(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_46(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_45(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_57(1);
			}
			else
			{
				return func_40(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836691 || Global_1836681) || Global_1845221[iParam0 /*889*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836691 == 1 && Global_1836701 == 0))
			{
				return func_45(1);
			}
			else
			{
				return func_40(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836685 && Global_1836156.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_61(iParam0);
	if (!iVar4 == -1)
	{
		return func_59(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_57(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_58(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_59(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_60(iParam0);
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

var func_60(int iParam0)
{
	return Global_2648914.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_61(int iParam0)
{
	if (func_87(iParam0))
	{
		if (func_63(iParam0, 1))
		{
			return Global_2648914.f_818.f_11[func_62(iParam0)];
		}
	}
	return -1;
}

int func_62(int iParam0)
{
	if (func_87(iParam0))
	{
		return Global_1887549[iParam0 /*611*/].f_10;
	}
	return func_88();
}

int func_63(int iParam0, bool bParam1)
{
	if (!func_87(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_64(iParam0))
		{
			return 0;
		}
	}
	return func_87(Global_1887549[iParam0 /*611*/].f_10);
}

int func_64(int iParam0)
{
	if (func_87(iParam0))
	{
		if (func_87(Global_1887549[iParam0 /*611*/].f_10))
		{
			return Global_1887549[iParam0 /*611*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_65()
{
	if ((((((((func_79() || func_78()) || func_33()) || func_77()) || func_76()) || func_74()) || func_72()) || func_69()) || func_66())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_66()
{
	return func_67(Global_4718592.f_128476);
}

int func_67(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_68(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_68(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_35481[iParam0];
	}
	return -1;
}

int func_69()
{
	return func_70(Global_4718592.f_128476);
}

int func_70(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_71(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_71(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32988[iParam0];
	}
	return -1;
}

int func_72()
{
	return func_73(Global_4718592.f_128476);
}

int func_73(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31052[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_74()
{
	return func_75(Global_4718592.f_128476);
}

int func_75(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30347[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_76()
{
	return Global_2684718.f_24;
}

var func_77()
{
	return Global_2684718.f_21;
}

var func_78()
{
	return Global_2684718.f_18;
}

var func_79()
{
	return Global_2684718.f_17;
}

int func_80(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058116.f_14[iParam0];
	if (func_65())
	{
		iVar2 = func_61(iParam1);
		if (!iVar2 == -1)
		{
			return func_59(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_8540[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_88())
	{
		if (Global_4718592.f_122769[iParam0] != -1 && Global_4718592.f_122769[iParam0] <= 4)
		{
			if (Global_4718592.f_122769[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_122769[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_122769[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_122769[iParam0] == 4)
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
				iVar0 = Global_4718592.f_122769[iParam0];
			}
		}
		else
		{
			iVar0 = func_40(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_81(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_46(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1))
		{
			iVar0 = func_57(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_81(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_187824;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_187825;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_187826;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_187827;
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

var func_82()
{
	return Global_2621446.f_2;
}

var func_83()
{
	return BitTest(Global_2621446, 4);
}

var func_84()
{
	return BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_36.f_18, 14);
}

int func_85(int iParam0)
{
	if (func_49(iParam0, 0))
	{
		return 1;
	}
	if (func_86())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657991[iParam0 /*467*/].f_202, 2))
	{
		return 1;
	}
	return 0;
}

bool func_86()
{
	return BitTest(Global_2621446, 3);
}

int func_87(var uParam0)
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

int func_88()
{
	return -1;
}

void func_89(var uParam0, int iParam1)
{
	func_90(uParam0, iParam1);
}

void func_90(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_91(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_88();
	uParam1->f_18 = func_88();
	uParam1->f_19 = func_88();
	uParam1->f_20 = func_88();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = uParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

void func_92(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_93(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_93(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_94(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_94(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 15)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_103();
	if (iVar0 == -1)
	{
		return;
	}
	func_102(iVar0);
	func_101(iVar0, uParam0);
	func_100(iVar0, uParam2, bParam3);
	func_99(iVar0, sParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_98(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_96(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_95(iVar0, iParam6);
	}
}

void func_95(int iParam0, int iParam1)
{
	Global_1668409.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_96(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1668409.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_97(iParam0);
}

void func_97(int iParam0)
{
	MISC::SET_BIT(&(Global_1668409.f_59[iParam0 /*16*/]), 5);
}

void func_98(int iParam0)
{
	MISC::SET_BIT(&(Global_1668409.f_59[iParam0 /*16*/]), 4);
}

void func_99(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1668409.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_100(int iParam0, var uParam1, bool bParam2)
{
	Global_1668409.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1668409.f_59[iParam0 /*16*/]), 2);
		MISC::CLEAR_BIT(&(Global_1668409.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		MISC::SET_BIT(&(Global_1668409.f_59[iParam0 /*16*/]), 3);
		MISC::CLEAR_BIT(&(Global_1668409.f_59[iParam0 /*16*/]), 2);
	}
}

void func_101(int iParam0, var uParam1)
{
	Global_1668409.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_102(int iParam0)
{
	MISC::SET_BIT(&(Global_1668409.f_59[iParam0 /*16*/]), false);
}

int func_103()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_104(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_104(int iParam0)
{
	return BitTest(Global_1668409.f_59[iParam0 /*16*/], 0);
}

int func_105()
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_106(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_118())
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
		case joaat("service_spend_mechanic_wage"):
		case joaat("service_spend_utility_bills"):
		case joaat("service_spend_prostitutes"):
		case joaat("service_spend_strip_club"):
		case joaat("service_spend_cinema"):
		case joaat("service_spend_fairground"):
		case joaat("service_spend_lottery"):
		case joaat("service_spend_telescope"):
		case joaat("service_spend_call_player"):
		case joaat("service_spend_vehicle_insurance"):
		case joaat("service_spend_vehicle_insurance_premium"):
		case joaat("service_spend_car_repair"):
		case joaat("service_spend_personal_vehicle_dropoff"):
		case joaat("service_spend_pegasus_delivery"):
		case joaat("service_spend_car_impound"):
		case joaat("service_spend_carwash"):
		case joaat("service_spend_healthcare"):
		case joaat("service_spend_other_player_healthcare"):
		case joaat("service_spend_arrest_bail"):
		case joaat("service_spend_cash_drop"):
		case joaat("service_spend_robbed_by_mugger"):
		case joaat("service_spend_cash_drop_holdup"):
		case joaat("service_spend_match_entry_fee"):
		case joaat("service_spend_race_vehicle_rental"):
		case joaat("service_spend_challenge_wager"):
		case joaat("service_spend_betting"):
		case joaat("service_spend_airstrike"):
		case joaat("service_spend_ammo_drop"):
		case joaat("service_spend_backup_gang"):
		case joaat("service_spend_backup_heli"):
		case joaat("service_spend_boat_pickup"):
		case joaat("service_spend_bounty"):
		case joaat("service_spend_bull_shark"):
		case joaat("service_spend_cops_turn_eye"):
		case joaat("service_spend_heli_pickup"):
		case joaat("service_spend_hire_mercenary"):
		case joaat("service_spend_hire_mugger"):
		case joaat("service_spend_locate_vehicle"):
		case joaat("service_spend_lose_wanted_level"):
		case joaat("service_spend_off_the_radar"):
		case joaat("service_spend_passive"):
		case joaat("service_spend_request_heist"):
		case joaat("service_spend_request_job"):
		case joaat("service_spend_reveal_players"):
		case joaat("service_spend_taxi"):
		case joaat("service_spend_bank_interest"):
		case joaat("service_spend_cash_gift"):
		case joaat("service_spend_cash_shared"):
		case joaat("service_spend_impromptu_race_fee"):
		case joaat("service_spend_bounty_dm"):
		case joaat("service_spend_wager"):
		case joaat("service_spend_pay_boss"):
		case joaat("service_spend_pay_goon"):
		case joaat("service_spend_rename_organization"):
		case joaat("service_spend_rename_acid_product"):
		case joaat("service_spend_rename_acid_lab"):
		case joaat("service_spend_pa_service_heli_pickup"):
		case joaat("service_spend_order_bodyguard_vehicle"):
		case joaat("service_spend_order_warehouse_vehicle"):
		case joaat("service_spend_jukebox"):
		case joaat("service_spend_business"):
		case joaat("service_spend_ba_vp_bounty"):
		case joaat("service_spend_ba_vp_bullshark"):
		case joaat("service_spend_ba_sarge_ammo"):
		case joaat("service_spend_ba_sarge_molotov"):
		case joaat("service_spend_ba_enforcer_armour"):
		case joaat("service_spend_vehicle_export_mods"):
		case joaat("service_spend_import_export_repair"):
		case joaat("service_spend_employ_assassins"):
		case joaat("service_spend_gangops_cannon"):
		case joaat("service_spend_gangops_skip_mission"):
		case joaat("service_spend_gangops_start_strand"):
		case joaat("service_spend_gangops_trip_skip"):
		case joaat("service_spend_gangops_repair_cost"):
		case joaat("service_spend_nightclub_entry_fee"):
		case joaat("service_spend_nightclub_bar_drink"):
		case joaat("service_spend_nightclub_dj_rehire"):
		case joaat("service_spend_arena_join_spectator"):
		case joaat("service_spend_arena_spectator_box"):
		case joaat("service_spend_make_it_rain"):
		case 571787049:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_107(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_pickup"):
		case joaat("service_earn_jobs"):
		case joaat("service_earn_betting"):
		case joaat("service_earn_lottery"):
		case joaat("service_earn_challenge_win"):
		case joaat("service_earn_property_sales"):
		case joaat("service_earn_vehicle_sales"):
		case joaat("service_earn_lester_target_kill"):
		case joaat("service_earn_bounty_collected"):
		case joaat("service_earn_crate_drop"):
		case joaat("service_earn_holdups"):
		case joaat("service_earn_import_export"):
		case joaat("service_earn_armored_trucks"):
		case joaat("service_earn_jobshare_cash"):
		case joaat("service_earn_not_badsport"):
		case joaat("service_earn_bank_interest"):
		case joaat("service_earn_debug"):
		case joaat("service_earn_cncw"):
		case joaat("service_earn_cncb"):
		case joaat("service_earn_job_bonus"):
		case joaat("service_earn_bend_job"):
		case joaat("service_earn_personal_vehicle"):
		case joaat("service_earn_daily_objectives"):
		case joaat("service_earn_ambient_job_plane_takedown"):
		case joaat("service_earn_ambient_job_distract_cops"):
		case joaat("service_earn_ambient_job_destroy_veh"):
		case joaat("service_earn_refund_backup_vagos"):
		case joaat("service_earn_refund_backup_lost"):
		case joaat("service_earn_refund_backup_families"):
		case joaat("service_earn_refund_hire_mugger"):
		case joaat("service_earn_refund_hire_mercenary"):
		case joaat("service_earn_refund_buy_cardropoff"):
		case joaat("service_earn_refund_heli_pickup"):
		case joaat("service_earn_refund_boat_pickup"):
		case joaat("service_earn_refund_clear_wanted"):
		case joaat("service_earn_refund_head_2_head"):
		case joaat("service_earn_refund_challenge"):
		case joaat("service_earn_refund_share_last_job"):
		case joaat("service_earn_refund_lottery"):
		case -1426920838:
		case joaat("service_earn_gangattack_pickup"):
		case joaat("service_earn_ambient_job_hot_target_deliver"):
		case joaat("service_earn_ambient_job_hot_target_kill"):
		case joaat("service_earn_ambient_job_urban_warfare"):
		case joaat("service_earn_ambient_job_checkpoint_collection"):
		case joaat("service_earn_ambient_job_time_trial"):
		case joaat("service_earn_ambient_job_challenges"):
		case joaat("service_earn_ambient_job_heli_hot_target"):
		case joaat("service_earn_ambient_job_dead_drop"):
		case joaat("service_earn_ambient_job_penned_in"):
		case joaat("service_earn_ambient_job_pass_parcel"):
		case joaat("service_earn_ambient_job_blast"):
		case joaat("service_earn_ambient_job_hot_property"):
		case joaat("service_earn_ambient_job_king"):
		case joaat("service_earn_ambient_job_beast"):
		case joaat("service_earn_boss"):
		case joaat("service_earn_goon"):
		case joaat("service_earn_boss_agency"):
		case joaat("service_earn_from_destroying_contraband"):
		case joaat("service_earn_premium_job"):
		case joaat("service_earn_from_vehicle_export"):
		case joaat("service_earn_smuggler_agency"):
		case joaat("service_earn_wage_payment_bonus"):
		case joaat("service_earn_wage_payment"):
		case joaat("service_earn_refundammodrop"):
		case joaat("service_earn_salvage_checkpoint_collection"):
		case joaat("service_earn_ambient_mugging"):
		case joaat("service_earn_ambient_pickup"):
		case joaat("service_earn_deathmatch_bounty"):
		case joaat("service_earn_cashing_out"):
		case joaat("service_earn_job_bonus_criminal_mastermind"):
		case joaat("service_earn_job_bonus_heist_award"):
		case joaat("service_earn_job_bonus_first_time_bonus"):
		case joaat("service_earn_refund_orbital_manual"):
		case joaat("service_earn_refund_orbital_auto"):
		case joaat("service_earn_gangops_wages"):
		case joaat("service_earn_gangops_wages_bonus"):
		case joaat("service_earn_gangops_prep_participation"):
		case joaat("service_earn_gangops_setup"):
		case joaat("service_earn_gangops_setup_fail"):
		case joaat("service_earn_gangops_finale"):
		case joaat("service_earn_gangops_award_mastermind_2"):
		case joaat("service_earn_gangops_award_mastermind_3"):
		case joaat("service_earn_gangops_award_mastermind_4"):
		case joaat("service_earn_gangops_award_loyalty_award_2"):
		case joaat("service_earn_gangops_award_loyalty_award_3"):
		case joaat("service_earn_gangops_award_loyalty_award_4"):
		case joaat("service_earn_gangops_award_first_time_xm_base"):
		case joaat("service_earn_gangops_award_first_time_xm_submarine"):
		case joaat("service_earn_gangops_award_first_time_xm_silo"):
		case joaat("service_earn_gangops_award_supporting"):
		case joaat("service_earn_gangops_award_order"):
		case joaat("service_earn_gangops_elite_xm_base"):
		case joaat("service_earn_gangops_elite_xm_submarine"):
		case joaat("service_earn_gangops_elite_xm_silo"):
		case joaat("service_earn_gangops_rival_delivery"):
		case joaat("service_earn_doomsday_finale_bonus"):
		case joaat("service_earn_bounty_hunter_reward"):
		case joaat("service_earn_from_business_battle"):
		case joaat("service_earn_from_club_management_participation"):
		case joaat("service_earn_from_fmbb_phonecall_mission"):
		case joaat("service_earn_from_business_hub_sell"):
		case joaat("service_earn_from_fmbb_boss_work"):
		case joaat("service_earn_fmbb_wage_bonus"):
		case joaat("service_earn_bb_event_bonus"):
		case joaat("service_earn_arena_skill_lvl_award"):
		case joaat("service_earn_arena_career_tier_progression_1"):
		case joaat("service_earn_arena_career_tier_progression_2"):
		case joaat("service_earn_arena_career_tier_progression_3"):
		case joaat("service_earn_arena_career_tier_progression_4"):
		case joaat("service_earn_spin_the_wheel_cash"):
			func_107(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("service_spend_spin_the_wheel_payment"):
		case joaat("service_spend_casino_generic"):
		case joaat("service_spend_arcade_game"):
		case joaat("service_spend_arcade_generic"):
		case joaat("service_spend_casino_heist_skip_mission"):
		case joaat("service_spend_casino_heist_setup_heist"):
		case joaat("service_spend_casino_heist_casino_model"):
		case joaat("service_spend_casino_heist_vault_door"):
		case joaat("service_spend_casino_heist_door_security"):
		case joaat("service_spend_island_heist_support_airstrike"):
		case joaat("service_spend_island_heist_support_heavy_weapon"):
		case joaat("service_spend_island_heist_support_sniper"):
		case joaat("service_spend_island_heist_support_air_support"):
		case joaat("service_spend_island_heist_support_drone"):
		case joaat("service_spend_island_heist_support_weapon_stash"):
		case joaat("service_spend_island_heist_suppressors"):
		case joaat("service_spend_island_heist_replay"):
		case joaat("service_spend_beach_party_generic"):
		case joaat("service_spend_submarine_utility_fee"):
		case joaat("service_spend_submarine_boat"):
		case joaat("service_spend_submarine_relocation"):
		case joaat("service_spend_casino_club_generic"):
		case joaat("service_spend_business_expenses"):
		case joaat("service_spend_fixer_hq_concierge"):
		case joaat("service_spend_request_company_suv"):
		case joaat("service_spend_interaction_menu_ability"):
		case joaat("service_spend_agent_14_vehicle_request"):
		case joaat("service_spend_tony_limo"):
		case joaat("service_spend_nightclub_toilet_attendant"):
		case joaat("service_spend_jugallo_boss_vehicle_request"):
		case 1989973742:
		case 767920357:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_107(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_assassinate_target_killed"):
		case joaat("service_earn_arena_war"):
		case joaat("service_earn_refund_arena_spec_box_entry"):
		case joaat("service_earn_ambient_job_rc_time_trial"):
		case joaat("service_earn_daily_objective_event"):
		case joaat("service_earn_collectables_action_figures"):
		case joaat("service_earn_casino_mission_reward"):
		case joaat("service_earn_casino_award_mission_one_first_time"):
		case joaat("service_earn_casino_award_mission_two_first_time"):
		case joaat("service_earn_casino_award_mission_three_first_time"):
		case joaat("service_earn_casino_award_mission_four_first_time"):
		case joaat("service_earn_casino_award_mission_five_first_time"):
		case joaat("service_earn_casino_award_mission_six_first_time"):
		case joaat("service_earn_casino_award_straight_flush"):
		case joaat("service_earn_casino_award_top_pair"):
		case joaat("service_earn_casino_award_full_house"):
		case joaat("service_earn_casino_award_lucky_lucky"):
		case joaat("service_earn_casino_award_high_roller_bronze"):
		case joaat("service_earn_casino_award_high_roller_silver"):
		case joaat("service_earn_casino_award_high_roller_gold"):
		case joaat("service_earn_casino_award_high_roller_platinum"):
		case joaat("service_earn_casino_story_mission_reward"):
		case joaat("service_earn_casino_heist_setup_mission"):
		case joaat("service_earn_casino_heist_prep_mission"):
		case joaat("service_earn_casino_heist_finale"):
		case joaat("service_earn_casino_heist_award_smash_n_grab"):
		case joaat("service_earn_casino_heist_award_in_plain_sight"):
		case joaat("service_earn_casino_heist_award_undetected"):
		case joaat("service_earn_casino_heist_award_all_rounder"):
		case joaat("service_earn_casino_heist_award_elite_thief"):
		case joaat("service_earn_casino_heist_award_professional"):
		case joaat("service_earn_casino_heist_elite_stealth"):
		case joaat("service_earn_casino_heist_elite_subterfuge"):
		case joaat("service_earn_casino_heist_elite_direct"):
		case joaat("service_earn_collectable_item"):
		case joaat("service_earn_collectable_completed_collection"):
		case joaat("service_earn_collectables_signal_jammers"):
		case joaat("service_earn_collectables_signal_jammers_complete"):
		case joaat("service_earn_island_heist_finale"):
		case joaat("service_earn_island_heist_elite_challenge"):
		case joaat("service_earn_island_heist_award_professional"):
		case joaat("service_earn_island_heist_award_elite_thief"):
		case joaat("service_earn_island_heist_award_the_island_heist"):
		case joaat("service_earn_island_heist_award_going_alone"):
		case joaat("service_earn_island_heist_award_team_work"):
		case joaat("service_earn_island_heist_award_cat_burglar"):
		case joaat("service_earn_island_heist_award_pro_thief"):
		case joaat("service_earn_island_heist_award_mixing_it_up"):
		case joaat("service_earn_island_heist_prep"):
		case joaat("service_earn_island_heist_dj_mission"):
		case joaat("service_earn_tuner_robbery_prep"):
		case joaat("service_earn_tuner_robbery_finale"):
		case joaat("service_earn_tuner_car_club_membership"):
		case joaat("service_earn_tuner_daily_vehicle"):
		case joaat("service_earn_tuner_daily_vehicle_bonus"):
		case joaat("service_earn_tuner_award_union_depository"):
		case joaat("service_earn_tuner_award_military_convoy"):
		case joaat("service_earn_tuner_award_fleeca_bank"):
		case joaat("service_earn_tuner_award_freight_train"):
		case joaat("service_earn_tuner_award_bolingbroke_ass"):
		case joaat("service_earn_tuner_award_iaa_raid"):
		case joaat("service_earn_tuner_award_meth_job"):
		case joaat("service_earn_tuner_award_bunker_raid"):
		case joaat("service_earn_auto_shop_delivery_award"):
		case joaat("service_earn_agency_security_contract"):
		case joaat("service_earn_agency_payphone_hit"):
		case joaat("service_earn_agency_story_prep"):
		case joaat("service_earn_agency_story_finale"):
		case joaat("service_earn_fixer_award_sec_con"):
		case joaat("service_earn_fixer_award_phone_hit"):
		case joaat("service_earn_fixer_award_agency_story"):
		case joaat("service_earn_fixer_award_short_trip"):
		case joaat("service_earn_fixer_rival_delivery"):
		case joaat("service_earn_music_studio_short_trip"):
		case joaat("service_earn_from_contraband"):
		case joaat("service_earn_nclub_troublemaker"):
		case joaat("service_earn_sightseeing_reward"):
		case joaat("service_earn_ambient_job_clubhouse_contract"):
		case joaat("service_earn_ambient_job_underwater_cargo"):
		case joaat("service_earn_ambient_job_crime_scene"):
		case joaat("service_earn_ambient_job_metal_detector"):
		case joaat("service_earn_ambient_job_smuggler_plane"):
		case joaat("service_earn_ambient_job_smuggler_trail"):
		case joaat("service_earn_ambient_job_golden_gun"):
		case joaat("service_earn_ambient_job_ammunation_delivery"):
		case joaat("service_earn_ambient_job_source_research"):
		case joaat("service_earn_yohan_source_goods"):
		case joaat("service_earn_taxi_job"):
		case joaat("service_earn_daily_stash_house_participation"):
		case joaat("service_earn_daily_stash_house_completed"):
		case joaat("service_earn_ambient_job_gang_convoy"):
		case joaat("service_earn_ambient_job_shop_robbery"):
		case joaat("service_earn_ambient_job_xmas_mugger"):
		case joaat("service_earn_ambient_job_maze_bank"):
		case joaat("service_earn_juggalo_story_mission"):
		case joaat("service_earn_juggalo_phone_mission"):
		case joaat("service_earn_winter_22_award_juggalo_story"):
		case joaat("service_earn_winter_22_award_acid_lab"):
		case joaat("service_earn_winter_22_award_daily_stash"):
		case joaat("service_earn_winter_22_award_dead_drop"):
		case joaat("service_earn_winter_22_award_random_event"):
		case joaat("service_earn_winter_22_award_taxi"):
		case joaat("service_earn_acid_lab_setup_participation"):
		case joaat("service_earn_acid_lab_source_participation"):
		case joaat("service_earn_acid_lab_sell_participation"):
		case joaat("service_earn_smuggler_ops"):
		case joaat("service_earn_ambient_job_armored_truck"):
		case joaat("service_earn_ambient_job_bicycle_time_trial"):
		case joaat("service_earn_cayo_attrition_bonus_objective"):
		case joaat("service_earn_avenger_operations"):
		case joaat("service_earn_avenger_ops_bonus"):
		case joaat("service_earn_ambient_job_drug_vehicle"):
		case 649031587:
		case -1539520895:
		case 560526114:
		case -256590568:
		case -470808433:
		case 1245164680:
		case -1433838369:
		case 1648751987:
		case 674719198:
		case 617724895:
		case 1424147761:
		case 2131157548:
		case 1237940902:
		case -1688538833:
		case 918785029:
		case -1343182760:
		case -1725871206:
		case 1435585629:
		case 1851118721:
		case -1961446392:
		case -1726080156:
		case 300207193:
		case 1378095557:
		case -1948553812:
		case -1672547752:
		case -485163763:
		case 723646035:
		case 805615290:
			func_107(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_107(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_118())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_20()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4538090 = 1;
			return 0;
		}
		if (Global_2697881)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4538091 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4536600[iVar2 /*84*/].f_65.f_2 == 0)
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
			*uParam0 = func_114(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4536600[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4536600[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4538071 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4538089 = 1;
			Global_4538092 = iParam4;
			Global_4538094 = iParam3;
			Global_4538095 = 1;
			Global_4538093 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4538092 = iParam4;
			Global_4538094 = iParam3;
			Global_4538095 = 1;
			Global_4538093 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_113(1, iParam4);
			Global_4538089 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_108(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_108(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			MISC::SET_BIT(&(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_129.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_109(iParam0);
	}
}

void func_109(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_118())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_112(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4536600[iParam0 /*84*/].f_65);
		}
		func_110(&(Global_4536600[iParam0 /*84*/]));
	}
}

void func_110(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_12 = 0;
	uParam0->f_2 = 0;
	func_111(&(uParam0->f_13));
	func_111(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_111(var uParam0)
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

int func_112(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4536600[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_113(int iParam0, int iParam1)
{
	Global_2699102 = iParam1;
	Global_2699101 = iParam0;
}

int func_114(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4536600[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_118())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4536600[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4536600[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4536600[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4536600[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4536600[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4536600[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4536600[iVar0 /*84*/].f_65 = iParam0;
			Global_4536600[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4536600[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4536600[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4536600[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4536600[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4536600[iVar0 /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			Global_4536600[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4538071 = 0;
			if (bParam6)
			{
				Global_4536600[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_115(Global_4536600[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_115(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)
{
	struct<4> Var0;
	int iVar36;
	
	if (iParam84 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_65 };
	Var0.f_3.f_32 = iParam84;
	iVar36 = func_117(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_116();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 36, iVar36, Var0.f_0);
	}
}

void func_116()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_117(bool bParam0)
{
	var uVar0;
	
	if (func_87(bParam0))
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_118()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_119(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_120(iParam0, iParam1, iParam2, fParam3);
}

void func_120(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_206.f_4 = iVar1;
	Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_206.f_3 = (Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_206.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_121(iVar1, 0);
	}
}

void func_121(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_122(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_143())
		{
			if (func_142(0))
			{
				if (!func_138(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_137()))
					{
						if (func_136() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_136());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_134(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_127("GB_BCUT_TICK1", func_137(), iVar0, 0, 0, 1);
						}
						func_126(20);
						func_123(func_137(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_123(bool bParam0, int iParam1, int iParam2)
{
	struct<9> Var0;
	
	if (func_292(bParam0, 0, 1))
	{
		Var0.f_0 = -1141119736;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_3 = iParam1;
		Var0.f_5 = iParam2;
		Var0.f_6 = func_125(bParam0);
		func_124(&(Var0.f_7), &(Var0.f_8));
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 9, func_117(bParam0), Var0.f_0);
	}
}

void func_124(var uParam0, var uParam1)
{
	*uParam0 = Global_1916957.f_9;
	*uParam1 = Global_1916957.f_10;
}

var func_125(int iParam0)
{
	return Global_1887549[iParam0 /*611*/].f_513;
}

void func_126(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2739811.f_5265.f_7[iVar0]), bVar1);
}

int func_127(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5)
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_38(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_132(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_128(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_128(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_131() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_49(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_129(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1937688.f_5[iVar0 /*53*/] = iParam0;
		Global_1937688.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1937688.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1937688.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1937688.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1937688.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1937688.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1937688.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1937688.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1937688.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1937688.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1937688.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1937688 - 1))
	{
		if (iParam0 > Global_1937688.f_5[iVar0 /*53*/].f_1)
		{
			func_130(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1937688++;
	if (Global_1937688 > 5)
	{
		Global_1937688 = 5;
		return Global_1937688;
	}
	return (Global_1937688 - 1);
}

void func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1937688.f_5[iVar0 /*53*/] = { Global_1937688.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_131()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_132(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_133(&cVar0);
}

var func_133(char[4] cParam0)
{
	return cParam0;
}

void func_134(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_135(1);
	}
	else
	{
		iVar1 = func_135(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_135(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12843;
}

int func_136()
{
	return Global_262145.f_12842;
}

bool func_137()
{
	return Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10;
}

bool func_138(bool bParam0)
{
	return func_139(PLAYER::PLAYER_ID(), bParam0);
}

int func_139(int iParam0, bool bParam1)
{
	return func_140(iParam0, bParam1, 1);
}

int func_140(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_87(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_141(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887549[iParam0 /*611*/].f_10;
	if (func_87(iVar0) && Global_1887549[iVar0 /*611*/].f_10.f_431 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0, int iParam1)
{
	if (func_87(iParam0))
	{
		if (func_87(Global_1887549[iParam0 /*611*/].f_10))
		{
			if (Global_1887549[iParam0 /*611*/].f_10 == iParam0 && Global_1887549[iParam0 /*611*/].f_10.f_431 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_142(bool bParam0)
{
	return func_63(PLAYER::PLAYER_ID(), bParam0);
}

bool func_143()
{
	return func_64(PLAYER::PLAYER_ID());
}

void func_144()
{
	func_262();
	if (HUD::DOES_BLIP_EXIST(iLocal_242))
	{
		if (func_261() || func_260())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_242, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_242, 4);
		}
	}
	switch (Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_92.f_2, Local_92.f_5, Local_92.f_5, 1000f, false, true, 0))
			{
				func_237();
				MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), false);
				MISC::SET_BIT(&(Global_2739811.f_4730), false);
				Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
			}
			if (Local_92.f_7 > 1)
			{
				Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		
		case 1:
			func_210();
			func_145();
			if (Local_92.f_7 > 1)
			{
				Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_145()
{
	func_209();
	func_154();
	func_147();
	func_146();
}

void func_146()
{
	if (!BitTest(uLocal_241, 5))
	{
		if (!BitTest(uLocal_241, 4))
		{
			if (Local_92.f_17 == 0)
			{
				MISC::SET_BIT(&uLocal_241, 4);
			}
			else
			{
				MISC::SET_BIT(&uLocal_241, 5);
			}
		}
		else if (!func_292(PLAYER::PLAYER_ID(), 1, 1))
		{
			MISC::SET_BIT(&uLocal_241, 5);
		}
	}
}

void func_147()
{
	if ((((LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		func_153();
	}
	else
	{
		func_152();
	}
	if ((Local_92.f_12 - func_151(&(Local_92.f_10), 0, 0)) >= 0)
	{
		func_148((Local_92.f_12 - func_151(&(Local_92.f_10), 0, 0)), "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_148(0, "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
}

void func_148(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_150(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1675211.f_1 = 1;
		func_149(7, bVar0);
		Global_1675211.f_4714[bVar0] = iParam0;
		StringCopy(&(Global_1675211.f_4714.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1675211.f_4714.f_172[bVar0] = iParam2;
		Global_1675211.f_4714.f_216[bVar0] = iParam3;
		Global_1675211.f_4714.f_183[bVar0] = iParam4;
		Global_1675211.f_4714.f_194[bVar0] = iParam5;
		Global_1675211.f_4714.f_249[bVar0] = iParam6;
		Global_1675211.f_4714.f_260[bVar0] = iParam7;
		Global_1675211.f_4714.f_205[bVar0] = iParam8;
		Global_1675211.f_4714.f_314[bVar0] = iParam9;
		Global_1675211.f_4714.f_325[bVar0] = iParam10;
		Global_1675211.f_4714.f_357[bVar0] = iParam11;
		Global_1675211.f_4714.f_238[bVar0] = iParam12;
		Global_1675211.f_4714.f_271[bVar0] = iParam13;
		Global_1675211.f_4714.f_368[bVar0] = iParam14;
		Global_1675211.f_4714.f_379[bVar0] = iParam15;
		Global_1675211.f_4714.f_390[bVar0] = iParam16;
		Global_1675211.f_4714.f_227[bVar0] = iParam17;
	}
}

void func_149(int iParam0, bool bParam1)
{
	MISC::SET_BIT(&(Global_1675211.f_7064[iParam0]), bParam1);
}

int func_150(int iParam0, int iParam1)
{
	return BitTest(Global_1675211.f_7064[iParam0], iParam1);
}

int func_151(var uParam0, bool bParam1, bool bParam2)
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

void func_152()
{
	Global_1675211.f_1173 = 1;
}

void func_153()
{
	Global_1675211.f_1172 = 1;
}

void func_154()
{
	if (func_9(&uLocal_243, 30000, 0))
	{
		switch (Local_92.f_16)
		{
			case 2:
				func_208(2107, 1, -1);
				break;
			
			case 3:
				func_208(2108, 1, -1);
				break;
			
			case 4:
				func_208(2109, 1, -1);
				break;
			
			case 5:
				func_208(2110, 1, -1);
				break;
		}
		func_155(0, PLAYER::PLAYER_PED_ID(), "XPT_DSC", -1636175450, 2048546661, (Global_262145.f_8628 * Local_92.f_16), 1, -1, 0, 0, 0);
		Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
		func_5(&uLocal_243);
	}
}

int func_155(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_165(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && (BitTest(Global_4718592.f_39, 19) || func_43(Global_4718592.f_187633, 1)))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_161(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_156(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_156(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_159(iParam0, 1) };
	if (iParam0 == func_158(PLAYER::PLAYER_PED_ID()))
	{
		func_157(1);
	}
	func_161(Var0, iParam1, 0, sParam2, iParam3);
}

void func_157(int iParam0)
{
	Global_2672939.f_1758 = iParam0;
}

int func_158(int iParam0)
{
	return iParam0;
}

Vector3 func_159(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_160(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_160(int iParam0)
{
	return iParam0;
}

void func_161(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672939.f_1157[iVar0 /*30*/].f_6 == 0 || Global_2672939.f_1157[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672939.f_1157[iVar1 /*30*/] = { Param0 };
			Global_2672939.f_1157[iVar1 /*30*/].f_6 = 1;
			Global_2672939.f_1157[iVar1 /*30*/].f_4 = func_164(Global_2672939.f_1157[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672939.f_1157[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672939.f_1157[iVar1 /*30*/].f_3 = iParam3;
			Global_2672939.f_1157[iVar1 /*30*/].f_8 = iParam4;
			Global_2672939.f_1157[iVar1 /*30*/].f_9 = func_163();
			Global_2672939.f_1157[iVar1 /*30*/].f_10 = func_162();
			StringCopy(&(Global_2672939.f_1157[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2672939.f_1157[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_162()
{
	if (Global_2672939.f_1758)
	{
		Global_2672939.f_1758 = 0;
		return 1;
	}
	Global_2672939.f_1758 = 0;
	return 0;
}

var func_163()
{
	var uVar0;
	
	uVar0 = Global_2672939.f_1760;
	Global_2672939.f_1760 = 1;
	return uVar0;
}

float func_164(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_165(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_166(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_166(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_198();
	if (func_197(sParam2))
	{
	}
	if (func_196())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_194(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_193(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_190(0, &iVar1);
					break;
				
				case 3:
					func_190(1, &iVar1);
					break;
				
				case 1:
					func_187(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_262145.f_13369)
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
			func_208(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_175((func_186(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_36.f_2 != -1)
				{
					func_208(1166, iVar1, -1);
				}
				func_171(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_167((func_169(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_167((func_169(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_167(int iParam0)
{
	if (func_196())
	{
		Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_206.f_5 = iParam0;
		func_168(joaat("mpply_globalxp"), iParam0);
	}
}

void func_168(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_169(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_292(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_170(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1845221[iParam0 /*889*/].f_206.f_5;
			}
		}
		else
		{
			return func_170(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_170(int iParam0)
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

void func_171(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_174(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_172(func_173(&Var0));
			if (iVar13 == 0)
			{
				func_168(joaat("mpply_crew_local_xp_0"), (func_170(joaat("mpply_crew_local_xp_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_168(joaat("mpply_crew_local_xp_1"), (func_170(joaat("mpply_crew_local_xp_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_168(joaat("mpply_crew_local_xp_2"), (func_170(joaat("mpply_crew_local_xp_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_168(joaat("mpply_crew_local_xp_3"), (func_170(joaat("mpply_crew_local_xp_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_168(joaat("mpply_crew_local_xp_4"), (func_170(joaat("mpply_crew_local_xp_4")) + iParam0));
			}
		}
	}
}

int func_172(int iParam0)
{
	if (iParam0 == func_170(joaat("mpply_crew_0_id")))
	{
		return 0;
	}
	else if (iParam0 == func_170(joaat("mpply_crew_1_id")))
	{
		return 1;
	}
	else if (iParam0 == func_170(joaat("mpply_crew_2_id")))
	{
		return 2;
	}
	else if (iParam0 == func_170(joaat("mpply_crew_3_id")))
	{
		return 3;
	}
	else if (iParam0 == func_170(joaat("mpply_crew_4_id")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_173(var* uParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2696358;
		}
	}
	return Global_2696358;
}

struct<13> func_174(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_175(int iParam0, int iParam1, int iParam2)
{
	if (func_196())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10095 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_185(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == func_185(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 == 0)
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
		if (Global_262145.f_10094 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_184(PLAYER::PLAYER_ID()))
		{
			Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_206.f_1 = iParam0;
			Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_206.f_6 = func_181(iParam0, 1);
		}
		func_179(640, iParam0, -1, 1);
		func_179(641, func_181(iParam0, 1), -1, 1);
		func_176(-1109644434, 7, 0);
	}
}

void func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_178(iParam1, iParam2))
	{
		iVar0 = func_177();
		Global_2696309[iVar0] = iParam1;
		Global_2696320[iVar0] = iParam0;
	}
}

int func_177()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696309[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_178(int iParam0, var uParam1)
{
	if (Global_1575072)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575084) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_179(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_180(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_180(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_19(uParam1));
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
		if (func_183(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_183(iVar3) < iParam0)
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

int func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return joaat("pyro_sub_bass_synth");
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_184(int iParam0)
{
	if (!func_87(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672939.f_1, iParam0);
}

int func_185(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_180(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_186(int iParam0)
{
	if (Global_1574633.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_185(640, -1);
			}
			else if (func_184(iParam0))
			{
				return Global_1845221[iParam0 /*889*/].f_206.f_1;
			}
		}
	}
	else
	{
		return func_185(640, -1);
	}
	return 0;
}

void func_187(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_46(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_189(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_188(*iParam0, 100) * (10f * Global_262145.f_3922)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_188(*iParam0, 100) * (20f * Global_262145.f_3920)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_188(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_189(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2707651 = { func_174(iParam0) };
		Global_2707664 = { func_174(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707651))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707664))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707581, 35, &Global_2707651);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707616, 35, &Global_2707664);
				if (Global_2707581 == Global_2707616)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_190(bool bParam0, int iParam1)
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
				if (func_292(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_189(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_292(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_191(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_189(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_188(*iParam1, 100) * (10f * Global_262145.f_3922)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_188(*iParam1, 100) * (20f * Global_262145.f_3920)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_191(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_192(iParam0), func_192(iParam1));
	return 0f;
}

Vector3 func_192(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_193(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_188(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_194(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_186(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_186(PLAYER::PLAYER_ID());
		}
	}
	if (func_195(8000, 0, 0) > 0)
	{
		if (func_195(8000, 0, 0) < (iParam0 + func_186(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_195(8000, 0, 0) - func_186(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_195(int iParam0, bool bParam1, int iParam2)
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
	return func_183(iParam0);
}

int func_196()
{
	return 1;
}

int func_197(char* sParam0)
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

int func_198()
{
	int iVar0;
	
	if (func_207(PLAYER::PLAYER_ID()) || func_206(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10125 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10125;
		}
	}
	else if (func_204() || func_200(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22930 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_22930;
		}
	}
	else if (func_199(Global_4718592.f_187633))
	{
		if (Global_262145.f_7169 > 36000)
		{
			iVar0 = 36000;
		}
		else
		{
			iVar0 = Global_262145.f_7169;
		}
	}
	else if (Global_262145.f_7168 > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7168;
	}
	return iVar0;
}

bool func_199(int iParam0)
{
	return iParam0 == 89;
}

int func_200(int iParam0)
{
	return func_201(func_202(iParam0));
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_202(int iParam0)
{
	if (func_87(iParam0))
	{
		if (func_203(iParam0, 0))
		{
			return Global_1887549[iParam0 /*611*/].f_10.f_33;
		}
	}
	return -1;
}

int func_203(int iParam0, int iParam1)
{
	if (func_87(iParam0))
	{
		if (Global_1887549[iParam0 /*611*/].f_10.f_33 != -1 || (iParam1 && Global_1887549[iParam0 /*611*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_204()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_33();
	}
	return func_205(Global_4718592.f_128476);
}

int func_205(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4707[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_206(int iParam0)
{
	return Global_2657991[iParam0 /*467*/].f_123 == 2;
}

bool func_207(int iParam0)
{
	return Global_2657991[iParam0 /*467*/].f_123 == 7;
}

void func_208(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_185(iParam0, func_19(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_179(iParam0, iVar0, iParam2, 1);
}

void func_209()
{
	if (func_9(&uLocal_245, 10000, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < Local_92.f_16)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Local_92.f_16, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
		PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
	}
}

void func_210()
{
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_92.f_2, Local_92.f_5, Local_92.f_5, 1000f, false, true, 0))
	{
		func_213();
		Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 0;
	}
	else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_92.f_2, Local_92.f_6, Local_92.f_6, 950f, false, true, 0))
	{
		if (!BitTest(uLocal_241, 0) && BitTest(uLocal_241, 3))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_212())
			{
				if (!func_261())
				{
					func_211("DCP_LEAVE", -1);
				}
				MISC::SET_BIT(&uLocal_241, false);
			}
		}
	}
	else
	{
		if (!BitTest(uLocal_241, 3))
		{
			MISC::SET_BIT(&uLocal_241, 3);
		}
		if (BitTest(uLocal_241, 0))
		{
			MISC::CLEAR_BIT(&uLocal_241, false);
		}
	}
}

void func_211(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_212()
{
	return MISC::GET_GAME_TIMER() <= Global_23970.f_6481 + 100;
}

void func_213()
{
	func_5(&uLocal_243);
	func_5(&uLocal_245);
	func_214();
	MISC::CLEAR_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), false);
	MISC::CLEAR_BIT(&uLocal_241, 3);
	MISC::SET_BIT(&(Global_2739811.f_4730), false);
	if (!BitTest(uLocal_241, 5))
	{
		MISC::SET_BIT(&uLocal_241, 5);
	}
}

void func_214()
{
	if (BitTest(uLocal_241, 2))
	{
		func_215(1, 1, 0);
		MISC::CLEAR_BIT(&uLocal_241, 2);
	}
}

void func_215(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635516.f_45), &Global_2640139, 324);
	}
	else
	{
		Global_2635516.f_45 = { Global_2640139 };
		Global_2635516.f_45.f_49 = { Global_2640139.f_49 };
		Global_2635516.f_45.f_52 = Global_2640139.f_52;
		Global_2635516.f_45.f_53 = Global_2640139.f_53;
	}
	if (bParam0)
	{
		func_236();
	}
	if (!bParam2)
	{
		func_218(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_217(0);
	func_216();
}

void func_216()
{
	struct<6> Var0;
	
	if (Global_2635516.f_491.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2635516.f_491 = { Var0 };
	}
}

void func_217(bool bParam0)
{
	if (bParam0)
	{
		Global_2635516.f_714 = 0;
	}
	else
	{
		Global_2635516.f_714 = 1;
	}
}

void func_218(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_235())
		{
			func_234();
		}
		Global_2635516.f_715.f_668 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635516.f_715.f_654 = iParam1;
		Global_2635516.f_715.f_655 = iParam2;
		Global_2635516.f_715.f_656 = iParam10;
		func_232();
		func_222(8, 0, 0, 0, 0);
		Global_2635516.f_715.f_657 = iParam11;
		Global_2635516.f_715.f_662 = iParam3;
		Global_2635516.f_715.f_663 = iParam4;
		Global_2635516.f_715.f_660 = iParam5;
		Global_2635516.f_715.f_661 = iParam6;
		Global_2635516.f_715.f_664 = iParam7;
		Global_2635516.f_715.f_665 = iParam8;
		Global_2635516.f_715.f_666 = iParam9;
		Global_2635516.f_715.f_667 = iParam14;
		Global_2635516.f_715.f_658 = iParam12;
		Global_2635516.f_715.f_659 = iParam13;
		Global_2635516.f_2054 = 1;
	}
	else
	{
		func_219();
	}
}

void func_219()
{
	if (func_235() && !func_221())
	{
		func_234();
	}
	if (func_221())
	{
		func_220();
	}
	else
	{
		func_232();
		func_222(0, 0, 0, 0, 0);
		Global_2635516.f_2054 = 0;
		Global_2635516.f_2053 = 0;
	}
}

void func_220()
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635516.f_715), &(Global_2635516.f_1384), 669);
	Global_2635516.f_491 = { Global_2635516.f_497 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635516.f_715.f_668)
	{
		Global_2635516.f_2053 = 0;
	}
}

int func_221()
{
	if ((Global_2635516.f_2053 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635516.f_1384.f_668) && SCRIPT::IS_THREAD_ACTIVE(Global_2635516.f_1384.f_668))
	{
		return 1;
	}
	return 0;
}

void func_222(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2672939.f_1761.f_703.f_16 != func_88())
	{
		if (BitTest(Global_2657991[Global_2672939.f_1761.f_703.f_16 /*467*/].f_428, 0) && func_223())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2643598 = 0;
	}
	Global_2635516.f_491 = iParam0;
	Global_2635516.f_491.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635516.f_491.f_2 = iParam1;
	Global_2635516.f_491.f_3 = iParam2;
	Global_2635516.f_491.f_4 = iParam3;
	Global_2635516.f_491.f_5 = iParam4;
}

int func_223()
{
	if (((((((func_202(PLAYER::PLAYER_ID()) == 229 || func_202(PLAYER::PLAYER_ID()) == 191) || func_231(Global_4718592.f_187633)) || func_230()) || func_229()) || func_228()) || Global_2708410.f_227 == 1) || (Global_2635516.f_2054 && func_224(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_224(int iParam0)
{
	if (func_227(iParam0))
	{
		return 1;
	}
	if (func_225(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_225(int iParam0)
{
	return func_226(iParam0, 20);
}

var func_226(int iParam0, int iParam1)
{
	return BitTest(Global_1887549[iParam0 /*611*/].f_10.f_4, iParam1);
}

int func_227(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887549[iVar0 /*611*/].f_1, 7);
	}
	return 0;
}

var func_228()
{
	return Global_2708409;
}

var func_229()
{
	return Global_1836685;
}

int func_230()
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

bool func_231(int iParam0)
{
	return iParam0 == 92;
}

void func_232()
{
	if (func_235() && !func_221())
	{
		func_234();
	}
	func_233();
	Global_2635516.f_715 = 0;
	Global_2635516.f_715.f_602 = 0;
}

void func_233()
{
	int iVar0;
	struct<6> Var1;
	struct<3> Var7;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2635516.f_715.f_1[iVar0 /*6*/] = { Var1 };
		iVar0++;
	}
	Var7 = -1;
	Var7.f_2 = -3;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_2635516.f_715.f_603[iVar0 /*3*/] = { Var7 };
		iVar0++;
	}
}

void func_234()
{
	if (func_221())
	{
		if (Global_2635516.f_715.f_668 == Global_2635516.f_1384.f_668)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635516.f_715.f_668)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635516.f_1384), &(Global_2635516.f_715), 669);
		Global_2635516.f_497 = { Global_2635516.f_491 };
		Global_2635516.f_2053 = 1;
	}
}

int func_235()
{
	if ((Global_2635516.f_2054 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635516.f_715.f_668) && SCRIPT::IS_THREAD_ACTIVE(Global_2635516.f_715.f_668))
	{
		return 1;
	}
	return 0;
}

void func_236()
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635516.f_369), &Global_2640463, 121);
}

void func_237()
{
	if (!BitTest(uLocal_241, 2))
	{
		func_257(Local_92.f_2, (Local_92.f_6 * 1.5f), 0, 0, 1, 0);
		func_239(Local_92.f_2, Local_92.f_6, 0, 1);
		func_238(Local_92.f_2, 1, 0);
		MISC::SET_BIT(&uLocal_241, 2);
	}
}

void func_238(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2635516.f_45.f_49 = { Param0 };
	Global_2635516.f_45.f_52 = iParam3;
	Global_2635516.f_45.f_53 = iParam4;
}

void func_239(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	func_240(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, iParam5);
}

void func_240(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_249(PLAYER::PLAYER_ID()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_248(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_243(Var0))
		{
			Global_2635516.f_45.f_64 = func_242(PLAYER::PLAYER_ID());
			func_241(Var0, iParam8);
		}
	}
}

void func_241(struct<12> Param0, int iParam12)
{
	Global_2635516.f_369[iParam12 /*12*/] = { Param0 };
	Global_2635516.f_369[iParam12 /*12*/].f_9 = 1;
}

int func_242(int iParam0)
{
	if (func_292(iParam0, 0, 1))
	{
		return Global_2657991[iParam0 /*467*/].f_1;
	}
	return 0;
}

int func_243(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2635516.f_45[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_244(Global_2635516.f_45[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_244(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_247(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_245(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_247(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_245(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_245(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_246(Param0, Param3, Var0, Var3);
}

int func_246(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_247(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_248(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var3.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var3.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var3.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var3.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var3.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var3.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var3 };
}

int func_249(int iParam0)
{
	if (((func_252(iParam0, 1) || func_251(iParam0)) || func_203(iParam0, 0)) || func_250(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0)
{
	if (!func_292(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_885, 2);
}

int func_251(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887549[iVar0 /*611*/] != -1;
	}
	return 0;
}

bool func_252(int iParam0, bool bParam1)
{
	if (func_256() != 0)
	{
		return func_242(iParam0) != 0;
	}
	return func_253(iParam0, bParam1, 0);
}

int func_253(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_254(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845221[iParam0 /*889*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_254(int iParam0)
{
	return func_255(iParam0);
}

var func_255(int iParam0)
{
	return BitTest(Global_1845221[iParam0 /*889*/].f_11.f_1, 0);
}

int func_256()
{
	return Global_33087;
}

void func_257(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_258(Param0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam6, iParam5, iParam7);
}

void func_258(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9, var uParam10, var uParam11)
{
	struct<12> Var0;
	
	if (func_249(PLAYER::PLAYER_ID()) || uParam9)
	{
		if (Global_2635516.f_2054)
		{
			func_219();
		}
		if (Var0.f_10 == 1)
		{
			func_248(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		Var0.f_11 = uParam10;
		Var0.f_8 = uParam11;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_2635516.f_45.f_64 = func_242(PLAYER::PLAYER_ID());
		func_259(Var0, iParam8);
	}
}

void func_259(struct<12> Param0, int iParam12)
{
	Global_2635516.f_45[iParam12 /*12*/] = { Param0 };
	Global_2635516.f_45[iParam12 /*12*/].f_9 = 1;
}

var func_260()
{
	return Global_2647037.f_1870;
}

int func_261()
{
	return 1;
}

void func_262()
{
	if (!BitTest(uLocal_241, 6))
	{
		if (((((((func_263(60000) && func_265() == 1) && Local_92.f_7 <= 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && func_292(PLAYER::PLAYER_ID(), 1, 1)) && !func_212()) && Local_92.f_16 != 5)
		{
			if (!func_261())
			{
				func_211("DCP_HELP1", -1);
			}
			MISC::SET_BIT(&uLocal_241, 6);
		}
	}
}

bool func_263(int iParam0)
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2644853, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_264()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_242))
	{
		if (func_261() || func_260())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_242, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_242, 4);
		}
	}
	else
	{
		iLocal_242 = HUD::ADD_BLIP_FOR_RADIUS(Local_92.f_2, Local_92.f_5);
		HUD::SET_BLIP_COLOUR(iLocal_242, 50);
		HUD::SET_BLIP_ALPHA(iLocal_242, 220);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_242, false);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_242, "DCP_BLIPN");
		if (func_261())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_242, 0);
		}
	}
}

int func_265()
{
	return Local_92.f_0;
}

int func_266(int iParam0)
{
	return Local_112[iParam0 /*4*/];
}

bool func_267(int iParam0)
{
	return !func_268(iParam0);
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_7192)
			{
				return 0;
			}
			if (func_270(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 0) || BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7193)
			{
				return 0;
			}
			if (func_270(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 0) || BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7194)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7195)
			{
				return 0;
			}
			if (func_270(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 0) || BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_269(4))
			{
				return 0;
			}
			if (func_270(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 0) || BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_269(4))
			{
				return 0;
			}
			if (func_270(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 0) || BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_269(4))
			{
				return 0;
			}
			if (func_270(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 0) || BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_269(4))
			{
				return 0;
			}
			if (func_270(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 0) || BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_269(4))
			{
				return 0;
			}
			if (func_270(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_269(4))
			{
				return 0;
			}
			if (func_270(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_269(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_292(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2657991[iVar0 /*467*/].f_221, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_270(int iParam0, int iParam1)
{
	return BitTest(Global_2657991[iParam0 /*467*/].f_221, iParam1);
}

int func_271()
{
	if (Global_1575056 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_277())
	{
		return 1;
	}
	if (Global_2699004)
	{
		return 1;
	}
	if (func_276())
	{
		return 1;
	}
	if (func_275(159))
	{
		if (!func_274())
		{
			return 1;
		}
	}
	if (func_275(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_272() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_272()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_272()
{
	switch (func_256())
	{
		case 0:
			return func_273();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_273()
{
	switch (Global_2699111)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_274()
{
	return Global_2684718.f_700;
}

int func_275(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_276()
{
	return Global_2696416;
}

bool func_277()
{
	return Global_2684718.f_695;
}

void func_278()
{
	SYSTEM::WAIT(0);
}

void func_279()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_242))
	{
		HUD::REMOVE_BLIP(&iLocal_242);
	}
	if (BitTest(Local_92.f_1, 1))
	{
		func_92(12, "DSC_FAIL", 0, 0, -99);
	}
	func_214();
	func_281(16, 0);
	MISC::SET_BIT(&(Global_2739811.f_4730), false);
	func_280();
}

void func_280()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_281(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_221, bParam0))
		{
			MISC::SET_BIT(&(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_221), bParam0);
		}
	}
	else if (BitTest(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_221, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_221), bParam0);
	}
}

void func_282(struct<21> Param0)
{
	func_288(func_289(Param0.f_0), Param0);
	func_286(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_92, 20, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_112, 129, 0);
	if (!func_285())
	{
		func_279();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_283();
		}
		func_281(16, 1);
		Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 0;
	}
	else
	{
		func_279();
	}
}

void func_283()
{
	Local_92.f_2 = { func_284() };
	Local_92.f_5 = 200f;
	Local_92.f_6 = 180f;
}

Vector3 func_284()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 10))
	{
		case 0:
			return 1440f, -2135f, 60f;
		
		case 1:
			return 233f, -1725f, 30f;
		
		case 2:
			return -403f, -1207f, 38f;
		
		case 3:
			return -1060f, -1028f, 3f;
		
		case 4:
			return -2152f, -329f, 14f;
		
		case 5:
			return -1651f, 214f, 61f;
		
		case 6:
			return -527f, 662f, 142f;
		
		case 7:
			return -27f, -747f, 45f;
		
		case 8:
			return 1292f, -649f, 68f;
		
		case 9:
			return 978f, -3143f, 6f;
		
		default:
	}
	return 978f, -3143f, 6f;
}

int func_285()
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
		if (func_277())
		{
			return 0;
		}
		if (func_275(157))
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

int func_286(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_280();
			}
			else
			{
				return 0;
			}
		}
		if (!func_287(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_280();
					}
					else
					{
						return 0;
					}
				}
				if (func_277())
				{
					if (!bParam2)
					{
						func_280();
					}
					else
					{
						return 0;
					}
				}
				if (func_275(157))
				{
					if (!bParam2)
					{
						func_280();
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
					func_280();
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
		Global_1574667 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_280();
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
			func_280();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_287(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575056;
}

void func_288(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_280();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_289(int iParam0)
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
		
		case 79:
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
		
		case 208:
			return 32;
		
		case 209:
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
		
		case 220:
			return 32;
		
		case 221:
			return 32;
		
		case 210:
			return 32;
		
		case 211:
			return 32;
		
		case 215:
			return 32;
		
		case 213:
			return 32;
		
		case 214:
			return 32;
		
		case 218:
			return 32;
		
		case 219:
			return 32;
		
		case 216:
			return 32;
		
		case 217:
			return 32;
		
		case 222:
			return 32;
		
		case 223:
			return 32;
		
		case 224:
			return 32;
		
		case 225:
			return 32;
		
		case 226:
			return 2;
		
		case 231:
			return 1;
		
		case 227:
			return 2;
		
		case 228:
			return 4;
		
		case 229:
			return 2;
		
		case 230:
			return 2;
		
		case 212:
			return 1;
		
		case 232:
			return 2;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 237:
		case 238:
			return 0;
		
		case 254:
			return 1;
		
		case 239:
			return 4;
		
		case 242:
			return 4;
		
		case 243:
			return 1;
		
		case 244:
			return 1;
		
		case 250:
			return 1;
		
		case 246:
			return 2;
		
		case 251:
			return 1;
		
		case 247:
			return 1;
		
		case 245:
			return 2;
		
		case 248:
			return 8;
		
		case 249:
			return 8;
		
		case 252:
			return 1;
		
		case 253:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 179:
			return 1;
		
		case 196:
			return 1;
		
		case 206:
			return 32;
		
		case 240:
			return 16;
		
		case 241:
			return 32;
		
		default:
	}
	switch (func_290(func_291(iParam0, 1)))
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

int func_290(int iParam0)
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
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 314:
			return 0;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		case 337:
			return 0;
		
		case 338:
			return 0;
		
		case 339:
			return 0;
		
		case 340:
			return 0;
		
		case 343:
			return 0;
		
		case 344:
			return 0;
		
		case 345:
			return 0;
		
		case 346:
			return 0;
		
		case 347:
			return 0;
		
		case 348:
			return 0;
		
		case 349:
			return 0;
		
		case 350:
			return 0;
		
		case 351:
			return 0;
		
		case 353:
			return 2;
		
		default:
	}
	return -1;
}

int func_291(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 226:
			return 15;
		
		case 233:
			return 8;
		
		case 227:
			return 14;
		
		case 231:
			return 122;
		
		case 234:
			return 1;
		
		case 232:
			return 5;
		
		case 235:
			return 6;
		
		case 228:
			return 11;
		
		case 236:
			return 0;
		
		case 237:
			return 2;
		
		case 229:
			return 13;
		
		case 238:
			return 3;
		
		case 230:
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
		
		case 79:
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
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 314;
		
		case 176:
			return 315;
		
		case 177:
			return 316;
		
		case 178:
			return 317;
		
		case 179:
			return 318;
		
		case 180:
			return 320;
		
		case 181:
			return 322;
		
		case 182:
			return 323;
		
		case 183:
			return 324;
		
		case 184:
			return 325;
		
		case 185:
			return 326;
		
		case 186:
			return 327;
		
		case 187:
			return 328;
		
		case 188:
			return 329;
		
		case 189:
			return 330;
		
		case 190:
			return 331;
		
		case 191:
			return 332;
		
		case 192:
			return 333;
		
		case 193:
			return 337;
		
		case 194:
			return 338;
		
		case 195:
			return 339;
		
		case 196:
			return 340;
		
		case 197:
			return 343;
		
		case 198:
			return 344;
		
		case 199:
			return 345;
		
		case 200:
			return 346;
		
		case 201:
			return 347;
		
		case 202:
			return 348;
		
		case 203:
			return 349;
		
		case 204:
			return 350;
		
		case 205:
			return 351;
		
		case 206:
			return 352;
		
		case 207:
			return 353;
		
		default:
	}
	if (bParam1)
	{
	}
	return 352;
}

int func_292(int iParam0, bool bParam1, bool bParam2)
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

