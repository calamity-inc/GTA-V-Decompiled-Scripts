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
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	struct<8> Local_40 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	struct<11> Local_53[50];
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	bool bLocal_606 = 0;
	int* iLocal_607 = NULL;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	bLocal_38 = true;
	bLocal_39 = true;
	iLocal_604 = 15;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_53();
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("spaceshipparts")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_52(14);
	func_50();
	func_49(&Local_40, 0, joaat("prop_power_cell"), "SSHIP_COLLECT");
	func_47(&Local_40, joaat("num_hidden_packages_1"), 755, 50);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_46(PLAYER::PLAYER_PED_ID());
		if (func_16(&Local_40, &Local_53) || func_15(107) == 1)
		{
			if (!bLocal_606)
			{
				bLocal_606 = func_11(367701416, 1, 2, 69, 5000, 10000, -1, 179, -1, 32, 1);
			}
			if (bLocal_606)
			{
				if (!func_4() == 1)
				{
					func_1("SSHIP_SWITCH", 1, 0, 20000, 10000, 3, 0, 0, 0);
				}
				func_53();
			}
		}
	}
}

void func_1(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_2(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_2(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
	while (iVar0 < Global_114135.f_20414.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_114135.f_20414[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_114135.f_20414.f_145 < 9)
	{
		StringCopy(&(Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_4), sParam1, 16);
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_9 = iParam5;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_11 = iParam6;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_12 = uParam2;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_13 = iParam7;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_14 = iParam8;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_10 = -1;
		}
		Global_114135.f_20414.f_145++;
		func_3();
	}
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_114135.f_20414.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114135.f_20414.f_145)
	{
		if (BitTest(Global_114135.f_20414[iVar0 /*16*/].f_11, 0))
		{
			if (Global_114135.f_20414[iVar0 /*16*/].f_12 > Global_114135.f_20414.f_146[0])
			{
				Global_114135.f_20414.f_146[0] = Global_114135.f_20414[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114135.f_20414[iVar0 /*16*/].f_11, 1))
		{
			if (Global_114135.f_20414[iVar0 /*16*/].f_12 > Global_114135.f_20414.f_146[1])
			{
				Global_114135.f_20414.f_146[1] = Global_114135.f_20414[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114135.f_20414[iVar0 /*16*/].f_11, 2))
		{
			if (Global_114135.f_20414[iVar0 /*16*/].f_12 > Global_114135.f_20414.f_146[2])
			{
				Global_114135.f_20414.f_146[2] = Global_114135.f_20414[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_4()
{
	func_5();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_5()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_9(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_8(PLAYER::PLAYER_PED_ID());
			if (func_7(iVar0) && (!func_6(14) || Global_113083))
			{
				if (Global_114135.f_2367.f_539.f_4321 != iVar0 && func_7(Global_114135.f_2367.f_539.f_4321))
				{
					Global_114135.f_2367.f_539.f_4322 = Global_114135.f_2367.f_539.f_4321;
				}
				Global_114135.f_2367.f_539.f_4323 = iVar0;
				Global_114135.f_2367.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_4321 != 145)
			{
				Global_114135.f_2367.f_539.f_4323 = Global_114135.f_2367.f_539.f_4321;
			}
			return;
		}
	}
	Global_114135.f_2367.f_539.f_4321 = 145;
}

bool func_6(int iParam0)
{
	return Global_44181 == iParam0;
}

bool func_7(int iParam0)
{
	return iParam0 < 3;
}

int func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_9(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_9(int iParam0)
{
	if (func_7(iParam0))
	{
		return func_10(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_10(int iParam0)
{
	return Global_2201[iParam0 /*29*/];
}

int func_11(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<14> Var0;
	
	if (func_14(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (BitTest(iParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_114135.f_7692.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_13(iParam1);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = bParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_13 = iParam10;
		MISC::CLEAR_BIT(&(Var0.f_1), false);
		Global_114135.f_7692.f_651[Global_114135.f_7692.f_764 /*14*/] = { Var0 };
		Global_114135.f_7692.f_764++;
		func_12(0);
		func_12(1);
		func_12(2);
		return 1;
	}
	return 0;
}

void func_12(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_7(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_114135.f_7692.f_136)
	{
		if (BitTest(Global_114135.f_7692[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_114135.f_7692[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_114135.f_7692[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_114135.f_7692.f_764)
	{
		if (BitTest(Global_114135.f_7692.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_114135.f_7692.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_114135.f_7692.f_919[bParam0] = iVar1;
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_14(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79788, 0);
}

int func_15(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114135.f_9089.f_99.f_58[iParam0];
}

int func_16(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	
	if (!func_6(14) && !CAM::IS_SCREEN_FADED_OUT())
	{
		PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		iVar0 = 0;
		while (iVar0 < 1)
		{
			bVar1 = func_45(&(uParam0->f_1), uParam0->f_10);
			if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
			{
				if (!bVar1)
				{
					if (uParam0->f_10 == iLocal_604)
					{
						func_43(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 1, 0, 2);
						if (OBJECT::DOES_PICKUP_EXIST((iParam1[uParam0->f_10 /*11*/])->f_1))
						{
							INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME((iParam1[uParam0->f_10 /*11*/])->f_1, "GtaMloRoomTun5");
						}
					}
					else if ((((uParam0->f_10 == 6 || uParam0->f_10 == 14) || uParam0->f_10 == 21) || uParam0->f_10 == 34) || uParam0->f_10 == 39)
					{
						func_43(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
					}
					else
					{
						func_43(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
					}
				}
			}
			else if (!bVar1)
			{
				func_26(uParam0, iParam1, Var2);
			}
			uParam0->f_10++;
			if (uParam0->f_10 >= *iParam1)
			{
				uParam0->f_10 = 0;
			}
			iVar0++;
		}
		if (!Global_79800)
		{
			func_17(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 0, &iLocal_605, &iLocal_607, "SSHIP_TITLE", "SSHIP_COLLECT");
		}
		if (!bLocal_606)
		{
			if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
			{
				bLocal_606 = func_11(367701416, 1, 2, 69, 5000, 10000, -1, 179, -1, 32, 1);
			}
		}
		if (!uParam0->f_12 && !uParam0->f_11)
		{
			return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
		}
	}
	return 0;
}

void func_17(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int* iParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_25(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*iParam5 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
				{
					iVar0 = AUDIO::GET_SOUND_ID();
					if (iParam3 == 6)
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", true);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "COLLECTED", "HUD_AWARDS", true);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam6);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
				HUD::ADD_TEXT_COMPONENT_INTEGER(func_19(iParam3));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*uParam2 = MISC::GET_GAME_TIMER();
				*iParam4++;
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7000)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam5, "SHARD_ANIM_OUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					*iParam4++;
				}
				else if (!func_18())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
					{
						func_25(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_18())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
					{
						func_25(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam5);
				}
				func_25(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_18()
{
	if (Global_79800)
	{
		return 1;
	}
	else if (Global_64302 && !Global_64308)
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_24(iParam0))
		{
			if (BitTest(Global_114135.f_10053.f_108, func_23(func_24(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		STATS::STAT_GET_INT(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		STATS::STAT_GET_INT(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		STATS::STAT_GET_INT(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_24(iParam0))
		{
			iVar2 = (func_22(iParam0) + iVar1);
			if (func_20(iVar2, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_20(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_21()
{
	return Global_1574926;
}

int func_22(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_23(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_24(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_25(int iParam0)
{
	if (Global_79807 != iParam0)
	{
		Global_79807 = iParam0;
	}
}

int func_26(var uParam0, var uParam1, struct<3> Param2)
{
	bool bVar0;
	
	bVar0 = uParam0->f_10;
	if ((uParam1[bVar0 /*11*/])->f_10)
	{
		if ((uParam1[bVar0 /*11*/])->f_1 != 0)
		{
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED((uParam1[bVar0 /*11*/])->f_1) || func_41((uParam1[bVar0 /*11*/])->f_1))
			{
				func_28(uParam0, uParam1, bVar0);
				return 1;
			}
		}
	}
	if (OBJECT::DOES_PICKUP_EXIST((uParam1[bVar0 /*11*/])->f_1))
	{
		if ((SYSTEM::VDIST2(Param2, OBJECT::GET_PICKUP_COORDS((uParam1[bVar0 /*11*/])->f_1)) > (60f * 60f) || func_6(13)) || func_6(14))
		{
			func_27(&((uParam1[bVar0 /*11*/])->f_1));
			(uParam1[bVar0 /*11*/])->f_1 = 0;
			(uParam1[bVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_27(var uParam0)
{
	if (OBJECT::DOES_PICKUP_EXIST(*uParam0))
	{
		OBJECT::REMOVE_PICKUP(*uParam0);
	}
}

void func_28(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = (func_22(*uParam0) + bParam2);
	func_27(&((uParam1[bParam2 /*11*/])->f_1));
	func_40(&((uParam1[bParam2 /*11*/])->f_2));
	(uParam1[bParam2 /*11*/])->f_1 = 0;
	(uParam1[bParam2 /*11*/])->f_10 = 0;
	func_39(&(uParam0->f_1), bParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_38(*uParam0, bParam2, 1);
	}
	PAD::SET_CONTROL_SHAKE(0, 200, 250);
	STATS::STAT_INCREMENT(uParam0->f_6, 1f);
	if (bLocal_39)
	{
		func_37(&(uParam0->f_1), bParam2);
	}
	else
	{
		func_34(&(uParam0->f_1));
	}
	func_31();
	STATS::PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(iVar0);
	func_30(1, 0);
	func_29();
	uParam0->f_11 = 1;
}

int func_29()
{
	if (func_14(0))
	{
		return 0;
	}
	if (Global_101727.f_8)
	{
		if (Global_101727.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101727.f_10 > 1)
	{
		return 0;
	}
	Global_101727.f_10++;
	return 1;
}

void func_30(int iParam0, int iParam1)
{
	Global_101727.f_7 = iParam0;
	Global_101727.f_8 = iParam1;
}

void func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	STATS::STAT_GET_INT(func_33(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_32(18, iVar0);
	}
	STATS::STAT_GET_INT(func_33(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_32(19, iVar0);
	}
	STATS::STAT_GET_INT(func_33(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_32(20, iVar0);
	}
	iVar2 = ((func_24(0) + func_24(1)) + func_24(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	STATS::STAT_SET_INT(joaat("percent_hidden_packages"), iVar3, true);
}

int func_32(int iParam0, int iParam1)
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

int func_33(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_38)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_45(uParam0, iVar0))
		{
			iVar1++;
			func_36((uParam0->f_2 + iVar0), 1, -1);
			if (bLocal_38)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_38)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_35(168, 0);
	}
}

void func_35(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_114135.f_8617[iParam0] = 1;
	Global_114135.f_8617.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_36(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_37(var uParam0, bool bParam1)
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_38)
	{
	}
	if (bParam1 >= uParam0->f_3)
	{
	}
	if (func_45(uParam0, bParam1))
	{
		uParam0->f_4++;
		func_36((uParam0->f_2 + bParam1), 1, -1);
		if (bLocal_38)
		{
		}
	}
	if (bLocal_38)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_35(168, 0);
	}
}

void func_38(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 < 0 || bParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (bParam1 <= 31)
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_122), bParam1);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_114135.f_10053.f_122), bParam1);
			}
			return;
		}
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_114135.f_10053.f_122.f_1), (bParam1 - 32));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_114135.f_10053.f_122.f_1), (bParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (bParam1 <= 31)
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_125), bParam1);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_114135.f_10053.f_125), bParam1);
			}
			return;
		}
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_114135.f_10053.f_125.f_1), (bParam1 - 32));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_114135.f_10053.f_125.f_1), (bParam1 - 32));
		}
	}
}

void func_39(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 < 0 || bParam1 >= 64)
	{
		return;
	}
	if (bParam1 <= 31)
	{
		if (bParam2)
		{
			MISC::SET_BIT(iParam0, bParam1);
		}
		else
		{
			MISC::CLEAR_BIT(iParam0, bParam1);
		}
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(iParam0->f_1), (bParam1 - 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(iParam0->f_1), (bParam1 - 32));
	}
}

void func_40(int* iParam0)
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

int func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	if (func_42(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(iParam0)) < (5f * 5f) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_OBJECT(iParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_42(int iParam0)
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

void func_43(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (!uParam0->f_10)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_6(13) && !func_6(14))
			{
				if (!OBJECT::DOES_PICKUP_EXIST(uParam0->f_1))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_3) <= (50f * 50f))
					{
						STREAMING::REQUEST_MODEL(iParam1);
						while (!STREAMING::HAS_MODEL_LOADED(iParam1))
						{
							STREAMING::REQUEST_MODEL(iParam1);
							SYSTEM::WAIT(0);
						}
						if (bParam3)
						{
							func_44(uParam0->f_3);
						}
						MISC::CLEAR_AREA(uParam0->f_3, 2.5f, false, false, false, false);
						if (bParam4)
						{
							MISC::SET_BIT(&iVar0, true);
							uParam0->f_1 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, iVar0, -1, iParam5, true, iParam1);
						}
						else
						{
							MISC::SET_BIT(&iVar0, 3);
							MISC::SET_BIT(&iVar0, 4);
							MISC::SET_BIT(&iVar0, 8);
							MISC::SET_BIT(&iVar0, true);
							uParam0->f_1 = OBJECT::CREATE_PICKUP(iParam2, uParam0->f_3, iVar0, -1, true, iParam1);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
					}
				}
			}
			if (OBJECT::DOES_PICKUP_EXIST(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_44(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar0);
		while (!INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::WAIT(0);
		INTERIOR::UNPIN_INTERIOR(iVar0);
	}
}

int func_45(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return BitTest(*uParam0, iParam1);
	}
	return BitTest(uParam0->f_1, (iParam1 - 32));
}

bool func_46(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

void func_47(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_48(&(uParam0->f_1), iParam2, iParam3);
}

void func_48(int* iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = uParam1;
	iParam0->f_3 = uParam2;
	if (bLocal_38)
	{
	}
	bVar0 = false;
	while (bVar0 < iParam0->f_3)
	{
		if (func_20((iParam0->f_2 + bVar0), -1))
		{
			iVar1++;
			func_39(iParam0, bVar0, 1);
			if (bLocal_38)
			{
			}
		}
		bVar0++;
	}
	iParam0->f_4 = iVar1;
	if (bLocal_38)
	{
	}
}

void func_49(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_50()
{
	int iVar0;
	
	iLocal_605 = 0;
	Global_114135.f_10053.f_125.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_53[iVar0 /*11*/].f_3 = { func_51(iVar0, 0) };
		Local_53[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_53[0 /*11*/].f_9 = 179.4746f;
	Local_53[1 /*11*/].f_9 = 198f;
	Local_53[2 /*11*/].f_9 = 104f;
	Local_53[3 /*11*/].f_9 = 321.5f;
	Local_53[4 /*11*/].f_9 = 256.25f;
	Local_53[5 /*11*/].f_9 = 286.5f;
	Local_53[6 /*11*/].f_9 = 0f;
	Local_53[6 /*11*/].f_6 = { 0f, 0f, 1f };
	Local_53[7 /*11*/].f_9 = -165.6051f;
	Local_53[8 /*11*/].f_9 = 91.5f;
	Local_53[9 /*11*/].f_9 = 116f;
	Local_53[10 /*11*/].f_9 = 15f;
	Local_53[11 /*11*/].f_9 = 305.5f;
	Local_53[12 /*11*/].f_9 = 0f;
	Local_53[13 /*11*/].f_9 = 95f;
	Local_53[14 /*11*/].f_9 = 40f;
	Local_53[15 /*11*/].f_9 = 40f;
	Local_53[16 /*11*/].f_9 = 40f;
	Local_53[17 /*11*/].f_9 = 40f;
	Local_53[18 /*11*/].f_9 = 40f;
	Local_53[19 /*11*/].f_9 = 40f;
	Local_53[20 /*11*/].f_9 = 40f;
	Local_53[21 /*11*/].f_6 = { 90f, 0f, 57f };
	Local_53[22 /*11*/].f_9 = 40f;
	Local_53[23 /*11*/].f_9 = 40f;
	Local_53[24 /*11*/].f_9 = 40f;
	Local_53[25 /*11*/].f_9 = 40f;
	Local_53[26 /*11*/].f_9 = 40f;
	Local_53[27 /*11*/].f_9 = 40f;
	Local_53[28 /*11*/].f_9 = 40f;
	Local_53[29 /*11*/].f_9 = 40f;
	Local_53[29 /*11*/].f_6 = { -24.35f, 15.74f, 14.31f };
	Local_53[30 /*11*/].f_9 = 40f;
	Local_53[31 /*11*/].f_9 = 40f;
	Local_53[32 /*11*/].f_9 = 40f;
	Local_53[33 /*11*/].f_9 = 40f;
	Local_53[34 /*11*/].f_6 = { 0f, 0f, -15f };
	Local_53[35 /*11*/].f_9 = 40f;
	Local_53[36 /*11*/].f_9 = 40f;
	Local_53[37 /*11*/].f_9 = 40f;
	Local_53[38 /*11*/].f_9 = 40f;
	Local_53[38 /*11*/].f_6 = { 20.18f, -0.87f, 20.46f };
	Local_53[39 /*11*/].f_6 = { 0f, 0f, -4.39f };
	Local_53[40 /*11*/].f_9 = 40f;
	Local_53[41 /*11*/].f_9 = 80f;
	Local_53[42 /*11*/].f_9 = 198f;
	Local_53[43 /*11*/].f_9 = 198f;
	Local_53[44 /*11*/].f_9 = 198f;
	Local_53[45 /*11*/].f_9 = 198f;
	Local_53[46 /*11*/].f_9 = 198f;
	Local_53[47 /*11*/].f_9 = 198f;
	Local_53[48 /*11*/].f_9 = 198f;
	Local_53[49 /*11*/].f_9 = 198f;
}

Vector3 func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495.9f, 12.9448f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 606.8925f, -3250.188f, 5.06951f;
			}
			else
			{
				return 634.5865f, -3232.79f, -16.5774f;
			}
			break;
		
		case 2:
			return 1590.6f, -2810.174f, 3.4494f;
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 327.99f, -2757.61f, 4.99f;
			}
			else
			{
				return 338.4039f, -2762.106f, 42.6543f;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 1134.422f, -2607.024f, 14.77071f;
			}
			else
			{
				return 1133.688f, -2605.073f, 14.9729f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 368.9316f, -2118.533f, 15.40341f;
			}
			else
			{
				return 369.945f, -2116.756f, 16.1688f;
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				return 1741.82f, -1623.85f, 111.41f;
			}
			else
			{
				return 1742.024f, -1618.777f, 111.8313f;
			}
			break;
		
		case 7:
			return 287.7294f, -1444.4f, 45.5095f;
			break;
		
		case 8:
			return 17.5926f, -1213.207f, 28.3678f;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return -910.0172f, -1147.44f, 1.06785f;
			}
			else
			{
				return -900.3597f, -1165.551f, 31.8047f;
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
				return 1237.728f, -1099.15f, 37.52579f;
			}
			else
			{
				return 1231.973f, -1102.308f, 34.4289f;
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 87.69075f, 810.3736f, 210.1258f;
			}
			else
			{
				return 81.2213f, 814.0283f, 213.2917f;
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return -1900.951f, 1389.582f, 218.1509f;
			}
			else
			{
				return -1907.515f, 1388.69f, 217.9728f;
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 467.369f, -730.7552f, 26.36373f;
			}
			else
			{
				return 469.8529f, -730.8f, 26.3985f;
			}
			break;
		
		case 14:
			return 202.1081f, -569.7198f, 128.18f;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 163.0531f, -566.3394f, 21.029f;
			}
			else
			{
				return 159.39f, -563.82f, 21f;
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return -1183.152f, -518.5386f, 38.53018f;
			}
			else
			{
				return -1182.538f, -525.5859f, 39.9114f;
			}
			break;
		
		case 17:
			return -228.0476f, -236.4184f, 49.1361f;
			break;
		
		case 18:
			return -407.7026f, -151.7918f, 63.5505f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -1169.397f, -56.76701f, 44.45705f;
			}
			else
			{
				return -1175.488f, -65.4649f, 44.6563f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 1679.056f, 39.44059f, 160.7736f;
			}
			else
			{
				return 1684.664f, 40.7142f, 153.4074f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return 1964.25f, 553.68f, 160.72f;
			}
			else
			{
				return 1965.58f, 555.99f, 160.79f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 24.21706f, 637.1212f, 206.3897f;
			}
			else
			{
				return 22.4492f, 638.8155f, 189.6085f;
			}
			break;
		
		case 23:
			return 2901.204f, 796.1192f, 3.3556f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return -1531.895f, 870.3203f, 180.6775f;
			}
			else
			{
				return -1529.722f, 871.4257f, 180.6421f;
			}
			break;
		
		case 25:
			return -404.3191f, 1100.889f, 331.535f;
			break;
		
		case 26:
			return -2809.354f, 1449.643f, 99.928f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			else
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			break;
		
		case 28:
			return 815.7574f, 1850.879f, 120.1796f;
			break;
		
		case 29:
			return -1944.24f, 1941.07f, 162.8f;
			break;
		
		case 30:
			if (iParam1 == 1)
			{
				return -1452.23f, 2127.41f, 42.84f;
			}
			else
			{
				return -1436.87f, 2130.22f, 26.78f;
			}
			break;
		
		case 31:
			return 1367.413f, 2180.632f, 96.6914f;
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return 170.1652f, 2217.637f, 89.30811f;
			}
			else
			{
				return 172.1426f, 2220.131f, 89.7842f;
			}
			break;
		
		case 33:
			return 889.3209f, 2870.052f, 55.2834f;
			break;
		
		case 34:
			if (iParam1 == 1)
			{
				return 1980.2f, 2914.79f, 45.48f;
			}
			else
			{
				return 1963.55f, 2922.81f, 57.76f;
			}
			break;
		
		case 35:
			return -390.384f, 2963.26f, 18.2713f;
			break;
		
		case 36:
			return 71.6642f, 3279.368f, 30.3918f;
			break;
		
		case 37:
			return 1924.186f, 3471.256f, 50.3238f;
			break;
		
		case 38:
			return -583.1569f, 3580.375f, 266.2471f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 2514.302f, 3789.519f, 52.077f;
			}
			else
			{
				return 2516.98f, 3789.35f, 53.79f;
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return 1517.613f, 3803.926f, 30.95605f;
			}
			else
			{
				return 1486.047f, 3857.217f, 22.2905f;
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -530.2739f, 4474.358f, 59.45993f;
			}
			else
			{
				return -528.8246f, 4440.644f, 31.7384f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return 3815.055f, 4447.343f, 2.06631f;
			}
			else
			{
				return 3820.813f, 4441.683f, 1.8007f;
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return -1946.95f, 4584.36f, 56.06f;
			}
			else
			{
				return -1943.055f, 4585.194f, 46.6362f;
			}
			break;
		
		case 44:
			return 2437.545f, 4779.959f, 33.5101f;
			break;
		
		case 45:
			return -1441.495f, 5414.888f, 23.3f;
			break;
		
		case 46:
			return 2196.251f, 5599.034f, 52.7129f;
			break;
		
		case 47:
			if (iParam1 == 1)
			{
				return -503.95f, 5673.55f, 51.24f;
			}
			else
			{
				return -503.2193f, 5665.61f, 48.8487f;
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return -378.4192f, 6080.782f, 30.44296f;
			}
			else
			{
				return -381.291f, 6086.949f, 38.6147f;
			}
			break;
		
		case 49:
			return 440.9546f, 6459.642f, 27.7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_52(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_114135.f_9089.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_114135.f_9089.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_53()
{
	int iVar0;
	
	Global_114135.f_10053.f_125.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_53.f_0)
	{
		func_40(&(Local_53[iVar0 /*11*/].f_2));
		func_27(&(Local_53[iVar0 /*11*/].f_1));
		iVar0++;
	}
	if (func_58(&(Local_40.f_1)) || func_15(107) == 1)
	{
		func_57(107, 1);
		func_55();
		func_54(14);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_40.f_7);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_54(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_114135.f_9089.f_99.f_219[iVar0], bVar1))
	{
		MISC::CLEAR_BIT(&(Global_114135.f_9089.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

void func_55()
{
	int iVar0;
	
	iVar0 = func_56(63);
	Global_2645376[iVar0 /*83*/] = 63;
	StringCopy(&(Global_2645376[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645376[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645376[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_57(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_114135.f_9089.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_114135.f_9089.f_99.f_58[iParam0] = iParam1;
}

bool func_58(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

