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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 10;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	var uLocal_63 = 0;
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
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_103 = 20;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
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
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
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
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	int* iLocal_224 = NULL;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	int* iLocal_227 = NULL;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	bool bLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	struct<3> Local_237 = { 0, 0, 0 } ;
	struct<3> Local_240 = { 0, 0, 0 } ;
	struct<3> Local_243 = { 0, 0, 0 } ;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
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
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	Local_237 = { 0f, 0f, 0f };
	Local_240 = { Local_237 };
	Local_243 = { Local_237 };
	iLocal_248 = 3;
	iLocal_253 = 24818;
	iLocal_256 = 24816;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(178))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_82();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_81())
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (func_80(0))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (func_79(14))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if ((!BitTest(Global_114135.f_10053.f_99, 0) && func_73() == 1) && !func_72())
		{
			func_1();
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1()
{
	switch (iLocal_246)
	{
		case 0:
			func_46();
			func_42();
			func_32();
			func_30();
			func_21();
			if (BitTest(Global_114135.f_10053.f_99, 1) && !bLocal_233)
			{
				iLocal_246++;
			}
			break;
		
		case 1:
			if (func_17(&iLocal_227) > 5f)
			{
				if (!BitTest(Global_114135.f_10053.f_99, 3))
				{
					func_14(28, iLocal_81[20], 1);
					func_7(28);
					MISC::SET_BIT(&(Global_114135.f_10053.f_99), 3);
					func_5(63, 1);
					iLocal_246++;
				}
			}
			break;
		
		case 2:
			if (func_3(63))
			{
				iLocal_246++;
			}
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_114135.f_10053.f_99), 0);
			func_2();
			break;
	}
}

int func_2()
{
	if (func_80(0))
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

bool func_3(int iParam0)
{
	return func_4(iParam0, 0);
}

int func_4(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_114135.f_32754[iParam0], iParam1);
}

void func_5(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_4(iParam0, 0))
		{
			func_6(iParam0, 1, 0);
			func_6(iParam0, 2, 0);
			func_6(iParam0, 3, 0);
			func_6(iParam0, 4, 0);
			func_6(iParam0, 0, 1);
			Global_78329[iParam0] = 1;
		}
	}
	else
	{
		func_6(iParam0, 0, 0);
	}
}

