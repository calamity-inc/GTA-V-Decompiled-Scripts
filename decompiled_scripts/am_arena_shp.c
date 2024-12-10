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
	int iLocal_12 = 0;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	struct<66> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
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
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	struct<2> Local_104 = { 0, 0 } ;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
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
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 1;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	struct<33> ScriptParam_0 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_12 = -1;
	fLocal_13 = 0.001f;
	sLocal_16 = "NULL";
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_95(ScriptParam_0);
	}
	else
	{
		func_93();
	}
	while (true)
	{
		func_92();
		if (Global_262145.f_23711)
		{
			func_93();
		}
		if (func_84())
		{
			func_93();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (Global_4538070)
	{
		if (Global_4542153[iLocal_19 /*12*/].f_11)
		{
			func_81(iLocal_19);
			Global_4542153[iLocal_19 /*12*/].f_11 = 0;
		}
	}
	if (Local_20.f_65.f_8)
	{
		func_17(Local_20.f_65);
	}
	if ((Local_20.f_65.f_2 == 1 && Global_4538071) && func_16(&Local_20))
	{
		bVar0 = true;
	}
	if (Global_4536600[iLocal_19 /*84*/].f_65 == 2147483647 && Local_20.f_65.f_12)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_93();
	}
	if (Local_20.f_65.f_18 > 0 && !func_14())
	{
		iVar2 = (1000 / SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		if ((MISC::GET_FRAME_COUNT() - Local_20.f_65.f_18) > iVar2 * 10)
		{
			Local_20.f_65.f_18 = -1;
		}
	}
	if (((func_13() && Local_20.f_65.f_2 == 1) && Local_20.f_65.f_13) && !Local_20.f_65.f_12)
	{
		if (MISC::GET_FRAME_COUNT() - Local_20.f_65.f_14) >= func_12(Local_20.f_65.f_5)
		{
			iVar1 = 0;
			if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
			{
				iVar1 = 1;
			}
			else if (Local_20.f_65.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_20.f_65.f_5 != 1 && !NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&(Local_20.f_65), Local_20.f_65.f_6, Local_20.f_65.f_4, Local_20.f_65.f_7, Local_20.f_65.f_1, Local_20.f_65.f_10))
			{
				iVar1 = 3;
			}
			else if (!NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(Local_20.f_65))
			{
				iVar1 = 4;
			}
			else
			{
				Local_20.f_65.f_12 = 1;
				Global_4536600[iLocal_19 /*84*/].f_65.f_12 = 1;
				Global_4536600[iLocal_19 /*84*/].f_65 = Local_20.f_65;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_19);
				func_93();
			}
		}
	}
	if (!iLocal_150)
	{
		if (bVar0)
		{
			func_5(&Local_104, 0);
			iLocal_150 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_104.f_1), "HUD_TRANSP", 64);
		func_2(&Local_104, func_4(&Local_104));
	}
	else
	{
		iLocal_150 = 0;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_4(var uParam0)
{
	return uParam0->f_35;
}

void func_5(var uParam0, bool bParam1)
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_35 = 1;
}

void func_6(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_10(iParam0))
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
		func_8(&(Global_4536600[iParam0 /*84*/]));
	}
}

void func_8(var uParam0)
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
	func_9(&(uParam0->f_13));
	func_9(&(uParam0->f_13.f_13));
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

void func_9(var uParam0)
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

