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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
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
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	struct<3> Local_102 = { 0, 0, 0 } ;
	struct<4> Local_105 = { 2, 0, 0, 3 } ;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 2;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 2;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	struct<8> Local_132[32];
	struct<184> Local_389 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_573 = 0;
	bool bLocal_574 = 0;
	bool bLocal_575 = 0;
	bool bLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
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
	sLocal_18 = "NULL";
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
	fLocal_63 = ((0.05f + 0.275f) - 0.01f);
	fLocal_65 = 0f;
	Local_102 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_581 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_184(ScriptParam_0);
	}
	else
	{
		func_181();
	}
	while (true)
	{
		func_180();
		func_172();
		if (func_164() || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_181();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((func_160() && !Global_262145.f_21655) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_151();
			}
			if (func_44())
			{
				func_181();
			}
			if (func_41(PLAYER::PLAYER_ID()))
			{
				if (!BitTest(Local_389.f_182, 3))
				{
					MISC::SET_BIT(&(Local_389.f_182), 3);
				}
			}
			if (((((((((((!Global_1836234 && !func_40(2)) && !func_37(PLAYER::PLAYER_ID(), 0)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_35(PLAYER::PLAYER_ID())) && !func_33(func_34(PLAYER::PLAYER_ID()))) && !func_31(PLAYER::PLAYER_ID(), 146)) && !func_26(PLAYER::PLAYER_ID())) && !func_25(PLAYER::PLAYER_ID())) && !func_24()) && func_23() != 0)
			{
				if (func_22(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_21(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000))
				{
					if (!BitTest(Global_2739811.f_4692, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!func_160())
							{
								func_20();
								if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
								{
									if (func_22(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 0, 0) || func_21(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 0))
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
										}
									}
									else if (!func_19(&(Local_389.f_3)))
									{
										func_16(&(Local_389.f_3));
									}
									else if (func_13(&(Local_389.f_3)) > 20f || Local_389.f_177)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
										}
									}
								}
								else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
								}
								else
								{
									PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
								}
							}
							else
							{
								if (Global_2739811.f_6973)
								{
									bLocal_574 = false;
									Global_2739811.f_6973 = 0;
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !iLocal_578)
								{
									iLocal_578 = 1;
								}
								if (Global_262145.f_21639 && !func_11(PLAYER::PLAYER_ID()))
								{
									if ((!bLocal_574 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0) && iLocal_578)
									{
										PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
										PLAYER::SET_MAX_WANTED_LEVEL(0);
										iLocal_577 = 1;
									}
									if (func_3() && !bLocal_574)
									{
										bLocal_574 = true;
										PLAYER::SET_MAX_WANTED_LEVEL(func_2());
									}
								}
								if (func_3() && !bLocal_574)
								{
									bLocal_574 = true;
								}
								if (bLocal_574)
								{
									if (bLocal_575)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(2) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
										}
									}
									else if (bLocal_576)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(3) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
										}
									}
									else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < Global_262145.f_21595)
									{
										PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21595) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
									}
									else
									{
										PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
									}
								}
							}
						}
						else
						{
							if (func_19(&(Local_389.f_3)))
							{
								func_1(&(Local_389.f_3));
							}
							if (Local_389.f_177)
							{
								Local_389.f_177 = 0;
							}
							func_20();
						}
					}
					else
					{
						if (!Local_389.f_177)
						{
							Local_389.f_177 = 1;
						}
						func_20();
					}
				}
				else
				{
					if (Local_389.f_177)
					{
						Local_389.f_177 = 0;
					}
					func_20();
				}
			}
			else
			{
				func_20();
			}
		}
		else
		{
			func_181();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()
{
	if (func_23() != -1)
	{
		return func_23();
	}
	return 5;
}

int func_3()
{
	int iVar0;
	
	if ((((func_22(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_21(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000)) && !func_10()) && !func_25(PLAYER::PLAYER_ID())) && !Global_4456449.f_5 == 6)
	{
		if (Global_262145.f_21589)
		{
			return 0;
		}
		if (((func_9() || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, false, true, 0)) || func_8(PLAYER::PLAYER_ID()))
		{
			bLocal_575 = false;
			bLocal_576 = false;
			return 1;
		}
		if (Global_262145.f_21596)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_VEHICLE_STOLEN(iVar0))
				{
					if (func_7(iVar0))
					{
						if ((!func_6(iVar0, 1) && !func_5(iVar0)) && !func_4(iVar0))
						{
							bLocal_575 = true;
							bLocal_576 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_STOLEN(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				if ((!func_6(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1) && !func_5(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && !func_4(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					bLocal_575 = true;
					bLocal_576 = false;
					return 1;
				}
			}
		}
		if (Global_2739811.f_6971 || Global_2739811.f_6972)
		{
			if (Global_2739811.f_6972)
			{
				bLocal_575 = false;
				bLocal_576 = true;
			}
			else
			{
				bLocal_575 = true;
				bLocal_576 = false;
			}
			Global_2739811.f_6971 = 0;
			Global_2739811.f_6972 = 0;
			return 1;
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (BitTest(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_5(int iParam0)
{
	if ((DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("CreatedByPegasus", 2) && DECORATOR::DECOR_EXIST_ON(iParam0, "CreatedByPegasus")) && DECORATOR::DECOR_GET_BOOL(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1)
{
	if (Global_79539)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case joaat("firetruk"):
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
		
		default:
	}
	return 0;
}

int func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(iParam0));
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_VALID_INTERIOR(iVar1))
	{
		if ((iVar0 == iVar1 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_9()
{
	return (!Global_262145.f_32158 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, false, true, 0));
}

bool func_10()
{
	return Global_4718592 == 3;
}

int func_11(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_12(iParam0, 9);
	}
	return 0;
}

var func_12(int iParam0, int iParam1)
{
	return BitTest(Global_1887549[iParam0 /*611*/].f_10.f_4, iParam1);
}

float func_13(int* iParam0)
{
	if (func_19(iParam0))
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

void func_16(int* iParam0)
{
	if (!func_19(iParam0))
	{
		func_17(iParam0);
	}
}

void func_17(int* iParam0)
{
	func_18(iParam0, 0f);
}

void func_18(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_14(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_19(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_20()
{
	if (iLocal_577)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(func_2());
	}
	Global_2739811.f_6971 = 0;
	Global_2739811.f_6972 = 0;
	iLocal_577 = 0;
	bLocal_574 = false;
	bLocal_575 = false;
	iLocal_578 = 0;
}

int func_21(struct<3> Param0, int iParam3)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	bool bVar110;
	
	bVar110 = false;
	Var0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	Var46[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam3)) };
	fVar92[0] = 88f;
	Var0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	Var46[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam3)) };
	fVar92[1] = 88f;
	Var0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	Var46[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam3)) };
	fVar92[2] = 88f;
	Var0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	Var46[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam3)) };
	fVar92[3] = 88f;
	Var0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var46[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam3)) };
	fVar92[4] = 9f;
	Var0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var46[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam3)) };
	fVar92[5] = 9.5f;
	Var0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	Var46[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam3)) };
	fVar92[6] = 9.5f;
	Var0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	Var46[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[7] = 9.5f;
	Var0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	Var46[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[8] = 9.5f;
	Var0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	Var46[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam3)) };
	fVar92[9] = 9.5f;
	Var0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	Var46[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam3)) };
	fVar92[10] = 9.5f;
	Var0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	Var46[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam3)) };
	fVar92[11] = 9.5f;
	Var0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	Var46[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam3)) };
	fVar92[12] = 9.5f;
	iVar108 = 13;
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], bVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_22(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	bool bVar110;
	int iVar111;
	
	bVar110 = false;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], bVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_23()
{
	return Global_2739811.f_6975;
}

