#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	struct<3> Local_24 = { 0, 0, 0 } ;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	bool bLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	struct<2> Local_78 = { 0, 0 } ;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87[2] = { 0, 0 };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<2> Local_159 = { 0, 0 } ;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 15;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	struct<2> Local_191 = { 0, 0 } ;
	struct<2> Local_193 = { 0, 0 } ;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	var uLocal_203[1] = { 0 };
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	bool bLocal_207 = 0;
	int iLocal_208 = 0;
	bool bLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	var uLocal_217 = 0;
	int iLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	bool bLocal_224 = 0;
	int iLocal_225 = 0;
	struct<2> Local_226 = { 0, 0 } ;
	var uLocal_228 = 4;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	int iLocal_241 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.57.07";
	iLocal_11 = -1;
	iLocal_28 = -1;
	iLocal_29 = -1;
	iLocal_77 = -1;
	iLocal_81 = -1;
	iLocal_162 = 1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1577985 = MISC::GET_HASH_KEY(sLocal_0);
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (func_440())
		{
			func_438();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723442.f_3)
		{
			func_437();
			func_436();
			func_433();
			func_431();
			func_430();
			func_425();
			func_424();
			func_420();
			func_410();
			func_407();
			func_375();
			func_372();
			func_370();
			func_368();
			func_367();
			func_362();
			func_361();
			func_360();
			func_340();
			func_339();
			func_333();
			func_321();
			func_320();
			func_313();
			func_311();
			func_310();
			func_305();
			func_302();
			func_300();
			func_298();
			func_296();
			func_293();
			func_282();
			func_281();
			func_280();
			func_277();
			func_275();
			func_261();
			func_258();
			func_256();
			func_255();
			func_253();
			func_251();
			func_244();
			func_243();
			func_242();
			func_229();
			func_227();
			func_219();
			func_205();
			func_201();
			func_200();
			func_199();
			func_198();
			func_196();
			func_191();
			func_190();
			func_187();
			func_182();
			func_172();
			func_132();
			func_122();
			func_118();
			func_109();
			func_101();
			func_99();
			func_88();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_83();
			func_82();
			func_81();
			func_78();
			func_77();
			func_75();
			func_72();
			func_67();
			func_66();
			func_64();
			func_62();
			func_61();
			func_55();
			func_53();
			func_45();
			func_44();
			func_42();
		}
		func_40();
		func_33();
		func_27();
		func_25();
		func_22();
		func_1();
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_216)
	{
		if (func_21(PLAYER::PLAYER_ID(), 1, 1) && Global_1655486)
		{
			iVar0 = Global_1655625[func_20(-1)];
			iVar1 = iVar0;
			if (!BitTest(iVar0, 0))
			{
				if ((BitTest(func_19(1196, -1, 0), 7) || func_18(122, -1)) || func_18(125, -1))
				{
					MISC::SET_BIT(&iVar0, false);
				}
			}
			if (!BitTest(iVar0, 1))
			{
				if (func_17(7664, -1) > 0)
				{
					MISC::SET_BIT(&iVar0, true);
				}
			}
			if (!BitTest(iVar0, 2))
			{
				if (BitTest(func_19(1192, -1, 0), 20))
				{
					MISC::SET_BIT(&iVar0, 2);
				}
			}
			if (!BitTest(iVar0, 3))
			{
				if (func_18(120, -1))
				{
					MISC::SET_BIT(&iVar0, 3);
				}
			}
			else if (func_18(124, -1) && !func_18(120, -1))
			{
				MISC::CLEAR_BIT(&iVar0, 3);
			}
			if (!BitTest(iVar0, 4))
			{
				MISC::SET_BIT(&iVar0, 4);
			}
			if (!BitTest(iVar0, 5))
			{
				MISC::SET_BIT(&iVar0, 5);
			}
			if (!BitTest(iVar0, 6))
			{
				if (BitTest(func_19(1196, -1, 0), 27) || BitTest(func_19(1196, -1, 0), 23))
				{
					MISC::SET_BIT(&iVar0, 6);
				}
			}
			if (!BitTest(iVar0, 7))
			{
				if ((BitTest(func_19(1192, -1, 0), 14) || func_19(1251, -1, 0) > 0) || func_19(1255, -1, 0) > 0)
				{
					MISC::SET_BIT(&iVar0, 7);
				}
			}
			if (!BitTest(iVar0, 9))
			{
				if ((func_18(357, -1) || func_14(10, func_16())) || func_13())
				{
					MISC::SET_BIT(&iVar0, 9);
				}
			}
			if (!BitTest(iVar0, 10))
			{
				if ((func_18(357, -1) || func_14(11, func_16())) || func_13())
				{
					MISC::SET_BIT(&iVar0, 10);
				}
			}
			if (!BitTest(iVar0, 11))
			{
				if (BitTest(iVar0, 9) || BitTest(iVar0, 10))
				{
					MISC::SET_BIT(&iVar0, 11);
				}
			}
			if (!BitTest(iVar0, 12))
			{
				if (func_19(10836, -1, 0) > 0 || func_12())
				{
					MISC::SET_BIT(&iVar0, 12);
				}
			}
			if (!BitTest(iVar0, 13))
			{
				if (func_17(7665, -1) > 0)
				{
					MISC::SET_BIT(&iVar0, 13);
				}
			}
			if (!BitTest(iVar0, 14))
			{
				if (func_17(7654, -1) > 0)
				{
					MISC::SET_BIT(&iVar0, 14);
				}
			}
			if (!BitTest(iVar0, 15))
			{
				if (func_11(7638, -1))
				{
					MISC::SET_BIT(&iVar0, 15);
				}
			}
			if (!BitTest(iVar0, 16))
			{
				if (func_3(3))
				{
					MISC::SET_BIT(&iVar0, 16);
				}
			}
			if (!BitTest(iVar0, 17))
			{
				if (func_3(4))
				{
					MISC::SET_BIT(&iVar0, 17);
				}
			}
			if (!BitTest(iVar0, 18))
			{
				if (func_3(1))
				{
					MISC::SET_BIT(&iVar0, 18);
				}
			}
			if (!BitTest(iVar0, 19))
			{
				if (func_3(0))
				{
					MISC::SET_BIT(&iVar0, 19);
				}
			}
			if (!BitTest(iVar0, 20))
			{
				if (func_3(2))
				{
					MISC::SET_BIT(&iVar0, 20);
				}
			}
			if (!BitTest(iVar0, 21))
			{
				if (func_3(3))
				{
					MISC::SET_BIT(&iVar0, 21);
				}
			}
			if (!BitTest(iVar0, 22))
			{
				if (func_3(4))
				{
					MISC::SET_BIT(&iVar0, 22);
				}
			}
			if (!BitTest(iVar0, 23))
			{
				if (func_3(1))
				{
					MISC::SET_BIT(&iVar0, 23);
				}
			}
			if (!BitTest(iVar0, 24))
			{
				if (func_3(0))
				{
					MISC::SET_BIT(&iVar0, 24);
				}
			}
			if (!BitTest(iVar0, 25))
			{
				if (func_3(2))
				{
					MISC::SET_BIT(&iVar0, 25);
				}
			}
			if (!BitTest(iVar0, 26))
			{
				if (func_11(3814, -1))
				{
					MISC::SET_BIT(&iVar0, 26);
				}
			}
			if (!BitTest(iVar0, 27))
			{
				if (func_3(5))
				{
					MISC::SET_BIT(&iVar0, 27);
				}
			}
			if (!BitTest(iVar0, 28))
			{
				if (func_11(15489, -1))
				{
					MISC::SET_BIT(&iVar0, 28);
				}
			}
			if (!BitTest(iVar0, 29))
			{
				if (func_11(15966, -1))
				{
					MISC::SET_BIT(&iVar0, 29);
				}
			}
			if (!BitTest(iVar0, 30))
			{
				if (func_11(15966, -1) || func_17(18096, -1) > 0)
				{
					MISC::SET_BIT(&iVar0, 30);
				}
			}
			if (!BitTest(iVar0, 31))
			{
				if (((((((BitTest(func_19(6426, -1, 0), 13) || BitTest(func_19(6426, -1, 0), 0)) || BitTest(func_19(6426, -1, 0), 1)) || BitTest(func_19(6426, -1, 0), 2)) || func_11(18139, -1)) || func_11(18140, -1)) || func_11(18141, -1)) || func_11(18142, -1))
				{
					MISC::SET_BIT(&iVar0, 31);
				}
			}
			if (iVar0 != iVar1)
			{
				func_2(1304, iVar0, -1, 1);
			}
			iLocal_216 = 1;
		}
	}
	if (!BitTest(Global_2810701.f_1792, 3) || BitTest(Global_2810701.f_1792, 1))
	{
		MISC::SET_BIT(&(Global_2810701.f_1792), 3);
		MISC::CLEAR_BIT(&(Global_2810701.f_1792), true);
	}
}