int func_10(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4536600[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

var func_11()
{
	return Global_1574926;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_4538073;
			break;
		
		case 1:
			return Global_4538072;
			break;
	}
	return 0;
}

int func_13()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

bool func_14()
{
	return Global_101740.f_400 > 0;
}

void func_15(bool bParam0)
{
	HUD::BUSYSPINNER_OFF();
	if (bParam0)
	{
		HUD::PRELOAD_BUSYSPINNER();
	}
}

int func_16(var uParam0)
{
	if (uParam0->f_65.f_4 == joaat("service_spend_cash_drop"))
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	bool bVar8;
	int iVar9;
	struct<66> Var10;
	bool bVar94;
	var uVar95;
	int iVar100;
	int iVar101;
	int iVar102;
	
	iVar7 = 0;
	bVar8 = false;
	if (!func_13())
	{
		iVar7 = 1;
		Var0.f_0 = iParam0;
		Var0.f_2 = 0;
	}
	if (iVar7 || SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		Var10.f_65 = 2147483647;
		iVar9 = func_80(Var0.f_0, &Var10);
		if (iVar9 != -1)
		{
			Global_4536600[iVar9 /*84*/].f_65.f_8 = 0;
			if (Global_4536600[iVar9 /*84*/].f_65.f_18 == 0)
			{
				Global_4536600[iVar9 /*84*/].f_65.f_18 = MISC::GET_FRAME_COUNT();
			}
		}
		bVar94 = true;
		if (iVar9 != -1)
		{
			Global_4536600[iVar9 /*84*/].f_65.f_17 = Var0.f_2;
		}
		else
		{
			Global_4538058.f_4 = Var0.f_2;
			Global_4538058.f_6 = Var0.f_3;
			Global_4538058.f_7 = Var0.f_4;
			Global_4538058.f_8 = Var0.f_5;
			Global_4538058.f_9 = Var0.f_6;
			if (Global_4538058.f_10 == 0)
			{
				Global_4538058.f_10 = MISC::GET_FRAME_COUNT();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar9 != -1)
				{
					Global_4542153[iVar9 /*12*/] = Global_4536600[iVar9 /*84*/].f_65.f_3;
					Global_4542153[iVar9 /*12*/].f_1 = Global_4536600[iVar9 /*84*/].f_65.f_7;
					Global_4542153[iVar9 /*12*/].f_2 = Global_4536600[iVar9 /*84*/].f_65.f_4;
					Global_4542153[iVar9 /*12*/].f_3 = Global_4536600[iVar9 /*84*/].f_65.f_1;
					Global_4542153[iVar9 /*12*/].f_5 = Var0.f_1;
					Global_4542153[iVar9 /*12*/].f_6 = Var0.f_3;
					Global_4542153[iVar9 /*12*/].f_7 = Var0.f_4;
					Global_4542153[iVar9 /*12*/].f_8 = Var0.f_5;
					Global_4542153[iVar9 /*12*/].f_9 = Var0.f_6;
					Global_4542153[iVar9 /*12*/].f_11 = 1;
					Global_4536600[iVar9 /*84*/].f_65.f_2 = 2;
					if (Global_4536600[iVar9 /*84*/].f_65.f_11 & 4 != 0)
					{
						func_33(iVar9, bVar94);
					}
					else if (func_13())
					{
						if (bVar94)
						{
							NETSHOPPING::NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Global_4536600[iVar9 /*84*/].f_65, &uVar95);
						}
					}
				}
				break;
			
			default:
				if (iVar9 != -1)
				{
					Global_4536600[iVar9 /*84*/].f_65.f_2 = 3;
					if ((Global_4536600[iVar9 /*84*/].f_65.f_11 & 1 != 0 && Global_4536600[iVar9 /*84*/].f_65.f_9 < 2) && func_32(Var0.f_2))
					{
						if (func_10(iVar9))
						{
							if (func_24())
							{
								Global_4536600[iVar9 /*84*/].f_65.f_2 = 1;
								Global_4536600[iVar9 /*84*/].f_65.f_9++;
							}
							else if (Global_4536600[iVar9 /*84*/].f_65.f_11 & 2 != 0)
							{
								Global_4538092 = Global_4536600[iVar9 /*84*/].f_65.f_4;
								Global_4538094 = Global_4536600[iVar9 /*84*/].f_65.f_6;
								Global_4538095 = Var0.f_2;
								Global_4538093 = Global_4536600[iVar9 /*84*/].f_65.f_1;
								if (func_23(Global_4538092) && func_13())
								{
									if (!func_22(Global_4536600[iVar9 /*84*/].f_65))
									{
										iVar100 = func_21();
										Global_4537945[iVar100 /*7*/] = Global_4536600[iVar9 /*84*/].f_65;
										Global_4537945[iVar100 /*7*/].f_2 = Global_4538092;
										Global_4537945[iVar100 /*7*/].f_3 = Global_4538094;
										Global_4537945[iVar100 /*7*/].f_1 = Global_4538093;
										Global_4537945[iVar100 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
									}
								}
								else
								{
									Global_4538089 = 1;
								}
							}
						}
						else if (func_20(&iVar9))
						{
							Global_4536600[iVar9 /*84*/].f_65.f_2 = 1;
							Global_4536600[iVar9 /*84*/].f_65.f_9++;
						}
						else if (Global_4536600[iVar9 /*84*/].f_65.f_11 & 2 != 0)
						{
							Global_4538092 = Global_4536600[iVar9 /*84*/].f_65.f_4;
							Global_4538094 = Global_4536600[iVar9 /*84*/].f_65.f_6;
							Global_4538095 = Var0.f_2;
							Global_4538093 = Global_4536600[iVar9 /*84*/].f_65.f_1;
							if (func_23(Global_4538092) && func_13())
							{
								if (!func_22(Global_4536600[iVar9 /*84*/].f_65))
								{
									iVar101 = func_21();
									Global_4537945[iVar101 /*7*/] = Global_4536600[iVar9 /*84*/].f_65;
									Global_4537945[iVar101 /*7*/].f_2 = Global_4538092;
									Global_4537945[iVar101 /*7*/].f_3 = Global_4538094;
									Global_4537945[iVar101 /*7*/].f_1 = Global_4538093;
									Global_4537945[iVar101 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
								}
							}
							else
							{
								Global_4538089 = 1;
							}
						}
					}
					else if (Global_4536600[iVar9 /*84*/].f_65.f_11 & 2 != 0)
					{
						Global_4538092 = Global_4536600[iVar9 /*84*/].f_65.f_4;
						Global_4538094 = Global_4536600[iVar9 /*84*/].f_65.f_6;
						Global_4538095 = Var0.f_2;
						Global_4538093 = Global_4536600[iVar9 /*84*/].f_65.f_1;
						if ((func_23(Global_4538092) && func_13()) && func_32(Var0.f_2))
						{
							if (!func_22(Global_4536600[iVar9 /*84*/].f_65))
							{
								iVar102 = func_21();
								Global_4537945[iVar102 /*7*/] = Global_4536600[iVar9 /*84*/].f_65;
								Global_4537945[iVar102 /*7*/].f_2 = Global_4538092;
								Global_4537945[iVar102 /*7*/].f_3 = Global_4538094;
								Global_4537945[iVar102 /*7*/].f_1 = Global_4538093;
								Global_4537945[iVar102 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
							}
						}
						else
						{
							Global_4538089 = 1;
						}
					}
					if (Global_4536600[iVar9 /*84*/].f_65.f_2 == 3)
					{
						if (bVar8)
						{
							func_19(1, Global_4536600[iVar9 /*84*/].f_65.f_4);
							Global_4538089 = 0;
						}
						if (Global_4536600[iVar9 /*84*/].f_65.f_11 & 4 != 0)
						{
							func_18(iVar9, Global_4536600[iVar9 /*84*/].f_65.f_4, Global_4536600[iVar9 /*84*/].f_65.f_10, Global_4536600[iVar9 /*84*/].f_65.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			MISC::SET_BIT(&(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_129.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)
{
	Global_2699102 = uParam1;
	Global_2699101 = iParam0;
}

int func_20(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (*iParam0 == -1 || func_10(*iParam0))
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4538090 = 1;
			return 0;
		}
		if (Global_2697881)
		{
			if (Global_4536600[*iParam0 /*84*/].f_65.f_6 == 1067618600 || Global_4536600[*iParam0 /*84*/].f_65.f_6 == -1303831698)
			{
				Global_4538091 = 1;
				return 0;
			}
		}
	}
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(Global_4536600[*iParam0 /*84*/].f_65))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_4536600[*iParam0 /*84*/].f_65.f_13 = 1;
		Global_4536600[*iParam0 /*84*/].f_65.f_12 = 0;
		Global_4536600[*iParam0 /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
		if (bVar0)
		{
			if (*iParam0 != -1)
			{
				Global_4536600[*iParam0 /*84*/].f_65.f_8 = 1;
				Global_4536600[*iParam0 /*84*/].f_65.f_12 = 1;
			}
		}
		Global_4536600[*iParam0 /*84*/].f_65.f_18 = 0;
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_4537945;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_4537945[iVar0 /*7*/] != 0 && Global_4537945[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_4537945;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_4537945[iVar0 /*7*/] == iParam0)
		{
			return 1;
		}
		if (Global_4537945[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_4537945[iVar0 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
			Global_4537945[iVar0 /*7*/].f_6 = 2147483647;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("service_earn_ambient_job_plane_takedown") || iParam0 == joaat("service_earn_ambient_job_distract_cops")) || iParam0 == joaat("service_earn_job_bonus")) || iParam0 == joaat("service_earn_bend_job")) || iParam0 == joaat("service_earn_jobs")) || iParam0 == joaat("service_earn_boss")) || iParam0 == joaat("service_earn_goon")) || iParam0 == joaat("service_earn_boss_agency")) || iParam0 == joaat("service_earn_from_destroying_contraband")) || iParam0 == joaat("service_earn_from_vehicle_export")) || iParam0 == joaat("service_earn_premium_job")) || iParam0 == joaat("service_earn_smuggler_agency")) || iParam0 == joaat("service_earn_wage_payment_bonus")) || iParam0 == joaat("service_earn_wage_payment")) || iParam0 == joaat("service_earn_job_bonus_criminal_mastermind")) || iParam0 == joaat("service_earn_job_bonus_heist_award")) || iParam0 == joaat("service_earn_job_bonus_first_time_bonus")) || iParam0 == joaat("service_earn_gangops_wages")) || iParam0 == joaat("service_earn_gangops_wages_bonus")) || iParam0 == joaat("service_earn_gangops_prep_participation")) || iParam0 == joaat("service_earn_gangops_setup")) || iParam0 == joaat("service_earn_gangops_finale")) || iParam0 == joaat("service_earn_gangops_award_mastermind_2")) || iParam0 == joaat("service_earn_gangops_award_mastermind_3")) || iParam0 == joaat("service_earn_gangops_award_mastermind_4")) || iParam0 == joaat("service_earn_gangops_award_loyalty_award_2")) || iParam0 == joaat("service_earn_gangops_award_loyalty_award_3")) || iParam0 == joaat("service_earn_gangops_award_loyalty_award_4")) || iParam0 == joaat("service_earn_gangops_award_first_time_xm_base")) || iParam0 == joaat("service_earn_gangops_award_first_time_xm_submarine")) || iParam0 == joaat("service_earn_gangops_award_first_time_xm_silo")) || iParam0 == joaat("service_earn_gangops_award_supporting")) || iParam0 == joaat("service_earn_gangops_award_order")) || iParam0 == joaat("service_earn_gangops_elite_xm_base")) || iParam0 == joaat("service_earn_gangops_elite_xm_submarine")) || iParam0 == joaat("service_earn_gangops_elite_xm_silo")) || iParam0 == joaat("service_earn_gangops_rival_delivery")) || iParam0 == joaat("service_earn_doomsday_finale_bonus")) || iParam0 == joaat("service_earn_bounty_hunter_reward")) || iParam0 == joaat("service_earn_from_business_battle")) || iParam0 == joaat("service_earn_from_club_management_participation")) || iParam0 == joaat("service_earn_from_fmbb_phonecall_mission")) || iParam0 == joaat("service_earn_from_business_hub_sell")) || iParam0 == joaat("service_earn_from_fmbb_boss_work")) || iParam0 == joaat("service_earn_fmbb_wage_bonus")) || iParam0 == joaat("service_earn_nightclub_dancing_award")) || iParam0 == joaat("service_earn_bb_event_bonus")) || iParam0 == joaat("service_earn_arena_skill_lvl_award")) || iParam0 == joaat("service_earn_arena_career_tier_progression_1")) || iParam0 == joaat("service_earn_arena_career_tier_progression_2")) || iParam0 == joaat("service_earn_arena_career_tier_progression_3")) || iParam0 == joaat("service_earn_arena_career_tier_progression_4")) || iParam0 == joaat("service_earn_spin_the_wheel_cash")) || iParam0 == joaat("service_earn_assassinate_target_killed")) || iParam0 == joaat("service_earn_arena_war")) || iParam0 == joaat("service_earn_ambient_job_rc_time_trial")) || iParam0 == joaat("service_earn_daily_objective_event")) || iParam0 == joaat("service_earn_collectables_action_figures")) || iParam0 == joaat("service_earn_casino_mission_reward")) || iParam0 == joaat("service_earn_casino_story_mission_reward")) || iParam0 == joaat("service_earn_casino_award_mission_one_first_time")) || iParam0 == joaat("service_earn_casino_award_mission_two_first_time")) || iParam0 == joaat("service_earn_casino_award_mission_three_first_time")) || iParam0 == joaat("service_earn_casino_award_mission_four_first_time")) || iParam0 == joaat("service_earn_casino_award_mission_five_first_time")) || iParam0 == joaat("service_earn_casino_award_mission_six_first_time")) || iParam0 == joaat("service_earn_casino_award_straight_flush")) || iParam0 == joaat("service_earn_casino_award_top_pair")) || iParam0 == joaat("service_earn_casino_award_full_house")) || iParam0 == joaat("service_earn_casino_award_lucky_lucky")) || iParam0 == joaat("service_earn_casino_award_high_roller_bronze")) || iParam0 == joaat("service_earn_casino_award_high_roller_silver")) || iParam0 == joaat("service_earn_casino_award_high_roller_gold")) || iParam0 == joaat("service_earn_casino_award_high_roller_platinum")) || iParam0 == joaat("service_earn_casino_heist_setup_mission")) || iParam0 == joaat("service_earn_casino_heist_prep_mission")) || iParam0 == joaat("service_earn_casino_heist_finale")) || iParam0 == joaat("service_earn_casino_heist_award_smash_n_grab")) || iParam0 == joaat("service_earn_casino_heist_award_in_plain_sight")) || iParam0 == joaat("service_earn_casino_heist_award_undetected")) || iParam0 == joaat("service_earn_casino_heist_award_all_rounder")) || iParam0 == joaat("service_earn_casino_heist_award_elite_thief")) || iParam0 == joaat("service_earn_casino_heist_award_professional")) || iParam0 == joaat("service_earn_casino_heist_elite_stealth")) || iParam0 == joaat("service_earn_casino_heist_elite_subterfuge")) || iParam0 == joaat("service_earn_casino_heist_elite_direct")) || iParam0 == joaat("service_earn_collectable_item")) || iParam0 == joaat("service_earn_collectable_completed_collection")) || iParam0 == joaat("service_earn_collectables_signal_jammers")) || iParam0 == joaat("service_earn_collectables_signal_jammers_complete")) || iParam0 == joaat("service_earn_island_heist_finale")) || iParam0 == joaat("service_earn_island_heist_elite_challenge")) || iParam0 == joaat("service_earn_island_heist_award_professional")) || iParam0 == joaat("service_earn_island_heist_award_elite_thief")) || iParam0 == joaat("service_earn_island_heist_award_the_island_heist")) || iParam0 == joaat("service_earn_island_heist_award_going_alone")) || iParam0 == joaat("service_earn_island_heist_award_team_work")) || iParam0 == joaat("service_earn_island_heist_award_cat_burglar")) || iParam0 == joaat("service_earn_island_heist_award_pro_thief")) || iParam0 == joaat("service_earn_island_heist_award_mixing_it_up")) || iParam0 == joaat("service_earn_island_heist_prep")) || iParam0 == joaat("service_earn_island_heist_dj_mission")) || iParam0 == joaat("service_earn_tuner_robbery_prep")) || iParam0 == joaat("service_earn_tuner_robbery_finale")) || iParam0 == joaat("service_earn_tuner_car_club_membership")) || iParam0 == joaat("service_earn_tuner_daily_vehicle")) || iParam0 == joaat("service_earn_tuner_daily_vehicle_bonus")) || iParam0 == joaat("service_earn_tuner_award_union_depository")) || iParam0 == joaat("service_earn_tuner_award_military_convoy")) || iParam0 == joaat("service_earn_tuner_award_fleeca_bank")) || iParam0 == joaat("service_earn_tuner_award_freight_train")) || iParam0 == joaat("service_earn_tuner_award_bolingbroke_ass")) || iParam0 == joaat("service_earn_tuner_award_iaa_raid")) || iParam0 == joaat("service_earn_tuner_award_meth_job")) || iParam0 == joaat("service_earn_tuner_award_bunker_raid")) || iParam0 == joaat("service_earn_auto_shop_delivery_award")) || iParam0 == joaat("service_earn_agency_security_contract")) || iParam0 == joaat("service_earn_agency_payphone_hit")) || iParam0 == joaat("service_earn_agency_story_prep")) || iParam0 == joaat("service_earn_agency_story_finale")) || iParam0 == joaat("service_earn_fixer_award_sec_con")) || iParam0 == joaat("service_earn_fixer_award_phone_hit")) || iParam0 == joaat("service_earn_fixer_award_agency_story")) || iParam0 == joaat("service_earn_fixer_award_short_trip")) || iParam0 == joaat("service_earn_fixer_rival_delivery")) || iParam0 == joaat("service_earn_music_studio_short_trip")) || iParam0 == joaat("service_earn_from_contraband")) || iParam0 == joaat("service_earn_nclub_troublemaker")) || iParam0 == joaat("service_earn_sightseeing_reward")) || iParam0 == joaat("service_earn_ambient_job_clubhouse_contract")) || iParam0 == joaat("service_earn_ambient_job_underwater_cargo")) || iParam0 == joaat("service_earn_ambient_job_crime_scene")) || iParam0 == joaat("service_earn_ambient_job_metal_detector")) || iParam0 == joaat("service_earn_ambient_job_smuggler_plane")) || iParam0 == joaat("service_earn_ambient_job_smuggler_trail")) || iParam0 == joaat("service_earn_ambient_job_golden_gun")) || iParam0 == joaat("service_earn_ambient_job_ammunation_delivery")) || iParam0 == joaat("service_earn_ambient_job_source_research")) || iParam0 == joaat("service_earn_yohan_source_goods")) || iParam0 == joaat("service_earn_taxi_job")) || iParam0 == joaat("service_earn_daily_stash_house_participation")) || iParam0 == joaat("service_earn_daily_stash_house_completed")) || iParam0 == joaat("service_earn_ambient_job_gang_convoy")) || iParam0 == joaat("service_earn_ambient_job_shop_robbery")) || iParam0 == joaat("service_earn_ambient_job_xmas_mugger")) || iParam0 == joaat("service_earn_ambient_job_maze_bank")) || iParam0 == joaat("service_earn_juggalo_story_mission")) || iParam0 == joaat("service_earn_juggalo_phone_mission")) || iParam0 == joaat("service_earn_winter_22_award_juggalo_story")) || iParam0 == joaat("service_earn_winter_22_award_acid_lab")) || iParam0 == joaat("service_earn_winter_22_award_daily_stash")) || iParam0 == joaat("service_earn_winter_22_award_dead_drop")) || iParam0 == joaat("service_earn_winter_22_award_random_event")) || iParam0 == joaat("service_earn_winter_22_award_taxi")) || iParam0 == joaat("service_earn_acid_lab_setup_participation")) || iParam0 == joaat("service_earn_acid_lab_source_participation")) || iParam0 == joaat("service_earn_acid_lab_sell_participation")) || iParam0 == joaat("service_earn_smuggler_ops")) || iParam0 == joaat("service_earn_ambient_job_armored_truck")) || iParam0 == joaat("service_earn_ambient_job_bicycle_time_trial")) || iParam0 == joaat("service_earn_cayo_attrition_bonus_objective")) || iParam0 == joaat("service_earn_avenger_operations")) || iParam0 == joaat("service_earn_avenger_ops_bonus")) || iParam0 == joaat("service_earn_ambient_job_drug_vehicle")) || iParam0 == 649031587) || iParam0 == -1539520895) || iParam0 == 560526114) || iParam0 == -256590568) || iParam0 == -470808433) || iParam0 == 1245164680) || iParam0 == 1648751987) || iParam0 == 674719198) || iParam0 == -1433838369) || iParam0 == 1424147761) || iParam0 == 617724895) || iParam0 == 2131157548) || iParam0 == 1237940902) || iParam0 == -1688538833) || iParam0 == 918785029) || iParam0 == -1343182760) || iParam0 == -1725871206) || iParam0 == 1435585629) || iParam0 == 1851118721) || iParam0 == -1961446392) || iParam0 == -1726080156) || iParam0 == 300207193) || iParam0 == 1378095557) || iParam0 == -1948553812) || iParam0 == -1672547752) || iParam0 == -485163763) || iParam0 == 723646035) || iParam0 == 805615290)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_31();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_30(Global_4536600[iVar2 /*84*/].f_65.f_6, Global_4536600[iVar2 /*84*/].f_65.f_4, Global_4536600[iVar2 /*84*/].f_65.f_1) == 1)
			{
				Global_4538090 = 1;
			}
			return 0;
		}
		if (Global_2697881)
		{
			if (Global_4536600[iVar2 /*84*/].f_65.f_6 == 1067618600 || Global_4536600[iVar2 /*84*/].f_65.f_6 == -1303831698)
			{
				Global_4538091 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_29(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4536600[iVar2 /*84*/].f_65.f_13 = 1;
			Global_4536600[iVar2 /*84*/].f_65.f_12 = 0;
			Global_4536600[iVar2 /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4536600[iVar2 /*84*/].f_65.f_8 = 1;
				Global_4536600[iVar2 /*84*/].f_65.f_12 = 1;
			}
			Global_4536600[iVar2 /*84*/].f_65.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_25(Global_4536600[iVar2 /*84*/], iVar2);
			}
			Global_4538071 = 1;
			return 1;
		}
	}
	return 0;
}