bool func_24()
{
	return Global_2739811.f_6974;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2708409;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_26(int iParam0)
{
	return func_27(func_28(iParam0));
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_28(int iParam0)
{
	if (func_30(iParam0))
	{
		if (func_29(iParam0, 0))
		{
			return Global_1887549[iParam0 /*611*/].f_10.f_33;
		}
	}
	return -1;
}

int func_29(int iParam0, int iParam1)
{
	if (func_30(iParam0))
	{
		if (Global_1887549[iParam0 /*611*/].f_10.f_33 != -1 || (iParam1 && Global_1887549[iParam0 /*611*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_30(var uParam0)
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

int func_31(int iParam0, int iParam1)
{
	if (Global_1887549[iParam0 /*611*/] == iParam1)
	{
		return func_32(iParam0);
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887549[iVar0 /*611*/].f_1, 0);
	}
	return 0;
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_32(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887549[iVar0 /*611*/];
	}
	return -1;
}

int func_35(int iParam0)
{
	if (func_37(iParam0, 0))
	{
		return 1;
	}
	if (func_36())
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

bool func_36()
{
	return BitTest(Global_2621446, 3);
}

bool func_37(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_30(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_38(-1, 0) == 8;
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

int func_38(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_39();
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

int func_39()
{
	return Global_1574926;
}

bool func_40(int iParam0)
{
	return BitTest(Global_1836233, iParam0);
}

int func_41(int iParam0)
{
	if (iParam0 != func_43() && func_42(iParam0, 1, 1))
	{
		return BitTest(Global_2657991[iParam0 /*467*/].f_324, 3);
	}
	return 0;
}

int func_42(int iParam0, bool bParam1, bool bParam2)
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

int func_43()
{
	return -1;
}

int func_44()
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_128())
		{
			iVar0 = 1;
		}
	}
	if (func_45())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_45()
{
	int iVar0;
	
	switch (Local_389.f_6)
	{
		case 0:
			func_127();
			if ((((((((func_124(PLAYER::PLAYER_ID(), 1, 0) && func_123()) || func_28(PLAYER::PLAYER_ID()) == 159) || func_28(PLAYER::PLAYER_ID()) == 225) || func_28(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || func_24()) || Global_1836691) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_10()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), true);
			}
			func_120(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/]), 1);
			Local_389.f_176 = 1;
			Local_389.f_6 = 1;
			break;
		
		case 1:
			if (func_119())
			{
				func_120(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/]), 2);
				Local_389.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_118(Local_105.f_20, 1))
			{
				Local_389.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_124(PLAYER::PLAYER_ID(), 1, 0) && !func_123()) && !func_160())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_112(iVar0);
					iVar0++;
				}
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if ((((func_110() && !func_124(PLAYER::PLAYER_ID(), 1, 0)) && !func_123()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && func_108(PLAYER::PLAYER_ID()) != 6)
				{
					func_53();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_46(iVar0);
				iVar0++;
			}
			if (((((func_28(PLAYER::PLAYER_ID()) == 225 || func_28(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || Global_1836691) || func_24()) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_10()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), true);
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_389.f_6 = 4;
			}
			break;
		
		case 4:
			if ((((((((func_124(PLAYER::PLAYER_ID(), 1, 0) && func_123()) || func_28(PLAYER::PLAYER_ID()) == 159) || func_28(PLAYER::PLAYER_ID()) == 225) || func_28(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || Global_1836691) || func_24()) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_10()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), false);
			}
			return 1;
			break;
	}
	return 0;
}

void func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_105.f_3[iParam0 /*5*/].f_2 > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_3[iParam0 /*5*/]))
	{
		if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_105.f_3[iParam0 /*5*/]), false))
		{
			if (HUD::DOES_BLIP_EXIST(Local_389.f_172[iParam0]))
			{
				HUD::REMOVE_BLIP(&(Local_389.f_172[iParam0]));
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(Local_389.f_172[iParam0]) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 2)
		{
			Local_389.f_172[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_105.f_3[iParam0 /*5*/]));
			HUD::SET_BLIP_COLOUR(Local_389.f_172[iParam0], 1);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_389.f_172[iParam0]))
	{
		HUD::REMOVE_BLIP(&(Local_389.f_172[iParam0]));
	}
	switch (Local_105.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0] = 0;
				func_51(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 4)
						{
							if (func_22(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 500, 0))
							{
								func_51(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 2))
			{
				if (func_50(iParam0))
				{
					iVar2 = PLAYER::GET_PLAYER_PED(Local_105.f_3[iParam0 /*5*/].f_4);
					iVar0 = NETWORK::NET_TO_PED(Local_105.f_3[iParam0 /*5*/].f_1);
					iVar1 = NETWORK::NET_TO_VEH(Local_105.f_3[iParam0 /*5*/]);
					if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
					{
						if (PED::IS_PED_IN_ANY_PLANE(iVar2))
						{
							iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar2, false);
							if ((!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
							{
								TASK::TASK_PLANE_MISSION(iVar0, iVar1, iVar3, iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, true), 6, 70f, -1f, 30f, 7.006492E-43f, 7.006492E-44f, true);
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("vehicle_weapon_space_rocket"));
								PED::SET_PED_CAN_SWITCH_WEAPON(iVar0, false);
							}
						}
					}
				}
				if (func_49(iParam0))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_105.f_3[iParam0 /*5*/].f_1);
					iVar2 = PLAYER::GET_PLAYER_PED(Local_105.f_3[iParam0 /*5*/].f_4);
					if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
					{
						if (PED::IS_PED_IN_ANY_PLANE(iVar2))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(iVar0, iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, true));
						}
					}
				}
				if (func_48(iParam0, 6))
				{
					func_51(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 8))
			{
				if (func_50(iParam0))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_105.f_3[iParam0 /*5*/].f_1);
					iVar1 = NETWORK::NET_TO_VEH(Local_105.f_3[iParam0 /*5*/]);
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
					{
						TASK::TASK_PLANE_MISSION(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 7.006492E-43f, 7.006492E-44f, true);
					}
				}
				if (func_48(iParam0, 9))
				{
					func_51(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_105.f_3[iParam0 /*5*/]) || NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_105.f_3[iParam0 /*5*/].f_1))
			{
				if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_105.f_3[iParam0 /*5*/]), false), 10f) && !NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_105.f_3[iParam0 /*5*/]), false), 10f))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_3[iParam0 /*5*/].f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_3[iParam0 /*5*/].f_1))
					{
						iVar4 = NETWORK::NET_TO_ENT(Local_105.f_3[iParam0 /*5*/].f_1);
						ENTITY::DELETE_ENTITY(&iVar4);
					}
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_3[iParam0 /*5*/]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_3[iParam0 /*5*/]))
					{
						iVar5 = NETWORK::NET_TO_ENT(Local_105.f_3[iParam0 /*5*/]);
						ENTITY::DELETE_ENTITY(&iVar5);
					}
				}
			}
			else if (func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				func_47(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_VEH(Local_105.f_3[iParam0 /*5*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 1;
	}
	if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_105.f_3[iParam0 /*5*/].f_1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_50(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_VEH(Local_105.f_3[iParam0 /*5*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_52(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_53()
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<6> Var5;
	
	func_107();
	func_102();
	Var2 = { Local_102 };
	if (((func_22(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_21(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000)) || func_100(PLAYER::PLAYER_PED_ID())) && func_99(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = true;
	}
	else
	{
		Local_389.f_178 = 0;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, false, true, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_389.f_179 = 0;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, false, true, 0))
	{
		Var2 = { -1592.1f, 2797.2f, 17.1f };
		Local_389.f_181 = 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, false, true, 0))
	{
		Var2 = { -2303.9f, 3388f, 31.3f };
		Local_389.f_181 = 2;
	}
	if (func_97(bVar0, bVar1))
	{
		func_95();
		if (!func_94())
		{
			Global_1835504 = 1;
			func_93(&(Local_389.f_7), 2);
			func_92(&(Local_389.f_7), 2);
			func_91(&(Local_389.f_7), 2, 0, "AIRMECH", 0, 1);
			func_90(&(Local_389.f_7), 2, Var2);
			Global_21714.f_162 = { Var2 };
			Var5 = { func_89() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var5))
			{
				if (func_68(&(Local_389.f_7), "SMGFZAU", &Var5, 7, 0, 0, 0))
				{
					func_54(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_94())
	{
		if (!BitTest(Local_389.f_182, 2))
		{
			Global_1835504 = 0;
			func_93(&(Local_389.f_7), 2);
			func_92(&(Local_389.f_7), 2);
			MISC::SET_BIT(&(Local_389.f_182), 2);
		}
	}
}

void func_54(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_67(16000, -1))
		{
			func_66(16000, 1, -1);
			if (Global_2739811.f_6980)
			{
				if (func_60())
				{
					func_58("AB_ENTRY_HT");
					Local_389.f_180 = 1;
				}
			}
			else if (func_60())
			{
				func_57("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_67(16001, -1))
		{
			func_66(16001, 1, -1);
			if (Global_2739811.f_6980)
			{
				if (func_60())
				{
					func_58("AB_ENTRY_HT");
					Local_389.f_180 = 1;
				}
			}
			else if (func_60())
			{
				func_57("AB_ENTRY_HT", -1);
			}
		}
		Local_389.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_67(15999, -1))
		{
			func_66(15999, 1, -1);
			if (Global_2739811.f_6980)
			{
				if (func_60())
				{
					func_58("AB_ENTRY_HT");
					Local_389.f_180 = 1;
				}
			}
			else if (func_60())
			{
				func_57("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_389.f_181 == 1)
		{
			if (!func_67(16002, -1))
			{
				func_66(16002, 1, -1);
				if (Global_2739811.f_6980)
				{
					if (func_60())
					{
						func_58("AB_ENTRY_HT");
						Local_389.f_180 = 1;
					}
				}
				else if (func_60())
				{
					func_57("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_389.f_181 == 2)
		{
			if (func_56(18097, -1) == 0)
			{
				func_55(18097, 1, -1);
				if (Global_2739811.f_6980)
				{
					if (func_60())
					{
						func_58("AB_ENTRY_HT");
						Local_389.f_180 = 1;
					}
				}
				else if (func_60())
				{
					func_57("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_389.f_179 = 1;
		Local_389.f_181 = 0;
	}
	if (BitTest(Local_389.f_182, 2))
	{
		MISC::CLEAR_BIT(&(Local_389.f_182), 2);
	}
}

void func_55(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_39();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_56(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_39();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

void func_57(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_58(char* sParam0)
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	if (!func_59(sParam0))
	{
		func_57(sParam0, -1);
	}
}

bool func_59(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_60()
{
	if (func_63(PLAYER::PLAYER_ID()) && !func_61(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, bool bParam1)
{
	if (!func_30(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_62(iParam0))
		{
			return 0;
		}
	}
	return func_30(Global_1887549[iParam0 /*611*/].f_10);
}

int func_62(int iParam0)
{
	if (func_30(iParam0))
	{
		if (func_30(Global_1887549[iParam0 /*611*/].f_10))
		{
			return Global_1887549[iParam0 /*611*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (func_65(iParam0))
	{
		iVar0 = func_64(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (iParam0 != func_43())
	{
		return Global_1845221[iParam0 /*889*/].f_268.f_299;
	}
	return 0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_43())
	{
		return Global_1845221[iParam0 /*889*/].f_268.f_299 != 0;
	}
	return 0;
}

void func_66(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_39();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

bool func_67(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_39();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

bool func_68(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22432 = 0;
	Global_22434 = 0;
	Global_22439 = 0;
	Global_23416 = 0;
	Global_23418 = 0;
	Global_23422 = 0;
	Global_2883585 = 0;
	return func_69(sParam2, iParam3, 0);
}

int func_69(char* sParam0, int iParam1, bool bParam2)
{
	Global_22426 = 0;
	if (Global_22425 == 0 || Global_22427 == 2)
	{
		if (Global_22425 != 0)
		{
			if (iParam1 > Global_22427)
			{
				if (Global_22432 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21066.f_1 = 3;
					Global_22425 = 0;
					Global_22426 = 1;
					Global_22478 = 0;
					Global_22421 = 0;
					Global_22422 = 0;
					Global_22436 = 0;
					Global_22435 = 0;
					Global_21065 = 0;
				}
				else
				{
					func_87();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_86(8, -1))
		{
			return 0;
		}
		Global_22501 = { Global_22495 };
		func_85();
		Global_21714 = { Global_21879 };
		Global_22431 = Global_22432;
		Global_22438 = Global_22439;
		Global_2883586 = Global_2883585;
		Global_22440 = { Global_22456 };
		Global_22433 = Global_22434;
		Global_23415 = Global_23416;
		Global_23423 = { Global_23429 };
		Global_23417 = Global_23418;
		Global_23419 = Global_23420;
		Global_23421 = Global_23422;
		Global_22044.f_370 = Global_23414;
		Global_22044.f_368 = Global_23412;
		Global_22044.f_369 = Global_23413;
		Global_22421 = Global_22422;
		if (Global_22431)
		{
			MISC::CLEAR_BIT(&Global_8919, 20);
			MISC::CLEAR_BIT(&Global_8920, 17);
			MISC::CLEAR_BIT(&Global_8921, 0);
			if (bParam2)
			{
				func_77();
				if (Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_21066.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_21032 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_76())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_79539)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_75())
			{
				return 0;
			}
			else
			{
				switch (Global_21066.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8919, 9))
				{
					return 0;
				}
			}
			func_74();
			Global_22435 = bParam2;
		}
		Global_22427 = iParam1;
		StringCopy(&Global_22044, sParam0, 24);
		Global_21291 = 0;
		func_73();
		func_70();
		return 1;
	}
	if (Global_22425 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22427 || iParam1 == Global_22427)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_87();
	}
	return 0;
}

void func_70()
{
	if (!func_71())
	{
		return;
	}
	if (Global_22431)
	{
		MemCopy(&(Global_1972230.f_1), {Global_22044}, 4);
		Global_1972230 = Global_8234;
		Global_1972230.f_6 = Global_22435;
	}
}

int func_71()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79539)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_43())
	{
		return 0;
	}
	if (func_72(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_72(int iParam0)
{
	return func_12(iParam0, 20);
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21293[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22425 = 1;
}

void func_74()
{
	Global_22478 = Global_22477;
	Global_22472 = Global_22473;
	Global_22519 = { Global_22507 };
	Global_22525 = { Global_22513 };
	Global_22480 = Global_22479;
	Global_22549 = { Global_22531 };
	Global_22555 = { Global_22537 };
	Global_22561 = { Global_22543 };
	Global_22567 = { Global_22573 };
	Global_8234 = Global_8235;
	Global_8236 = Global_8237;
	Global_22436 = Global_22437;
	Global_22438 = Global_22439;
	Global_22440 = { Global_22456 };
	Global_22429 = Global_22430;
	Global_23441 = 0;
	Global_22474 = 0;
	Global_22475 = 0;
	MISC::CLEAR_BIT(&Global_8920, 16);
}

int func_75()
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_76()
{
	int iVar0;
	int iVar1;
	
	if (Global_79539)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_77()
{
	if (func_84(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
			{
				Global_21066 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
			{
				Global_21066 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
			{
				Global_21066 = 2;
			}
			else
			{
				Global_21066 = 0;
			}
		}
	}
	else
	{
		Global_21066 = func_78();
		if (Global_21066 == 145)
		{
			Global_21066 = 3;
		}
		if (Global_79539)
		{
			Global_21066 = 3;
		}
		if (Global_21066 > 3)
		{
			Global_21066 = 3;
		}
	}
}

var func_78()
{
	func_79();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_79()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_82(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_81(PLAYER::PLAYER_PED_ID());
			if (func_80(iVar0) && (!func_84(14) || Global_113083))
			{
				if (Global_114135.f_2367.f_539.f_4321 != iVar0 && func_80(Global_114135.f_2367.f_539.f_4321))
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

bool func_80(int iParam0)
{
	return iParam0 < 3;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_83(int iParam0)
{
	return Global_2201[iParam0 /*29*/];
}

bool func_84(int iParam0)
{
	return Global_44181 == iParam0;
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21714[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21714[iVar0 /*10*/].f_1), "", 24);
		Global_21714[iVar0 /*10*/].f_7 = 0;
		Global_21714[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21714.f_161 = -99;
	Global_21714.f_162 = { 0f, 0f, 0f };
}

bool func_86(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1673654.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1673654.f_1048, iParam0);
}

void func_87()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23436 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21066.f_1 == 9) || Global_21065 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
		Global_21066.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22425 = 6;
		return;
	}
}

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21879 = { *uParam0 };
	Global_8235 = iParam1;
	StringCopy(&Global_22495, sParam2, 24);
	Global_23414 = uParam5;
	if (iParam3 == 0)
	{
		Global_23412 = 1;
		Global_23410 = 0;
	}
	else
	{
		Global_23412 = 0;
		Global_23410 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23413 = 1;
		Global_23411 = 0;
	}
	else
	{
		Global_23413 = 0;
		Global_23411 = 1;
	}
}

struct<6> func_89()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, false, true, 0))
	{
		if (!func_67(15999, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_67(16002, -1) || func_56(18097, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_22(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_21(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000)) || func_100(PLAYER::PLAYER_PED_ID())) && func_99(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_67(16000, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_67(16001, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_90(var uParam0, int iParam1, struct<3> Param2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { Param2 };
}

void func_91(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79539)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_92(var uParam0, int iParam1)
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_93(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_94()
{
	if (Global_22425 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_95()
{
	Global_21291 = 0;
	func_96();
}

void func_96()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23436 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22425 = 6;
		return;
	}
}

int func_97(bool bParam0, bool bParam1)
{
	if (func_25(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!Local_389.f_178)
		{
			if (BitTest(Local_389.f_182, 1))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!func_67(16000, -1) || !func_67(16001, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_389.f_179)
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_98())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, false, true, 0))
					{
						if (!func_67(15999, -1) || !func_67(16002, -1))
						{
							if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) >= -25f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, false, true, 0))
					{
						if (!func_67(15999, -1) || func_56(18097, -1) == 0)
						{
							if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) >= 160f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_98()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_STOLEN(iVar0))
		{
			if (func_7(iVar0))
			{
				if (!func_6(iVar0, 1) && !func_5(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_99(int iParam0)
{
	if (PED::IS_PED_IN_ANY_PLANE(iParam0) || PED::IS_PED_IN_ANY_HELI(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && func_101(iParam0))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0)
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

void func_102()
{
	if (Local_389.f_180)
	{
		if (!func_106(&(Local_389.f_183)))
		{
			func_105(&(Local_389.f_183), 0, 0);
		}
		else if (!func_104(&(Local_389.f_183), 17000, 0))
		{
			if (!func_59("AB_ENTRY_HT"))
			{
				func_57("AB_ENTRY_HT", -1);
			}
		}
		else if (func_104(&(Local_389.f_183), 17000, 0))
		{
			if (func_59("AB_ENTRY_HT"))
			{
				HUD::CLEAR_HELP(true);
			}
			func_103(&(Local_389.f_183));
			Local_389.f_180 = 0;
		}
	}
}

void func_103(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_104(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_105(uParam0, bParam2, 0);
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

void func_105(var uParam0, bool bParam1, bool bParam2)
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

bool func_106(var uParam0)
{
	return uParam0->f_1;
}

void func_107()
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if ((func_22(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_21(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000)) || func_100(PLAYER::PLAYER_PED_ID()))
		{
			if (!BitTest(Local_389.f_182, 0))
			{
				if ((((func_99(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0) && func_98()) && !Global_1957608)
				{
					if (!BitTest(Local_389.f_182, 1) && !BitTest(Local_389.f_182, 3))
					{
						MISC::SET_BIT(&(Local_389.f_182), 1);
					}
				}
				MISC::SET_BIT(&(Local_389.f_182), 0);
			}
		}
		else
		{
			if (BitTest(Local_389.f_182, 0))
			{
				MISC::CLEAR_BIT(&(Local_389.f_182), 0);
			}
			if (BitTest(Local_389.f_182, 1))
			{
				MISC::CLEAR_BIT(&(Local_389.f_182), 1);
			}
			if (BitTest(Local_389.f_182, 3))
			{
				MISC::CLEAR_BIT(&(Local_389.f_182), 3);
			}
			if (Global_1957608)
			{
				Global_1957608 = 0;
			}
		}
	}
}

int func_108(int iParam0)
{
	if (func_28(iParam0) == 233)
	{
		return func_109(iParam0);
	}
	return -1;
}

int func_109(int iParam0)
{
	if (func_29(iParam0, 0))
	{
		return Global_1887549[iParam0 /*611*/].f_10.f_182;
	}
	return -1;
}

int func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_63(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_42(iVar1, 0, 1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				if (func_111(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), PLAYER::GET_PLAYER_PED(iVar1)))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false);
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == PLAYER::GET_PLAYER_PED(iVar1))
					{
						if (func_63(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_111(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) || !PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		return 0;
	}
	return PED::GET_VEHICLE_PED_IS_IN(iParam0, false) == PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
}

void func_112(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105[iParam0]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_105[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return;
	}
	switch (Local_105.f_21[iParam0])
	{
		case 0:
			if (!func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 64))
			{
				Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0] = 0;
				func_51(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f)
					{
						func_51(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if ((!func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 2) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f) && !func_25(PLAYER::PLAYER_ID()))
			{
				func_91(&(Local_389.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_117(&(Local_389.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_51(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_116(iParam0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, func_115(iParam0), -1, false);
				}
				if (func_114(iParam0, joaat("script_task_aim_gun_at_entity")))
				{
					func_51(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 8) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				if (!func_19(&Local_389))
				{
					func_16(&Local_389);
				}
				if (func_13(&Local_389) >= 7f && !func_25(PLAYER::PLAYER_ID()))
				{
					func_51(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 8);
					func_117(&(Local_389.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_19(&Local_389))
			{
				func_1(&Local_389);
			}
			if (!func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_113(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f)
				{
					func_51(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					if (!func_160())
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21595));
					}
				}
			}
			if (func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) > 900f)
					{
						func_47(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_113(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f)
				{
					func_51(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					if (!func_160())
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21595) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
					}
				}
			}
			if (func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) > 900f)
					{
						func_47(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_114(iParam0, joaat("script_task_aim_gun_at_entity")))
			{
				if (func_116(iParam0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, func_115(iParam0), -1, false);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_52(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_116(iParam0))
				{
					TASK::CLEAR_PED_TASKS(iVar0);
				}
				if (!func_114(iParam0, joaat("script_task_any")))
				{
					func_47(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
					func_47(&(Local_132[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_113(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105[iParam0]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_105[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105[iParam0]))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_105[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
			{
				fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar2, true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_105[iParam0]), true));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_116(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105[iParam0]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_105[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_117(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22432 = 0;
	Global_22434 = 0;
	Global_22439 = 0;
	Global_23416 = 0;
	Global_23418 = 0;
	Global_23422 = 0;
	Global_2883585 = 1;
	return func_69(sParam2, iParam3, 0);
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_119()
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("lazer")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_120(var uParam0, int iParam1)
{
	func_121(uParam0, iParam1);
}

void func_121(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_122(int iParam0)
{
	if (func_34(iParam0) == 236 || func_34(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_36.f_18, 0);
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_125(iParam0))
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

bool func_125(int iParam0)
{
	return func_126(iParam0);
}

var func_126(int iParam0)
{
	return BitTest(Global_1845221[iParam0 /*889*/].f_11.f_1, 0);
}

void func_127()
{
	STREAMING::REQUEST_MODEL(joaat("s_m_y_marine_01"));
	STREAMING::REQUEST_MODEL(joaat("lazer"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_pilot_01"));
}

int func_128()
{
	int iVar0;
	
	switch (Local_105.f_19)
	{
		case 0:
			if (func_150())
			{
				Local_105.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_149())
			{
				Local_105.f_19 = 2;
			}
			break;
		
		case 2:
			if (((((((func_124(PLAYER::PLAYER_ID(), 1, 0) || func_123()) || func_28(PLAYER::PLAYER_ID()) == 225) || func_28(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || func_24()) || Global_1836691) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_10()))
			{
				func_120(&(Local_105.f_20), 1);
				Local_105.f_19 = 3;
			}
			else if (func_147())
			{
				func_120(&(Local_105.f_20), 1);
				Local_105.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_124(PLAYER::PLAYER_ID(), 1, 0) && !func_123())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_144(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_131(iVar0);
					iVar0++;
				}
			}
			if (((((func_28(PLAYER::PLAYER_ID()) == 225 || func_28(PLAYER::PLAYER_ID()) == 233) || func_122(PLAYER::PLAYER_ID())) || Global_1836691) || func_24()) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_10()))
			{
				func_130();
			}
			if (func_129())
			{
				Local_105.f_19 = 4;
			}
			break;
		
		case 4:
			func_130();
			return 1;
			break;
	}
	return 0;
}

int func_129()
{
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_105[iVar0]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_105.f_3[iVar0 /*5*/].f_1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_3[iVar0 /*5*/]))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_105.f_3[iVar0 /*5*/]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_131(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (Local_105.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_3[iParam0 /*5*/].f_1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_105.f_3[iParam0 /*5*/].f_1), false))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_105.f_3[iParam0 /*5*/].f_1);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (Var1.f_2 <= -150f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_3[iParam0 /*5*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_105.f_3[iParam0 /*5*/]), false))
						{
							iVar4 = NETWORK::NET_TO_VEH(Local_105.f_3[iParam0 /*5*/]);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
	switch (Local_105.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_143(iParam0, 16))
			{
				Local_105.f_3[iParam0 /*5*/].f_4 = -1;
				Local_105.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_141(iParam0))
			{
				Local_105.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			Var5 = { func_140(iParam0) };
			if (!func_139(Var5))
			{
				if (!NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(Var5, 20f) && !CAM::IS_SPHERE_VISIBLE(Var5, 20f))
				{
					if (func_134(Var5, ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(Local_105.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_105.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_143(iParam0, 2))
			{
				Local_105.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar8 = PLAYER::GET_PLAYER_PED(Local_105.f_3[iParam0 /*5*/].f_4);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				Local_105.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (ENTITY::IS_ENTITY_DEAD(iVar8, false))
			{
				Local_105.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (PED::IS_PED_IN_ANY_PLANE(iVar8) || PED::IS_PED_IN_ANY_HELI(iVar8))
			{
				if (func_133(PED::GET_VEHICLE_PED_IS_IN(iVar8, false)))
				{
					Local_105.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_143(iParam0, 8))
			{
				Local_105.f_3[iParam0 /*5*/].f_2 = 6;
				Local_105.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_132(iParam0, 16))
			{
				Local_105.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_141(iParam0))
			{
				Local_105.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_52(Local_132[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0)
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

int func_134(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_3[iParam4 /*5*/]))
	{
		if (!func_136(&(Local_105.f_3[iParam4 /*5*/]), joaat("lazer"), Param0, fParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_105.f_3[iParam4 /*5*/]), 3);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_3[iParam4 /*5*/]))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_3[iParam4 /*5*/].f_1))
		{
			if (!func_135(&(Local_105.f_3[iParam4 /*5*/].f_1), Local_105.f_3[iParam4 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(NETWORK::NET_TO_PED(Local_105.f_3[iParam4 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				PED::SET_PED_CAN_SWITCH_WEAPON(NETWORK::NET_TO_PED(Local_105.f_3[iParam4 /*5*/].f_1), false);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_135(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_136(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka") || iParam1 == 858355070)
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2739811.f_6838 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_137(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_137(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_138(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635516.f_3231[1 /*6*/].f_5 == iParam5 && Global_2635516.f_3231[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635516.f_3231[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635516.f_3231[iVar0 /*6*/] = { Global_2635516.f_3231[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635516.f_3231[1 /*6*/] = { Param0 };
		Global_2635516.f_3231[1 /*6*/].f_3 = fParam3;
		Global_2635516.f_3231[1 /*6*/].f_4 = iParam4;
		Global_2635516.f_3231[1 /*6*/].f_5 = iParam5;
	}
}

int func_138(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_139(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_140(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = PLAYER::GET_PLAYER_PED(Local_105.f_3[iParam0 /*5*/].f_4);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0f, 0f, 0f;
	}
	Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -250f, (40f * SYSTEM::TO_FLOAT(iParam0))) };
	if (Var1.f_2 < 100f)
	{
		Var1.f_2 = 100f;
	}
	return Var1;
}

int func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!func_142(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))))
			{
				if (PED::IS_PED_IN_ANY_PLANE(iVar1) || PED::IS_PED_IN_ANY_HELI(iVar1))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))) >= 4)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
						if (func_22(Var2, 3, 1000, 0) && Var2.f_2 > 90f)
						{
							Local_105.f_3[iParam0 /*5*/].f_4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = PLAYER::GET_PLAYER_PED(Local_105.f_3[iVar1 /*5*/].f_4);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iParam0 == Local_105.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_52(Local_132[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_144(int iParam0)
{
	switch (Local_105.f_21[iParam0])
	{
		case 0:
			if (func_146(iParam0, 64))
			{
				Local_105.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_145(iParam0, 1))
			{
				Local_105.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_145(iParam0, 2))
			{
				Local_105.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_146(iParam0, 4))
			{
				Local_105.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_145(iParam0, 8))
			{
				Local_105.f_21[iParam0] = 5;
			}
			if (!func_145(iParam0, 1))
			{
				Local_105.f_21[iParam0] = 7;
			}
			if (func_145(iParam0, 16))
			{
				Local_105.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_145(iParam0, 16))
			{
				Local_105.f_21[iParam0] = 6;
			}
			if (!func_145(iParam0, 1))
			{
				Local_105.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_145(iParam0, 4))
			{
				Local_105.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_52(Local_132[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_146(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_52(Local_132[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_147()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_148(&(Local_105[0]), 29, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105[0]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_105[0]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	if (!func_148(&(Local_105[1]), 29, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105[1]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_105[1]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	return iVar0;
}

int func_148(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_149()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_118(Local_132[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_150()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_118(Local_132[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_151()
{
	if (!func_156())
	{
		return;
	}
	if (func_106(&uLocal_584) && func_104(&uLocal_584, Global_262145.f_21656, 0))
	{
		func_103(&uLocal_584);
	}
	if (func_106(&uLocal_582) && func_104(&uLocal_582, Global_262145.f_21657, 0))
	{
		func_103(&uLocal_582);
		iLocal_579 = 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
	{
		if (func_152())
		{
			if (!Global_2739811.f_6981)
			{
				Global_2739811.f_6981 = 1;
				func_57("BASE_EXP_WARN", -1);
			}
			if (!iLocal_579)
			{
				iLocal_579 = 1;
				func_105(&uLocal_584, 0, 0);
				func_105(&uLocal_582, 0, 0);
			}
			else if (!func_106(&uLocal_584))
			{
				PLAYER::SET_MAX_WANTED_LEVEL(func_2());
				bLocal_574 = true;
				bLocal_575 = true;
				iLocal_579 = 0;
				func_103(&uLocal_584);
				func_103(&uLocal_582);
			}
		}
	}
}

int func_152()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_155(&iLocal_580, iVar1);
		iLocal_581 = func_154();
		if (iLocal_581 >= 0)
		{
			iVar0 = func_153(iLocal_581);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_153(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 1:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 2:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 3:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 5:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 6:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 7:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 8:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 9:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 10:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 11:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 12:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 13:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 14:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 15:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 16:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 17:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 18:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 19:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 20:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 21:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 22:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 23:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 24:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 25:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 26:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return iVar0;
}

int func_154()
{
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 1;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 2;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 4;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 6;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 7;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 9;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 10;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 11;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 12;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 14;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 15;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 16;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 17;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 18;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 19;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 20;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 21;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 22;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 23;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 25;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_580, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 26;
	}
	return -1;
}

void func_155(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_156()
{
	int iVar0;
	
	if (func_159(PLAYER::PLAYER_ID(), 150) == 2)
	{
		return 0;
	}
	if (func_2() == 0)
	{
		return 0;
	}
	if (func_63(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_158(1))
	{
		iVar0 = func_157();
		if (iVar0 != func_43())
		{
			if (func_63(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_157()
{
	return Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10;
}

bool func_158(bool bParam0)
{
	return func_61(PLAYER::PLAYER_ID(), bParam0);
}

int func_159(int iParam0, int iParam1)
{
	if (func_34(iParam0) == iParam1)
	{
		return Global_1887549[iParam0 /*611*/].f_10.f_477;
	}
	return -1;
}

int func_160()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_159(PLAYER::PLAYER_ID(), 150) == 2)
	{
		return 1;
	}
	if (func_63(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_158(1))
	{
		iVar0 = func_157();
		if (iVar0 != func_43())
		{
			if (func_63(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_42(iVar2, 0, 1))
		{
			if (iVar2 != PLAYER::PLAYER_ID())
			{
				if (func_158(1))
				{
					if (func_162(PLAYER::PLAYER_ID(), iVar2))
					{
						if (func_63(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_161(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), PLAYER::GET_PLAYER_PED(iVar2)))
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false);
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false) == PLAYER::GET_PLAYER_PED(iVar2))
					{
						if (func_63(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_161(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_162(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_163(iParam0);
	if (func_30(iVar0))
	{
		if (iVar0 == func_163(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_163(int iParam0)
{
	if (func_30(iParam0))
	{
		return Global_1887549[iParam0 /*611*/].f_10;
	}
	return func_43();
}

int func_164()
{
	if (Global_1575056 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_171())
	{
		return 1;
	}
	if (Global_2699004)
	{
		return 1;
	}
	if (func_170())
	{
		return 1;
	}
	if (func_169(159))
	{
		if (!func_168())
		{
			return 1;
		}
	}
	if (func_169(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_165() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_165()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_165()
{
	switch (func_167())
	{
		case 0:
			return func_166();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_166()
{
	switch (Global_2699111)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_167()
{
	return Global_33087;
}

bool func_168()
{
	return Global_2684718.f_700;
}

int func_169(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return Global_2696416;
}

bool func_171()
{
	return Global_2684718.f_695;
}

void func_172()
{
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != 5)
	{
		if (func_179(5, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) <= 5)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != 3)
	{
		if (func_173(3, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(false) <= 3)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
			}
		}
	}
}

bool func_173(int iParam0, bool bParam1, bool bParam2)
{
	return func_174(1, iParam0, 1, bParam1, bParam2);
}

int func_174(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1686501, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_178(iParam0) - func_177(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_177(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_178(iParam0) - func_176(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_177(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_178(iParam0) - func_177(iParam0, 1));
		}
		if (!bParam4 && Global_1845221[PLAYER::PLAYER_ID() /*889*/] != 3)
		{
			iVar1 = (iVar1 - func_175(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1686501.f_1;
			break;
		
		case 1:
			return Global_1686501.f_2;
			break;
		
		case 2:
			return Global_1686501.f_3;
			break;
	}
	return 0;
}

int func_177(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657991[iVar0 /*467*/].f_222;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657991[iVar0 /*467*/].f_223;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657991[iVar0 /*467*/].f_224;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1686509;
			break;
		
		case 1:
			return Global_1686510;
			break;
		
		case 2:
			return Global_1686511;
			break;
	}
	return 0;
}

bool func_179(int iParam0, bool bParam1, bool bParam2)
{
	return func_174(0, iParam0, 1, bParam1, bParam2);
}

void func_180()
{
	SYSTEM::WAIT(0);
}

void func_181()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_129())
			{
				func_130();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(Local_389.f_172[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_389.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_577)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(func_2());
		iLocal_577 = 0;
	}
	Global_1957608 = 0;
	func_183();
	func_182();
}

void func_182()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_183()
{
	if (!Local_389.f_176)
	{
		return;
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_marine_01"));
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("lazer")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_pilot_01"));
	}
}

void func_184(struct<21> Param0)
{
	func_188(func_189(Param0.f_0), Param0);
	func_186(0, -1, 0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_105, 27, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_132, 257, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_185())
	{
		func_181();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_181();
	}
	Global_2739811.f_6973 = 0;
}

int func_185()
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
		if (func_171())
		{
			return 0;
		}
		if (func_169(157))
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

int func_186(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_182();
			}
			else
			{
				return 0;
			}
		}
		if (!func_187(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_182();
					}
					else
					{
						return 0;
					}
				}
				if (func_171())
				{
					if (!bParam2)
					{
						func_182();
					}
					else
					{
						return 0;
					}
				}
				if (func_169(157))
				{
					if (!bParam2)
					{
						func_182();
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
					func_182();
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
				func_182();
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
			func_182();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_187(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575056;
}

void func_188(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_182();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_189(int iParam0)
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
	switch (func_190(func_191(iParam0, 1)))
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

int func_190(int iParam0)
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

int func_191(int iParam0, bool bParam1)
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

