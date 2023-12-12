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
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = 0;
	bool bLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	struct<3> Local_37[70];
	float fLocal_248 = 0f;
	struct<3> Local_249 = { 0, 0, 0 } ;
	struct<3> Local_252 = { 0, 0, 0 } ;
	struct<3> Local_255 = { 0, 0, 0 } ;
	struct<3> Local_258 = { 0, 0, 0 } ;
	float fLocal_261 = 0f;
	struct<3> Local_262 = { 0, 0, 0 } ;
	bool bLocal_265 = 0;
	int iLocal_266 = 0;
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_248 = 40000f;
	Local_262 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if ((func_54(13) || func_54(14)) || func_53(0))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_31();
	func_30();
	func_27();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_25();
		func_18();
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				func_17();
				switch (iLocal_25)
				{
					case 0:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_37[bLocal_29 /*3*/]) < fLocal_248)
							{
								if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
								{
									if ((((((((((((((bLocal_29 == 33 || bLocal_29 == 34) || bLocal_29 == 35) || bLocal_29 == 36) || bLocal_29 == 50) || bLocal_29 == 51) || bLocal_29 == 52) || bLocal_29 == 53) || bLocal_29 == 54) || bLocal_29 == 55) || bLocal_29 == 56) || bLocal_29 == 57) || bLocal_29 == 58) || bLocal_29 == 59) || bLocal_29 == 60)
									{
										bLocal_36 = true;
									}
									else
									{
										bLocal_36 = false;
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
									{
										if (func_16())
										{
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_249, Local_252, fLocal_261, false, true, 0))
											{
												bLocal_31 = true;
												iLocal_25 = 1;
											}
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255, Local_258, fLocal_261, false, true, 0))
											{
												bLocal_32 = true;
												iLocal_25 = 1;
											}
										}
									}
								}
							}
						}
						SYSTEM::SETTIMERA(0);
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
							{
								func_15();
							}
							else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							{
								func_15();
							}
							else if (!ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								func_15();
							}
							if (bLocal_31)
							{
								if (iLocal_35)
								{
									if (iLocal_34)
									{
										if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_249, Local_252, fLocal_261, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255, Local_258, fLocal_261, false, true, 0))
										{
											func_15();
											func_1();
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
										}
									}
									else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_249, Local_252, fLocal_261, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255, Local_258, fLocal_261, false, true, 0))
									{
										iLocal_34 = 1;
									}
									else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_249, Local_252, fLocal_261, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255, Local_258, fLocal_261, false, true, 0))
									{
										func_15();
									}
								}
								else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_249, Local_252, fLocal_261, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255, Local_258, fLocal_261, false, true, 0))
								{
									iLocal_35 = 1;
								}
								else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_249, Local_252, fLocal_261, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255, Local_258, fLocal_261, false, true, 0))
								{
									func_15();
								}
							}
							else if (bLocal_32)
							{
								if (iLocal_35)
								{
									if (iLocal_33)
									{
										if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_249, Local_252, fLocal_261, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255, Local_258, fLocal_261, false, true, 0))
										{
											func_15();
											func_1();
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
										}
									}
									else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_249, Local_252, fLocal_261, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255, Local_258, fLocal_261, false, true, 0))
									{
										iLocal_33 = 1;
									}
									else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_249, Local_252, fLocal_261, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255, Local_258, fLocal_261, false, true, 0))
									{
										func_15();
									}
								}
								else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_249, Local_252, fLocal_261, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255, Local_258, fLocal_261, false, true, 0))
								{
									iLocal_35 = 1;
								}
								else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_249, Local_252, fLocal_261, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_255, Local_258, fLocal_261, false, true, 0))
								{
									func_15();
								}
							}
						}
						break;
					}
			}
		}
		else if (iLocal_26 == 0)
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1()
{
	bool bVar0;
	
	if (bLocal_29 < 32)
	{
		bVar0 = BitTest(Global_114370.f_10052.f_96, bLocal_29);
	}
	else if (bLocal_29 < 64)
	{
		bVar0 = BitTest(Global_114370.f_10052.f_97, (bLocal_29 - 32));
	}
	else
	{
		bVar0 = BitTest(Global_114370.f_10052.f_98, (bLocal_29 - 64));
	}
	if (bVar0)
	{
	}
	else
	{
		if (!bLocal_265)
		{
			if (bLocal_36)
			{
				STATS::STAT_INCREMENT(joaat("sp_knife_flights_count"), 1f);
			}
			else
			{
				STATS::STAT_INCREMENT(joaat("sp_under_the_bridge_count"), 1f);
			}
			func_3(func_9(), 5, 3);
			func_2();
		}
		if (bLocal_29 < 32)
		{
			MISC::SET_BIT(&(Global_114370.f_10052.f_96), bLocal_29);
		}
		else if (bLocal_29 < 64)
		{
			MISC::SET_BIT(&(Global_114370.f_10052.f_97), (bLocal_29 - 32));
		}
		else
		{
			MISC::SET_BIT(&(Global_114370.f_10052.f_98), (bLocal_29 - 64));
		}
		Global_97817 = 1;
		func_31();
		iLocal_27 = 1;
	}
}

