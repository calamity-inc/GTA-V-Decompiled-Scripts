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
	int iLocal_16[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	float fLocal_56 = 0f;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	int iLocal_60 = 0;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_56 = 0.82f;
	fLocal_57 = 0.42f;
	fLocal_58 = 0f;
	fLocal_59 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_47(Global_20794, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_46();
	if (Global_20758 == 0)
	{
		fLocal_61 = 0.75f;
		fLocal_62 = 0.8f;
	}
	else
	{
		fLocal_61 = 0.65f;
		fLocal_62 = 0.77f;
	}
	Global_9488[Global_20813 /*2811*/][2 /*281*/].f_259 = Global_114370.f_14054[Global_20813 /*20*/].f_6;
	Global_9488[Global_20813 /*2811*/][4 /*281*/].f_259 = Global_114370.f_14054[Global_20813 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_79248)
		{
			Global_9488[Global_20813 /*2811*/][1 /*281*/].f_259 = func_45(1199, -1);
			Global_9488[Global_20813 /*2811*/][2 /*281*/].f_259 = func_45(2030, -1);
			Global_9488[Global_20813 /*2811*/][4 /*281*/].f_259 = func_45(2029, -1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(&(Global_114370.f_14054[Global_20813 /*20*/].f_11), &(Global_9488[Global_20813 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_9488[Global_20813 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_79248)
	{
		Global_114370.f_14054[3 /*20*/].f_10 = func_45(1198, -1);
	}
	Global_9488[Global_20813 /*2811*/][3 /*281*/].f_259 = Global_114370.f_14054[Global_20813 /*20*/].f_10;
	func_44();
	if (Global_79248)
	{
		Global_9488[3 /*2811*/][0 /*281*/] = 190;
		Global_9488[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_9488[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_9488[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_9488[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&(Global_9488[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_9488[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_9488[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_9488[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&(Global_9488[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_9488[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_9488[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_9488[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&(Global_9488[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_9488[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_9488[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_9488[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (func_45(2092, -1) == 0)
		{
			Global_9488[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else
		{
			Global_9488[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_34();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_48)
		{
			if (SYSTEM::TIMERB() > 3500)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
				iLocal_48 = 0;
			}
		}
		if (Global_20813.f_1 != 9)
		{
			switch (Global_20813.f_1)
			{
				case 7:
					func_29();
					func_27();
					break;
				
				case 8:
					if (bLocal_54 || iLocal_55)
					{
						if (bLocal_54)
						{
							bLocal_54 = false;
							SYSTEM::SETTIMERB(0);
							Global_114370.f_14054.f_82 = 1;
							iLocal_55 = 1;
						}
						else if (SYSTEM::TIMERB() > 7500)
						{
							iLocal_55 = 0;
							HUD::CLEAR_HELP(true);
						}
					}
					else
					{
						func_29();
						func_12();
						if (iLocal_51)
						{
							func_11();
						}
						if (func_10(2, Global_20781, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
							}
							iLocal_51 = 0;
							func_9();
							Global_20791 = 1;
							func_47(Global_20794, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_34();
							if (Global_20813.f_1 > 3)
							{
								Global_20813.f_1 = 7;
							}
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_20815 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_20813.f_1 == 1 || Global_20813.f_1 == 3) || Global_20813.f_1 == 0) || Global_20757 == 1)
	{
		Global_20800 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
	}
	if (bLocal_54)
	{
		HUD::CLEAR_HELP(true);
	}
	if (Global_114370.f_14054.f_83 == 0 || Global_114370.f_14054.f_82 == 0)
	{
		func_3();
	}
	MISC::SET_GAME_PAUSED(false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3()
{
	if (Global_9488[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9488[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9488[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_8683, 25);
	MISC::SET_BIT(&Global_8684, 11);
}

int func_4(int iParam0)
{
	if (Global_43922 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_43922);
}

int func_6(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_7()
{
	func_46();
	Global_9488[Global_20813 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_9289 == 1 || Global_20813.f_1 < 7)
	{
		Global_20800 = 1;
		return 1;
	}
	return 0;
}

void func_9()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20802, true);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	int iVar0;
	
	iLocal_52 = MISC::GET_GAME_TIMER();
	iVar0 = (iLocal_52 - iLocal_53);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		PAD::SET_CONTROL_SHAKE(0, 100, 100);
	}
}

void func_12()
{
	int iVar0;
	var uVar1;
	struct<13> Var17;
	int iVar30;
	
	if (iLocal_41 == 1)
	{
		if (iLocal_50)
		{
			iLocal_52 = MISC::GET_GAME_TIMER();
			if ((iLocal_52 - iLocal_53) > 1000)
			{
				iLocal_49 = 1;
				iLocal_50 = 0;
			}
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
			{
				iLocal_63 = 1;
				iLocal_64 = 0;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
			{
				iLocal_63 = 0;
				iLocal_64 = 1;
			}
		}
		if ((((func_10(2, Global_20789, 0) || func_10(2, Global_20790, 0)) || iLocal_49) || iLocal_63 == 1) || iLocal_64 == 1)
		{
			iLocal_63 = 0;
			iLocal_64 = 0;
			iLocal_49 = 0;
			iLocal_50 = 0;
			SYSTEM::SETTIMERB(0);
			iLocal_48 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "GET_CURRENT_SELECTION");
			iLocal_39 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_39))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_45 = iLocal_16[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_39)];
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				SYSTEM::WAIT(100);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (MISC::ARE_STRINGS_EQUAL(&(Global_9488[Global_20813 /*2811*/][1 /*281*/].f_144[iLocal_45 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_9488[Global_20813 /*2811*/][1 /*281*/].f_144[iLocal_45 /*6*/]), PLAYER::PLAYER_PED_ID(), true);
						}
					}
				}
			}
		}
	}
	if (Global_20791 == 0)
	{
		if (func_10(2, Global_20782, 0))
		{
			func_24();
			Global_20791 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "GET_CURRENT_SELECTION");
			iLocal_39 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_39))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_44 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_39);
			if (iLocal_44 < 0)
			{
				iLocal_44 = 0;
			}
			Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_259 = iLocal_16[iLocal_44];
			if (iLocal_41 == 2)
			{
				iVar0 = Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_259;
				Global_114370.f_14054[Global_20813 /*20*/].f_6 = Global_9488[Global_20813 /*2811*/][2 /*281*/].f_260[iVar0];
				func_47(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114370.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_79248)
				{
					Global_4543259 = Global_9488[3 /*2811*/][2 /*281*/].f_259;
					func_20(2030, Global_9488[3 /*2811*/][2 /*281*/].f_259, -1, 1);
					func_47(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_4543259), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_47(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114370.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_43), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[iLocal_16[iLocal_43] /*4*/]), 0, 0, 0, 0);
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[iLocal_16[iLocal_44] /*4*/]), 0, 0, 0, 0);
				iLocal_43 = iLocal_44;
				func_47(Global_20794, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_41 == 4)
			{
				Global_114370.f_14054[Global_20813 /*20*/].f_9 = Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_259;
				if (Global_79248)
				{
					Global_4543260 = Global_9488[3 /*2811*/][4 /*281*/].f_259;
					func_20(2029, Global_9488[3 /*2811*/][4 /*281*/].f_259, -1, 1);
					if (Global_4543260 == 0)
					{
						Var17 = { func_17(PLAYER::PLAYER_ID()) };
						iVar30 = 0;
						if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
						{
						}
						if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var17) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) && Global_4543263 == 0)
						{
							SYSTEM::SETTIMERA(0);
							while (!NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var17, &uVar1) && SYSTEM::TIMERA() < 3000)
							{
								SYSTEM::WAIT(0);
								if (SYSTEM::TIMERA() > 2999)
								{
									iVar30 = 1;
								}
							}
							if (iVar30 == 0)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_BACKGROUND_CREW_IMAGE");
								GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar1);
								GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						}
						else
						{
							func_47(Global_20794, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_47(Global_20794, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4543260), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_47(Global_20794, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_114370.f_14054[Global_20813 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_43), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[iLocal_16[iLocal_43] /*4*/]), 0, 0, 0, 0);
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[iLocal_16[iLocal_44] /*4*/]), 0, 0, 0, 0);
				iLocal_43 = iLocal_44;
				func_47(Global_20794, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_41 == 1)
			{
				Global_114370.f_14054[Global_20813 /*20*/].f_11 = { Global_9488[Global_20813 /*2811*/][1 /*281*/].f_144[Global_9488[Global_20813 /*2811*/][1 /*281*/].f_259 /*6*/] };
				if (Global_79248)
				{
					func_20(1199, Global_9488[3 /*2811*/][1 /*281*/].f_259, -1, 1);
				}
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_43), SYSTEM::TO_FLOAT(18), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[iLocal_16[iLocal_43] /*4*/]), 0, 0, 0, 0);
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[iLocal_16[iLocal_44] /*4*/]), 0, 0, 0, 0);
				iLocal_43 = iLocal_44;
				func_47(Global_20794, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_41 == 3)
			{
				Global_114370.f_14054[Global_20813 /*20*/].f_10 = Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_259;
				if (Global_79248)
				{
					func_20(1198, Global_114370.f_14054[3 /*20*/].f_10, -1, 1);
				}
				if (Global_114370.f_14054[Global_20813 /*20*/].f_10 == 1)
				{
					iLocal_51 = 1;
					iLocal_53 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_51 = 0;
				}
			}
			if (iLocal_41 == 0)
			{
				if (Global_79248 == 1)
				{
					Global_9488[3 /*2811*/][iLocal_41 /*281*/].f_259 = iLocal_16[iLocal_44];
					func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_43), SYSTEM::TO_FLOAT(19), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[iLocal_16[iLocal_43] /*4*/]), 0, 0, 0, 0);
					func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[iLocal_16[iLocal_44] /*4*/]), 0, 0, 0, 0);
					iLocal_43 = iLocal_44;
					func_47(Global_20794, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
					func_20(2092, Global_9488[3 /*2811*/][iLocal_41 /*281*/].f_259, -1, 1);
				}
				else
				{
					Global_9488[0 /*2811*/][iLocal_41 /*281*/].f_259 = iLocal_16[iLocal_44];
					Global_9488[1 /*2811*/][iLocal_41 /*281*/].f_259 = iLocal_16[iLocal_44];
					Global_9488[2 /*2811*/][iLocal_41 /*281*/].f_259 = iLocal_16[iLocal_44];
					if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_43922 == 15)
						{
							if (Global_114370.f_14054.f_82 == 0)
							{
								HUD::CLEAR_HELP(true);
								func_16("CELL_7050");
								if (fLocal_61 == fLocal_62)
								{
								}
								bLocal_54 = true;
							}
							else
							{
								func_47(Global_20794, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								MISC::SET_BIT(&Global_8683, 25);
								MISC::SET_BIT(&Global_8684, 11);
								if (Global_114370.f_14054.f_83 == 0)
								{
									HUD::CLEAR_HELP(true);
									func_15("CELL_7051", -1);
									Global_114370.f_14054.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_47(Global_20794, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						MISC::CLEAR_BIT(&Global_8683, 25);
						MISC::SET_BIT(&Global_8684, 11);
					}
				}
			}
			func_13(Global_20794, "SET_HEADER", &(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_14(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_14(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_14(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_14(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_14(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_14(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_15(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_16(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

struct<13> func_17(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_18(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_14(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_14(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_14(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_14(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_14(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_19()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20813 == 0)
		{
			switch (Global_114370.f_14054[Global_20813 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20813 == 1)
		{
			switch (Global_114370.f_14054[Global_20813 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20813 == 2)
		{
			switch (Global_114370.f_14054[Global_20813 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20813 == 3)
		{
			switch (Global_4543259)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_20(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_21(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_21(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_22(uParam1));
}

int func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

var func_23()
{
	return Global_1574925;
}

void func_24()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20802, true);
		func_25();
	}
}

void func_25()
{
	if (func_26())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_26()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79248)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4543261 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_27()
{
	if (Global_20791 == 0)
	{
		if (func_10(2, Global_20782, 0))
		{
			func_24();
			Global_20791 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "GET_CURRENT_SELECTION");
			iLocal_39 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_39))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_42 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_39);
			iLocal_41 = iLocal_16[iLocal_42];
			switch (iLocal_41)
			{
				case 0:
					if (Global_79248 == 0)
					{
						if (Global_43922 == 15)
						{
							if (Global_114370.f_14054.f_82 == 0)
							{
								HUD::CLEAR_HELP(true);
								func_16("CELL_7050");
								if (fLocal_61 == fLocal_62)
								{
								}
								bLocal_54 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_20813.f_1 > 3)
			{
				Global_20813.f_1 = 8;
			}
			func_28();
			iLocal_50 = 1;
			iLocal_53 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_28()
{
	int iVar0[19];
	int iVar20;
	struct<13> Var21;
	int iVar34;
	int iVar35;
	
	func_47(Global_20794, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_37 = 0;
	iVar20 = 0;
	if (Global_79248)
	{
		StringCopy(&(Global_9488[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var21 = { func_17(PLAYER::PLAYER_ID()) };
		if (!NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var21))
		{
			StringCopy(&(Global_9488[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar20 < 19)
	{
		iVar34 = 0;
		iVar35 = 18;
		Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_84[iVar35] = 5000;
		while (iVar34 < 19)
		{
			if (Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_124[iVar34] == 1)
			{
				if (iVar0[iVar34] == 0)
				{
					if (Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_84[iVar34] < Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_84[iVar35])
					{
						iVar35 = iVar34;
						func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar20), SYSTEM::TO_FLOAT(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_104[iVar35]), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar34++;
		}
		iLocal_16[iVar20] = iVar35;
		iVar0[iVar35] = 1;
		if (MISC::ARE_STRINGS_EQUAL(&(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_259 /*4*/]), &(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[iVar35 /*4*/])))
		{
			iLocal_46 = iVar20;
			if (iLocal_46 < 0)
			{
				iLocal_46 = 0;
			}
			if ((iLocal_41 == 1 || iLocal_41 == 4) || iLocal_41 == 2)
			{
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar20), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_43 = iVar20;
			}
			if (iLocal_41 == 0 && Global_79248 == 1)
			{
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar20), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_43 = iVar20;
			}
		}
		if (Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_124[iVar20] == 1)
		{
			iLocal_37++;
		}
		iVar20++;
	}
	func_47(Global_20794, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20794, "SET_HEADER", &(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_20801)
	{
		func_18(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8683, 17);
}

void func_29()
{
	if (iLocal_60)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_60 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_38 > 0)
			{
				iLocal_38 = (iLocal_38 - 1);
			}
			func_32();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_38++;
			if (iLocal_38 == iLocal_37)
			{
				iLocal_38 = 0;
			}
			func_30();
		}
	}
	if (iLocal_60 == 0)
	{
		if (func_10(2, Global_20789, 0))
		{
			if (iLocal_38 > 0)
			{
				iLocal_38 = (iLocal_38 - 1);
			}
			func_32();
			iLocal_60 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_10(2, Global_20790, 0))
		{
			iLocal_38++;
			if (iLocal_38 == iLocal_37)
			{
				iLocal_38 = 0;
			}
			func_30();
			iLocal_60 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_30()
{
	func_47(Global_20794, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
	func_31();
}

void func_31()
{
	if (func_26())
	{
		if (Global_21030 == 0)
		{
			MOBILE::CELL_SET_INPUT(2);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(1);
		}
	}
}

void func_32()
{
	func_47(Global_20794, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
	func_33();
}

void func_33()
{
	if (func_26())
	{
		if (Global_21030 == 0)
		{
			MOBILE::CELL_SET_INPUT(1);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(2);
		}
	}
}

void func_34()
{
	int iVar0[20];
	int iVar21;
	int iVar22;
	int iVar23;
	
	iLocal_37 = 0;
	iVar21 = 0;
	while (iVar21 < 9)
	{
		iVar22 = 0;
		iVar23 = 9;
		Global_9488[Global_20813 /*2811*/][iVar23 /*281*/] = 5000;
		if (MISC::GET_PROFILE_SETTING(2) == 0)
		{
			Global_9488[Global_20813 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else
		{
			Global_9488[Global_20813 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar22 < 9)
		{
			if (Global_9488[Global_20813 /*2811*/][iVar22 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar22] == 0)
				{
					if (Global_9488[Global_20813 /*2811*/][iVar22 /*281*/] < Global_9488[Global_20813 /*2811*/][iVar23 /*281*/])
					{
						if (Global_79248)
						{
							if (iVar22 == 0)
							{
								iVar23 = iVar22;
								func_43(iVar22, iVar23);
								func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_47), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar23 = iVar22;
								func_43(iVar22, iVar23);
								func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_47), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_35() == 2)
						{
							if (iVar22 == 4 || iVar22 == 5)
							{
							}
							else
							{
								iVar23 = iVar22;
								func_43(iVar22, iVar23);
								func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_47), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar22 == 5)
						{
						}
						else
						{
							iVar23 = iVar22;
							func_43(iVar22, iVar23);
							func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_47), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar22++;
		}
		iLocal_16[iVar21] = iVar23;
		iVar0[iVar23] = 1;
		if (Global_9488[Global_20813 /*2811*/][iVar21 /*281*/].f_280 == 1)
		{
			iLocal_37++;
		}
		iVar21++;
	}
	func_47(Global_20794, "DISPLAY_VIEW", 13f, SYSTEM::TO_FLOAT(iLocal_42), -1082130432, -1082130432, -1082130432);
	func_13(Global_20794, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_20801)
	{
		func_18(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8683, 17);
}

int func_35()
{
	if (Global_79248)
	{
		Global_20813 = 3;
	}
	else
	{
		Global_20813 = func_36();
	}
	if (Global_20813 > 3)
	{
		Global_20813 = 3;
	}
	return Global_114370.f_14054[Global_20813 /*20*/].f_7;
}

var func_36()
{
	func_37();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_37()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_41(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_40(PLAYER::PLAYER_PED_ID());
			if (func_39(iVar0) && (!func_38(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_39(Global_114370.f_2366.f_539.f_4321))
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

bool func_38(int iParam0)
{
	return Global_43922 == iParam0;
}

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_42(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_42(int iParam0)
{
	return Global_2139[iParam0 /*29*/];
}

void func_43(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (Global_79248)
			{
				iLocal_47 = 19;
			}
			else if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
			{
				iLocal_47 = 26;
			}
			else
			{
				iLocal_47 = 25;
			}
			break;
		
		case 3:
			if (Global_9488[Global_20813 /*2811*/][3 /*281*/].f_259 == 1)
			{
				iLocal_47 = 20;
			}
			else
			{
				iLocal_47 = 21;
			}
			break;
		
		default:
			iLocal_47 = Global_9488[Global_20813 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_44()
{
	if (Global_43922 != 15)
	{
		func_46();
		Global_9488[Global_20813 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

int func_45(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_21(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_46()
{
	if (func_38(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[0 /*29*/])
			{
				Global_20813 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[1 /*29*/])
			{
				Global_20813 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[2 /*29*/])
			{
				Global_20813 = 2;
			}
			else
			{
				Global_20813 = 0;
			}
		}
	}
	else
	{
		Global_20813 = func_36();
		if (Global_20813 == 145)
		{
			Global_20813 = 3;
		}
		if (Global_79248)
		{
			Global_20813 = 3;
		}
		if (Global_20813 > 3)
		{
			Global_20813 = 3;
		}
	}
}

void func_47(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