void func_6(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_114135.f_32754[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_114135.f_32754[iParam0]), iParam1);
	}
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_54711[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_54711[iVar0 /*203*/].f_10[(Global_54711[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_54711[iVar0 /*203*/].f_9 - 1);
	if (!Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_12(Global_45411[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		func_8(1, Global_45411[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_45411[iVar1 /*12*/].f_3)
		{
			case 0:
				func_8(0, Global_45411[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_8(1, Global_45411[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_8(2, Global_45411[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54711[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_8(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_73();
	bVar1 = false;
	StringCopy(&cVar2, func_11(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1");
				break;
			
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3");
				break;
			
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2");
				break;
			
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_9(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_10(iParam1)), 0));
		}
		else
		{
			func_9(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_10(iParam1)), 0));
		}
		switch (Global_21066)
		{
			case 0:
				StringCopy(&Global_21055, "Phone_SoundSet_Michael", 24);
				Global_45403++;
				if (Global_45403 > 16)
				{
					Global_45403 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_21055, "Phone_SoundSet_Trevor", 24);
				Global_45405++;
				if (Global_45405 > 16)
				{
					Global_45405 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_21055, "Phone_SoundSet_Franklin", 24);
				Global_45404++;
				if (Global_45404 > 16)
				{
					Global_45404 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_21055, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_21055, true);
	}
}

void func_9(int iParam0)
{
	Global_45406[Global_45410] = iParam0;
	Global_23483 = 1;
	Global_23482 = iParam0;
	Global_45410++;
	if (Global_45410 == 3)
	{
		Global_45410 = 0;
	}
}

char* func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_11(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[0 /*29*/].f_7));
		
		case 1:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[1 /*29*/].f_7));
		
		case 2:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[2 /*29*/].f_7));
		
		case 7:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[12 /*29*/].f_7));
		
		case 4:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[60 /*29*/].f_7));
		
		case 6:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[62 /*29*/].f_7));
		
		case 3:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[14 /*29*/].f_7));
		
		case 16:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[97 /*29*/].f_7));
		
		case 19:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[99 /*29*/].f_7));
		
		case 15:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[15 /*29*/].f_7));
		
		case 26:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[30 /*29*/].f_7));
		
		case 27:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[17 /*29*/].f_7));
		
		case 29:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[20 /*29*/].f_7));
		
		case 30:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[43 /*29*/].f_7));
		
		case 31:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[44 /*29*/].f_7));
		
		case 32:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[19 /*29*/].f_7));
		
		case 34:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[40 /*29*/].f_7));
		
		case 36:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381");
		
		case 38:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[122 /*29*/].f_7));
		
		case 40:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[125 /*29*/].f_7));
		
		case 41:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[113 /*29*/].f_7));
		
		case 42:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[126 /*29*/].f_7));
		
		case 43:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[127 /*29*/].f_7));
		
		case 44:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[124 /*29*/].f_7));
		
		case 45:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[114 /*29*/].f_7));
		
		case 46:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[115 /*29*/].f_7));
		
		case 47:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[116 /*29*/].f_7));
		
		case 48:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[123 /*29*/].f_7));
		
		case 49:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[117 /*29*/].f_7));
		
		case 50:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[118 /*29*/].f_7));
		
		case 51:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[119 /*29*/].f_7));
		
		case 52:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[120 /*29*/].f_7));
		
		case 53:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_12(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_54711[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_54711[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_54711[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_14(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_16(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_54711[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_54711[iVar0 /*203*/].f_2 = iParam0;
	Global_54711[iVar0 /*203*/].f_10[Global_54711[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_54711[iVar0 /*203*/].f_10[Global_54711[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_54711[iVar0 /*203*/].f_10[Global_54711[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_54711[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_54711[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_54711[iVar0 /*203*/].f_4[iVar1] == Global_45411[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_54711[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_54711[iVar0 /*203*/].f_4[Global_54711[iVar0 /*203*/].f_3] = Global_45411[iParam1 /*12*/].f_3;
			Global_54711[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_54711[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_54711[iVar0 /*203*/].f_4[iVar1] == Global_45411[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_54711[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_54711[iVar0 /*203*/].f_4[Global_54711[iVar0 /*203*/].f_3] = Global_45411[iParam1 /*12*/].f_2;
			Global_54711[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_54711[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_54711[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_15(Global_54711[iVar0 /*203*/].f_4[iVar1], Global_54711[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_15(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_48736[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_48736[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_12(Global_45411[iVar20 /*12*/].f_1) };
		if (Global_45411[iVar20 /*12*/].f_2 == iParam0 && !Global_45411[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_45411[iVar20 /*12*/].f_2;
		iVar0 = Global_54349[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_54349[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_45403 = (Global_45403 - 1);
						if (Global_45403 < 0)
						{
							Global_45403 = 0;
						}
						break;
					
					case 1:
						Global_45404 = (Global_45404 - 1);
						if (Global_45404 < 0)
						{
							Global_45404 = 0;
						}
						break;
					
					case 2:
						Global_45405 = (Global_45405 - 1);
						if (Global_45405 < 0)
						{
							Global_45405 = 0;
						}
						break;
					}
				}
		}
		Global_54349[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_54349[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_54349[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_54349[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_54349[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_54349[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_54349[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_54349[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_45403 = (Global_45403 - 1);
						if (Global_45403 < 0)
						{
							Global_45403 = 0;
						}
						break;
					
					case 1:
						Global_45404 = (Global_45404 - 1);
						if (Global_45404 < 0)
						{
							Global_45404 = 0;
						}
						break;
					
					case 2:
						Global_45405 = (Global_45405 - 1);
						if (Global_45405 < 0)
						{
							Global_45405 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_54711[iVar24 /*203*/].f_1 == iParam1 && Global_54711[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_54349[iParam0 /*120*/].f_18[iVar0] = Global_54711[iVar23 /*203*/].f_1;
		Global_54349[iParam0 /*120*/].f_1[iVar0] = (Global_54711[iVar23 /*203*/].f_9 - 1);
		Global_54349[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_54349[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_54349[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_54349[iParam0 /*120*/]++;
		iVar25 = Global_54349[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_54711[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_45411[iVar26 /*12*/].f_2;
		if (Global_54711[iVar23 /*203*/].f_10[(Global_54711[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_54711[iVar23 /*203*/].f_10[(Global_54711[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_12(Global_45411[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_54349[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_8(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_8(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_8(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_8(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_16(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_13(iParam0);
	if (iVar0 > -1)
	{
		if (Global_54711[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_54711[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_54711[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_54711[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_54711[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_54711[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_54711[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_54711[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_54349[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_54349[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_54349[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_54349[iVar6 /*120*/].f_18[iVar8] == Global_54711[iVar4 /*203*/].f_1)
							{
								if (Global_54349[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_45403 = (Global_45403 - 1);
											break;
										
										case 1:
											Global_45404 = (Global_45404 - 1);
											break;
										
										case 2:
											Global_45405 = (Global_45405 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_54711[iVar4 /*203*/].f_2 = iParam0;
	Global_54711[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_54711[iVar4 /*203*/] = 1;
	}
	Global_114135.f_21041.f_310++;
	if (Global_114135.f_21041.f_310 == 0)
	{
		Global_114135.f_21041.f_310 = 1;
	}
	Global_54711[iVar4 /*203*/].f_1 = Global_114135.f_21041.f_310;
	Global_54711[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

float func_17(int* iParam0)
{
	if (func_20(iParam0))
	{
		if (func_19(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_18(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

float func_18(bool bParam0)
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

bool func_19(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_20(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_21()
{
	switch (iLocal_79)
	{
		case 0:
			if (bLocal_233)
			{
				if (!func_29())
				{
					iLocal_230 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_230))
					{
						SYSTEM::WAIT(0);
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_230, "SHOW_BRIDGES_KNIVES_PROGRESS");
					func_28("PW_TITLE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(20);
					func_28("PW_PASS");
					func_28("PW_CHALLENGE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_26());
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_247 = func_26();
					Global_33324 = iLocal_247;
					SYSTEM::SETTIMERB(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
				}
				iLocal_79 = 1;
			}
			break;
		
		case 1:
			if ((((((SYSTEM::TIMERB() > 7500 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_29()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_25()) || func_24())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_230, "SHARD_ANIM_OUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				SYSTEM::SETTIMERB(0);
				iLocal_79 = 2;
			}
			else
			{
				func_23();
				if (Global_33324 > iLocal_247)
				{
					iLocal_79 = 3;
				}
			}
			break;
		
		case 2:
			if ((((((SYSTEM::TIMERB() > 500 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_29()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_25()) || func_24())
			{
				iLocal_79 = 3;
			}
			else
			{
				func_23();
				if (Global_33324 > iLocal_247)
				{
					iLocal_79 = 3;
				}
			}
			break;
		
		case 3:
			func_22();
			bLocal_233 = false;
			iLocal_79 = 0;
			break;
	}
}

void func_22()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_230))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_230);
	}
}

void func_23()
{
	if (!func_29())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_230))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_230, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}

int func_24()
{
	if (Global_44181 == 9 || Global_44181 == 10)
	{
		return Global_112782;
	}
	Global_112782 = 0;
	return 0;
}

int func_25()
{
	if (((Global_101688 == 13 || Global_101688 == 10) || Global_101688 == 11) || Global_101688 == 12)
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	int iVar0;
	
	iVar0 = func_27();
	if (iVar0 == 20)
	{
		MISC::SET_BIT(&(Global_114135.f_10053.f_99), 1);
	}
	return iVar0;
}

int func_27()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (bVar1 > 3)
		{
			if (BitTest(Global_114135.f_10053.f_99, bVar1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	if (iVar0 > 20)
	{
		iVar0 = 20;
	}
	return iVar0;
}

void func_28(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_29()
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

void func_30()
{
	if (func_31() && !iLocal_235)
	{
		iLocal_235 = 1;
		iLocal_77 = 7;
	}
	if (!func_31() && iLocal_235)
	{
		iLocal_235 = 0;
	}
}

int func_31()
{
	if (Global_21051)
	{
		return 1;
	}
	return 0;
}

void func_32()
{
	if (func_17(&iLocal_224) > 3f)
	{
		func_37(0);
		func_36(&iLocal_224, 0f);
		func_35(&iLocal_224);
	}
	if ((func_17(&iLocal_224) <= 3f && func_34(0)) && func_33(PLAYER::PLAYER_PED_ID()))
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(0, 177) || (PAD::IS_CONTROL_JUST_PRESSED(0, 24) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))) || (func_31() && !iLocal_235))
		{
			func_36(&iLocal_224, 0f);
			func_35(&iLocal_224);
		}
	}
}

int func_33(int iParam0)
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

int func_34(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_21066.f_1 > 3)
		{
			if (BitTest(Global_8919, 14))
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
	if (Global_21066.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_35(int* iParam0)
{
	if (func_20(iParam0))
	{
		if (!func_19(iParam0))
		{
			iParam0->f_2 = (func_18(BitTest(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

void func_36(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_18(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_37(int iParam0)
{
	if (func_41())
	{
		return;
	}
	if (Global_21284)
	{
		if (func_40())
		{
			func_39(1, 1);
		}
		else
		{
			func_39(0, 0);
		}
	}
	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8920, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22425 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8919, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8919, 30);
	}
	if (!func_38())
	{
		Global_21066.f_1 = 3;
	}
}

int func_38()
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_39(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_34(0))
		{
			Global_21284 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21003);
			}
			Global_20994 = { Global_21012[Global_21011 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
	else if (Global_21284 == 1)
	{
		Global_21284 = 0;
		Global_20994 = { Global_21019[Global_21011 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21003);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
}

bool func_40()
{
	return BitTest(Global_1957675, 5);
}

bool func_41()
{
	return BitTest(Global_1957675, 19);
}

void func_42()
{
	if (iLocal_236)
	{
		if ((func_17(&iLocal_227) > 5f && func_45() >= 1) && !BitTest(Global_114135.f_10053.f_99, 1))
		{
			switch (iLocal_249)
			{
				case 0:
					func_14(28, iLocal_81[(20 - func_45())], 1);
					iLocal_250 = 0;
					iLocal_249++;
					break;
				
				case 1:
					if (iLocal_250 < 10)
					{
						func_43(28, func_44(iLocal_250));
						iLocal_250++;
					}
					else
					{
						iLocal_249++;
					}
					break;
				
				case 2:
					func_7(28);
					iLocal_249++;
					break;
				
				case 3:
					func_36(&iLocal_227, 0f);
					func_35(&iLocal_227);
					iLocal_236 = 0;
					iLocal_249 = 0;
					func_2();
					break;
				}
			}
	}
}

void func_43(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_54711[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_54711[iVar0 /*203*/].f_10[(Global_54711[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_54711[iVar0 /*203*/].f_10[(Global_54711[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_54711[iVar0 /*203*/].f_10[(Global_54711[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_54711[iVar0 /*203*/].f_10[(Global_54711[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

char* func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!BitTest(Global_114135.f_10053.f_99, 4) && !BitTest(Global_114135.f_10053.f_99, 29))
			{
				return "PW_STRING_1_1";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 4) && !BitTest(Global_114135.f_10053.f_99, 29))
			{
				return "PW_STRING_1_2";
			}
			else if (!BitTest(Global_114135.f_10053.f_99, 4) && BitTest(Global_114135.f_10053.f_99, 29))
			{
				return "PW_STRING_1_3";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 4) && BitTest(Global_114135.f_10053.f_99, 29))
			{
				return "PW_STRING_1_4";
			}
			break;
		
		case 1:
			if (!BitTest(Global_114135.f_10053.f_99, 5) && !BitTest(Global_114135.f_10053.f_99, 6))
			{
				return "PW_STRING_2_1";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 5) && !BitTest(Global_114135.f_10053.f_99, 6))
			{
				return "PW_STRING_2_2";
			}
			else if (!BitTest(Global_114135.f_10053.f_99, 5) && BitTest(Global_114135.f_10053.f_99, 6))
			{
				return "PW_STRING_2_3";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 5) && BitTest(Global_114135.f_10053.f_99, 6))
			{
				return "PW_STRING_2_4";
			}
			break;
		
		case 2:
			if (!BitTest(Global_114135.f_10053.f_99, 7) && !BitTest(Global_114135.f_10053.f_99, 8))
			{
				return "PW_STRING_3_1";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 7) && !BitTest(Global_114135.f_10053.f_99, 8))
			{
				return "PW_STRING_3_2";
			}
			else if (!BitTest(Global_114135.f_10053.f_99, 7) && BitTest(Global_114135.f_10053.f_99, 8))
			{
				return "PW_STRING_3_3";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 7) && BitTest(Global_114135.f_10053.f_99, 8))
			{
				return "PW_STRING_3_4";
			}
			break;
		
		case 3:
			if (!BitTest(Global_114135.f_10053.f_99, 9) && !BitTest(Global_114135.f_10053.f_99, 10))
			{
				return "PW_STRING_4_1";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 9) && !BitTest(Global_114135.f_10053.f_99, 10))
			{
				return "PW_STRING_4_2";
			}
			else if (!BitTest(Global_114135.f_10053.f_99, 9) && BitTest(Global_114135.f_10053.f_99, 10))
			{
				return "PW_STRING_4_3";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 9) && BitTest(Global_114135.f_10053.f_99, 10))
			{
				return "PW_STRING_4_4";
			}
			break;
		
		case 4:
			if (!BitTest(Global_114135.f_10053.f_99, 11) && !BitTest(Global_114135.f_10053.f_99, 14))
			{
				return "PW_STRING_5_1";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 11) && !BitTest(Global_114135.f_10053.f_99, 14))
			{
				return "PW_STRING_5_2";
			}
			else if (!BitTest(Global_114135.f_10053.f_99, 11) && BitTest(Global_114135.f_10053.f_99, 14))
			{
				return "PW_STRING_5_3";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 11) && BitTest(Global_114135.f_10053.f_99, 14))
			{
				return "PW_STRING_5_4";
			}
			break;
		
		case 5:
			if (!BitTest(Global_114135.f_10053.f_99, 16) && !BitTest(Global_114135.f_10053.f_99, 18))
			{
				return "PW_STRING_6_1";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 16) && !BitTest(Global_114135.f_10053.f_99, 18))
			{
				return "PW_STRING_6_2";
			}
			else if (!BitTest(Global_114135.f_10053.f_99, 16) && BitTest(Global_114135.f_10053.f_99, 18))
			{
				return "PW_STRING_6_3";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 16) && BitTest(Global_114135.f_10053.f_99, 18))
			{
				return "PW_STRING_6_4";
			}
			break;
		
		case 6:
			if (!BitTest(Global_114135.f_10053.f_99, 19) && !BitTest(Global_114135.f_10053.f_99, 21))
			{
				return "PW_STRING_7_1";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 19) && !BitTest(Global_114135.f_10053.f_99, 21))
			{
				return "PW_STRING_7_2";
			}
			else if (!BitTest(Global_114135.f_10053.f_99, 19) && BitTest(Global_114135.f_10053.f_99, 21))
			{
				return "PW_STRING_7_3";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 19) && BitTest(Global_114135.f_10053.f_99, 21))
			{
				return "PW_STRING_7_4";
			}
			break;
		
		case 7:
			if (!BitTest(Global_114135.f_10053.f_99, 22) && !BitTest(Global_114135.f_10053.f_99, 23))
			{
				return "PW_STRING_8_1";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 22) && !BitTest(Global_114135.f_10053.f_99, 23))
			{
				return "PW_STRING_8_2";
			}
			else if (!BitTest(Global_114135.f_10053.f_99, 22) && BitTest(Global_114135.f_10053.f_99, 23))
			{
				return "PW_STRING_8_3";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 22) && BitTest(Global_114135.f_10053.f_99, 23))
			{
				return "PW_STRING_8_4";
			}
			break;
		
		case 8:
			if (!BitTest(Global_114135.f_10053.f_99, 24) && !BitTest(Global_114135.f_10053.f_99, 25))
			{
				return "PW_STRING_9_1";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 24) && !BitTest(Global_114135.f_10053.f_99, 25))
			{
				return "PW_STRING_9_2";
			}
			else if (!BitTest(Global_114135.f_10053.f_99, 24) && BitTest(Global_114135.f_10053.f_99, 25))
			{
				return "PW_STRING_9_3";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 24) && BitTest(Global_114135.f_10053.f_99, 25))
			{
				return "PW_STRING_9_4";
			}
			break;
		
		case 9:
			if (!BitTest(Global_114135.f_10053.f_99, 26) && !BitTest(Global_114135.f_10053.f_99, 31))
			{
				return "PW_STRING_10_1";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 26) && !BitTest(Global_114135.f_10053.f_99, 31))
			{
				return "PW_STRING_10_2";
			}
			else if (!BitTest(Global_114135.f_10053.f_99, 26) && BitTest(Global_114135.f_10053.f_99, 31))
			{
				return "PW_STRING_10_3";
			}
			else if (BitTest(Global_114135.f_10053.f_99, 26) && BitTest(Global_114135.f_10053.f_99, 31))
			{
				return "PW_STRING_10_4";
			}
			break;
	}
	return "PW_STRING_NONE";
}

int func_45()
{
	return (20 - func_27());
}

void func_46()
{
	switch (iLocal_77)
	{
		case 0:
			if (func_71())
			{
				if ((!func_70() && Global_4542442 == 0) && Global_4542443 == 0)
				{
					iLocal_77 = 1;
				}
			}
			break;
		
		case 1:
			iLocal_231 = func_65(&iLocal_232, 60f, iLocal_251, 0.8f, 0.7f, 0.25f, 8f, 0.333f, iLocal_252, iLocal_253);
			if (iLocal_231 == 0)
			{
				iLocal_231 = func_65(&iLocal_232, 60f, iLocal_254, 0.8f, 0.7f, 0.25f, 8f, 0.333f, iLocal_255, iLocal_256);
				if (iLocal_231 == 0)
				{
					iLocal_77 = 7;
				}
				else
				{
					iLocal_77 = 4;
				}
			}
			else
			{
				iLocal_77 = 4;
			}
			break;
		
		case 4:
			if (!func_64(iLocal_232))
			{
				func_63(1);
				iLocal_77 = 5;
			}
			else
			{
				if (!iLocal_234)
				{
				}
				else
				{
					iLocal_234 = 0;
				}
				iLocal_77 = 7;
			}
			break;
		
		case 5:
			switch (iLocal_78)
			{
				case 0:
					func_62("PW_HELP_1", -1);
					if (func_61())
					{
						if (func_34(0))
						{
							func_60(99);
							if (func_59("PW_HELP_1"))
							{
								HUD::CLEAR_THIS_PRINT("PW_HELP_1");
							}
							iLocal_78 = 1;
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 176) || PAD::IS_CONTROL_JUST_PRESSED(0, 178))
					{
						func_63(0);
						func_57(99);
						if (func_59("PW_HELP_1"))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_1");
						}
						iLocal_77 = 7;
					}
					break;
				
				case 1:
					func_62("PW_HELP_2", -1);
					if (func_55(99))
					{
						iLocal_78 = 0;
						func_63(0);
						func_57(99);
						if (func_59("PW_HELP_2"))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_2");
						}
						iLocal_77 = 6;
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 177))
					{
						iLocal_78 = 0;
						func_63(0);
						func_57(99);
						if (func_59("PW_HELP_2"))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_2");
						}
						iLocal_77 = 7;
					}
					break;
			}
			break;
		
		case 6:
			func_54(iLocal_232);
			func_51(iLocal_80);
			STATS::STAT_SET_INT(joaat("num_hidden_packages_7"), func_27(), true);
			bLocal_233 = true;
			func_48(&iLocal_224);
			func_48(&iLocal_227);
			iLocal_236 = 1;
			iLocal_77 = 7;
			break;
		
		case 7:
			func_47();
			iLocal_77 = 8;
			break;
		
		case 8:
			if (!func_71())
			{
				iLocal_77 = 0;
			}
			break;
	}
}

void func_47()
{
	iLocal_78 = 0;
	iLocal_80 = 0;
	iLocal_231 = 0;
	iLocal_232 = 0;
	iLocal_234 = 0;
	Local_240 = { Local_237 };
	Local_243 = { Local_237 };
	func_63(0);
	func_57(99);
	if (func_59("PW_HELP_1"))
	{
		HUD::CLEAR_THIS_PRINT("PW_HELP_1");
	}
	if (func_59("PW_HELP_2"))
	{
		HUD::CLEAR_THIS_PRINT("PW_HELP_2");
	}
}

void func_48(int* iParam0)
{
	if (!func_20(iParam0))
	{
		func_50(iParam0);
	}
	else
	{
		func_49(iParam0);
	}
}

void func_49(int* iParam0)
{
	func_36(iParam0, 0f);
}

void func_50(int* iParam0)
{
	if (!func_20(iParam0))
	{
		func_49(iParam0);
	}
}

void func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = func_53(92);
	Global_2645376[iVar0 /*83*/] = 92;
	StringCopy(&(Global_2645376[iVar0 /*83*/].f_1), func_52(iParam0), 64);
	StringCopy(&(Global_2645376[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

char* func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		
		case 1:
			return "AF_BOAR";
		
		case 2:
			return "AF_BORDERCOLLIE";
		
		case 3:
			return "AF_CAT";
		
		case 4:
			return "AF_CHICKENHAWK";
		
		case 5:
			return "AF_CORMORANT";
		
		case 6:
			return "AF_COW";
		
		case 7:
			return "AF_COYOTE";
		
		case 8:
			return "AF_CROW";
		
		case 9:
			return "AF_DEER";
		
		case 10:
			return "AF_HEN";
		
		case 11:
			return "AF_HUSKY";
		
		case 12:
			return "AF_MOUNT_LION";
		
		case 13:
			return "AF_PIG";
		
		case 14:
			return "AF_RABBIT";
		
		case 15:
			return "AF_POODLE";
		
		case 16:
			return "AF_PUG";
		
		case 17:
			return "AF_RETRIEVER";
		
		case 18:
			return "AF_ROTTWEILER";
		
		case 19:
			return "AF_SEAGULL";
		
		case 20:
			return "AF_WESTIE";
		
		default:
	}
	return "";
}

int func_53(int iParam0)
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

void func_54(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!BitTest(Global_114135.f_10053.f_99, 4))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 4);
				iLocal_80 = 1;
			}
			break;
		
		case joaat("a_c_cat_01"):
			if (!BitTest(Global_114135.f_10053.f_99, 5))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 5);
				iLocal_80 = 3;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!BitTest(Global_114135.f_10053.f_99, 6))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 6);
				iLocal_80 = 4;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!BitTest(Global_114135.f_10053.f_99, 7))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 7);
				iLocal_80 = 5;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!BitTest(Global_114135.f_10053.f_99, 8))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 8);
				iLocal_80 = 6;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!BitTest(Global_114135.f_10053.f_99, 9))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 9);
				iLocal_80 = 7;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!BitTest(Global_114135.f_10053.f_99, 10))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 10);
				iLocal_80 = 8;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!BitTest(Global_114135.f_10053.f_99, 11))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 11);
				iLocal_80 = 9;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!BitTest(Global_114135.f_10053.f_99, 14))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 14);
				iLocal_80 = 10;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!BitTest(Global_114135.f_10053.f_99, 16))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 16);
				iLocal_80 = 11;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!BitTest(Global_114135.f_10053.f_99, 18))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 18);
				iLocal_80 = 12;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!BitTest(Global_114135.f_10053.f_99, 19))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 19);
				iLocal_80 = 13;
			}
			break;
		
		case joaat("a_c_poodle"):
			if (!BitTest(Global_114135.f_10053.f_99, 21))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 21);
				iLocal_80 = 15;
			}
			break;
		
		case joaat("a_c_pug"):
			if (!BitTest(Global_114135.f_10053.f_99, 22))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 22);
				iLocal_80 = 16;
			}
			break;
		
		case joaat("a_c_rabbit_01"):
			if (!BitTest(Global_114135.f_10053.f_99, 23))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 23);
				iLocal_80 = 14;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!BitTest(Global_114135.f_10053.f_99, 24))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 24);
				iLocal_80 = 17;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!BitTest(Global_114135.f_10053.f_99, 25))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 25);
				iLocal_80 = 18;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!BitTest(Global_114135.f_10053.f_99, 26))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 26);
				iLocal_80 = 19;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!BitTest(Global_114135.f_10053.f_99, 29))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 29);
				iLocal_80 = 2;
			}
			break;
		
		case joaat("a_c_westy"):
			if (!BitTest(Global_114135.f_10053.f_99, 31))
			{
				MISC::SET_BIT(&(Global_114135.f_10053.f_99), 31);
				iLocal_80 = 20;
			}
			break;
		
		default:
			break;
	}
}

int func_55(int iParam0)
{
	if (Global_120[iParam0 /*10*/].f_8 != 184)
	{
		if (func_56(iParam0) == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	return Global_2201[iParam0 /*29*/].f_18;
}

int func_57(int iParam0)
{
	if (Global_120[iParam0 /*10*/].f_8 != 184)
	{
		func_58(iParam0, 0);
		return 1;
	}
	return 0;
}

void func_58(int iParam0, int iParam1)
{
	Global_2201[iParam0 /*29*/].f_18 = iParam1;
	if (iParam0 < 162)
	{
		Global_114135.f_28055[iParam0 /*29*/].f_18 = iParam1;
	}
}

bool func_59(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_60(int iParam0)
{
	Global_21281 = iParam0;
}

int func_61()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_62(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_63(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_8919, 28);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8919, 28);
	}
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!BitTest(Global_114135.f_10053.f_99, 4))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cat_01"):
			if (!BitTest(Global_114135.f_10053.f_99, 5))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!BitTest(Global_114135.f_10053.f_99, 6))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!BitTest(Global_114135.f_10053.f_99, 7))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!BitTest(Global_114135.f_10053.f_99, 8))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!BitTest(Global_114135.f_10053.f_99, 9))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!BitTest(Global_114135.f_10053.f_99, 10))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!BitTest(Global_114135.f_10053.f_99, 11))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!BitTest(Global_114135.f_10053.f_99, 14))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!BitTest(Global_114135.f_10053.f_99, 16))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!BitTest(Global_114135.f_10053.f_99, 18))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!BitTest(Global_114135.f_10053.f_99, 19))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_poodle"):
			if (!BitTest(Global_114135.f_10053.f_99, 21))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_pug"):
			if (!BitTest(Global_114135.f_10053.f_99, 22))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_rabbit_01"):
			if (!BitTest(Global_114135.f_10053.f_99, 23))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!BitTest(Global_114135.f_10053.f_99, 24))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!BitTest(Global_114135.f_10053.f_99, 25))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!BitTest(Global_114135.f_10053.f_99, 26))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!BitTest(Global_114135.f_10053.f_99, 29))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_westy"):
			if (!BitTest(Global_114135.f_10053.f_99, 31))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		default:
			iLocal_234 = 1;
			break;
	}
	return 1;
}

int func_65(int iParam0, float fParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	float fVar1;
	
	iVar0 = CAM::GET_FOCUS_PED_ON_SCREEN(fParam1, iParam2, fParam3, fParam4, fParam5, fParam6, fParam7, iParam8, iParam9);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (iVar0 != 0 && func_33(iVar0))
	{
		if (PED::GET_PED_TYPE(iVar0) == 28)
		{
			if (!ENTITY::IS_ENTITY_OCCLUDED(iVar0))
			{
				*iParam0 = ENTITY::GET_ENTITY_MODEL(iVar0);
				if (func_69(iVar0, 31086))
				{
					fVar1 = func_68(PLAYER::PLAYER_PED_ID(), iVar0, 1);
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), iVar0))
					{
					}
					if (func_67(*iParam0))
					{
						if (fVar1 <= IntToFloat(func_66(*iParam0)))
						{
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if (fVar1 <= IntToFloat(func_66(*iParam0)))
					{
					}
					else
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_cat_01"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_chickenhawk"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_cormorant"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_cow"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_coyote"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_crow"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_deer"):
			iVar0 = 40;
			break;
		
		case joaat("a_c_hen"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_husky"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_mtlion"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pig"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pigeon"):
			iVar0 = 40;
			break;
		
		case joaat("a_c_poodle"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pug"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_rabbit_01"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_retriever"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_seagull"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_shepherd"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_westy"):
			iVar0 = 30;
			break;
		
		default:
			iVar0 = 30;
			break;
	}
	return iVar0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

float func_68(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

int func_69(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	Local_243 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, iParam1)) };
	if (iLocal_232 == joaat("a_c_rabbit_01") || iLocal_232 == joaat("a_c_rat"))
	{
		Local_240 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, 24816)) };
	}
	else
	{
		Local_240 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, 24818)) };
	}
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Local_240, &fVar0, &fVar1);
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Local_243, &fVar2, &fVar3);
	if ((((fVar0 >= 0.05f && fVar0 <= 0.95f) && (fVar2 >= 0.05f && fVar2 <= 0.95f)) && (fVar1 >= 0.05f && fVar1 <= 0.95f)) && (fVar3 >= 0.05f && fVar3 <= 0.95f))
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	if (BitTest(Global_8921, 3))
	{
		return 1;
	}
	return 0;
}

int func_71()
{
	if (Global_23461)
	{
		return 1;
	}
	return 0;
}

int func_72()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("paparazzo3a")) > 0)
	{
		return 1;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("paparazzo3b")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_73()
{
	func_74();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_74()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_77(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_76(PLAYER::PLAYER_PED_ID());
			if (func_75(iVar0) && (!func_79(14) || Global_113083))
			{
				if (Global_114135.f_2367.f_539.f_4321 != iVar0 && func_75(Global_114135.f_2367.f_539.f_4321))
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

bool func_75(int iParam0)
{
	return iParam0 < 3;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_77(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_77(int iParam0)
{
	if (func_75(iParam0))
	{
		return func_78(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_78(int iParam0)
{
	return Global_2201[iParam0 /*29*/];
}

bool func_79(int iParam0)
{
	return Global_44181 == iParam0;
}

int func_80(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79788, 0);
}

int func_81()
{
	int iVar0;
	
	if (Global_153015 == 2)
	{
		return 1;
	}
	else if (Global_153015 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_28, 2);
				MISC::SET_BIT(&Global_28, 4);
				MISC::SET_BIT(&Global_28, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_82()
{
	if (!BitTest(Global_114135.f_10053.f_99, 2))
	{
		MISC::SET_BIT(&(Global_114135.f_10053.f_99), 2);
	}
	iLocal_246 = 0;
	iLocal_235 = func_31();
	iLocal_81[0] = 249;
	iLocal_81[1] = 250;
	iLocal_81[2] = 251;
	iLocal_81[3] = 252;
	iLocal_81[4] = 253;
	iLocal_81[5] = 254;
	iLocal_81[6] = 255;
	iLocal_81[7] = 256;
	iLocal_81[8] = 257;
	iLocal_81[9] = 258;
	iLocal_81[10] = 259;
	iLocal_81[11] = 260;
	iLocal_81[12] = 261;
	iLocal_81[13] = 262;
	iLocal_81[14] = 263;
	iLocal_81[15] = 264;
	iLocal_81[16] = 265;
	iLocal_81[17] = 266;
	iLocal_81[18] = 267;
	iLocal_81[19] = 268;
	iLocal_81[20] = 269;
}