int func_2()
{
	if (func_53(0))
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

void func_3(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_8(iVar1, -1);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_4(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_4(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_5(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

var func_5(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_6(uParam1));
}

int func_6(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
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

int func_7()
{
	return Global_1574925;
}

int func_8(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_5(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_10()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_13(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_12(PLAYER::PLAYER_PED_ID());
			if (func_11(iVar0) && (!func_54(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_11(Global_114370.f_2366.f_539.f_4321))
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

bool func_11(int iParam0)
{
	return iParam0 < 3;
}

int func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_13(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_13(int iParam0)
{
	if (func_11(iParam0))
	{
		return func_14(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_14(int iParam0)
{
	return Global_2139[iParam0 /*29*/];
}

void func_15()
{
	bLocal_31 = false;
	bLocal_32 = false;
	iLocal_33 = 0;
	iLocal_34 = 0;
	iLocal_35 = 0;
	iLocal_25 = 0;
}

int func_16()
{
	if (bLocal_36)
	{
		if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > -0.6f && ENTITY::GET_ENTITY_UPRIGHT_VALUE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 0.6f)
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_17()
{
	if ((MISC::GET_GAME_TIMER() - iLocal_266) > 500)
	{
		if (bLocal_29 == 29)
		{
			if (BitTest(Global_114370.f_10052.f_96, bLocal_29))
			{
				bLocal_265 = true;
			}
		}
		iLocal_266 = MISC::GET_GAME_TIMER();
	}
}

void func_18()
{
	switch (iLocal_26)
	{
		case 0:
			if (iLocal_27 && !bLocal_265)
			{
				if (!func_24())
				{
					iLocal_28 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_28))
					{
						SYSTEM::WAIT(0);
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_28, "SHOW_BRIDGES_KNIVES_PROGRESS");
					if (bLocal_36)
					{
						func_23("FU_KNIFE");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15);
					}
					else
					{
						func_23("FU_TITLE");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(50);
					}
					func_23("FU_PASS");
					if (bLocal_36)
					{
						func_23("FU_CHALL_KN");
					}
					else
					{
						func_23("FU_CHALLENGE");
					}
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_31());
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_30 = func_31();
					Global_33064 = iLocal_30;
					SYSTEM::SETTIMERB(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
				}
				iLocal_26 = 1;
			}
			break;
		
		case 1:
			if ((((((SYSTEM::TIMERB() > 3750 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_24()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_22()) || func_21())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_28, "SHARD_ANIM_OUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				SYSTEM::SETTIMERB(0);
				iLocal_26 = 2;
			}
			else
			{
				func_20();
				if (Global_33064 > iLocal_30)
				{
					iLocal_26 = 3;
				}
			}
			break;
		
		case 2:
			if ((((((SYSTEM::TIMERB() > 500 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_24()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_22()) || func_21())
			{
				iLocal_26 = 3;
			}
			else
			{
				func_20();
				if (Global_33064 > iLocal_30)
				{
					iLocal_26 = 3;
				}
			}
			break;
		
		case 3:
			func_19();
			iLocal_27 = 0;
			func_27();
			bLocal_265 = true;
			iLocal_26 = 0;
			break;
	}
}

void func_19()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_28))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_28);
	}
}

void func_20()
{
	if (!func_24())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_28))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_28, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}

int func_21()
{
	if (Global_43922 == 9 || Global_43922 == 10)
	{
		return Global_113019;
	}
	Global_113019 = 0;
	return 0;
}

int func_22()
{
	if (((Global_101392 == 13 || Global_101392 == 10) || Global_101392 == 11) || Global_101392 == 12)
	{
		return 0;
	}
	return 1;
}

void func_23(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_24()
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

void func_25()
{
}

void func_26()
{
}

void func_27()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (func_29(Local_262, Local_37[iVar0 /*3*/], 1056964608, 0))
		{
			if (iVar0 == 65 || iVar0 == 66)
			{
				fLocal_248 = 490000f;
				bLocal_29 = 29;
			}
			else
			{
				bLocal_29 = iVar0;
			}
		}
		iVar0++;
	}
	if (bLocal_29 < 32)
	{
		if (BitTest(Global_114370.f_10052.f_96, bLocal_29))
		{
			bLocal_265 = true;
		}
	}
	else if (bLocal_29 < 64)
	{
		if (BitTest(Global_114370.f_10052.f_97, (bLocal_29 - 32)))
		{
			bLocal_265 = true;
		}
	}
	else if (BitTest(Global_114370.f_10052.f_98, (bLocal_29 - 64)))
	{
		bLocal_265 = true;
	}
	if (bLocal_265)
	{
	}
	else
	{
		func_28(bLocal_29);
	}
}

void func_28(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			Local_249 = { 1103.014f, -233.0374f, 56.13004f };
			Local_252 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_261 = 30f;
			Local_255 = { 1093.589f, -248.5926f, 56.88639f };
			Local_258 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_249 = { 1044.182f, -324.5904f, 49.33408f };
			Local_252 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_261 = 30f;
			Local_255 = { 1007.983f, -320.6159f, 48.4543f };
			Local_258 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_249 = { 916.599f, -419.8782f, 35.62748f };
			Local_252 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_261 = 7f;
			Local_255 = { 912.1362f, -420.5161f, 35.38034f };
			Local_258 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_249 = { 757.7189f, -472.924f, 19.2535f };
			Local_252 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_261 = 20.75f;
			Local_255 = { 744.9114f, -480.7373f, 19.06514f };
			Local_258 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_249 = { 680.3677f, -581.1792f, 14.2145f };
			Local_252 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_261 = 45f;
			Local_255 = { 667.3692f, -610.5356f, 13.85401f };
			Local_258 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_249 = { 644.2497f, -844.7504f, 12.36707f };
			Local_252 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_261 = 25f;
			Local_255 = { 644.3659f, -859.3878f, 12.59677f };
			Local_258 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_249 = { 634.972f, -1011.64f, 10.92594f };
			Local_252 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_261 = 25f;
			Local_255 = { 634.9612f, -1029.123f, 10.61846f };
			Local_258 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_249 = { 645.7223f, -1191.215f, 10.45198f };
			Local_252 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_261 = 50f;
			Local_255 = { 645.7223f, -1228.966f, 10.98015f };
			Local_258 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_249 = { 642.1216f, -1295.73f, 9.005976f };
			Local_252 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_261 = 7f;
			Local_255 = { 644.7772f, -1298.168f, 9.128529f };
			Local_258 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_249 = { 686.5675f, -1444.71f, 9.065001f };
			Local_252 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_261 = 25f;
			Local_255 = { 682.3027f, -1429.872f, 9.890836f };
			Local_258 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_249 = { 718.7617f, -1734.313f, 9.082874f };
			Local_252 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_261 = 30f;
			Local_255 = { 717.5355f, -1748.646f, 9.363478f };
			Local_258 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_249 = { 694.3165f, -2049.806f, 0.009695f };
			Local_252 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_261 = 30f;
			Local_255 = { 693.1836f, -2063.225f, 0.429037f };
			Local_258 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_249 = { 642.6671f, -2494.551f, 0.468485f };
			Local_252 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_261 = 20f;
			Local_255 = { 647.0339f, -2506.202f, 0.583701f };
			Local_258 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_249 = { 691.8235f, -2558.219f, 0.363352f };
			Local_252 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_261 = 10.25f;
			Local_255 = { 695.7928f, -2561.034f, 0.346731f };
			Local_258 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_249 = { 723.6254f, -2562.171f, 0.255647f };
			Local_252 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_261 = 20f;
			Local_255 = { 735.765f, -2561.935f, 0.311182f };
			Local_258 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_249 = { 891.4387f, -2603.12f, 0f };
			Local_252 = { 704.4932f, -2634.793f, 45f };
			fLocal_261 = 20f;
			Local_255 = { 893.2578f, -2616.235f, 0f };
			Local_258 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_249 = { -2669.587f, 2491.96f, 2.043799f };
			Local_252 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_261 = 26.5f;
			Local_255 = { -2687.606f, 2494.868f, 2.608733f };
			Local_258 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_249 = { -1986.173f, 4521.799f, 0f };
			Local_252 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_261 = 17f;
			Local_255 = { -1995.668f, 4531.259f, 0f };
			Local_258 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_249 = { -526.0265f, 4472.442f, 0f };
			Local_252 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_261 = 10f;
			Local_255 = { -519.9281f, 4476.346f, 0f };
			Local_258 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_249 = { 98.1615f, 3384.489f, 45.45169f };
			Local_252 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_261 = 8f;
			Local_255 = { 152.6802f, 3346.793f, 45.02156f };
			Local_258 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_249 = { 147.8606f, 3406.796f, 38.03672f };
			Local_252 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_261 = 14.5f;
			Local_255 = { 130.0916f, 3425.417f, 38.05672f };
			Local_258 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_249 = { 2830.972f, 4967.14f, 34.56013f };
			Local_252 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_261 = 10f;
			Local_255 = { 2826.767f, 4964.185f, 34.10636f };
			Local_258 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_249 = { -151.5764f, 4264.417f, 31.04735f };
			Local_252 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_261 = 10f;
			Local_255 = { -148.3842f, 4261.071f, 31.57409f };
			Local_258 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_249 = { -426.6919f, 2964.272f, 14.848f };
			Local_252 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_261 = 7f;
			Local_255 = { -425.0283f, 2967.861f, 15.22699f };
			Local_258 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_249 = { -192.3414f, 2864.916f, 30.72595f };
			Local_252 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_261 = 10f;
			Local_255 = { -192.0129f, 2871.603f, 29.99943f };
			Local_258 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_249 = { 2539.185f, 2228.772f, 18.6102f };
			Local_252 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_261 = 10f;
			Local_255 = { 2543.708f, 2231.402f, 18.331f };
			Local_258 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_249 = { 2954.087f, 815.7209f, 0.037901f };
			Local_252 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_261 = 35f;
			Local_255 = { 2966.123f, 806.8889f, 0.544056f };
			Local_258 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_249 = { 2329.673f, -459.6648f, 70.24277f };
			Local_252 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_261 = 12f;
			Local_255 = { 2324.752f, -455.5238f, 70.25145f };
			Local_258 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_249 = { 1943.428f, -753.251f, 80.17905f };
			Local_252 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_261 = 7f;
			Local_255 = { 1943.366f, -758.287f, 80.32291f };
			Local_258 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_249 = { -655.1467f, -2138.094f, -0.339008f };
			Local_252 = { -146.0279f, -2493.724f, 54.67567f };
			fLocal_261 = 47.75f;
			Local_255 = { -672.2213f, -2162.675f, -0.082912f };
			Local_258 = { -163.5556f, -2519.058f, 54.72249f };
			break;
		
		case 30:
			Local_249 = { -1483f, 2691.428f, -10f };
			Local_252 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_261 = 12f;
			Local_255 = { -1478.152f, 2696.688f, -10f };
			Local_258 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_249 = { 222.1519f, -2343.487f, 0.039199f };
			Local_252 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_261 = 12f;
			Local_255 = { 216.959f, -2343.487f, 0.207734f };
			Local_258 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_249 = { 346.4622f, -2244.374f, 0.159779f };
			Local_252 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_261 = 20f;
			Local_255 = { 359.609f, -2244.468f, 0.129684f };
			Local_258 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_249 = { -1859.68f, -322.6357f, 56.16368f };
			Local_252 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_261 = 7.5f;
			Local_255 = { -1860.27f, -327.8634f, 57.543f };
			Local_258 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_249 = { -680.2632f, -600.818f, 69.11289f };
			Local_252 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_261 = 31.5f;
			Local_255 = { -680.6077f, -618.3658f, 69.27496f };
			Local_258 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_249 = { -1468.096f, -591.7158f, 67.05518f };
			Local_252 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_261 = 11.75f;
			Local_255 = { -1474.903f, -591.1215f, 67.08091f };
			Local_258 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_249 = { -1544.958f, -537.1475f, 72.44347f };
			Local_252 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_261 = 11.75f;
			Local_255 = { -1541.008f, -541.5494f, 71.61972f };
			Local_258 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_249 = { 333.2108f, -2727.274f, 20.71663f };
			Local_252 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_261 = 20f;
			Local_255 = { 343.1127f, -2727.236f, 20.23613f };
			Local_258 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_249 = { 1928.071f, 6228.355f, 43.49398f };
			Local_252 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_261 = 13f;
			Local_255 = { 1931.82f, 6235.634f, 43.37382f };
			Local_258 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_249 = { -736.4309f, -1590.921f, 10.80892f };
			Local_252 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_261 = 15f;
			Local_255 = { -727.2307f, -1585.221f, 11.78027f };
			Local_258 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_249 = { -686.3775f, -1548.553f, 12.33747f };
			Local_252 = { -669.329f, -1507.063f, -0.788618f };
			fLocal_261 = 25f;
			Local_255 = { -654.203f, -1536.146f, 9.191055f };
			Local_258 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_249 = { -624.2344f, -1537.045f, 12.60193f };
			Local_252 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_261 = 8f;
			Local_255 = { -615.4003f, -1536.65f, 12.40271f };
			Local_258 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_249 = { -492.5057f, -1632.457f, 24.3307f };
			Local_252 = { -418.2088f, -1487.452f, 0f };
			fLocal_261 = 25f;
			Local_255 = { -486.2016f, -1636.095f, 24.20805f };
			Local_258 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_249 = { -359.3541f, -1639.693f, 13.13455f };
			Local_252 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_261 = 25f;
			Local_255 = { -378.1518f, -1705.66f, 12.47196f };
			Local_258 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_249 = { -243.4436f, -1814.623f, 25.69465f };
			Local_252 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_261 = 25f;
			Local_255 = { -235.1319f, -1822.094f, 25.86542f };
			Local_258 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_249 = { 84.55537f, -2046.159f, 13.30767f };
			Local_252 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_261 = 25f;
			Local_255 = { 17.90788f, -2035.773f, 12.62706f };
			Local_258 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_249 = { -3064.973f, 780.1677f, 18.70642f };
			Local_252 = { -3093.958f, 757.2886f, 29.19696f };
			fLocal_261 = 5f;
			Local_255 = { -3063.054f, 778.0165f, 18.67167f };
			Local_258 = { -3092.175f, 754.9156f, 29.1458f };
			break;
		
		case 47:
			Local_249 = { -1471.517f, 2406.815f, 2.485338f };
			Local_252 = { -1489.422f, 2404.39f, 21.76938f };
			fLocal_261 = 15f;
			Local_255 = { -1468.889f, 2400.668f, 2.60396f };
			Local_258 = { -1487.055f, 2398.087f, 21.83768f };
			break;
		
		case 48:
			Local_249 = { 2326.57f, 1096.031f, 76.31458f };
			Local_252 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_261 = 21f;
			Local_255 = { 2334.453f, 1103.067f, 76.26603f };
			Local_258 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_249 = { 2379.442f, 1150.776f, 58.79632f };
			Local_252 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_261 = 12f;
			Local_255 = { 2374.064f, 1146.282f, 58.83331f };
			Local_258 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_249 = { -1179.405f, -355.2554f, 56.53003f };
			Local_252 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_261 = 12.5f;
			Local_255 = { -1178.385f, -361.8784f, 56.15081f };
			Local_258 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_249 = { -921.3846f, -384.94f, 137.0181f };
			Local_252 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_261 = 16f;
			Local_255 = { -914.1658f, -387.9444f, 137.0794f };
			Local_258 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_249 = { -740.2564f, 246.4529f, 132.2922f };
			Local_252 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_261 = 20f;
			Local_255 = { -726.6429f, 253.0676f, 132.3319f };
			Local_258 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_249 = { -771.2068f, 268.2729f, 132.1689f };
			Local_252 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_261 = 16f;
			Local_255 = { -770.8035f, 310.8625f, 137.4161f };
			Local_258 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_249 = { 259.2205f, 135.4146f, 136.7083f };
			Local_252 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_261 = 16f;
			Local_255 = { 261.9694f, 142.9676f, 136.6889f };
			Local_258 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_249 = { 393.548f, -30.87166f, 152.6635f };
			Local_252 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_261 = 8f;
			Local_255 = { 390.5358f, -36.08882f, 152.7813f };
			Local_258 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_249 = { 114.3139f, -648.4297f, 261.8488f };
			Local_252 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_261 = 20f;
			Local_255 = { 124.8467f, -646.6575f, 261.8488f };
			Local_258 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_249 = { -215.919f, -823.8436f, 126.0224f };
			Local_252 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_261 = 20f;
			Local_255 = { -225.397f, -820.3937f, 126.0812f };
			Local_258 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_249 = { -296.4725f, -802.0815f, 95.40108f };
			Local_252 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_261 = 20f;
			Local_255 = { -305.4602f, -798.8369f, 95.48194f };
			Local_258 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_249 = { -292.3034f, -823.3569f, 95.37621f };
			Local_252 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_261 = 20f;
			Local_255 = { -288.9206f, -814.022f, 95.37556f };
			Local_258 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_249 = { -256.3589f, -714.7838f, 110.1617f };
			Local_252 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_261 = 20f;
			Local_255 = { -253.7723f, -705.6632f, 110.1736f };
			Local_258 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_249 = { 1808.214f, 1949.246f, 71.73707f };
			Local_252 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_261 = 9.75f;
			Local_255 = { 1802.786f, 1950.262f, 71.74002f };
			Local_258 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_249 = { 2388.733f, 2931.941f, 46.62681f };
			Local_252 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_261 = 10f;
			Local_255 = { 2392.547f, 2934.867f, 46.6268f };
			Local_258 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_249 = { 2700.056f, 4836.381f, 42.07854f };
			Local_252 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_261 = 20.75f;
			Local_255 = { 2685.672f, 4821.653f, 42.18471f };
			Local_258 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_249 = { -1053.446f, 4766.245f, 234.3251f };
			Local_252 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_261 = 5f;
			Local_255 = { -1051.414f, 4767.193f, 234.4293f };
			Local_258 = { -1037.954f, 4738.354f, 204.5282f };
			break;
		
		case 67:
			Local_249 = { 1001.145f, -987.1138f, 42.62456f };
			Local_252 = { 1078.645f, -963.7435f, 28.93338f };
			fLocal_261 = 14f;
			Local_255 = { 1002.864f, -992.8986f, 42.62456f };
			Local_258 = { 1080.484f, -969.9034f, 28.88377f };
			break;
		
		case 68:
			Local_249 = { 952.5042f, -847.6615f, 43.01844f };
			Local_252 = { 1021.093f, -844.5063f, 29.71967f };
			fLocal_261 = 20f;
			Local_255 = { 945.5494f, -835.9777f, 43.15658f };
			Local_258 = { 1016.364f, -835.3861f, 29.7297f };
			break;
		
		case 69:
			Local_249 = { 1212.477f, -1183.013f, 46.4739f };
			Local_252 = { 1267.189f, -1161.997f, 32.48297f };
			fLocal_261 = 40f;
			Local_255 = { 1206.01f, -1157.063f, 47.93699f };
			Local_258 = { 1258.374f, -1140.68f, 32.42903f };
			break;
	}
}

int func_29(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

void func_30()
{
	Local_37[0 /*3*/] = { 1083f, -231f, 60f };
	Local_37[1 /*3*/] = { 1024f, -325f, 60f };
	Local_37[2 /*3*/] = { 910f, -401f, 43f };
	Local_37[3 /*3*/] = { 721f, -457f, 26f };
	Local_37[4 /*3*/] = { 643f, -579f, 26f };
	Local_37[5 /*3*/] = { 590f, -851f, 26f };
	Local_37[6 /*3*/] = { 590f, -1023f, 16f };
	Local_37[7 /*3*/] = { 582f, -1205f, 24f };
	Local_37[8 /*3*/] = { 608f, -1335f, 16f };
	Local_37[9 /*3*/] = { 640f, -1434f, 16f };
	Local_37[10 /*3*/] = { 671f, -1742f, 20f };
	Local_37[11 /*3*/] = { 651f, -2046f, 16f };
	Local_37[12 /*3*/] = { 603f, -2505f, 9f };
	Local_37[13 /*3*/] = { 673f, -2582f, 4f };
	Local_37[14 /*3*/] = { 728f, -2594f, 10f };
	Local_37[15 /*3*/] = { 794f, -2624f, 27f };
	Local_37[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_37[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_37[18 /*3*/] = { -513f, 4427f, 40f };
	Local_37[19 /*3*/] = { 126f, 3366f, 40f };
	Local_37[20 /*3*/] = { 143f, 3418f, 36f };
	Local_37[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_37[22 /*3*/] = { -162f, 4249f, 40f };
	Local_37[23 /*3*/] = { -408f, 2964f, 20f };
	Local_37[24 /*3*/] = { -181f, 2862f, 38f };
	Local_37[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_37[26 /*3*/] = { 2950f, 803f, 8f };
	Local_37[27 /*3*/] = { 2369f, -409f, 80f };
	Local_37[28 /*3*/] = { 1906f, -755f, 84f };
	Local_37[29 /*3*/] = { -403f, -2333f, 40f };
	Local_37[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_37[31 /*3*/] = { 219f, -2315f, 5f };
	Local_37[32 /*3*/] = { 350f, -2315f, 5f };
	Local_37[33 /*3*/] = { -1848f, -333f, 75f };
	Local_37[34 /*3*/] = { -693f, -608f, 69f };
	Local_37[35 /*3*/] = { -1461f, -582f, 53f };
	Local_37[36 /*3*/] = { -1553f, -546f, 59f };
	Local_37[37 /*3*/] = { 338f, -2758f, 23f };
	Local_37[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_37[39 /*3*/] = { -713f, -1538f, 13f };
	Local_37[40 /*3*/] = { -659f, -1518f, 13f };
	Local_37[41 /*3*/] = { -620f, -1502f, 16f };
	Local_37[42 /*3*/] = { -445f, -1575f, 26f };
	Local_37[43 /*3*/] = { -373f, -1680f, 19f };
	Local_37[44 /*3*/] = { -212f, -1805f, 29f };
	Local_37[45 /*3*/] = { 47f, -2040f, 18f };
	Local_37[46 /*3*/] = { -3080f, 766f, 25f };
	Local_37[47 /*3*/] = { -1478f, 2400f, 20f };
	Local_37[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_37[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_37[50 /*3*/] = { -1186f, -365f, 46f };
	Local_37[51 /*3*/] = { -916f, -407f, 93f };
	Local_37[52 /*3*/] = { -726f, 235f, 105f };
	Local_37[53 /*3*/] = { -774f, 286f, 112f };
	Local_37[54 /*3*/] = { 271f, 134f, 125f };
	Local_37[55 /*3*/] = { 377f, -28f, 125f };
	Local_37[56 /*3*/] = { 121f, -703f, 150f };
	Local_37[57 /*3*/] = { -204f, -784f, 74f };
	Local_37[58 /*3*/] = { -287f, -774f, 72f };
	Local_37[59 /*3*/] = { -272f, -824f, 71f };
	Local_37[60 /*3*/] = { -230f, -723f, 80f };
	Local_37[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_37[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_37[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_37[64 /*3*/] = { -1046f, 4751f, 244f };
	Local_37[65 /*3*/] = { -213f, -2463f, 38f };
	Local_37[66 /*3*/] = { -597f, -2192f, 38f };
	Local_37[67 /*3*/] = { 1036f, -980f, 41f };
	Local_37[68 /*3*/] = { 980f, -837f, 42f };
	Local_37[69 /*3*/] = { 1208f, -1173f, 38f };
}

int func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_52();
	iVar1 = func_50();
	if ((iVar2 + iVar1) > 0)
	{
		func_49(32, (iVar2 + iVar1));
	}
	if (bLocal_36)
	{
		iVar0 = iVar1;
		if (iVar1 >= 8)
		{
			func_45(291, 0, 0);
		}
	}
	else
	{
		iVar0 = iVar2;
		if (iVar2 >= 50)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("sp0_water_cannon_deaths"), 100, 0);
		}
		else if (iVar2 >= 38)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("sp0_water_cannon_deaths"), 75, 0);
		}
		else if (iVar2 >= 25)
		{
			func_45(290, 0, 0);
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("sp0_water_cannon_deaths"), 50, 0);
		}
		else if (iVar2 >= 13)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("sp0_water_cannon_deaths"), 25, 0);
		}
	}
	if (iVar1 == 15 && iVar2 == 50)
	{
		func_32(32, 1);
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_33(iParam0, iParam1);
}

int func_33(int iParam0, int iParam1)
{
	if (func_54(14) && !func_44(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33079 != 0 && !Global_79248)
	{
		return 0;
	}
	if (func_43(&Global_4543283))
	{
		if (func_41(&Global_4543283, iParam0))
		{
			return 0;
		}
		if (func_34(&Global_4543283, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_34(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_54(14) && !func_44(iParam1))
	{
		return 0;
	}
	if (func_41(uParam0, iParam1))
	{
		return 0;
	}
	if (func_40(uParam0) < 0f)
	{
		func_39(uParam0, 0);
	}
	func_37(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_35(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_54(14) && !func_44(iParam1))
	{
		return 0;
	}
	if (func_41(uParam0, iParam1))
	{
		return 0;
	}
	if (func_40(uParam0) < 0f)
	{
		func_39(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_36(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_36(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_37(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_38(uParam0, iVar0);
		iVar0++;
	}
	func_39(uParam0, (Global_4543282 - 0.5f));
}

void func_38(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_39(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_40(var uParam0)
{
	return uParam0->f_80;
}

bool func_41(var uParam0, int iParam1)
{
	return func_42(uParam0, iParam1) != -1;
}

int func_42(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_43(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_45(int iParam0, int iParam1, int iParam2)
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
		func_48((891 + iParam0), 1, -1);
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
		Global_114370.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_114370.f_10197[iParam0 /*12*/].f_11 = iParam2;
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
		func_46();
	}
}

void func_46()
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
		func_49(13, SYSTEM::FLOOR(Global_114370.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79248)
		{
			if (func_47() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_114104 = 0;
				}
				if (!Global_64038)
				{
					func_2();
				}
			}
		}
	}
}

int func_47()
{
	return Global_32828;
}

void func_48(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_7();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_49(int iParam0, int iParam1)
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

int func_50()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (BitTest(Global_114370.f_10052.f_96, bVar1))
		{
			if (func_51(bVar1))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_114370.f_10052.f_97, bVar1))
		{
			if (func_51(bVar1 + 32))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_114370.f_10052.f_98, bVar1))
		{
			if (func_51(bVar1 + 64))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int func_51(bool bParam0)
{
	switch (bParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
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
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_52()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (BitTest(Global_114370.f_10052.f_96, bVar1))
		{
			if (!func_51(bVar1))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_114370.f_10052.f_97, bVar1))
		{
			if (!func_51(bVar1 + 32))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_114370.f_10052.f_98, bVar1))
		{
			if (!func_51(bVar1 + 64))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int func_53(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

bool func_54(int iParam0)
{
	return Global_43922 == iParam0;
}