void func_2(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2822371[iParam0 /*3*/][func_20(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655565[func_20(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655571[func_20(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655577[func_20(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655583[func_20(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655589[func_20(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655535[func_20(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655541[func_20(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655547[func_20(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655553[func_20(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655559[func_20(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655505[func_20(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655511[func_20(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655517[func_20(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655523[func_20(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655529[func_20(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655595[func_20(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655601[func_20(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655607[func_20(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655613[func_20(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655619[func_20(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655625[func_20(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655631[func_20(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655637[func_20(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655643[func_20(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863698[0 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863698[1 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863698[2 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863698[3 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 10874:
			Global_2863859[func_20(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655649[func_20(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655655[func_20(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655661[func_20(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655667[func_20(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655673[func_20(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655679[func_20(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863777[0 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863777[1 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863777[2 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863777[3 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863777[4 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863862[0 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863862[1 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863862[2 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863862[3 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863862[4 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863878[0 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863878[1 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863878[2 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863878[3 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863878[4 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863777[5 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863698[4 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863894[func_20(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863903[func_20(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863897[func_20(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863906[func_20(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863900[func_20(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863909[func_20(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863912[func_20(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863777[6 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863698[5 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863777[7 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863698[6 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863777[8 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863698[7 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863777[9 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863698[8 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863777[10 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863698[9 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863777[11 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863698[10 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863777[12 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863698[11 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863777[13 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863698[12 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863777[14 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863698[13 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863777[15 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863698[14 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863777[16 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863698[15 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863777[17 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863698[16 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863698[17 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863698[18 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863698[19 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863698[20 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863915[func_20(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863918[func_20(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863921[func_20(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863924[func_20(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863927[func_20(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863930[func_20(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863933[func_20(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863936[func_20(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863939[func_20(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863942[func_20(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863945[func_20(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863948[func_20(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863951[func_20(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863954[func_20(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863698[21 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863777[23 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863698[22 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863777[24 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863698[23 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863698[24 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863698[25 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = func_9(PLAYER::PLAYER_ID(), iParam0);
	if (iVar0 != 0 && func_4(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	return 0;
}

int func_4(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_8(iParam0, iParam1))
	{
		iVar0 = func_5(iParam0, iParam1);
		if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_4 > 0 && Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_5(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_7(iParam1) && iParam0 != func_6())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_6()
{
	return -1;
}

int func_7(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_7(iParam1) && iParam0 != func_6())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_9(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] != 0)
		{
			iVar1 = Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/];
			if (func_10(iVar1) == iParam1)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

bool func_11(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

bool func_12()
{
	return (func_19(10836, -1, 0) > Global_794709.f_203824[0 /*11*/].f_9 && func_19(10839, -1, 0) > 8);
}

int func_13()
{
	if (((((((((((((((((((func_19(10466, -1, 0) > 0 || func_19(10467, -1, 0) > 0) || func_19(10469, -1, 0) > 0) || func_19(10470, -1, 0) > 0) || func_19(10472, -1, 0) > 0) || func_19(10473, -1, 0) > 0) || func_19(10475, -1, 0) > 0) || func_19(10476, -1, 0) > 0) || func_19(10478, -1, 0) > 0) || func_19(10479, -1, 0) > 0) || func_19(10481, -1, 0) > 0) || func_19(10482, -1, 0) > 0) || func_19(10484, -1, 0) > 0) || func_19(10485, -1, 0) > 0) || func_19(10487, -1, 0) > 0) || func_19(10488, -1, 0) > 0) || func_19(10490, -1, 0) > 0) || func_19(10491, -1, 0) > 0) || func_19(10493, -1, 0) > 0) || func_19(10494, -1, 0) > 0)
	{
		return 1;
	}
	return 1;
}

var func_14(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = func_15(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

int func_15(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_16()
{
	return Global_1574915;
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	return STATS::_GET_PACKED_STAT_INT(iParam0, iParam1);
}

int func_18(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2860791[iParam0 /*3*/][func_20(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_19(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2822371[iParam0 /*3*/][func_20(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2822083 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2822083 = 1;
		}
	}
	return iVar0;
}

int func_21(int iParam0, bool bParam1, bool bParam2)
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
				if (iVar0 == Global_2703660.f_3)
				{
					return Global_2703660.f_2;
				}
				else if (Global_2689224[iVar0 /*451*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_22()
{
	int iVar0;
	
	if (!bLocal_207)
	{
		if (func_24())
		{
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 14) && func_23(Global_794709.f_177589[iVar0 /*13*/].f_1))
				{
					MISC::CLEAR_BIT(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
				}
				iVar0++;
			}
			iLocal_205 = 1;
		}
	}
}

int func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 17)
		{
			if (Global_262145.f_6694[iVar1] == 283)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6078[iVar1])
				{
					if (iParam0 == Global_262145.f_5035[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_24()
{
	return Global_2723442.f_6;
}

void func_25()
{
	int iVar0;
	
	if (!iLocal_205)
	{
		if (func_24())
		{
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13) && func_26(Global_794709.f_177589[iVar0 /*13*/].f_1))
				{
					Global_794709.f_4[iVar0 /*88*/].f_70 = 1;
				}
				iVar0++;
			}
			iLocal_205 = 1;
		}
	}
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31366[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_27()
{
	if (func_28())
	{
		if (!iLocal_201)
		{
			NETWORK::NETWORK_SUPPRESS_INVITE(true);
			iLocal_201 = 1;
		}
	}
	else if (iLocal_201)
	{
		NETWORK::NETWORK_SUPPRESS_INVITE(false);
		iLocal_201 = 0;
	}
}

int func_28()
{
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_31()) || func_30()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_29(PLAYER::PLAYER_ID()) && Global_1946935 != 7)
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0)
{
	if (iParam0 != func_6() && func_21(iParam0, 1, 1))
	{
		return BitTest(Global_2689224[iParam0 /*451*/].f_317, 4);
	}
	return 0;
}

bool func_30()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_192 != 0;
}

int func_31()
{
	if (func_32() == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	return Global_1574631.f_18;
}

void func_33()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_39()) && !func_30())
	{
		switch (Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317.f_6)
		{
			case 155:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 372.7166f, -61.5635f, 106.1633f, 374.0844f, -62.0511f, 108.5383f, 1.4375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 374.8303f, -60.0519f, 106.1633f, 373.443f, -59.5593f, 108.5383f, 1.25f, false, true, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 156:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1027.933f, -436.7131f, 66.6614f, -1026.643f, -436.0464f, 69.0364f, 1.4375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1027.595f, -434.1366f, 66.6614f, -1028.902f, -434.8141f, 69.0364f, 1.25f, false, true, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 157:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -578.381f, -711.6314f, 115.8054f, -579.8333f, -711.6372f, 118.1804f, 1.4375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -579.856f, -713.7709f, 115.8054f, -578.3839f, -713.7631f, 118.1804f, 1.25f, false, true, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 158:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -998.9874f, -770.6858f, 64.6945f, -998.9971f, -769.2336f, 67.0695f, 1.4375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1001.131f, -769.2165f, 64.6945f, -1001.119f, -770.6886f, 67.0695f, 1.25f, false, true, 0))
				{
					iVar0 = 1;
				}
				break;
			}
	}
	if (iVar0 && func_38())
	{
		if (func_37("BUNK_PC_BLCK2"))
		{
			func_36("FHQ_PC_BLCK", 1000);
		}
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (Global_43334[iVar1 /*32*/])
			{
				if (MISC::GET_HASH_KEY(&(Global_43334[iVar1 /*32*/].f_8)) == 1654027762)
				{
					StringCopy(&(Global_43334[iVar1 /*32*/].f_8), "FHQ_PC_BLCK", 16);
				}
			}
			iVar1++;
		}
	}
	else if (((((((((iVar0 && (Global_2714635.f_744 || uLocal_86)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_IN()) && !func_35()) && HUD::GET_PAUSE_MENU_STATE() == 0) && func_31()) && !func_34()) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (!iLocal_85)
		{
			uLocal_86 = Global_2714635.f_744;
			Global_2714635.f_744 = 0;
			iLocal_85 = 1;
		}
	}
	else if (iLocal_85)
	{
		Global_2714635.f_744 = uLocal_86;
		iLocal_85 = 0;
	}
}

bool func_34()
{
	return Global_2714635.f_691;
}

bool func_35()
{
	return MISC::GET_GAME_TIMER() <= Global_22830.f_6141 + 100;
}

void func_36(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

bool func_37(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_38()
{
	return Global_1575013 == 10;
}

bool func_39()
{
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 0);
}

void func_40()
{
	if (!iLocal_212)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_213))
		{
			if (func_41(MISC::GET_HASH_KEY("xm_prop_x17_pillar")))
			{
				iLocal_213 = OBJECT::CREATE_OBJECT(MISC::GET_HASH_KEY("xm_prop_x17_pillar"), -1551.272f, -578.36f, 41.038f, false, false, false);
				ENTITY::SET_ENTITY_COORDS(iLocal_213, -1551.272f, -578.36f, 41.038f, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_213, 0f, 180f, 0f, 2, true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_213, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_213, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_213, false);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_213, false, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_213, true, true, true, false, true, true, true, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(MISC::GET_HASH_KEY("xm_prop_x17_pillar"));
				iLocal_212 = 1;
			}
		}
	}
}

bool func_41(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_42()
{
	int iVar0;
	int iVar1;
	
	if (!func_43())
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

int func_43()
{
	if ((((((Global_4718592.f_87009 == 798118803 || Global_4718592.f_87009 == 1451106821) || Global_4718592.f_87009 == 666726606) || Global_4718592.f_87009 == -128380641) || Global_4718592.f_87009 == 1359250298) || Global_4718592.f_87009 == 1854108781) || Global_4718592.f_87009 == 2144011286)
	{
		return 1;
	}
	return 0;
}

void func_44()
{
	int iVar0;
	
	if (!func_43())
	{
		return;
	}
	if (!Global_1574962)
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

void func_45()
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_4718592.f_28, 29))
	{
		return;
	}
	if (!Global_1574962)
	{
		return;
	}
	iVar0 = func_52();
	iVar1 = func_46();
	if (iVar1 == 0)
	{
		return;
	}
	if (iVar0 == 0)
	{
		return;
	}
	switch ((iVar1 - iVar0))
	{
		case -1:
		case 0:
			Global_4718592.f_595[0 /*17044*/].f_961[0] = 41;
			Global_4718592.f_595[1 /*17044*/].f_961[0] = 41;
			break;
		
		case 1:
			Global_4718592.f_595[0 /*17044*/].f_961[0] = 9;
			Global_4718592.f_595[1 /*17044*/].f_961[0] = 9;
			break;
	}
}

int func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (iVar2 != func_6() && func_47(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_47(int iParam0)
{
	if (func_48(iParam0))
	{
		return 1;
	}
	if (BitTest(Global_1853131[iParam0 /*888*/].f_36.f_18, 6))
	{
		return 1;
	}
	if (BitTest(Global_1853131[iParam0 /*888*/].f_36.f_18, 14))
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0)
{
	if (func_50(iParam0, 0))
	{
		return 1;
	}
	if (func_49())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689224[iParam0 /*451*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_49()
{
	return BitTest(Global_2621446, 3);
}

bool func_50(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_51(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853131[iParam0 /*888*/].f_205 == 8;
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

int func_51(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
	}
	if (Global_1575034[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574909[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_52()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if ((iVar2 != func_6() && PLAYER::GET_PLAYER_TEAM(iVar2) == 0) && !func_47(iVar2))
			{
				iVar1++;
				if (iVar1 == Global_4718592.f_537[0])
				{
				}
				else
				{
					iVar0++;
				}
				return (Global_4718592.f_537[0] - iVar1);
			}

void func_53()
{
	if (Global_262145.f_31366[2] != Global_4718592.f_87009)
	{
		iLocal_215 = 0;
		return;
	}
	if (iLocal_215)
	{
		return;
	}
	func_54(0);
}

void func_54(int iParam0)
{
	if (Global_1058068.f_14[iParam0] != 3)
	{
		return;
	}
	if (Global_1058068.f_99[iParam0] < Global_4718592.f_595[iParam0 /*17044*/].f_5408[3])
	{
		return;
	}
	if (Global_1058068.f_104[iParam0] >= Global_4718592.f_595[iParam0 /*17044*/].f_5408[3])
	{
		iLocal_215 = 1;
		return;
	}
	Global_4718592.f_595[iParam0 /*17044*/].f_5408[3] = Global_1058068.f_104[iParam0];
	iLocal_215 = 1;
}

void func_55()
{
	if ((!func_30() && !func_48(PLAYER::PLAYER_ID())) && func_21(PLAYER::PLAYER_ID(), 1, 1))
	{
		if ((func_59(PLAYER::PLAYER_ID()) && func_57()) && func_56(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1586.721f, -551.8265f, 34.0622f, true, false, false, true);
			iLocal_214 = 1;
		}
	}
	else if (iLocal_214)
	{
		iLocal_214 = 0;
	}
}

int func_56(int iParam0)
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

int func_57()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_58(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_144169[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

bool func_58(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575030;
}

int func_59(int iParam0)
{
	if (func_60(Global_1853131[iParam0 /*888*/].f_267.f_30))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
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

void func_61()
{
	if (Global_262145.f_4993[0] != Global_4718592.f_87009)
	{
		return;
	}
	Global_4980736.f_88102[3 /*926*/] = { -0.5f, -666.1f, 31.8f };
	Global_4980736.f_88102[4 /*926*/] = { -1.8f, -672.2f, 31.8f };
	Global_4980736.f_88102[5 /*926*/] = { -3.2f, -675.4f, 31.8f };
}

void func_62()
{
	bool bVar0;
	int iVar1;
	
	if (Global_262145.f_4993[7] != Global_4718592.f_87009)
	{
		return;
	}
	iVar1 = 13;
	if (func_63(Global_4980736.f_88102[iVar1 /*926*/].f_81, Global_4980736.f_88102[iVar1 /*926*/].f_80, Global_4980736.f_88102[iVar1 /*926*/].f_79, 0, Global_4980736.f_88102[iVar1 /*926*/].f_131, Global_4980736.f_88102[iVar1 /*926*/].f_132))
	{
		bVar0 = true;
	}
	if (Global_4980736.f_88102[iVar1 /*926*/].f_471 > -1 && Global_4980736.f_88102[iVar1 /*926*/].f_468 > -1)
	{
		if (func_63(Global_4980736.f_88102[iVar1 /*926*/].f_474, Global_4980736.f_88102[iVar1 /*926*/].f_468, Global_4980736.f_88102[iVar1 /*926*/].f_471, 0, Global_4980736.f_88102[iVar1 /*926*/].f_480, Global_4980736.f_88102[iVar1 /*926*/].f_483))
		{
			bVar0 = true;
		}
	}
	if (Global_4980736.f_88102[iVar1 /*926*/].f_472 > -1 && Global_4980736.f_88102[iVar1 /*926*/].f_469 > -1)
	{
		if (func_63(Global_4980736.f_88102[iVar1 /*926*/].f_475, Global_4980736.f_88102[iVar1 /*926*/].f_469, Global_4980736.f_88102[iVar1 /*926*/].f_472, 0, Global_4980736.f_88102[iVar1 /*926*/].f_481, Global_4980736.f_88102[iVar1 /*926*/].f_484))
		{
			bVar0 = true;
		}
	}
	if (Global_4980736.f_88102[iVar1 /*926*/].f_473 > -1 && Global_4980736.f_88102[iVar1 /*926*/].f_470 > -1)
	{
		if (func_63(Global_4980736.f_88102[iVar1 /*926*/].f_476, Global_4980736.f_88102[iVar1 /*926*/].f_470, Global_4980736.f_88102[iVar1 /*926*/].f_473, 0, Global_4980736.f_88102[iVar1 /*926*/].f_482, Global_4980736.f_88102[iVar1 /*926*/].f_485))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		Global_4980736.f_88102[iVar1 /*926*/].f_79 = 0;
		Global_4980736.f_88102[iVar1 /*926*/].f_471 = 0;
		Global_4980736.f_88102[iVar1 /*926*/].f_472 = 0;
		Global_4980736.f_88102[iVar1 /*926*/].f_473 = 0;
	}
}

int func_63(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			if (iParam2 <= Global_1058068.f_14[iParam1])
			{
				iVar0 = 1;
			}
			break;
		
		case 3:
			if (!bParam3 && iParam2 == Global_1058068.f_14[iParam1])
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (iParam2 == Global_1058068.f_14[iParam1])
			{
				iVar0 = 1;
			}
			else if (iParam2 < Global_1058068.f_14[iParam1])
			{
				iVar0 = 1;
			}
			break;
		
		case 4:
			if (((Global_2714635.f_17 || Global_2714635.f_18) || Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_119 == 7) || Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_119 == 2)
			{
				if (BitTest(Global_1058068.f_2, (24 + iParam1)))
				{
					iVar0 = 1;
				}
			}
			else if (iParam2 <= Global_1058068.f_14[iParam1])
			{
				if (BitTest(Global_1058068.f_2, (24 + iParam1)))
				{
					iVar0 = 1;
				}
			}
			break;
		
		case 9:
			if (Global_1058068.f_104[iParam1] >= iParam4 && iParam2 <= Global_1058068.f_14[iParam1])
			{
				iVar0 = 1;
			}
			if (iParam1 > -1)
			{
				if ((iParam5 > -1 && Global_1058068.f_14[iParam1] > -1) && iParam5 <= Global_1058068.f_14[iParam1])
				{
					iVar0 = 1;
				}
			}
			break;
	}
	return iVar0;
}

void func_64()
{
	int iVar0;
	var uVar1[64];
	int iVar66;
	struct<3> Var67;
	float fVar70;
	
	if (Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_119 == 2)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			iVar0 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
			iVar66 = 0;
			while (iVar66 <= iVar0)
			{
				if (iVar66 < 64)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar1[iVar66]))
					{
						if (ENTITY::GET_ENTITY_MODEL(uVar1[iVar66]) == joaat("ig_rashcosvki"))
						{
							Var67 = { ENTITY::GET_ENTITY_COORDS(uVar1[iVar66], true) };
							if (func_65(Var67, 1707f, 2520f, 45f, 5f, 0))
							{
								if (Var67.f_2 <= 45f)
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar1[iVar66]))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(uVar1[iVar66]);
										fVar70 = 0f;
										MISC::GET_GROUND_Z_FOR_3D_COORD(Var67, &fVar70, false, false);
										Var67.f_2 = fVar70;
										ENTITY::SET_ENTITY_COORDS(uVar1[iVar66], Var67, true, false, false, true);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uVar1[iVar66], false, false);
									}
								}
							}
						}
						else
						{
							iVar66++;
						}
					}

int func_65(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

void func_66()
{
	if (Global_4718592.f_87009 == 380938673 || Global_4718592.f_87009 == 1597839856)
	{
		if (!BitTest(Global_4718592.f_35, 2))
		{
			MISC::SET_BIT(&(Global_4718592.f_35), 2);
		}
	}
}

void func_67()
{
	int iVar0;
	
	if (Global_4718592.f_87009 != Global_262145.f_31366[2])
	{
		iLocal_161 = 0;
		func_71(&Local_159);
		return;
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iLocal_161 = 0;
		func_71(&Local_159);
		return;
	}
	iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FIX_LAMAR", 0);
	if (func_56(iVar0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("Heist4CameraFlash")) && !BitTest(iLocal_161, 0))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("Heist4CameraFlash", 0, false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			MISC::SET_BIT(&iLocal_161, false);
			func_70(&Local_159, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("Heist4CameraFlash2")) && !BitTest(iLocal_161, 1))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("Heist4CameraFlash", 0, false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			MISC::SET_BIT(&iLocal_161, true);
			func_70(&Local_159, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("Heist4CameraFlash3")) && !BitTest(iLocal_161, 2))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("Heist4CameraFlash", 0, false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			MISC::SET_BIT(&iLocal_161, 2);
			func_70(&Local_159, 0, 0);
		}
		if (func_69(&Local_159) && func_68(Local_159, 1500, 0))
		{
			func_71(&Local_159);
			GRAPHICS::RESET_PAUSED_RENDERPHASES();
			GRAPHICS::ANIMPOSTFX_STOP_ALL();
		}
	}
}

int func_68(int iParam0, var uParam1, int iParam2, bool bParam3)
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

bool func_69(var uParam0)
{
	return uParam0->f_1;
}

void func_70(var uParam0, bool bParam1, bool bParam2)
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

void func_71(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar7;
	
	if (Global_4718592.f_87009 != Global_262145.f_31359[5])
	{
		iLocal_83 = 0;
		return;
	}
	MISC::SET_BIT(&(Global_4718592.f_128754[0 /*565*/].f_18), 20);
	MISC::CLEAR_BIT(&(Global_4718592.f_128754[0 /*565*/].f_16), 3);
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iLocal_83 = 0;
		return;
	}
	if (Global_1958768 == -1)
	{
		iLocal_83 = 0;
		return;
	}
	iVar0 = (Global_1958768 - func_74());
	if (iVar0 <= -1 || iVar0 >= 5)
	{
		return;
	}
	if (iLocal_83)
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		if (iVar1 >= Global_1058068.f_94[0])
		{
		}
		else
		{
			if (BitTest(Global_1853131[iVar3 /*888*/].f_36.f_18, 6))
			{
			}
			else if (BitTest(Global_1853131[iVar3 /*888*/].f_36.f_18, 14))
			{
			}
			else if (Global_1853131[iVar3 /*888*/].f_205 == 8)
			{
			}
			else
			{
				if (iVar3 == PLAYER::PLAYER_ID())
				{
					iVar2 = iVar1;
					Jump @265; //curOff = 244
				}
				iVar1++;
			}
			iVar3++;
		}
	}
	if (iVar2 >= 4)
	{
		return;
	}
	Var4 = { Global_4718592.f_128754[iVar0 /*565*/].f_26[iVar2 /*3*/] };
	fVar7 = Global_4718592.f_128754[iVar0 /*565*/].f_66[iVar2];
	if (func_73(Var4))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var4, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar7);
	iLocal_83 = 1;
}

int func_73(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_74()
{
	if (Global_4718592.f_138377 >= 1)
	{
		return 10;
	}
	return 5;
}

void func_75()
{
	if (Global_1977278 || Global_1977277)
	{
		if ((!func_34() && !func_76()) && !func_30())
		{
			Global_1977278 = 0;
			Global_1977277 = 0;
		}
	}
}

bool func_76()
{
	return Global_2714635.f_692;
}

void func_77()
{
	if (Global_4718592.f_87009 != Global_262145.f_31359[5])
	{
		return;
	}
	MISC::SET_BIT(&(Global_4718592.f_128754[2 /*565*/].f_19), 2);
}

void func_78()
{
	if (Global_4718592.f_87009 != Global_262145.f_31359[3] || Global_1574631.f_18 != 0)
	{
		if (iLocal_37)
		{
			Global_1058359 = { 0f, 0f, 0f };
			MISC::CLEAR_BIT(&(Global_1058068.f_280), 17);
			MISC::CLEAR_BIT(&(Global_1058030.f_30), 30);
			MISC::CLEAR_BIT(&(Global_1058030.f_35), 7);
			MISC::CLEAR_BIT(&(Global_1058030.f_31), 6);
		}
		iLocal_37 = 0;
		func_71(&uLocal_35);
		return;
	}
	if (Global_1058068.f_14[0] == 10)
	{
		if (!func_69(&uLocal_35))
		{
			func_80(&uLocal_35, 0, 0);
		}
		else if (func_79(&uLocal_35, 14000, 0))
		{
			if (!iLocal_37)
			{
				MISC::SET_BIT(&(Global_1058068.f_280), 17);
				iLocal_37 = 1;
				Global_4718592.f_112933[2 /*1582*/].f_1529 = 0;
				MISC::CLEAR_BIT(&(Global_4718592.f_112933[2 /*1582*/].f_5), 20);
				MISC::CLEAR_BIT(&(Global_4718592.f_112933[2 /*1582*/].f_5), 28);
				MISC::SET_BIT(&(Global_1058030.f_30), 30);
				MISC::SET_BIT(&(Global_1058030.f_35), 7);
				MISC::SET_BIT(&(Global_1058030.f_31), 6);
				Global_1058359 = { Global_1058356 };
			}
		}
	}
}

int func_79(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_70(uParam0, bParam2, 0);
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

void func_80(var uParam0, bool bParam1, bool bParam2)
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

void func_81()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (Global_4718592.f_87009 != Global_262145.f_31359[5] || Global_1574631.f_18 != 0)
	{
		iLocal_38 = 0;
		iLocal_39 = 0;
		iLocal_41 = 0;
		iLocal_40 = 0;
		return;
	}
	if (iLocal_39 >= 4)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_41))
	{
		Var0 = { -1003f, -3007.9f, 15.2f };
		iLocal_41 = VEHICLE::GET_CLOSEST_VEHICLE(Var0, 3f, joaat("schafter6"), 65602);
		return;
	}
	if (!BitTest(iLocal_38, iLocal_40))
	{
		iVar3 = (-1 + iLocal_40);
		iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_41, iVar3, true);
		if (ENTITY::DOES_ENTITY_EXIST(iVar4) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar4, false);
			ENTITY::SET_ENTITY_DYNAMIC(iVar4, true);
			PED::SET_PED_CONFIG_FLAG(iVar4, 106, false);
			PED::SET_PED_CONFIG_FLAG(iVar4, 107, false);
			PED::SET_PED_CONFIG_FLAG(iVar4, 108, false);
			MISC::SET_BIT(&iLocal_38, iLocal_40);
			iLocal_39++;
		}
	}
	bLocal_40++;
	if (bLocal_40 >= (8 - 1))
	{
		bLocal_40 = false;
	}
}

void func_82()
{
	struct<3> Var0;
	int iVar3;
	
	if (Global_4718592.f_87009 != Global_262145.f_31359[5] || Global_1574631.f_18 != 0)
	{
		iLocal_33 = 0;
		iLocal_34 = 0;
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return;
	}
	Var0 = { -952.13f, -2990.26f, 22.73f };
	iVar3 = 1906226714;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33))
	{
		iLocal_33 = VEHICLE::GET_CLOSEST_VEHICLE(Var0, 2f, joaat("jet"), 16386);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33))
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_33))
	{
		return;
	}
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_34))
	{
		iLocal_34 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
		return;
	}
	INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_33, iLocal_34, iVar3);
}

void func_83()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	if (Global_1958768 == -1)
	{
		func_87();
		return;
	}
	iVar0 = (Global_1958768 - func_86());
	if (iVar0 <= -1 || iVar0 >= 5)
	{
		func_87();
		return;
	}
	sVar1 = func_85(&(Global_4718592.f_128754[iVar0 /*565*/]));
	if (!MISC::ARE_STRINGS_EQUAL("FIX_BIL_MCS2", sVar1) && !MISC::ARE_STRINGS_EQUAL("FIX_TRIP2_MCS1", sVar1))
	{
		func_87();
		return;
	}
	iLocal_32 = 1;
	if (CUTSCENE::HAS_CUTSCENE_LOADED() && !Global_1058366)
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	Global_1058366 = 1;
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	func_70(&uLocal_30, 0, 0);
	iVar2 = func_84(&uLocal_30, 0, 0);
	iVar3 = CUTSCENE::_0x971D7B15BCDBEF99() + 5000;
	if (iVar2 > iVar3)
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		}
		CUTSCENE::REMOVE_CUTSCENE();
	}
}

int func_84(var uParam0, bool bParam1, bool bParam2)
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

var func_85(var uParam0)
{
	return uParam0;
}

int func_86()
{
	if (Global_4718592.f_138377 >= 1)
	{
		return 10;
	}
	return 5;
}

void func_87()
{
	func_71(&uLocal_30);
	if (iLocal_32)
	{
		iLocal_32 = 0;
		Global_1058366 = 0;
	}
}

void func_88()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar46;
	float fVar47;
	struct<3> Var48;
	
	if (func_69(&uLocal_22))
	{
		MISC::SET_BIT(&Global_7825, 2);
		if (func_79(&uLocal_22, 60000, 0))
		{
			func_80(&uLocal_22, 0, 0);
			func_71(&uLocal_22);
		}
	}
	if (func_69(&uLocal_20) && func_79(&uLocal_20, 1000, 0))
	{
		if (iLocal_29 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_29 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_29, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_79(&uLocal_20, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_29))
			{
				AUDIO::STOP_SOUND(iLocal_29);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_29);
			iLocal_29 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_80(&uLocal_20, 0, 0);
			func_71(&uLocal_20);
		}
	}
	if (!iLocal_14 && !func_95())
	{
		return;
	}
	iLocal_14 = 1;
	MISC::SET_BIT(&Global_7825, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_13))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_13 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 360.8759f, 5623.427f, 780.1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_13, true);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_13, 8000);
			iVar1 = func_19(7868, -1, 0);
			func_94(7868, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Var2);
			Local_24 = { ENTITY::GET_ENTITY_COORDS(iLocal_13, false) };
			iLocal_27 = 0;
		}
	}
	else
	{
		func_93();
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_28 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_28 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_28, "07", iLocal_13, "DLC_GR_CS2_Sounds", false, 0);
			}
			if (!iLocal_15)
			{
				if (func_79(&uLocal_16, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_13, false);
					func_80(&uLocal_16, 0, 0);
					func_71(&uLocal_16);
					func_70(&uLocal_18, 0, 0);
					iLocal_15 = 1;
				}
			}
			else
			{
				fVar46 = (SYSTEM::TO_FLOAT(func_84(&uLocal_18, 0, 0)) / SYSTEM::TO_FLOAT(func_92()));
				fVar47 = (SYSTEM::TO_FLOAT(func_84(&uLocal_16, 0, 0)) / SYSTEM::TO_FLOAT(func_91()));
				fVar47 = (fVar47 * fVar46);
				Var48 = { func_89(Local_24, func_90(), fVar47) };
				ENTITY::SET_ENTITY_COORDS(iLocal_13, Var48, true, false, false, true);
				if (fVar47 >= 1f)
				{
					iLocal_27++;
					Local_24 = { ENTITY::GET_ENTITY_COORDS(iLocal_13, false) };
					func_80(&uLocal_16, 0, 0);
					func_71(&uLocal_16);
					if (func_91() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_13);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_28))
						{
							AUDIO::STOP_SOUND(iLocal_28);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_28);
						iLocal_28 = -1;
						func_70(&uLocal_20, 0, 0);
						func_70(&uLocal_22, 0, 0);
						func_80(&uLocal_18, 0, 0);
						func_71(&uLocal_18);
						Local_24 = { 0f, 0f, 0f };
						iLocal_27 = 0;
						iLocal_14 = 0;
						iLocal_15 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_89(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_90()
{
	switch (iLocal_27)
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

int func_91()
{
	switch (iLocal_27)
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

int func_92()
{
	return 3150;
}

void func_93()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_13, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_13, Var0, 2, true);
}

void func_94(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2822371[iParam0 /*3*/][func_20(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_95()
{
	if (((((((func_11(22107, -1) && Global_2671447 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_98(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2715551.f_3076.f_178 >= 1) && Global_2715551.f_3076.f_178 < 4) && func_97()) && func_96())
	{
		return 1;
	}
	return 0;
}

int func_96()
{
	if (func_11(15476, -1) && func_19(5452, func_16(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_97()
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

bool func_98(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

void func_99()
{
	bool bVar0;
	
	if (!BitTest(Global_1973525.f_1085, 7))
	{
		if (Global_1946941.f_3614 != -1)
		{
			if (func_100(Global_1946941.f_3614) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tuner_planning")) > 0)
			{
				bVar0 = true;
			}
			if (Global_1946941.f_3614 == 147 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("heist_island_planning")) > 0)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				MISC::SET_BIT(&(Global_1973525.f_1085), 7);
				Global_1973525.f_1095 = 1;
			}
		}
	}
}

int func_100(int iParam0)
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

void func_101()
{
	if (((((func_56(PLAYER::PLAYER_PED_ID()) && !func_108(PLAYER::PLAYER_ID())) && !func_107(PLAYER::PLAYER_ID())) && ENTITY::DOES_ENTITY_EXIST(Global_2810701.f_304[1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2810701.f_304[1], false)) && func_102(Global_2810701.f_304[1]))
	{
		iLocal_241 = 1;
		MISC::SET_BIT(&(Global_1946941.f_4521), 3);
	}
	else if (iLocal_241)
	{
		MISC::CLEAR_BIT(&(Global_1946941.f_4521), 3);
		iLocal_241 = 0;
	}
}

int func_102(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5[25];
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		func_105(81, &Var2);
		iVar1 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar5);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uVar5[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar5[iVar0])) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uVar5[iVar0], false))
			{
				if (!func_104(uVar5[iVar0], 0))
				{
					if (func_103(uVar5[iVar0], Var2, 1) < 8f)
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

float func_103(int iParam0, struct<3> Param1, bool bParam4)
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

int func_104(int iParam0, bool bParam1)
{
	if (Global_77858)
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

void func_105(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2810701.f_304[1];
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
		if (func_106(PLAYER::PLAYER_ID()))
		{
			if (func_73(*uParam1))
			{
				if (Global_1946941.f_3628 != func_6())
				{
					if (!func_73(Global_2689224[Global_1946941.f_3628 /*451*/].f_317.f_11))
					{
						*uParam1 = { Global_2689224[Global_1946941.f_3628 /*451*/].f_317.f_11 };
					}
				}
			}
		}
	}
}

int func_106(int iParam0)
{
	if (iParam0 != func_6())
	{
		return BitTest(Global_2689224[iParam0 /*451*/].f_317, 8);
	}
	return 0;
}

int func_107(int iParam0)
{
	if (iParam0 != func_6() && func_21(iParam0, 1, 1))
	{
		return BitTest(Global_2689224[iParam0 /*451*/].f_317, 3);
	}
	return 0;
}

int func_108(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6 != -1;
		}
		else if ((Global_1575054 && iParam0 == PLAYER::PLAYER_ID()) && func_21(iParam0, 1, 0))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6 != -1;
		}
	}
	return 0;
}

void func_109()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_114(PLAYER::PLAYER_ID()) || func_110(PLAYER::PLAYER_ID()))
		{
			if (Global_2657430 == 145)
			{
				Global_2657430 = 169;
			}
		}
		else if (Global_2657430 != 145)
		{
			Global_2657430 = 145;
		}
	}
}

int func_110(int iParam0)
{
	return func_111(func_112(iParam0));
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_112(int iParam0)
{
	if (func_113(iParam0, 0))
	{
		return Global_1893551[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_113(int iParam0, int iParam1)
{
	if (Global_1893551[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1893551[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_114(int iParam0)
{
	return func_115(func_116(iParam0));
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_116(int iParam0)
{
	if (func_112(iParam0) == 256)
	{
		return func_117(iParam0);
	}
	return -1;
}

int func_117(int iParam0)
{
	if (func_113(iParam0, 0))
	{
		return Global_1893551[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

void func_118()
{
	if (!func_43())
	{
		if (iLocal_225)
		{
			iLocal_222 = 0;
			iLocal_223 = 0;
			bLocal_224 = false;
			func_71(&Local_226);
			iLocal_225 = 0;
		}
		return;
	}
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == 0)
	{
		return;
	}
	if (Global_1574961)
	{
		return;
	}
	if (!iLocal_225)
	{
		iLocal_225 = 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (iLocal_222 != PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_222 != 0)
			{
				iLocal_223 = 1;
				func_80(&Local_226, 0, 0);
			}
			iLocal_222 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (CAM::IS_SCREEN_FADING_IN() && iLocal_223)
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		bLocal_224 = true;
	}
	else if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (iLocal_223)
		{
			if (func_68(Local_226, 2000, 0))
			{
				if (bLocal_224)
				{
					CAM::DO_SCREEN_FADE_IN(100);
				}
				func_119(iLocal_222, 0);
				iLocal_223 = 0;
				func_71(&Local_226);
			}
		}
	}
}

void func_119(int iParam0, int iParam1)
{
	struct<39> Var0;
	
	if (iParam1 == -1)
	{
		return;
	}
	Var0 = { Global_4980736.f_87204[iParam1 /*39*/] };
	if (!BitTest(Var0.f_0, 0))
	{
		return;
	}
	func_120(iParam0, &(Var0.f_1), 0);
	func_120(iParam0, &(Var0.f_2), 1);
	func_120(iParam0, &(Var0.f_3), 2);
	func_120(iParam0, &(Var0.f_4), 3);
	func_120(iParam0, &(Var0.f_5), 4);
	func_120(iParam0, &(Var0.f_6), 5);
	func_120(iParam0, &(Var0.f_7), 6);
	func_120(iParam0, &(Var0.f_8), 7);
	func_120(iParam0, &(Var0.f_9), 8);
	func_120(iParam0, &(Var0.f_10), 9);
	func_120(iParam0, &(Var0.f_11), 10);
	func_120(iParam0, &(Var0.f_12), 11);
	func_120(iParam0, &(Var0.f_13), 12);
	func_120(iParam0, &(Var0.f_14), 13);
	func_120(iParam0, &(Var0.f_15), 14);
	func_120(iParam0, &(Var0.f_16), 15);
	func_120(iParam0, &(Var0.f_17), 16);
	func_120(iParam0, &(Var0.f_18), 23);
	func_120(iParam0, &(Var0.f_19), 24);
	func_120(iParam0, &(Var0.f_20), 27);
	func_120(iParam0, &(Var0.f_21), 28);
	func_120(iParam0, &(Var0.f_22), 29);
	func_120(iParam0, &(Var0.f_23), 30);
	func_120(iParam0, &(Var0.f_24), 31);
	func_120(iParam0, &(Var0.f_25), 32);
	func_120(iParam0, &(Var0.f_26), 33);
	func_120(iParam0, &(Var0.f_27), 35);
	func_120(iParam0, &(Var0.f_28), 37);
	func_120(iParam0, &(Var0.f_29), 39);
	func_120(iParam0, &(Var0.f_30), 40);
	func_120(iParam0, &(Var0.f_31), 41);
	func_120(iParam0, &(Var0.f_32), 42);
	func_120(iParam0, &(Var0.f_33), 43);
	func_120(iParam0, &(Var0.f_34), 44);
	func_120(iParam0, &(Var0.f_35), 45);
	func_120(iParam0, &(Var0.f_36), 46);
	func_120(iParam0, &(Var0.f_37), 47);
	func_120(iParam0, &(Var0.f_38), 48);
}

void func_120(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = *uParam1;
	iVar0 = func_121(iVar0, -1, VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam2));
	if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam2) >= iVar0)
	{
		VEHICLE::SET_VEHICLE_MOD(iParam0, iParam2, iVar0, false);
	}
	else
	{
		*uParam1 = -1;
	}
}

int func_121(int iParam0, int iParam1, int iParam2)
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

void func_122()
{
	if ((func_130(PLAYER::PLAYER_ID()) && func_30()) && func_127(PLAYER::PLAYER_PED_ID()))
	{
		func_126(45, 8, 1);
		Global_1946941.f_505 = 0;
		iLocal_218 = 1;
	}
	else if (iLocal_218)
	{
		func_123(45, 8, 1);
		iLocal_218 = 0;
	}
}

void func_123(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100032.f_1392[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_125() == 0)
		{
			iVar0 = func_19(func_124(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, bParam1);
			func_94(func_124(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_112922.f_668[iParam0]), bParam1);
	}
}

int func_124(int iParam0)
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
			return 10835;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		default:
			break;
	}
	return 12581;
}

int func_125()
{
	return Global_31511;
}

void func_126(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100032.f_1392[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_125() == 0)
		{
			iVar0 = func_19(func_124(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, bParam1);
			func_94(func_124(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_112922.f_668[iParam0]), bParam1);
	}
}

int func_127(int iParam0)
{
	if (func_129(iParam0))
	{
		return 1;
	}
	if (func_128(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_128(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1360.612f, 161.8972f, -99.9951f, -1368.39f, 161.8997f, -97.24433f, 7.25f, false, true, 0);
}

bool func_129(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1352.578f, 161.7798f, -100.4443f, -1352.477f, 168.3758f, -97.94434f, 6f, false, true, 0);
}

int func_130(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_131(Global_2689224[iParam0 /*451*/].f_317.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_131(int iParam0)
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

void func_132()
{
	func_133(&uLocal_217);
}

void func_133(var uParam0)
{
	int* iVar0;
	var uVar1[1];
	
	if (((Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_30 <= 0 && !func_171(PLAYER::PLAYER_ID())) && !func_168()) && !func_107(PLAYER::PLAYER_ID()))
	{
		if (func_108(PLAYER::PLAYER_ID()) && !func_167(PLAYER::PLAYER_ID()))
		{
		}
		else
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			}
			else
			{
				PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
				iVar0 = uVar1[0];
			}
			func_134(&iVar0, uParam0);
		}
	}
}

void func_134(int* iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (!func_48(PLAYER::PLAYER_ID()))
	{
		bVar0 = false;
		bVar1 = false;
		if ((ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::IS_ENTITY_A_VEHICLE(*iParam0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (func_166(*iParam0, 1))
			{
				if (*iParam0 == func_165() && func_163())
				{
					return;
				}
				if (DECORATOR::DECOR_GET_INT(*iParam0, "Player_Vehicle") == -1)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, true) && !func_162(*iParam0))
					{
						if (!((func_161(PLAYER::PLAYER_ID()) || func_107(PLAYER::PLAYER_ID())) || func_155(PLAYER::PLAYER_ID(), 0, -1)) || Global_1977177)
						{
							bVar0 = true;
						}
					}
				}
				else
				{
					if (func_162(*iParam0))
					{
						return;
					}
					iVar3 = 0;
					while (iVar3 < 32)
					{
						bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
						if (func_21(bVar4, 0, 0))
						{
							if (DECORATOR::DECOR_GET_INT(*iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(bVar4))
							{
								bVar1 = true;
							}
						}
						iVar3++;
					}
					if (!bVar1)
					{
						bVar0 = true;
					}
				}
			}
			else if (func_154(*iParam0, 1))
			{
				if (DECORATOR::DECOR_GET_INT(*iParam0, "Player_Truck") == -1)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, true) && !func_162(*iParam0))
					{
						bVar0 = true;
					}
				}
				else
				{
					if (func_162(*iParam0))
					{
						return;
					}
					iVar3 = 0;
					while (iVar3 < 32)
					{
						bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
						if (func_21(bVar4, 0, 0))
						{
							if (DECORATOR::DECOR_GET_INT(*iParam0, "Player_Truck") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(bVar4))
							{
								bVar1 = true;
							}
						}
						iVar3++;
					}
					if (!bVar1)
					{
						bVar0 = true;
					}
				}
			}
			else if (func_153(*iParam0, 1))
			{
				if (DECORATOR::DECOR_GET_INT(*iParam0, "Player_Hacker_Truck") == -1)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, true) && !func_162(*iParam0))
					{
						bVar0 = true;
					}
				}
				else
				{
					if (func_162(*iParam0))
					{
						return;
					}
					iVar3 = 0;
					while (iVar3 < 32)
					{
						bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
						if (func_21(bVar4, 0, 0))
						{
							if (DECORATOR::DECOR_GET_INT(*iParam0, "Player_Hacker_Truck") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(bVar4))
							{
								bVar1 = true;
							}
						}
						iVar3++;
					}
					if (!bVar1)
					{
						bVar0 = true;
					}
				}
			}
			else if (func_152(*iParam0, 1))
			{
				iVar2 = DECORATOR::DECOR_GET_INT(*iParam0, "Veh_Modded_By_Player");
				if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(*iParam0))
				{
					if (iVar2 != 0 && iVar2 != -1)
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
						{
							DECORATOR::DECOR_SET_INT(*iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					else
					{
						bVar0 = true;
					}
				}
				else if (iVar2 != 0 && iVar2 != -1)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
					{
						if (!func_151(iVar2))
						{
							DECORATOR::DECOR_SET_INT(*iParam0, "Veh_Modded_By_Player", -1);
						}
					}
				}
				else
				{
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			if (!func_149(*iParam0, 1, 1, 0, 0, 0, 1, 0, 1) && !Global_1932654)
			{
				if (!func_171(PLAYER::PLAYER_ID()))
				{
					if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam1, NETWORK::GET_NETWORK_TIME())) >= 1000)
					{
						iVar3 = 0;
						while (iVar3 < 32)
						{
							bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
							if (func_21(bVar4, 0, 1))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar4), *iParam0, false))
								{
									func_147(func_148(bVar4), 1, 0f, 0, 0, 0, -1);
								}
							}
							iVar3++;
						}
						*uParam1 = NETWORK::GET_NETWORK_TIME();
					}
				}
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
			{
				if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				{
					if (func_149(*iParam0, 1, 1, 1, 0, 0, 1, 0, 1))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*iParam0);
					}
				}
			}
			else
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECORATOR::DECOR_EXIST_ON(*iParam0, "MPBitset"))
				{
					iVar5 = DECORATOR::DECOR_GET_INT(*iParam0, "MPBitset");
				}
				if (BitTest(iVar5, 21) && ENTITY::IS_ENTITY_VISIBLE(*iParam0))
				{
					if (DECORATOR::DECOR_EXIST_ON(*iParam0, "Player_Vehicle") && !DECORATOR::DECOR_GET_INT(*iParam0, "Player_Vehicle") == -1)
					{
						func_144(*iParam0);
					}
					if (!NETWORK::NETWORK_IS_ENTITY_FADING(*iParam0))
					{
						if (func_149(*iParam0, 1, 0, 0, 0, 0, 1, 0, 1))
						{
							NETWORK::NETWORK_FADE_OUT_ENTITY(*iParam0, false, true);
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
				{
					if (((VEHICLE::IS_VEHICLE_MODEL(*iParam0, joaat("terbyte")) || VEHICLE::IS_VEHICLE_MODEL(*iParam0, joaat("avenger"))) || VEHICLE::IS_VEHICLE_MODEL(*iParam0, joaat("phantom3"))) || VEHICLE::IS_VEHICLE_MODEL(*iParam0, joaat("hauler2")))
					{
					}
					else
					{
						func_135(iParam0, 0);
						*iParam0 = -1;
					}
				}
			}
		}
	}
}

void func_135(int* iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (func_143(*iParam0, &bVar0))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(*iParam0))
		{
			if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam0, &iVar1))
			{
			}
			VEHICLE::DETACH_VEHICLE_FROM_TRAILER(*iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				func_135(&iVar1, 0);
			}
		}
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		func_144(*iParam0);
		if (func_136(*iParam0) || iParam1)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
			}
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
	else if (bVar0)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
	}
}

int func_136(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	if (func_142(iParam0))
	{
		return 1;
	}
	if (func_139(iParam0))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		return 1;
	}
	if (Var0.f_2 < -89f)
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_AREA(iParam0, 1097.535f, -3016.011f, -40.7658f, 1109.298f, -2983.69f, -34.1882f, false, false, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 924.536f, -18.629f, 75.715f, 942.786f, 11.196f, 83.665f, 18.475f, false, false, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_AREA(iParam0, 1333.976f, 176.982f, -51.1537f, 1427.791f, 260.917f, -43.4137f, false, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -2179.408f, 1070.749f, -28.9093f, -2178.831f, 1151.052f, -17.20441f, 95.25f, false, true, 0))
	{
		return 1;
	}
	if (func_138(iParam0))
	{
		return 1;
	}
	if (func_137(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0)
{
	if (ENTITY::IS_ENTITY_IN_AREA(iParam0, -1831.333f, 980.1857f, -29.846f, -2225.468f, 1241.217f, -9.4235f, false, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_AREA(iParam0, -1831.333f, 972.858f, 23.18378f, -2225.468f, 1248.923f, 43.60629f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0)
{
	if (ENTITY::IS_ENTITY_IN_AREA(iParam0, -1372.786f, 135.814f, -100.586f, -1319.589f, 169.764f, -87.918f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0)
{
	if (func_140(iParam0, 91, -1, 0) || func_140(iParam0, 97, -1, 0))
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2, float fParam3)
{
	struct<3> Var0;
	
	if (iParam1 <= 0)
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if ((iParam2 == 2 || iParam2 == -1) && !func_141(iParam1, -1))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Global_1312124[iParam1 /*1951*/].f_1742.f_150, true) <= 30f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312124[iParam1 /*1951*/].f_1742.f_153, Global_1312124[iParam1 /*1951*/].f_1742.f_153.f_3, Global_1312124[iParam1 /*1951*/].f_1742.f_153.f_6, false, true))
			{
				return 1;
			}
		}
	}
	if (iParam2 != 2)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Global_1312124[iParam1 /*1951*/].f_146.f_47, true) <= 40f)
		{
			if ((OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312124[iParam1 /*1951*/].f_146.f_57[0 /*8*/], Global_1312124[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_3, Global_1312124[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312124[iParam1 /*1951*/].f_146.f_57[1 /*8*/], Global_1312124[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_3, Global_1312124[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312124[iParam1 /*1951*/].f_146.f_57[2 /*8*/], Global_1312124[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_3, Global_1312124[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true))
			{
				return 1;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Global_1312124[iParam1 /*1951*/].f_146.f_1592, true) < (Global_1312124[iParam1 /*1951*/].f_146.f_1595 + fParam3) && (Var0.f_2 > Global_1312124[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_2 && Var0.f_2 < Global_1312124[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_3.f_2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_141(int iParam0, int iParam1)
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

int func_142(int iParam0)
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 358.9707f, -1597.852f, 20.00015f, 412.8247f, -1640.907f, 40.54209f, 33.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 406.6252f, -1644.242f, 20.04219f, 417.1268f, -1652.937f, 41.951f, 20.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 414.6758f, -1635.666f, 20.09278f, 423.5415f, -1635.645f, 41.04316f, 15.5f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_144(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, true);
		VEHICLE::_0xCFD778E7904C255E(iParam0);
		if (!func_146())
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		}
		func_145(iParam0);
	}
}

void func_145(int iParam0)
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
		}
		else
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
			DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
		}
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Previous_Owner", 3))
	{
		if (!iVar0 == -1)
		{
			if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Previous_Owner"))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "Previous_Owner", iVar0);
			}
			else
			{
				DECORATOR::DECOR_SET_INT(iParam0, "Previous_Owner", iVar0);
			}
		}
	}
}

bool func_146()
{
	return BitTest(Global_1946941.f_2, 10);
}

void func_147(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0.f_0 = 578856274;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = MISC::GET_FRAME_COUNT();
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 9, iParam0);
	}
}

int func_148(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_149(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_150(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_6()) && func_21(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_150(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("script_task_leave_vehicle")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("script_task_leave_any_vehicle")) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_151(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_21(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 0))
		{
			if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_152(int iParam0, bool bParam1)
{
	if (Global_77858)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_153(int iParam0, bool bParam1)
{
	if (Global_77858)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_154(int iParam0, bool bParam1)
{
	if (Global_77858)
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

int func_155(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1853131[iParam0 /*888*/].f_267.f_30 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
	{
		if (iParam2 == -1 || func_131(Global_2689224[iParam0 /*451*/].f_317.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_156(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return iParam0;
	}
	if (func_160(iParam0) != -1)
	{
		iVar0 = func_131(func_160(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_158(iParam0, 0))
			{
				return func_157(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_6();
		}
		return Global_2689224[iParam0 /*451*/].f_317.f_9;
	}
	return func_6();
}

int func_157(int iParam0)
{
	if (iParam0 != func_6())
	{
		return Global_1893551[iParam0 /*599*/].f_10;
	}
	return func_6();
}

bool func_158(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_159(iParam0))
		{
			return 0;
		}
	}
	return Global_1893551[iParam0 /*599*/].f_10 != func_6();
}

int func_159(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_6())
		{
			return Global_1893551[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_160(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6;
		}
		else if (((Global_1575054 || Global_2667223.f_2680) && iParam0 == PLAYER::PLAYER_ID()) && func_21(iParam0, 1, 0))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6;
		}
	}
	return -1;
}

int func_161(int iParam0)
{
	if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 11))
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Global_1312124[1 /*1951*/].f_1742.f_150, true) < 30f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312124[1 /*1951*/].f_1742.f_153, Global_1312124[1 /*1951*/].f_1742.f_153.f_3, Global_1312124[1 /*1951*/].f_1742.f_153.f_6, false, true))
		{
			return 1;
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Global_1312124[8 /*1951*/].f_1742.f_150, true) < 30f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312124[8 /*1951*/].f_1742.f_153, Global_1312124[8 /*1951*/].f_1742.f_153.f_3, Global_1312124[8 /*1951*/].f_1742.f_153.f_6, false, true))
		{
			return 1;
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Global_1312124[17 /*1951*/].f_1742.f_150, true) < 30f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312124[17 /*1951*/].f_1742.f_153, Global_1312124[17 /*1951*/].f_1742.f_153.f_3, Global_1312124[17 /*1951*/].f_1742.f_153.f_6, false, true))
		{
			return 1;
		}
	}
	iVar3 = 103;
	while (iVar3 <= 114)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Global_1312124[iVar3 /*1951*/].f_146.f_47, true) <= 40f)
		{
			if ((OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312124[iVar3 /*1951*/].f_146.f_57[0 /*8*/], Global_1312124[iVar3 /*1951*/].f_146.f_57[0 /*8*/].f_3, Global_1312124[iVar3 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312124[iVar3 /*1951*/].f_146.f_57[1 /*8*/], Global_1312124[iVar3 /*1951*/].f_146.f_57[1 /*8*/].f_3, Global_1312124[iVar3 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312124[iVar3 /*1951*/].f_146.f_57[2 /*8*/], Global_1312124[iVar3 /*1951*/].f_146.f_57[2 /*8*/].f_3, Global_1312124[iVar3 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true))
			{
				return 1;
			}
		}
		iVar3++;
	}
	return 0;
}

int func_163()
{
	if (func_164(2) || func_164(1))
	{
		return 1;
	}
	return 0;
}

bool func_164(int iParam0)
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703660.f_61.f_1, iParam0);
	}
	return BitTest(Global_2703660.f_61.f_2, (iParam0 - 32));
}

int func_165()
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == joaat("freemode"))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_38) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_38))
		{
			return NETWORK::NET_TO_VEH(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_38);
		}
	}
	return Global_2810701.f_298;
}

int func_166(int iParam0, bool bParam1)
{
	if (Global_77858)
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

int func_167(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_131(Global_2689224[iParam0 /*451*/].f_317.f_6) == 23;
			}
		}
	}
	return 0;
}

int func_168()
{
	if (func_170() && func_169())
	{
		return 1;
	}
	return 0;
}

var func_169()
{
	return Global_1836590;
}

var func_170()
{
	return Global_1836602;
}

bool func_171(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 11);
}

void func_172()
{
	int iVar0;
	
	if (func_56(PLAYER::PLAYER_PED_ID()) && func_181(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_160(PLAYER::PLAYER_ID());
		if (iVar0 != -1 && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_178(0, iVar0), func_178(1, iVar0), 5f, false, true, 0) || func_177()))
		{
			if (HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				if (!Global_75027)
				{
					Global_75027 = 1;
					bLocal_209 = true;
				}
			}
			else if (bLocal_209)
			{
				Global_75027 = 0;
			}
			if (!iLocal_208)
			{
				func_175(1);
				iLocal_208 = 1;
				func_71(&uLocal_210);
			}
		}
		else
		{
			if (bLocal_209)
			{
				Global_75027 = 0;
			}
			if (iLocal_208)
			{
				func_80(&uLocal_210, 0, 0);
				iLocal_208 = 0;
			}
		}
	}
	else
	{
		if (bLocal_209)
		{
			Global_75027 = 0;
		}
		if (iLocal_208)
		{
			func_80(&uLocal_210, 0, 0);
			iLocal_208 = 0;
		}
	}
	if (((!func_107(PLAYER::PLAYER_ID()) && !func_174()) && !func_173()) && !BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_513, 3))
	{
		if (func_69(&uLocal_210) && func_79(&uLocal_210, 5000, 0))
		{
			func_175(0);
			func_71(&uLocal_210);
		}
	}
}

bool func_173()
{
	return Global_1946941.f_4703.f_1 != -1;
}

bool func_174()
{
	return Global_1946941.f_4708 != -1;
}

void func_175(int iParam0)
{
	if (func_176() && iParam0)
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

int func_176()
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

int func_177()
{
	if (func_35())
	{
		if ((MISC::ARE_STRINGS_EQUAL(&(Global_22830.f_1), "FIX_REC_MENU_T") || MISC::ARE_STRINGS_EQUAL(&(Global_22830.f_1), "AGENCY_HELI_H4")) || MISC::ARE_STRINGS_EQUAL(&(Global_22830.f_1), "OF_PA_MENUI_1b"))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_178(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_180(iParam1, 0), func_179(iParam1, 0), 6.1458f, 3.6035f, 0.0002f);
			break;
		
		case 1:
			return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_180(iParam1, 0), func_179(iParam1, 0), 9.8062f, -0.0547f, 2.8373f);
			break;
	}
	return 0f, 0f, 0f;
}

float func_179(int iParam0, int iParam1)
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

Vector3 func_180(int iParam0, int iParam1)
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

int func_181(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_131(Global_2689224[iParam0 /*451*/].f_317.f_6) == 24;
			}
		}
	}
	return 0;
}

void func_182()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if ((Global_1893551[iVar0 /*599*/].f_10.f_33 == 263 && Global_1893551[iVar0 /*599*/].f_10.f_182 == 5) && Global_1893551[iVar0 /*599*/].f_10.f_193 == 24)
	{
		if (((func_186(163) || func_186(164)) || func_185(iVar0, 163)) || func_185(iVar0, 164))
		{
			func_184(163);
			func_184(164);
			func_183(163);
			func_183(164);
		}
		if (!iLocal_12)
		{
			ENTITY::CREATE_MODEL_HIDE(2712.903f, -366.175f, -54.234f, 2f, joaat("ch_prop_whiteboard"), false);
			ENTITY::CREATE_MODEL_HIDE(2712.903f, -372.687f, -54.234f, 2f, joaat("ch_prop_whiteboard_03"), false);
			iLocal_12 = 1;
		}
	}
	else
	{
		ENTITY::REMOVE_MODEL_HIDE(2712.903f, -366.175f, -54.234f, 2f, joaat("ch_prop_whiteboard"), false);
		ENTITY::REMOVE_MODEL_HIDE(2712.903f, -372.687f, -54.234f, 2f, joaat("ch_prop_whiteboard_03"), false);
	}
}

void func_183(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1921039.f_11.f_329[iVar0]), bVar1);
}

void func_184(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_205[iVar0]), bVar1);
}

var func_185(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_205[iVar0], iVar1);
}

var func_186(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_1921039.f_11.f_329[iVar0], iVar1);
}

void func_187()
{
	int iVar0;
	
	if (func_189(PLAYER::PLAYER_ID()) != 6)
	{
		func_188();
		return;
	}
	if (PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, false, true, &iVar0, false, true, -1))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("a_m_y_hipster_03"))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_RAGDOLL(iVar0))
				{
					Global_1957933 = 0;
				}
			}
		}
	}
}

void func_188()
{
	if (iLocal_11 == -1)
	{
		iLocal_11 = Global_1957933;
	}
	else if (Global_1957933 == 0)
	{
		Global_1957933 = iLocal_11;
	}
}

int func_189(int iParam0)
{
	if (func_112(iParam0) == 262)
	{
		return func_117(iParam0);
	}
	return -1;
}

void func_190()
{
	if (Global_1922816)
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
}

void func_191()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	iVar0 = 0;
	if ((Global_1946935 == 1 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_smpl_interior_int")) == 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_armory_truck")) == 1)
	{
		iVar0 = 1;
	}
	if ((iVar0 && !func_107(PLAYER::PLAYER_ID())) && !func_108(PLAYER::PLAYER_ID()))
	{
		if (!Global_1659387.f_656)
		{
			Global_1659387.f_656 = 1;
			iLocal_206 = 1;
		}
		if (!BitTest(Global_1946941.f_4521, 1))
		{
			if (((((CAM::IS_SCREEN_FADED_IN() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && func_56(PLAYER::PLAYER_PED_ID())) && !func_195()) && !func_194()) && func_192())
			{
				MISC::SET_BIT(&(Global_1946941.f_4521), true);
			}
		}
	}
	else if (iLocal_206)
	{
		Global_1659387.f_656 = 0;
		iLocal_206 = 0;
	}
}

int func_192()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_193(PLAYER::PLAYER_PED_ID(), 0) == -1)
	{
		return 1;
	}
	return 0;
}

int func_193(int iParam0, bool bParam1)
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

int func_194()
{
	if (func_35())
	{
		if (MISC::GET_HASH_KEY(&(Global_22830.f_1)) == 1212453695)
		{
			return 1;
		}
	}
	return 0;
}

bool func_195()
{
	bool bVar0;
	
	if (func_56(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1097.535f, -3016.011f, -40.7658f, 1109.298f, -2983.69f, -34.1882f, false, true, 0);
	}
	return bVar0;
}

void func_196()
{
	if ((func_167(PLAYER::PLAYER_ID()) && func_56(PLAYER::PLAYER_PED_ID())) && !Global_2703660.f_3428)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2144.838f, 1111.555f, -25.61724f, -2144.808f, 1125.779f, -22.36767f, 7.75f, false, true, 0))
		{
			PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uLocal_203);
			if (func_56(uLocal_203[0]))
			{
				if (ENTITY::GET_ENTITY_MODEL(uLocal_203[0]) == joaat("vagner"))
				{
					func_197(1);
				}
				else
				{
					func_197(0);
				}
			}
		}
	}
	else
	{
		func_197(0);
	}
}

void func_197(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1965089.f_1)
		{
			Global_1965089.f_1 = 1;
		}
	}
	else if (Global_1965089.f_1)
	{
		Global_1965089.f_1 = 0;
	}
}

void func_198()
{
	Global_262145.f_31483 = 1;
	Global_262145.f_31484 = 1;
	Global_262145.f_31485 = 1;
	Global_262145.f_31486 = 1;
	Global_262145.f_31487 = 1;
	Global_262145.f_31488 = 1;
	Global_262145.f_31489 = 1;
	Global_262145.f_31490 = 1;
	Global_262145.f_31491 = 1;
	Global_262145.f_31492 = 1;
	Global_262145.f_31493 = 1;
	Global_262145.f_31494 = 1;
	Global_262145.f_31495 = 1;
	Global_262145.f_31496 = 1;
	Global_262145.f_31497 = 1;
	Global_262145.f_31468 = 1636243200;
	Global_262145.f_31469 = 1636243200;
	Global_262145.f_31470 = 1636243200;
	Global_262145.f_31471 = 1636243200;
	Global_262145.f_31472 = 1636243200;
	Global_262145.f_31473 = 1636243200;
	Global_262145.f_31474 = 1636243200;
	Global_262145.f_31475 = 1636243200;
	Global_262145.f_31476 = 1636243200;
	Global_262145.f_31477 = 1636243200;
	Global_262145.f_31478 = 1636243200;
	Global_262145.f_31479 = 1636243200;
	Global_262145.f_31480 = 1636243200;
	Global_262145.f_31481 = 1636243200;
	Global_262145.f_31482 = 1636243200;
}

void func_199()
{
	bool bVar0;
	
	if (iLocal_202 == 1 && Global_1946908)
	{
		bVar0 = false;
		if (!func_21(PLAYER::PLAYER_ID(), 1, 0) && !BitTest(Global_1946941, 27))
		{
			bVar0 = true;
		}
		if (!bVar0 && !func_31())
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			if ((((func_56(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && CAM::IS_SCREEN_FADED_IN()) && !func_108(PLAYER::PLAYER_ID()))
			{
				if (!func_107(PLAYER::PLAYER_ID()) && !BitTest(Global_1946941, 27))
				{
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			Global_1946921 = 0;
			Global_1946908 = 0;
			Global_1946909 = 0;
		}
	}
}

void func_200()
{
	int iVar0;
	
	iLocal_202++;
	if (iLocal_202 == 30)
	{
		iLocal_202 = 0;
	}
	else
	{
		return;
	}
	if (((((((((!func_56(PLAYER::PLAYER_PED_ID()) || !func_21(PLAYER::PLAYER_ID(), 1, 1)) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) || !func_31()) || func_107(PLAYER::PLAYER_ID())) || func_161(PLAYER::PLAYER_ID())) || func_108(PLAYER::PLAYER_ID())) || Global_2703660.f_3428) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_56(iVar0))
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

void func_201()
{
	if (func_204())
	{
		func_80(&uLocal_199, 1, 0);
	}
	if (func_203())
	{
		if (!iLocal_196)
		{
			Global_262145.f_12920 = 1;
			Global_262145.f_12921 = 1;
			Global_262145.f_12922 = 1;
			Global_262145.f_12923 = 1;
			Global_262145.f_12924 = 1;
			Global_262145.f_12925 = 1;
			Global_262145.f_12926 = 1;
			Global_262145.f_12927 = 1;
			if (func_204())
			{
				Global_2703660.f_833.f_16 = 1;
				iLocal_195 = 1;
			}
			else if (!func_79(&uLocal_199, 1000, 1))
			{
				iLocal_195 = 1;
			}
			iLocal_196 = 1;
		}
		if (func_204() && func_202())
		{
			Global_2703660.f_833.f_16 = 1;
		}
	}
	else if (iLocal_196)
	{
		Global_262145.f_12920 = 0;
		Global_262145.f_12921 = 0;
		Global_262145.f_12922 = 0;
		Global_262145.f_12923 = 0;
		Global_262145.f_12924 = 0;
		Global_262145.f_12925 = 0;
		Global_262145.f_12926 = 0;
		Global_262145.f_12927 = 0;
		if (func_204())
		{
			Global_2703660.f_833.f_16 = 1;
		}
		iLocal_196 = 0;
	}
	if (iLocal_195)
	{
		Global_1938246.f_44 = 1;
		if (!func_69(&uLocal_197))
		{
			func_70(&uLocal_197, 1, 0);
		}
		if ((CAM::IS_SCREEN_FADED_IN() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && func_79(&uLocal_197, 2000, 1))
		{
			Global_1938246.f_44 = 0;
			iLocal_195 = 0;
			func_71(&uLocal_197);
		}
	}
}

var func_202()
{
	return Global_1964204;
}

int func_203()
{
	if (!func_56(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	switch (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_30)
	{
		case 83:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -797.2475f, 320.8778f, 186.3198f, -797.2629f, 328.7055f, 189.591f, 6.6875f, false, true, 0);
			break;
		
		case 84:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -797.5227f, 320.9101f, 216.0381f, -797.2699f, 328.7055f, 219.3134f, 6.6875f, false, true, 0);
			break;
		
		case 85:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -763.4833f, 329.0945f, 195.0859f, -763.2568f, 336.8706f, 198.3614f, 6.6875f, false, true, 0);
			break;
	}
	return 0;
}

int func_204()
{
	if (Global_2703660.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_205()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	func_218(1, Local_191);
	func_216(Local_193);
	if (PLAYER::PLAYER_ID() != func_6())
	{
		if ((func_215(PLAYER::PLAYER_ID()) || func_214(PLAYER::PLAYER_ID())) && !func_213())
		{
			bVar0 = true;
			if (((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_107(PLAYER::PLAYER_ID())) && !func_218(1, Local_191)) && !func_216(Local_193)) && !Global_1946865) && !func_212())
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					if (Global_2359296[func_211() /*5559*/].f_675.f_2 != -1 && BitTest(Global_1585853[Global_2359296[func_211() /*5559*/].f_675.f_2 /*142*/].f_103, 0))
					{
						func_206(1, 0, 1, 0, 0, 0, 0);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (!iLocal_190)
		{
			func_126(45, 2, 1);
			func_126(45, 8, 1);
			iLocal_190 = 1;
		}
	}
	else if (iLocal_190)
	{
		func_123(45, 2, 1);
		func_123(45, 8, 1);
		iLocal_190 = 0;
	}
}

void func_206(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_210() < 0 && Global_1958752)
	{
		return;
	}
	if (func_164(35))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703660.f_61.f_52, 3))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703660.f_61.f_56, 3))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703660.f_61.f_60, 3))
	{
		bParam0 = true;
	}
	if (bParam0)
	{
		func_209(2);
	}
	else
	{
		func_209(1);
	}
	if (bParam1)
	{
		func_209(11);
	}
	if (bParam2)
	{
		func_209(32);
		if (bParam3)
		{
			if (func_210() >= 0 && BitTest(Global_1585853[func_210() /*142*/].f_103, 0))
			{
				func_209(33);
			}
		}
		else
		{
			func_208(33);
		}
		if (func_210() >= 0)
		{
			if (func_207(Global_1585853[func_210() /*142*/].f_66))
			{
				func_209(40);
			}
		}
	}
	else if (bParam5)
	{
		func_209(37);
	}
	if (bParam4)
	{
		func_209(36);
	}
	if (func_164(36))
	{
		if (func_164(2))
		{
			func_208(36);
		}
	}
	if (bParam6)
	{
		func_209(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2810701.f_424 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_207(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_208(bool bParam0)
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_2703660.f_61.f_1, bParam0))
		{
			MISC::CLEAR_BIT(&(Global_2703660.f_61.f_1), bParam0);
		}
	}
	else if (BitTest(Global_2703660.f_61.f_2, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2703660.f_61.f_2), (bParam0 - 32));
	}
}

void func_209(bool bParam0)
{
	if (bParam0 < 32)
	{
		if (!BitTest(Global_2703660.f_61.f_1, bParam0))
		{
			MISC::SET_BIT(&(Global_2703660.f_61.f_1), bParam0);
		}
	}
	else if (!BitTest(Global_2703660.f_61.f_2, (bParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2703660.f_61.f_2), (bParam0 - 32));
	}
}

int func_210()
{
	return Global_2359296[func_211() /*5559*/].f_675.f_2;
}

int func_211()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_212()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

int func_213()
{
	if (func_56(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_103441, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 201.2196f, 5174.217f, -89.99727f, 198.8149f, 5175.969f, -87.49727f, 1.75f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_214(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_131(Global_2689224[iParam0 /*451*/].f_317.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_215(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return Global_2689224[iParam0 /*451*/].f_317.f_6 == 122;
			}
		}
	}
	return 0;
}

int func_216(var uParam0, var uParam1)
{
	if (func_35() && (func_217(&(Global_22830.f_1), "DEL_VEH_SEL0") || func_217(&(Global_22830.f_1), "DEL_VEH_SEL3")))
	{
		func_80(&uParam0, 1, 0);
		return 1;
	}
	else if (func_69(&uParam0) && !func_79(&uParam0, 1000, 1))
	{
		return 1;
	}
	return 0;
}

int func_217(char* sParam0, char* sParam1)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_218(int iParam0, var uParam1, var uParam2)
{
	if (Global_75027)
	{
		func_80(&uParam1, 1, 0);
		return 1;
	}
	else if ((iParam0 && func_69(&uParam1)) && !func_79(&uParam1, 1000, 1))
	{
		return 1;
	}
	return 0;
}

void func_219()
{
	int iVar0;
	
	if ((func_30() && func_226(Global_4718592.f_138376)) && func_225() == 26)
	{
		if (!iLocal_189)
		{
			iVar0 = func_220();
			if (iVar0 != -1)
			{
				if (func_69(&(Global_1890190[iVar0 /*105*/].f_31)))
				{
					if (func_79(&(Global_1890190[iVar0 /*105*/].f_31), 37500, 0))
					{
						Global_2715551.f_6286 = -1;
						iLocal_189 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_189)
	{
		iLocal_189 = 0;
	}
}

int func_220()
{
	return func_221();
}

int func_221()
{
	struct<13> Var0;
	
	Var0 = { func_223() };
	if (func_222(Var0))
	{
		return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
	}
	return func_6();
}

bool func_222(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> func_223()
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_224(iVar0))
		{
			return Global_2715551.f_1.f_845[iVar0 /*57*/];
		}
		iVar0++;
	}
	return Var1;
}

bool func_224(int iParam0)
{
	return BitTest(Global_2715551.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

int func_225()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_192;
}

bool func_226(int iParam0)
{
	return iParam0 == 88;
}

void func_227()
{
	int iVar0;
	
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !Global_2667223.f_2680) && !BitTest(Global_1946941, 27))
	{
		if ((((BitTest(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317, 4) && Global_1946935 == 4) && Global_1946941.f_508) && Global_1946941.f_516) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_fixer_hq")) == 1)
		{
			iVar0 = func_228(PLAYER::PLAYER_ID());
			if (func_131(iVar0) == 24)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (func_69(&uLocal_187))
					{
						if (func_79(&uLocal_187, 20000, 1))
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
							func_71(&uLocal_187);
						}
					}
					else
					{
						func_70(&uLocal_187, 1, 0);
					}
				}
				else if (func_69(&uLocal_187))
				{
					func_71(&uLocal_187);
				}
			}
			else
			{
				func_71(&uLocal_187);
			}
		}
		else
		{
			func_71(&uLocal_187);
		}
	}
	else
	{
		func_71(&uLocal_187);
	}
}

int func_228(int iParam0)
{
	if (iParam0 != func_6() && func_21(iParam0, 1, 1))
	{
		return Global_2689224[iParam0 /*451*/].f_317.f_16;
	}
	return -1;
}

void func_229()
{
	if (!func_236())
	{
		if (func_69(&uLocal_185))
		{
			func_71(&uLocal_185);
		}
		iLocal_184 = 0;
		iLocal_183 = 0;
		return;
	}
	if (((!BitTest(Global_1977247.f_1, 17) && !BitTest(Global_1977247.f_1, 0)) && func_235(PLAYER::PLAYER_ID())) && !func_233(PLAYER::PLAYER_ID(), 0))
	{
		if (func_69(&(Global_1977247.f_4)))
		{
			if (iLocal_184)
			{
				func_71(&(Global_1977247.f_4));
				func_230(&(Global_1977247.f_4), iLocal_183, 0, 0);
				iLocal_184 = 0;
			}
			if (!func_69(&uLocal_185))
			{
				MISC::_COPY_MEMORY(&uLocal_185, &(Global_1977247.f_4), 2);
				iLocal_183 = 0;
			}
		}
		else if (func_69(&uLocal_185))
		{
			iLocal_183 = func_84(&uLocal_185, 0, 0);
			iLocal_184 = 1;
			func_71(&uLocal_185);
		}
	}
}

void func_230(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1 == 0)
	{
		*uParam0 = NETWORK::GET_TIME_OFFSET(func_232(bParam2, bParam3), func_231(-iParam1, 0));
		uParam0->f_1 = 1;
	}
}

int func_231(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_232(bool bParam0, bool bParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam0)
	{
		if (!bParam1)
		{
			return NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			return NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	return MISC::GET_GAME_TIMER();
}

int func_233(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977288[iParam0 /*55*/].f_27, func_234(iParam1));
	}
	return 0;
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 16;
		
		case 2:
			return 17;
		
		default:
	}
	return -1;
}

int func_235(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977288[iParam0 /*55*/].f_27, 2);
	}
	return 0;
}

int func_236()
{
	if ((((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || func_30()) || func_239()) || func_238(PLAYER::PLAYER_ID())) || func_237(PLAYER::PLAYER_ID())) || !BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_139, 22))
	{
		return 0;
	}
	return 1;
}

int func_237(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2784005;
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

int func_238(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1893551[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_239()
{
	if (func_113(PLAYER::PLAYER_ID(), 0) && func_240(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

var func_240(int iParam0)
{
	return func_241(iParam0, 20);
}

var func_241(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_4, iParam1);
}

void func_242()
{
	if (BitTest(Global_1946941.f_8, 25))
	{
		if (Global_4282954 != -1)
		{
			Global_4282954 = -1;
		}
	}
}

void func_243()
{
	int iVar0;
	
	if (Global_4718592.f_87009 == Global_262145.f_31359[5])
	{
		if (!iLocal_163)
		{
			iLocal_163 = 1;
		}
	}
	else if (iLocal_163)
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-935.7f, -2992.2f, 13.9f, "v_hanger");
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			INTERIOR::DISABLE_INTERIOR(iVar0, false);
			iLocal_163 = 0;
		}
	}
	if (!BitTest(Global_4718592.f_132160, 21))
	{
		if (!iLocal_164 && !STREAMING::IS_IPL_ACTIVE("sf_dlc_fixer_hanger_door"))
		{
			ENTITY::CREATE_MODEL_HIDE(-1010.708f, -2980.452f, 25.5042f, 1f, joaat("sf_fixer_door_hanger"), true);
			iLocal_164 = 1;
		}
	}
	else if (iLocal_164)
	{
		ENTITY::REMOVE_MODEL_HIDE(-1010.708f, -2980.452f, 25.5042f, 1f, joaat("sf_fixer_door_hanger"), false);
		iLocal_164 = 0;
	}
}

void func_244()
{
	if (func_248() && (((BitTest(Global_1946941.f_4, 2) || Global_2667223.f_2681) || func_245(PLAYER::PLAYER_PED_ID()) >= 10) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())))
	{
		if (func_56(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 4922.84f, -4907.485f, 2.228949f, 4919.344f, -4904.029f, 4.454555f, 3.25f, false, true, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 51, true);
			PAD::DISABLE_CONTROL_ACTION(2, 51, true);
		}
	}
}

int func_245(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_247(iParam0);
	iVar1 = func_246(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_43566[iVar1 /*5*/].f_3;
}

int func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_43566[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_247(int iParam0)
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
		if (iParam0 == Global_43566[iVar0 /*5*/].f_1)
		{
			return Global_43566[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_248()
{
	return func_249(PLAYER::PLAYER_ID());
}

var func_249(int iParam0)
{
	return func_250(&(Global_2689224[iParam0 /*451*/].f_433), 0);
}

var func_250(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_251()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if ((BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_344, 31) && !func_252(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 51);
			PAD::DISABLE_CONTROL_ACTION(2, 51, true);
		}
		if (Global_1836747.f_68)
		{
			iVar0 = (Global_2715551.f_4316.f_378[70] - 2000);
			if (!func_69(&(Global_2715551.f_4316.f_227[70 /*2*/])) || func_79(&(Global_2715551.f_4316.f_227[70 /*2*/]), iVar0, 1))
			{
				func_80(&(Global_2715551.f_4316.f_227[70 /*2*/]), 1, 0);
				iLocal_162 = 1;
				Global_2715551.f_4316.f_378[70] = Global_262145.f_25453;
			}
		}
		else if (iLocal_162)
		{
			func_71(&(Global_2715551.f_4316.f_227[70 /*2*/]));
			Global_2715551.f_4316.f_378[70] = Global_262145.f_25453;
			iLocal_162 = 0;
		}
	}
}

int func_252(int iParam0)
{
	if (iParam0 != func_6())
	{
		return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_403.f_3, 6);
	}
	return 0;
}

void func_253()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if ((func_254(PLAYER::PLAYER_ID()) && func_112(PLAYER::PLAYER_ID()) != 229) && func_112(PLAYER::PLAYER_ID()) != 230)
	{
		iVar1 = 0;
		while (iVar1 < Global_1660686)
		{
			if (Global_1660686.f_1[iVar1] == 1572255940)
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			Global_1660686.f_1[Global_1660686] = 1572255940;
			Global_1660686++;
		}
	}
	else if (Global_1660686 > 0)
	{
		iVar1 = 0;
		while (iVar1 < Global_1660686)
		{
			if (Global_1660686.f_1[iVar1] == 1572255940)
			{
				Global_1660686.f_1[iVar1] = 0;
				Global_1660686 = (Global_1660686 - 1);
			}
			iVar1++;
		}
	}
}

int func_254(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_241(iParam0, 9);
	}
	return 0;
}

void func_255()
{
	if (Global_2810701.f_962)
	{
		if (Global_2703660.f_61.f_16)
		{
			Global_2810701.f_962 = 0;
		}
	}
}

void func_256()
{
	if (Global_1977125.f_3 == 1)
	{
		if (!BitTest(Global_1977182.f_1, 11) && !BitTest(Global_1977125.f_10, 1))
		{
			if (func_257() && BitTest(Global_1977125.f_10, 0))
			{
				if (Global_262145.f_30589)
				{
					Global_262145.f_30589 = 0;
				}
			}
		}
	}
	else if (Global_1977125.f_3 != 0)
	{
		if (!Global_262145.f_30589)
		{
			Global_262145.f_30589 = 1;
		}
	}
}

int func_257()
{
	if (func_21(PLAYER::PLAYER_ID(), 1, 1))
	{
		return func_103(PLAYER::PLAYER_PED_ID(), 987.32f, 79.32f, 79.99f, 0) <= 20f;
	}
	return 0;
}

void func_258()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	bool bVar8;
	
	if (((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !func_31()) || func_249(PLAYER::PLAYER_ID()))
	{
		return;
	}
	Var5 = { func_260() };
	iVar0 = 0;
	while (iVar0 < 17)
	{
		Var2 = { func_259(iVar0) };
		if (!func_73(Var2))
		{
			fVar1 = SYSTEM::VDIST2(Var2, Var5);
			if (fVar1 > 4E+08f)
			{
				bVar8 = true;
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		if (func_21(PLAYER::PLAYER_ID(), 1, 1))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
}

Vector3 func_259(int iParam0)
{
	if (iParam0 < 17)
	{
		return Global_262145.f_6158[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

Vector3 func_260()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	else
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
	}
	return ENTITY::GET_ENTITY_COORDS(iVar0, false);
}

void func_261()
{
	int iVar0;
	int iVar1;
	
	if (!Global_1659387.f_556)
	{
		Global_1659387.f_556 = 1;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				func_262(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_262(int iParam0)
{
	int iVar0;
	
	SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case -1386010354:
			func_263(iParam0);
			break;
	}
}

void func_263(int iParam0)
{
	struct<10> Var0;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var0.f_3 = 4;
	SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 10);
	bVar11 = false;
	iVar10 = 0;
	while (iVar10 < Var0.f_3)
	{
		if (iVar10 < 4 && NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) == Var0.f_3[iVar10])
		{
			bVar11 = true;
		}
		iVar10++;
	}
	if (bVar11)
	{
		if (NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) == Var0.f_3[0])
		{
			func_264(Var0.f_2, &(Var0.f_3), Var0.f_8, Var0.f_9);
		}
		else
		{
			iVar12 = -1;
			func_264(Var0.f_2, &(Var0.f_3), Var0.f_8, iVar12);
		}
	}
}

void func_264(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (*uParam1 >= 4)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0] == 0)
		{
			(*uParam1)[iVar0] = -1;
		}
		iVar0++;
	}
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!(*uParam1)[iVar0] == -1)
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar4 = (*uParam1)[iVar0];
		if (iVar4 < 0)
		{
			iVar4 = (iVar4 * -1);
		}
		iVar3 = (2147483647 - iVar2);
		if (iVar4 > iVar3)
		{
			iVar2 = (iVar4 - iVar3);
		}
		else
		{
			iVar2 = (iVar2 + iVar4);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_9[iVar0] = -1;
		iVar0++;
	}
	Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_3 = uParam0;
	Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_2 = iVar2;
	Global_4527588[PLAYER::PLAYER_ID() /*19*/] = 0;
	Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_4[iVar0] = (*uParam1)[iVar0];
		iVar0++;
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		SCRIPT::SET_NO_LOADING_SCREEN(true);
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	if (iParam2 == -1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_14 = 0;
		}
	}
	func_266(PLAYER::PLAYER_ID(), 0, 57348, 0);
	func_265();
	Global_4516656.f_943 = 0;
}

void func_265()
{
	Global_4516656.f_944 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_266(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_274())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_31())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_50(PLAYER::PLAYER_ID(), 0) && !func_49()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689224[bParam0 /*451*/].f_251 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_271(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_270(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(bParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(bParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_269();
					func_268();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2689224[bParam0 /*451*/].f_252 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667223.f_2681)
				{
					Global_2667223.f_2681 = 0;
				}
			}
			else
			{
				if (!func_270(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_267(Global_4718592.f_138376))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575030)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(bParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(bParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(bParam0, bParam1, iVar28);
		}
	}
}

bool func_267(int iParam0)
{
	return iParam0 == 17;
}

void func_268()
{
	struct<3> Var0;
	
	Global_2703660.f_910 = 0;
	Global_2703660.f_911 = 0;
	Global_2703660.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703660.f_917 = -1;
	Global_2703660.f_918 = 0;
	Global_2667223.f_2692 = { Var0 };
}

void func_269()
{
	Global_2667223.f_702 = 0;
	Global_2667223.f_2735 = 0;
	Global_2667223.f_515 = 0;
	Global_2667223.f_606 = 0;
	Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_214 = 0;
	Global_2667223.f_2690 = 0;
}

int func_270(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_271(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_273();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), true);
			}
		}
		if (func_50(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_272(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_272(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_273()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), false);
		}
	}
}

int func_274()
{
	if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_887, 2) && !Global_2715551.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_275()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_4718592 == 0)
	{
		if (!iLocal_92)
		{
			iVar0 = 0;
			while (iVar0 < 65)
			{
				iLocal_93[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 14) && (func_26(Global_794709.f_177589[iVar0 /*13*/].f_1) || func_276(Global_794709.f_177589[iVar0 /*13*/].f_1)))
				{
					MISC::CLEAR_BIT(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
					iVar1 = (iVar0 / 32);
					bVar2 = (iVar0 % 32);
					MISC::SET_BIT(&(iLocal_93[iVar1]), bVar2);
				}
				iVar0++;
			}
			iLocal_92 = 1;
		}
	}
	else if (iLocal_92)
	{
		iVar0 = 0;
		while (iVar0 < 2018)
		{
			iVar3 = (iVar0 / 32);
			bVar4 = (iVar0 % 32);
			if (BitTest(iLocal_93[iVar3], bVar4))
			{
				MISC::SET_BIT(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 65)
		{
			iLocal_93[iVar0] = 0;
			iVar0++;
		}
		iLocal_92 = 0;
	}
}

int func_276(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31359[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_277()
{
	if (func_279())
	{
		func_278(0);
	}
}

void func_278(int iParam0)
{
	Global_76665 = iParam0;
}

bool func_279()
{
	return Global_76665;
}

void func_280()
{
	if (PLAYER::PLAYER_ID() == func_6())
	{
		return;
	}
	if ((BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_403.f_3, 6) || BitTest(Global_1958953, 3)) || BitTest(Global_1958953, 2))
	{
		iLocal_90 = 1;
		iLocal_91 = 1;
	}
	else
	{
		if (iLocal_90)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1965740) && !ENTITY::IS_ENTITY_DEAD(Global_1965740, false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1965740))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1965740, false);
					iLocal_90 = 0;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_1965740);
				}
			}
			else
			{
				iLocal_90 = 0;
			}
		}
		if (iLocal_91)
		{
			if (((!HUD::IS_WARNING_MESSAGE_ACTIVE() && func_31()) && CAM::IS_SCREEN_FADED_IN()) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2810701.f_298) && !ENTITY::IS_ENTITY_DEAD(Global_2810701.f_298, false))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2810701.f_298))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Global_2810701.f_298, false);
						iLocal_91 = 0;
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2810701.f_298);
					}
				}
			}
		}
	}
}

void func_281()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) <= 0)
	{
		iLocal_82 = 0;
		return;
	}
	if (Global_262145.f_30700[7] != Global_4718592.f_87009)
	{
		iLocal_82 = 0;
		return;
	}
	if (iLocal_82)
	{
		return;
	}
	Global_4980736.f_88102[66 /*926*/].f_839.f_8 = 0f;
	Global_4980736.f_88102[67 /*926*/].f_839.f_8 = 0f;
	Global_4980736.f_88102[68 /*926*/].f_839.f_8 = 0f;
	Global_4980736.f_88102[69 /*926*/].f_839.f_8 = 0f;
	MISC::SET_BIT(&(Global_4980736.f_88102[66 /*926*/].f_530), 25);
	MISC::SET_BIT(&(Global_4980736.f_88102[67 /*926*/].f_530), 25);
	MISC::SET_BIT(&(Global_4980736.f_88102[68 /*926*/].f_530), 25);
	MISC::SET_BIT(&(Global_4980736.f_88102[69 /*926*/].f_530), 25);
	iLocal_82 = 1;
}

void func_282()
{
	int iVar0;
	int iVar1;
	
	if (func_292(PLAYER::PLAYER_ID()) && func_291(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_286(PLAYER::PLAYER_ID(), 0, 1);
		if ((iVar0 != 7 && iVar0 != 8) && iVar0 != 9)
		{
			func_284(0, 8, 1);
		}
		if (func_283())
		{
			iVar1 = 0;
			while (iVar1 <= 21)
			{
				if (iVar1 < 4 || iVar1 > 7)
				{
					Global_22830.f_1616[iVar1] = 0;
				}
				if (iVar1 > 18)
				{
					StringCopy(&(Global_22830.f_79[iVar1 /*6*/]), "CELL_MP_302", 24);
				}
				iVar1++;
			}
		}
	}
}

bool func_283()
{
	return BitTest(Global_1973284, 1);
}

void func_284(int iParam0, int iParam1, int iParam2)
{
	func_94(func_285(iParam0, iParam2), iParam1, -1, 1, 0);
	switch (iParam2)
	{
		case 0:
			Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_411[iParam0] = iParam1;
			break;
		
		case 1:
			Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_468[iParam0] = iParam1;
			break;
	}
}

int func_285(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 8749;
					break;
				
				case 1:
					return 9631;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 8750;
					break;
				
				case 1:
					return 9911;
					break;
			}
			break;
		
		case 2:
			return 8751;
			break;
		
		case 3:
			return 8752;
			break;
		
		case 4:
			return 8753;
			break;
		
		case 5:
			return 8754;
			break;
		
		case 6:
			return 8755;
			break;
		
		case 7:
			return 8756;
			break;
		
		case 8:
			return 8757;
			break;
		
		case 9:
			return 8758;
			break;
		
		case 10:
			return 8759;
			break;
		
		case 11:
			return 8760;
			break;
		
		case 12:
			return 8761;
			break;
		
		case 13:
			return 8762;
			break;
		
		case 14:
			return 8763;
			break;
		
		case 15:
			return 8764;
			break;
		
		case 16:
			return 8765;
			break;
		
		case 17:
			return 8766;
			break;
		
		case 18:
			return 8767;
			break;
		
		case 19:
			return 8768;
			break;
		
		case 20:
			return 8769;
			break;
		
		case 21:
			return 8770;
			break;
		
		case 22:
			return 8771;
			break;
		
		case 23:
			return 8772;
			break;
		
		case 24:
			return 8773;
			break;
		
		case 25:
			return 8774;
			break;
		
		case 26:
			return 8775;
			break;
		
		case 27:
			return 8776;
			break;
		
		case 28:
			return 8777;
			break;
		
		case 29:
			return 8778;
			break;
		
		case 30:
			return 8779;
			break;
		
		case 31:
			return 8780;
			break;
		
		case 32:
			return 8781;
			break;
		
		case 33:
			return 8782;
			break;
		
		case 34:
			return 8783;
			break;
		
		case 35:
			return 8784;
			break;
		
		case 36:
			return 8785;
			break;
		
		case 37:
		case 38:
		case 39:
		case 40:
			return 8786;
			break;
	}
	return 8749;
}

int func_286(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != func_6())
	{
		switch (iParam2)
		{
			case 0:
				iVar0 = Global_1853131[iParam0 /*888*/].f_267.f_411[iParam1];
				break;
			
			case 1:
				iVar0 = Global_1853131[iParam0 /*888*/].f_267.f_468[iParam1];
				break;
		}
		iVar1 = func_290(iVar0);
		if (iVar1 != -1)
		{
			if ((func_289(iParam0, iVar1, iParam2) && func_288(iParam0, iVar1, iParam2)) || func_287(iVar1))
			{
				return iVar0;
			}
		}
	}
	return 0;
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case 18:
		case 17:
		case 19:
			return 1;
			break;
	}
	return 0;
}

int func_288(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	if (iParam0 != func_6())
	{
		uVar0 = iParam1;
		switch (iParam2)
		{
			case 0:
				return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_409.f_1, uVar0);
				break;
			}
	}
	return 1;
}

int func_289(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	if (iParam0 != func_6())
	{
		uVar0 = iParam1;
		switch (iParam2)
		{
			case 0:
				return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_409, uVar0);
				break;
			}
	}
	return 1;
}

int func_290(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 10;
		
		case 5:
			return 0;
		
		case 6:
			return 1;
		
		case 7:
			return 5;
		
		case 8:
			return 3;
		
		case 9:
			return 4;
		
		case 10:
			return 2;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 12;
		
		case 15:
			return 11;
		
		case 16:
			return 13;
		
		case 17:
			return 9;
		
		case 18:
			return 17;
		
		case 19:
			return 18;
		
		case 20:
			return 19;
		
		case 21:
			return 14;
		
		case 22:
			return 15;
		
		case 23:
			return 16;
		
		default:
	}
	return -1;
}

int func_291(int iParam0)
{
	if (iParam0 != func_6())
	{
		return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_460.f_3, 3);
	}
	return 0;
}

int func_292(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_130(iParam0) && Global_2689224[iParam0 /*451*/].f_317.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_293()
{
	if (!func_295(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_403.f_3, 1))
	{
		if (((((((((((((func_294(0) && func_294(1)) && func_294(2)) && func_294(3)) && func_294(4)) && func_294(5)) && func_294(6)) && func_294(7)) && func_294(8)) && func_294(9)) && func_294(10)) && func_294(11)) && func_294(12)) && func_294(13))
		{
			MISC::SET_BIT(&(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_403.f_3), true);
		}
	}
}

var func_294(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_409, uVar0);
}

bool func_295(int iParam0)
{
	return Global_1853131[iParam0 /*888*/].f_267.f_403 != 0;
}

void func_296()
{
	int iVar0;
	
	iVar0 = func_16();
	if (iVar0 == 0 || iVar0 == 1)
	{
		if (!iLocal_87[iVar0])
		{
			if (func_11(31736, -1))
			{
				func_297(32314, 1, -1);
				iLocal_87[iVar0] = 1;
			}
		}
	}
}

void func_297(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_16();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_298()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_84)
	{
		iVar0 = func_19(7854, -1, 0);
		if (iVar0 != 0)
		{
			iVar1 = iVar0;
			func_299(iVar1);
			iLocal_84 = 1;
		}
		else
		{
			iLocal_84 = 1;
		}
	}
}

void func_299(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	func_94(7854, iParam0, -1, 1, 0);
	func_2(7285, 122, -1, 1);
	Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_349 = iParam0;
}

void func_300()
{
	if (!func_114(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_248())
	{
		return;
	}
	func_301();
	PAD::DISABLE_CONTROL_ACTION(0, 25, true);
}

void func_301()
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		}
	}
}

void func_302()
{
	if (!func_21(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (!func_304(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_303())
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1007.262f, -79.05004f, -100.0031f, -1008.166f, -79.02464f, -98.00307f, 0.9f, false, true, 0))
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.16f);
	}
}

int func_303()
{
	if (BitTest(Global_1946941.f_505, 29) || BitTest(Global_1946941.f_505, 30))
	{
		return 1;
	}
	return 0;
}

int func_304(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_131(Global_2689224[iParam0 /*451*/].f_317.f_6) == 21;
			}
		}
	}
	return 0;
}

void func_305()
{
	struct<3> Var0;
	float fVar3;
	
	if (!func_21(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (!func_304(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_303())
	{
		return;
	}
	if (!iLocal_80)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1009.889f, -85.44301f, -100.4031f, -1009.788f, -94.42639f, -97.56435f, 3.5f, false, true, 0))
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_81 = 0;
			iLocal_80 = 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1013.188f, -49.82637f, -100.0031f, -1023.535f, -49.96507f, -97.50307f, 3.5f, false, true, 0))
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_81 = 1;
			iLocal_80 = 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1008.102f, -49.8092f, -100.0031f, -1002.001f, -49.79685f, -97.46447f, 3.5f, false, true, 0))
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_81 = 2;
			iLocal_80 = 1;
		}
	}
	else
	{
		func_309(iLocal_81, &Var0, &fVar3);
		if (CAM::IS_SCREEN_FADED_OUT() && func_307(Var0, fVar3, 0, 1, 0, 0, 1, 0, 1, 0, 0))
		{
			CAM::DO_SCREEN_FADE_IN(500);
			func_306("MUS_STIO_DOOR_R", -1);
			iLocal_80 = 0;
		}
	}
}

void func_306(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_307(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_22691.f_6 = 1;
	if (Global_2703660.f_910 && Global_2703660.f_918)
	{
		func_308(0, bParam9);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (Global_2703660.f_910)
		{
			func_308(0, bParam9);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2703660.f_910 && !bParam11)
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if ((MISC::ABSF((Var1.f_0 - Param0.f_0)) < 0.2f && MISC::ABSF((Var1.f_1 - Param0.f_1)) < 0.2f) && MISC::ABSF((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (MISC::ABSF(fVar4) < 1f)
			{
				Global_2703660.f_910 = 0;
				Global_2703660.f_911 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2703660.f_912 || !Param0.f_1 == Global_2703660.f_912.f_1) || !Param0.f_2 == Global_2703660.f_912.f_2) || !fParam3 == Global_2703660.f_915)
	{
		if (Global_2703660.f_910 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2703660.f_916) < 10000)
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2703660.f_911 = 1;
		}
		else
		{
			Global_2703660.f_911 = 0;
		}
		Global_2703660.f_912 = { Param0 };
		Global_2703660.f_915 = fParam3;
		Global_2703660.f_910 = 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("kosatka"))
			{
				bParam4 = false;
			}
		}
	}
	if (!Global_2703660.f_910 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		iParam7 = iParam7;
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (Global_2703660.f_917 > -1)
		{
			Global_2703660.f_916 = NETWORK::GET_NETWORK_TIME();
			Global_2703660.f_910 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, Param0, false, true, true, true);
							ENTITY::SET_ENTITY_HEADING(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
							}
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
				func_308(bParam6, bParam9);
				return 1;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam3, bParam4, bParam10, false);
			}
			Global_2703660.f_916 = NETWORK::GET_NETWORK_TIME();
			Global_2703660.f_910 = 1;
		}
	}
	if (Global_2703660.f_910)
	{
		Global_22691.f_6 = 1;
		Global_2703660.f_916 = NETWORK::GET_NETWORK_TIME();
		if (Global_2703660.f_917 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_2703660.f_912) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_308(bParam6, bParam9);
					return 1;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam12 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
						Global_2703660.f_918 = 1;
						return 0;
					}
				}
				func_308(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

void func_308(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (!bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_268();
}

int func_309(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1010.057f, -84.228f, -100.4031f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 1:
			*uParam1 = { -1012.153f, -49.7938f, -100.4031f };
			*uParam2 = 270.5516f;
			return 1;
			break;
		
		case 2:
			*uParam1 = { -1009.128f, -49.7938f, -100.4031f };
			*uParam2 = 90.9647f;
			return 1;
			break;
	}
	return 0;
}

void func_310()
{
	if (!func_21(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (!func_304(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_303())
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1010.787f, -47.99169f, -100.3851f, -1010.684f, -55.70412f, -98.15313f, 6f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1007.917f, -85.33492f, -100.3889f, -1011.801f, -85.40305f, -98.14022f, 3.5f, false, true, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.499f);
	}
}

void func_311()
{
	if (func_112(PLAYER::PLAYER_ID()) != 262)
	{
		func_312();
		return;
	}
	if (iLocal_10)
	{
		return;
	}
	iLocal_9 = 1;
	if (!func_79(&uLocal_7, 5000, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 18, true);
		PAD::DISABLE_CONTROL_ACTION(2, 18, true);
		PAD::DISABLE_CONTROL_ACTION(1, 18, true);
		return;
	}
	iLocal_10 = 1;
}

void func_312()
{
	func_71(&uLocal_7);
	if (iLocal_9)
	{
		iLocal_9 = 0;
	}
	if (iLocal_10)
	{
		iLocal_10 = 0;
	}
}

void func_313()
{
	if (!func_21(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (Global_262145.f_31504 == 0 && iLocal_3 == 0)
	{
		return;
	}
	if (func_314() && Global_262145.f_31504)
	{
		Global_262145.f_31504 = 0;
		iLocal_3 = 1;
	}
	if (!func_314() && iLocal_3)
	{
		Global_262145.f_31504 = 1;
		iLocal_3 = 0;
	}
}

int func_314()
{
	int iVar0;
	
	if ((func_317(PLAYER::PLAYER_ID(), 1) || (func_316(PLAYER::PLAYER_ID()) && !func_113(PLAYER::PLAYER_ID(), 0))) || func_315())
	{
		return 1;
	}
	if (func_113(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_112(PLAYER::PLAYER_ID());
		switch (iVar0)
		{
			case 192:
			case 190:
			case 167:
			case 168:
			case 178:
			case 188:
			case 225:
			case 226:
			case 229:
			case 230:
			case 233:
			case 237:
			case 271:
			case 262:
			case 263:
			case 285:
			case 284:
			case 264:
				return 1;
			}
		
		default:
	}
	return 0;
}

var func_315()
{
	return Global_1835491;
}

int func_316(int iParam0)
{
	if (func_238(iParam0))
	{
		return 1;
	}
	if (func_254(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_317(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_318(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1853131[iParam0 /*888*/] == 2 || Global_1853131[iParam0 /*888*/] == 1) || Global_1853131[iParam0 /*888*/] == 0) || Global_1853131[iParam0 /*888*/] == 3) || Global_1853131[iParam0 /*888*/] == 8)
	{
		return 1;
	}
	return 0;
}

bool func_318(int iParam0)
{
	return func_319(iParam0);
}

var func_319(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_11.f_1, 0);
}

void func_320()
{
	int iVar0;
	int iVar1;
	
	if (!func_21(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (BitTest(uLocal_4, 0))
		{
			MISC::CLEAR_BIT(&uLocal_4, false);
		}
		if (BitTest(uLocal_4, 1))
		{
			MISC::CLEAR_BIT(&uLocal_4, true);
		}
		return;
	}
	if (!func_304(PLAYER::PLAYER_ID()))
	{
		if (BitTest(uLocal_4, 0))
		{
			MISC::CLEAR_BIT(&uLocal_4, false);
		}
		if (BitTest(uLocal_4, 1))
		{
			MISC::CLEAR_BIT(&uLocal_4, true);
		}
		return;
	}
	if (func_303())
	{
		if (BitTest(uLocal_4, 0))
		{
			MISC::CLEAR_BIT(&uLocal_4, false);
		}
		if (BitTest(uLocal_4, 1))
		{
			MISC::CLEAR_BIT(&uLocal_4, true);
		}
		return;
	}
	if ((((Global_1578993.f_3 != -1 || CUTSCENE::IS_CUTSCENE_PLAYING()) || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		if (BitTest(uLocal_4, 0))
		{
			MISC::CLEAR_BIT(&uLocal_4, false);
		}
		if (BitTest(uLocal_4, 1))
		{
			MISC::CLEAR_BIT(&uLocal_4, true);
		}
		return;
	}
	if (!(Global_1578993.f_2 == 11 || Global_1578993.f_2 == 12) && !BitTest(uLocal_4, 0))
	{
		if (PED::GET_CLOSEST_PED(-1004.985f, -78.122f, -98.972f, 0.5f, true, true, &iVar0, false, false, -1) && ENTITY::IS_ENTITY_VISIBLE(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
			MISC::SET_BIT(&uLocal_4, false);
		}
	}
	if (Global_1578993.f_2 == 8 && !BitTest(uLocal_4, 1))
	{
		if (PED::GET_CLOSEST_PED(-1004.94f, -80.51f, -98.972f, 0.5f, true, true, &iVar1, false, false, -1) && ENTITY::IS_ENTITY_VISIBLE(iVar1))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar1, false, false);
			MISC::SET_BIT(&uLocal_4, true);
		}
	}
}

void func_321()
{
	int iVar0;
	char* sVar1;
	
	if (func_181(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_332();
		if ((iVar0 != func_6() && func_324(iVar0)) && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_78.f_1))
			{
				sVar1 = func_323(0);
				Local_78.f_0 = MISC::GET_HASH_KEY(sVar1);
				if (func_41(Local_78.f_0))
				{
					Local_78.f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_78.f_0, -1024.45f, -422.027f, 72.259f, false, false, false);
					ENTITY::SET_ENTITY_ROTATION(Local_78.f_1, 0f, 0f, 132f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_78.f_1, true);
				}
			}
		}
		else
		{
			func_322();
		}
	}
	else
	{
		func_322();
	}
}

void func_322()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_78.f_1))
	{
		OBJECT::DELETE_OBJECT(&(Local_78.f_1));
	}
}

char* func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sf_prop_sf_scr_m_lrg_01a";
			break;
		
		case 1:
			return "sf_prop_sf_scr_m_lrg_01b";
			break;
		
		case 2:
			return "sf_prop_sf_scr_m_lrg_01c";
			break;
		
		case 3:
			return "sf_prop_sf_monitor_b_02b";
			break;
		
		case 4:
			return "prop_npc_phone";
			break;
	}
	return "INVALID";
}

int func_324(int iParam0)
{
	if (!func_329(iParam0))
	{
		return 0;
	}
	if (BitTest(Global_1946941.f_10, 5))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if ((func_328(iParam0) && BitTest(Global_1977247.f_1, 8)) && !func_327())
		{
			return 1;
		}
	}
	else if (func_326(iParam0) && func_325() == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_325()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10;
}

int func_326(int iParam0)
{
	if (iParam0 == func_6())
	{
		return 0;
	}
	return BitTest(Global_2689224[iParam0 /*451*/].f_317.f_5, 18);
}

bool func_327()
{
	return func_11(28257, -1);
}

int func_328(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977288[iParam0 /*55*/].f_27, 0);
	}
	return 0;
}

int func_329(int iParam0)
{
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (func_30() || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_330() == 1)
	{
		return 0;
	}
	return 1;
}

int func_330()
{
	return func_331(PLAYER::PLAYER_ID());
}

int func_331(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2689224[iParam0 /*451*/].f_317.f_3, 28, 31);
}

int func_332()
{
	return func_156(PLAYER::PLAYER_ID());
}

void func_333()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_338())
		{
			if (func_337() && func_336() != 18)
			{
				iVar0 = func_221();
				if (iVar0 != func_6() && func_335(iVar0))
				{
					if (Global_4718592.f_528 != Global_2711176[2])
					{
						Global_4718592.f_528 = Global_2711176[2];
						iLocal_77 = Global_2711176[2];
					}
				}
				else if (Global_4718592.f_528 != 1)
				{
					Global_4718592.f_528 = 1;
					iLocal_77 = -1;
				}
			}
			else if (func_334())
			{
				if (iLocal_77 != -1)
				{
					if (Global_2711176[2] != iLocal_77)
					{
						Global_2711176[2] = iLocal_77;
					}
					if (Global_4718592.f_528 != Global_2711176[2])
					{
						Global_4718592.f_528 = Global_2711176[2];
					}
				}
			}
		}
	}
	else if (iLocal_77 != -1)
	{
		iLocal_77 = -1;
	}
}

bool func_334()
{
	return Global_1923726.f_3;
}

int func_335(int iParam0)
{
	if ((func_233(iParam0, 0) && func_233(iParam0, 1)) && func_233(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_336()
{
	return Global_1057409;
}

int func_337()
{
	switch (func_225())
	{
		case 41:
		case 42:
			return 1;
		
		default:
	}
	return 0;
}

bool func_338()
{
	return func_26(Global_4718592.f_87009);
}

void func_339()
{
	if (func_304(PLAYER::PLAYER_ID()) && func_303())
	{
		if (Global_2785398 == 102)
		{
			uLocal_60 = Global_2792713[102 /*66*/][0];
		}
		else
		{
			Global_2792713[102 /*66*/][0] = uLocal_60;
		}
	}
}

void func_340()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (BitTest(Global_1946941.f_10, 28))
	{
		if (MISC::COMPARE_STRINGS(&(Global_22830.f_1), "OF_PA_MENUI_1b", false, -1) == 0)
		{
			if (!iLocal_64)
			{
				iVar0 = 0;
				iLocal_65[0] = PLAYER::PLAYER_ID();
				iVar0++;
				iVar1 = 0;
				while (iVar1 < 32)
				{
					iVar2 = iVar1;
					if (!iVar2 == PLAYER::PLAYER_ID())
					{
						if (func_351(iVar2))
						{
							if (iVar0 < 10)
							{
								iLocal_65[iVar0] = iVar2;
							}
						}
					}
					iVar1++;
				}
				iLocal_64 = 1;
			}
			if (iLocal_76)
			{
				if (!func_350() && !PAD::IS_CONTROL_JUST_PRESSED(2, 201))
				{
					iLocal_76 = 0;
				}
			}
			else if (func_350() || PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				iVar2 = iLocal_65[Global_22830.f_6002];
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				func_343(iLocal_62, iLocal_63, iVar2);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Fixer_Office_Interior_Scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("DLC_Fixer_Office_Interior_Scene");
				}
			}
		}
		else
		{
			func_341(Global_22830.f_6002, &iLocal_62, &iLocal_63);
			iLocal_64 = 0;
			iLocal_76 = 1;
		}
	}
}

void func_341(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		*iParam1 = 553;
		*iParam2 = 0;
	}
	else
	{
		func_342((iParam0 - 1), iParam1, iParam2);
	}
}

void func_342(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = 0;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 164;
			break;
		
		case 1:
			*uParam1 = 164;
			*uParam2 = 2;
			break;
		
		case 2:
			*uParam1 = 217;
			break;
		
		case 3:
			*uParam1 = 243;
			break;
		
		case 4:
			*uParam1 = 244;
			break;
		
		case 5:
			*uParam1 = 253;
			break;
		
		case 6:
			*uParam1 = 15;
			break;
		
		case 7:
			*uParam1 = 16;
			break;
		
		case 8:
			*uParam1 = 20;
			break;
		
		case 9:
			*uParam1 = 78;
			break;
		
		case 10:
			*uParam1 = 187;
			break;
		
		case 11:
			*uParam1 = 185;
			break;
		
		case 12:
			*uParam1 = 19;
			break;
		
		case 13:
			*uParam1 = 254;
			break;
		
		case 14:
			*uParam1 = 178;
			break;
		
		case 15:
			*uParam1 = 88;
			break;
		
		case 16:
			*uParam1 = 237;
			break;
		
		case 17:
			*uParam1 = 186;
			break;
		
		case 18:
			*uParam1 = 256;
			break;
		
		case 19:
			*uParam1 = 200;
			break;
		
		case 20:
			*uParam1 = 160;
			break;
	}
}

void func_343(int iParam0, int iParam1, int iParam2)
{
	Global_2725269.f_24 = iParam2;
	CAM::DO_SCREEN_FADE_OUT(500);
	func_349(1);
	func_348(iParam0, iParam1);
	func_344(iParam0, iParam1);
}

void func_344(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_347(iParam0, iParam1);
	Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_46 = func_346(iVar0);
	func_345(iVar0, &(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_47), &(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_48));
}

int func_345(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 90:
			*uParam1 = 27;
			*uParam2 = 27;
			return 1;
		
		case 91:
			*uParam1 = 111;
			*uParam2 = 0;
			return 1;
		
		case 115:
			*uParam1 = 40;
			*uParam2 = 12;
			return 1;
		
		case 116:
			*uParam1 = 58;
			*uParam2 = 1;
			return 1;
		
		case 118:
			*uParam1 = 111;
			return 1;
		
		case 119:
			*uParam1 = 120;
			return 1;
		
		case 120:
			*uParam1 = 1;
			*uParam2 = 1;
			return 1;
		
		default:
	}
	return 0;
}

int func_346(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		case 82:
			return 0;
		
		case 83:
			return 1;
		
		case 90:
			return 0;
		
		case 91:
			return 1;
		
		case 97:
			return 0;
		
		case 98:
			return 1;
		
		case 99:
			return 2;
		
		case 100:
			return 3;
		
		case 101:
			return 4;
		
		case 102:
			return 5;
		
		case 103:
			return 6;
		
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		case 109:
			return 4;
		
		case 110:
			return 5;
		
		case 111:
			return 6;
		
		case 112:
			return 7;
		
		case 113:
			return 8;
		
		case 114:
			return 9;
		
		default:
	}
	return -1;
}

int func_347(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case joaat("mpsv_lp0_31"):
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (iParam1 == 2)
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		case 480:
			return 123;
		
		case 482:
			return 124;
		
		case 483:
			return 125;
		
		case 518:
			return 126;
			break;
		
		case 531:
			return 127;
			break;
		
		case 533:
			return 128;
			break;
		
		case 527:
			return 129;
			break;
		
		case 525:
			return 130;
	}
	return -1;
}

void func_348(var uParam0, var uParam1)
{
	Global_2725269.f_20 = 0;
	Global_2725269.f_19 = 1;
	Global_2725269.f_17 = uParam0;
	Global_2725269.f_18 = uParam1;
}

void func_349(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_513), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_513), 3);
	}
	Global_2725269 = bParam0;
}

int func_350()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_4534059 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	int iVar0;
	
	if (((func_21(iParam0, 1, 1) && !func_359(iParam0)) && func_108(PLAYER::PLAYER_ID())) && !BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 26))
	{
		if (func_357(iParam0, PLAYER::PLAYER_ID(), 0, 1))
		{
			if (func_356(iParam0, PLAYER::PLAYER_ID()))
			{
				if (!func_107(iParam0) && !func_355(iParam0))
				{
					iVar0 = func_160(PLAYER::PLAYER_ID());
					if (func_330() == func_331(iParam0) || !func_352(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_352(int iParam0)
{
	var uVar0;
	
	uVar0 = { func_353(iParam0) };
	return BitTest(uVar0[0], 1);
}

Vector3 func_353(int iParam0)
{
	struct<3> Var0;
	
	if (iParam0 == -1 || iParam0 == 159)
	{
		Var0 = 2;
		return Var0;
	}
	if (Global_1946941.f_13[iParam0 /*3*/][0] == -1)
	{
		Global_1946941.f_13[iParam0 /*3*/] = { func_354(iParam0) };
	}
	return Global_1946941.f_13[iParam0 /*3*/];
}

Vector3 func_354(int iParam0)
{
	struct<3> Var0;
	
	Var0 = 2;
	MISC::SET_BIT(&(Var0[0]), 7);
	MISC::SET_BIT(&(Var0[0]), 13);
	MISC::SET_BIT(&(Var0[0]), 6);
	MISC::SET_BIT(&(Var0[0]), 22);
	MISC::SET_BIT(&(Var0[0]), 20);
	MISC::SET_BIT(&(Var0[0]), false);
	MISC::SET_BIT(&(Var0[0]), 3);
	MISC::SET_BIT(&(Var0[0]), 11);
	MISC::SET_BIT(&(Var0[0]), true);
	MISC::SET_BIT(&(Var0[0]), 19);
	MISC::SET_BIT(&(Var0[0]), 4);
	MISC::SET_BIT(&(Var0[0]), 12);
	MISC::SET_BIT(&(Var0[1]), false);
	MISC::SET_BIT(&(Var0[1]), 6);
	MISC::SET_BIT(&(Var0[1]), 10);
	MISC::SET_BIT(&(Var0[1]), 7);
	MISC::SET_BIT(&(Var0[1]), 20);
	MISC::SET_BIT(&(Var0[1]), 3);
	MISC::SET_BIT(&(Var0[1]), 21);
	return Var0;
}

int func_355(int iParam0)
{
	if (iParam0 == func_6())
	{
		return 0;
	}
	return BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 16);
}

int func_356(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_6() && iParam1 != func_6())
	{
		iVar0 = func_157(iParam0);
		if (iVar0 != func_6())
		{
			return iVar0 == func_157(iParam1);
		}
	}
	return 0;
}

int func_357(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_358(iParam0, 1, 0) && func_358(iParam1, 1, 0))
	{
		if (Global_1853131[iParam0 /*888*/].f_267.f_31 == Global_1853131[iParam1 /*888*/].f_267.f_31 && Global_1853131[iParam0 /*888*/].f_267.f_30 == Global_1853131[iParam1 /*888*/].f_267.f_30)
		{
			if (!bParam2)
			{
				return 1;
			}
			else
			{
				if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 3) && BitTest(Global_1853131[iParam1 /*888*/].f_267.f_28, 3))
				{
					return 1;
				}
				if (!BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 3) && !BitTest(Global_1853131[iParam1 /*888*/].f_267.f_28, 3))
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if ((((Global_2689224[iParam0 /*451*/].f_317.f_6 != -1 && Global_2689224[iParam0 /*451*/].f_317.f_7 > -1) && Global_2689224[iParam0 /*451*/].f_317.f_6 == Global_2689224[iParam1 /*451*/].f_317.f_6) && Global_2689224[iParam0 /*451*/].f_317.f_7 == Global_2689224[iParam1 /*451*/].f_317.f_7) && Global_2680263.f_903.f_168[iParam0] == Global_2680263.f_903.f_168[iParam1])
		{
			return 1;
		}
	}
	return 0;
}

int func_358(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_359(int iParam0)
{
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (((((BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 2) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 3)) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 5)) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 6)) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 7)) || BitTest(Global_1853131[iParam0 /*888*/].f_267.f_379.f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_360()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) <= 0)
	{
		return;
	}
	if (Global_1574988 != 58)
	{
		return;
	}
	if ((!BitTest(Global_1058030.f_15, 19) && !BitTest(Global_1058030.f_15, 20)) && !BitTest(Global_1058030.f_15, 21))
	{
		return;
	}
	NETWORK::NETWORK_BAIL(1, 0, 0);
}

void func_361()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		if (Global_4718592.f_87009 == Global_262145.f_31359[1] && Global_1574962)
		{
			if (Global_1057983.f_5 == 0)
			{
				if (!iLocal_61)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
					iLocal_61 = 1;
				}
			}
			else if (iLocal_61)
			{
				NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				iLocal_61 = 0;
			}
		}
	}
}

void func_362()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		func_365();
	}
	else
	{
		func_363();
	}
}

void func_363()
{
	bool bVar0;
	
	if (iLocal_58 == 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= 25)
	{
		if (BitTest(iLocal_58, bVar0))
		{
			AUDIO::_SET_RADIO_STATION_IS_VISIBLE(func_364(bVar0), false);
			MISC::CLEAR_BIT(&iLocal_58, bVar0);
		}
		bVar0++;
	}
	iLocal_59 = 0;
	Global_2785488 = 0;
}

char* func_364(bool bParam0)
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

void func_365()
{
	bool bVar0;
	var uVar1;
	
	if (!func_366(Global_4718592.f_87009))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= 25)
	{
		uVar1 = func_19(9876, -1, 0);
		if (!BitTest(iLocal_59, bVar0))
		{
			if (BitTest(uVar1, bVar0))
			{
			}
			MISC::SET_BIT(&iLocal_59, bVar0);
			AUDIO::_SET_RADIO_STATION_IS_VISIBLE(func_364(bVar0), true);
		}
		if (!BitTest(uVar1, bVar0) && !BitTest(iLocal_58, bVar0))
		{
			MISC::SET_BIT(&iLocal_58, bVar0);
			Global_2785488 = 1;
		}
		bVar0++;
	}
}

int func_366(int iParam0)
{
	if ((iParam0 == Global_262145.f_31366[0] || iParam0 == Global_262145.f_31366[1]) || iParam0 == Global_262145.f_31366[2])
	{
		return 1;
	}
	return 0;
}

void func_367()
{
	switch (Global_262145.f_30725)
	{
		case joaat("mamba"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.655f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("warrener2"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.565f;
			Global_1966357 = -3.3f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("zr350"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.98f;
			Global_1966357 = -2.7f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("futo2"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.849f;
			Global_1966357 = -4f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("dominator8"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.87f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("previon"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 1.025f;
			Global_1966357 = -3.1f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("growler"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.7f;
			Global_1966357 = -2f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("jester4"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.725f;
			Global_1966357 = -2.9f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("calico"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.735f;
			Global_1966357 = -2.9f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("dominator7"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.735f;
			Global_1966357 = -2.9f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("rt3000"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.695f;
			Global_1966357 = -2.7f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("tailgater2"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.715f;
			Global_1966357 = -3.2f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("cypher"):
			Global_1966354 = 0f;
			Global_1966355 = -1.61f;
			Global_1966356 = 0.755f;
			Global_1966357 = -5f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("sultan3"):
			Global_1966354 = 0f;
			Global_1966355 = -1.6f;
			Global_1966356 = 0.695f;
			Global_1966357 = -3.2f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("clique"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.655f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("ardent"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.655f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("euros"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.655f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("comet6"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.795f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("btype"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.695f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("comet7"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.675f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("sentinel2"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.695f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("nero"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.81f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("rapidgt3"):
			Global_1966354 = 0f;
			Global_1966355 = -1.77f;
			Global_1966356 = 0.975f;
			Global_1966357 = -5.1f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("italigto"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.715f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("hakuchou2"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.905f;
			Global_1966357 = -3.9f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("turismo2"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.985f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("zentorno"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.915f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("verlierer2"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.835f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("youga2"):
			Global_1966354 = 0f;
			Global_1966355 = -2f;
			Global_1966356 = 1.235f;
			Global_1966357 = -7f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("gb200"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.595f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("specter"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.615f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("fmj"):
			Global_1966354 = 0f;
			Global_1966355 = -1.59f;
			Global_1966356 = 0.705f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("gauntlet3"):
			Global_1966354 = 0f;
			Global_1966355 = -1.58f;
			Global_1966356 = 0.655f;
			Global_1966357 = -3.5f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("zion3"):
			Global_1966354 = 0f;
			Global_1966355 = -1.56f;
			Global_1966356 = 0.695f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("granger2"):
			Global_1966354 = 0f;
			Global_1966355 = -2.25f;
			Global_1966356 = 0.905f;
			Global_1966357 = -7f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
	}
}

void func_368()
{
	switch (func_369())
	{
		case joaat("mamba"):
			Global_1966342 = 0.53f;
			break;
		
		case joaat("growler"):
			Global_1966342 = 0.6f;
			break;
		
		case joaat("slamtruck"):
			Global_1966342 = 0.6f;
			break;
		
		case joaat("raiden"):
			Global_1966342 = 0.95f;
			break;
		
		case joaat("jugular"):
			Global_1966342 = 0.65f;
			break;
		
		case joaat("tampa2"):
			Global_1966342 = 0.65f;
			break;
		
		case joaat("t20"):
			Global_1966342 = 0.83f;
			break;
		
		case joaat("zion3"):
			Global_1966342 = 0.59f;
			break;
		
		case joaat("flashgt"):
			Global_1966342 = 0.75f;
			break;
		
		case joaat("retinue"):
			Global_1966342 = 0.62f;
			break;
		
		case joaat("torero"):
			Global_1966342 = 0.75f;
			break;
		
		case joaat("savestra"):
			Global_1966342 = 0.62f;
			break;
		
		case joaat("tailgater2"):
			Global_1966342 = 0.62f;
			break;
		
		case joaat("euros"):
			Global_1966342 = 0.6f;
			break;
		
		case joaat("jb7002"):
			Global_1966342 = 0.8f;
			break;
		
		case joaat("revolter"):
			Global_1966342 = 0.75f;
			break;
		
		case joaat("entityxf"):
			Global_1966342 = 0.65f;
			break;
		
		case joaat("turismor"):
			Global_1966342 = 0.42f;
			break;
		
		case joaat("rt3000"):
			Global_1966342 = 0.6f;
			break;
		
		case joaat("sugoi"):
			Global_1966342 = 0.58f;
			break;
		
		case joaat("cinquemila"):
			Global_1966342 = 0.65f;
			break;
	}
}

int func_369()
{
	return Global_262145.f_26439;
}

void func_370()
{
	var uVar0;
	var uVar3;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_property")) < 1)
	{
		return;
	}
	if (PLAYER::PLAYER_ID() == func_6())
	{
		return;
	}
	if (func_331(PLAYER::PLAYER_ID()) == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) || !ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	func_371(&uVar0, &uVar3);
	if ((func_107(PLAYER::PLAYER_ID()) || Global_1946935 != 7) || !ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1831.333f, 980.1857f, -29.846f, -2225.468f, 1241.217f, -9.4235f, false, true, 0))
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			PAD::DISABLE_CONTROL_ACTION(2, 58, true);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(2, 51, true);
		}
	}
}

void func_371(var uParam0, var uParam1)
{
	*uParam0 = { -1831.333f, 980.1857f, -29.846f };
	*uParam1 = { -2225.468f, 1241.217f, -9.4235f };
}

void func_372()
{
	if (!func_373())
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(2, 51, true);
}

int func_373()
{
	if (BitTest(Global_1946941.f_3, 5))
	{
		return 1;
	}
	if ((func_374(PLAYER::PLAYER_ID()) && func_35()) && func_65(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1085.49f, 211.389f, -49.801f, 10f, 1))
	{
		return 1;
	}
	return 0;
}

int func_374(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_131(Global_2689224[iParam0 /*451*/].f_317.f_6) == 14;
			}
		}
	}
	return 0;
}

void func_375()
{
	var uVar0;
	int iVar19;
	bool bVar20;
	int iVar21;
	
	switch (iLocal_56)
	{
		case 0:
			if (HUD::IS_WARNING_MESSAGE_ACTIVE() && HUD::_GET_WARNING_MESSAGE_TITLE_HASH() == 444479190)
			{
				iLocal_56 = 1;
			}
			break;
		
		case 1:
			if ((((((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT()) || !func_31()) || func_30()) || !ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			{
				iLocal_56 = 0;
				return;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317.f_10 = func_6();
				MISC::SET_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317.f_5), 15);
				MISC::CLEAR_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317.f_1), 31);
				iLocal_57 = Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317.f_17;
				func_405(0, -1);
				if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				{
				}
				iLocal_56 = 2;
				return;
			}
			if ((!HUD::IS_WARNING_MESSAGE_ACTIVE() || HUD::_GET_WARNING_MESSAGE_TITLE_HASH() != 444479190) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				iLocal_56 = 0;
			}
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317.f_5), 15);
			MISC::CLEAR_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317.f_1), 31);
			func_405(0, -1);
			Global_1946941.f_4521.f_6 = iLocal_57;
			iLocal_56 = 3;
			break;
		
		case 3:
			if (Global_1946941.f_4521.f_6 == -1)
			{
				if (((func_56(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && func_31()) && !func_30())
				{
					iVar19 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (func_56(iVar19))
					{
						iVar21 = ENTITY::GET_ENTITY_MODEL(iVar19);
						func_382(iLocal_57, 1, &uVar0);
						if (!func_376(&uVar0, iVar19, iVar21, 0))
						{
							bVar20 = true;
						}
					}
					else
					{
						bVar20 = true;
					}
				}
				else
				{
					bVar20 = true;
				}
				if (bVar20)
				{
					MISC::CLEAR_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317.f_1), 31);
					MISC::CLEAR_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317.f_5), 15);
					MISC::CLEAR_BIT(&(Global_1946941.f_4521.f_1), 9);
					func_405(0, -1);
					iLocal_56 = 0;
				}
			}
			break;
	}
}

int func_376(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	struct<3> Var27;
	struct<3> Var30;
	struct<3> Var33;
	struct<3> Var36;
	struct<3> Var39;
	
	func_381(iParam1, iParam2, &Var0, &Var3, &Var6, &Var9);
	func_380(iParam1, iParam2, &Var12, &Var15, &Var18, &Var21);
	Var24 = { func_378(Var12, Var0, 0f, 1f, 0.5f) };
	Var27 = { func_378(Var15, Var3, 0f, 1f, 0.5f) };
	Var30 = { func_378(Var18, Var6, 0f, 1f, 0.5f) };
	Var33 = { func_378(Var21, Var9, 0f, 1f, 0.5f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var24, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var27, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_377(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || iParam3)
		{
			return 1;
		}
	}
	Var36 = { func_378(Var12, Var15, 0f, 1f, 0.5f) };
	Var39 = { func_378(Var0, Var3, 0f, 1f, 0.5f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var36, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var39, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_377(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || iParam3)
		{
			return 1;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var30, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var33, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_377(ENTITY::GET_ENTITY_HEADING(iParam1), (uParam0->f_14 - 180f), 75f) || iParam3)
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true, 0))
	{
		if ((func_377(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || func_377(ENTITY::GET_ENTITY_HEADING(iParam1), (uParam0->f_14 - 180f), 75f)) || iParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_377(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_378(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_379(Param0.f_0, Param3.f_0, fParam6, fParam7, fParam8), func_379(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_379(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_379(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

void func_380(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<3> Var0;
	struct<2> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	MISC::GET_MODEL_DIMENSIONS(iParam1, &Var0, &Var3);
	Var6.f_0 = Var0.f_0;
	Var6.f_1 = Var3.f_1;
	Var6.f_2 = Var0.f_2;
	Var9.f_0 = Var3.f_0;
	Var9.f_1 = Var3.f_1;
	Var9.f_2 = Var0.f_2;
	Var12.f_0 = Var0.f_0;
	Var12.f_1 = Var0.f_1;
	Var12.f_2 = Var0.f_2;
	Var15.f_0 = Var3.f_0;
	Var15.f_1 = Var0.f_1;
	Var15.f_2 = Var0.f_2;
	*uParam2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var6) };
	*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var9) };
	*uParam4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var12) };
	*uParam5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var15) };
}

void func_381(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	MISC::GET_MODEL_DIMENSIONS(iParam1, &Var0, &Var3);
	Var6.f_0 = Var0.f_0;
	Var6.f_1 = Var3.f_1;
	Var6.f_2 = Var3.f_2;
	Var9 = { Var3 };
	Var12.f_0 = Var0.f_0;
	Var12.f_1 = Var0.f_1;
	Var12.f_2 = Var3.f_2;
	Var15.f_0 = Var3.f_0;
	Var15.f_1 = Var0.f_1;
	Var15.f_2 = Var3.f_2;
	*uParam2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var6) };
	*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var9) };
	*uParam4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var12) };
	*uParam5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var15) };
}

void func_382(int iParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 0:
		case 2:
			if (!BitTest(uParam2->f_3, 15) && func_387(iParam0, iParam1))
			{
				MISC::CLEAR_BIT(&(uParam2->f_3), 4);
				MISC::SET_BIT(&(uParam2->f_3), true);
				uParam2->f_7 = { 1f, 1f, 0.1f };
				uParam2->f_4 = { 1f, 1f, 1f };
			}
			else
			{
				func_386(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14), iParam1);
				func_385(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
				MISC::SET_BIT(&(uParam2->f_3), true);
				MISC::SET_BIT(&(uParam2->f_3), false);
				MISC::SET_BIT(&(uParam2->f_3), 16);
				if (iParam1 == 0)
				{
					MISC::SET_BIT(&(uParam2->f_3), 4);
				}
			}
			break;
		
		case 1:
			if (func_387(iParam0, iParam1) && !BitTest(uParam2->f_3, 15))
			{
				MISC::CLEAR_BIT(&(uParam2->f_3), 4);
				MISC::SET_BIT(&(uParam2->f_3), 2);
				uParam2->f_7 = { 1f, 1f, 0.1f };
				uParam2->f_4 = { 1f, 1f, 1f };
			}
			else
			{
				func_383(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14), iParam1);
				uParam2->f_2 = 1;
				MISC::SET_BIT(&(uParam2->f_3), 6);
				MISC::SET_BIT(&(uParam2->f_3), false);
				MISC::SET_BIT(&(uParam2->f_3), 2);
				MISC::SET_BIT(&(uParam2->f_3), 4);
				func_385(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
			}
			break;
	}
}

void func_383(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	*uParam1 = { func_384(iParam0) };
	switch (iParam0)
	{
		case 149:
			switch (iParam6)
			{
				case 1:
					*uParam2 = { 758.6912f, -679.8961f, 28.2984f };
					*uParam3 = { 758.7398f, -675.8193f, 31.3893f };
					*uParam4 = 3.25f;
					*uParam5 = 90f;
					break;
			}
			break;
		
		case 150:
			switch (iParam6)
			{
				case 1:
					*uParam2 = { -146.3092f, -1341.069f, 28.9145f };
					*uParam3 = { -148.563f, -1341.091f, 32.5145f };
					*uParam4 = 2.75f;
					*uParam5 = 0f;
					break;
			}
			break;
		
		case 151:
			switch (iParam6)
			{
				case 1:
					*uParam2 = { -173.2224f, -35.69027f, 53.21325f };
					*uParam3 = { -172.0434f, -31.97755f, 51.22238f };
					*uParam4 = 2.5f;
					*uParam5 = 70f;
					break;
			}
			break;
		
		case 152:
			switch (iParam6)
			{
				case 1:
					*uParam2 = { 231.3824f, -1875.309f, 25.5283f };
					*uParam3 = { 234.1484f, -1871.995f, 28.9791f };
					*uParam4 = 2.25f;
					*uParam5 = 50f;
					break;
			}
			break;
		
		case 153:
			switch (iParam6)
			{
				case 1:
					*uParam2 = { 488.2599f, -896.563f, 24.7408f };
					*uParam3 = { 488.2544f, -893.4431f, 28.0041f };
					*uParam4 = 2.25f;
					*uParam5 = 85f;
					break;
			}
			break;
	}
}

Vector3 func_384(int iParam0)
{
	switch (iParam0)
	{
		case 149:
			return 759.36f, -675.13f, 27.86f;
			break;
		
		case 150:
			return -144.58f, -1341.37f, 28.87f;
			break;
		
		case 151:
			return -171f, -31.4f, 51.27f;
			break;
		
		case 152:
			return 231.54f, -1875.7f, 25.41f;
			break;
		
		case 153:
			return 488.98f, -897.41f, 24.79f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_385(int iParam0, int* iParam1, int* iParam2, int* iParam3, int* iParam4)
{
	HUD::GET_HUD_COLOUR(9, iParam1, iParam2, iParam3, iParam4);
	*iParam4 = 100;
}

void func_386(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	switch (iParam0)
	{
		case 149:
			switch (iParam6)
			{
				case 0:
					*uParam2 = { 758.6912f, -679.8961f, 28.2984f };
					*uParam3 = { 758.7398f, -675.8193f, 31.3893f };
					*uParam4 = 3.25f;
					*uParam1 = { func_384(iParam0) };
					*uParam5 = 90f;
					break;
				
				case 2:
					*uParam2 = { 758.7247f, -675.6054f, 27.86502f };
					*uParam3 = { 758.7702f, -674.6333f, 29.87855f };
					*uParam4 = 2.5f;
					*uParam1 = { 0f, 0f, 0f };
					*uParam5 = 90f;
					break;
			}
			break;
		
		case 150:
			switch (iParam6)
			{
				case 0:
					*uParam2 = { -146.3092f, -1341.069f, 28.9145f };
					*uParam3 = { -148.563f, -1341.091f, 32.5145f };
					*uParam4 = 2.75f;
					*uParam1 = { func_384(iParam0) };
					*uParam5 = 0f;
					break;
				
				case 2:
					*uParam2 = { -145.0045f, -1340.897f, 28.87919f };
					*uParam3 = { -144.0437f, -1340.924f, 30.89099f };
					*uParam4 = 2.5f;
					*uParam1 = { 0f, 0f, 0f };
					*uParam5 = 0f;
					break;
			}
			break;
		
		case 151:
			switch (iParam6)
			{
				case 0:
					*uParam2 = { -173.2224f, -35.69027f, 53.21325f };
					*uParam3 = { -172.0434f, -31.97755f, 51.22238f };
					*uParam4 = 2.5f;
					*uParam1 = { func_384(iParam0) };
					*uParam5 = 70f;
					break;
				
				case 2:
					*uParam2 = { -172.1773f, -30.94365f, 51.22616f };
					*uParam3 = { -170.3217f, -31.65089f, 52.30008f };
					*uParam4 = 1.25f;
					*uParam1 = { 0f, 0f, 0f };
					*uParam5 = 70f;
					break;
			}
			break;
		
		case 152:
			switch (iParam6)
			{
				case 0:
					*uParam2 = { 231.3824f, -1875.309f, 25.5283f };
					*uParam3 = { 234.1484f, -1871.995f, 28.9791f };
					*uParam4 = 2.25f;
					*uParam1 = { func_384(iParam0) };
					*uParam5 = 50f;
					break;
				
				case 2:
					*uParam2 = { 230.8424f, -1875.809f, 25.40126f };
					*uParam3 = { 231.4307f, -1874.988f, 27.49286f };
					*uParam4 = 2.5f;
					*uParam1 = { 0f, 0f, 0f };
					*uParam5 = 50f;
					break;
			}
			break;
		
		case 153:
			switch (iParam6)
			{
				case 0:
					*uParam2 = { 488.2599f, -896.563f, 24.7408f };
					*uParam3 = { 488.2544f, -893.4431f, 28.0041f };
					*uParam4 = 2.25f;
					*uParam1 = { func_384(iParam0) };
					*uParam5 = 85f;
					break;
				
				case 2:
					*uParam2 = { 488.5411f, -897.9388f, 24.80397f };
					*uParam3 = { 488.5152f, -896.9764f, 26.85103f };
					*uParam4 = 2.5f;
					*uParam1 = { 0f, 0f, 0f };
					*uParam5 = 85f;
					break;
			}
			break;
	}
}

int func_387(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			if (!Global_262145.f_30639)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_403(PLAYER::PLAYER_ID(), func_404(iParam0)))
			{
				return 0;
			}
			if (func_402(0) && func_403(func_325(), func_404(iParam0)))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_388(iParam0) || func_403(PLAYER::PLAYER_ID(), func_404(iParam0)))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_388(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_404(iParam0);
	if (Global_1946941.f_4723.f_23[iVar0 /*2*/].f_1 == MISC::GET_FRAME_COUNT())
	{
		return Global_1946941.f_4723.f_23[iVar0 /*2*/];
	}
	else
	{
		Global_1946941.f_4723.f_23[iVar0 /*2*/].f_1 = MISC::GET_FRAME_COUNT();
	}
	iVar1 = 0;
	while (iVar1 < func_401())
	{
		if (func_389(iVar1, iVar0))
		{
			Global_1946941.f_4723.f_23[iVar0 /*2*/] = 1;
			return 1;
		}
		iVar1++;
	}
	Global_1946941.f_4723.f_23[iVar0 /*2*/] = 0;
	return 0;
}

int func_389(int iParam0, int iParam1)
{
	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 != PLAYER::PLAYER_ID()) && Global_1853131[iParam0 /*888*/].f_267.f_460 == iParam1)
	{
		if (func_391(iParam0))
		{
			if (func_390(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_390(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return BitTest(func_19(9617, -1, 0), 0);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1977288[iParam0 /*55*/].f_1, 0);
	}
	return 0;
}

int func_391(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<35> Var2;
	struct<13> Var37;
	var uVar50;
	bool bVar51;
	bool bVar52;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_400(iParam0);
	}
	iVar0 = func_399(iParam0);
	switch (iVar0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			iVar1 = func_396();
			Var2 = { func_394(iParam0) };
			if (iVar1 == Var2.f_0 && Var2.f_0 != 0)
			{
				return 1;
			}
			break;
		
		case 2:
			Var37 = { func_393(iParam0) };
			return NETWORK::NETWORK_IS_FRIEND(&Var37);
			break;
		
		case 3:
			iVar1 = func_396();
			Var2 = { func_394(iParam0) };
			Var37 = { func_393(iParam0) };
			if ((iVar1 == Var2.f_0 && Var2.f_0 != 0) || NETWORK::NETWORK_IS_FRIEND(&Var37))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_402(1))
			{
				return func_392(iParam0, PLAYER::PLAYER_ID());
			}
			break;
		
		case 5:
			Var37 = { func_393(iParam0) };
			iVar1 = func_396();
			Var2 = { func_394(iParam0) };
			bVar51 = NETWORK::NETWORK_IS_FRIEND(&Var37);
			bVar52 = (iVar1 == Var2.f_0 && Var2.f_0 != 0);
			if (func_402(1))
			{
				uVar50 = func_392(iParam0, PLAYER::PLAYER_ID());
			}
			if ((uVar50 || bVar51) || bVar52)
			{
				return 1;
			}
			break;
		
		case 6:
			return 0;
			break;
	}
	return 0;
}

int func_392(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_157(iParam0);
	if (!iVar0 == func_6())
	{
		if (iVar0 == func_157(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_393(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

struct<35> func_394(int iParam0)
{
	if (func_395(iParam0))
	{
		return Global_1575086[PLAYER::PLAYER_ID() /*35*/];
	}
	Global_2783316 = { func_393(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783211, 0, &Global_2783316);
	return Global_2783211;
}

int func_395(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_396()
{
	struct<13> Var0;
	
	Var0 = { func_398() };
	return func_397(&Var0);
}

int func_397(var* uParam0)
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

struct<13> func_398()
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_399(int iParam0)
{
	if (iParam0 == func_6() || !func_400(iParam0))
	{
		return 6;
	}
	return Global_1853131[iParam0 /*888*/].f_267.f_460.f_1;
}

bool func_400(int iParam0)
{
	return Global_1853131[iParam0 /*888*/].f_267.f_460 != 0;
}

int func_401()
{
	if (Global_2722503)
	{
		return 32;
	}
	return (32 - Global_2722504);
}

bool func_402(bool bParam0)
{
	return func_158(PLAYER::PLAYER_ID(), bParam0);
}

int func_403(int iParam0, int iParam1)
{
	if (iParam0 != func_6())
	{
		if (Global_1853131[iParam0 /*888*/].f_267.f_460 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case 149:
			return 1;
		
		case 150:
			return 2;
		
		case 151:
			return 3;
		
		case 152:
			return 4;
		
		case 153:
			return 5;
		
		default:
	}
	return 0;
}

void func_405(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!BitTest(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317, 5))
		{
			MISC::SET_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317), 5);
			if (iParam1 != -1)
			{
				func_406(1, iParam1);
			}
		}
	}
	else if (BitTest(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317, 5))
	{
		MISC::CLEAR_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317), 5);
		func_406(0, -1);
	}
}

void func_406(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317.f_17 = iParam1;
	}
	else
	{
		Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317.f_17 = -1;
	}
}

void func_407()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723442.f_3)
	{
		switch (iLocal_53)
		{
			case 0:
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					return;
				}
				if (Global_1946941.f_496 && func_100(Global_1946941.f_3369))
				{
					func_408(1);
					iLocal_53 = 1;
				}
				break;
			
			case 1:
				func_408(1);
				if ((!func_30() && func_31()) && Global_1946935 == 7)
				{
					bVar0 = true;
				}
				else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					bVar0 = true;
				}
				else if ((func_31() && !func_108(PLAYER::PLAYER_ID())) && !func_29(PLAYER::PLAYER_ID()))
				{
					bVar0 = true;
				}
				if (func_225() == 37 && Global_262145.f_10514)
				{
					func_70(&uLocal_54, 1, 0);
				}
				if (bVar0)
				{
					iLocal_53 = 2;
				}
				break;
			
			case 2:
				func_408(0);
				iLocal_53 = 0;
				break;
		}
	}
	else if (iLocal_53 != 0)
	{
		func_408(0);
		iLocal_53 = 0;
	}
	if (func_69(&uLocal_54))
	{
		if (func_79(&uLocal_54, 20000, 1))
		{
			func_71(&uLocal_54);
			Global_262145.f_10514 = 1;
		}
		else
		{
			Global_262145.f_10514 = 0;
		}
	}
}

void func_408(bool bParam0)
{
	func_409(bParam0);
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946941.f_9), 21);
		MISC::SET_BIT(&(Global_1946941.f_9), 20);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946941.f_9), 21);
		MISC::CLEAR_BIT(&(Global_1946941.f_9), 20);
	}
}

void func_409(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946941.f_4), 7);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946941.f_4), 7);
	}
}

void func_410()
{
	switch (iLocal_52)
	{
		case 0:
			if (BitTest(Global_1946941, 6))
			{
				if (BitTest(Global_2703660.f_61.f_60, 0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_sandbox")) > 0)
				{
					iLocal_52 = 1;
				}
			}
			break;
		
		case 1:
			if (Global_1574582.f_1)
			{
				iLocal_52 = 2;
			}
			else if (func_418())
			{
				iLocal_52 = 0;
			}
			break;
		
		case 2:
			if (!Global_1574582.f_1)
			{
				iLocal_52 = 0;
			}
			else if (func_418())
			{
				iLocal_52 = 3;
			}
			break;
		
		case 3:
			iLocal_52 = 0;
			if (Global_1574582.f_1)
			{
				func_411();
			}
			break;
	}
}

void func_411()
{
	if (Global_1574582.f_1 == 1)
	{
		func_412(7, 0, 1);
		Global_1574582.f_1 = 0;
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_9 = 0;
	}
}

void func_412(int iParam0, int iParam1, bool bParam2)
{
	if (func_417())
	{
		if (iParam1 == 1)
		{
			if (Global_2810701.f_4462 == -1)
			{
				Global_2810701.f_4462 = Global_262145.f_26848;
			}
			func_80(&(Global_2810701.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2810701.f_4465 == -1)
				{
					Global_2810701.f_4465 = Global_262145.f_26849;
				}
				func_80(&(Global_2810701.f_4463), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
				func_416(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
			func_416(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_415()) && !func_413(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_413(int iParam0)
{
	if (func_414(iParam0, 1, 0))
	{
		if (Global_1853131[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_414(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_318(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853131[iParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_415()
{
	return Global_2714635.f_841;
}

void func_416(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_417())
		{
			if (func_21(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_21(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_417()
{
	return Global_1574582;
}

bool func_418()
{
	return (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_sandbox")) <= 0 && !func_419(PLAYER::PLAYER_ID()));
}

int func_419(int iParam0)
{
	if (iParam0 != func_6())
	{
		return BitTest(Global_2689224[iParam0 /*451*/].f_317.f_5, 6);
	}
	return 0;
}

void func_420()
{
	int iVar0;
	
	if (func_167(PLAYER::PLAYER_ID()))
	{
		if (Global_2810701.f_5194.f_765)
		{
			iVar0 = func_422();
			if ((iVar0 != -1 && iVar0 <= 5000) && !func_69(&uLocal_50))
			{
				func_80(&uLocal_50, 1, 0);
				func_421(1, 1);
			}
		}
	}
	if (func_69(&uLocal_50))
	{
		if (func_79(&uLocal_50, 10000, 1))
		{
			func_71(&uLocal_50);
			func_421(0, 0);
		}
	}
}

void func_421(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!Global_1964914 && bParam0)
		{
			Global_1964914 = 1;
			iLocal_48 = 1;
		}
	}
	else
	{
		if (Global_1964914 && iLocal_48)
		{
			Global_1964914 = 0;
		}
		iLocal_48 = 0;
	}
	if (bParam1)
	{
		if (!BitTest(Global_1946941.f_3, 5))
		{
			MISC::SET_BIT(&(Global_1946941.f_3), 5);
			iLocal_49 = 1;
		}
	}
	else
	{
		if (BitTest(Global_1946941.f_3, 5) && iLocal_49)
		{
			MISC::CLEAR_BIT(&(Global_1946941.f_3), 5);
		}
		iLocal_49 = 0;
	}
}

int func_422()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (func_423(7, iVar0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1645748.f_4617.f_11[iVar0 /*16*/])) && MISC::GET_HASH_KEY(&(Global_1645748.f_4617.f_11[iVar0 /*16*/])) == 1444771325)
			{
				return Global_1645748.f_4617[iVar0];
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_423(int iParam0, int iParam1)
{
	return BitTest(Global_1645748.f_6736[iParam0], iParam1);
}

void func_424()
{
	if (PLAYER::PLAYER_ID() == func_6())
	{
		return;
	}
	if (BitTest(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_317, 5))
	{
		if ((HUD::IS_WARNING_MESSAGE_ACTIVE() && (HUD::_GET_WARNING_MESSAGE_TITLE_HASH() == 15890625 || HUD::_GET_WARNING_MESSAGE_TITLE_HASH() == -862848537)) && HUD::_GET_WARNING_MESSAGE_TITLE_HASH() != 0)
		{
			NETWORK::NETWORK_BAIL(0, 0, 0);
		}
	}
}

void func_425()
{
	if (func_429())
	{
		if (!iLocal_42)
		{
			func_126(45, 1, 1);
			iLocal_42 = 1;
		}
	}
	else if (iLocal_42)
	{
		func_123(45, 1, 1);
		iLocal_42 = 0;
		func_71(&uLocal_43);
	}
	if (func_426())
	{
		if (!iLocal_47)
		{
			Global_1965089 = 1;
			iLocal_47 = 1;
		}
	}
	else if (iLocal_47)
	{
		Global_1965089 = 0;
		iLocal_47 = 0;
		func_71(&uLocal_45);
	}
}

int func_426()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_167(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = 235;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 58;
	}
	if (func_37("CM_PV_MEM") || func_37("CM_PV_MEM_PC"))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0))
		{
			func_80(&uLocal_45, 0, 0);
			return 1;
		}
	}
	if (func_69(&uLocal_45) && !func_79(&uLocal_45, 3000, 0))
	{
		return 1;
	}
	if (func_56(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_166(iVar1, 1))
		{
			iVar2 = func_427(iVar1);
			if ((iVar2 != func_6() && iVar2 != PLAYER::PLAYER_ID()) && BitTest(Global_2689224[iVar2 /*451*/].f_317.f_4, 25))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_427(int iParam0)
{
	int iVar0;
	
	if (!func_166(iParam0, 1))
	{
		return func_6();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return func_428(iVar0, 0, 1, 0);
}

bool func_428(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_21(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return bVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_21(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return bParam3;
		}
	}
	return func_6();
}

int func_429()
{
	int iVar0;
	
	if (!func_167(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = 201;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 223;
	}
	if (!func_37("CM_PV_MEM") && !func_37("CM_PV_MEM_PC"))
	{
		return 1;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0))
	{
		func_80(&uLocal_43, 0, 0);
		return 1;
	}
	if (func_35() && MISC::ARE_STRINGS_EQUAL(&(Global_22830.f_1), "INST_MENU_TTL"))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
		{
			func_80(&uLocal_43, 0, 0);
			return 1;
		}
	}
	if (func_69(&uLocal_43) && !func_79(&uLocal_43, 3000, 0))
	{
		return 1;
	}
	return 0;
}

void func_430()
{
	if ((Global_111868 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) <= 0) && func_31())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_431()
{
	int iVar0;
	
	if (!iLocal_6)
	{
		if (Global_1836379)
		{
			iVar0 = func_432(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10385 = 1;
			}
			iLocal_6 = 1;
		}
	}
	else if (!Global_1836379)
	{
		iLocal_6 = 0;
	}
}

int func_432(int iParam0)
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

void func_433()
{
	if (!iLocal_5)
	{
		if (Global_1836379)
		{
			if (func_435() || func_434())
			{
				Global_262145.f_19964 = 1;
			}
			else
			{
				Global_262145.f_19964 = 0;
			}
			iLocal_5 = 1;
		}
	}
	else if (!Global_1836379)
	{
		iLocal_5 = 0;
	}
}

int func_434()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_432(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10494)
	{
		return 0;
	}
	uVar1[0] = func_432(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_432(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_432(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_432(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10490 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10494)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_435()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_432(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10493)
	{
		return 0;
	}
	uVar1[0] = func_432(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_432(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_432(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_432(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10489 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10493)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_436()
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < Global_1853131)
		{
			MISC::SET_BIT(&(Global_1853131[iVar0 /*888*/].f_766), true);
			iVar0++;
		}
	}
}

void func_437()
{
	if (Global_262145.f_10469 != 120)
	{
		Global_262145.f_10469 = 120;
	}
}

void func_438()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_439(0.69f, 0.06f, "STRING", sLocal_0);
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

void func_439(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_440()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

