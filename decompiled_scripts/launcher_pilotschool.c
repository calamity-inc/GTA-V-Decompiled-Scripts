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
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_67 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	float fLocal_91 = 0f;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	char* sLocal_99 = NULL;
	float fLocal_100 = 0f;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int* iLocal_105 = NULL;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	struct<3> Local_109 = { 0, 0, 0 } ;
	struct<3> Local_112 = { 0, 0, 0 } ;
	float fLocal_115 = 0f;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	bool bLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
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
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
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
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	Local_43 = { 500f, 500f, 500f };
	iLocal_94 = -1;
	iLocal_95 = 2050;
	iLocal_96 = -1;
	iLocal_97 = -1;
	sLocal_99 = "CC_SUBSTR";
	fLocal_100 = 125f;
	iLocal_101 = 1;
	iLocal_103 = 263;
	fLocal_115 = 4f;
	Local_88 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_88 = { Local_88 };
	uLocal_84 = uLocal_84;
	Local_67 = { Local_67 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_92(1);
	}
	iLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_93 = 0;
	func_90(&Global_113020, 0);
	func_89();
	if (func_88(uLocal_92, 1))
	{
		iLocal_98 = 10;
	}
	else
	{
		iLocal_98 = 9;
	}
	while (!Global_39261)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_88(uLocal_92, 8))
	{
		if (!func_86(iLocal_98))
		{
			if (func_85(0, iLocal_97))
			{
				func_92(0);
			}
			else
			{
				func_92(1);
			}
		}
	}
	if (iLocal_97 != -1)
	{
		if (!func_85(0, iLocal_97))
		{
			func_92(1);
		}
	}
	if (func_88(uLocal_92, 8388608))
	{
		func_92(1);
	}
	if (func_88(uLocal_92, 524288) && (func_84() && !func_83()))
	{
		func_92(1);
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_88(uLocal_92, 4194304))
	{
		if (iLocal_103 != 263)
		{
			func_82(iLocal_103, 1, 0);
			iLocal_103 = 263;
		}
		func_81(10);
	}
	while (true)
	{
		if (!func_88(uLocal_92, 268435456))
		{
			fVar1 = 0f;
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(ScriptParam_0.f_1[0 /*3*/], &fVar1, false, false))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_0.f_1[0 /*3*/].f_2 = fVar1;
					func_80(&uLocal_92, 268435456);
				}
			}
		}
		iLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_88(uLocal_92, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
			{
				func_92(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83) && !ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
		{
			Local_85 = { ENTITY::GET_ENTITY_COORDS(iLocal_83, true) };
			fLocal_91 = SYSTEM::VDIST2(Local_85, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_91 = fLocal_91;
			Local_109 = { Local_85 };
			Local_112 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_109.f_2 = 0f;
			Local_112.f_2 = 0f;
			fLocal_108 = SYSTEM::VDIST2(Local_109, Local_112);
			switch (iLocal_93)
			{
				case 0:
					if (func_86(iLocal_98) || (func_88(uLocal_92, 16) && !func_88(uLocal_92, 524288)))
					{
						iLocal_96 = -1;
						func_79();
						func_81(1);
					}
					else
					{
						if (fLocal_108 > (fLocal_100 * fLocal_100))
						{
							if (iLocal_103 != 263)
							{
								func_82(iLocal_103, 1, 0);
								iLocal_103 = 263;
							}
							func_81(10);
						}
						if ((Local_85.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_78() && fLocal_91 > ((fLocal_115 * 1.5f) * (fLocal_115 * 1.5f)))
					{
						iLocal_101 = iLocal_101;
						func_81(3);
					}
					else
					{
						func_79();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_92(1);
						return;
					}
					if (!func_86(iLocal_98))
					{
						if (!func_88(uLocal_92, 8))
						{
							bVar2 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_101392.f_3), &Local_67))
							{
								Local_67 = { Local_51 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_92(0);
								break;
							}
						}
					}
					if (!func_88(uLocal_92, 4))
					{
						func_77();
						func_80(&uLocal_92, 4);
					}
					if (fLocal_108 > (fLocal_100 * fLocal_100) && !Global_101426)
					{
						if (iLocal_103 != 263)
						{
							if (func_76(6) && !func_75(iLocal_103))
							{
							}
							else
							{
								func_82(iLocal_103, 1, 0);
								iLocal_103 = 263;
							}
						}
						func_81(10);
					}
					else
					{
						Local_67 = { Local_51 };
						bVar3 = !func_88(uLocal_92, 64);
						func_90(&uLocal_92, 128);
						if (!func_74(3) && !Global_101426)
						{
							if (func_88(uLocal_92, 2097152))
							{
								if ((!func_88(uLocal_92, 1) || !ENTITY::DOES_ENTITY_EXIST(func_73())) && !Global_101426)
								{
									func_81(10);
									break;
								}
							}
						}
						if (func_88(uLocal_92, 524288) && (func_84() && !func_83()))
						{
							func_92(1);
						}
						if (func_72())
						{
							func_92(1);
						}
						if ((!func_58(6) || Global_113417) || func_57())
						{
							bVar3 = false;
						}
						if (func_88(uLocal_92, 1))
						{
							if (!func_56())
							{
								func_54(&uLocal_92, 128);
								bVar3 = false;
							}
						}
						if (func_53(1))
						{
							bVar3 = false;
						}
						if (Global_79248)
						{
							bVar3 = false;
						}
						if (func_52())
						{
							bVar3 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar3 = false;
						}
						if (func_51() || func_50(8, -1))
						{
							bVar3 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (func_49(0) || func_48())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_83, ScriptParam_0.f_1[0 /*3*/], fLocal_115, fLocal_115, 2f, false, true, iLocal_101))
							{
								bVar3 = false;
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_47(uLocal_84))
								{
									if (iLocal_94 == -1)
									{
										func_46(&iLocal_94, 4, sLocal_99, 0, 0, 0, 0);
										func_54(&uLocal_92, 2048);
									}
									else if (!func_88(uLocal_92, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_45(&iLocal_94);
										func_90(&uLocal_92, 2048);
									}
									if (func_43(iLocal_94, 1))
									{
										sLocal_99 = sLocal_99;
										func_45(&iLocal_94);
										func_90(&uLocal_92, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_67);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
										func_81(5);
									}
								}
								else
								{
									sLocal_99 = sLocal_99;
									func_45(&iLocal_94);
									func_90(&uLocal_92, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_67);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
									func_81(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_94 != -1)
							{
								func_45(&iLocal_94);
								func_90(&uLocal_92, 2048);
								HUD::CLEAR_HELP(false);
							}
						}
					}
					func_42();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_67))
					{
						if (iLocal_94 != -1)
						{
							func_45(&iLocal_94);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_88(uLocal_92, 1))
						{
							if (func_76(6) || func_76(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_39(&iLocal_96, 6, iLocal_98, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							func_38();
							if (Global_45122)
							{
								func_29(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 56);
							iLocal_50 = func_28();
							func_90(&uLocal_92, 4);
							func_27();
							func_54(&uLocal_92, 2);
							func_81(6);
							func_23(&iLocal_105);
							if (iLocal_97 != -1)
							{
								func_22(iLocal_97);
								func_19(func_21(iLocal_97), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_18();
						}
						else if (iVar4 == 0)
						{
							func_81(10);
						}
					}
					else
					{
						func_18();
					}
					break;
				
				case 6:
					if (!func_88(uLocal_92, 256))
					{
						if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
						{
							PAD::SET_INPUT_EXCLUSIVE(0, 51);
						}
						else if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_54(&uLocal_92, 256);
						}
					}
					if (func_88(Global_113020, 262144))
					{
						func_90(&Global_113020, 262144);
						func_17();
					}
					if (func_88(uLocal_92, 2097152))
					{
						if (!func_74(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
						{
							func_81(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_13(&iLocal_105) * 1000f)), iLocal_97, 0);
						func_12(&iLocal_105);
						func_90(&uLocal_92, 256);
						func_9();
						if (bVar0)
						{
							func_90(&uLocal_92, 2);
						}
						else if (func_88(uLocal_92, 2))
						{
							if (func_88(Global_113020, 0))
							{
								func_8(&iLocal_96);
								iLocal_96 = -1;
								func_90(&uLocal_92, 2);
							}
							else
							{
								func_8(&iLocal_96);
								iLocal_96 = -1;
								func_90(&uLocal_92, 2);
							}
						}
						func_81(0);
						if (iLocal_97 != -1)
						{
							if (func_88(Global_113020, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_21(iLocal_97), 0, Global_101429, 0);
								func_7(func_21(iLocal_97), 0, Global_101429, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_21(iLocal_97), 0, Global_101429, 0);
								func_7(func_21(iLocal_97), 0, Global_101429, 0, 0);
							}
						}
						func_4();
						func_90(&Global_113020, 0);
						if (func_88(uLocal_92, 16777216))
						{
							func_92(1);
						}
						if (iLocal_97 != -1)
						{
							if (Global_114370.f_9088)
							{
								if (!func_85(0, iLocal_97))
								{
									func_92(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_81(0);
					break;
				
				case 10:
					func_92(1);
					break;
				
				case 9:
					if (fLocal_108 > (fLocal_100 * fLocal_100))
					{
						if (iLocal_103 != 263)
						{
							func_82(iLocal_103, 1, 0);
							iLocal_103 = 263;
						}
						func_81(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_103 != 263)
					{
						func_82(iLocal_103, 0, 0);
					}
					if (iLocal_94 != -1)
					{
						func_45(&iLocal_94);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_99))
					{
						if (func_1(sLocal_99))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					func_81(4);
					break;
				
				case 4:
					if ((iLocal_102 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_104 == 2)
							{
								if (iLocal_104 == 2)
								{
									if (func_86(iLocal_98) && func_85(0, iLocal_97))
									{
										func_89();
										if (iLocal_103 != 263)
										{
											func_82(iLocal_103, 1, 0);
										}
										func_81(0);
									}
								}
							}
							else if (iLocal_104 == 0)
							{
								if (fLocal_108 > (fLocal_100 * fLocal_100))
								{
									if (iLocal_103 != 263)
									{
										func_82(iLocal_103, 1, 0);
										iLocal_103 = 263;
									}
									func_81(10);
								}
							}
							else if (iLocal_104 == 1)
							{
								if (fLocal_108 > ((80f + 5f) * (80f + 5f)))
								{
									func_89();
									if (iLocal_103 != 263)
									{
										func_82(iLocal_103, 1, 0);
									}
									func_81(0);
								}
							}
						}
						else
						{
							func_82(iLocal_103, 1, 0);
						}
					}
					else
					{
						iLocal_102++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
	func_5(&uLocal_120);
}

void func_5(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_6(iVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
		}
	}
}

int func_6(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
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

void func_7(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_98442))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_98442, false, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, bParam3, bParam4, Global_95549);
	StringCopy(&Global_98442, "", 64);
}

void func_8(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_43884)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_43883 = 0;
	Global_43885 = 0;
	Global_43922 = 15;
	Global_64035 = 0;
	Global_64036 = 0;
}

void func_9()
{
	char cVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_11())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || func_10())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

bool func_10()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_11()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_12(int* iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_13(int* iParam0)
{
	if (func_16(iParam0))
	{
		if (func_15(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_14(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_14(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_15(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_16(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_17()
{
	return 1;
}

void func_18()
{
}

void func_19(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_98442))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_98442, 0, 0, false, true, false);
		StringCopy(&Global_98442, "", 64);
	}
	StringCopy(&Global_98442, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_20(0));
}

int func_20(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_22(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_11())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || func_10())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_23(int* iParam0)
{
	if (!func_16(iParam0))
	{
		func_26(iParam0);
	}
	else
	{
		func_24(iParam0);
	}
}

void func_24(int* iParam0)
{
	func_25(iParam0, 0f);
}

void func_25(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_14(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_26(int* iParam0)
{
	if (!func_16(iParam0))
	{
		func_24(iParam0);
	}
}

void func_27()
{
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1093.842f, -2375.285f, -100f, -1007.24f, -2425.285f, 100f, 150f, false, true, true);
}

int func_28()
{
	int iVar0;
	
	iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_51, &uLocal_116, 4, iLocal_95);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_51);
	return iVar0;
}

void func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_37(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44908[iVar0 /*5*/];
		func_32(1, iVar1, 1);
		return;
	}
	iVar2 = func_31(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_30(iVar2);
}

void func_30(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_44882[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_44882[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_45120 = 0;
		}
	}
	Global_44882[iParam0 /*5*/] = 13;
	Global_44882[iParam0 /*5*/].f_1 = 0;
	Global_44882[iParam0 /*5*/].f_2 = 0;
	Global_44882[iParam0 /*5*/].f_3 = 0;
	Global_44882[iParam0 /*5*/].f_4 = 0;
	Global_44880 = (Global_44880 - 1);
	if (Global_44880 < 0)
	{
		Global_44880 = 0;
	}
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_44882[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_32(int iParam0, int iParam1, int iParam2)
{
	func_33(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_35(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_34();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44989[iVar0 /*6*/] = iParam0;
	Global_44989[iVar0 /*6*/].f_1 = iParam1;
	Global_44989[iVar0 /*6*/].f_2 = iParam2;
	Global_44989[iVar0 /*6*/].f_3 = iParam3;
	Global_44989[iVar0 /*6*/].f_4 = iParam4;
	Global_44989[iVar0 /*6*/].f_5 = iParam5;
}

int func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44989[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_35(int iParam0, int iParam1, int iParam2)
{
	if (func_36(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44989[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44989[iVar0 /*6*/])
			{
				if (iParam1 == Global_44989[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_37(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44908[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44908[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_38()
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

int func_39(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98850.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_41(0))
		{
			return 0;
		}
		Global_43886++;
		*iParam0 = Global_43886;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23572.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43922 = iParam2;
		Global_43884 = *iParam0;
		Global_43885 = iParam4;
		Global_43883 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_43883 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43883)
			{
				if (Global_43889[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43884 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_86(iParam2))
		{
			return 0;
		}
		if (Global_43883 == 8)
		{
			return 0;
		}
		Global_43886++;
		*iParam0 = Global_43886;
		Global_43889[Global_43883 /*4*/] = Global_43886;
		Global_43889[Global_43883 /*4*/].f_1 = iParam1;
		Global_43889[Global_43883 /*4*/].f_2 = iParam2;
		Global_43889[Global_43883 /*4*/].f_3 = 0;
		Global_43883++;
		if (iParam4 != 0)
		{
			func_40(iParam0, iParam4);
		}
	}
	return 2;
}

void func_40(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_43883 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43883)
	{
		if (Global_43889[iVar0 /*4*/] == *uParam0)
		{
			Global_43889[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_41(int iParam0)
{
	if (Global_43922 == 15)
	{
		return 0;
	}
	if (func_86(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_42()
{
	if (func_75(76))
	{
		ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1154.11f, -2715.203f, 18.8074f, 0f, 0f, 1.8f, true, true, 0);
	}
}

int func_43(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_49(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/] == 1 && Global_44676[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44676[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44676[iVar0 /*32*/].f_5 = 1;
			Global_44676[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44676[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44676[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_45(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_44(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/])
		{
			Global_44676[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_46(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_45(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44676[iVar0 /*32*/])
		{
			Global_44676[iVar0 /*32*/] = 1;
			Global_44676[iVar0 /*32*/].f_1 = Global_44877;
			Global_44877++;
			Global_44676[iVar0 /*32*/].f_4 = 0;
			Global_44676[iVar0 /*32*/].f_29 = 0;
			Global_44676[iVar0 /*32*/].f_5 = 0;
			Global_44676[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44676[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44676[iVar0 /*32*/].f_6 = iParam3;
			Global_44676[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44676[iVar0 /*32*/].f_7 = 0;
			Global_44676[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44676[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44676[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44676[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44676[iVar0 /*32*/].f_12 = 0;
				Global_44676[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_44676[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_47(var uParam0)
{
	return 1;
}

var func_48()
{
	return Global_76369;
}

int func_49(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20813.f_1 > 3)
		{
			if (BitTest(Global_8683, 14))
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
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

var func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668317.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668317.f_1048, iParam0);
}

bool func_51()
{
	return MISC::GET_GAME_TIMER() <= Global_23711.f_6481 + 100;
}

int func_52()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_53(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23572.f_4 && Global_23572.f_104 == 4);
	}
	return Global_23572.f_4;
}

void func_54(var uParam0, int iParam1)
{
	func_55(uParam0, iParam1);
}

void func_55(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_56()
{
	return 1;
}

bool func_57()
{
	int iVar0;
	bool bVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 47))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_67();
				if (!func_66(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_65()) || Global_113417) || Global_32831) || func_64()) || func_50(8, -1)) || func_63()) || func_62()) || func_61()) || func_52()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_65()) || Global_32831) || func_64()) || func_50(8, -1)) || func_61()) || func_63()) || func_62()) || func_52()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_65()) || Global_113417) || Global_32831) || func_64()) || func_50(8, -1)) || func_61()) || func_63()) || func_62()) || func_52()) || Global_114370.f_7691.f_919[iVar0] == 5) || Global_44469 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_65()) || Global_113417) || Global_32831) || func_64()) || func_50(8, -1)) || func_63()) || func_62()) || func_52()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_65() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_50(8, -1)) || func_52()) || func_60()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_50(8, -1) || func_63()) || func_62()) || func_60()) || func_59())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_65()) || Global_32831) || func_64()) || func_50(8, -1)) || func_62()) || func_61()) || func_52()) || Global_114370.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_65()) || func_62()) || Global_113417) || Global_32831) || func_64()) || Global_45122) || func_50(8, -1)) || func_61()) || func_60()) || func_52()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_65()) || Global_113417) || Global_32831) || func_64()) || func_50(8, -1)) || func_61()) || func_60()) || func_63()) || func_62()) || func_52())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_59()
{
	return Global_101431.f_1;
}