void func_25(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)
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
	iVar36 = func_27(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_26();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 36, iVar36, Var0.f_0);
	}
}

void func_26()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_27(int iParam0)
{
	var uVar0;
	
	if (func_28(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_28(var uParam0)
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

int func_29(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4536600[iParam0 /*84*/].f_65;
	}
	return -1;
}

int func_30(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case joaat("service_spend_match_entry_fee"):
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("service_earn_pickup"):
			case joaat("service_earn_ambient_mugging"):
			case joaat("service_earn_ambient_pickup"):
			case joaat("service_earn_deathmatch_bounty"):
			case joaat("service_earn_cashing_out"):
			case joaat("service_earn_refund_arena_spec_box_entry"):
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case joaat("service_earn_debug"):
				return 0;
				break;
			
			case joaat("service_earn_initial_cash"):
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
			case joaat("service_earn_refundammodrop"):
			case joaat("service_earn_salvage_checkpoint_collection"):
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
			case joaat("service_earn_nightclub_dancing_award"):
			case joaat("service_earn_bb_event_bonus"):
			case joaat("service_earn_arena_skill_lvl_award"):
			case joaat("service_earn_arena_career_tier_progression_1"):
			case joaat("service_earn_arena_career_tier_progression_2"):
			case joaat("service_earn_arena_career_tier_progression_3"):
			case joaat("service_earn_arena_career_tier_progression_4"):
			case joaat("service_earn_spin_the_wheel_cash"):
			case joaat("service_earn_assassinate_target_killed"):
			case joaat("service_earn_arena_war"):
			case joaat("service_earn_ambient_job_rc_time_trial"):
			case joaat("service_earn_daily_objective_event"):
			case joaat("service_earn_collectables_action_figures"):
			case joaat("service_earn_casino_mission_reward"):
			case joaat("service_earn_casino_story_mission_reward"):
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
			case joaat("service_earn_casino_heist_setup_mission"):
			case joaat("service_earn_casino_heist_prep_mission"):
				return 1;
				break;
			
			case joaat("service_spend_airstrike"):
			case joaat("service_spend_ammo_drop"):
			case joaat("service_spend_backup_gang"):
			case joaat("service_spend_backup_heli"):
			case joaat("service_spend_boat_pickup"):
			case joaat("service_spend_bounty"):
			case joaat("service_spend_bull_shark"):
			case joaat("service_spend_car_impound"):
			case joaat("service_spend_cash_shared"):
			case joaat("service_spend_challenge_wager"):
			case joaat("service_spend_cops_turn_eye"):
			case joaat("service_spend_heli_pickup"):
			case joaat("service_spend_hire_mercenary"):
			case joaat("service_spend_hire_mugger"):
			case joaat("service_spend_locate_vehicle"):
			case joaat("service_spend_lose_wanted_level"):
			case joaat("service_spend_off_the_radar"):
			case joaat("service_spend_pegasus_delivery"):
			case joaat("service_spend_reveal_players"):
			case joaat("service_spend_vehicle_insurance"):
			case joaat("service_spend_vehicle_insurance_premium"):
				return 2;
				break;
		}
		switch (iParam1)
		{
			case joaat("service_earn_casino_heist_award_smash_n_grab"):
			case joaat("service_earn_casino_heist_award_in_plain_sight"):
			case joaat("service_earn_casino_heist_award_undetected"):
			case joaat("service_earn_casino_heist_award_all_rounder"):
			case joaat("service_earn_casino_heist_award_elite_thief"):
			case joaat("service_earn_casino_heist_award_professional"):
			case joaat("service_earn_casino_heist_finale"):
			case joaat("service_earn_casino_heist_elite_stealth"):
			case joaat("service_earn_casino_heist_elite_subterfuge"):
			case joaat("service_earn_casino_heist_elite_direct"):
			case joaat("service_earn_collectable_completed_collection"):
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
			case 1648751987:
			case 674719198:
			case -1433838369:
			case 1424147761:
			case 617724895:
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
				if (iParam2 == 0)
				{
					return 0;
				}
				return 1;
				break;
			
			case joaat("service_earn_collectable_item"):
			case joaat("service_earn_collectables_signal_jammers"):
				return 2;
				break;
		}
		return 0;
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_31()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_29(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_32(int iParam0)
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return 1;
	}
	return 0;
}

void func_33(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	struct<10> Var6;
	int iVar16;
	struct<3> Var17;
	var uVar20;
	
	if (iParam0 == -1)
	{
		return;
	}
	NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_29(iParam0));
	if (Global_4536600[iParam0 /*84*/].f_65.f_10 == 1)
	{
	}
	else if (Global_4536600[iParam0 /*84*/].f_65.f_10 == 4)
	{
		bVar0 = true;
	}
	else if (Global_4536600[iParam0 /*84*/].f_65.f_10 == 2)
	{
		bVar1 = true;
	}
	Var6 = -1;
	Var6.f_1 = -1;
	Var6.f_2 = -1;
	Var6.f_3 = -1;
	Var6.f_4 = -1;
	Var6.f_5 = -1;
	Var6.f_6 = -1;
	Var6.f_7 = -1;
	Var6.f_8 = -1;
	Var6.f_9 = -1;
	func_79(&Var6);
	switch (Global_4536600[iParam0 /*84*/].f_65.f_4)
	{
		case joaat("service_spend_move_yacht"):
			MONEY::NETWORK_SPENT_MOVE_YACHT(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, bVar0);
			break;
		
		case joaat("service_spend_lose_wanted_level"):
			if (func_78(Global_4536600[iParam0 /*84*/].f_13))
			{
				MONEY::NETWORK_SPENT_BUY_WANTEDLEVEL(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13), bVar1, bVar0, 0);
			}
			break;
		
		case joaat("service_spend_vehicle_insurance_premium"):
			MONEY::NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], &(Global_4536600[iParam0 /*84*/].f_13), bVar1, bVar0);
			break;
		
		case joaat("service_spend_cinema"):
			MONEY::NETWORK_SPENT_CINEMA(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_1, bVar1, bVar0);
			break;
		
		case joaat("service_spend_strip_club"):
			MONEY::NETWORK_SPENT_IN_STRIPCLUB(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, Global_4536600[iParam0 /*84*/].f_2, bVar0);
			break;
		
		case joaat("service_earn_job_bonus"):
			MONEY::NETWORK_EARN_FROM_JOB_BONUS(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), &(Global_4536600[iParam0 /*84*/].f_13.f_34));
			break;
		
		case joaat("service_spend_telescope"):
			MONEY::NETWORK_SPENT_TELESCOPE(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, bVar0);
			break;
		
		case joaat("service_spend_call_player"):
			MONEY::NETWORK_SPENT_CALL_PLAYER(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13), bVar1, bVar0);
			break;
		
		case joaat("service_spend_carwash"):
			MONEY::NETWORK_SPENT_CARWASH(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_1, bVar1, bVar0);
			break;
		
		case joaat("service_earn_crate_drop"):
			MONEY::NETWORK_EARN_FROM_CRATE_DROP(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_spend_match_entry_fee"):
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), bVar1, bVar0);
			break;
		
		case joaat("service_spend_race_vehicle_rental"):
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), bVar1, bVar0);
			break;
		
		case joaat("service_spend_healthcare"):
			MONEY::NETWORK_BUY_HEALTHCARE(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, bVar0);
			break;
		
		case joaat("service_earn_betting"):
			MONEY::NETWORK_EARN_FROM_BETTING(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_34));
			break;
		
		case joaat("service_spend_cash_drop"):
			MONEY::NETWORK_SPENT_CASH_DROP(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, bVar0);
			break;
		
		case joaat("service_spend_arrest_bail"):
			MONEY::NETWORK_SPENT_ARREST_BAIL(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, bVar0);
			break;
		
		case joaat("service_earn_daily_objectives"):
			MONEY::NETWORK_EARN_FROM_DAILY_OBJECTIVES(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_34), -1);
			break;
		
		case joaat("service_spend_bounty_dm"):
			MONEY::NETWORK_SPENT_BOUNTY(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, bVar0);
			break;
		
		case joaat("service_spend_wager"):
			MONEY::NETWORK_SPENT_WAGER(Global_4536600[iParam0 /*84*/].f_6, Global_4536600[iParam0 /*84*/].f_7, Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_spend_pay_boss"):
			MONEY::NETWORK_SPEND_BOSS(Global_4536600[iParam0 /*84*/].f_6, Global_4536600[iParam0 /*84*/].f_7, Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_spend_pay_goon"):
			MONEY::NETWORK_SPEND_GOON(Global_4536600[iParam0 /*84*/].f_6, Global_4536600[iParam0 /*84*/].f_7, Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_spend_rename_organization"):
			MONEY::NETWORK_SPENT_RENAME_ORGANIZATION(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, bVar0, &(Global_4536600[iParam0 /*84*/].f_13.f_26));
			break;
		
		case joaat("service_spend_rename_acid_product"):
			MONEY::_NETWORK_SPEND_RENAME_ACID_PRODUCT(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, bVar0, func_77(&(Global_1907163[PLAYER::PLAYER_ID() /*306*/].f_274)));
			break;
		
		case joaat("service_spend_rename_acid_lab"):
			MONEY::_NETWORK_SPEND_RENAME_ACID_LAB(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, bVar0, func_77(&(Global_1907163[PLAYER::PLAYER_ID() /*306*/].f_290)));
			break;
		
		case joaat("service_earn_jobs"):
			MONEY::NETWORK_EARN_FROM_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26));
			break;
		
		case joaat("service_earn_premium_job"):
			MONEY::NETWORK_EARN_FROM_PREMIUM_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26));
			break;
		
		case joaat("service_spend_car_impound"):
			MONEY::NETWORK_BUY_ITEM(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], 14, 1, bVar1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 0, 0, 0, bVar0);
			break;
		
		case joaat("service_spend_passive"):
			MONEY::NETWORK_SPENT_BUY_PASSIVE_MODE(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, bVar0, 0);
			break;
		
		case joaat("service_earn_bounty_collected"):
			MONEY::NETWORK_EARN_FROM_BOUNTY(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13), &(Global_4536600[iParam0 /*84*/].f_13.f_13), 1);
			break;
		
		case joaat("service_earn_gangattack_pickup"):
			MONEY::NETWORK_EARN_FROM_GANGATTACK_PICKUP(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_pickup"):
		case joaat("service_earn_ambient_mugging"):
		case joaat("service_earn_ambient_pickup"):
		case joaat("service_earn_deathmatch_bounty"):
			MONEY::NETWORK_EARN_FROM_PICKUP(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_armored_trucks"):
			MONEY::NETWORK_EARN_FROM_ROB_ARMORED_CARS(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_holdups"):
			MONEY::NETWORK_EARN_FROM_HOLDUPS(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_spend_mechanic_wage"):
			MONEY::NETWORK_PAY_EMPLOYEE_WAGE(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, bVar0);
			break;
		
		case joaat("service_spend_utility_bills"):
			MONEY::NETWORK_SPEND_APARTMENT_UTILITIES(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, bVar0, &Global_4542365);
			break;
		
		case joaat("service_spend_pa_service_dancer"):
			MONEY::NETWORK_SPENT_PA_SERVICE_DANCER(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], bVar1, bVar0);
			break;
		
		case joaat("service_spend_pa_service_heli_pickup"):
			MONEY::NETWORK_SPENT_PA_HELI_PICKUP(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], bVar1, bVar0);
			break;
		
		case joaat("service_spend_ba_vp_bounty"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_1, bVar1, bVar0);
			break;
		
		case joaat("service_spend_ba_vp_bullshark"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_1, bVar1, bVar0);
			break;
		
		case joaat("service_spend_ba_sarge_ammo"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_1, bVar1, bVar0);
			break;
		
		case joaat("service_spend_ba_sarge_molotov"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_1, bVar1, bVar0);
			break;
		
		case joaat("service_spend_ba_enforcer_armour"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_1, bVar1, bVar0);
			break;
		
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
		case joaat("service_earn_refundammodrop"):
		case joaat("service_earn_refund_arena_spec_box_entry"):
			MONEY::NETWORK_REFUND_CASH(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_40), &(Global_4536600[iParam0 /*84*/].f_13.f_44), bVar1);
			break;
		
		case joaat("service_earn_ambient_job_destroy_veh"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_distract_cops"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_plane_takedown"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case joaat("service_spend_fairground"):
			MONEY::NETWORK_BUY_FAIRGROUND_RIDE(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_1, bVar1, bVar0, 0);
			break;
		
		case joaat("service_spend_robbed_by_mugger"):
			MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(Global_4536600[iParam0 /*84*/].f_65.f_1, false, false, 0);
			break;
		
		case joaat("service_earn_import_export"):
			MONEY::NETWORK_EARN_FROM_IMPORT_EXPORT(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_3);
			break;
		
		case joaat("service_earn_lester_target_kill"):
			MONEY::NETWORK_EARN_FROM_AI_TARGET_KILL(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_spend_request_job"):
			MONEY::NETWORK_SPENT_REQUEST_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, bVar0, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_spend_taxi"):
			if (Global_4536600[iParam0 /*84*/].f_65.f_16 == 1)
			{
				iVar16 = 1;
			}
			MONEY::NETWORK_SPENT_TAXI(Global_4536600[iParam0 /*84*/].f_65.f_1, bVar1, bVar0, 0, iVar16);
			break;
		
		case joaat("service_earn_bend_job"):
			MONEY::NETWORK_EARN_FROM_BEND_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26));
			break;
		
		case joaat("service_earn_challenge_win"):
			MONEY::NETWORK_EARN_FROM_CHALLENGE_WIN(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_34), func_76(iParam0, 0));
			break;
		
		case joaat("service_earn_not_badsport"):
			MONEY::NETWORK_EARN_FROM_NOT_BADSPORT(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_spend_impromptu_race_fee"):
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4536600[iParam0 /*84*/].f_65.f_1, "RaceToPoint", false, false);
			break;
		
		case joaat("service_spend_prostitutes"):
			MONEY::NETWORK_SPENT_PROSTITUTES(Global_4536600[iParam0 /*84*/].f_65.f_1, false, false);
			break;
		
		case joaat("service_spend_pegasus_delivery"):
			MONEY::NETWORK_BUY_ITEM(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_5, 1, bVar1, &(Global_4536600[iParam0 /*84*/].f_13.f_40), 0, 0, 0, bVar0);
			break;
		
		case -2085313189:
			switch (Global_4536600[iParam0 /*84*/].f_65.f_6)
			{
				case 1067618600:
					MONEY::NETWORK_BUY_ITEM(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_5, 1, bVar1, &(Global_4536600[iParam0 /*84*/].f_13.f_40), 0, 0, 0, bVar0);
					break;
			}
			break;
		
		case joaat("service_spend_betting"):
			MONEY::NETWORK_SPENT_BETTING(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, &(Global_4536600[iParam0 /*84*/].f_13.f_34), false, false);
			break;
		
		case joaat("service_earn_ambient_job_hot_target_deliver"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_hot_target_kill"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_urban_warfare"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_checkpoint_collection"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_time_trial"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_challenges"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_heli_hot_target"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_dead_drop"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_penned_in"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_pass_parcel"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_blast"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_hot_property"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_king"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_beast"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case joaat("service_earn_boss"):
			MONEY::NETWORK_EARN_BOSS(Global_4536600[iParam0 /*84*/].f_6, Global_4536600[iParam0 /*84*/].f_7, Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_goon"):
			MONEY::NETWORK_EARN_GOON(Global_4536600[iParam0 /*84*/].f_6, Global_4536600[iParam0 /*84*/].f_7, Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_boss_agency"):
			MONEY::NETWORK_EARN_AGENCY(Global_4536600[iParam0 /*84*/].f_6, Global_4536600[iParam0 /*84*/].f_7, Global_4536600[iParam0 /*84*/].f_65.f_1, func_76(iParam0, 1));
			break;
		
		case joaat("service_earn_from_contraband"):
			MONEY::NETWORK_EARN_FROM_CONTRABAND(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_8);
			break;
		
		case joaat("service_earn_from_destroying_contraband"):
			MONEY::NETWORK_EARN_FROM_DESTROYING_CONTRABAND(Global_4536600[iParam0 /*84*/].f_65.f_1, -1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_spend_order_bodyguard_vehicle"):
			MONEY::NETWORK_SPENT_ORDER_BODYGUARD_VEHICLE(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], 0, 1);
			break;
		
		case joaat("service_spend_order_warehouse_vehicle"):
			MONEY::NETWORK_SPENT_ORDER_WAREHOUSE_VEHICLE(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], 0, 1);
			break;
		
		case joaat("service_spend_jukebox"):
			MONEY::NETWORK_SPENT_JUKEBOX(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], 0, 0);
			break;
		
		case joaat("service_spend_business"):
			MONEY::NETWORK_SPENT_PAY_BUSINESS_SUPPLIES(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_1, Global_4536600[iParam0 /*84*/].f_8);
			break;
		
		case joaat("service_earn_from_vehicle_export"):
			MONEY::NETWORK_EARN_FROM_VEHICLE_EXPORT(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_6, Global_4536600[iParam0 /*84*/].f_7);
			break;
		
		case joaat("service_spend_vehicle_export_mods"):
			MONEY::NETWORK_SPENT_VEHICLE_EXPORT_MODS(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4536600[iParam0 /*84*/].f_6, Global_4536600[iParam0 /*84*/].f_7, Global_4536600[iParam0 /*84*/].f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_9, Global_4536600[iParam0 /*84*/].f_10, Global_4536600[iParam0 /*84*/].f_11);
			break;
		
		case joaat("service_spend_import_export_repair"):
			MONEY::NETWORK_SPENT_IMPORT_EXPORT_REPAIR(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1);
			break;
		
		case joaat("service_earn_smuggler_agency"):
			MONEY::NETWORK_EARN_SMUGGLER_AGENCY(Global_4536600[iParam0 /*84*/].f_6, Global_4536600[iParam0 /*84*/].f_7, Global_4536600[iParam0 /*84*/].f_65.f_1, func_76(iParam0, 1));
			break;
		
		case joaat("service_earn_wage_payment_bonus"):
			MONEY::NETWORK_EARN_WAGE_PAYMENT_BONUS(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_wage_payment"):
			MONEY::NETWORK_EARN_WAGE_PAYMENT(Global_4536600[iParam0 /*84*/].f_65.f_1, 0);
			break;
		
		case joaat("service_earn_salvage_checkpoint_collection"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case joaat("service_earn_cashing_out"):
			MONEY::NETWORK_EARN_FROM_CASHING_OUT(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_job_bonus_criminal_mastermind"):
			MONEY::NETWORK_EARN_FROM_CRIMINAL_MASTERMIND(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), &(Global_4536600[iParam0 /*84*/].f_13.f_34));
			break;
		
		case joaat("service_earn_job_bonus_heist_award"):
			MONEY::NETWORK_EARN_HEIST_AWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), &(Global_4536600[iParam0 /*84*/].f_13.f_34));
			break;
		
		case joaat("service_earn_job_bonus_first_time_bonus"):
			MONEY::NETWORK_EARN_FIRST_TIME_BONUS(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), &(Global_4536600[iParam0 /*84*/].f_13.f_34));
			break;
		
		case joaat("service_spend_employ_assassins"):
			MONEY::NETWORK_SPENT_EMPLOY_ASSASSINS(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_refund_orbital_manual"):
			MONEY::NETWORK_EARN_TARGET_REFUND(Global_4536600[iParam0 /*84*/].f_65.f_1, 0);
			break;
		
		case joaat("service_earn_refund_orbital_auto"):
			MONEY::NETWORK_EARN_TARGET_REFUND(Global_4536600[iParam0 /*84*/].f_65.f_1, 1);
			break;
		
		case joaat("service_earn_gangops_wages"):
			MONEY::NETWORK_EARN_GANGOPS_WAGES(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_gangops_wages_bonus"):
			MONEY::NETWORK_EARN_GANGOPS_WAGES_BONUS(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_gangops_prep_participation"):
			MONEY::NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_gangops_setup"):
		case joaat("service_earn_gangops_setup_fail"):
			MONEY::NETWORK_EARN_GANGOPS_SETUP(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26));
			break;
		
		case joaat("service_earn_gangops_finale"):
			MONEY::NETWORK_EARN_GANGOPS_FINALE(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26));
			break;
		
		case joaat("service_earn_gangops_award_mastermind_2"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 0);
			break;
		
		case joaat("service_earn_gangops_award_mastermind_3"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 1);
			break;
		
		case joaat("service_earn_gangops_award_mastermind_4"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 2);
			break;
		
		case joaat("service_earn_gangops_award_loyalty_award_2"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 3);
			break;
		
		case joaat("service_earn_gangops_award_loyalty_award_3"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 4);
			break;
		
		case joaat("service_earn_gangops_award_loyalty_award_4"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 5);
			break;
		
		case joaat("service_earn_gangops_award_first_time_xm_base"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 6);
			break;
		
		case joaat("service_earn_gangops_award_first_time_xm_submarine"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 7);
			break;
		
		case joaat("service_earn_gangops_award_first_time_xm_silo"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 8);
			break;
		
		case joaat("service_earn_gangops_award_supporting"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 9);
			break;
		
		case joaat("service_earn_gangops_award_order"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 10);
			break;
		
		case joaat("service_earn_gangops_elite_xm_base"):
			MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 0);
			break;
		
		case joaat("service_earn_gangops_elite_xm_submarine"):
			MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 1);
			break;
		
		case joaat("service_earn_gangops_elite_xm_silo"):
			MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), 2);
			break;
		
		case joaat("service_earn_gangops_rival_delivery"):
			break;
		
		case joaat("service_spend_gangops_repair_cost"):
			break;
		
		case joaat("service_earn_doomsday_finale_bonus"):
			MONEY::NETWORK_EARN_DOOMSDAY_FINALE_BONUS(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_8);
			break;
		
		case joaat("service_spend_gangops_skip_mission"):
			MONEY::NETWORK_SPEND_GANGOPS_SKIP_MISSION(Global_4536600[iParam0 /*84*/].f_8, Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1);
			break;
		
		case joaat("service_spend_gangops_start_strand"):
			MONEY::NETWORK_SPEND_GANGOPS_START_STRAND(Global_4536600[iParam0 /*84*/].f_8, Global_4536600[iParam0 /*84*/].f_65.f_1, false, true);
			break;
		
		case joaat("service_earn_bounty_hunter_reward"):
			MONEY::NETWORK_EARN_BOUNTY_HUNTER_REWARD(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_spend_nightclub_entry_fee"):
			if (func_75(PLAYER::INT_TO_PLAYERINDEX(Global_4536600[iParam0 /*84*/]), 0, 0))
			{
				MONEY::NETWORK_SPENT_NIGHTCLUB_ENTRY_FEE(PLAYER::INT_TO_PLAYERINDEX(Global_4536600[iParam0 /*84*/]), Global_4536600[iParam0 /*84*/].f_1, Global_4536600[iParam0 /*84*/].f_65.f_1, false, true);
			}
			break;
		
		case joaat("service_spend_nightclub_dj_rehire"):
			MONEY::NETWORK_SPENT_REHIRE_DJ(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], false, true);
			break;
		
		case joaat("service_spend_nightclub_bar_drink"):
			MONEY::NETWORK_SPEND_NIGHTCLUB_BAR_DRINK(Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_1, false, true);
			break;
		
		case joaat("service_earn_from_business_battle"):
			MONEY::NETWORK_EARN_FROM_BUSINESS_BATTLE(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_from_club_management_participation"):
			MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_from_fmbb_phonecall_mission"):
			MONEY::NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_from_business_hub_sell"):
			MONEY::NETWORK_EARN_FROM_BUSINESS_HUB_SELL(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_1, Global_4536600[iParam0 /*84*/].f_8);
			break;
		
		case joaat("service_earn_from_fmbb_boss_work"):
			MONEY::NETWORK_EARN_FROM_FMBB_BOSS_WORK(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_fmbb_wage_bonus"):
			MONEY::NETWORK_EARN_FMBB_WAGE_BONUS(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_spend_arena_join_spectator"):
			MONEY::NETWORK_SPENT_ARENA_JOIN_SPECTATOR(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_15, false, true);
			break;
		
		case joaat("service_earn_bb_event_bonus"):
			MONEY::NETWORK_EARN_BB_EVENT_BONUS(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_arena_skill_lvl_award"):
			MONEY::NETWORK_EARN_ARENA_SKILL_LEVEL_PROGRESSION(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_15);
			break;
		
		case joaat("service_earn_arena_career_tier_progression_1"):
		case joaat("service_earn_arena_career_tier_progression_2"):
		case joaat("service_earn_arena_career_tier_progression_3"):
		case joaat("service_earn_arena_career_tier_progression_4"):
			MONEY::NETWORK_EARN_ARENA_CAREER_PROGRESSION(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_15);
			break;
		
		case joaat("service_spend_arena_spectator_box"):
			MONEY::NETWORK_SPEND_ARENA_SPECTATOR_BOX(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], false, true);
			break;
		
		case joaat("service_spend_make_it_rain"):
			MONEY::NETWORK_SPEND_MAKE_IT_RAIN(Global_4536600[iParam0 /*84*/].f_65.f_1, false, false);
			break;
		
		case joaat("service_earn_spin_the_wheel_cash"):
			MONEY::NETWORK_EARN_SPIN_THE_WHEEL_CASH(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_spend_spin_the_wheel_payment"):
			MONEY::NETWORK_SPEND_SPIN_THE_WHEEL_PAYMENT(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, true);
			break;
		
		case joaat("service_earn_assassinate_target_killed"):
			MONEY::NETWORK_EARN_ARENA_WAR_ASSASSINATE_TARGET(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_arena_war"):
			MONEY::NETWORK_EARN_ARENA_WAR(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_16, Global_4536600[iParam0 /*84*/].f_1);
			break;
		
		case joaat("service_earn_ambient_job_rc_time_trial"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, "RC_TIME_TRIAL", &uVar2);
			break;
		
		case joaat("service_earn_daily_objective_event"):
			MONEY::NETWORK_EARN_DAILY_OBJECTIVE_EVENT(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_collectables_action_figures"):
			MONEY::NETWORK_EARN_COLLECTABLES_ACTION_FIGURES(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_casino_mission_reward"):
			MONEY::NETWORK_EARN_CASINO_MISSION_REWARD(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_casino_story_mission_reward"):
			MONEY::NETWORK_EARN_CASINO_STORY_MISSION_REWARD(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
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
			MONEY::NETWORK_EARN_CASINO_AWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_spend_casino_generic"):
			MONEY::NETWORK_SPEND_CASINO_GENERIC(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_spend_arcade_game"):
			MONEY::NETWORK_SPEND_PLAY_ARCADE(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_spend_arcade_generic"):
			MONEY::NETWORK_SPEND_ARCADE(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_spend_casino_heist_skip_mission"):
			MONEY::NETWORK_SPEND_CASINO_HEIST_SKIP_MISSION(Global_4536600[iParam0 /*84*/].f_8, Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1);
			break;
		
		case joaat("service_spend_casino_heist_setup_heist"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, 1, Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 0, 0, 0, 0, 0);
			break;
		
		case joaat("service_spend_casino_heist_casino_model"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, 0, 0, 1, Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 0, 0, 0);
			break;
		
		case joaat("service_spend_casino_heist_vault_door"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, 0, 0, 0, 0, 1, Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 0);
			break;
		
		case joaat("service_spend_casino_heist_door_security"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_debug"):
			break;
	}
	switch (Global_4536600[iParam0 /*84*/].f_65.f_4)
	{
		case joaat("service_earn_casino_heist_setup_mission"):
			MONEY::NETWORK_EARN_CASINO_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 0, 1, Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 0);
			break;
		
		case joaat("service_earn_casino_heist_prep_mission"):
			MONEY::NETWORK_EARN_CASINO_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 1, Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 0, 0, 0);
			break;
		
		case joaat("service_earn_casino_heist_finale"):
			MONEY::NETWORK_EARN_CASINO_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 0, 0, 0, 1, Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_casino_heist_award_smash_n_grab"):
		case joaat("service_earn_casino_heist_award_in_plain_sight"):
		case joaat("service_earn_casino_heist_award_undetected"):
		case joaat("service_earn_casino_heist_award_all_rounder"):
		case joaat("service_earn_casino_heist_award_elite_thief"):
		case joaat("service_earn_casino_heist_award_professional"):
			MONEY::NETWORK_EARN_CASINO_HEIST_AWARDS(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 0);
			break;
		
		case joaat("service_earn_casino_heist_elite_stealth"):
		case joaat("service_earn_casino_heist_elite_subterfuge"):
		case joaat("service_earn_casino_heist_elite_direct"):
			MONEY::NETWORK_EARN_CASINO_HEIST_AWARDS(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 0, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_collectable_item"):
			MONEY::NETWORK_EARN_COLLECTABLE_ITEM(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_collectable_completed_collection"):
			MONEY::NETWORK_EARN_COLLECTABLE_COMPLETED_COLLECTION(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_spend_island_heist_support_airstrike"):
			Var6.f_0 = Global_4536600[iParam0 /*84*/].f_65.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, &Var6);
			break;
		
		case joaat("service_spend_island_heist_support_heavy_weapon"):
			Var6.f_1 = Global_4536600[iParam0 /*84*/].f_65.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, &Var6);
			break;
		
		case joaat("service_spend_island_heist_support_sniper"):
			Var6.f_2 = Global_4536600[iParam0 /*84*/].f_65.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, &Var6);
			break;
		
		case joaat("service_spend_island_heist_support_air_support"):
			Var6.f_3 = Global_4536600[iParam0 /*84*/].f_65.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, &Var6);
			break;
		
		case joaat("service_spend_island_heist_support_drone"):
			Var6.f_4 = Global_4536600[iParam0 /*84*/].f_65.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, &Var6);
			break;
		
		case joaat("service_spend_island_heist_support_weapon_stash"):
			Var6.f_5 = Global_4536600[iParam0 /*84*/].f_65.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, &Var6);
			break;
		
		case joaat("service_spend_island_heist_suppressors"):
			Var6.f_6 = Global_4536600[iParam0 /*84*/].f_65.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, &Var6);
			break;
		
		case joaat("service_spend_island_heist_replay"):
			Var6.f_7 = Global_4536600[iParam0 /*84*/].f_65.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, &Var6);
			break;
		
		case joaat("service_spend_beach_party_generic"):
			MONEY::NETWORK_SPEND_BEACH_PARTY(Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_collectables_signal_jammers"):
		case joaat("service_earn_collectables_signal_jammers_complete"):
			MONEY::NETWORK_EARN_CASINO_COLLECTABLE_COMPLETED_COLLECTION(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
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
			MONEY::NETWORK_EARN_ISLAND_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_15, Global_4536600[iParam0 /*84*/].f_65.f_16, Global_4536600[iParam0 /*84*/], 0, 0);
			break;
		
		case joaat("service_earn_island_heist_prep"):
			MONEY::NETWORK_EARN_ISLAND_HEIST(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 0, 0, Global_4536600[iParam0 /*84*/].f_65.f_15, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_earn_island_heist_dj_mission"):
			MONEY::NETWORK_EARN_FROM_ISLAND_HEIST_DJ_MISSION(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_spend_submarine_utility_fee"):
			MONEY::NETWORK_SPEND_SUBMARINE(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 0);
			break;
		
		case joaat("service_spend_submarine_boat"):
			MONEY::NETWORK_SPEND_SUBMARINE(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, 0, Global_4536600[iParam0 /*84*/].f_65.f_1, 0);
			break;
		
		case joaat("service_spend_submarine_relocation"):
			MONEY::NETWORK_SPEND_SUBMARINE(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, 0, 0, Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_spend_casino_club_generic"):
			MONEY::NETWORK_SPEND_CASINO_CLUB(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, true, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_9, Global_4536600[iParam0 /*84*/].f_10, Global_4536600[iParam0 /*84*/].f_11, Global_4536600[iParam0 /*84*/].f_6, Global_4536600[iParam0 /*84*/].f_7);
			break;
		
		case joaat("service_earn_tuner_robbery_prep"):
			MONEY::NETWORK_EARN_TUNER_ROBBERY(Global_4536600[iParam0 /*84*/].f_65.f_1, -1, -1, Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_earn_tuner_robbery_finale"):
			MONEY::NETWORK_EARN_TUNER_ROBBERY(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_1, MISC::GET_HASH_KEY(&(Global_4536600[iParam0 /*84*/].f_13.f_26)), -1, -1);
			break;
		
		case joaat("service_earn_tuner_car_club_membership"):
			MONEY::NETWORK_EARN_CARCLUB_MEMBERSHIP(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_tuner_daily_vehicle"):
			MONEY::NETWORK_EARN_DAILY_VEHICLE(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_earn_tuner_daily_vehicle_bonus"):
			MONEY::NETWORK_EARN_DAILY_VEHICLE_BONUS(Global_4536600[iParam0 /*84*/].f_65.f_1);
			break;
		
		case joaat("service_earn_tuner_award_union_depository"):
		case joaat("service_earn_tuner_award_military_convoy"):
		case joaat("service_earn_tuner_award_fleeca_bank"):
		case joaat("service_earn_tuner_award_freight_train"):
		case joaat("service_earn_tuner_award_bolingbroke_ass"):
		case joaat("service_earn_tuner_award_iaa_raid"):
		case joaat("service_earn_tuner_award_meth_job"):
		case joaat("service_earn_tuner_award_bunker_raid"):
			MONEY::NETWORK_EARN_TUNER_AWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), &(Global_4536600[iParam0 /*84*/].f_13.f_44));
			break;
		
		case joaat("service_spend_interaction_menu_ability"):
			MONEY::NETWORK_SPEND_INTERACTION_MENU_ABILITY(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_earn_auto_shop_delivery_award"):
			MONEY::NETWORK_EARN_AUTOSHOP_INCOME(Global_4536600[iParam0 /*84*/].f_65.f_1, 277);
			break;
		
		case joaat("service_spend_business_expenses"):
			MONEY::NETWORK_SPEND_BUSINESS_PROPERTY_FEES(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, &Global_4542346);
			break;
		
		case joaat("service_earn_agency_security_contract"):
			MONEY::NETWORK_EARN_AGENCY_CONTRACT(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_earn_agency_payphone_hit"):
			MONEY::NETWORK_EARN_AGENCY_PHONE(Global_4536600[iParam0 /*84*/].f_65.f_15, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_earn_agency_story_prep"):
			MONEY::NETWORK_EARN_FIXER_PREP(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_earn_agency_story_finale"):
			MONEY::NETWORK_EARN_FIXER_FINALE(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_earn_fixer_award_sec_con"):
			MONEY::NETWORK_EARN_AWARD_CONTRACT(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_earn_fixer_award_phone_hit"):
			MONEY::NETWORK_EARN_AWARD_PHONE(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_earn_fixer_award_agency_story"):
			MONEY::NETWORK_EARN_AWARD_FIXER_MISSION(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_earn_fixer_award_short_trip"):
			MONEY::NETWORK_EARN_AWARD_SHORT_TRIP(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_earn_fixer_rival_delivery"):
			MONEY::NETWORK_EARN_FIXER_RIVAL_DELIVERY(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_spend_request_supply"):
			MONEY::NETWORK_SPEND_SUPPLY(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4536600[iParam0 /*84*/].f_65.f_15);
			break;
		
		case joaat("service_spend_request_source_motorcycle"):
			MONEY::NETWORK_SPEND_SOURCE_BIKE(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4536600[iParam0 /*84*/].f_65.f_15);
			break;
		
		case joaat("service_spend_request_out_of_sight"):
			MONEY::NETWORK_SPEND_HIDDEN(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4536600[iParam0 /*84*/].f_65.f_15);
			break;
		
		case joaat("service_earn_music_studio_short_trip"):
			MONEY::NETWORK_EARN_FIXER_AGENCY_SHORT_TRIP(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_spend_fixer_hq_concierge"):
			MONEY::NETWORK_SPEND_AGENCY(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4536600[iParam0 /*84*/].f_65.f_16, Global_4536600[iParam0 /*84*/].f_65.f_15);
			break;
		
		case joaat("service_spend_request_company_suv"):
			MONEY::NETWORK_SPEND_COMP_SUV(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_nclub_troublemaker"):
			MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Global_4536600[iParam0 /*84*/].f_65.f_1, 1989714117);
			break;
		
		case joaat("service_spend_agent_14_vehicle_request"):
			MONEY::NETWORK_SPEND_GUNRUNNING(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_sightseeing_reward"):
			MONEY::NETWORK_EARN_SIGHTSEEING_REWARD(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_15, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_spend_tony_limo"):
			MONEY::NETWORK_SPEND_VEHICLE_REQUESTED(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_15);
			break;
		
		case joaat("service_spend_heli_pickup"):
			MONEY::NETWORK_SPENT_HELI_PICKUP(Global_4536600[iParam0 /*84*/].f_65.f_1, false, true, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_spend_boat_pickup"):
			MONEY::NETWORK_SPENT_BOAT_PICKUP(Global_4536600[iParam0 /*84*/].f_65.f_1, false, true, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_ambient_job_clubhouse_contract"):
		case joaat("service_earn_ambient_job_underwater_cargo"):
		case joaat("service_earn_ambient_job_crime_scene"):
		case joaat("service_earn_ambient_job_metal_detector"):
		case joaat("service_earn_ambient_job_smuggler_plane"):
		case joaat("service_earn_ambient_job_smuggler_trail"):
		case joaat("service_earn_ambient_job_golden_gun"):
		case joaat("service_earn_ambient_job_ammunation_delivery"):
		case joaat("service_earn_ambient_job_source_research"):
		case joaat("service_earn_ambient_job_gang_convoy"):
		case joaat("service_earn_ambient_job_shop_robbery"):
		case joaat("service_earn_ambient_job_xmas_mugger"):
		case joaat("service_earn_ambient_job_maze_bank"):
		case joaat("service_earn_ambient_job_armored_truck"):
		case joaat("service_earn_ambient_job_bicycle_time_trial"):
		case joaat("service_earn_ambient_job_drug_vehicle"):
		case 674719198:
		case 617724895:
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, &(Global_4536600[iParam0 /*84*/].f_13.f_26), &uVar2);
			break;
		
		case joaat("service_earn_yohan_source_goods"):
			MONEY::NETWORK_YOHAN_SOURCE_GOODS(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_1, Global_4536600[iParam0 /*84*/].f_8, Global_4536600[iParam0 /*84*/].f_65.f_15);
			break;
		
		case joaat("service_spend_nightclub_toilet_attendant"):
			MONEY::NETWORK_SPEND_NIGHTCLUB_AND_WAREHOUSE(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 0, 0);
			break;
		
		case joaat("service_spend_jugallo_boss_vehicle_request"):
			MONEY::NETWORK_SPEND_VEHICLE_REQUESTED(Global_4536600[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_15);
			break;
		
		case joaat("service_earn_taxi_job"):
			Var17.f_0 = Global_4536600[iParam0 /*84*/].f_12;
			Var17.f_1 = Global_4536600[iParam0 /*84*/];
			Var17.f_2 = Global_4536600[iParam0 /*84*/].f_65.f_15;
			MONEY::_NETWORK_EARN_TAXI_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, &Var17);
			break;
		
		case joaat("service_earn_daily_stash_house_participation"):
			MONEY::_NETWORK_EARN_DAILY_STASH_HOUSE_PARTICIPATION(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_daily_stash_house_completed"):
			MONEY::_NETWORK_EARN_DAILY_STASH_HOUSE_COMPLETED(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_juggalo_story_mission"):
			MONEY::_NETWORK_EARN_JUGGALO_STORY_MISSION(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_juggalo_phone_mission"):
			MONEY::_NETWORK_EARN_FOOLIGAN_JOB(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_winter_22_award_juggalo_story"):
			MONEY::_NETWORK_EARN_AWARD_JUGGALO_MISSION(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_winter_22_award_acid_lab"):
			MONEY::_NETWORK_EARN_AWARD_ACID_LAB(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_winter_22_award_daily_stash"):
			MONEY::_NETWORK_EARN_AWARD_DAILY_STASH(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_winter_22_award_dead_drop"):
			MONEY::_NETWORK_EARN_AWARD_DEAD_DROP(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_winter_22_award_random_event"):
			MONEY::_NETWORK_EARN_AWARD_RANDOM_EVENT(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_winter_22_award_taxi"):
			MONEY::_NETWORK_EARN_AWARD_TAXI(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_acid_lab_setup_participation"):
			MONEY::_NETWORK_EARN_SETUP_PARTICIPATION_ACID_LAB(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_acid_lab_source_participation"):
			MONEY::_NETWORK_EARN_SOURCE_PARTICIPATION_ACID_LAB(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_acid_lab_sell_participation"):
			MONEY::_NETWORK_EARN_SELL_PARTICIPATION_ACID_LAB(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_smuggler_ops"):
			MONEY::_NETWORK_EARN_SMUGGLER_OPS(Global_4536600[iParam0 /*84*/].f_65.f_15, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case joaat("service_earn_cayo_attrition_bonus_objective"):
			MONEY::_NETWORK_EARN_BONUS_OBJECTIVE(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_15);
			break;
		
		case joaat("service_earn_avenger_operations"):
			MONEY::_NETWORK_EARN_AVENGER(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case joaat("service_earn_avenger_ops_bonus"):
			MONEY::_NETWORK_EARN_AVENGER(Global_4536600[iParam0 /*84*/].f_65.f_1, -2);
			break;
		
		case 649031587:
			func_74(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case -1539520895:
			func_73(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case 560526114:
			func_72(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case -256590568:
			func_71(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case 571787049:
			func_70(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_16, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_15, 0, 1);
			break;
		
		case 1989973742:
			func_69(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_15, 0, 1);
			break;
		
		case -470808433:
			func_68(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case 1245164680:
			func_67(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_15, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case 1648751987:
			func_66(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case -1433838369:
			func_64(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_15, func_65(Global_4536600[iParam0 /*84*/].f_65.f_16));
			break;
		
		case 1424147761:
			func_61(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_15, func_65(Global_4536600[iParam0 /*84*/].f_65.f_16));
			break;
		
		case 1851118721:
			func_60(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_15, Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case -1961446392:
			func_59(Global_4536600[iParam0 /*84*/].f_65.f_15, Global_4536600[iParam0 /*84*/].f_65.f_16, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_8, Global_4536600[iParam0 /*84*/].f_12);
			break;
		
		case -1726080156:
			func_57(Global_4536600[iParam0 /*84*/].f_65.f_1, func_76(iParam0, 4));
			break;
		
		case 300207193:
			func_56(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case 1237940902:
			func_55(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_15);
			break;
		
		case -1688538833:
			func_54(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/].f_65.f_15);
			break;
		
		case 918785029:
			func_53(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_16, 1);
			break;
		
		case -1343182760:
			func_53(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_16, 0);
			break;
		
		case -1725871206:
			func_52(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_16, 1);
			break;
		
		case 1435585629:
			func_52(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_16, 0);
			break;
		
		case 2131157548:
			MONEY::NETWORK_EARN_BIKER_SHOP(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case 767920357:
			func_47(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_16, 0, 1);
			break;
		
		case 1378095557:
			func_46(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], func_76(iParam0, 2));
			break;
		
		case -1948553812:
			func_45(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_16, Global_4536600[iParam0 /*84*/].f_12);
			break;
		
		case -1672547752:
			func_42(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_16, func_76(iParam0, 3), Global_4536600[iParam0 /*84*/].f_12, func_76(iParam0, 2));
			break;
		
		case -485163763:
			func_41(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/], Global_4536600[iParam0 /*84*/].f_65.f_16);
			break;
		
		case 805615290:
			func_40(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
		
		case 723646035:
			func_34(Global_4536600[iParam0 /*84*/].f_65.f_1, Global_4536600[iParam0 /*84*/]);
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Global_4536600[iParam0 /*84*/].f_65, &uVar20);
		}
	}
	func_7(iParam0);
}

void func_34(int iParam0, var uParam1)
{
	func_35(iParam0, joaat("money_earn_jobs"), 7, uParam1, "AWARD", "MCKENZIE");
}

void func_35(int iParam0, int iParam1, int iParam2, var uParam3, char* sParam4, char* sParam5)
{
	func_38(iParam2, uParam3, 1);
	func_37(iParam0, iParam1, sParam4, sParam5);
	func_36();
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1981123[iVar0] = 0;
		StringCopy(&(Global_1981123.f_7[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	Global_1981123.f_32 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		IntToString(&(Global_1981123.f_33[iVar0 /*8*/]), 0, 32);
		StringCopy(&(Global_1981123.f_58[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	Global_1981123.f_71 = 0;
}

void func_37(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	char cVar0[32];
	char cVar8[32];
	
	StringCopy(&cVar0, sParam2, 32);
	StringCopy(&cVar8, sParam3, 32);
	MONEY::_NETWORK_EARN_GENERIC(iParam0, iParam1, &cVar0, &cVar8, &Global_1981123);
}

void func_38(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		func_36();
	}
	else if (Global_1981123.f_32 == 6)
	{
		return;
	}
	Global_1981123[Global_1981123.f_32] = uParam1;
	StringCopy(&(Global_1981123.f_7[Global_1981123.f_32 /*4*/]), func_39(iParam0), 16);
	Global_1981123.f_32++;
}

char* func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mid";
			break;
		
		case 1:
			return "to";
			break;
		
		case 2:
			return "A";
			break;
		
		case 3:
			return "B";
			break;
		
		case 4:
			return "flags";
			break;
		
		case 5:
			return "vid";
			break;
		
		case 6:
			return "id";
			break;
		
		case 7:
			return "type";
			break;
		
		case 8:
			return "reason";
			break;
		
		case 9:
			return "h2h";
			break;
		
		case 10:
			return "personal";
			break;
		
		case 11:
			return "pedid";
			break;
		
		case 12:
			return "ch";
			break;
		
		case 13:
			return "desc";
			break;
		
		case 14:
			return "obj";
			break;
		
		case 15:
			return "o";
			break;
		
		case 16:
			return "n";
			break;
		
		case 17:
			return "o1";
			break;
		
		case 18:
			return "o2";
			break;
		
		case 19:
			return "hp";
			break;
		
		case 20:
			return "t";
			break;
		
		case 21:
			return "ot";
			break;
		
		case 22:
			return "nt";
			break;
		
		case 23:
			return "uuid";
			break;
		
		case 24:
			return "qtt";
			break;
		
		case 25:
			return "c";
			break;
		
		case 26:
			return "d";
			break;
		
		case 27:
			return "e";
			break;
		
		case 28:
			return "f";
			break;
		
		case 29:
			return "g";
			break;
		
		case 30:
			return "h";
			break;
		
		case 31:
			return "j";
			break;
		
		case 32:
			return "objective";
			break;
		
		case 33:
			return "boost";
			break;
		
		case 34:
			return "p1p";
			break;
		
		case 35:
			return "p2p";
			break;
		
		case 36:
			return "p3p";
			break;
		
		case 37:
			return "p4p";
			break;
		
		case 38:
			return "isstaff";
			break;
		
		case 39:
			return "qt";
			break;
		
		case 40:
			return "stage";
			break;
		
		case 41:
			return "item";
			break;
	}
	return "UNKNOWN";
}

void func_40(int iParam0, var uParam1)
{
	func_35(iParam0, joaat("money_earn_jobs"), 7, uParam1, "AWARD", "HACKER_DEN");
}

void func_41(int iParam0, var uParam1, var uParam2)
{
	func_38(7, uParam1, 1);
	func_38(6, uParam2, 0);
	func_37(iParam0, joaat("money_earn_jobs"), "HACKER_DEN_ROBBERY", "PREP_GOON");
	func_36();
}

void func_42(int iParam0, var uParam1, var uParam2, bool bParam3, var uParam4, bool bParam5)
{
	func_38(7, uParam1, 1);
	func_38(32, uParam2, 0);
	func_38(6, func_44(bParam3), 0);
	func_38(14, uParam4, 0);
	func_37(iParam0, joaat("money_earn_jobs"), "HACKER_DEN_ROBBERY", func_43(bParam5, "FINALE", "FINALE_GOON"));
	func_36();
}

char* func_43(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_44(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

void func_45(int iParam0, var uParam1, var uParam2, var uParam3)
{
	func_38(7, uParam1, 1);
	func_38(32, uParam2, 0);
	func_38(14, uParam3, 0);
	func_37(iParam0, joaat("money_earn_jobs"), "MFH", "MISSION");
	func_36();
}

void func_46(int iParam0, var uParam1, bool bParam2)
{
	func_38(7, uParam1, 1);
	func_37(iParam0, joaat("money_earn_jobs"), "ARMS_TRAFFICKING", func_43(bParam2, "MISSION", "MISSION_GOON"));
	func_36();
}

void func_47(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0;
	
	Var0 = { func_49(joaat("money_spent_job_activity")) };
	func_38(7, uParam1, 1);
	func_38(41, uParam2, 0);
	func_48(iParam0, bParam3, bParam4, Var0.f_0, Var0.f_1, "HACKER_DEN_ROBBERY", "SETUP_COST", 1);
	func_36();
}

void func_48(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7)
{
	char cVar0[32];
	char cVar8[32];
	
	StringCopy(&cVar0, sParam5, 32);
	StringCopy(&cVar8, sParam6, 32);
	MONEY::_NETWORK_SPENT_GENERIC(iParam0, bParam1, bParam2, iParam3, iParam4, &cVar0, &cVar8, &Global_1981123);
	if (bParam7)
	{
		if (func_13())
		{
			MONEY::_NETWORK_CLEAR_TRANSACTION_TELEMETRY_NONCE();
		}
	}
}

struct<2> func_49(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	Var1.f_1 = iParam0;
	switch (iParam0)
	{
		case joaat("money_spent_weapon_armor"):
			iVar0 = 83;
			break;
		
		case joaat("money_spent_veh_maintenance"):
			iVar0 = 84;
			break;
		
		case joaat("money_spent_contact_service"):
			iVar0 = 89;
			break;
		
		case joaat("money_spent_style_ent"):
			iVar0 = 85;
			break;
		
		case joaat("money_spent_property_util"):
			iVar0 = 86;
			break;
		
		case joaat("money_spent_job_activity"):
			iVar0 = 87;
			break;
		
		case joaat("money_spent_betting"):
			iVar0 = 88;
			break;
		
		case joaat("money_spent_healthcare"):
			iVar0 = 93;
			break;
		
		case joaat("money_spent_dropped_stolen"):
			iVar0 = 90;
			break;
		
		case joaat("MONEY_SPENT_ROCKSTAR_AWARD"):
			iVar0 = 1460;
			break;
		
		case -1892938314:
			iVar0 = 2946;
			break;
		
		case -1355716756:
			iVar0 = 95;
			break;
		
		case 1417845550:
			iVar0 = 3974;
			break;
		
		case -1372379005:
			iVar0 = 107;
			break;
		
		case -1225076623:
			iVar0 = 94;
			break;
		
		case 969911863:
			iVar0 = 12221;
			break;
		
		default:
			return Var1;
			break;
	}
	Var1.f_0 = func_50(iVar0, func_11());
	return Var1;
}

int func_50(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_51(uParam1));
}

int func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_11();
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

void func_52(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	func_38(7, uParam1, 1);
	func_38(6, uParam2, 0);
	func_37(iParam0, joaat("money_earn_jobs"), "BAIL", func_43(bParam3, "HV_TARGET", "HV_GOON"));
	func_36();
}

void func_53(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	func_38(7, uParam1, 1);
	func_38(6, uParam2, 0);
	func_37(iParam0, joaat("money_earn_jobs"), "BAIL", func_43(bParam3, "STANDARD_TARGET", "STANDARD_GOON"));
	func_36();
}

void func_54(int iParam0, var uParam1)
{
	func_38(6, uParam1, 1);
	func_37(iParam0, 1194392656, "BAIL", "HIGH_VALUE_PRISONER");
	func_36();
}

void func_55(int iParam0, var uParam1)
{
	func_38(6, uParam1, 1);
	func_37(iParam0, 1194392656, "BAIL", "PRISONER");
	func_36();
}

void func_56(int iParam0, var uParam1)
{
	func_35(iParam0, joaat("money_earn_jobs"), 7, uParam1, "AWARD", "BAIL");
}

void func_57(int iParam0, bool bParam1)
{
	func_58(13, func_43(bParam1, "UFO_ABDUCTION_PRIMARY", "UFO_ABDUCTION_SECONDARY"), 1);
	func_37(iParam0, joaat("money_earn_jobs"), "AMB_JOB", "JOBS");
	func_36();
}

void func_58(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2)
	{
		func_36();
	}
	else if (Global_1981123.f_71 == 3)
	{
		return;
	}
	StringCopy(&(Global_1981123.f_33[Global_1981123.f_71 /*8*/]), sParam1, 32);
	StringCopy(&(Global_1981123.f_58[Global_1981123.f_71 /*4*/]), func_39(iParam0), 16);
	Global_1981123.f_71++;
}

void func_59(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	func_38(7, iParam0, 1);
	func_38(6, iParam1, 0);
	func_38(39, uParam2, 0);
	func_38(24, uParam3, 0);
	func_38(14, iParam4, 0);
	func_37(((iParam0 + iParam1) + iParam4), joaat("money_earn_jobs"), "PIZZA", "MISSION");
	func_36();
}

void func_60(int iParam0, var uParam1, var uParam2)
{
	func_38(7, uParam1, 1);
	func_38(6, uParam2, 0);
	func_37(iParam0, joaat("money_earn_jobs"), "DISPATCH", "MISSION");
	func_36();
}

void func_61(int iParam0, var uParam1, bool bParam2)
{
	func_38(34, uParam1, 1);
	func_37(iParam0, joaat("money_earn_jobs"), "VEH_ROBBERY", "SELL");
	func_36();
	if (func_13() && bParam2)
	{
		func_63(&Global_1836253);
		func_62(&Global_1836253, 0, 0);
		Global_1836255 = 5000;
	}
}

void func_62(var uParam0, bool bParam1, bool bParam2)
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

void func_63(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_64(int iParam0, var uParam1, bool bParam2)
{
	func_38(6, uParam1, 1);
	func_38(7, func_44(bParam2), 0);
	func_37(iParam0, -747899, "VEH_ROBBERY", "SALVAGE");
	func_36();
}

bool func_65(int iParam0)
{
	return iParam0 == 1;
}

void func_66(int iParam0, var uParam1)
{
	func_35(iParam0, 2011621010, 14, uParam1, "WEEKLY_OBJ", "WEEKLY_OBJ");
}

void func_67(int iParam0, var uParam1, var uParam2, var uParam3)
{
	func_38(7, uParam1, 1);
	func_38(6, uParam2, 0);
	func_38(32, uParam3, 0);
	func_37(iParam0, joaat("money_earn_jobs"), "VEH_ROBBERY", "FINALE");
	func_36();
}

void func_68(int iParam0, var uParam1)
{
	func_38(7, uParam1, 1);
	func_37(iParam0, joaat("money_earn_jobs"), "VEH_ROBBERY", "PREP");
	func_36();
}

void func_69(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0;
	
	Var0 = { func_49(969911863) };
	func_38(41, uParam1, 1);
	func_48(iParam0, bParam2, bParam3, Var0.f_0, Var0.f_1, "VEH_ROBBERY", "CLAIM_VEHICLE", 1);
	func_36();
}

void func_70(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<2> Var0;
	
	Var0 = { func_49(joaat("money_spent_job_activity")) };
	func_38(6, uParam1, 1);
	func_38(41, uParam2, 0);
	func_38(7, uParam3, 0);
	func_48(iParam0, bParam4, bParam5, Var0.f_0, Var0.f_1, "VEH_ROBBERY", "SETUP_COST", 1);
	func_36();
}

void func_71(int iParam0, var uParam1)
{
	func_35(iParam0, joaat("money_earn_jobs"), 7, uParam1, "AWARD", "SALVAGE");
}

void func_72(int iParam0, var uParam1)
{
	func_35(iParam0, joaat("money_earn_jobs"), 7, uParam1, "AWARD", "CHICKEN");
}

void func_73(int iParam0, var uParam1)
{
	func_35(iParam0, joaat("money_earn_jobs"), 7, uParam1, "CHICKEN", "FINALE");
}

void func_74(int iParam0, var uParam1)
{
	func_35(iParam0, joaat("money_earn_jobs"), 7, uParam1, "CHICKEN", "SETUP");
}

int func_75(int iParam0, bool bParam1, bool bParam2)
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

int func_76(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 15)
	{
		return 0;
	}
	return BitTest(Global_4536600[iParam0 /*84*/].f_4, iParam1);
}

var func_77(var uParam0)
{
	return uParam0;
}

bool func_78(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_79(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
}

int func_80(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4536600[iVar0 /*84*/].f_65 == iParam0)
		{
			*uParam1 = { Global_4536600[iVar0 /*84*/] };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_81(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_4542153[iParam0 /*12*/].f_1 == Global_4542153[iParam0 /*12*/].f_6)
	{
		if (Global_4542153[iParam0 /*12*/].f_1 != 1445302971 && Global_4542153[iParam0 /*12*/].f_1 != -1316591359)
		{
			return;
		}
	}
	iVar0 = 0;
	sVar2 = "Wardrobe";
	iVar0 = MISC::GET_HASH_KEY(sVar2);
	iVar0 = (iVar0 || func_83());
	iVar0 = (iVar0 + Global_4540101);
	func_82(&uVar1);
	iVar0 = (iVar0 || uVar1);
	MISC::CLEAR_BIT(&iVar0, 28);
	MISC::CLEAR_BIT(&iVar0, 29);
	MISC::CLEAR_BIT(&iVar0, 26);
	iVar3 = (Global_4542153[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_4542153[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_4542153[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = -2085313189;
	}
	if (((Global_4542153[iParam0 /*12*/] != Global_4542153[iParam0 /*12*/].f_5 || Global_4542153[iParam0 /*12*/].f_1 != Global_4542153[iParam0 /*12*/].f_6) || Global_4542153[iParam0 /*12*/].f_2 != iVar5) || Global_4542153[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_110834 = 1;
	}
}

int func_82(var uParam0)
{
	*uParam0 = SYSTEM::SHIFT_LEFT(1, 2);
	return 5410420;
}

int func_83()
{
	return SYSTEM::SHIFT_LEFT(1, 25);
}

int func_84()
{
	if (Global_1575056 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_91())
	{
		return 1;
	}
	if (Global_2699004)
	{
		return 1;
	}
	if (func_90())
	{
		return 1;
	}
	if (func_89(159))
	{
		if (!func_88())
		{
			return 1;
		}
	}
	if (func_89(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_85() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_85()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_85()
{
	switch (func_87())
	{
		case 0:
			return func_86();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_86()
{
	switch (Global_2699111)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_87()
{
	return Global_33087;
}

bool func_88()
{
	return Global_2684718.f_700;
}

int func_89(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_90()
{
	return Global_2696416;
}

bool func_91()
{
	return Global_2684718.f_695;
}

void func_92()
{
	SYSTEM::WAIT(0);
}

void func_93()
{
	func_94();
}

void func_94()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_95(struct<33> Param0)
{
	if (Global_262145.f_23711)
	{
		func_93();
	}
	Local_20.f_65 = { Param0 };
	Local_20 = { Param0.f_19 };
	Local_20.f_13 = { Global_4536600[Param0.f_32 /*84*/].f_13 };
	iLocal_19 = Param0.f_32;
	if (Param0.f_32 < 0)
	{
		func_93();
	}
	if (!func_96(&Param0, Param0.f_32))
	{
		func_7(Param0.f_32);
		func_93();
	}
	if (Local_20.f_65.f_2 != 0)
	{
		Local_20.f_65.f_2 = 1;
	}
}

int func_96(var uParam0, int iParam1)
{
	if (Global_4536600[iParam1 /*84*/].f_65.f_1 != uParam0->f_1)
	{
		return 0;
	}
	if (Global_4536600[iParam1 /*84*/].f_65.f_3 != uParam0->f_3)
	{
		return 0;
	}
	if (Global_4536600[iParam1 /*84*/].f_65.f_4 != uParam0->f_4)
	{
		return 0;
	}
	if (Global_4536600[iParam1 /*84*/].f_65.f_5 != uParam0->f_5)
	{
		return 0;
	}
	if (Global_4536600[iParam1 /*84*/].f_65.f_6 != uParam0->f_6)
	{
		return 0;
	}
	if (Global_4536600[iParam1 /*84*/].f_65.f_7 != uParam0->f_7)
	{
		return 0;
	}
	if (Global_4536600[iParam1 /*84*/].f_65.f_14 != uParam0->f_14)
	{
		return 0;
	}
	if (Global_4536600[iParam1 /*84*/].f_65.f_17 != uParam0->f_17)
	{
		return 0;
	}
	return 1;
}