int func_60()
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 13);
	}
	return 0;
}

int func_61()
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

bool func_62()
{
	return Global_101444.f_394 > 0;
}

bool func_63()
{
	return Global_101444.f_393 > 0;
}

var func_64()
{
	return Global_1575079;
}

int func_65()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98850.f_44 == 1;
	}
	return 0;
}

bool func_66(int iParam0)
{
	return iParam0 < 3;
}

var func_67()
{
	func_68();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_68()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_70(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_69(PLAYER::PLAYER_PED_ID());
			if (func_66(iVar0) && (!func_76(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_66(Global_114370.f_2366.f_539.f_4321))
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

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_70(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_70(int iParam0)
{
	if (func_66(iParam0))
	{
		return func_71(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_71(int iParam0)
{
	return Global_2139[iParam0 /*29*/];
}

int func_72()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_73()
{
	return Global_97204;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_76(6) || func_76(7))
			{
				return 1;
			}
			else
			{
				return func_74(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_86(5))
			{
				if (func_58(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_33208[iVar0 /*23*/].f_19);
}

bool func_76(int iParam0)
{
	return Global_43922 == iParam0;
}

void func_77()
{
}

int func_78()
{
	return 1;
}

void func_79()
{
}

void func_80(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_81(int iParam0)
{
	iLocal_93 = iParam0;
}

void func_82(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_33208[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_33208[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 18);
		if (Global_33205 == 1)
		{
			Global_33206 = 1;
		}
		Global_33205 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33208[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_33208[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_33208[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_33208[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_33208[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}
}

int func_83()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::GET_CITY_DENSITY() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_84()
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 20);
	}
	return 0;
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	iVar0 = BitTest(Global_114370.f_9088.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

bool func_86(int iParam0)
{
	return func_87(iParam0, Global_43922);
}

int func_87(int iParam0, int iParam1)
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

bool func_88(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_89()
{
	iLocal_97 = 5;
	sLocal_99 = "PLAY_PSCHOOL";
	StringCopy(&Local_51, "Pilot_School", 64);
	iLocal_95 = 60500;
}

void func_90(var uParam0, int iParam1)
{
	func_91(uParam0, iParam1);
}

void func_91(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_92(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_103 != 263)
		{
			func_82(iLocal_103, 0, 0);
		}
	}
	func_45(&iLocal_94);
	if (func_88(uLocal_92, 2))
	{
		func_4();
		func_90(&uLocal_92, 2);
		func_8(&iLocal_96);
	}
	iLocal_96 = -1;
	func_93();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_93()
{
	func_90(&uLocal_92, 4);
	func_94();
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_67))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_67) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_67);
		}
	}
}

void func_94()
{
	if (bLocal_121)
	{
		func_95(76);
	}
}

void func_95(int iParam0)
{
	if (iParam0 != 263)
	{
		func_82(iParam0, 1, 0);
	}
}

