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
	struct<3> Local_20 = { 0, 0, 0 } ;
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
	int iLocal_34 = 0;
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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	struct<61> Local_81 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	struct<3> Local_145 = { 0, 0, 0 } ;
	float fLocal_148 = 0f;
	struct<3> Local_149 = { 0, 0, 0 } ;
	float fLocal_152 = 0f;
	struct<3> Local_153 = { 0, 0, 0 } ;
	float fLocal_156 = 0f;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	char* sLocal_159 = NULL;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int* iLocal_162 = NULL;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	var uLocal_166 = 16;
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
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
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
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	bool bLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	bool bLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	struct<43> Local_361[4];
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	struct<6> Local_536[11];
	int iLocal_603 = 0;
	struct<8> Local_604[2];
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	struct<15> Local_623 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_638 = 0f;
	int* iLocal_639 = NULL;
	var uLocal_640 = 15;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 15;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	int iLocal_744 = 0;
	int iLocal_745 = 0;
	int iLocal_746 = 0;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	var uLocal_758 = 0;
	int iLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	int iLocal_762 = 0;
	int iLocal_763 = 0;
	int iLocal_764 = 0;
	float fLocal_765 = 0f;
	float fLocal_766 = 0f;
	float fLocal_767 = 0f;
	float fLocal_768 = 0f;
	float fLocal_769 = 0f;
	struct<10> Local_770 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_780 = 0;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	uLocal_78 = func_445(60);
	uLocal_79 = func_445(14);
	Local_142 = { 1813.294f, 4698.785f, 38.9553f };
	Local_145 = { 1827.178f, 4698.114f, 38.1653f };
	fLocal_148 = 187.4554f;
	Local_149 = { 1811.96f, 4697.071f, 39.1076f };
	fLocal_152 = 330.5137f;
	Local_153 = { 1814.02f, 4697.051f, 38.9678f };
	fLocal_156 = 24.0044f;
	iLocal_157 = joaat("weapon_digiscanner");
	iLocal_158 = WEAPON::GET_WEAPONTYPE_MODEL(iLocal_157);
	sLocal_159 = "empty";
	iLocal_337 = 1;
	iLocal_762 = -1;
	iLocal_763 = -1;
	iLocal_764 = -1;
	fLocal_765 = 30f;
	fLocal_766 = 0.35f;
	fLocal_767 = 0f;
	fLocal_768 = 0.02f;
	fLocal_769 = -0.05f;
	Local_81 = { ScriptParam_0 };
	func_443(&Local_81);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_442("Force cleanup [TERMINATING]");
		func_425(1);
		func_422();
	}
	if (func_421() || func_420(0))
	{
		Global_79785 = 1;
		iLocal_77 = 0;
		while (!func_412(&Local_81))
		{
			SYSTEM::WAIT(0);
		}
		Global_79785 = 0;
	}
	iLocal_160 = func_411();
	iLocal_161 = func_410(1855.08f, 4755.85f, 36.81f, 25f);
	iLocal_762 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1815.39f, 4698f, 38.87f, 3.5f, 3.5f, 3f, 0f, false, 7);
	iLocal_763 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1824.12f, 4701.39f, 38.29f, 2.5f, 2.5f, 2.5f, 0f, false, 7);
	iLocal_764 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1801.28f, 4700.25f, 39.42f, 2f, 2f, 2f, 0f, false, 7);
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_04_MIX"))
	{
		func_409("Starting dynamic mix EPSILONISM_04_MIX");
		AUDIO::START_AUDIO_SCENE("EPSILONISM_04_MIX");
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), joaat("player"));
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	iLocal_358 = GRAPHICS::SET_GRASS_CULL_SPHERE(1751.65f, 4676.77f, 43.03f, 1.5f);
	func_406();
	func_389();
	func_388();
	Local_770.f_0 = 0;
	func_387();
	iVar0 = 0;
	while (iVar0 < iLocal_534)
	{
		func_385(&(Local_361[iVar0 /*43*/]));
		iVar0++;
	}
	func_384(&(Local_604[0 /*8*/]), Local_149, fLocal_152, Local_81.f_28[0], 0);
	func_384(&(Local_604[1 /*8*/]), Local_153, fLocal_156, Local_81.f_28[1], 0);
	if (func_421())
	{
		if (func_383() == 0)
		{
			func_382(Local_145, fLocal_148, 1, 0);
			func_381(1);
			func_380(&Local_81, 0, 1);
			func_379();
			func_409("Done replay setup");
		}
	}
	else if (func_420(0))
	{
		func_382(Local_145, fLocal_148, 1, 0);
		func_381(0);
		func_380(&Local_81, 1, 1);
		func_379();
	}
	func_372(60, 0, 0);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_Epsilon4", 0);
		func_356(Local_81.f_9, 0, 0, 0, 0, 0);
		PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
		if (func_355())
		{
			PAD::DISABLE_CONTROL_ACTION(0, 21, true);
		}
		PAD::DISABLE_CONTROL_ACTION(0, 28, true);
		PAD::DISABLE_CONTROL_ACTION(0, 36, true);
		PAD::DISABLE_CONTROL_ACTION(0, 44, true);
		if (func_354(PLAYER::PLAYER_PED_ID()))
		{
			if (func_353(PLAYER::PLAYER_PED_ID()) == iLocal_157)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 24, true);
				PAD::DISABLE_CONTROL_ACTION(0, 257, true);
			}
		}
		switch (Local_770.f_0)
		{
			case 0:
				func_352();
				break;
			
			case 1:
				func_347();
				break;
			
			case 2:
				func_310();
				break;
			
			case 3:
				func_244();
				break;
			
			case 4:
				func_233();
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	char* sVar0;
	
	switch (Local_770.f_1)
	{
		case 0:
			func_9();
			AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
			sVar0 = sLocal_159;
			switch (Local_770.f_9)
			{
				case 8:
					sVar0 = "EPS4_X1";
					break;
				
				case 2:
					sVar0 = "EPS4_X2";
					break;
				
				case 3:
					sVar0 = "EPS4_X3";
					break;
				
				case 4:
					sVar0 = "EPS4_X4";
					break;
				
				case 5:
					sVar0 = "EPS4_X5";
					break;
				
				case 6:
					sVar0 = "EPS4_X7";
					break;
				
				case 7:
					sVar0 = "EPS4_X8";
					break;
				
				default:
					break;
			}
			if (MISC::ARE_STRINGS_EQUAL(sVar0, sLocal_159))
			{
				func_425(1);
			}
			else
			{
				func_7(sVar0, 1);
			}
			Local_770.f_1 = 1;
			break;
		
		case 1:
			if (func_6())
			{
				func_4();
				func_2(&(Local_604[0 /*8*/]));
				func_2(&(Local_604[1 /*8*/]));
				func_422();
			}
			break;
	}
}

void func_2(int* iParam0)
{
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	func_3(iParam0);
}

void func_3(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		PED::DELETE_PED(iParam0);
	}
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_534)
	{
		func_5(&(Local_361[iVar0 /*43*/].f_1));
		iVar0++;
	}
}

void func_5(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

int func_6()
{
	if (Global_4)
	{
		return 1;
	}
	if (Global_101688 == 7 || Global_101688 == 8)
	{
		return 1;
	}
	return 0;
}

void func_7(char* sParam0, bool bParam1)
{
	func_8(sParam0);
	func_425(bParam1);
}

void func_8(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_79772, sParam0, 16);
			StringCopy(&Global_79776, "", 16);
			if (RECORDING::IS_REPLAY_RECORDING())
			{
				RECORDING::STOP_REPLAY_RECORDING();
			}
		}
	}
}

void func_9()
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	HUD::CLEAR_PRINTS();
	if (func_10("EPS4_T0") || func_10("EPS4_T1"))
	{
		HUD::CLEAR_HELP(true);
	}
}

bool func_10(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_11()
{
	int iVar0;
	
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	if (iLocal_347 == 0)
	{
		func_232(750);
	}
	func_231();
	func_9();
	func_223(0);
	func_372(55, 0, 1);
	func_22(76, 1);
	Global_114135.f_18578.f_381 = 0;
	if (!func_420(0))
	{
		while (!func_13(1357988739, 6, 1, 60, 30000, 10000, -1, 0, -1, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	STREAMING::REQUEST_ANIM_DICT("weapons@holster_1h");
	while (func_353(PLAYER::PLAYER_PED_ID()) == iLocal_157)
	{
		SYSTEM::WAIT(0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		if (STREAMING::HAS_ANIM_DICT_LOADED("weapons@holster_1h"))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster", 3))
			{
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0f, false, false, false);
			}
			else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster") >= 0.5f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
			}
		}
	}
	STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < 12)
	{
		STATS::STAT_SET_INT(joaat("num_epsilon_step"), 12, true);
		func_12(23, 12);
	}
	func_422();
}

int func_12(int iParam0, int iParam1)
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

int func_13(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;
	
	if (func_420(0))
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
	if (Global_114135.f_7692.f_866 < 10)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_21(iParam1);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = bParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		Global_114135.f_7692.f_765[Global_114135.f_7692.f_866 /*10*/] = { Var0 };
		Global_114135.f_7692.f_866++;
		return 1;
	}
	else
	{
		Var10 = { func_20(iParam0, iParam1, iParam2, bParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar20 = 0;
		func_19(&iVar20);
		iVar21 = func_18(Var10, Global_114135.f_7692.f_765[iVar20 /*10*/]);
		if (iVar21 == 2)
		{
			func_16(Global_114135.f_7692.f_765[iVar20 /*10*/]);
			Global_114135.f_7692.f_765[iVar20 /*10*/] = { Var10 };
			func_15(&Var10);
			return 1;
		}
		else if (iVar21 == 1)
		{
			if (func_14(Var10))
			{
				func_16(Global_114135.f_7692.f_765[iVar20 /*10*/]);
				Global_114135.f_7692.f_765[iVar20 /*10*/] = { Var10 };
				func_15(&Var10);
				return 1;
			}
			else
			{
				if (!func_14(Global_114135.f_7692.f_765[iVar20 /*10*/]))
				{
					Global_114135.f_7692.f_765[iVar20 /*10*/] = { Var10 };
					func_15(&Var10);
					return 1;
				}
				func_15(&Var10);
				return 1;
			}
		}
		else
		{
			func_16(Var10);
			func_15(&Var10);
			return 1;
		}
	}
	return 0;
}

int func_14(struct<9> Param0, var uParam9)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_15(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_16(struct<10> Param0)
{
	if (func_14(Param0))
	{
		func_17(Param0.f_8, 0);
	}
}

void func_17(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_114135.f_8617[iParam0] = 1;
	Global_114135.f_8617.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_18(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, struct<4> Param10, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param10.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_19(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_114135.f_7692.f_866)
	{
		if (func_18(Global_114135.f_7692.f_765[iVar0 /*10*/], Global_114135.f_7692.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_20(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0.f_0 = uParam0;
	Var0.f_3 = func_21(iParam1);
	Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = bParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	MISC::CLEAR_BIT(&(Var0.f_1), 0);
	return Var0;
}

int func_21(int iParam0)
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

void func_22(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_221();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_113222[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_113222[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_113222[iVar0 /*10*/].f_6)
	{
		return;
	}
	func_193(iVar0, 0);
	MISC::SET_BIT(&Global_79788, 1);
	if (Global_113222[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		func_192(&(Global_113222[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::START_FIRING_AMNESTY(5000);
		}
	}
	func_178(iVar0, 1, 0, 0);
	func_177(0, 0);
	MemCopy(&sVar1, {func_175(iVar0)}, 4);
	func_172(&sVar1, func_173());
	func_48();
	if (BitTest(Global_114135.f_10020.f_25, 3))
	{
		func_47();
	}
	func_29();
	if (iParam0 == 210 || iParam0 == 211)
	{
		func_24(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		func_24(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		func_24(iParam0, 0, 0);
	}
	func_23();
}

int func_23()
{
	if (func_420(0))
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

void func_24(int iParam0, int iParam1, int iParam2)
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
		func_27((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_114135.f_10198[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114135.f_10198[iParam0 /*12*/].f_6 == 11 || Global_114135.f_10198[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_114135.f_10198[iParam0 /*12*/].f_5 = 1;
		Global_114135.f_10198[iParam0 /*12*/].f_10 = iParam1;
		Global_114135.f_10198[iParam0 /*12*/].f_11 = iParam2;
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
		func_25();
	}
}

void func_25()
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
	Global_113871 = 0;
	Global_113872 = 0;
	Global_113873 = 0;
	Global_113874 = 0;
	Global_113875 = 0;
	Global_113876 = 0;
	Global_113877 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114135.f_10198.f_3853;
	Global_114135.f_10198.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_114135.f_10198[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_114135.f_10198[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113871++;
					fVar1 = (fVar1 + Global_114135.f_10198[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113872++;
					fVar2 = (fVar2 + Global_114135.f_10198[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113873++;
					fVar3 = (fVar3 + Global_114135.f_10198[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113874++;
					fVar4 = (fVar4 + Global_114135.f_10198[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113875++;
					fVar5 = (fVar5 + (Global_114135.f_10198[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113876++;
					fVar6 = (fVar6 + Global_114135.f_10198[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113877++;
					fVar7 = (fVar7 + Global_114135.f_10198[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113854 > 0)
	{
		if (Global_113871 == Global_113854)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113855 > 0)
	{
		if (Global_113872 == Global_113855)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113856 > 0)
	{
		if (Global_113873 == Global_113856)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113857 > 0)
	{
		if (Global_113874 == Global_113857)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113858 > 0)
	{
		if (((Global_113875 == Global_113858 || (Global_113858 * 10 / Global_113875) < 41) || Global_113875 > Global_113861) || Global_113875 == Global_113861)
		{
			if (!BitTest(Global_114135.f_10198.f_3856, 14))
			{
				if (Global_113875 == Global_113858)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113858, 0);
					MISC::SET_BIT(&(Global_114135.f_10198.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113859 > 0)
	{
		if (Global_113876 == Global_113859)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113860 > 0)
	{
		if (Global_113877 == Global_113860)
		{
			fVar7 = 5f;
		}
	}
	Global_114135.f_10198.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113875 > Global_113861 || Global_113875 == Global_113861)
	{
		iVar9 = Global_113861;
	}
	else
	{
		iVar9 = Global_113875;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113871, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113854, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113872, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113855, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113873, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113856, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113874, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113857, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113861, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113877 + Global_113876), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113860 + Global_113859), true);
	Global_113878 = (Global_113871 * 100 / Global_113854);
	Global_113880 = ((Global_113873 + Global_113872) * 100 / (Global_113856 + Global_113855));
	Global_113879 = ((Global_113874 + iVar9) * 100 / (Global_113857 + Global_113861));
	Global_113881 = ((Global_113876 + Global_113877) * 100 / (Global_113859 + Global_113860));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_114135.f_10198.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113878, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113879, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113880, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_114135.f_10198.f_3853))
	{
		func_12(13, SYSTEM::FLOOR(Global_114135.f_10198.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79539)
		{
			if (func_26() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113869 = 0;
				}
				if (!Global_64308)
				{
					func_23();
				}
			}
		}
	}
}

int func_26()
{
	return Global_33087;
}

void func_27(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_28();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_28()
{
	return Global_1574926;
}

void func_29()
{
	func_46();
	func_38();
	func_34();
	func_33();
	func_32();
	func_31();
	Global_101725 = 0;
	Global_95838 = -1;
	MISC::CLEAR_BIT(&(Global_101688.f_20), 17);
	Global_101723 = 0;
	MISC::PAUSE_DEATH_ARREST_RESTART(false);
	MISC::IGNORE_NEXT_RESTART(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
	MISC::SET_FADE_OUT_AFTER_ARREST(true);
	MISC::SET_FADE_OUT_AFTER_DEATH(true);
	func_30(0);
}

void func_30(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_101688.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_101688.f_20), 13);
	}
}

void func_31()
{
	Global_79780 = { 0f, 0f, 0f };
	Global_79783 = 0f;
	Global_101688.f_21 = 145;
}

void func_32()
{
	StringCopy(&Global_79772, "", 16);
	StringCopy(&Global_79776, "", 16);
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_101688.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_34()
{
	Global_101688 = 13;
	Global_101688.f_1 = -1;
	Global_101688.f_2 = 0;
	Global_101688.f_30 = 0f;
	MISC::CLEAR_BIT(&(Global_101688.f_20), 25);
	Global_101722 = 0;
	func_37(0);
	func_36();
	func_35();
	Global_101688.f_18 = -1;
	Global_101688.f_19 = -1;
}

void func_35()
{
	MISC::CLEAR_BIT(&(Global_101688.f_20), 22);
	MISC::CLEAR_BIT(&(Global_101688.f_20), 8);
}

void func_36()
{
	if (Global_101688.f_16 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_101688.f_16));
		Global_101688.f_16 = 0;
	}
	if (Global_101688.f_17 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_101688.f_17));
		Global_101688.f_17 = 0;
	}
}

void func_37(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_44730 = 1;
	}
	else
	{
		Global_44730 = 0;
	}
}

void func_38()
{
	func_39(&Global_107680);
}

void func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_45(&(uParam0->f_1));
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_9[iVar1] = -1;
		uParam0->f_13[iVar1] = 0;
		uParam0->f_17[iVar1] = 0;
		uParam0->f_21[iVar1] = 0;
		func_44(&(uParam0->f_25[0 /*295*/][iVar1 /*98*/]));
		func_44(&(uParam0->f_25[1 /*295*/][iVar1 /*98*/]));
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_616[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_26[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_616[iVar1 /*65*/].f_59 = 0;
		uParam0->f_616[iVar1 /*65*/].f_60 = -99;
		uParam0->f_616[iVar1 /*65*/].f_61 = 2;
		uParam0->f_616[iVar1 /*65*/].f_62 = 0;
		uParam0->f_616[iVar1 /*65*/].f_63 = -99;
		uParam0->f_616[iVar1 /*65*/].f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_1 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_2 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_3 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_4 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_1 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_2 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_3 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_4 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_2244[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			uParam0->f_2244[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_2244[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_2341[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_43(&(uParam0->f_2884));
	func_41(&(uParam0->f_2890));
	func_40(&(uParam0->f_2980));
}

void func_40(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_41(var uParam0)
{
	func_42(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_42(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_43(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_44(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_27), "", 16);
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_81[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
}

void func_45(var uParam0)
{
	*uParam0 = -15;
}

void func_46()
{
	StringCopy(&Global_104688, "", 32);
	func_39(&Global_104696);
}

void func_47()
{
	if (Global_9741[0 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_9741[0 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_9741[1 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_9741[1 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_9741[2 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_9741[2 /*2811*/][0 /*281*/].f_259 = 2;
	}
	MISC::SET_BIT(&Global_8919, 25);
	MISC::SET_BIT(&Global_8920, 11);
}

void func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_99032[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = func_168(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_167(iVar1, 14, iVar2))
				{
					func_49(iVar1, 14, iVar2);
				}
				if (Global_114135.f_2367.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_114135.f_2367.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar19;
	int iVar20;
	var uVar21;
	var uVar31;
	int iVar48;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_79322[1 /*14*/] = { func_102(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_79322[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_167(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { func_98(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_49(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar21 = { func_95(iVar0, iParam2) };
		iVar19 = 0;
		while (iVar19 <= 8)
		{
			if (!func_49(iParam0, 14, uVar21[iVar19]))
			{
				iVar20 = 0;
			}
			iVar19++;
		}
		return iVar20;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_79322[1 /*14*/].f_12, 1);
	}
	else
	{
		uVar31 = { func_98(iVar0, 0) };
		Global_79322[1 /*14*/] = { func_102(iVar0, iParam1, uVar31[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, func_94(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, func_94(iParam1), Global_79322[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_94(iParam1), Global_79322[1 /*14*/].f_3, Global_79322[1 /*14*/].f_4, 0);
		}
	}
	if (func_93(iParam0, iVar0, &iVar48, 0))
	{
		func_52(iParam0, 2, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_50(iParam0, iVar0, &iVar48))
	{
		func_52(iParam0, 1, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_50(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_51(iParam1);
	if (iVar0 >= 3 || iVar0 < 0)
	{
		return 0;
	}
	if (Global_114135.f_2367.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_167(iParam0, Global_114135.f_2367.f_539[iVar0 /*65*/].f_64, Global_114135.f_2367.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_114135.f_2367.f_539[iVar0 /*65*/].f_62;
			Global_114135.f_2367.f_539[iVar0 /*65*/].f_63 = -99;
			Global_114135.f_2367.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

int func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_79320++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_79322[1 /*14*/] = { func_102(iVar10, iParam1, iParam2, -1) };
		if (!func_92(iParam3))
		{
			Global_79320 = (Global_79320 - 1);
			return 0;
		}
		func_84(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_82(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_82(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_81(iParam0, 1);
			if (!func_80(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_81(iParam0, 0);
			if (!func_79(iVar10, 14, iVar8, -1) && !func_78(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_81(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0, 1);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_79365 };
		}
		else
		{
			uVar11 = { func_98(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_79322[1 /*14*/] = { func_102(iVar10, iVar0, uVar11[iVar0], -1) };
				if (BitTest(Global_79322[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar28 = 9;
						if (iParam5 == 1)
						{
							uVar28 = { Global_79382 };
						}
						else
						{
							uVar28 = { func_95(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_79322[1 /*14*/] = { func_102(iVar10, 14, uVar28[iVar1], -1) };
							func_68(iParam0, Global_79322[1 /*14*/].f_12, Global_79322[1 /*14*/].f_3, Global_79322[1 /*14*/].f_4);
							func_84(14);
							if (Global_79320 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_60(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_59(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, func_94(iVar0), Global_79322[1 /*14*/].f_3, Global_79322[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_94(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, func_94(iVar0), Global_79322[1 /*14*/].f_3, Global_79322[1 /*14*/].f_4, iParam4);
						}
						func_84(iVar0);
						if (Global_79320 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_60(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_79322[1 /*14*/] = { func_102(iVar10, iVar0, func_58(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_79322[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_93(iParam0, iVar10, &iVar4, 1))
							{
								func_52(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar38 = { func_98(iVar10, 0) };
						func_52(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var55 = { func_102(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (func_56(iVar10, iParam2, 8, iVar5, &uVar11, &Var55))
				{
					func_52(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_102(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (func_56(iVar10, iParam2, 9, iVar6, &uVar11, &Var55))
				{
					func_52(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_102(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (func_56(iVar10, iParam2, 14, iVar7, &uVar11, &Var55))
				{
					func_52(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_102(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (func_56(iVar10, iParam2, 14, iVar8, &uVar11, &Var55))
				{
					func_52(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_102(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (func_56(iVar10, iParam2, 14, iVar9, &uVar11, &Var55))
				{
					func_52(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar69 = { func_95(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_79322[1 /*14*/] = { func_102(iVar10, 14, uVar69[iVar1], -1) };
			func_68(iParam0, Global_79322[1 /*14*/].f_12, Global_79322[1 /*14*/].f_3, Global_79322[1 /*14*/].f_4);
			func_84(14);
			if (Global_79320 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_60(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_68(iParam0, Global_79322[1 /*14*/].f_12, Global_79322[1 /*14*/].f_3, Global_79322[1 /*14*/].f_4);
		func_84(iParam1);
		if (Global_79320 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_60(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_94(iParam1), Global_79322[1 /*14*/].f_3, Global_79322[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_94(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_94(iParam1), Global_79322[1 /*14*/].f_3, Global_79322[1 /*14*/].f_4, iParam4);
		}
		if (Global_79320 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_60(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_53(iVar10, iParam1, iParam2);
		}
	}
	if (Global_79320 == 1)
	{
		if (func_93(iParam0, iVar10, &iVar4, 0))
		{
			func_52(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_50(iParam0, iVar10, &iVar4))
		{
			func_52(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_79320 = (Global_79320 - 1);
	return 1;
}

void func_53(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_55(iParam0, 12, iVar0))
	{
		if (func_54(iParam0, iParam1, iParam2))
		{
			iVar1 = func_51(iParam0);
			if (iParam1 == 3)
			{
				Global_114135.f_2367.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_114135.f_2367.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_55(int iParam0, int iParam1, int iParam2)
{
	Global_79322[1 /*14*/] = { func_102(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_79322[1 /*14*/].f_6, 2);
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_95(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_57(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_80(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_79(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_78(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_80(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_79(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_78(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_80(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_79(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_78(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_167(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_167(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_81(iParam0, iParam2);
			}
		}
		else
		{
			return func_82(iParam0, iParam1);
		}
	}
	return -99;
}

int func_59(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_51(iParam0);
		Global_114135.f_2367.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_114135.f_2367.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_60(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_82(iParam0, 1);
				iVar0 = func_67(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_82(iParam0, 2);
				iVar0 = func_67(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_59(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_66(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_65(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_64(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_64(iParam0, 3, 135, 150))
									{
										iVar0 = func_63(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case 79:
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_64(iParam0, 3, 209, 222))
									{
										iVar0 = func_63(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_64(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_63(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_63(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_63(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_63(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_64(iParam0, 3, 176, 191) && !func_64(iParam0, 3, 227, 242))
									{
										iVar0 = func_63(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_82(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_82(iParam0, 11);
								iVar5 = func_62(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_82(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_61(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_82(iParam0, 8);
								iVar8 = func_82(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_62(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_62(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_82(iParam0, 11);
								iVar0 = func_62(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_63(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_63(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_63(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_55(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_82(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_65(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_66(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_51(iParam0);
		Global_114135.f_2367.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_114135.f_2367.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_68(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		PED::CLEAR_PED_PROP(iParam0, iParam1, 1);
		if (iParam1 == 0)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
		}
	}
	else
	{
		PED::SET_PED_PROP_INDEX(iParam0, iParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1);
		if (iParam1 == 0)
		{
			iVar0 = func_73(iParam0, iParam2, iParam3, iParam1);
			if (func_69(ENTITY::GET_ENTITY_MODEL(iParam0), 14, iVar0, FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, iParam2, iParam3)))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 34, true);
				PED::SET_PED_CONFIG_FLAG(iParam0, 36, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
			}
		}
	}
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_70(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("helmet"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_70(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("helmet"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	struct<2> Var19;
	int iVar36;
	int iVar37;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar17 = (iParam1 - func_72(iParam0));
		if (iVar17 < 0)
		{
			return -1;
		}
		iVar18 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		if (iVar18 <= iVar17)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
		return Var0.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var19);
		iVar36 = (iParam1 - func_71(iParam0, func_94(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_79472.f_26[iParam2] && iParam1 == Global_79472[iParam2]) && Global_79472.f_13[iParam2] != 0)
		{
			return Global_79472.f_13[iParam2];
		}
		iVar37 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_94(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar36, &Var19);
		Global_79472.f_13[iParam2] = Var19.f_1;
		Global_79472[iParam2] = iParam1;
		Global_79472.f_26[iParam2] = iParam0;
		return Var19.f_1;
	}
	return -1;
}

int func_71(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_77(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_75(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_75(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_74(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_77(iParam3);
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_75(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == 12)
	{
		iVar16 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
		iVar15 = 0;
		while (iVar15 < iVar16)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar15, &Var0);
			if (Var0.f_1 == iParam1)
			{
				return (func_76(iParam0) + iVar15);
			}
			iVar15++;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		iVar17 = FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
		if (iVar17 != -1)
		{
			return (func_72(iParam0) + iVar17);
		}
	}
	else
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_94(iParam2));
		iVar18 = FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
		if (iVar18 != -1)
		{
			return (func_71(iParam0, func_94(iParam2)) + iVar18);
		}
	}
	return -99;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 53;
			break;
		
		case joaat("player_one"):
			return 47;
			break;
		
		case joaat("player_two"):
			return 48;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 26;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 28;
			break;
	}
	return -99;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_78(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_70(iParam0, iParam2, 14, 3);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_70(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_70(iParam0, iParam2, 1, 3);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_70(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_70(iParam0, iParam2, 14, 4);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_70(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_70(iParam0, iParam2, 1, 4);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_70(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_70(iParam0, iParam2, 1, 3);
					}
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_70(iParam0, iParam2, 1, 4);
					}
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_70(iParam0, iParam2, 14, 3);
					}
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_70(iParam0, iParam2, 14, 4);
					}
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
	if (iVar0 == -1)
	{
		return func_77(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return func_73(iParam0, iVar0, iVar1, iParam1);
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_94(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_83(iParam0, iVar1, iVar2, iParam1);
}

int func_83(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_94(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

void func_84(int iParam0)
{
	if (BitTest(Global_79322[1 /*14*/].f_6, 1) && !BitTest(Global_79322[1 /*14*/].f_6, 6))
	{
		func_91(iParam0, Global_79322[1 /*14*/].f_5, Global_79322[1 /*14*/].f_2, 2, Global_79322[1 /*14*/].f_1, 1, 0);
	}
	if (BitTest(Global_79322[1 /*14*/].f_6, 1) && BitTest(Global_79322[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_85(Global_2883588, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_85(Global_2883588, 2, 1, 1, -1);
		}
		else
		{
			func_85(Global_2883588, 2, 1, 1, -1);
		}
	}
}

void func_85(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_79319;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_90(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_89(iVar2, iVar0);
		MISC::SET_BIT(&iVar3, iVar1);
		func_86(iVar2, iVar3, iVar0, 1);
	}
}

void func_86(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_87(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_87(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_88(uParam1));
}

int func_88(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_28();
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

int func_89(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_87(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_90(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 15468;
	if ((bParam4 && Global_4540904) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_m_phead_15_0"):
					case joaat("dlc_mp_stunt_m_phead_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_1"):
					case joaat("dlc_mp_stunt_m_phead_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_2"):
					case joaat("dlc_mp_stunt_m_phead_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_3"):
					case joaat("dlc_mp_stunt_m_phead_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_4"):
					case joaat("dlc_mp_stunt_m_phead_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_5"):
					case joaat("dlc_mp_stunt_m_phead_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_6"):
					case joaat("dlc_mp_stunt_m_phead_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_7"):
					case joaat("dlc_mp_stunt_m_phead_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_0"):
					case joaat("dlc_mp_biker_m_special_2_0"):
					case joaat("dlc_mp_biker_m_special_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_1"):
					case joaat("dlc_mp_biker_m_special_2_1"):
					case joaat("dlc_mp_biker_m_special_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_2"):
					case joaat("dlc_mp_biker_m_special_2_2"):
					case joaat("dlc_mp_biker_m_special_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_3"):
					case joaat("dlc_mp_biker_m_special_2_3"):
					case joaat("dlc_mp_biker_m_special_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_4"):
					case joaat("dlc_mp_biker_m_special_2_4"):
					case joaat("dlc_mp_biker_m_special_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_5"):
					case joaat("dlc_mp_biker_m_special_2_5"):
					case joaat("dlc_mp_biker_m_special_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_7"):
					case joaat("dlc_mp_biker_m_special_2_7"):
					case joaat("dlc_mp_biker_m_special_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_8"):
					case joaat("dlc_mp_biker_m_special_2_8"):
					case joaat("dlc_mp_biker_m_special_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_11"):
					case joaat("dlc_mp_biker_m_special_2_11"):
					case joaat("dlc_mp_biker_m_special_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_m_phead_15_0"):
					case joaat("dlc_mp_stunt_m_phead_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_1"):
					case joaat("dlc_mp_stunt_m_phead_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_2"):
					case joaat("dlc_mp_stunt_m_phead_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_3"):
					case joaat("dlc_mp_stunt_m_phead_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_4"):
					case joaat("dlc_mp_stunt_m_phead_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_5"):
					case joaat("dlc_mp_stunt_m_phead_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_6"):
					case joaat("dlc_mp_stunt_m_phead_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_7"):
					case joaat("dlc_mp_stunt_m_phead_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_f_phead_15_0"):
					case joaat("dlc_mp_stunt_f_phead_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_1"):
					case joaat("dlc_mp_stunt_f_phead_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_2"):
					case joaat("dlc_mp_stunt_f_phead_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_3"):
					case joaat("dlc_mp_stunt_f_phead_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_4"):
					case joaat("dlc_mp_stunt_f_phead_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_5"):
					case joaat("dlc_mp_stunt_f_phead_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_6"):
					case joaat("dlc_mp_stunt_f_phead_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_7"):
					case joaat("dlc_mp_stunt_f_phead_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_f_phead_15_0"):
					case joaat("dlc_mp_stunt_f_phead_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_1"):
					case joaat("dlc_mp_stunt_f_phead_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_2"):
					case joaat("dlc_mp_stunt_f_phead_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_3"):
					case joaat("dlc_mp_stunt_f_phead_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_4"):
					case joaat("dlc_mp_stunt_f_phead_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_5"):
					case joaat("dlc_mp_stunt_f_phead_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_6"):
					case joaat("dlc_mp_stunt_f_phead_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_7"):
					case joaat("dlc_mp_stunt_f_phead_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4540904)
		{
			iVar0 = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
		}
		else
		{
			iVar0 = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
	}
	else
	{
		iVar0 = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1761;
					break;
				
				case 1:
					*uParam2 = 1762;
					break;
				
				case 2:
					*uParam2 = 1763;
					break;
				
				case 3:
					*uParam2 = 1764;
					break;
				
				case 4:
					*uParam2 = 1765;
					break;
				
				case 5:
					*uParam2 = 1766;
					break;
				
				case 6:
					*uParam2 = 1773;
					break;
				
				case 7:
					*uParam2 = 1774;
					break;
				
				case 8:
					*uParam2 = 1775;
					break;
				
				case 9:
					*uParam2 = 1776;
					break;
				
				case 10:
					*uParam2 = 1777;
					break;
				
				case 11:
					*uParam2 = 1778;
					break;
				
				case 12:
					*uParam2 = 1779;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2391;
					break;
				
				case 38:
					*uParam2 = 2392;
					break;
				
				case 39:
					*uParam2 = 2393;
					break;
				
				case 40:
					*uParam2 = 2394;
					break;
				
				case 41:
					*uParam2 = 2453;
					break;
				
				case 42:
					*uParam2 = 2454;
					break;
				
				case 43:
					*uParam2 = 2455;
					break;
				
				case 44:
					*uParam2 = 2456;
					break;
				
				case 45:
					*uParam2 = 2457;
					break;
				
				case 46:
					*uParam2 = 2458;
					break;
				
				case 47:
					*uParam2 = 2459;
					break;
				
				case 48:
					*uParam2 = 2460;
					break;
				
				case 49:
					*uParam2 = 2461;
					break;
				
				case 50:
					*uParam2 = 2462;
					break;
				
				case 51:
					*uParam2 = 2592;
					break;
				
				case 52:
					*uParam2 = 2593;
					break;
				
				case 53:
					*uParam2 = 2594;
					break;
				
				case 54:
					*uParam2 = 2595;
					break;
				
				case 55:
					*uParam2 = 2596;
					break;
				
				case 56:
					*uParam2 = 2597;
					break;
				
				case 57:
					*uParam2 = 2598;
					break;
				
				case 58:
					*uParam2 = 2599;
					break;
				
				case 59:
					*uParam2 = 2600;
					break;
				
				case 60:
					*uParam2 = 2601;
					break;
				
				case 61:
					*uParam2 = 2602;
					break;
				
				case 62:
					*uParam2 = 3199;
					break;
				
				case 63:
					*uParam2 = 3200;
					break;
				
				case 64:
					*uParam2 = 3201;
					break;
				
				case 65:
					*uParam2 = 3202;
					break;
				
				case 66:
					*uParam2 = 3203;
					break;
				
				case 67:
					*uParam2 = 3204;
					break;
				
				case 68:
					*uParam2 = 3672;
					break;
				
				case 69:
					*uParam2 = 3673;
					break;
				
				case 70:
					*uParam2 = 3674;
					break;
				
				case 71:
					*uParam2 = 3675;
					break;
				
				case 72:
					*uParam2 = 3676;
					break;
				
				case 73:
					*uParam2 = 3677;
					break;
				
				case 74:
					*uParam2 = 3678;
					break;
				
				case 75:
					*uParam2 = 3679;
					break;
				
				case 76:
					*uParam2 = 3680;
					break;
				
				case 77:
					*uParam2 = 3681;
					break;
				
				case 78:
					*uParam2 = 3795;
					break;
				
				case 79:
					*uParam2 = 3796;
					break;
				
				case 80:
					*uParam2 = 3797;
					break;
				
				case 81:
					*uParam2 = 3798;
					break;
				
				case 82:
					*uParam2 = 3799;
					break;
				
				case 83:
					*uParam2 = 3800;
					break;
				
				case 84:
					*uParam2 = 3801;
					break;
				
				case 85:
					*uParam2 = 3802;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5340;
					break;
				
				case 90:
					*uParam2 = 5341;
					break;
				
				case 91:
					*uParam2 = 5342;
					break;
				
				case 92:
					*uParam2 = 5343;
					break;
				
				case 93:
					*uParam2 = 5344;
					break;
				
				case 94:
					*uParam2 = 5345;
					break;
				
				case 95:
					*uParam2 = 5346;
					break;
				
				case 96:
					*uParam2 = 5347;
					break;
				
				case 97:
					*uParam2 = 5348;
					break;
				
				case 98:
					*uParam2 = 5349;
					break;
				
				case 99:
					*uParam2 = 5350;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5351;
					break;
				
				case 101:
					*uParam2 = 5397;
					break;
				
				case 102:
					*uParam2 = 5398;
					break;
				
				case 103:
					*uParam2 = 5399;
					break;
				
				case 104:
					*uParam2 = 5400;
					break;
				
				case 105:
					*uParam2 = 5401;
					break;
				
				case 106:
					*uParam2 = 5402;
					break;
				
				case 107:
					*uParam2 = 5403;
					break;
				
				case 108:
					*uParam2 = 5404;
					break;
				
				case 109:
					*uParam2 = 5405;
					break;
				
				case 110:
					*uParam2 = 5406;
					break;
				
				case 111:
					*uParam2 = 5407;
					break;
				
				case 112:
					*uParam2 = 5408;
					break;
				
				case 113:
					*uParam2 = 5409;
					break;
				
				case 114:
					*uParam2 = 5410;
					break;
				
				case 115:
					*uParam2 = 5411;
					break;
				
				case 116:
					*uParam2 = 5412;
					break;
				
				case 117:
					*uParam2 = 5413;
					break;
				
				case 118:
					*uParam2 = 5414;
					break;
				
				case 119:
					*uParam2 = 5415;
					break;
				
				case 120:
					*uParam2 = 5416;
					break;
				
				case 121:
					*uParam2 = 5417;
					break;
				
				case 122:
					*uParam2 = 5418;
					break;
				
				case 123:
					*uParam2 = 5419;
					break;
				
				case 124:
					*uParam2 = 6125;
					break;
				
				case 125:
					*uParam2 = 6126;
					break;
				
				case 126:
					*uParam2 = 6127;
					break;
				
				case 127:
					*uParam2 = 6128;
					break;
				
				case 128:
					*uParam2 = 6129;
					break;
				
				case 129:
					*uParam2 = 6130;
					break;
				
				case 130:
					*uParam2 = 6131;
					break;
				
				case 131:
					*uParam2 = 6132;
					break;
				
				case 132:
					*uParam2 = 6133;
					break;
				
				case 133:
					*uParam2 = 6134;
					break;
				
				case 134:
					*uParam2 = 6135;
					break;
				
				case 135:
					*uParam2 = 6136;
					break;
				
				case 136:
					*uParam2 = 6137;
					break;
				
				case 137:
					*uParam2 = 6138;
					break;
				
				case 138:
					*uParam2 = 6139;
					break;
				
				case 139:
					*uParam2 = 6438;
					break;
				
				case 140:
					*uParam2 = 6439;
					break;
				
				case 141:
					*uParam2 = 6440;
					break;
				
				case 142:
					*uParam2 = 6441;
					break;
				
				case 143:
					*uParam2 = 6442;
					break;
				
				case 144:
					*uParam2 = 6443;
					break;
				
				case 145:
					*uParam2 = 6444;
					break;
				
				case 146:
					*uParam2 = 6445;
					break;
				
				case 147:
					*uParam2 = 6446;
					break;
				
				case 148:
					*uParam2 = 6447;
					break;
				
				case 149:
					*uParam2 = 6448;
					break;
				
				case 150:
					*uParam2 = 6449;
					break;
				
				case 151:
					*uParam2 = 6450;
					break;
				
				case 152:
					*uParam2 = 6451;
					break;
				
				case 153:
					*uParam2 = 6452;
					break;
				
				case 154:
					*uParam2 = 7269;
					break;
				
				case 155:
					*uParam2 = 7270;
					break;
				
				case 156:
					*uParam2 = 7271;
					break;
				
				case 157:
					*uParam2 = 7272;
					break;
				
				case 158:
					*uParam2 = 7273;
					break;
				
				case 159:
					*uParam2 = 7274;
					break;
				
				case 160:
					*uParam2 = 7275;
					break;
				
				case 161:
					*uParam2 = 7882;
					break;
				
				case 162:
					*uParam2 = 7883;
					break;
				
				case 163:
					*uParam2 = 7884;
					break;
				
				case 164:
					*uParam2 = 7885;
					break;
				
				case 165:
					*uParam2 = 7886;
					break;
				
				case 166:
					*uParam2 = 7887;
					break;
				
				case 167:
					*uParam2 = 7888;
					break;
				
				case 168:
					*uParam2 = 7889;
					break;
				
				case 169:
					*uParam2 = 7890;
					break;
				
				case 170:
					*uParam2 = 7891;
					break;
				
				case 171:
					*uParam2 = 7892;
					break;
				
				case 172:
					*uParam2 = 7893;
					break;
				
				case 173:
					*uParam2 = 7894;
					break;
				
				case 174:
					*uParam2 = 7895;
					break;
				
				case 175:
					*uParam2 = 7896;
					break;
				
				case 176:
					*uParam2 = 8302;
					break;
				
				case 177:
					*uParam2 = 8303;
					break;
				
				case 178:
					*uParam2 = 8304;
					break;
				
				case 179:
					*uParam2 = 8305;
					break;
				
				case 180:
					*uParam2 = 8306;
					break;
				
				case 181:
					*uParam2 = 8307;
					break;
				
				case 182:
					*uParam2 = 8308;
					break;
				
				case 183:
					*uParam2 = 8309;
					break;
				
				case 184:
					*uParam2 = 8310;
					break;
				
				case 185:
					*uParam2 = 8311;
					break;
				
				case 186:
					*uParam2 = 8312;
					break;
				
				case 187:
					*uParam2 = 8313;
					break;
				
				case 188:
					*uParam2 = 8314;
					break;
				
				case 189:
					*uParam2 = 8315;
					break;
				
				case 190:
					*uParam2 = 8316;
					break;
				
				case 191:
					*uParam2 = 8317;
					break;
				
				case 192:
					*uParam2 = 8318;
					break;
				
				case 193:
					*uParam2 = 8319;
					break;
				
				case 194:
					*uParam2 = 8320;
					break;
				
				case 195:
					*uParam2 = 8321;
					break;
				
				case 196:
					*uParam2 = 8322;
					break;
				
				case 197:
					*uParam2 = 8323;
					break;
				
				case 198:
					*uParam2 = 8324;
					break;
				
				case 199:
					*uParam2 = 8325;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8326;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9424;
					break;
				
				case 207:
					*uParam2 = 9425;
					break;
				
				case 208:
					*uParam2 = 9426;
					break;
				
				case 209:
					*uParam2 = 9427;
					break;
				
				case 210:
					*uParam2 = 9428;
					break;
				
				case 211:
					*uParam2 = 9429;
					break;
				
				case 212:
					*uParam2 = 9430;
					break;
				
				case 213:
					*uParam2 = 9431;
					break;
				
				case 214:
					*uParam2 = 9432;
					break;
				
				case 215:
					*uParam2 = 9433;
					break;
				
				case 216:
					*uParam2 = 9434;
					break;
				
				case 217:
					*uParam2 = 9435;
					break;
				
				case 218:
					*uParam2 = 9436;
					break;
				
				case 219:
					*uParam2 = 9437;
					break;
				
				case 220:
					*uParam2 = 9438;
					break;
				
				case 221:
					*uParam2 = 9439;
					break;
				
				case 222:
					*uParam2 = 9440;
					break;
				
				case 223:
					*uParam2 = 9441;
					break;
				
				case 224:
					*uParam2 = 9442;
					break;
				
				case 225:
					*uParam2 = 9443;
					break;
				
				case 226:
					*uParam2 = 9444;
					break;
				
				case 227:
					*uParam2 = 9445;
					break;
				
				case 228:
					*uParam2 = 9446;
					break;
				
				case 229:
					*uParam2 = 9447;
					break;
				
				case 230:
					*uParam2 = 9448;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10304;
					break;
				
				case 232:
					*uParam2 = 10305;
					break;
				
				case 233:
					*uParam2 = 10306;
					break;
				
				case 234:
					*uParam2 = 10307;
					break;
				
				case 235:
					*uParam2 = 10308;
					break;
				
				case 236:
					*uParam2 = 10309;
					break;
				
				case 237:
					*uParam2 = 10310;
					break;
				
				case 238:
					*uParam2 = 10311;
					break;
				
				case 239:
					*uParam2 = 10312;
					break;
				
				case 240:
					*uParam2 = 10313;
					break;
				
				case 241:
					*uParam2 = 10314;
					break;
				
				case 242:
					*uParam2 = 10315;
					break;
				
				case 243:
					*uParam2 = 10316;
					break;
				
				case 244:
					*uParam2 = 10317;
					break;
				
				case 245:
					*uParam2 = 10318;
					break;
				
				case 246:
					*uParam2 = 10319;
					break;
				
				case 247:
					*uParam2 = 10320;
					break;
				
				case 248:
					*uParam2 = 10321;
					break;
				
				case 249:
					*uParam2 = 10322;
					break;
				
				case 250:
					*uParam2 = 10323;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10420;
					break;
				
				case 252:
					*uParam2 = 10421;
					break;
				
				case 253:
					*uParam2 = 10422;
					break;
				
				case 254:
					*uParam2 = 10423;
					break;
				
				case 255:
					*uParam2 = 10424;
					break;
				
				case 256:
					*uParam2 = 10425;
					break;
				
				case 257:
					*uParam2 = 10426;
					break;
				
				case 258:
					*uParam2 = 10427;
					break;
				
				case 259:
					*uParam2 = 10428;
					break;
				
				case 260:
					*uParam2 = 10429;
					break;
				
				case 261:
					*uParam2 = 11847;
					break;
				
				case 262:
					*uParam2 = 11848;
					break;
				
				case 263:
					*uParam2 = 11849;
					break;
				
				case 264:
					*uParam2 = 11850;
					break;
				
				case 265:
					*uParam2 = 11851;
					break;
				
				case 266:
					*uParam2 = 11852;
					break;
				
				case 267:
					*uParam2 = 11853;
					break;
				
				case 268:
					*uParam2 = 11854;
					break;
				
				case 269:
					*uParam2 = 11855;
					break;
				
				case 270:
					*uParam2 = 11856;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11878;
					break;
				
				case 272:
					*uParam2 = 11879;
					break;
				
				case 273:
					*uParam2 = 11880;
					break;
				
				case 274:
					*uParam2 = 11881;
					break;
				
				case 275:
					*uParam2 = 11882;
					break;
				
				case 276:
					*uParam2 = 11883;
					break;
				
				case 277:
					*uParam2 = 11884;
					break;
				
				case 278:
					*uParam2 = 11885;
					break;
				
				case 279:
					*uParam2 = 11886;
					break;
				
				case 280:
					*uParam2 = 11887;
					break;
				
				case 281:
					*uParam2 = 11888;
					break;
				
				case 282:
					*uParam2 = 11889;
					break;
				
				case 283:
					*uParam2 = 11976;
					break;
				
				case 284:
					*uParam2 = 11977;
					break;
				
				case 285:
					*uParam2 = 11978;
					break;
				
				case 286:
					*uParam2 = 11979;
					break;
				
				case 287:
					*uParam2 = 11980;
					break;
				
				case 288:
					*uParam2 = 11981;
					break;
				
				case 289:
					*uParam2 = 11982;
					break;
				
				case 290:
					*uParam2 = 11983;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 291:
					*uParam2 = 11984;
					break;
				
				case 292:
					*uParam2 = 11985;
					break;
				
				case 293:
					*uParam2 = 11986;
					break;
				
				case 294:
					*uParam2 = 11987;
					break;
				
				case 295:
					*uParam2 = 11988;
					break;
				
				case 296:
					*uParam2 = 11989;
					break;
				
				case 297:
					*uParam2 = 11990;
					break;
				
				case 298:
					*uParam2 = 12190;
					break;
				
				case 299:
					*uParam2 = 12191;
					break;
				
				case 300:
					*uParam2 = 12192;
					break;
				
				case 301:
					*uParam2 = 12193;
					break;
				
				case 302:
					*uParam2 = 12194;
					break;
				
				case 303:
					*uParam2 = 12195;
					break;
				
				case 304:
					*uParam2 = 12196;
					break;
				
				case 305:
					*uParam2 = 12197;
					break;
				
				case 306:
					*uParam2 = 12332;
					break;
				
				case 307:
					*uParam2 = 12333;
					break;
				
				case 308:
					*uParam2 = 12334;
					break;
				
				case 309:
					*uParam2 = 12335;
					break;
				
				case 310:
					*uParam2 = 12336;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 311:
					*uParam2 = 13017;
					break;
				
				case 312:
					*uParam2 = 13018;
					break;
				
				case 313:
					*uParam2 = 13019;
					break;
				
				case 314:
					*uParam2 = 13020;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1767;
					break;
				
				case 1:
					*uParam2 = 1768;
					break;
				
				case 2:
					*uParam2 = 1769;
					break;
				
				case 3:
					*uParam2 = 1770;
					break;
				
				case 4:
					*uParam2 = 1771;
					break;
				
				case 5:
					*uParam2 = 1772;
					break;
				
				case 6:
					*uParam2 = 1780;
					break;
				
				case 7:
					*uParam2 = 1781;
					break;
				
				case 8:
					*uParam2 = 1782;
					break;
				
				case 9:
					*uParam2 = 1783;
					break;
				
				case 10:
					*uParam2 = 1784;
					break;
				
				case 11:
					*uParam2 = 1785;
					break;
				
				case 12:
					*uParam2 = 1786;
					break;
				
				case 13:
					*uParam2 = 1789;
					break;
				
				case 14:
					*uParam2 = 1790;
					break;
				
				case 15:
					*uParam2 = 1891;
					break;
				
				case 16:
					*uParam2 = 1892;
					break;
				
				case 17:
					*uParam2 = 1922;
					break;
				
				case 18:
					*uParam2 = 1940;
					break;
				
				case 19:
					*uParam2 = 1941;
					break;
				
				case 20:
					*uParam2 = 1942;
					break;
				
				case 21:
					*uParam2 = 1943;
					break;
				
				case 22:
					*uParam2 = 1944;
					break;
				
				case 23:
					*uParam2 = 2045;
					break;
				
				case 24:
					*uParam2 = 2046;
					break;
				
				case 25:
					*uParam2 = 2080;
					break;
				
				case 26:
					*uParam2 = 2081;
					break;
				
				case 27:
					*uParam2 = 2082;
					break;
				
				case 28:
					*uParam2 = 2083;
					break;
				
				case 29:
					*uParam2 = 2084;
					break;
				
				case 30:
					*uParam2 = 2085;
					break;
				
				case 31:
					*uParam2 = 2086;
					break;
				
				case 32:
					*uParam2 = 2087;
					break;
				
				case 33:
					*uParam2 = 2088;
					break;
				
				case 34:
					*uParam2 = 2089;
					break;
				
				case 35:
					*uParam2 = 2328;
					break;
				
				case 36:
					*uParam2 = 2329;
					break;
				
				case 37:
					*uParam2 = 2395;
					break;
				
				case 38:
					*uParam2 = 2396;
					break;
				
				case 39:
					*uParam2 = 2397;
					break;
				
				case 40:
					*uParam2 = 2398;
					break;
				
				case 41:
					*uParam2 = 2463;
					break;
				
				case 42:
					*uParam2 = 2464;
					break;
				
				case 43:
					*uParam2 = 2465;
					break;
				
				case 44:
					*uParam2 = 2466;
					break;
				
				case 45:
					*uParam2 = 2467;
					break;
				
				case 46:
					*uParam2 = 2468;
					break;
				
				case 47:
					*uParam2 = 2469;
					break;
				
				case 48:
					*uParam2 = 2470;
					break;
				
				case 49:
					*uParam2 = 2471;
					break;
				
				case 50:
					*uParam2 = 2472;
					break;
				
				case 51:
					*uParam2 = 2603;
					break;
				
				case 52:
					*uParam2 = 2604;
					break;
				
				case 53:
					*uParam2 = 2605;
					break;
				
				case 54:
					*uParam2 = 2606;
					break;
				
				case 55:
					*uParam2 = 2607;
					break;
				
				case 56:
					*uParam2 = 2608;
					break;
				
				case 57:
					*uParam2 = 2609;
					break;
				
				case 58:
					*uParam2 = 2610;
					break;
				
				case 59:
					*uParam2 = 2611;
					break;
				
				case 60:
					*uParam2 = 2612;
					break;
				
				case 61:
					*uParam2 = 2613;
					break;
				
				case 62:
					*uParam2 = 3205;
					break;
				
				case 63:
					*uParam2 = 3206;
					break;
				
				case 64:
					*uParam2 = 3207;
					break;
				
				case 65:
					*uParam2 = 3208;
					break;
				
				case 66:
					*uParam2 = 3209;
					break;
				
				case 67:
					*uParam2 = 3210;
					break;
				
				case 68:
					*uParam2 = 3682;
					break;
				
				case 69:
					*uParam2 = 3683;
					break;
				
				case 70:
					*uParam2 = 3684;
					break;
				
				case 71:
					*uParam2 = 3685;
					break;
				
				case 72:
					*uParam2 = 3686;
					break;
				
				case 73:
					*uParam2 = 3687;
					break;
				
				case 74:
					*uParam2 = 3688;
					break;
				
				case 75:
					*uParam2 = 3689;
					break;
				
				case 76:
					*uParam2 = 3690;
					break;
				
				case 77:
					*uParam2 = 3691;
					break;
				
				case 78:
					*uParam2 = 3803;
					break;
				
				case 79:
					*uParam2 = 3804;
					break;
				
				case 80:
					*uParam2 = 3805;
					break;
				
				case 81:
					*uParam2 = 3806;
					break;
				
				case 82:
					*uParam2 = 3807;
					break;
				
				case 83:
					*uParam2 = 3808;
					break;
				
				case 84:
					*uParam2 = 3809;
					break;
				
				case 85:
					*uParam2 = 3810;
					break;
				
				case 86:
					*uParam2 = 3908;
					break;
				
				case 87:
					*uParam2 = 3909;
					break;
				
				case 88:
					*uParam2 = 3910;
					break;
				
				case 89:
					*uParam2 = 5352;
					break;
				
				case 90:
					*uParam2 = 5353;
					break;
				
				case 91:
					*uParam2 = 5354;
					break;
				
				case 92:
					*uParam2 = 5355;
					break;
				
				case 93:
					*uParam2 = 5356;
					break;
				
				case 94:
					*uParam2 = 5357;
					break;
				
				case 95:
					*uParam2 = 5358;
					break;
				
				case 96:
					*uParam2 = 5359;
					break;
				
				case 97:
					*uParam2 = 5360;
					break;
				
				case 98:
					*uParam2 = 5361;
					break;
				
				case 99:
					*uParam2 = 5362;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5363;
					break;
				
				case 101:
					*uParam2 = 5420;
					break;
				
				case 102:
					*uParam2 = 5421;
					break;
				
				case 103:
					*uParam2 = 5422;
					break;
				
				case 104:
					*uParam2 = 5423;
					break;
				
				case 105:
					*uParam2 = 5424;
					break;
				
				case 106:
					*uParam2 = 5425;
					break;
				
				case 107:
					*uParam2 = 5426;
					break;
				
				case 108:
					*uParam2 = 5427;
					break;
				
				case 109:
					*uParam2 = 5428;
					break;
				
				case 110:
					*uParam2 = 5429;
					break;
				
				case 111:
					*uParam2 = 5430;
					break;
				
				case 112:
					*uParam2 = 5431;
					break;
				
				case 113:
					*uParam2 = 5432;
					break;
				
				case 114:
					*uParam2 = 5433;
					break;
				
				case 115:
					*uParam2 = 5434;
					break;
				
				case 116:
					*uParam2 = 5435;
					break;
				
				case 117:
					*uParam2 = 5436;
					break;
				
				case 118:
					*uParam2 = 5437;
					break;
				
				case 119:
					*uParam2 = 5438;
					break;
				
				case 120:
					*uParam2 = 5439;
					break;
				
				case 121:
					*uParam2 = 5440;
					break;
				
				case 122:
					*uParam2 = 5441;
					break;
				
				case 123:
					*uParam2 = 5442;
					break;
				
				case 124:
					*uParam2 = 6140;
					break;
				
				case 125:
					*uParam2 = 6141;
					break;
				
				case 126:
					*uParam2 = 6142;
					break;
				
				case 127:
					*uParam2 = 6143;
					break;
				
				case 128:
					*uParam2 = 6144;
					break;
				
				case 129:
					*uParam2 = 6145;
					break;
				
				case 130:
					*uParam2 = 6146;
					break;
				
				case 131:
					*uParam2 = 6147;
					break;
				
				case 132:
					*uParam2 = 6148;
					break;
				
				case 133:
					*uParam2 = 6149;
					break;
				
				case 134:
					*uParam2 = 6150;
					break;
				
				case 135:
					*uParam2 = 6151;
					break;
				
				case 136:
					*uParam2 = 6152;
					break;
				
				case 137:
					*uParam2 = 6153;
					break;
				
				case 138:
					*uParam2 = 6154;
					break;
				
				case 139:
					*uParam2 = 6453;
					break;
				
				case 140:
					*uParam2 = 6454;
					break;
				
				case 141:
					*uParam2 = 6455;
					break;
				
				case 142:
					*uParam2 = 6456;
					break;
				
				case 143:
					*uParam2 = 6457;
					break;
				
				case 144:
					*uParam2 = 6458;
					break;
				
				case 145:
					*uParam2 = 6459;
					break;
				
				case 146:
					*uParam2 = 6460;
					break;
				
				case 147:
					*uParam2 = 6461;
					break;
				
				case 148:
					*uParam2 = 6462;
					break;
				
				case 149:
					*uParam2 = 6463;
					break;
				
				case 150:
					*uParam2 = 6464;
					break;
				
				case 151:
					*uParam2 = 6465;
					break;
				
				case 152:
					*uParam2 = 6466;
					break;
				
				case 153:
					*uParam2 = 6467;
					break;
				
				case 154:
					*uParam2 = 7276;
					break;
				
				case 155:
					*uParam2 = 7277;
					break;
				
				case 156:
					*uParam2 = 7278;
					break;
				
				case 157:
					*uParam2 = 7279;
					break;
				
				case 158:
					*uParam2 = 7280;
					break;
				
				case 159:
					*uParam2 = 7281;
					break;
				
				case 160:
					*uParam2 = 7282;
					break;
				
				case 161:
					*uParam2 = 7897;
					break;
				
				case 162:
					*uParam2 = 7898;
					break;
				
				case 163:
					*uParam2 = 7899;
					break;
				
				case 164:
					*uParam2 = 7900;
					break;
				
				case 165:
					*uParam2 = 7901;
					break;
				
				case 166:
					*uParam2 = 7902;
					break;
				
				case 167:
					*uParam2 = 7903;
					break;
				
				case 168:
					*uParam2 = 7904;
					break;
				
				case 169:
					*uParam2 = 7905;
					break;
				
				case 170:
					*uParam2 = 7906;
					break;
				
				case 171:
					*uParam2 = 7907;
					break;
				
				case 172:
					*uParam2 = 7908;
					break;
				
				case 173:
					*uParam2 = 7909;
					break;
				
				case 174:
					*uParam2 = 7910;
					break;
				
				case 175:
					*uParam2 = 7911;
					break;
				
				case 176:
					*uParam2 = 8327;
					break;
				
				case 177:
					*uParam2 = 8328;
					break;
				
				case 178:
					*uParam2 = 8329;
					break;
				
				case 179:
					*uParam2 = 8330;
					break;
				
				case 180:
					*uParam2 = 8331;
					break;
				
				case 181:
					*uParam2 = 8332;
					break;
				
				case 182:
					*uParam2 = 8333;
					break;
				
				case 183:
					*uParam2 = 8334;
					break;
				
				case 184:
					*uParam2 = 8335;
					break;
				
				case 185:
					*uParam2 = 8336;
					break;
				
				case 186:
					*uParam2 = 8337;
					break;
				
				case 187:
					*uParam2 = 8338;
					break;
				
				case 188:
					*uParam2 = 8339;
					break;
				
				case 189:
					*uParam2 = 8340;
					break;
				
				case 190:
					*uParam2 = 8341;
					break;
				
				case 191:
					*uParam2 = 8342;
					break;
				
				case 192:
					*uParam2 = 8343;
					break;
				
				case 193:
					*uParam2 = 8344;
					break;
				
				case 194:
					*uParam2 = 8345;
					break;
				
				case 195:
					*uParam2 = 8346;
					break;
				
				case 196:
					*uParam2 = 8347;
					break;
				
				case 197:
					*uParam2 = 8348;
					break;
				
				case 198:
					*uParam2 = 8349;
					break;
				
				case 199:
					*uParam2 = 8350;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8351;
					break;
				
				case 201:
					*uParam2 = 8946;
					break;
				
				case 202:
					*uParam2 = 8947;
					break;
				
				case 203:
					*uParam2 = 8948;
					break;
				
				case 204:
					*uParam2 = 8949;
					break;
				
				case 205:
					*uParam2 = 8950;
					break;
				
				case 206:
					*uParam2 = 9449;
					break;
				
				case 207:
					*uParam2 = 9450;
					break;
				
				case 208:
					*uParam2 = 9451;
					break;
				
				case 209:
					*uParam2 = 9452;
					break;
				
				case 210:
					*uParam2 = 9453;
					break;
				
				case 211:
					*uParam2 = 9454;
					break;
				
				case 212:
					*uParam2 = 9455;
					break;
				
				case 213:
					*uParam2 = 9456;
					break;
				
				case 214:
					*uParam2 = 9457;
					break;
				
				case 215:
					*uParam2 = 9458;
					break;
				
				case 216:
					*uParam2 = 9459;
					break;
				
				case 217:
					*uParam2 = 9460;
					break;
				
				case 218:
					*uParam2 = 9461;
					break;
				
				case 219:
					*uParam2 = 9462;
					break;
				
				case 220:
					*uParam2 = 9463;
					break;
				
				case 221:
					*uParam2 = 9464;
					break;
				
				case 222:
					*uParam2 = 9465;
					break;
				
				case 223:
					*uParam2 = 9466;
					break;
				
				case 224:
					*uParam2 = 9467;
					break;
				
				case 225:
					*uParam2 = 9468;
					break;
				
				case 226:
					*uParam2 = 9469;
					break;
				
				case 227:
					*uParam2 = 9470;
					break;
				
				case 228:
					*uParam2 = 9471;
					break;
				
				case 229:
					*uParam2 = 9472;
					break;
				
				case 230:
					*uParam2 = 9473;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10324;
					break;
				
				case 232:
					*uParam2 = 10325;
					break;
				
				case 233:
					*uParam2 = 10326;
					break;
				
				case 234:
					*uParam2 = 10327;
					break;
				
				case 235:
					*uParam2 = 10328;
					break;
				
				case 236:
					*uParam2 = 10329;
					break;
				
				case 237:
					*uParam2 = 10330;
					break;
				
				case 238:
					*uParam2 = 10331;
					break;
				
				case 239:
					*uParam2 = 10332;
					break;
				
				case 240:
					*uParam2 = 10333;
					break;
				
				case 241:
					*uParam2 = 10334;
					break;
				
				case 242:
					*uParam2 = 10335;
					break;
				
				case 243:
					*uParam2 = 10336;
					break;
				
				case 244:
					*uParam2 = 10337;
					break;
				
				case 245:
					*uParam2 = 10338;
					break;
				
				case 246:
					*uParam2 = 10339;
					break;
				
				case 247:
					*uParam2 = 10340;
					break;
				
				case 248:
					*uParam2 = 10341;
					break;
				
				case 249:
					*uParam2 = 10342;
					break;
				
				case 250:
					*uParam2 = 10343;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10430;
					break;
				
				case 252:
					*uParam2 = 10431;
					break;
				
				case 253:
					*uParam2 = 10432;
					break;
				
				case 254:
					*uParam2 = 10433;
					break;
				
				case 255:
					*uParam2 = 10434;
					break;
				
				case 256:
					*uParam2 = 10435;
					break;
				
				case 257:
					*uParam2 = 10436;
					break;
				
				case 258:
					*uParam2 = 10437;
					break;
				
				case 259:
					*uParam2 = 10438;
					break;
				
				case 260:
					*uParam2 = 10439;
					break;
				
				case 261:
					*uParam2 = 11857;
					break;
				
				case 262:
					*uParam2 = 11858;
					break;
				
				case 263:
					*uParam2 = 11859;
					break;
				
				case 264:
					*uParam2 = 11860;
					break;
				
				case 265:
					*uParam2 = 11861;
					break;
				
				case 266:
					*uParam2 = 11862;
					break;
				
				case 267:
					*uParam2 = 11863;
					break;
				
				case 268:
					*uParam2 = 11864;
					break;
				
				case 269:
					*uParam2 = 11865;
					break;
				
				case 270:
					*uParam2 = 11866;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11890;
					break;
				
				case 272:
					*uParam2 = 11891;
					break;
				
				case 273:
					*uParam2 = 11892;
					break;
				
				case 274:
					*uParam2 = 11893;
					break;
				
				case 275:
					*uParam2 = 11894;
					break;
				
				case 276:
					*uParam2 = 11895;
					break;
				
				case 277:
					*uParam2 = 11896;
					break;
				
				case 278:
					*uParam2 = 11897;
					break;
				
				case 279:
					*uParam2 = 11898;
					break;
				
				case 280:
					*uParam2 = 11899;
					break;
				
				case 281:
					*uParam2 = 11900;
					break;
				
				case 282:
					*uParam2 = 11901;
					break;
				
				case 283:
					*uParam2 = 11991;
					break;
				
				case 284:
					*uParam2 = 11992;
					break;
				
				case 285:
					*uParam2 = 11993;
					break;
				
				case 286:
					*uParam2 = 11994;
					break;
				
				case 287:
					*uParam2 = 11995;
					break;
				
				case 288:
					*uParam2 = 11996;
					break;
				
				case 289:
					*uParam2 = 11997;
					break;
				
				case 290:
					*uParam2 = 11998;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 291:
					*uParam2 = 11999;
					break;
				
				case 292:
					*uParam2 = 12000;
					break;
				
				case 293:
					*uParam2 = 12001;
					break;
				
				case 294:
					*uParam2 = 12002;
					break;
				
				case 295:
					*uParam2 = 12003;
					break;
				
				case 296:
					*uParam2 = 12004;
					break;
				
				case 297:
					*uParam2 = 12005;
					break;
				
				case 298:
					*uParam2 = 12198;
					break;
				
				case 299:
					*uParam2 = 12199;
					break;
				
				case 300:
					*uParam2 = 12200;
					break;
				
				case 301:
					*uParam2 = 12201;
					break;
				
				case 302:
					*uParam2 = 12202;
					break;
				
				case 303:
					*uParam2 = 12203;
					break;
				
				case 304:
					*uParam2 = 12204;
					break;
				
				case 305:
					*uParam2 = 12205;
					break;
				
				case 306:
					*uParam2 = 12337;
					break;
				
				case 307:
					*uParam2 = 12338;
					break;
				
				case 308:
					*uParam2 = 12339;
					break;
				
				case 309:
					*uParam2 = 12340;
					break;
				
				case 310:
					*uParam2 = 12341;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 311:
					*uParam2 = 13021;
					break;
				
				case 312:
					*uParam2 = 13022;
					break;
				
				case 313:
					*uParam2 = 13023;
					break;
				
				case 314:
					*uParam2 = 13024;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 15468;
}

int func_91(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/][iParam3]), iParam4);
		}
		return BitTest(Global_114135.f_2367[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_114135.f_2367[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return BitTest(Global_114135.f_2367[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_92(int iParam0)
{
	if (!BitTest(Global_79322[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(Global_79322[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!BitTest(Global_79322[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_93(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_51(iParam1);
	if (iVar0 >= 3 || iVar0 < 0)
	{
		return 0;
	}
	if (Global_114135.f_2367.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_167(iParam0, Global_114135.f_2367.f_539[iVar0 /*65*/].f_61, Global_114135.f_2367.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_114135.f_2367.f_539[iVar0 /*65*/].f_59;
			Global_114135.f_2367.f_539[iVar0 /*65*/].f_60 = -99;
			Global_114135.f_2367.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

struct<10> func_95(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_97(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_97(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_97(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_97(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_97(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_97(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_97(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_97(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_97(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_97(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_97(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_96(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_97(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_97(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_97(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_97(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_97(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_97(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_97(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_97(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_97(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_97(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_96(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_97(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_97(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_97(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_97(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_97(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_97(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_97(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_97(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_97(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_97(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_96(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_97(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_97(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_97(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_97(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_97(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_97(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_97(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_97(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_97(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_97(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_97(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_97(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_97(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_97(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_97(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_97(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_97(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_97(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_97(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_97(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_97(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_97(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_97(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_97(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_97(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_97(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_96(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_97(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_97(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_97(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_97(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_97(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_97(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_97(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_97(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_97(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_97(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_97(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_97(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_97(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_97(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_97(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_97(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_97(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_97(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_97(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_97(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_97(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_97(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_97(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_97(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_97(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_96(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_96(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
		if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_75(iParam1, Var16.f_0, 14, iVar0);
					}
					else if (Var16.f_1 != -1)
					{
						(*iParam0)[Var16.f_2] = Var16.f_1;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_97(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_98(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_114135.f_9089.f_99.f_58[120])
					{
						func_101(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_101(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_101(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_101(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_101(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_101(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_101(&Var1, -99, -99, Global_114135.f_2367.f_539.f_196[0], Global_114135.f_2367.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_101(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_101(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_101(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_101(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_101(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_101(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_101(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_101(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_101(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_101(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_101(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_101(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_101(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_101(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_101(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_101(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_101(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_101(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_101(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_101(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_101(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_101(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_101(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_101(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_101(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_101(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_101(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_101(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_101(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_101(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_101(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_101(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_101(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_101(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_101(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_101(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_101(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_101(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_101(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_101(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_101(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_101(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_101(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_101(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_101(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_101(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_101(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_99(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_101(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_101(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_101(&Var1, -99, -99, Global_114135.f_2367.f_539.f_196[1], Global_114135.f_2367.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_101(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_101(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_101(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_101(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_101(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_101(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_101(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_101(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_101(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_101(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_101(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_101(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_101(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_101(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_101(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_101(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_101(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_101(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_101(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_101(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_101(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_101(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_101(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_101(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_101(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_101(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_101(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_101(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_101(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_101(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_101(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_101(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_101(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_101(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_101(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_101(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_101(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_101(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_101(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_101(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_101(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_101(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_101(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_101(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_99(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_101(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_101(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_101(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_101(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_101(&Var1, -99, -99, Global_114135.f_2367.f_539.f_196[2], Global_114135.f_2367.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_101(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_101(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_101(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_101(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_101(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_101(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_101(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_101(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_101(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_101(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_101(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_101(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_101(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_101(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_101(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_101(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_101(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_101(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_101(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_101(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_101(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_101(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_101(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_101(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_101(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_101(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_101(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_101(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_101(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_101(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_101(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_101(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_101(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_101(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_101(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_101(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_101(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_101(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_101(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_101(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_101(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_101(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_101(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_99(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_101(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_101(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_101(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_101(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_101(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_101(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_101(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_101(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_101(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_101(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_101(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_101(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_101(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_101(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_101(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_101(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_101(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_101(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_101(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_101(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_101(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_101(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_101(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_101(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_101(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_101(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_99(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_101(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_101(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_101(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_101(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_101(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_101(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_101(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_101(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_101(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_101(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_101(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_101(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_101(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_101(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_101(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_101(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_101(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_101(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_101(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_101(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_101(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_101(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_101(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_101(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_101(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_101(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_101(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_101(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_99(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_99(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var16;
	struct<2> Var19;
	int iVar36;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, false);
	FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
	if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar36, &Var16))
			{
				if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						FILES::INIT_SHOP_PED_COMPONENT(&Var19);
						FILES::GET_SHOP_PED_COMPONENT(Var16.f_0, &Var19);
						if (Var16.f_0 != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var16.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_100(Var16.f_2)] = Var16.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_100(Var16.f_2)] = func_75(iParam1, Var16.f_0, func_100(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*uParam0)[func_100(Var16.f_2)] = Var16.f_1;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_101(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

struct<14> func_102(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_166();
	if (iParam0 == joaat("player_zero"))
	{
		func_148(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_129(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_103(iParam1, iParam2);
	}
	return Global_79322[0 /*14*/];
}

void func_103(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_128(iParam1);
			break;
		
		case 2:
			func_127(iParam1);
			break;
		
		case 3:
			func_124(iParam1);
			break;
		
		case 4:
			func_123(iParam1);
			break;
		
		case 6:
			func_122(iParam1);
			break;
		
		case 5:
			func_121(iParam1);
			break;
		
		case 8:
			func_120(iParam1);
			break;
		
		case 9:
			func_119(iParam1);
			break;
		
		case 10:
			func_118(iParam1);
			break;
		
		case 1:
			func_117(iParam1);
			break;
		
		case 7:
			func_116(iParam1);
			break;
		
		case 11:
			func_115(iParam1);
			break;
		
		case 12:
			func_114(iParam1);
			break;
		
		case 13:
			func_113(iParam1);
			break;
		
		case 14:
			func_104(iParam1);
			break;
	}
}

void func_104(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 155, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_105(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_111(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), 1);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (func_110(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("rebreather"), 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_109(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_109(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_109(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_109(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_109(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_109(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		if (FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589))
		{
			MISC::CLEAR_BIT(&(uParam0->f_6), 1);
			MISC::CLEAR_BIT(&(uParam0->f_6), 0);
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_91(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_91(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_91(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_110(14))
			{
				return;
			}
			uVar0 = func_89(func_108(iParam1, uParam0->f_2), Global_79319);
			if (BitTest(uVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 1);
			}
			uVar0 = func_89(func_107(iParam1, uParam0->f_2), Global_79319);
			if (BitTest(uVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 2);
			}
			if (func_106(iParam1, uParam0->f_2, &iVar1))
			{
				uVar0 = func_89(iVar1, Global_79319);
				if (!BitTest(uVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

bool func_106(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 979;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 3:
					*uParam2 = 1430;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 10:
					*uParam2 = 1441;
					break;
				
				case 1:
					*uParam2 = 1012;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
				
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 9:
					*uParam2 = 1440;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
				
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 7:
					*uParam2 = 1444;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
				
				case 6:
					*uParam2 = 1011;
					break;
				
				case 8:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 995;
					break;
				
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}
	return *uParam2 != 979;
}

int func_107(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 3:
					return 1415;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 10:
					return 1426;
					break;
				
				case 1:
					return 960;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
				
				case 12:
					return 979;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 9:
					return 1425;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 7:
					return 1429;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				
				case 6:
					return 959;
					break;
				
				case 8:
					return 1423;
					break;
				
				case 11:
					return 943;
					break;
				
				case 14:
					return 975;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_108(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 3:
					return 1400;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 10:
					return 1411;
					break;
				
				case 1:
					return 908;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
				
				case 12:
					return 927;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				
				case 6:
					return 907;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 891;
					break;
				
				case 14:
					return 923;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

int func_109(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_79319;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_90(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		uVar3 = func_89(iVar2, iVar0);
		return BitTest(uVar3, uVar1);
	}
	return 0;
}

bool func_110(int iParam0)
{
	return Global_44181 == iParam0;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_112(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	struct<10> Var19;
	int iVar36;
	int iVar37;
	int iVar38;
	struct<10> Var39;
	int iVar56;
	int iVar57;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_79322[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar17 = (iParam1 - iParam2);
		if (iVar17 >= 0)
		{
			iVar18 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar1, false);
			if (iVar18 > iVar17)
			{
				FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar17, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2.f_0;
				func_105(&(Global_79322[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_105(&(Global_79322[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var19);
		iVar37 = (iParam1 - iParam2);
		if (iVar37 >= 0)
		{
			iVar38 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, true, -1, -1);
			if (iVar38 > iVar37)
			{
				FILES::GET_SHOP_PED_QUERY_PROP(iVar37, &Var19);
				if (Var19.f_6 == 0)
				{
					iVar36 = 9;
				}
				else if (Var19.f_6 == 1)
				{
					iVar36 = 10;
				}
				else if (Var19.f_6 == 2)
				{
					iVar36 = 2;
				}
				else if (Var19.f_6 == 3)
				{
					iVar36 = 3;
				}
				else if (Var19.f_6 == 4)
				{
					iVar36 = 4;
				}
				else if (Var19.f_6 == 5)
				{
					iVar36 = 5;
				}
				else if (Var19.f_6 == 6)
				{
					iVar36 = 6;
				}
				else if (Var19.f_6 == 7)
				{
					iVar36 = 7;
				}
				else if (Var19.f_6 == 8)
				{
					iVar36 = 8;
				}
				else
				{
					iVar36 = -1;
				}
				Global_2883588 = Var19.f_1;
				Global_2883589 = Var19.f_0;
				func_105(&(Global_79322[0 /*14*/]), iParam0, iParam1, &(Var19.f_9), Var19.f_3, Var19.f_4, Var19.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var19.f_1, joaat("outfit_only"), 0), iVar36, 2, Var19.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var39);
		if (iParam3 != -1 && Global_79520)
		{
			FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var39);
			Global_2883588 = Var39.f_1;
			Global_2883589 = Var39.f_0;
			func_105(&(Global_79322[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var39.f_1, joaat("outfit_only"), 0), -1, 2, Var39.f_1 != 0);
			return;
		}
		iVar56 = (iParam1 - iParam2);
		if (iVar56 >= 0)
		{
			iVar57 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, false, -1, func_94(iParam0));
			if (iVar57 > iVar56)
			{
				FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar56, &Var39);
				Global_2883588 = Var39.f_1;
				Global_2883589 = Var39.f_0;
				func_105(&(Global_79322[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var39.f_1, joaat("outfit_only"), 0), -1, 2, Var39.f_1 != 0);
				return;
			}
		}
	}
}

void func_113(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_114(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_115(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_116(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_117(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_118(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_112(iVar10, iParam0, 33, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_119(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_112(iVar10, iParam0, 17, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_120(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 18, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_121(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_122(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_112(iVar10, iParam0, 84, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_123(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_112(iVar10, iParam0, 104, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_124(int iParam0)
{
	if (iParam0 < 136)
	{
		func_126(iParam0);
	}
	else
	{
		func_125(iParam0);
	}
	if (Global_79322[0 /*14*/].f_2 == -1)
	{
		func_112(3, iParam0, 242, -1);
	}
}

void func_125(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_126(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_127(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_128(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_79322[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_112(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_129(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_147(iParam1);
			break;
		
		case 2:
			func_146(iParam1);
			break;
		
		case 3:
			func_142(iParam1);
			break;
		
		case 4:
			func_141(iParam1);
			break;
		
		case 6:
			func_140(iParam1);
			break;
		
		case 5:
			func_139(iParam1);
			break;
		
		case 8:
			func_138(iParam1);
			break;
		
		case 9:
			func_137(iParam1);
			break;
		
		case 10:
			func_136(iParam1);
			break;
		
		case 1:
			func_135(iParam1);
			break;
		
		case 7:
			func_134(iParam1);
			break;
		
		case 11:
			func_133(iParam1);
			break;
		
		case 12:
			func_132(iParam1);
			break;
		
		case 13:
			func_131(iParam1);
			break;
		
		case 14:
			func_130(iParam1);
			break;
	}
}

void func_130(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 175, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_131(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_132(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 47, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_133(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_112(iVar10, iParam0, 63, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_134(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_135(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_136(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_137(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 12, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_138(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 77, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_139(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_140(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_112(iVar10, iParam0, 134, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_141(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_112(iVar10, iParam0, 117, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_142(int iParam0)
{
	if (iParam0 < 107)
	{
		func_145(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_144(iParam0);
	}
	else
	{
		func_143(iParam0);
	}
	if (Global_79322[0 /*14*/].f_2 == -1)
	{
		func_112(3, iParam0, 318, -1);
	}
}

void func_143(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_144(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_145(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_146(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 21, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_147(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_79322[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_112(iVar10, iParam0, 10, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_148(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_165(iParam1);
			break;
		
		case 2:
			func_164(iParam1);
			break;
		
		case 3:
			func_161(iParam1);
			break;
		
		case 4:
			func_160(iParam1);
			break;
		
		case 6:
			func_159(iParam1);
			break;
		
		case 5:
			func_158(iParam1);
			break;
		
		case 8:
			func_157(iParam1);
			break;
		
		case 9:
			func_156(iParam1);
			break;
		
		case 10:
			func_155(iParam1);
			break;
		
		case 1:
			func_154(iParam1);
			break;
		
		case 7:
			func_153(iParam1);
			break;
		
		case 11:
			func_152(iParam1);
			break;
		
		case 12:
			func_151(iParam1);
			break;
		
		case 13:
			func_150(iParam1);
			break;
		
		case 14:
			func_149(iParam1);
			break;
	}
}

void func_149(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_112(iVar10, iParam0, 113, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_150(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 10, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_151(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_152(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 45, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_153(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_154(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_155(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_112(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_156(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 20, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_157(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 24, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_158(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 14, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_159(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_112(iVar10, iParam0, 99, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_160(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 113, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_161(int iParam0)
{
	if (iParam0 < 60)
	{
		func_163(iParam0);
	}
	else
	{
		func_162(iParam0);
	}
	if (Global_79322[0 /*14*/].f_2 == -1)
	{
		func_112(3, iParam0, 181, -1);
	}
}

void func_162(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_163(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_164(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_165(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_79322[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_112(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_105(&(Global_79322[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_166()
{
	Global_79322[0 /*14*/].f_1 = -1;
	Global_79322[0 /*14*/].f_2 = -1;
	Global_79322[0 /*14*/].f_5 = -1;
	Global_79322[0 /*14*/].f_3 = -1;
	Global_79322[0 /*14*/].f_4 = -1;
	Global_79322[0 /*14*/].f_7 = 0;
	Global_79322[0 /*14*/].f_6 = 0;
	Global_79322[0 /*14*/].f_13 = -1;
	Global_79322[0 /*14*/].f_12 = 0;
	Global_79322[0 /*14*/] = 0;
	StringCopy(&(Global_79322[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_167(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar22;
	int iVar32;
	var uVar33;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_79322[1 /*14*/] = { func_102(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_79322[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_98(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_167(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_95(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_167(iParam0, 14, uVar22[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_79322[2 /*14*/] = { func_102(iVar0, 14, iVar4, -1) };
									if (Global_79322[2 /*14*/].f_12 == iVar3)
									{
										if (func_167(iParam0, 14, iVar4))
										{
											if (!func_56(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_79322[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_82(iParam0, iVar2);
						Global_79322[2 /*14*/] = { func_102(iVar0, iVar2, iVar1, -1) };
						if (!func_56(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_79322[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar33 = { func_95(iVar0, iParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_167(iParam0, 14, uVar33[iVar32]))
			{
				return 0;
			}
			iVar32++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_79322[1 /*14*/].f_12, 1) == Global_79322[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_79322[1 /*14*/].f_12) == Global_79322[1 /*14*/].f_4 || Global_79322[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_79322[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_94(iParam1)) && Global_79322[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_94(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_169(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_169(int iParam0)
{
	if (func_171(iParam0))
	{
		return func_170(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_170(int iParam0)
{
	return Global_2201[iParam0 /*29*/];
}

bool func_171(int iParam0)
{
	return iParam0 < 3;
}

void func_172(char* sParam0, var uParam1)
{
	STATS::STAT_SET_GXT_LABEL(joaat("sp_last_mission_name"), sParam0, true);
	if (BitTest(uParam1, 0))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp0_last_mission_name"), sParam0, true);
	}
	if (BitTest(uParam1, 1))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp1_last_mission_name"), sParam0, true);
	}
	if (BitTest(uParam1, 2))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp2_last_mission_name"), sParam0, true);
	}
}

int func_173()
{
	func_174();
	switch (Global_114135.f_2367.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_174()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_169(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_168(PLAYER::PLAYER_PED_ID());
			if (func_171(iVar0) && (!func_110(14) || Global_113083))
			{
				if (Global_114135.f_2367.f_539.f_4321 != iVar0 && func_171(Global_114135.f_2367.f_539.f_4321))
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

struct<2> func_175(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_176(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_176(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_177(int iParam0, int iParam1)
{
	Global_79808 = iParam1;
	if (Global_64302)
	{
		return;
	}
	if (Global_64329)
	{
		Global_64329 = 0;
		return;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_64302)
		{
		}
		Global_64328 = iParam0;
		Global_64302 = 1;
		Global_64313 = 1;
	}
}

void func_178(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, true);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	MISC::SET_TIME_SCALE(1f);
	func_191();
	func_190(1, 1);
	func_187();
	func_185();
	func_184(30000);
	if (iParam1 == 1)
	{
		func_179(iParam0, bParam2, bParam3);
	}
	HUD::SET_MISSION_NAME(false, 0);
}

void func_179(int iParam0, bool bParam1, bool bParam2)
{
	struct<4> Var0;
	char* sVar32;
	
	if (iParam0 != -1)
	{
		func_181(iParam0, &Var0);
		MemCopy(&sVar32, {func_176(iParam0)}, 4);
		STATS::PLAYSTATS_MISSION_CHECKPOINT(&sVar32, 0, Global_101725, 0);
		func_180(&sVar32, Var0.f_3, Global_101725, bParam1, bParam2);
	}
}

void func_180(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_98733))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_98733, false, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, bParam3, bParam4, Global_95840);
	StringCopy(&Global_98733, "", 64);
}

void func_181(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_182(uParam1, "Abigail1", func_175(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_183(iParam0), 1, 0);
			break;
		
		case 1:
			func_182(uParam1, "Abigail2", func_175(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_183(iParam0), 1, 0);
			break;
		
		case 2:
			func_182(uParam1, "Barry1", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_183(iParam0), 1, 0);
			break;
		
		case 3:
			func_182(uParam1, "Barry2", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_183(iParam0), 1, 1);
			break;
		
		case 4:
			func_182(uParam1, "Barry3", func_175(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 5:
			func_182(uParam1, "Barry3A", func_175(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 6:
			func_182(uParam1, "Barry3C", func_175(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 7:
			func_182(uParam1, "Barry4", func_175(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_183(iParam0), 0, 0);
			break;
		
		case 8:
			func_182(uParam1, "Dreyfuss1", func_175(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 9:
			func_182(uParam1, "Epsilon1", func_175(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 10:
			func_182(uParam1, "Epsilon2", func_175(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_183(iParam0), 1, 0);
			break;
		
		case 11:
			func_182(uParam1, "Epsilon3", func_175(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 12:
			func_182(uParam1, "Epsilon4", func_175(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 13:
			func_182(uParam1, "Epsilon5", func_175(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_183(iParam0), 1, 0);
			break;
		
		case 14:
			func_182(uParam1, "Epsilon6", func_175(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 15:
			func_182(uParam1, "Epsilon7", func_175(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 16:
			func_182(uParam1, "Epsilon8", func_175(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_183(iParam0), 1, 0);
			break;
		
		case 17:
			func_182(uParam1, "Extreme1", func_175(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 18:
			func_182(uParam1, "Extreme2", func_175(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 19:
			func_182(uParam1, "Extreme3", func_175(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 20:
			func_182(uParam1, "Extreme4", func_175(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 21:
			func_182(uParam1, "Fanatic1", func_175(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_183(iParam0), 1, 0);
			break;
		
		case 22:
			func_182(uParam1, "Fanatic2", func_175(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_183(iParam0), 1, 0);
			break;
		
		case 23:
			func_182(uParam1, "Fanatic3", func_175(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_183(iParam0), 0, 1);
			break;
		
		case 24:
			func_182(uParam1, "Hao1", func_175(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_183(iParam0), 0, 1);
			break;
		
		case 25:
			func_182(uParam1, "Hunting1", func_175(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 26:
			func_182(uParam1, "Hunting2", func_175(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 27:
			func_182(uParam1, "Josh1", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_183(iParam0), 1, 0);
			break;
		
		case 28:
			func_182(uParam1, "Josh2", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_183(iParam0), 1, 1);
			break;
		
		case 29:
			func_182(uParam1, "Josh3", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_183(iParam0), 1, 1);
			break;
		
		case 30:
			func_182(uParam1, "Josh4", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_183(iParam0), 1, 0);
			break;
		
		case 31:
			func_182(uParam1, "Maude1", func_175(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 32:
			func_182(uParam1, "Minute1", func_175(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 33:
			func_182(uParam1, "Minute2", func_175(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 34:
			func_182(uParam1, "Minute3", func_175(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 35:
			func_182(uParam1, "MrsPhilips1", func_175(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 36:
			func_182(uParam1, "MrsPhilips2", func_175(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 37:
			func_182(uParam1, "Nigel1", func_175(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_183(iParam0), 1, 0);
			break;
		
		case 38:
			func_182(uParam1, "Nigel1A", func_175(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_183(iParam0), 1, 1);
			break;
		
		case 39:
			func_182(uParam1, "Nigel1B", func_175(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_183(iParam0), 1, 1);
			break;
		
		case 40:
			func_182(uParam1, "Nigel1C", func_175(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_183(iParam0), 1, 1);
			break;
		
		case 41:
			func_182(uParam1, "Nigel1D", func_175(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_183(iParam0), 1, 1);
			break;
		
		case 42:
			func_182(uParam1, "Nigel2", func_175(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_183(iParam0), 1, 1);
			break;
		
		case 43:
			func_182(uParam1, "Nigel3", func_175(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_183(iParam0), 1, 1);
			break;
		
		case 44:
			func_182(uParam1, "Omega1", func_175(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 45:
			func_182(uParam1, "Omega2", func_175(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 46:
			func_182(uParam1, "Paparazzo1", func_175(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 47:
			func_182(uParam1, "Paparazzo2", func_175(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 48:
			func_182(uParam1, "Paparazzo3", func_175(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 49:
			func_182(uParam1, "Paparazzo3A", func_175(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 50:
			func_182(uParam1, "Paparazzo3B", func_175(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 51:
			func_182(uParam1, "Paparazzo4", func_175(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 52:
			func_182(uParam1, "Rampage1", func_175(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 54:
			func_182(uParam1, "Rampage3", func_175(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_183(iParam0), 1, 0);
			break;
		
		case 55:
			func_182(uParam1, "Rampage4", func_175(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_183(iParam0), 1, 0);
			break;
		
		case 56:
			func_182(uParam1, "Rampage5", func_175(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_183(iParam0), 0, 0);
			break;
		
		case 53:
			func_182(uParam1, "Rampage2", func_175(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_183(iParam0), 1, 0);
			break;
		
		case 57:
			func_182(uParam1, "TheLastOne", func_175(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 58:
			func_182(uParam1, "Tonya1", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 59:
			func_182(uParam1, "Tonya2", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 60:
			func_182(uParam1, "Tonya3", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 61:
			func_182(uParam1, "Tonya4", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		case 62:
			func_182(uParam1, "Tonya5", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_183(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_182(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_184(int iParam0)
{
	Global_44732 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_185()
{
	if (Global_98975)
	{
		func_174();
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_186(Global_114135.f_2367.f_539.f_4321));
	}
	else
	{
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
	}
}

char* func_186(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

void func_187()
{
	char cVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_189())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if ((MISC::IS_PS3_VERSION() || func_188()) || MISC::IS_PC_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

bool func_188()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_189()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_190(int iParam0, int iParam1)
{
	Global_98970 = iParam0;
	Global_98971 = iParam1;
}

void func_191()
{
	if (Global_79794 != 6)
	{
	}
	if (Global_79799)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_79799 = 0;
		Global_23970.f_9116 = 0;
	}
	Global_79794 = 6;
	Global_79796 = -1;
	Global_79795 = -1;
}

void func_192(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_44143)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_44142 = 0;
	Global_44144 = 0;
	Global_44181 = 15;
	Global_64305 = 0;
	Global_64306 = 0;
}

void func_193(int iParam0, bool bParam1)
{
	struct<26> Var0;
	int iVar32;
	bool bVar33;
	int iVar34;
	struct<6> Var35;
	int iVar67;
	int iVar68;
	struct<6> Var69;
	int iVar101;
	int iVar102;
	
	func_181(iParam0, &Var0);
	if (!MISC::ARE_STRINGS_EQUAL(&(Var0.f_16), ""))
	{
		while (!func_220(&(Var0.f_16)))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (Var0.f_22 != 0)
	{
		func_17(Var0.f_22, 0);
	}
	func_211(iParam0, Global_79810);
	if (!bParam1)
	{
		iVar32 = func_210(iParam0);
		if (iVar32 != 0)
		{
			if (!AUDIO::IS_MISSION_NEWS_STORY_UNLOCKED(iVar32))
			{
				AUDIO::UNLOCK_MISSION_NEWS_STORY(iVar32);
			}
		}
	}
	if (Var0.f_24 != -1)
	{
		bVar33 = true;
		if (Var0.f_5 != 4)
		{
			iVar34 = 0;
			while (iVar34 < 63)
			{
				iVar67 = iVar34;
				if (iVar67 != iParam0)
				{
					func_181(iVar67, &Var35);
					if (Var35.f_5 == Var0.f_5)
					{
						if (!BitTest(Global_114135.f_18578[iVar67 /*6*/], 3))
						{
							bVar33 = false;
						}
						if (!BitTest(Global_114135.f_18578[iVar67 /*6*/], 0))
						{
							func_198(iVar67);
						}
					}
				}
				iVar34++;
			}
		}
		if (bVar33)
		{
			func_198(Var0.f_24);
		}
	}
	else if (Var0.f_25 != 4)
	{
		iVar68 = 0;
		while (iVar68 < 63)
		{
			iVar101 = iVar68;
			if (iVar101 != iParam0)
			{
				func_181(iVar101, &Var69);
				if (Var69.f_5 == Var0.f_25)
				{
					func_198(iVar101);
				}
			}
			iVar68++;
		}
	}
	if (!BitTest(Global_114135.f_18578[iParam0 /*6*/], 3))
	{
		MISC::SET_BIT(&(Global_114135.f_18578[iParam0 /*6*/]), 3);
		Global_113222[iParam0 /*10*/].f_5 = 1;
		func_195(iParam0);
		iVar102 = func_194(iParam0);
		if (iVar102 != 322)
		{
			func_24(iVar102, 0, 0);
		}
	}
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 109;
			break;
		
		case 1:
			return 322;
			break;
		
		case 2:
			return 69;
			break;
		
		case 3:
			return 70;
			break;
		
		case 4:
			return 322;
			break;
		
		case 5:
			return 71;
			break;
		
		case 6:
			return 71;
			break;
		
		case 7:
			return 72;
			break;
		
		case 8:
			return 68;
			break;
		
		case 9:
			return 73;
			break;
		
		case 10:
			return 74;
			break;
		
		case 11:
			return 75;
			break;
		
		case 12:
			return 76;
			break;
		
		case 13:
			return 77;
			break;
		
		case 14:
			return 78;
			break;
		
		case 15:
			return 79;
			break;
		
		case 16:
			return 80;
			break;
		
		case 17:
			return 81;
			break;
		
		case 18:
			return 82;
			break;
		
		case 19:
			return 83;
			break;
		
		case 20:
			return 84;
			break;
		
		case 21:
			return 85;
			break;
		
		case 22:
			return 86;
			break;
		
		case 23:
			return 87;
			break;
		
		case 24:
			return 106;
			break;
		
		case 25:
			return 178;
			break;
		
		case 26:
			return 179;
			break;
		
		case 27:
			return 88;
			break;
		
		case 28:
			return 89;
			break;
		
		case 29:
			return 90;
			break;
		
		case 30:
			return 91;
			break;
		
		case 31:
			return 107;
			break;
		
		case 32:
			return 92;
			break;
		
		case 33:
			return 93;
			break;
		
		case 34:
			return 94;
			break;
		
		case 35:
			return 110;
			break;
		
		case 36:
			return 111;
			break;
		
		case 37:
			return 95;
			break;
		
		case 38:
			return 96;
			break;
		
		case 39:
			return 97;
			break;
		
		case 40:
			return 98;
			break;
		
		case 41:
			return 99;
			break;
		
		case 42:
			return 100;
			break;
		
		case 43:
			return 101;
			break;
		
		case 44:
			return 66;
			break;
		
		case 45:
			return 67;
			break;
		
		case 46:
			return 102;
			break;
		
		case 47:
			return 103;
			break;
		
		case 48:
			return 322;
			break;
		
		case 49:
			return 104;
			break;
		
		case 50:
			return 104;
			break;
		
		case 51:
			return 105;
			break;
		
		case 52:
			return 194;
			break;
		
		case 53:
			return 195;
			break;
		
		case 54:
			return 196;
			break;
		
		case 55:
			return 197;
			break;
		
		case 56:
			return 198;
			break;
		
		case 57:
			return 108;
			break;
		
		case 58:
			return 208;
			break;
		
		case 59:
			return 209;
			break;
		
		case 60:
			return 210;
			break;
		
		case 61:
			return 211;
			break;
		
		case 62:
			return 212;
			break;
	}
	return 322;
}

void func_195(int iParam0)
{
	func_197(iParam0, 1);
	Global_114135.f_18578[iParam0 /*6*/].f_3 = func_196();
	Global_114135.f_18578.f_380++;
}

int func_196()
{
	return (Global_114135.f_10020.f_21 + Global_114135.f_18578.f_380);
}

void func_197(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 55;
	if (bParam1)
	{
		iVar1 = uParam0;
		if (iVar1 == 46)
		{
			iVar0 = 35;
		}
		else if (iVar1 == 49)
		{
			iVar0 = 36;
		}
		else if (iVar1 == 50)
		{
			iVar0 = 37;
		}
		else if (iVar1 == 8)
		{
			iVar0 = 38;
		}
		else if (iVar1 == 16)
		{
			iVar0 = 39;
		}
		else if (iVar1 == 38)
		{
			iVar0 = 40;
		}
		else if (iVar1 == 39)
		{
			iVar0 = 41;
		}
		else if (iVar1 == 40)
		{
			iVar0 = 42;
		}
		else if (iVar1 == 41)
		{
			iVar0 = 43;
		}
		else if (iVar1 == 42)
		{
			iVar0 = 44;
		}
		else if (iVar1 == 43)
		{
			iVar0 = 45;
		}
		else if (iVar1 == 20)
		{
			iVar0 = 46;
		}
	}
	else
	{
		iVar2 = uParam0;
		if (iVar2 == 53)
		{
			iVar0 = 0;
		}
		else if (iVar2 == 1)
		{
			iVar0 = 1;
		}
		else if (iVar2 == 2)
		{
			iVar0 = 2;
		}
		else if (iVar2 == 17)
		{
			iVar0 = 3;
		}
		else if (iVar2 == 19)
		{
			iVar0 = 4;
		}
		else if (iVar2 == 43)
		{
			iVar0 = 5;
		}
		else if (iVar2 == 44)
		{
			iVar0 = 6;
		}
		else if (iVar2 == 63)
		{
			iVar0 = 8;
		}
		else if (iVar2 == 12)
		{
			iVar0 = 9;
		}
		else if (iVar2 == 13)
		{
			iVar0 = 10;
		}
		else if (iVar2 == 64)
		{
			iVar0 = 11;
		}
		else if (iVar2 == 20)
		{
			iVar0 = 12;
		}
		else if (iVar2 == 30)
		{
			iVar0 = 13;
		}
		else if (iVar2 == 31)
		{
			iVar0 = 14;
		}
		else if (iVar2 == 41)
		{
			iVar0 = 15;
		}
		else if (iVar2 == 38)
		{
			iVar0 = 16;
		}
		else if (iVar2 == 9)
		{
			iVar0 = 18;
		}
		else if (iVar2 == 59)
		{
			iVar0 = 19;
		}
		else if (iVar2 == 45)
		{
			iVar0 = 20;
		}
		else if (iVar2 == 10)
		{
			iVar0 = 21;
		}
		else if (iVar2 == 14)
		{
			iVar0 = 22;
		}
		else if (iVar2 == 16)
		{
			iVar0 = 24;
		}
		else if (iVar2 == 39)
		{
			iVar0 = 25;
		}
		else if (iVar2 == 46)
		{
			iVar0 = 26;
		}
		else if (iVar2 == 60)
		{
			iVar0 = 27;
		}
		else if (iVar2 == 22)
		{
			iVar0 = 28;
		}
		else if (iVar2 == 48)
		{
			iVar0 = 30;
		}
		else if (iVar2 == 61)
		{
			iVar0 = 31;
		}
		else if (iVar2 == 49)
		{
			iVar0 = 32;
		}
		else if (iVar2 == 27)
		{
			iVar0 = 34;
		}
		else if (iVar2 == 3)
		{
			iVar0 = 47;
		}
		else if (iVar2 == 4)
		{
			iVar0 = 48;
		}
		else if (iVar2 == 5)
		{
			iVar0 = 49;
		}
		else if (iVar2 == 6)
		{
			iVar0 = 50;
		}
		else if (iVar2 == 7)
		{
			iVar0 = 51;
		}
		else if (iVar2 == 58)
		{
			iVar0 = 53;
		}
		else if (iVar2 == 90)
		{
			iVar0 = 7;
		}
		else if (iVar2 == 74 || iVar2 == 75)
		{
			iVar0 = 17;
		}
		else if (iVar2 == 93)
		{
			iVar0 = 23;
		}
		else if (iVar2 == 69 || iVar2 == 70)
		{
			iVar0 = 29;
		}
		else if (iVar2 == 84 || iVar2 == 85)
		{
			iVar0 = 33;
		}
	}
	if (iVar0 != 55)
	{
		Global_114135.f_20568.f_472 = iVar0;
	}
}

void func_198(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return;
	}
	func_199(iParam0);
	MISC::SET_BIT(&(Global_114135.f_18578[iParam0 /*6*/]), 0);
}

void func_199(int iParam0)
{
	switch (iParam0)
	{
		case 30:
			func_203(22, 1, 0, 1, 0);
			break;
		
		case 15:
			func_200(37, 0);
			break;
		
		default:
			break;
	}
}

void func_200(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_202(iParam0, 0))
		{
			func_201(iParam0, 1, 0);
			func_201(iParam0, 2, 0);
			func_201(iParam0, 3, 0);
			func_201(iParam0, 4, 0);
			func_201(iParam0, 0, 1);
			Global_78329[iParam0] = 1;
		}
	}
	else
	{
		func_201(iParam0, 0, 0);
	}
}

void func_201(int iParam0, int iParam1, bool bParam2)
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

int func_202(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_114135.f_32754[iParam0], iParam1);
}

void func_203(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_79539)
		{
			Global_43715.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_114135.f_7265.f_227[iParam0] = iParam1;
		}
		Global_40721[iParam0] = iParam2;
		Global_40920[iParam0] = 1;
		func_206(iParam0, bParam3, iParam4, 0);
		func_204(iParam0, iParam1);
	}
}

void func_204(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", false, false);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", true, false);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", false, false);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", true, false);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_205(0, 0);
			}
			else
			{
				func_205(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", true, false);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", false, false);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", false);
			}
			break;
	}
}

void func_205(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_112770, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_112770, iParam0);
	}
	Global_112769 = 1;
}

bool func_206(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	int iVar98;
	bool bVar99;
	int iVar100;
	
	Global_1919394 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_209(&Var3, iParam0);
	if (func_207())
	{
		iVar1 = Global_114135.f_7265.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_43715.f_227[iParam0];
	}
	iVar2 = Global_41119[iParam0];
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3)
	{
		Global_1919394 = 1;
	}
	else
	{
		bVar99 = true;
		if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_40721[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3, true) < 200f)
				{
					bVar99 = false;
					Global_1919394 = 1;
				}
				if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						bVar99 = false;
						Global_1919394 = 1;
					}
				}
			}
		}
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() != 5))
		{
			bVar99 = false;
			Global_1919394 = 1;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], true);
						}
						Global_42315[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
								Global_1919394 = 1;
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
								Global_1919394 = 1;
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[0 /*8*/]));
								Global_1919394 = 1;
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_34));
								Global_1919394 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_42116[iParam0] = 1;
					Global_42315[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_50)) != MISC::GET_HASH_KEY(""))
						{
							if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_50)))
							{
								INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							INTERIOR::REFRESH_INTERIOR(iVar100);
						}
					}
					Global_42315[iParam0] = 1;
					Global_42116[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 250f)
					{
						iVar98 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iVar98))
						{
							if (iVar1 == 0)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98, 3);
								Global_42315[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) != 6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) != 7) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) != 8)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98, 10);
									Global_42315[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], false);
						MISC::CLEAR_BIT(&(Global_40467[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], true);
						MISC::SET_BIT(&(Global_40467[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_40920[iParam0] = 0;
				Global_41119[iParam0] = iVar1;
				if (!func_207())
				{
					if (!Global_41716[iParam0])
					{
						Global_41716[iParam0] = 1;
						Global_41915++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_207()
{
	if ((func_26() == -1 || func_26() == 999) && !func_208() == 0)
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	return Global_33088;
}

int func_209(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 46:
			return 42;
			break;
		
		case 47:
			return 43;
			break;
		
		case 49:
			return 44;
			break;
		
		case 50:
			return 45;
			break;
		
		case 8:
			if (BitTest(Global_114135.f_18578.f_382, 0))
			{
				return 46;
			}
			break;
		
		case 16:
			return 47;
			break;
		
		case 38:
			return 48;
			break;
		
		case 39:
			return 49;
			break;
		
		case 40:
			return 50;
			break;
		
		case 41:
			return 51;
			break;
		
		case 42:
			return 52;
			break;
		
		case 43:
			if (Global_114135.f_9089.f_99.f_58[101])
			{
				return 53;
			}
			else
			{
				return 54;
			}
			break;
		
		case 20:
			return 55;
			break;
	}
	return 0;
}

void func_211(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 46:
			func_212(4, bParam1);
			break;
		
		case 16:
			func_212(6, bParam1);
			break;
		
		case 37:
			func_212(17, bParam1);
			break;
		
		case 31:
			func_212(16, bParam1);
			break;
	}
}

void func_212(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_219(iParam0))
		{
			MISC::SET_BIT(&(Global_114135.f_26438), iVar0);
			if (!bParam1)
			{
				func_217(func_218(iParam0));
				if (!func_216(68))
				{
					func_213("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

void func_213(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_214(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_214(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_215();
	}
}

void func_215()
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

int func_216(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_114135.f_20414.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_217(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
	HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL("CHAR_ACTING_UP", "CHAR_ACTING_UP", false, 0, "DI_FEED_CHAR", sParam0);
}

char* func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_STOMIC";
			break;
		
		case 1:
			return "CM_STOFRA";
			break;
		
		case 2:
			return "CM_STOTRE";
			break;
		
		case 3:
			return "CM_STOAMA";
			break;
		
		case 4:
			return "CM_STOBEV";
			break;
		
		case 5:
			return "CM_STOBRA";
			break;
		
		case 6:
			return "CM_STOCHR";
			break;
		
		case 7:
			return "CM_STODAV";
			break;
		
		case 8:
			return "CM_STODEV";
			break;
		
		case 9:
			return "CM_STODRF";
			break;
		
		case 10:
			return "CM_STOFAB";
			break;
		
		case 11:
			return "CM_STOFLO";
			break;
		
		case 12:
			return "CM_STOJIM";
			break;
		
		case 13:
			return "CM_STOLAM";
			break;
		
		case 14:
			return "CM_STOLAZ";
			break;
		
		case 15:
			return "CM_STOLES";
			break;
		
		case 16:
			return "CM_STOMAU";
			break;
		
		case 17:
			return "CM_STOTHO";
			break;
		
		case 18:
			return "CM_STONER";
			break;
		
		case 19:
			return "CM_STOPAT";
			break;
		
		case 20:
			return "CM_STOSIM";
			break;
		
		case 21:
			return "CM_STOSOL";
			break;
		
		case 22:
			return "CM_STOSTE";
			break;
		
		case 23:
			return "CM_STOSTR";
			break;
		
		case 24:
			return "CM_STOTAN";
			break;
		
		case 25:
			return "CM_STOTAO";
			break;
		
		case 26:
			return "CM_STOTRA";
			break;
		
		case 27:
			return "CM_STOWAD";
			break;
	}
	return "ERROR!";
}

int func_219(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 28)
	{
		return BitTest(Global_114135.f_26438, iParam0);
	}
	return 0;
}

int func_220(char* sParam0)
{
	int iVar0;
	
	iVar0 = 1424;
	if (!SCRIPT::DOES_SCRIPT_EXIST(sParam0))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "controller_Races"))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("controller_races")) > 0)
		{
			return 1;
		}
		iVar0 = 128;
	}
	SCRIPT::REQUEST_SCRIPT(sParam0);
	if (SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::START_NEW_SCRIPT(sParam0, iVar0);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
		return 1;
	}
	return 0;
}

int func_221()
{
	return func_222(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_222(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = MISC::GET_HASH_KEY(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_181(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_223(bool bParam0)
{
	if (bParam0)
	{
		func_230();
		if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8920, 16);
		}
		Global_21066.f_1 = 1;
		if (func_229(0))
		{
			func_224(0);
		}
	}
	else if (Global_21066.f_1 == 1)
	{
		if (!Global_21066.f_1 == 0)
		{
			Global_21066.f_1 = 3;
		}
	}
}

void func_224(int iParam0)
{
	if (func_228())
	{
		return;
	}
	if (Global_21284)
	{
		if (func_227())
		{
			func_226(1, 1);
		}
		else
		{
			func_226(0, 0);
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
	if (!func_225())
	{
		Global_21066.f_1 = 3;
	}
}

int func_225()
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_226(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_229(0))
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

bool func_227()
{
	return BitTest(Global_1957675, 5);
}

bool func_228()
{
	return BitTest(Global_1957675, 19);
}

int func_229(int iParam0)
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

void func_230()
{
	if (Global_21066.f_1 == 9 || Global_21066.f_1 == 10)
	{
		Global_22478 = 0;
		Global_22474 = 1;
	}
}

void func_231()
{
	AUDIO::STOP_SOUND(Local_623.f_2);
	AUDIO::STOP_SOUND(Local_623.f_3);
	AUDIO::STOP_SOUND(Local_623.f_4);
	AUDIO::STOP_SOUND(Local_623.f_5);
	Local_623.f_6 = 0;
	Local_623.f_7 = 0;
}

void func_232(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_64309 = 0;
	if (!Global_64533[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_76403)
	{
		if (Global_76404[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_76404[iVar1 /*9*/].f_1 = 1;
			Global_76404[iVar1 /*9*/].f_2 = 0f;
			if (Global_76404[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_233()
{
	switch (Local_770.f_1)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("weapons@holster_1h");
			while (func_353(PLAYER::PLAYER_PED_ID()) == iLocal_157)
			{
				SYSTEM::WAIT(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				if (STREAMING::HAS_ANIM_DICT_LOADED("weapons@holster_1h"))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster", 3))
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0f, false, false, false);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster") >= 0.5f)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
					}
				}
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), iLocal_157);
			Local_770.f_1 = 1;
			break;
		
		case 1:
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				func_243(6);
				Local_770.f_9 = 1;
				Local_770.f_1 = 3;
			}
			else if (ENTITY::IS_ENTITY_DEAD(Local_604[0 /*8*/], false))
			{
				func_243(6);
				Local_770.f_9 = 2;
				Local_770.f_1 = 3;
			}
			else if (ENTITY::IS_ENTITY_DEAD(Local_604[1 /*8*/], false))
			{
				func_243(6);
				Local_770.f_9 = 3;
				Local_770.f_1 = 3;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_604[0 /*8*/], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_604[0 /*8*/], 0, 2))
			{
				func_243(6);
				Local_770.f_9 = 4;
				Local_770.f_1 = 3;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_604[1 /*8*/], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_604[1 /*8*/], 0, 2))
			{
				func_243(6);
				Local_770.f_9 = 5;
				Local_770.f_1 = 3;
			}
			else if (func_236(&(Local_604[0 /*8*/])))
			{
				func_243(6);
				Local_770.f_9 = 6;
				Local_770.f_1 = 3;
			}
			else if (func_236(&(Local_604[1 /*8*/])))
			{
				func_243(6);
				Local_770.f_9 = 7;
				Local_770.f_1 = 3;
			}
			else if (func_235(Local_604[0 /*8*/]))
			{
				if (func_234(PLAYER::PLAYER_PED_ID(), Local_604[0 /*8*/], 1) >= 50f)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					func_243(5);
					Local_770.f_1 = 3;
				}
			}
			break;
		
		case 3:
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			func_379();
			break;
	}
}

float func_234(int iParam0, int iParam1, bool bParam2)
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

int func_235(int iParam0)
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

int func_236(var uParam0)
{
	if (func_237(*uParam0, 1090519040, 1097859072))
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0, float fParam1, float fParam2)
{
	if (func_235(iParam0))
	{
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam1, false))
		{
			return 1;
		}
		if (func_238(iParam0, fParam2, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_238(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_grenade"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_molotov"), fParam1, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_smokegrenade"), fParam1, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_stickybomb"), 5f, true))
		{
			if (bParam3)
			{
				if (func_239(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_239(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (MISC::IS_PROJECTILE_IN_AREA(Var0, Var3, true))
		{
			return 1;
		}
	}
	return 0;
}

int func_239(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, false))
	{
		if (func_240(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_240(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_242(Param1 - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_242(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_241(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_241(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_242(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_243(int iParam0)
{
	Local_770.f_8 = iParam0;
}

void func_244()
{
	int iVar0;
	
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	if (Local_770.f_3 == 1)
	{
		func_308(1, 1);
		CUTSCENE::REMOVE_CUTSCENE();
		if (iLocal_351 == 0)
		{
			func_307("EPS_4_MCS_1");
		}
		else if (iLocal_351 == 1)
		{
			func_307("EPS_4_MCS_2");
		}
		else
		{
			func_307("EPS_4_MCS_3");
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			func_409("Trying to set player component variation");
			if (func_235(PLAYER::PLAYER_PED_ID()))
			{
				func_300("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			}
			if (iLocal_351 == 0 || iLocal_351 == 2)
			{
				func_409("Trying to set Jimmy prop variation");
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
			}
		}
		func_409("SKIP: Doing sync for cutscene skip");
		func_299(1, 1, 1);
		Local_770.f_3 = 0;
	}
	if (Local_770.f_1 == 0)
	{
		func_298("Doing setup for RockScene:", iLocal_351);
		func_296(1);
		func_295();
		PAD::SET_CONTROL_SHAKE(0, 200, 150);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			func_409("Trying to set player component variation");
			if (func_235(PLAYER::PLAYER_PED_ID()))
			{
				func_300("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			}
			if (iLocal_351 == 0 || iLocal_351 == 2)
			{
				func_409("Trying to set Jimmy prop variation");
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
			}
		}
		if (!func_294(iLocal_360))
		{
			iLocal_360 = VEHICLE::CREATE_VEHICLE(joaat("bison"), 1851.57f, 4772.12f, 39.8f, 31.35f, true, true, false);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_360, 157, 157);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_360, 5, 157);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_360, 5f);
		}
		func_293(&(Local_604[1 /*8*/]), 1);
		func_293(&(Local_604[0 /*8*/]), 1);
		if (func_354(PLAYER::PLAYER_PED_ID()))
		{
			while (!func_283(1, 1093140480, 0))
			{
				func_409("Waiting for cutscene to be OK to start...");
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				func_296(1);
				func_295();
				PAD::SET_CONTROL_SHAKE(0, 200, 150);
				if (iLocal_351 == 0)
				{
					func_307("EPS_4_MCS_1");
				}
				else if (iLocal_351 == 1)
				{
					func_307("EPS_4_MCS_2");
				}
				else
				{
					func_307("EPS_4_MCS_3");
				}
				SYSTEM::WAIT(0);
			}
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
			iVar0 = MISC::GET_GAME_TIMER();
			while ((MISC::GET_GAME_TIMER() - iVar0) < 500)
			{
				func_409("Doing 500ms pause");
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
				func_296(1);
				func_295();
				PAD::SET_CONTROL_SHAKE(0, 200, 150);
				SYSTEM::WAIT(0);
			}
			if (iLocal_351 == 0)
			{
				if (func_235(Local_604[1 /*8*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_604[1 /*8*/], "Jimmy_Boston", 0, 0, 0);
				}
				if (func_235(Local_604[0 /*8*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_604[0 /*8*/], "Marnie", 0, 0, 0);
				}
				if (func_235(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				if (func_235(Local_623.f_0))
				{
					iLocal_639 = func_276(PLAYER::PLAYER_PED_ID(), joaat("weapon_digiscanner"), 1, 0, 0, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_639, "Artefact_Detector", 0, 0, 0);
				}
				if (func_235(Local_361[iLocal_351 /*43*/].f_1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_361[iLocal_351 /*43*/].f_1, "EPS_TV", 0, 0, 0);
				}
			}
			else if (iLocal_351 == 1)
			{
				if (func_235(Local_604[0 /*8*/]))
				{
					Local_604[0 /*8*/].f_7 = 0;
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_604[0 /*8*/], "Marnie", 0, 0, 0);
				}
				if (func_235(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				if (func_235(Local_623.f_0))
				{
					iLocal_639 = func_276(PLAYER::PLAYER_PED_ID(), joaat("weapon_digiscanner"), 1, 0, 0, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_639, "Artefact_Detector", 0, 0, 0);
				}
				if (func_235(Local_361[iLocal_351 /*43*/].f_1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_361[iLocal_351 /*43*/].f_1, "EPS_Battery", 0, 0, 0);
				}
			}
			else
			{
				if (func_235(Local_604[1 /*8*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_604[1 /*8*/], "Jimmy_Boston", 0, 0, 0);
				}
				if (func_235(Local_604[0 /*8*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_604[0 /*8*/], "Marnie", 0, 0, 0);
				}
				if (func_235(Local_623.f_0))
				{
					iLocal_639 = func_276(PLAYER::PLAYER_PED_ID(), joaat("weapon_digiscanner"), 1, 0, 0, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_639, "Artefact_Detector", 0, 0, 0);
				}
				if (func_235(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				if (func_235(Local_361[iLocal_351 /*43*/].f_1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_361[iLocal_351 /*43*/].f_1, "Old_Boot", 0, 0, 0);
				}
			}
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::REPLAY_START_EVENT(1);
			iVar0 = MISC::GET_GAME_TIMER();
			while ((MISC::GET_GAME_TIMER() - iVar0) < 1)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				SYSTEM::WAIT(0);
				RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_Epsilon4", 0);
			}
			if (iLocal_351 >= 2)
			{
				if (func_235(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), -1, true, true);
				}
			}
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
			func_267(Local_361[iLocal_351 /*43*/].f_25, Local_361[iLocal_351 /*43*/].f_28, Local_361[iLocal_351 /*43*/].f_31, Local_361[iLocal_351 /*43*/].f_32, Local_361[iLocal_351 /*43*/].f_35, func_275(), 1, 1, 1, 0, 0);
			func_262(Local_361[iLocal_351 /*43*/].f_2, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1);
		}
		func_298("Finished setup, moving to run loop for RockScene #:", iLocal_351);
		Local_770.f_1 = 1;
	}
	if (Local_770.f_1 == 1)
	{
		if (func_261())
		{
		}
		else if (Local_770.f_6)
		{
			Local_770.f_1 = 3;
		}
		else if (Local_770.f_4)
		{
			if (iLocal_351 < (iLocal_534 - 1))
			{
				func_243(2);
			}
			else
			{
				func_243(5);
			}
			Local_770.f_1 = 3;
			iLocal_351++;
		}
		else if (Local_770.f_5)
		{
			func_243(2);
			Local_770.f_1 = 3;
		}
		else
		{
			if (iLocal_351 >= 2)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 17000)
					{
						if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_START(1847.472f, 4756.157f, 36.6968f, func_260(271.4718f), 145f, 0);
						}
					}
				}
			}
			if (Local_770.f_2 == 0)
			{
				func_295();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					Local_770.f_2 = 1;
				}
				func_259();
				if (iLocal_351 >= 2)
				{
					func_258();
					func_257();
				}
				else if (iLocal_351 == 1)
				{
					if (func_256())
					{
						Local_770.f_2 = 1;
					}
					func_258();
				}
				else
				{
					if (func_256())
					{
						Local_770.f_2 = 1;
					}
					func_258();
					func_257();
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					Local_770.f_2 = -1;
					func_409("Cutscene not active, setting event -1");
				}
			}
			if (Local_770.f_2 == 1)
			{
				func_255();
				func_256();
				func_259();
				if (iLocal_351 >= 2)
				{
					func_258();
					func_257();
				}
				else if (iLocal_351 == 1)
				{
					func_258();
				}
				else
				{
					func_258();
					func_257();
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					Local_770.f_2 = -1;
					func_409("Cutscene not active, setting event -1");
				}
			}
			if (Local_770.f_2 == -1)
			{
				func_409("Doing event -1...");
				if (iLocal_351 < (iLocal_534 - 1))
				{
					func_243(2);
				}
				else
				{
					func_243(4);
				}
				if (iLocal_351 >= 2)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("EPS4_STOP");
					func_5(&(Local_361[iLocal_351 /*43*/].f_1));
				}
				Local_770.f_1 = 3;
				iLocal_351++;
				func_298("END CUTSCENE: iCurrentRock = ", iLocal_351);
			}
		}
	}
	if (Local_770.f_1 == 3)
	{
		RECORDING::REPLAY_STOP_EVENT();
		func_409("Doing cleanup for RockScene");
		func_245(1, 0, 1, 1);
		func_379();
	}
}

void func_245(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, false);
	PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
	func_246(0, 1, 0, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	HUD::CLEAR_HELP(true);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_34 != 0 && iLocal_34 != joaat("object")) && iLocal_34 != joaat("gadget_parachute"))
		{
			if (func_235(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_34, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_34, false);
				}
			}
		}
	}
	if (func_354(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
	}
}

void func_246(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_254(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_21066.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_225())
			{
				Global_21066.f_1 = 3;
			}
			Global_22425 = 5;
		}
		func_253(1, bParam3, iParam2, 0);
		Global_64314 = 1;
		Global_76643 = 1;
		Global_79537 = 1;
	}
	else
	{
		func_254(0);
		HUD::THEFEED_RESUME();
		Global_64314 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_253(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_251(PLAYER::PLAYER_ID())) && !func_248(PLAYER::PLAYER_ID(), 0)) && !func_247()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_251(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		Global_79537 = 0;
	}
}

bool func_247()
{
	return BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_36.f_18, 14);
}

bool func_248(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_250(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_249(-1, 0) == 8;
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

int func_249(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_28();
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

int func_250(var uParam0)
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

int func_251(int iParam0)
{
	if (func_248(iParam0, 0))
	{
		return 1;
	}
	if (func_252())
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

bool func_252()
{
	return BitTest(Global_2621446, 3);
}

int func_253(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && uParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_254(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8919, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8919, 13);
	}
}

void func_255()
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_163, "SET_COLOUR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_163, "SET_DISTANCE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	HUD::SET_TEXT_RENDER_ID(iLocal_164);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_163, 0.1f, 0.24f, 0.21f, 0.51f, 100, 100, 100, 255, 0);
}

int func_256()
{
	if (func_235(PLAYER::PLAYER_PED_ID()))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
		{
			if (iLocal_351 >= 2)
			{
				func_409("*** Forcing Michael's move state (end cutscene)");
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 1, false);
				return 1;
			}
			else
			{
				func_409("*** Forcing Michael's move state");
				if (func_353(PLAYER::PLAYER_PED_ID()) != iLocal_157)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_157, -1, true, true);
				}
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 1, false);
				return 1;
			}
		}
	}
	return 0;
}

void func_257()
{
	if (func_235(Local_604[1 /*8*/]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy_Boston", 0))
		{
			if (iLocal_351 >= 2)
			{
				if (func_235(Local_81.f_28[1]) && func_294(iLocal_360))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_780);
					TASK::TASK_WARP_PED_INTO_VEHICLE(0, iLocal_360, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_780);
					TASK::TASK_PERFORM_SEQUENCE(Local_81.f_28[1], iLocal_780);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_780);
					func_409("Did Jimmy pass exit");
				}
			}
			else
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_81.f_28[1], 1764.089f, 4665.879f, 42.3031f, 1f, 20000, 40000f, 0.5f);
				func_409("Did Jimmy regular exit");
			}
			PED::FORCE_PED_MOTION_STATE(Local_604[1 /*8*/], joaat("MotionState_Walk"), false, 1, false);
		}
	}
}

void func_258()
{
	if (func_235(Local_604[0 /*8*/]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Marnie", 0))
		{
			if (iLocal_351 >= 2)
			{
				if (func_235(Local_81.f_28[0]) && func_294(iLocal_360))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_780);
					TASK::TASK_WARP_PED_INTO_VEHICLE(0, iLocal_360, -1);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_360, 1743.33f, 4962.18f, 45.16f, 20f, 0, joaat("bison"), 786599, 5f, -1f);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_360, 30f, 262275);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_780);
					TASK::TASK_PERFORM_SEQUENCE(Local_81.f_28[0], iLocal_780);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_780);
					func_409("Did Marnie pass exit");
				}
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_81.f_28[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_81.f_28[0], 0f, 7f, 0f), 1f, 20000, 0.25f, 5, 40000f);
				func_409("Did Marnie regular exit");
			}
			PED::FORCE_PED_MOTION_STATE(Local_604[0 /*8*/], joaat("MotionState_Walk"), false, 1, false);
		}
	}
}

void func_259()
{
	if (func_235(iLocal_639))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Artefact_Detector", 0))
		{
			if (iLocal_351 < 2)
			{
				func_409("*** Detector exit");
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_639, PLAYER::PLAYER_PED_ID());
				func_5(&iLocal_639);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_623.f_0))
				{
					func_409("*** Recreating gDetector.hObj after cutscene...");
					Local_623.f_0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID(), 1);
				}
			}
			else
			{
				func_409("*** Detector exit (end cutscene)");
				func_5(&iLocal_639);
			}
		}
	}
}

Vector3 func_260(float fParam0)
{
	return -SYSTEM::SIN(fParam0), SYSTEM::COS(fParam0), 0f;
}

int func_261()
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_243(6);
		Local_770.f_9 = 1;
		Local_770.f_1 = 3;
		return 1;
	}
	else if (ENTITY::IS_ENTITY_DEAD(Local_604[0 /*8*/], false))
	{
		if (iLocal_351 < 2)
		{
			func_243(6);
			Local_770.f_9 = 2;
			Local_770.f_1 = 3;
			func_409("Mission failed: Marnie dead");
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(Local_604[1 /*8*/], false))
	{
		if (iLocal_351 < 2)
		{
			func_243(6);
			Local_770.f_9 = 3;
			Local_770.f_1 = 3;
			func_409("Mission failed: Jimmy dead");
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_604[0 /*8*/], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_604[0 /*8*/], 0, 2))
	{
		func_243(6);
		Local_770.f_9 = 4;
		Local_770.f_1 = 3;
		func_409("Mission failed: Marnie injured");
		return 1;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_604[1 /*8*/], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_604[1 /*8*/], 0, 2))
	{
		func_243(6);
		Local_770.f_9 = 5;
		Local_770.f_1 = 3;
		func_409("Mission failed: Jimmy injured");
		return 1;
	}
	return 0;
}

void func_262(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		func_266(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam8)
		{
			switch (func_265())
			{
				case 0:
					if (func_167(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_52(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_167(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_52(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 1:
					if (func_167(PLAYER::PLAYER_PED_ID(), 8, 1) || func_167(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_52(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 2:
					if (func_167(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_52(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(func_264(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam10)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, false);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, true);
		if (bParam12)
		{
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
		}
		HUD::CLEAR_PRINTS();
		if (iParam11 == 1)
		{
			HUD::CLEAR_HELP(true);
		}
		if (iParam3 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_34 = 0;
			if (func_235(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_34 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
			}
		}
		if (iParam5 == 1)
		{
			func_263(500, 0);
		}
	}
}

void func_263(int iParam0, bool bParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

Vector3 func_264(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_265()
{
	func_174();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_266(bool bParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		if (bParam0)
		{
		}
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 16);
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 32);
	}
	func_246(1, 1, 0, 0, 0, 0, 0);
}

void func_267(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	func_268(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_268(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (bParam18)
			{
				func_274(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param3, fParam6, false, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_272(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param3 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_270(iVar0, func_265(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_269(Param11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::GET_VEHICLE_SIZE(iVar0, &Var4, &Var7);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param7, 5f, false, false, false, false, false, false, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam10);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param7, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, true), true, false, false, true);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param3, fParam6, false, false, false, false, false, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			}
			iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
			{
				ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
			}
			iVar15 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
				}
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

int func_269(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_270(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_271(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_114135.f_7233[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_271(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_272(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_242(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_273(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_273(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_273(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_273(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_273(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_273(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_273(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_273(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_273(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_273(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_273(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_273(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_273(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_273(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_273(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_273(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_273(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

void func_274(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 200f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 700f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
			}
			if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 200)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
		}
	}
}

Vector3 func_275()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_276(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar2 = iParam1;
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, false))
	{
		bVar0 = true;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar3 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				WEAPON::GET_MAX_AMMO(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { iParam4, iParam5, iParam6 };
	}
	while (func_280(iVar2, iVar8) != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, func_280(iVar2, iVar8)))
			{
				if (func_279(func_280(iVar2, iVar8)))
				{
					iVar9 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(func_280(iVar2, iVar8));
				}
			}
		}
		iVar8++;
	}
	iVar1 = WEAPON::CREATE_WEAPON_OBJECT(iVar2, iVar3, Var5, bVar0, 1f, iVar9, iParam7, iParam8);
	while (func_280(iVar2, iVar10) != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, func_280(iVar2, iVar10)))
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iVar1, func_280(iVar2, iVar10));
				func_277(iVar1, func_280(iVar2, iVar10));
			}
		}
		iVar10++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar2, false))
		{
			WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(iVar1, WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, iVar2));
		}
	}
	return iVar1;
}

void func_277(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_278(iParam1);
	if (iVar0 != 0)
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iParam0, iVar0);
	}
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo"):
			return joaat("component_pistol_mk2_camo_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_02"):
			return joaat("component_pistol_mk2_camo_02_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_03"):
			return joaat("component_pistol_mk2_camo_03_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_04"):
			return joaat("component_pistol_mk2_camo_04_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_05"):
			return joaat("component_pistol_mk2_camo_05_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_06"):
			return joaat("component_pistol_mk2_camo_06_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_07"):
			return joaat("component_pistol_mk2_camo_07_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_08"):
			return joaat("component_pistol_mk2_camo_08_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_09"):
			return joaat("component_pistol_mk2_camo_09_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_10"):
			return joaat("component_pistol_mk2_camo_10_slide");
			break;
		
		case joaat("component_pistol_mk2_camo_ind_01"):
			return joaat("component_pistol_mk2_camo_ind_01_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo"):
			return joaat("component_snspistol_mk2_camo_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_02"):
			return joaat("component_snspistol_mk2_camo_02_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_03"):
			return joaat("component_snspistol_mk2_camo_03_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_04"):
			return joaat("component_snspistol_mk2_camo_04_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_05"):
			return joaat("component_snspistol_mk2_camo_05_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_06"):
			return joaat("component_snspistol_mk2_camo_06_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_07"):
			return joaat("component_snspistol_mk2_camo_07_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_08"):
			return joaat("component_snspistol_mk2_camo_08_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_09"):
			return joaat("component_snspistol_mk2_camo_09_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_10"):
			return joaat("component_snspistol_mk2_camo_10_slide");
			break;
		
		case joaat("component_snspistol_mk2_camo_ind_01"):
			return joaat("component_snspistol_mk2_camo_ind_01_slide");
			break;
		
		case joaat("component_pistol_mk2_varmod_xm3"):
			return joaat("component_pistol_mk2_varmod_xm3_slide");
			break;
	}
	return 0;
}

int func_279(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == joaat("component_gunrun_mk2_upgrade")) || iParam0 == joaat("component_appistol_varmod_security")) || iParam0 == joaat("component_pumpshotgun_varmod_security")) || iParam0 == joaat("component_microsmg_varmod_security")) || iParam0 == joaat("component_pumpshotgun_varmod_xm3"))
	{
		return 1;
	}
	return 0;
}

int func_280(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
				
				case 5:
					iVar0 = 1400690398;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
				
				case 7:
					iVar0 = joaat("component_microsmg_varmod_xm3");
					break;
				
				case 8:
					iVar0 = 1694268374;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
				
				case 10:
					iVar0 = 1605520746;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
				
				case 4:
					iVar0 = joaat("component_pumpshotgun_varmod_xm3");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 4:
					iVar0 = 221907180;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
				
				case 8:
					iVar0 = 302671608;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		case joaat("weapon_bat"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bat_varmod_xm3");
					break;
				
				case 1:
					iVar0 = joaat("component_bat_varmod_xm3_01");
					break;
				
				case 2:
					iVar0 = joaat("component_bat_varmod_xm3_02");
					break;
				
				case 3:
					iVar0 = joaat("component_bat_varmod_xm3_03");
					break;
				
				case 4:
					iVar0 = joaat("component_bat_varmod_xm3_04");
					break;
				
				case 5:
					iVar0 = joaat("component_bat_varmod_xm3_05");
					break;
				
				case 6:
					iVar0 = joaat("component_bat_varmod_xm3_06");
					break;
				
				case 7:
					iVar0 = joaat("component_bat_varmod_xm3_07");
					break;
				
				case 8:
					iVar0 = joaat("component_bat_varmod_xm3_08");
					break;
				
				case 9:
					iVar0 = joaat("component_bat_varmod_xm3_09");
					break;
			}
			break;
		
		case joaat("weapon_rpg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = -1240142720;
					break;
			}
			break;
		
		case joaat("weapon_battlerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = -292433650;
					break;
				
				case 1:
					iVar0 = 494808810;
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			switch (iParam1)
			{
				case 0:
					iVar0 = -1675905033;
					break;
			}
			break;
		
		case -1916886713:
			switch (iParam1)
			{
				case 0:
					iVar0 = -584965981;
					break;
				
				case 1:
					iVar0 = 291145905;
					break;
				
				case 2:
					iVar0 = 1978284360;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_282(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_281(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo_slide"):
		case joaat("component_pistol_mk2_camo_02_slide"):
		case joaat("component_pistol_mk2_camo_03_slide"):
		case joaat("component_pistol_mk2_camo_04_slide"):
		case joaat("component_pistol_mk2_camo_05_slide"):
		case joaat("component_pistol_mk2_camo_06_slide"):
		case joaat("component_pistol_mk2_camo_07_slide"):
		case joaat("component_pistol_mk2_camo_08_slide"):
		case joaat("component_pistol_mk2_camo_09_slide"):
		case joaat("component_pistol_mk2_camo_10_slide"):
		case joaat("component_pistol_mk2_camo_ind_01_slide"):
		case joaat("component_snspistol_mk2_camo_slide"):
		case joaat("component_snspistol_mk2_camo_02_slide"):
		case joaat("component_snspistol_mk2_camo_03_slide"):
		case joaat("component_snspistol_mk2_camo_04_slide"):
		case joaat("component_snspistol_mk2_camo_05_slide"):
		case joaat("component_snspistol_mk2_camo_06_slide"):
		case joaat("component_snspistol_mk2_camo_07_slide"):
		case joaat("component_snspistol_mk2_camo_08_slide"):
		case joaat("component_snspistol_mk2_camo_09_slide"):
		case joaat("component_snspistol_mk2_camo_10_slide"):
		case joaat("component_snspistol_mk2_camo_ind_01_slide"):
		case joaat("component_pistol_mk2_varmod_xm3_slide"):
			return 1;
			break;
	}
	return 0;
}

int func_282(int iParam0, var* uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_283(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if ((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_290(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fParam1, 1, 1056964608, 0, 1, 0))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!func_289(PLAYER::PLAYER_PED_ID(), joaat("script_task_leave_any_vehicle")))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				iVar0 = 0;
			}
		}
	}
	func_288();
	if (func_287())
	{
		func_285();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_284())
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	return 1;
}

bool func_284()
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_79538)
	{
		if (!bVar0)
		{
			Global_79538 = 1;
		}
	}
	return bVar0;
}

void func_285()
{
	Global_21291 = 0;
	func_286();
}

void func_286()
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

int func_287()
{
	if (Global_22425 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_288()
{
	PAD::DISABLE_CONTROL_ACTION(0, 21, true);
	PAD::DISABLE_CONTROL_ACTION(0, 37, true);
	PAD::DISABLE_CONTROL_ACTION(0, 25, true);
	PAD::DISABLE_CONTROL_ACTION(0, 141, true);
	PAD::DISABLE_CONTROL_ACTION(0, 140, true);
	PAD::DISABLE_CONTROL_ACTION(0, 24, true);
	PAD::DISABLE_CONTROL_ACTION(0, 257, true);
	PAD::DISABLE_CONTROL_ACTION(0, 22, true);
	PAD::DISABLE_CONTROL_ACTION(0, 23, true);
}

int func_289(int iParam0, int iParam1)
{
	if (func_354(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_292(bParam5, bParam6);
	func_291(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_32) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_32 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_291(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

void func_292(bool bParam0, bool bParam1)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 73, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 138, true);
	PAD::DISABLE_CONTROL_ACTION(0, 136, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 107, true);
	PAD::DISABLE_CONTROL_ACTION(0, 110, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 87, true);
	PAD::DISABLE_CONTROL_ACTION(0, 88, true);
	PAD::DISABLE_CONTROL_ACTION(0, 113, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 117, true);
	PAD::DISABLE_CONTROL_ACTION(0, 118, true);
	PAD::DISABLE_CONTROL_ACTION(0, 119, true);
	PAD::DISABLE_CONTROL_ACTION(0, 352, true);
	PAD::DISABLE_CONTROL_ACTION(0, 131, true);
	PAD::DISABLE_CONTROL_ACTION(0, 132, true);
	PAD::DISABLE_CONTROL_ACTION(0, 123, true);
	PAD::DISABLE_CONTROL_ACTION(0, 126, true);
	PAD::DISABLE_CONTROL_ACTION(0, 129, true);
	PAD::DISABLE_CONTROL_ACTION(0, 130, true);
	PAD::DISABLE_CONTROL_ACTION(0, 133, true);
	PAD::DISABLE_CONTROL_ACTION(0, 134, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
}

void func_293(var uParam0, bool bParam1)
{
	if (func_354(*uParam0))
	{
		uParam0->f_1 = 3;
		uParam0->f_2 = 0;
		if (bParam1)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(*uParam0);
		}
		if (uParam0->f_3 != -1)
		{
			Local_536[uParam0->f_3 /*6*/].f_5 = 0;
			uParam0->f_3 = -1;
		}
		if (PED::IS_PED_IN_GROUP(*uParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(*uParam0);
		}
	}
	else
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
	}
}

int func_294(int iParam0)
{
	if (func_235(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_295()
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_163, "SET_COLOUR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(67);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(200);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(209);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(67);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_163, "SET_DISTANCE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(100f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	HUD::SET_TEXT_RENDER_ID(iLocal_164);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_163, 0.1f, 0.24f, 0.21f, 0.51f, 100, 100, 100, 255, 0);
}

void func_296(int iParam0)
{
	if (iParam0 == 1)
	{
		if (func_297())
		{
			if ((MISC::ARE_STRINGS_EQUAL(Local_623.f_14, "NO_RECENT_ANIM") || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_623.f_0, "rcm_epsilonism4", Local_623.f_14, 3)) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_623.f_0, "rcm_epsilonism4", Local_623.f_14) >= 0.98f)
			{
				if (fLocal_638 > 80f)
				{
					Local_623.f_14 = "detector_level3_prop";
				}
				else if (fLocal_638 > 50f)
				{
					Local_623.f_14 = "detector_level2_prop";
				}
				else
				{
					Local_623.f_14 = "detector_level1_prop";
				}
				ENTITY::PLAY_ENTITY_ANIM(Local_623.f_0, Local_623.f_14, "rcm_epsilonism4", 16f, false, false, false, 0f, 0);
			}
		}
	}
	else if (func_297())
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_623.f_14, "NO_RECENT_ANIM"))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_623.f_0, "rcm_epsilonism4", Local_623.f_14, 1))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_623.f_0, "rcm_epsilonism4", Local_623.f_14) <= 0.05f)
				{
					ENTITY::STOP_ENTITY_ANIM(Local_623.f_0, Local_623.f_14, "rcm_epsilonism4", -4f);
					Local_623.f_14 = "NO_RECENT_ANIM";
				}
			}
		}
	}
}

int func_297()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_623.f_0))
	{
		return 1;
	}
	return 0;
}

void func_298(char* sParam0, int iParam1)
{
	sParam0 = sParam0;
	iParam1 = iParam1;
}

void func_299(int iParam0, int iParam1, int iParam2)
{
	func_245(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		func_263(500, 0);
	}
}

void func_300(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	struct<50> Var0;
	int iVar65;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_301(iParam1, &Var0, iParam3);
	iVar65 = 0;
	while (iVar65 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar65, Var0.f_13[iVar65], Var0[iVar65], iParam2);
		iVar65++;
	}
	iVar65 = 0;
	while (iVar65 < 9)
	{
		if (Var0.f_39[iVar65] == -1 || Var0.f_39[iVar65] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, Var0.f_39[iVar65], Var0.f_49[iVar65], iParam2);
		}
		iVar65++;
	}
}

void func_301(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var67;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar81 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_302(iParam0, &Var2, 0, -1);
	func_302(iParam0, uParam1, iParam2, -1);
	iVar82 = 0;
	iVar83 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (func_59(iVar81, func_100(iVar0), func_83(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_100(iVar0)), &iVar1))
			{
				Var67 = { func_102(iVar81, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (func_66(iVar81, func_100(iVar0), func_83(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_100(iVar0)), &iVar1))
			{
				Var67 = { func_102(iVar81, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var67.f_3;
				(*uParam1)[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (func_59(iVar81, 14, func_73(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { func_102(iVar81, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (func_66(iVar81, 14, func_73(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { func_102(iVar81, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var67.f_3;
				(*uParam1)[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	if (iVar83 || iVar82)
	{
		iVar84 = func_83(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar85 = func_83(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar86 = func_67(iVar81, iVar85, iVar84);
		if (iVar86 != -99)
		{
			Var67 = { func_102(iVar81, 0, iVar86, -1) };
			uParam1->f_13[0] = Var67.f_3;
			(*uParam1)[0] = Var67.f_4;
		}
	}
}

void func_302(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_168(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_306(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_305(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_171(iVar0))
		{
			uParam1->f_59 = Global_114135.f_2367.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_114135.f_2367.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_114135.f_2367.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_114135.f_2367.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_114135.f_2367.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_114135.f_2367.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_303(161, iParam3))
			{
				uParam1->f_59 = func_89(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_89(753, iParam3);
			}
			uParam1->f_60 = func_89(754, iParam3);
			uParam1->f_61 = func_89(755, iParam3);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_303(161, iParam3))
			{
				uParam1->f_59 = func_89(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_89(753, iParam3);
			}
		}
	}
}

int func_303(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_304(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_304(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_88(uParam1));
}

void func_305(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_168(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_306(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_168(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

void func_307(char* sParam0)
{
	func_246(1, 1, 0, 0, 0, 0, 0);
	CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
}

void func_308(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_309(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_262(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_309(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(false);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_245(iParam1, iParam2, 1, 1);
		}
	}
}

void func_310()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (Local_770.f_3 == 1)
	{
		func_308(1, 1);
		SYSTEM::WAIT(0);
		while (!func_343())
		{
			SYSTEM::WAIT(0);
		}
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
			CUTSCENE::REMOVE_CUTSCENE();
		}
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
		if (func_342())
		{
			func_341(0, -1, 1);
		}
		if (iLocal_351 == 0)
		{
			if (!func_342())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_145, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_148);
			}
			func_293(&(Local_604[1 /*8*/]), 1);
			func_293(&(Local_604[0 /*8*/]), 1);
			if (func_354(Local_604[1 /*8*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_81.f_28[1], false);
				ENTITY::SET_ENTITY_COORDS(Local_604[1 /*8*/], 1829.75f, 4693.5f, 38.51f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_604[1 /*8*/], 27.46f);
				Var2 = { ENTITY::GET_ENTITY_COORDS(Local_604[1 /*8*/], true) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(1829.75f, 4693.5f, 38.51f, &fVar1, false, false);
				ENTITY::SET_ENTITY_COORDS(Local_604[1 /*8*/], Var2.f_0, Var2.f_1, fVar1, true, false, false, true);
				func_409("Setting Jimmy position (0)");
			}
			if (func_354(Local_604[0 /*8*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_604[0 /*8*/], 1827.32f, 4692.59f, 38.53f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_604[0 /*8*/], 171.22f);
				func_409("Setting Marnie position (0)");
			}
		}
		else if (iLocal_351 == 1)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1754.634f, 4675.789f, 42.9068f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 293.2275f);
			if (func_354(Local_604[1 /*8*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_604[1 /*8*/], 1758.586f, 4670.085f, 42.6276f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_604[1 /*8*/], 262.4368f);
				func_409("Setting Jimmy position (1)");
			}
			if (func_354(Local_604[0 /*8*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_604[0 /*8*/], 1759.917f, 4683.584f, 42.7266f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_604[0 /*8*/], 148.3211f);
				func_409("Setting Marnie position (1)");
			}
		}
		else if (iLocal_351 == 2)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1758.454f, 4829.431f, 39.729f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 168.2012f);
			if (func_354(Local_604[0 /*8*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_604[0 /*8*/], 1755.005f, 4827.329f, 40.0736f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_604[0 /*8*/], 169.6486f);
				func_409("Setting Marnie position (2)");
			}
		}
		SYSTEM::WAIT(750);
		func_299(1, 1, 1);
		Local_770.f_3 = 0;
	}
	if (Local_770.f_1 == 0)
	{
		func_298("Doing setup for FindRock section:", iLocal_351);
		func_293(&(Local_604[1 /*8*/]), 0);
		iLocal_348 = 0;
		iLocal_350 = 0;
		iLocal_621 = 0;
		iLocal_357 = -1;
		iLocal_751 = 0;
		iLocal_752 = 0;
		iLocal_753 = MISC::GET_GAME_TIMER();
		iLocal_755 = MISC::GET_GAME_TIMER();
		iLocal_756 = 0;
		if (iLocal_351 == 0)
		{
			if (func_354(PLAYER::PLAYER_PED_ID()))
			{
				if (func_353(PLAYER::PLAYER_PED_ID()) != iLocal_157)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_157, -1, true, true);
				}
				func_223(1);
			}
			if (func_354(Local_604[1 /*8*/]))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(Local_604[1 /*8*/], iLocal_157);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_604[1 /*8*/], 1826.246f, 4696.506f, 38.1187f, 1f, 20000, 0.1f, 0, 40000f);
			}
			func_340(&(Local_604[1 /*8*/]), 1);
			iLocal_746 = 8;
			iLocal_747 = 8;
			iLocal_749 = 0;
			iLocal_748 = 0;
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		else if (iLocal_351 == 1)
		{
			if (func_354(PLAYER::PLAYER_PED_ID()))
			{
				if (func_353(PLAYER::PLAYER_PED_ID()) != iLocal_157)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_157, -1, true, true);
					func_223(1);
				}
			}
			func_340(&(Local_604[0 /*8*/]), 0);
			func_339(&(Local_604[1 /*8*/]), uLocal_758);
			iLocal_746 = 8;
			iLocal_747 = 8;
			iLocal_749 = 0;
			iLocal_748 = 0;
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		else if (iLocal_351 == 2)
		{
			if (func_354(PLAYER::PLAYER_PED_ID()))
			{
				if (func_353(PLAYER::PLAYER_PED_ID()) != iLocal_157)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_157, -1, true, true);
					func_223(1);
				}
			}
			func_339(&(Local_604[0 /*8*/]), uLocal_761);
			func_338(&(Local_604[1 /*8*/]), iLocal_759);
			iLocal_746 = 11;
			iLocal_747 = 12;
			iLocal_749 = 0;
			iLocal_748 = 0;
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		func_337(&uLocal_166, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		func_337(&uLocal_166, 5, Local_604[1 /*8*/], "JIMMYBOSTON", 0, 1);
		func_337(&uLocal_166, 4, Local_604[0 /*8*/], "MARNIE", 0, 1);
		if (iLocal_351 == 0)
		{
			iLocal_359 = Local_604[1 /*8*/];
		}
		else
		{
			iLocal_359 = Local_604[0 /*8*/];
		}
		func_336(Local_361[iLocal_351 /*43*/].f_18, Local_361[iLocal_351 /*43*/].f_19, Local_361[iLocal_351 /*43*/].f_20, Local_361[iLocal_351 /*43*/].f_21, Local_361[iLocal_351 /*43*/].f_22);
		bLocal_334 = false;
		iLocal_335 = 0;
		iLocal_336 = 0;
		iLocal_337 = 1;
		iLocal_338 = 0;
		iLocal_339 = 0;
		iLocal_340 = 0;
		iLocal_341 = 0;
		iLocal_342 = 0;
		iLocal_343 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_346 = 0;
		iLocal_744 = 0;
		iLocal_745 = 0;
		HUD::CLEAR_HELP(true);
		iLocal_356 = MISC::GET_GAME_TIMER();
		iLocal_745 = MISC::GET_GAME_TIMER() + 1000;
		func_298("Finished setup, moving to run loop for rock #:", iLocal_351);
		Local_770.f_1 = 1;
	}
	if (Local_770.f_1 == 1)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			func_243(6);
			Local_770.f_9 = 1;
			Local_770.f_1 = 3;
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_604[0 /*8*/], false))
		{
			func_243(6);
			Local_770.f_9 = 2;
			Local_770.f_1 = 3;
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_604[1 /*8*/], false))
		{
			func_243(6);
			Local_770.f_9 = 3;
			Local_770.f_1 = 3;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_604[0 /*8*/], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_604[0 /*8*/], 0, 2))
		{
			func_243(6);
			Local_770.f_9 = 4;
			Local_770.f_1 = 3;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_604[1 /*8*/], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_604[1 /*8*/], 0, 2))
		{
			func_243(6);
			Local_770.f_9 = 5;
			Local_770.f_1 = 3;
		}
		else if (func_236(&(Local_604[0 /*8*/])))
		{
			func_243(6);
			Local_770.f_9 = 6;
			Local_770.f_1 = 3;
		}
		else if (func_236(&(Local_604[1 /*8*/])))
		{
			func_243(6);
			Local_770.f_9 = 7;
			Local_770.f_1 = 3;
		}
		else if (!func_335(&uLocal_692, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
		{
			func_243(6);
			Local_770.f_9 = 8;
			Local_770.f_1 = 3;
		}
		else if (Local_770.f_6)
		{
			Local_770.f_1 = 3;
		}
		else if (Local_770.f_4)
		{
			func_243(3);
			Local_770.f_1 = 3;
		}
		else if (Local_770.f_5)
		{
			if (iLocal_351 == 0)
			{
				func_243(1);
				func_409("P skipping to intro...");
			}
			else
			{
				iLocal_351 = (iLocal_351 - 1);
				func_243(3);
			}
			Local_770.f_1 = 3;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 2)
			{
				func_332(&(Local_604[iVar0 /*8*/]));
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_361[iLocal_351 /*43*/].f_1))
			{
				if (iLocal_351 == 0)
				{
					if (func_234(PLAYER::PLAYER_PED_ID(), Local_361[iLocal_351 /*43*/].f_1, 1) < 100f)
					{
						if (!CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							CUTSCENE::REQUEST_CUTSCENE("EPS_4_MCS_1", 8);
							func_409("Requesting midtro now");
						}
					}
					else if (func_234(PLAYER::PLAYER_PED_ID(), Local_361[iLocal_351 /*43*/].f_1, 1) > 120f)
					{
						if (CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							func_409("Player moved away - unloading midtro");
							CUTSCENE::REMOVE_CUTSCENE();
						}
					}
				}
				else if (iLocal_351 == 1)
				{
					if (func_234(PLAYER::PLAYER_PED_ID(), Local_361[iLocal_351 /*43*/].f_1, 1) < 100f)
					{
						if (!CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							CUTSCENE::REQUEST_CUTSCENE("EPS_4_MCS_2", 8);
							func_409("Requesting midtro now");
						}
					}
					else if (func_234(PLAYER::PLAYER_PED_ID(), Local_361[iLocal_351 /*43*/].f_1, 1) > 120f)
					{
						if (CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							func_409("Player moved away - unloading midtro");
							CUTSCENE::REMOVE_CUTSCENE();
						}
					}
				}
				else if (func_234(PLAYER::PLAYER_PED_ID(), Local_361[iLocal_351 /*43*/].f_1, 1) < 100f)
				{
					if (!CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						CUTSCENE::REQUEST_CUTSCENE("EPS_4_MCS_3", 8);
						func_409("Requesting midtro now");
					}
				}
				else if (func_234(PLAYER::PLAYER_PED_ID(), Local_361[iLocal_351 /*43*/].f_1, 1) > 120f)
				{
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						func_409("Player moved away - unloading midtro");
						CUTSCENE::REMOVE_CUTSCENE();
					}
				}
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				func_409("Trying to set player component variation");
				if (func_235(PLAYER::PLAYER_PED_ID()))
				{
					func_300("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
				if (iLocal_351 == 0 || iLocal_351 == 2)
				{
					func_409("Trying to set Jimmy prop variation");
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
				}
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			PAD::DISABLE_CONTROL_ACTION(0, 37, true);
			if (func_354(PLAYER::PLAYER_PED_ID()))
			{
				if (func_353(PLAYER::PLAYER_PED_ID()) != iLocal_157)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_157, -1, true, true);
				}
			}
			func_331(&(Local_361[iLocal_351 /*43*/]));
			if (iLocal_351 == 0)
			{
				if (iLocal_744 == 0)
				{
					if (iLocal_745 < MISC::GET_GAME_TIMER())
					{
						if (!func_355())
						{
							func_330("EPS4_T0");
							iLocal_745 = MISC::GET_GAME_TIMER() + 7500;
							iLocal_744++;
							iLocal_757 = MISC::GET_GAME_TIMER();
						}
						else
						{
							iLocal_744 = 2;
						}
					}
				}
				else if (iLocal_744 == 1)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 25) || iLocal_745 < MISC::GET_GAME_TIMER())
					{
						HUD::CLEAR_HELP(true);
						iLocal_745 = MISC::GET_GAME_TIMER() + 1000;
						iLocal_744++;
						iLocal_757 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_744 == 2)
				{
					if (iLocal_745 < MISC::GET_GAME_TIMER())
					{
						func_330("EPS4_T1");
						iLocal_745 = MISC::GET_GAME_TIMER() + 7500;
						iLocal_744++;
						iLocal_757 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_744 == 3)
				{
					if (iLocal_745 < MISC::GET_GAME_TIMER())
					{
						HUD::CLEAR_HELP(true);
						iLocal_745 = MISC::GET_GAME_TIMER() + 1000;
						iLocal_744++;
						iLocal_757 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_744 == 4)
				{
					if (iLocal_745 < MISC::GET_GAME_TIMER())
					{
						func_330("EPS4_T2");
						iLocal_745 = MISC::GET_GAME_TIMER() + 7500;
						iLocal_744++;
						iLocal_757 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_744 == 5)
				{
					if (iLocal_745 < MISC::GET_GAME_TIMER())
					{
						HUD::CLEAR_HELP(true);
						iLocal_745 = MISC::GET_GAME_TIMER() + 1000;
						iLocal_744++;
					}
				}
			}
			func_296(Local_623.f_1);
			if (iLocal_337 == 1)
			{
				func_329(&iLocal_162);
				if (!func_335(&uLocal_640, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
				{
					iLocal_337 = 0;
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					HUD::CLEAR_PRINTS();
				}
				else if (iLocal_345 == 0 && iLocal_336)
				{
					if (!func_287())
					{
						iLocal_356 = MISC::GET_GAME_TIMER();
						iLocal_345 = 1;
					}
				}
				else if (iLocal_338 == 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(Local_361[iLocal_351 /*43*/].f_36, sLocal_159) || func_315(&uLocal_166, "EPS4AUD", Local_361[iLocal_351 /*43*/].f_36, 7, 0, 0, 0))
					{
						if (!MISC::ARE_STRINGS_EQUAL(Local_361[iLocal_351 /*43*/].f_36, sLocal_159))
						{
							if (func_235(iLocal_359))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_359, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							}
						}
						iLocal_757 = MISC::GET_GAME_TIMER();
						iLocal_338 = 1;
					}
				}
				else if (iLocal_344 == 0)
				{
					if (iLocal_351 == 0)
					{
						if (!func_287())
						{
							func_314("EPS4_A2", 7500, 0);
							iLocal_356 = MISC::GET_GAME_TIMER();
							iLocal_344 = 1;
						}
					}
					else
					{
						iLocal_344 = 1;
					}
				}
				else if (iLocal_339 == 0)
				{
					if (!func_287() && (MISC::GET_GAME_TIMER() - iLocal_356) >= 7500)
					{
						if ((MISC::ARE_STRINGS_EQUAL(Local_361[iLocal_351 /*43*/].f_37, sLocal_159) || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_359, 30f, 30f, 30f, false, true, 0)) || func_315(&uLocal_166, "EPS4AUD", Local_361[iLocal_351 /*43*/].f_37, 7, 0, 0, 0))
						{
							if (!MISC::ARE_STRINGS_EQUAL(Local_361[iLocal_351 /*43*/].f_37, sLocal_159))
							{
								if (func_235(iLocal_359))
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_359, PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
								}
							}
							iLocal_339 = 1;
							iLocal_757 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (iLocal_340 == 0)
				{
					if (!func_287())
					{
						iLocal_340 = 1;
						iLocal_354 = MISC::GET_GAME_TIMER();
						iLocal_355 = 0;
					}
				}
				else if (iLocal_336 == 0 && !func_313(PLAYER::PLAYER_PED_ID(), Local_361[iLocal_351 /*43*/].f_2, 9f, 1))
				{
					if (func_313(PLAYER::PLAYER_PED_ID(), Local_361[iLocal_351 /*43*/].f_2, 20f, 1))
					{
						if (!iLocal_341)
						{
							if (!func_287())
							{
								if (func_315(&uLocal_166, "EPS4AUD", Local_361[iLocal_351 /*43*/].f_42, 7, 0, 0, 0))
								{
									if (func_235(iLocal_359))
									{
										TASK::TASK_LOOK_AT_ENTITY(iLocal_359, PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
									}
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 0);
									iLocal_341 = 1;
								}
							}
						}
					}
					if (CAM::IS_AIM_CAM_ACTIVE())
					{
						if (func_312(PLAYER::PLAYER_PED_ID(), iLocal_359, 30f, 1) || iLocal_351 == 2)
						{
							if (!func_287() && (MISC::GET_GAME_TIMER() - iLocal_354) > 15000)
							{
								if (bLocal_334)
								{
									if (iLocal_350 == 0)
									{
										if (iLocal_748 < iLocal_746)
										{
											if (MISC::ARE_STRINGS_EQUAL(Local_361[iLocal_351 /*43*/].f_40, sLocal_159) || func_315(&uLocal_166, "EPS4AUD", Local_361[iLocal_351 /*43*/].f_40, 7, 0, 0, 0))
											{
												if (func_354(iLocal_359))
												{
													TASK::TASK_LOOK_AT_ENTITY(iLocal_359, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
												}
												iLocal_354 = MISC::GET_GAME_TIMER();
												iLocal_748++;
												if (iLocal_351 == 2)
												{
													iLocal_350 = 1;
												}
											}
										}
									}
									else if (iLocal_750 < 12)
									{
										if (MISC::ARE_STRINGS_EQUAL(Local_361[iLocal_351 /*43*/].f_40, sLocal_159) || func_315(&uLocal_166, "EPS4AUD", "EPS4_HASSIG", 7, 0, 0, 0))
										{
											iLocal_354 = MISC::GET_GAME_TIMER();
											iLocal_750++;
										}
									}
								}
								else if (iLocal_749 < iLocal_747)
								{
									if (MISC::ARE_STRINGS_EQUAL(Local_361[iLocal_351 /*43*/].f_41, sLocal_159) || func_315(&uLocal_166, "EPS4AUD", Local_361[iLocal_351 /*43*/].f_41, 7, 0, 0, 0))
									{
										if (func_354(iLocal_359))
										{
											TASK::TASK_LOOK_AT_ENTITY(iLocal_359, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
										}
										iLocal_354 = MISC::GET_GAME_TIMER();
										iLocal_749++;
									}
								}
							}
							else if (bLocal_334 != Local_623.f_1)
							{
								bLocal_334 = Local_623.f_1;
								if (Local_623.f_1 == 0)
								{
									iLocal_350 = 0;
								}
								if (bLocal_334)
								{
									if (iLocal_355 < MISC::GET_GAME_TIMER())
									{
										if (func_287())
										{
											AUDIO::STOP_SCRIPTED_CONVERSATION(true);
										}
										iLocal_354 = (MISC::GET_GAME_TIMER() - 7500);
										iLocal_355 = MISC::GET_GAME_TIMER();
									}
								}
								else
								{
									iLocal_354 = (MISC::GET_GAME_TIMER() - 7500);
								}
							}
						}
					}
					else
					{
						iLocal_354 = (MISC::GET_GAME_TIMER() - 5000);
					}
				}
				if (iLocal_351 == 0)
				{
					if (iLocal_751 < 5)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_753) > 7500 && !func_287()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (func_235(Local_604[0 /*8*/]))
							{
								if (func_234(Local_604[0 /*8*/], PLAYER::PLAYER_PED_ID(), 1) < 4f)
								{
									if (func_315(&uLocal_166, "EPS4AUD", "EPS4_NEARM", 6, 0, 0, 0))
									{
										iLocal_751++;
										iLocal_753 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				else if (iLocal_351 == 1)
				{
					if (iLocal_751 < 4)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_753) > 7500 && !func_287()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (func_235(Local_604[1 /*8*/]))
							{
								if (func_234(Local_604[1 /*8*/], PLAYER::PLAYER_PED_ID(), 1) < 4f)
								{
									if (func_315(&uLocal_166, "EPS4AUD", "EPS4_NEARJ", 6, 0, 0, 0))
									{
										iLocal_751++;
										iLocal_753 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_751 < 3)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_753) > 7500 && !func_287()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (func_235(Local_604[1 /*8*/]))
							{
								if (func_234(Local_604[1 /*8*/], PLAYER::PLAYER_PED_ID(), 1) < 4f)
								{
									if (func_315(&uLocal_166, "EPS4AUD", "EPS4_NEARJP", 6, 0, 0, 0))
									{
										iLocal_751++;
										iLocal_753 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_752 < 4)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_753) > 7500 && !func_287()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (func_235(Local_604[0 /*8*/]))
							{
								if (func_234(Local_604[0 /*8*/], PLAYER::PLAYER_PED_ID(), 1) < 4f)
								{
									if (func_315(&uLocal_166, "EPS4AUD", "EPS4_NEARMP", 6, 0, 0, 0))
									{
										iLocal_752++;
										iLocal_753 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_361[iLocal_351 /*43*/].f_2, 6.2f, 6.2f, 2f, false, false, 1))
				{
					if (iLocal_357 == -1)
					{
						iLocal_357 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_357) >= 1500)
					{
						if (func_287())
						{
							func_285();
						}
						iLocal_535 = MISC::GET_GAME_TIMER();
						func_243(3);
						Local_770.f_1 = 3;
					}
				}
				else if (iLocal_335 == 0)
				{
					if (Local_623.f_6)
					{
						iLocal_335 = 1;
						iLocal_336 = 1;
					}
				}
				else if (!func_313(PLAYER::PLAYER_PED_ID(), Local_361[iLocal_351 /*43*/].f_2, (9f + 2f), 1))
				{
					iLocal_335 = 0;
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_162))
				{
					iLocal_162 = func_311(Local_142, 5, 0);
				}
				bLocal_334 = Local_623.f_1;
				if (func_335(&uLocal_640, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
				{
					iLocal_337 = 1;
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					HUD::CLEAR_PRINTS();
				}
				else if (iLocal_346 == 0)
				{
					if (!func_287())
					{
						func_314("EPS4_A1", 7500, 0);
						iLocal_356 = MISC::GET_GAME_TIMER();
						iLocal_346 = 1;
					}
				}
				else if (iLocal_342 == 0)
				{
					if (iLocal_351 < 2)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_359, 30f, 30f, 30f, false, true, 0))
						{
							if (!func_287() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (MISC::ARE_STRINGS_EQUAL(Local_361[iLocal_351 /*43*/].f_38, sLocal_159) || func_315(&uLocal_166, "EPS4AUD", Local_361[iLocal_351 /*43*/].f_38, 7, 0, 0, 0))
								{
									iLocal_342 = 1;
								}
							}
						}
					}
					else if (!func_287() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (MISC::ARE_STRINGS_EQUAL(Local_361[iLocal_351 /*43*/].f_38, sLocal_159) || func_315(&uLocal_166, "EPS4AUD", Local_361[iLocal_351 /*43*/].f_38, 7, 0, 0, 0))
						{
							iLocal_342 = 1;
						}
					}
				}
				else if (iLocal_343 == 0)
				{
					if (iLocal_351 < 2)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_359, 30f, 30f, 30f, false, true, 0))
						{
							if ((!func_287() && (MISC::GET_GAME_TIMER() - iLocal_356) >= 7500) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (MISC::ARE_STRINGS_EQUAL(Local_361[iLocal_351 /*43*/].f_39, sLocal_159) || func_315(&uLocal_166, "EPS4AUD", Local_361[iLocal_351 /*43*/].f_39, 7, 0, 0, 0))
								{
									iLocal_343 = 1;
								}
							}
						}
					}
					else if ((!func_287() && (MISC::GET_GAME_TIMER() - iLocal_356) >= 7500) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (MISC::ARE_STRINGS_EQUAL(Local_361[iLocal_351 /*43*/].f_39, sLocal_159) || func_315(&uLocal_166, "EPS4AUD", Local_361[iLocal_351 /*43*/].f_39, 7, 0, 0, 0))
						{
							iLocal_343 = 1;
						}
					}
				}
			}
		}
	}
	if (Local_770.f_1 == 3)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		func_409("In cleanup for FindRock");
		if (func_287())
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		}
		func_296(1);
		func_295();
		PAD::SET_CONTROL_SHAKE(0, 200, 150);
		if ((MISC::GET_GAME_TIMER() - iLocal_535) > 750)
		{
			func_231();
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 0);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			func_293(&(Local_604[1 /*8*/]), 0);
			func_293(&(Local_604[0 /*8*/]), 0);
			func_379();
		}
	}
}

int func_311(struct<3> Param0, int iParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_PRIORITY(iVar0, iParam3);
	HUD::SET_BLIP_SCALE(iVar0, 1f);
	HUD::SET_BLIP_ROUTE(iVar0, bParam4);
	return iVar0;
}

bool func_312(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

bool func_313(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5), Param1) <= (fParam4 * fParam4);
}

void func_314(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

bool func_315(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_328(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_316(sParam2, iParam3, 0);
}

int func_316(char* sParam0, int iParam1, bool bParam2)
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
					func_286();
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
		if (func_327(8, -1))
		{
			return 0;
		}
		Global_22501 = { Global_22495 };
		func_326();
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
				func_325();
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
				if (func_324())
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
			if (func_225())
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
			func_323();
			Global_22435 = bParam2;
		}
		Global_22427 = iParam1;
		StringCopy(&Global_22044, sParam0, 24);
		Global_21291 = 0;
		func_322();
		func_317();
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
		func_286();
	}
	return 0;
}

void func_317()
{
	if (!func_318())
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

int func_318()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79539)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_321())
	{
		return 0;
	}
	if (func_319(PLAYER::PLAYER_ID()))
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

bool func_319(int iParam0)
{
	return func_320(iParam0, 20);
}

var func_320(int iParam0, int iParam1)
{
	return BitTest(Global_1887549[iParam0 /*611*/].f_10.f_4, iParam1);
}

int func_321()
{
	return -1;
}

void func_322()
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

void func_323()
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

int func_324()
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

void func_325()
{
	if (func_110(14))
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
		Global_21066 = func_265();
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

void func_326()
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

bool func_327(int iParam0, int iParam1)
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

void func_328(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_329(int* iParam0)
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_330(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_331(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	bool bVar14;
	float fVar15;
	bool bVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	
	fVar0 = SYSTEM::VDIST(uParam0->f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	if (fVar0 > Local_623.f_11)
	{
		fVar7 = 0f;
		if (Local_623.f_8 > 0f)
		{
			fVar7 = (fVar7 + (SYSTEM::SIN(((fVar0 - Local_623.f_11) * (360f / Local_623.f_8))) * Local_623.f_10));
		}
		if (Local_623.f_9 > 0f)
		{
			fVar7 = (fVar7 + (SYSTEM::SIN(((fVar0 - Local_623.f_11) * (360f / Local_623.f_9))) * (Local_623.f_10 * -0.7f)));
		}
		Var4.f_0 = ((Var1.f_0 * SYSTEM::COS(fVar7)) - (Var1.f_1 * SYSTEM::SIN(fVar7)));
		Var4.f_1 = ((Var1.f_1 * SYSTEM::COS(fVar7)) + (Var1.f_0 * SYSTEM::SIN(fVar7)));
	}
	else
	{
		Var4 = { Var1 };
	}
	Var8 = { uParam0->f_2 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var11 = { uParam0->f_2 - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, -5f, 0f) };
	bVar14 = ((Var8.f_0 * Var4.f_0) + (Var8.f_1 * Var4.f_1)) > 0f;
	fVar15 = (1f - (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var4.f_0, Var4.f_1, Var11.f_0, Var11.f_1) / 180f));
	if (fVar0 >= 10f)
	{
		Local_623.f_12 = 0.92f;
	}
	else
	{
		Local_623.f_12 = 0.95f;
	}
	bVar16 = (fVar15 > Local_623.f_12 && bVar14);
	Local_623.f_1 = bVar16;
	if (Local_623.f_6 == 1)
	{
		PAD::SET_CONTROL_SHAKE(0, 200, 150);
		if (fVar0 > 6.5f || bVar16 == 0)
		{
			AUDIO::STOP_SOUND(Local_623.f_4);
			Local_623.f_6 = 0;
			iLocal_352 = 0;
		}
	}
	else if (iLocal_352 < MISC::GET_GAME_TIMER())
	{
		if (fVar0 <= 6.5f && bVar16)
		{
			AUDIO::STOP_SOUND(Local_623.f_3);
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_623.f_4, "CONTINUAL_BEEP", PLAYER::PLAYER_PED_ID(), "EPSILONISM_04_SOUNDSET", false, 0);
			Local_623.f_6 = 1;
		}
		else
		{
			fVar17 = (fVar0 - (6.5f + 2.5f));
			if (fVar17 < 0f)
			{
				fVar17 = 0f;
			}
			iVar18 = (125 + SYSTEM::ROUND(((fVar17 / 40f) * (1250f - 125f))));
			if (iVar18 > 1250)
			{
				iVar18 = 1250;
			}
			iLocal_352 = (MISC::GET_GAME_TIMER() + iVar18);
			iVar18 = (iVar18 / 3);
			if (iVar18 < 100)
			{
				iVar18 = 100;
			}
			iLocal_353 = (MISC::GET_GAME_TIMER() + iVar18);
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_623.f_3, "IDLE_BEEP", PLAYER::PLAYER_PED_ID(), "EPSILONISM_04_SOUNDSET", false, 0);
			if (bVar16)
			{
				PAD::SET_CONTROL_SHAKE(0, 200, 150);
			}
			else
			{
				PAD::SET_CONTROL_SHAKE(0, 200, 100);
			}
		}
	}
	if (iLocal_353 > 0 && MISC::GET_GAME_TIMER() > iLocal_353)
	{
		AUDIO::STOP_SOUND(Local_623.f_3);
		iLocal_353 = 0;
	}
	if (CAM::IS_AIM_CAM_ACTIVE())
	{
		if (Local_623.f_7 == 0)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_623.f_5, "SCAN", PLAYER::PLAYER_PED_ID(), "EPSILONISM_04_SOUNDSET", false, 0);
			Local_623.f_7 = 1;
		}
		else if (bVar16)
		{
			AUDIO::SET_VARIABLE_ON_SOUND(Local_623.f_5, "IsOnTarget", 1f);
		}
		else
		{
			AUDIO::SET_VARIABLE_ON_SOUND(Local_623.f_5, "IsOnTarget", 0f);
		}
		iLocal_757 = MISC::GET_GAME_TIMER();
	}
	else if (Local_623.f_7 == 1)
	{
		AUDIO::STOP_SOUND(Local_623.f_5);
		Local_623.f_7 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_623.f_0))
	{
		Local_623.f_0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID(), 1);
	}
	else
	{
		fVar19 = ((fVar0 - 6.5f) / (uParam0->f_23 - 6.5f));
		if (fVar19 < 0f)
		{
			fVar19 = 0f;
		}
		else if (fVar19 > 1f)
		{
			fVar19 = 1f;
		}
		if (Local_623.f_1)
		{
			fLocal_638 = (100f - (fVar19 * 100f));
		}
		else
		{
			fLocal_638 = (100f - (fVar19 * 100f));
			fLocal_638 = (fLocal_638 * -1f);
		}
		if (!Local_623.f_1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_163, "SET_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_163, "SET_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(67);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(200);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(209);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(67);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (fLocal_638 >= 95f && fLocal_638 <= 99.8f)
		{
			fLocal_638 = 94.9f;
		}
		else if (fLocal_638 <= -95f && fLocal_638 >= -99.8f)
		{
			fLocal_638 = -94.9f;
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_361[iLocal_351 /*43*/].f_2, 6.2f, 6.2f, 2f, false, false, 1))
		{
			fLocal_638 = 100f;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_163, "SET_DISTANCE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_638);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		HUD::SET_TEXT_RENDER_ID(iLocal_164);
		GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_163, 0.1f, 0.24f, 0.21f, 0.51f, 100, 100, 100, 255, 0);
	}
	if (PAD::IS_CONTROL_PRESSED(0, 25))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		PAD::DISABLE_CONTROL_ACTION(0, 22, true);
		if (bLocal_349)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(15f, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, 2, true);
		}
		iLocal_347 = 1;
	}
	else if (func_355())
	{
		iLocal_347 = 1;
	}
}

void func_332(var uParam0)
{
	int iVar0;
	
	if (func_354(*uParam0) && PED::IS_PED_IN_GROUP(*uParam0))
	{
		if (uParam0->f_1 != 4 && uParam0->f_1 != 5)
		{
			PED::REMOVE_PED_FROM_GROUP(*uParam0);
		}
	}
	func_334(*uParam0);
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 3:
			break;
		
		case 1:
			if (!func_354(*uParam0))
			{
				uParam0->f_1 = 0;
				uParam0->f_2 = 0;
			}
			else if (uParam0->f_2 == 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iLocal_603);
				while (uParam0->f_3 == -1)
				{
					if (Local_536[iVar0 /*6*/].f_5 == 0)
					{
						if (Local_536[iVar0 /*6*/].f_4 == 0)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(*uParam0, Local_536[iVar0 /*6*/], 3f, 3f, 3f, false, true, 0))
							{
								func_298("Telling ped to go to marker: ", iVar0);
								Local_536[iVar0 /*6*/].f_5 = 1;
								uParam0->f_3 = iVar0;
							}
						}
					}
					iVar0 = (iVar0 + 1 % iLocal_603);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_536[uParam0->f_3 /*6*/], 1f, -1, 0.25f, 5, 40000f);
				uParam0->f_2 = 1;
			}
			else if (uParam0->f_2 == 1)
			{
				if (!uParam0->f_7)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("script_task_follow_nav_mesh_to_coord")) == 7)
					{
						func_409("Eps reached marker! (follow nav to coord)");
						uParam0->f_1 = 2;
						uParam0->f_2 = 0;
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("script_task_go_straight_to_coord")) == 7)
				{
					func_409("Eps reached marker! (go straight to coord)");
					uParam0->f_7 = 0;
					uParam0->f_1 = 2;
					uParam0->f_2 = 0;
				}
			}
			break;
		
		case 2:
			if (!func_354(*uParam0))
			{
				uParam0->f_1 = 0;
				uParam0->f_2 = 0;
			}
			else if (uParam0->f_2 == 0)
			{
				func_298("Telling ped do sequence for marker: ", uParam0->f_3);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_165);
				if (Local_536[uParam0->f_3 /*6*/].f_4 == 0)
				{
					if (*uParam0 == Local_604[1 /*8*/])
					{
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_entry_jb", 4f, -4f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_idle_a_jb", 8f, -4f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_exit_jb", 4f, -4f, -1, 0, 0f, false, false, false);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_entry_marnie", 4f, -4f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_idle_a_marnie", 8f, -4f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_exit_marnie", 4f, -4f, -1, 0, 0f, false, false, false);
					}
				}
				else if (Local_536[uParam0->f_3 /*6*/].f_4 == 2)
				{
					TASK::TASK_ACHIEVE_HEADING(0, Local_536[uParam0->f_3 /*6*/].f_3, 0);
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "peeing", 8f, -8f, -1, 0, 0f, false, false, false);
				}
				else if (Local_536[uParam0->f_3 /*6*/].f_4 == 3)
				{
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "hippy_a", 8f, -8f, -1, 1, 0f, false, false, false);
				}
				else if (Local_536[uParam0->f_3 /*6*/].f_4 == 1)
				{
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_entry_jb", 4f, -4f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_idle_a_jb", 8f, -4f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_exit_jb", 4f, -4f, -1, 0, 0f, false, false, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_165);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_165);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_165);
				uParam0->f_2 = 1;
			}
			else if (uParam0->f_2 == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("script_task_perform_sequence")) == 7)
				{
					Local_536[uParam0->f_3 /*6*/].f_5 = 0;
					uParam0->f_3 = -1;
					uParam0->f_1 = 1;
					uParam0->f_2 = 0;
				}
			}
			break;
		
		case 4:
			if (!func_354(*uParam0))
			{
				uParam0->f_1 = 0;
				uParam0->f_2 = 0;
			}
			else if (uParam0->f_2 == 0)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_4, 1f, 1f, 1f, false, true, 0) || iLocal_351 > 0)
				{
					if (!PED::IS_PED_IN_GROUP(*uParam0))
					{
						TASK::CLEAR_PED_TASKS(*uParam0);
						PED::SET_PED_AS_GROUP_MEMBER(*uParam0, func_333());
						PED::SET_PED_CONFIG_FLAG(*uParam0, 167, true);
					}
					iLocal_754 = MISC::GET_GAME_TIMER();
					if (iLocal_351 == 0)
					{
						PED::SET_GROUP_FORMATION(func_333(), 0);
					}
					else
					{
						PED::SET_GROUP_FORMATION(func_333(), 0);
					}
					PED::SET_GROUP_FORMATION_SPACING(func_333(), 4f, -1f, -1f);
					uParam0->f_2 = 1;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (!PED::IS_PED_IN_GROUP(*uParam0))
				{
					uParam0->f_1 = 5;
					uParam0->f_2 = 0;
				}
				if (TASK::IS_PED_STILL(*uParam0))
				{
					if (!iLocal_348)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_754) > 6000)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_165);
							if (*uParam0 == Local_604[1 /*8*/])
							{
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_entry_jb", 4f, -4f, -1, 0, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_idle_a_jb", 8f, -4f, -1, 0, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_exit_jb", 4f, -4f, -1, 0, 0f, false, false, false);
							}
							else
							{
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_entry_marnie", 4f, -4f, -1, 0, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_idle_a_marnie", 8f, -4f, -1, 0, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_exit_marnie", 4f, -4f, -1, 0, 0f, false, false, false);
							}
							TASK::CLOSE_SEQUENCE_TASK(iLocal_165);
							TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_165);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_165);
							if (!func_287() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (*uParam0 == Local_604[1 /*8*/])
								{
									func_315(&uLocal_166, "EPS4AUD", "EPS4_DAWDJ", 7, 0, 0, 0);
								}
								else
								{
									func_315(&uLocal_166, "EPS4AUD", "EPS4_DAWDM", 7, 0, 0, 0);
								}
							}
							iLocal_348 = 1;
						}
					}
					else
					{
						iLocal_754 = MISC::GET_GAME_TIMER();
						if (!func_289(*uParam0, joaat("script_task_perform_sequence")))
						{
							iLocal_348 = 0;
						}
					}
				}
				else
				{
					iLocal_754 = MISC::GET_GAME_TIMER();
					iLocal_348 = 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
				{
					if ((((MISC::GET_GAME_TIMER() - iLocal_755) > 7500 && !func_287()) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !iLocal_335)
					{
						if (*uParam0 == Local_604[1 /*8*/])
						{
							if (func_315(&uLocal_166, "EPS4AUD", "EPS4_MESSJ", 7, 0, 0, 0))
							{
								iLocal_755 = MISC::GET_GAME_TIMER();
							}
						}
						else if (func_315(&uLocal_166, "EPS4AUD", "EPS4_MESSM", 7, 0, 0, 0))
						{
							iLocal_755 = MISC::GET_GAME_TIMER();
						}
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_757) > 15000)
				{
					if ((((iLocal_756 < 4 && !func_287()) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !iLocal_335) && !func_355())
					{
						if (*uParam0 == Local_604[1 /*8*/])
						{
							if (func_315(&uLocal_166, "EPS4AUD", "EPS4_PROMPTJ", 7, 0, 0, 0))
							{
								iLocal_757 = MISC::GET_GAME_TIMER();
								iLocal_756++;
							}
						}
						else if (func_315(&uLocal_166, "EPS4AUD", "EPS4_PROMPTM", 7, 0, 0, 0))
						{
							iLocal_757 = MISC::GET_GAME_TIMER();
							iLocal_756++;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!func_354(*uParam0))
			{
				uParam0->f_1 = 0;
				uParam0->f_2 = 0;
			}
			else if (uParam0->f_2 == 0)
			{
				TASK::TASK_GO_TO_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 20000, 4.5f, 2f, 2f, 0);
				uParam0->f_2 = 1;
			}
			else if (uParam0->f_2 == 1)
			{
				PED::SET_PED_AS_GROUP_MEMBER(*uParam0, func_333());
				if (PED::IS_PED_IN_GROUP(*uParam0))
				{
					uParam0->f_1 = 4;
					uParam0->f_2 = 0;
				}
			}
			break;
		
		default:
			break;
	}
}

int func_333()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_334(int iParam0)
{
	if (func_354(iParam0) && func_235(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_621 == 0)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0) && PED::IS_PED_RAGDOLL(iParam0))
			{
				func_409("Player knocked Eps over!");
				iLocal_621 = 1;
				iLocal_622 = iParam0;
				TASK::CLEAR_PED_TASKS(iParam0);
			}
		}
		else if (func_354(iLocal_622))
		{
			if (TASK::IS_PED_GETTING_UP(iLocal_622) || PED::IS_PED_ON_FOOT(iLocal_622))
			{
				if (!func_287() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (iLocal_622 == Local_604[1 /*8*/])
					{
						if (func_315(&uLocal_166, "EPS4AUD", "EPS4_JKNOCK", 7, 0, 0, 0))
						{
							iLocal_621 = 0;
							iLocal_622 = 0;
						}
					}
					else if (func_315(&uLocal_166, "EPS4AUD", "EPS4_MKNOCK", 7, 0, 0, 0))
					{
						iLocal_621 = 0;
						iLocal_622 = 0;
					}
				}
			}
		}
	}
}

bool func_335(var uParam0, struct<2> Param1, float fParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1.f_0)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_336(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	AUDIO::PLAY_SOUND_FROM_ENTITY(Local_623.f_2, "DEVICE", PLAYER::PLAYER_PED_ID(), "EPSILONISM_04_SOUNDSET", false, 0);
	if (Local_623.f_13 == 0)
	{
		Local_623.f_8 = uParam0;
		Local_623.f_9 = uParam1;
		Local_623.f_10 = uParam2;
		Local_623.f_11 = uParam3;
		Local_623.f_12 = uParam4;
	}
	Local_623.f_6 = 0;
	Local_623.f_7 = 0;
	Local_623.f_14 = "NO_RECENT_ANIM";
}

void func_337(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_338(var uParam0, int iParam1)
{
	if (func_354(*uParam0))
	{
		if (uParam0->f_1 == 2)
		{
			Local_536[iParam1 /*6*/].f_5 = 0;
		}
		uParam0->f_1 = 2;
		uParam0->f_2 = 0;
		Local_536[iParam1 /*6*/].f_5 = 1;
		uParam0->f_3 = iParam1;
		if (PED::IS_PED_IN_GROUP(*uParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(*uParam0);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0);
		ENTITY::SET_ENTITY_COORDS(*uParam0, Local_536[iParam1 /*6*/], true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(*uParam0, Local_536[iParam1 /*6*/].f_3);
	}
	else
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
	}
}

void func_339(var uParam0, var uParam1)
{
	if (func_354(*uParam0))
	{
		uParam0->f_1 = 1;
		uParam0->f_2 = 0;
		if (uParam0->f_3 != -1)
		{
			Local_536[uParam0->f_3 /*6*/].f_5 = 0;
		}
		uParam0->f_3 = uParam1;
	}
	else
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
	}
}

void func_340(var uParam0, bool bParam1)
{
	if (func_354(*uParam0) && func_354(PLAYER::PLAYER_PED_ID()))
	{
		uParam0->f_1 = 4;
		uParam0->f_2 = 0;
		TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		if (bParam1)
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 0);
		}
		uParam0->f_4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	else
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
	}
}

void func_341(int iParam0, int iParam1, int iParam2)
{
	if (func_421() && func_342())
	{
		while (Global_101683 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_30(0);
	}
}

bool func_342()
{
	return BitTest(Global_101688.f_20, 13);
}

int func_343()
{
	if ((func_346() && func_345()) && func_344())
	{
		return 1;
	}
	return 0;
}

int func_344()
{
	STREAMING::REQUEST_ANIM_DICT("rcm_epsilonism4");
	STREAMING::REQUEST_ANIM_DICT("rcm_epsilonism4leadinout");
	if (STREAMING::HAS_ANIM_DICT_LOADED("rcm_epsilonism4") && STREAMING::HAS_ANIM_DICT_LOADED("rcm_epsilonism4leadinout"))
	{
		return 1;
	}
	return 0;
}

int func_345()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_534)
	{
		STREAMING::REQUEST_MODEL(Local_361[iVar0 /*43*/]);
		iVar0++;
	}
	STREAMING::REQUEST_MODEL(iLocal_158);
	STREAMING::REQUEST_MODEL(joaat("bison"));
	iVar0 = 0;
	while (iVar0 < iLocal_534)
	{
		if (!STREAMING::HAS_MODEL_LOADED(Local_361[iVar0 /*43*/]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_158) || !STREAMING::HAS_MODEL_LOADED(joaat("bison")))
	{
		return 0;
	}
	return 1;
}

int func_346()
{
	HUD::REQUEST_ADDITIONAL_TEXT("EPS4", 0);
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 1;
	}
	return 0;
}

void func_347()
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		func_409("Can request assets for cutscene entity in Eps 4");
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
		if (func_235(PLAYER::PLAYER_PED_ID()))
		{
			func_300("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
		}
	}
	if (Local_770.f_3 == 1)
	{
		func_308(1, 1);
		CUTSCENE::REMOVE_CUTSCENE();
		func_409("SKIP: Doing sync for intro skip");
		if (!func_420(0))
		{
			func_299(1, 1, 1);
		}
		Local_770.f_3 = 0;
	}
	if (Local_770.f_1 == 0)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REQUEST_CUTSCENE("ep_4_rcm_concat", 8);
		}
		func_409("In Intro setup, waiting for cutscene to be ready...");
		if (func_283(1, 1093140480, 0))
		{
			func_409("Starting intro cutscene...");
			if (func_354(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
			}
			if (func_354(Local_81.f_28[0]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_81.f_28[0], "Marnie", 0, 0, 0);
			}
			if (func_354(Local_81.f_28[1]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_81.f_28[1], false);
				if (func_235(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_81.f_28[1], 1)))
				{
					iLocal_639 = func_276(Local_81.f_28[1], joaat("weapon_digiscanner"), 1, 0, 0, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_639, "Artefact_Detector", 0, 0, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_81.f_28[1], "Jimmy_Boston", 0, 0, 0);
			}
			if (func_354(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("EPS4_START");
			func_351();
			RECORDING::REPLAY_START_EVENT(1);
			CUTSCENE::START_CUTSCENE(0);
			SYSTEM::WAIT(0);
			CAM::STOP_GAMEPLAY_HINT(false);
			func_299(1, 1, 0);
			func_267(1833.393f, 4703.849f, 32.50218f, 1819.368f, 4693.413f, 43.89163f, 18f, 1816.55f, 4683.33f, 37.75f, 339.76f, func_275(), 1, 1, 1, 0, 0);
			func_262(1812f, 4697f, 39.1f, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
			while (!func_343())
			{
				SYSTEM::WAIT(0);
			}
			func_409("Loaded all assets! Moving to intro run loop...");
			Local_770.f_1 = 1;
		}
	}
	if (Local_770.f_1 == 1)
	{
		func_255();
		if (Local_770.f_4)
		{
			CUTSCENE::STOP_CUTSCENE(false);
			func_243(2);
			Local_770.f_1 = 3;
		}
		else if (Local_770.f_6)
		{
			CUTSCENE::STOP_CUTSCENE(false);
			Local_770.f_1 = 3;
		}
		else if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			func_243(2);
			Local_770.f_1 = 3;
		}
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		}
		if (func_235(PLAYER::PLAYER_PED_ID()))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				func_409("*** Forcing Michael's move state");
				func_350(PLAYER::PLAYER_PED_ID(), 1827.161f, 4698.645f, 38.094f, 184.1384f, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_157, -1, true, true);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
		{
			RECORDING::REPLAY_STOP_EVENT();
			func_409("*** Teleport Mike");
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			func_350(PLAYER::PLAYER_PED_ID(), 1827.161f, 4698.645f, 38.094f, 184.1384f, 0, 1);
		}
		func_349();
		func_348();
		if (func_235(iLocal_639))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Artefact_Detector", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_639, PLAYER::PLAYER_PED_ID());
				func_5(&iLocal_639);
			}
		}
	}
	if (Local_770.f_1 == 3)
	{
		func_409("Doing intro cleanup and progressing");
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			iLocal_351 = 0;
			func_245(1, 0, 1, 1);
			func_380(&Local_81, 0, 1);
			func_379();
		}
	}
}

void func_348()
{
	float fVar0;
	
	if (func_235(Local_604[1 /*8*/]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy_Boston", 0))
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(1829.8f, 4693.48f, 38.5f, &fVar0, false, false);
			ENTITY::SET_ENTITY_COORDS(Local_604[1 /*8*/], 1829.8f, 4693.48f, fVar0, true, false, false, true);
		}
	}
}

void func_349()
{
	if (func_235(Local_604[0 /*8*/]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Marnie", 0))
		{
			func_339(&(Local_604[0 /*8*/]), uLocal_760);
			Local_604[0 /*8*/].f_1 = 1;
			Local_604[0 /*8*/].f_2 = 1;
			if (Local_604[0 /*8*/].f_3 != -1)
			{
				Local_536[Local_604[0 /*8*/].f_3 /*6*/].f_5 = 0;
			}
			Local_604[0 /*8*/].f_3 = uLocal_760;
			TASK::TASK_GO_STRAIGHT_TO_COORD(Local_604[0 /*8*/], Local_536[Local_604[0 /*8*/].f_3 /*6*/], 1f, -1, 40000f, 0.5f);
			PED::FORCE_PED_MOTION_STATE(Local_604[0 /*8*/], joaat("MotionState_Walk"), false, 1, true);
			Local_604[0 /*8*/].f_7 = 1;
			func_409("Done Marnie intro exit state");
		}
	}
}

int func_350(int iParam0, struct<3> Param1, float fParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_235(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar1, false, false);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, bParam6);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_351()
{
	int iVar0;
	
	iVar0 = func_221();
	if (iVar0 == -1)
	{
		return;
	}
	Global_113222[iVar0 /*10*/] = 1;
}

void func_352()
{
	func_406();
	if (Local_770.f_3 == 1)
	{
		func_308(1, 1);
		func_409("SKIP: Doing sync for leadin skip");
		func_299(1, 1, 1);
		Local_770.f_3 = 0;
	}
	if (Local_770.f_1 == 0)
	{
		iLocal_352 = MISC::GET_GAME_TIMER();
		if (!func_420(0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.621f, 4698.734f, 41.36862f, 1831.158f, 4680.191f, 32.42626f, 16.5f, false, true, 0))
		{
			func_409("Doing setup for leadin");
			func_337(&uLocal_166, 4, Local_81.f_28[0], "MARNIE", 0, 1);
			if (func_344())
			{
				Local_770.f_1 = 1;
			}
		}
		else
		{
			func_409("Skipping setup for leadin (repeat play/wrong area)");
			Local_770.f_1 = 1;
		}
	}
	if (Local_770.f_1 == 1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_352) > 1250)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "IDLE_BEEP_NPC", 1827.06f, 4700.52f, 39.16f, "EPSILONISM_04_SOUNDSET", false, 0, false);
			iLocal_352 = MISC::GET_GAME_TIMER();
		}
		if (!func_420(0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.621f, 4698.734f, 41.36862f, 1831.158f, 4680.191f, 32.42626f, 16.5f, false, true, 0))
		{
			if (func_234(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 1) >= 3f)
			{
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (!iLocal_331)
					{
						if (func_235(Local_81.f_28[0]))
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(Local_81.f_28[0], 0f, 0f, 0.2f, true, 30000, 2000, 2000, 0);
							CAM::SET_GAMEPLAY_HINT_FOV(fLocal_765);
							CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_766);
							CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_767);
							CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_768);
							CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_769);
							CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
							if (func_235(PLAYER::PLAYER_PED_ID()))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_165);
								TASK::TASK_LOOK_AT_ENTITY(0, Local_81.f_28[0], 15000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1827.34f, 4697.22f, 38.02f, 1f, 20000, 0.25f, 1, 40000f);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_81.f_28[0], 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_165);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_165);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_165);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							}
							iLocal_331 = 1;
						}
					}
				}
				else
				{
					CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
				}
			}
			else
			{
				iLocal_331 = 1;
			}
			if (!iLocal_332)
			{
				if (func_354(Local_81.f_28[0]) && !func_287())
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_81.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 48, 2);
					TASK::TASK_PLAY_ANIM(Local_81.f_28[0], "rcm_epsilonism4leadinout", "ep_4_rcm_leadin_marnie", 8f, -8f, -1, 2, 0f, false, false, false);
					CUTSCENE::REMOVE_CUTSCENE();
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("EP_4_RCM_CONCAT", 2, 8);
					func_409("Done Marnie leadin anim - request concat cutscene");
					iLocal_332 = 1;
				}
			}
			else if (func_354(Local_81.f_28[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_81.f_28[0], "rcm_epsilonism4leadinout", "ep_4_rcm_leadin_marnie", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_81.f_28[0], "rcm_epsilonism4leadinout", "ep_4_rcm_leadin_marnie") > 0.25f)
					{
						if (!iLocal_333)
						{
							if (func_315(&uLocal_166, "EPS4AUD", "ESP4_RCL", 8, 0, 0, 0))
							{
								func_409("Leadin convo done");
								iLocal_333 = 1;
							}
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_81.f_28[0], "rcm_epsilonism4leadinout", "ep_4_rcm_leadin_marnie") > 0.95f)
					{
						func_409("Leadin done, launch cutscene");
						func_243(1);
						Local_770.f_1 = 3;
					}
					if (func_234(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 1) <= 1.5f)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
			}
		}
		else
		{
			func_409("Replay in progress/wrong area, skipping leadin");
			func_243(1);
			Local_770.f_1 = 3;
		}
	}
	if (Local_770.f_1 == 3)
	{
		func_409("Doing leadin cleanup and progressing");
		func_379();
	}
}

int func_353(int iParam0)
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true);
	return uVar0;
}

int func_354(int iParam0)
{
	if (func_235(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_355()
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_356(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_79794 != 6)
	{
		if (Global_79796 == -1)
		{
			if (func_367(1, Param0))
			{
				if (Global_79797 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_19 > fVar0)
				{
					Global_79796 = MISC::GET_GAME_TIMER();
					Local_20 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_19 = 0f;
				}
				else
				{
					fLocal_19 = (fLocal_19 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_19 = 0f;
			}
		}
		else
		{
			if (!func_367(0, Param0))
			{
				Global_79796 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_79796);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_79794)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar12 = func_265();
				if (Global_79797 == 1 && Global_79795 == 62)
				{
					iVar12 = Global_114135.f_2367.f_539.f_4322;
				}
				switch (iVar12)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { func_358(Global_79795, Global_79797, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar6, fVar7, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_24 = 0.14f;
				}
				else
				{
					fLocal_24 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_357(&Var4) > fLocal_24)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_20.f_0, (Local_20.f_1 + fLocal_23));
							Global_79799 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_79798 == 1)
				{
					func_191();
					fLocal_19 = 0f;
				}
			}
			else
			{
				func_191();
				fLocal_19 = 0f;
			}
		}
	}
}

float func_357(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

struct<2> func_358(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar2;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_366(iParam0) };
			break;
		
		case 7:
			Var0 = { func_175(iParam0) };
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_365(iParam2) };
					break;
				
				case 8:
					Var0 = { func_364(iParam2) };
					break;
				
				case 7:
					Var0 = { func_363(iParam2) };
					break;
				
				case 10:
					Var0 = { func_362(iParam2) };
					break;
				
				case 5:
					Var0 = { func_361(iParam2) };
					break;
				
				case 4:
					Var0 = { func_360(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_359(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_359(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_360(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_361(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_362(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_363(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_364(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_365(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_366(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_92451[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_114135.f_9089.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_367(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_369(0) || Global_79810) || Global_79798 == 1) || !CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	switch (Global_79794)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(&uParam1, "NONE") || MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
			{
				Global_79794 = 3;
			}
			else
			{
				Global_79794 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				Global_79794 = 2;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				Global_79794 = 4;
				return 1;
			}
			else if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				Global_79794 = 3;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
			}
			else
			{
				Global_79794 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_79794 = 5;
			}
			break;
		
		case 5:
			if ((CUTSCENE::IS_CUTSCENE_PLAYING() || func_229(0)) || func_368(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_368(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23831.f_4 && Global_23831.f_104 == 4);
	}
	return Global_23831.f_4;
}

int func_369(int iParam0)
{
	if (Global_44181 == 15)
	{
		return 0;
	}
	if (func_370(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_370(int iParam0)
{
	return func_371(iParam0, Global_44181);
}

int func_371(int iParam0, int iParam1)
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

void func_372(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_9622 = iParam0;
	if (Global_120[iParam0 /*10*/].f_8 != 184)
	{
		func_325();
		if (iParam1 == 4)
		{
			func_378(iParam0, 0, 1);
			func_378(iParam0, 1, 1);
			func_378(iParam0, 2, 1);
			func_377(iParam0, 0, 1);
			func_377(iParam0, 1, 1);
			func_377(iParam0, 2, 1);
		}
		else
		{
			if (func_376(iParam0, iParam1) == 1 && func_375(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_378(iParam0, iVar0, 1);
			func_377(iParam0, iVar0, 1);
			if (iParam0 == 172 && !BitTest(Global_2739811.f_7008, 4))
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !BitTest(Global_2739811.f_7008, 3))
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !BitTest(Global_2739811.f_7008, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_79539)
			{
				if (iParam1 != 4)
				{
					if (Global_21066 != iParam1)
					{
						Global_9595[iParam1 /*4*/] = { func_374(iParam0) };
						Global_9612[iParam1] = 1;
						Global_9617[iParam1] = iParam0;
					}
					else if (iParam0 == Global_21066)
					{
					}
					else
					{
						Global_9546[1 /*6*/] = { func_374(iParam0) };
						Global_9546[1 /*6*/].f_5 = iParam1;
						func_373();
					}
				}
				else
				{
					Global_9546[1 /*6*/] = { func_374(iParam0) };
					Global_9546[1 /*6*/].f_5 = iParam1;
					func_373();
				}
			}
			else
			{
				Global_9546[1 /*6*/] = { func_374(iParam0) };
				Global_9546[1 /*6*/].f_5 = iParam1;
				func_373();
			}
		}
	}
}

void func_373()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[Global_9622 /*29*/].f_7)), 64);
	if (Global_9641 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_9546[1 /*6*/])), 64);
		sVar32 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_9546[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8919, 0);
}

struct<4> func_374(int iParam0)
{
	return Global_2201[iParam0 /*29*/].f_3;
}

int func_375(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2201[iParam0 /*29*/].f_24[iParam1];
}

int func_376(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2201[iParam0 /*29*/].f_12[iParam1];
}

void func_377(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2201[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_114135.f_28055[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_378(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2201[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_114135.f_28055[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_379()
{
	if ((Local_770.f_4 || Local_770.f_5) || Local_770.f_6)
	{
		Local_770.f_3 = 1;
		if (Local_770.f_8 == 1)
		{
			func_409("Sync for skip is TRUE and Intro is queued!");
		}
	}
	else
	{
		Local_770.f_3 = 0;
	}
	if (Local_770.f_6)
	{
		switch (Local_770.f_7)
		{
			case 0:
				Local_770.f_8 = 1;
				break;
			
			case 1:
				Local_770.f_8 = 2;
				iLocal_351 = 0;
				break;
			
			case 2:
				Local_770.f_8 = 3;
				iLocal_351 = 0;
				break;
			
			case 3:
				Local_770.f_8 = 2;
				iLocal_351 = 1;
				break;
			
			case 4:
				Local_770.f_8 = 3;
				iLocal_351 = 1;
				break;
			
			case 5:
				Local_770.f_8 = 2;
				iLocal_351 = 2;
				break;
			
			case 6:
				Local_770.f_8 = 3;
				iLocal_351 = 2;
				break;
			}
	}
	Local_770.f_4 = 0;
	Local_770.f_5 = 0;
	Local_770.f_6 = 0;
	Local_770.f_0 = Local_770.f_8;
	Local_770.f_1 = 0;
	Local_770.f_2 = 0;
}

void func_380(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_235(uParam0->f_28[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_28[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_235(uParam0->f_35[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_35[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_235(uParam0->f_41[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_41[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), bParam1, 0);
		if (bParam2)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		}
	}
}

void func_381(int iParam0)
{
	Local_770.f_7 = iParam0;
	Local_770.f_6 = 1;
}

void func_382(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_421())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_101688.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		Global_101684 = { Param0 };
		Global_101687 = fParam3;
		Global_101683 = 1;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(Global_101688.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_101688.f_20), 14);
		}
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_101688.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_101688.f_20), 24);
		}
		func_30(1);
	}
}

int func_383()
{
	if (!Global_101688 == 10 && !Global_101688 == 9)
	{
		return 0;
	}
	return Global_101688.f_2;
}

int func_384(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6)
{
	if (iParam5 != 0)
	{
		*uParam0 = iParam5;
		func_409("*** Epsilonist exists, grabbing ped index");
	}
	else
	{
		*uParam0 = PED::CREATE_PED(5, iParam6, Param1, fParam4, true, true);
		func_409("*** Epsilonist does not exist, creating new");
	}
	if (func_354(*uParam0))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam0, 132, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("player"));
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, true);
		PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		PED::SET_PED_KEEP_TASK(*uParam0, true);
		uParam0->f_1 = 3;
		uParam0->f_2 = 0;
		uParam0->f_3 = -1;
		return 1;
	}
	return 0;
}

void func_385(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { uParam0->f_2 };
	func_386("Rock created at: ", uParam0->f_2);
	uParam0->f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(*uParam0, Var0, true, true, false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_1, uParam0->f_5, 0, true);
		func_386("Rock rot vector: ", ENTITY::GET_ENTITY_ROTATION(uParam0->f_1, 0));
		func_386("Rock actual position: ", ENTITY::GET_ENTITY_COORDS(uParam0->f_1, false));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_1, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1, true);
	}
}

void func_386(char* sParam0, struct<3> Param1)
{
	sParam0 = sParam0;
	Param1 = { Param1 };
}

void func_387()
{
	Local_623.f_2 = AUDIO::GET_SOUND_ID();
	Local_623.f_3 = AUDIO::GET_SOUND_ID();
	Local_623.f_4 = AUDIO::GET_SOUND_ID();
	Local_623.f_5 = AUDIO::GET_SOUND_ID();
	Local_623.f_12 = 0.92f;
	Local_623.f_13 = 0;
	Local_623.f_14 = "NO_RECENT_ANIM";
	iLocal_163 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("digiscanner");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_163))
	{
		SYSTEM::WAIT(0);
	}
	if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("digiscanner"))
	{
		HUD::REGISTER_NAMED_RENDERTARGET("digiscanner", false);
	}
	HUD::LINK_NAMED_RENDERTARGET(iLocal_158);
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("digiscanner"))
	{
		iLocal_164 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("digiscanner");
	}
}

void func_388()
{
	Local_770.f_4 = 0;
	Local_770.f_5 = 0;
	Local_770.f_6 = 0;
	Local_770.f_3 = 0;
	Local_770.f_8 = -1;
}

void func_389()
{
	func_405(joaat("prop_tv_test"), 1751.65f, 4676.77f, 43.03f, -2.33f, 0.99f, 91.36f);
	func_404(1755.463f, 4678.62f, 44.1477f, -9.5251f, 0f, 122.2955f, 50.832f);
	func_403(3f, -4.5f, 0f);
	func_402(1689.951f, 4762.613f, 40.9216f, 272.5499f);
	func_401(1779.514f, 4691.447f, 39.34577f, 1744.225f, 4674.646f, 46.84829f, 16.5f);
	func_400("EPS4_JCHAT1", sLocal_159);
	func_399("EPS4_JGOOD", "EPS4_JBAD");
	func_398("EPS4_JRET1", "EPS4_JRET2");
	func_397("EPS4_JCLOSE");
	func_396(0f, 0f, 0f);
	func_395(30f, 115f, 0.9f);
	func_405(joaat("prop_battery_01"), 1756.68f, 4832.28f, 39.43f, 90f, 13.21f, 78.57f);
	func_404(1758.032f, 4826.561f, 41.459f, -11.6785f, 0f, 6.5381f, 34.3083f);
	func_403(2f, 4f, 0f);
	func_402(1690.267f, 4769.994f, 40.9216f, 269.3043f);
	func_401(1750.065f, 4833.117f, 36.87026f, 1763.224f, 4831.822f, 43.5425f, 13.75f);
	func_400("EPS4_MCHAT1", "EPS4_MCHAT2");
	func_399("EPS4_MGOOD", "EPS4_MBAD");
	func_398("EPS4_MRET1", "EPS4_MRET2");
	func_397("EPS4_MCLOSE");
	func_396(0f, 0f, 0f);
	func_395(30f, 195f, 0.9f);
	func_405(joaat("prop_old_boot"), 1847.863f, 4756.059f, 36.71f, -70.53f, 75.48f, 132.44f);
	func_404(1829.31f, 4756.158f, 42.4876f, -23.5614f, 0f, -92.2873f, 50f);
	func_403(7.5f, -7.5f, 0f);
	func_402(1689.775f, 4777.77f, 40.9216f, 267.4597f);
	func_401(1856.218f, 4755.223f, 34.67169f, 1841.114f, 4755.489f, 41.43402f, 13.75f);
	func_400("EPS4_PCHAT1", "EPS4_PCHAT2");
	func_399("EPS4_PGOOD", "EPS4_PBAD");
	func_398(sLocal_159, "EPS4_PRET2");
	func_397("EPS4_PCLOSE");
	func_396(0f, 0f, 0f);
	func_395(20.5f, 155f, 0.9f);
	func_394(1820.101f, 4701.099f, 38.545f, 280.7432f, 0);
	func_394(1803.044f, 4700.244f, 39.3123f, 72.1396f, 0);
	func_394(1820.482f, 4672.535f, 35.6368f, 253.4126f, 0);
	func_394(1819.87f, 4694.03f, 38.408f, 231.2265f, 0);
	func_394(1807.122f, 4684.418f, 38.5566f, 150.6129f, 0);
	func_394(1791.058f, 4689.403f, 40.5128f, 103.4073f, 0);
	func_394(1872.626f, 4718.827f, 37.2889f, 210.8288f, 1);
	uLocal_758 = func_394(1764.089f, 4665.879f, 42.3031f, 281.6336f, 2);
	uLocal_760 = func_394(1814.27f, 4651.32f, 37.58f, 173.1089f, 0);
	iLocal_759 = func_394(1846.512f, 4705.614f, 38.1214f, 25.7591f, 3);
	uLocal_761 = func_394(1790.414f, 4722.897f, 37.8533f, 221.4777f, 0);
	func_393(&uLocal_640);
	func_392(&uLocal_640, 1897.42f, 4596.51f, 36.4f);
	func_392(&uLocal_640, 1912.2f, 4676.93f, 39.44f);
	func_392(&uLocal_640, 1886.09f, 4733.68f, 39.48f);
	func_392(&uLocal_640, 1800.24f, 4820.64f, 40.96f);
	func_392(&uLocal_640, 1796.556f, 4893.541f, 40.4741f);
	func_392(&uLocal_640, 1782.651f, 4916.333f, 41.4418f);
	func_392(&uLocal_640, 1746.552f, 4942.362f, 42.8677f);
	func_392(&uLocal_640, 1702.537f, 4893.824f, 36.7751f);
	func_392(&uLocal_640, 1707.273f, 4814.81f, 40.9407f);
	func_392(&uLocal_640, 1729.46f, 4655.21f, 42.61f);
	func_392(&uLocal_640, 1772.05f, 4602.143f, 36.457f);
	func_391(&uLocal_640);
	func_390(&uLocal_692, &uLocal_640, 20f);
}

void func_390(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	if (uParam1->f_46 < 3)
	{
	}
	iVar0 = (uParam1->f_46 - 1);
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_46 = uParam1->f_46;
	while (iVar1 < uParam1->f_46)
	{
		Var3 = { *(uParam1[iVar1 /*3*/]) - *(uParam1[iVar0 /*3*/]) };
		Var6 = { *(uParam1[iVar2 /*3*/]) - *(uParam1[iVar1 /*3*/]) };
		Var3 = { Var3 / FtoV(SYSTEM::SQRT(((Var3.f_0 * Var3.f_0) + (Var3.f_1 * Var3.f_1)))) };
		Var6 = { Var6 / FtoV(SYSTEM::SQRT(((Var6.f_0 * Var6.f_0) + (Var6.f_1 * Var6.f_1)))) };
		Var9 = { Var3 - Var6 };
		Var9 = { Var9 / FtoV(SYSTEM::SQRT(((Var9.f_0 * Var9.f_0) + (Var9.f_1 * Var9.f_1)))) };
		if (func_335(uParam1, *(uParam1[iVar1 /*3*/]) + Var9))
		{
			Var9 = { -Var9 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + Var9 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_46);
	}
}

void func_391(var uParam0)
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = SYSTEM::VDIST2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = SYSTEM::SQRT(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_392(var uParam0, struct<3> Param1)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { Param1 };
	uParam0->f_46++;
}

void func_393(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

int func_394(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	if (iLocal_603 >= 11)
	{
	}
	iVar0 = iLocal_603;
	iLocal_603++;
	Local_536[iVar0 /*6*/] = { Param0 };
	Local_536[iVar0 /*6*/].f_3 = fParam3;
	Local_536[iVar0 /*6*/].f_4 = iParam4;
	Local_536[iVar0 /*6*/].f_5 = 0;
	return iVar0;
}

void func_395(float fParam0, float fParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = (iLocal_534 - 1);
	if (iVar0 < 0)
	{
	}
	Local_361[iVar0 /*43*/].f_21 = fParam0;
	Local_361[iVar0 /*43*/].f_23 = fParam1;
	Local_361[iVar0 /*43*/].f_22 = fParam2;
}

void func_396(float fParam0, float fParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = (iLocal_534 - 1);
	if (iVar0 < 0)
	{
	}
	Local_361[iVar0 /*43*/].f_18 = fParam0;
	Local_361[iVar0 /*43*/].f_19 = fParam1;
	Local_361[iVar0 /*43*/].f_20 = fParam2;
}

void func_397(char* sParam0)
{
	int iVar0;
	
	iVar0 = (iLocal_534 - 1);
	if (iVar0 < 0)
	{
	}
	Local_361[iVar0 /*43*/].f_42 = sParam0;
}

void func_398(char* sParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = (iLocal_534 - 1);
	if (iVar0 < 0)
	{
	}
	Local_361[iVar0 /*43*/].f_38 = sParam0;
	Local_361[iVar0 /*43*/].f_39 = sParam1;
}

void func_399(char* sParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = (iLocal_534 - 1);
	if (iVar0 < 0)
	{
	}
	Local_361[iVar0 /*43*/].f_40 = sParam0;
	Local_361[iVar0 /*43*/].f_41 = sParam1;
}

void func_400(char* sParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = (iLocal_534 - 1);
	if (iVar0 < 0)
	{
	}
	Local_361[iVar0 /*43*/].f_36 = sParam0;
	Local_361[iVar0 /*43*/].f_37 = sParam1;
}

void func_401(struct<3> Param0, struct<3> Param3, float fParam6)
{
	int iVar0;
	
	iVar0 = (iLocal_534 - 1);
	if (iVar0 < 0)
	{
	}
	Local_361[iVar0 /*43*/].f_25 = { Param0 };
	Local_361[iVar0 /*43*/].f_25 = { Param3 };
	Local_361[iVar0 /*43*/].f_31 = fParam6;
}

void func_402(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = (iLocal_534 - 1);
	if (iVar0 < 0)
	{
	}
	Local_361[iVar0 /*43*/].f_32 = { Param0 };
	Local_361[iVar0 /*43*/].f_35 = fParam3;
}

void func_403(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = (iLocal_534 - 1);
	if (iVar0 < 0)
	{
	}
	Local_361[iVar0 /*43*/].f_15 = { Param0 };
}

void func_404(struct<3> Param0, struct<3> Param3, float fParam6)
{
	int iVar0;
	
	iVar0 = (iLocal_534 - 1);
	if (iVar0 < 0)
	{
	}
	Local_361[iVar0 /*43*/].f_8 = { Param0 };
	Local_361[iVar0 /*43*/].f_11 = { Param3 };
	Local_361[iVar0 /*43*/].f_14 = fParam6;
}

void func_405(int iParam0, struct<3> Param1, struct<3> Param4)
{
	int iVar0;
	
	if (iLocal_534 >= 4)
	{
	}
	iVar0 = iLocal_534;
	iLocal_534++;
	Local_361[iVar0 /*43*/] = iParam0;
	Local_361[iVar0 /*43*/].f_2 = { Param1 };
	Local_361[iVar0 /*43*/].f_5 = { Param4 };
	Local_361[iVar0 /*43*/].f_23 = 150f;
	Local_361[iVar0 /*43*/].f_24 = -1f;
	Local_361[iVar0 /*43*/].f_36 = sLocal_159;
	Local_361[iVar0 /*43*/].f_37 = sLocal_159;
	Local_361[iVar0 /*43*/].f_38 = sLocal_159;
	Local_361[iVar0 /*43*/].f_39 = sLocal_159;
	Local_361[iVar0 /*43*/].f_40 = sLocal_159;
	Local_361[iVar0 /*43*/].f_41 = sLocal_159;
}

void func_406()
{
	func_408(0);
	func_288();
	func_407();
}

void func_407()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_290(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_leave_any_vehicle")) != 1)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
		}
	}
}

void func_408(int iParam0)
{
	if (func_228())
	{
		return;
	}
	if (!Global_21066.f_1 == 1)
	{
		if (func_229(0))
		{
			func_224(iParam0);
		}
		MISC::SET_BIT(&Global_8920, 2);
	}
}

void func_409(char* sParam0)
{
	sParam0 = sParam0;
}

int func_410(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return PED::ADD_SCENARIO_BLOCKING_AREA(Param0 - Var0, Param0 + Var0, false, true, true, true, 1);
}

int func_411()
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(1789.2f, 4658f, 30.73f, 1871.87f, 4745.51f, 40.17f, false, true, true, true, 1);
}

int func_412(var uParam0)
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	int iVar5;
	
	iVar0[0] = uLocal_78;
	iVar0[1] = uLocal_79;
	switch (iLocal_77)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 11.5f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "EP_4_RCM_CONCAT", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			func_419(&(uParam0->f_48), "rcm_epsilonism4", "ep_4_rcm_marnie_base_marnie", "ep_4_rcm_marnie_lookaround_marnie");
			iLocal_77 = 1;
			break;
		
		case 1:
			if (!func_418(&iVar0) || !func_416(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_77 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (func_354(PLAYER::PLAYER_PED_ID()))
			{
				iVar5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (func_413(&(uParam0->f_28[0]), 60, 1826.13f, 4698.88f, 38.92f, 21.63f, "EPSILON LAUNCHER RC - MARNIE", 1))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], iVar5);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, true);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				if (func_413(&(uParam0->f_28[1]), 55, 1827.24f, 4699.76f, 39.09f, 57.09f, "EPSILON LAUNCHER RC - JIMMY", 1))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[1], iVar5);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 132, true);
					PED::SET_PED_PROP_INDEX(uParam0->f_28[1], 1, 0, 0, false, 1);
					TASK::CLEAR_PED_TASKS(uParam0->f_28[1]);
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("weapon_digiscanner"), -1, true, true);
					TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcm_epsilonism4", "ep_4_rcm_jimmyboston_base_jb", 8f, -8f, -1, 1, 0f, false, false, false);
					func_350(uParam0->f_28[1], 1827.24f, 4699.76f, 39.09f, 57.09f, 1, 1);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (bVar4)
			{
				iLocal_77 = 3;
			}
			break;
		
		case 3:
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_413(int* iParam0, int iParam1, struct<3> Param2, float fParam5, char* sParam6, int iParam7)
{
	if (func_414(iParam0, iParam1, Param2, fParam5, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
				PED::SET_PED_MONEY(*iParam0, 0);
				if (iParam7 == 1)
				{
					PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
				}
			}
			PED::SET_PED_NAME_DEBUG(*iParam0, sParam6);
		}
		return 1;
	}
	return 0;
}

int func_414(int* iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_171(iParam1))
	{
		iVar0 = func_445(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, false, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
				}
			}
			func_415(*iParam0, iParam1);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_415(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_97497[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_416(var uParam0)
{
	if (func_417(uParam0))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_417(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0) || MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

int func_418(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_419(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = sParam3;
	STREAMING::REQUEST_ANIM_DICT(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

int func_420(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79788, 0);
}

int func_421()
{
	if (Global_101688 == 10 || Global_101688 == 9)
	{
		return 1;
	}
	return 0;
}

void func_422()
{
	func_351();
	if (func_424())
	{
		func_409("...Random Character Script was triggered so additional cleanup required");
	}
	if (func_354(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), iLocal_157);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0f);
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	GRAPHICS::REMOVE_GRASS_CULL_SPHERE(iLocal_358);
	if (func_235(Local_604[0 /*8*/]) && func_235(Local_604[1 /*8*/]))
	{
		if (PED::IS_PED_IN_GROUP(Local_604[0 /*8*/]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_604[0 /*8*/]);
		}
		else if (PED::IS_PED_IN_GROUP(Local_604[1 /*8*/]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_604[1 /*8*/]);
		}
	}
	func_423(&(Local_604[0 /*8*/]), 1, 1, 1);
	func_423(&(Local_604[1 /*8*/]), 1, 1, 1);
	HUD::RELEASE_NAMED_RENDERTARGET("digiscanner");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_160, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_161, false);
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_762);
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_763);
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_764);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_04_MIX"))
	{
		func_409("Stopping dynamic mix EPSILONISM_04_MIX");
		AUDIO::STOP_AUDIO_SCENE("EPSILONISM_04_MIX");
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_423(int* iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

int func_424()
{
	int iVar0;
	
	iVar0 = func_221();
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_113222[iVar0 /*10*/].f_4)
	{
		return 0;
	}
	Global_113222[iVar0 /*10*/].f_4 = 0;
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	HUD::CLEAR_ADDITIONAL_TEXT(2, true);
	if (!func_420(0))
	{
		if (Global_113222[iVar0 /*10*/].f_5 && Global_113222[iVar0 /*10*/].f_6)
		{
			Global_113222[iVar0 /*10*/].f_6 = 0;
		}
		if (!Global_113222[iVar0 /*10*/].f_6 && !Global_113222[iVar0 /*10*/].f_5)
		{
			Global_113222[iVar0 /*10*/].f_6 = 1;
		}
	}
	return 1;
}

void func_425(bool bParam0)
{
	int iVar0;
	
	func_441();
	if (!func_440())
	{
		iVar0 = func_221();
		if (iVar0 == -1)
		{
			return;
		}
		if (!Global_113222[iVar0 /*10*/].f_4)
		{
			return;
		}
		if (Global_113222[iVar0 /*10*/].f_5)
		{
			return;
		}
		if (Global_113222[iVar0 /*10*/].f_6)
		{
			return;
		}
		if (Global_95838 == Global_101725)
		{
			Global_114135.f_18578[iVar0 /*6*/].f_4++;
		}
		Global_95838 = Global_101725;
		if (bParam0)
		{
			func_179(iVar0, 1, 0);
			func_426(SCRIPT::GET_THIS_SCRIPT_NAME(), iVar0);
		}
		else
		{
			if (Global_113222[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				func_192(&(Global_113222[iVar0 /*10*/].f_9));
			}
			func_178(iVar0, 1, 1, 0);
		}
		Global_113222[iVar0 /*10*/].f_6 = 1;
	}
}

void func_426(char* sParam0, int iParam1)
{
	if (Global_101688 != 12)
	{
		if (func_427(sParam0, 6, iParam1))
		{
			Global_101688.f_1 = iParam1;
		}
	}
}

int func_427(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<32> Var1;
	int iVar33;
	
	func_34();
	func_439();
	Global_101688 = 0;
	StringCopy(&(Global_101688.f_3), sParam0, 32);
	Global_101688.f_11 = iParam1;
	MISC::PAUSE_DEATH_ARREST_RESTART(true);
	MISC::SET_FADE_OUT_AFTER_ARREST(false);
	MISC::SET_FADE_OUT_AFTER_DEATH(false);
	func_224(1);
	func_223(1);
	func_436(0);
	func_435(1);
	MISC::CLEAR_BIT(&(Global_101688.f_20), 9);
	MISC::CLEAR_BIT(&(Global_101688.f_20), 6);
	MISC::CLEAR_BIT(&(Global_101688.f_20), 20);
	MISC::CLEAR_BIT(&(Global_101688.f_20), 21);
	MISC::CLEAR_BIT(&(Global_101688.f_20), 5);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0))
				{
					MISC::SET_BIT(&(Global_101688.f_20), 5);
				}
			}
		}
	}
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	func_434(0);
	func_37(1);
	Global_101688.f_2 = Global_101725;
	if (func_433())
	{
		if (func_432())
		{
			if (Global_101725 >= func_429())
			{
				if (!BitTest(Global_92451[iParam2 /*34*/].f_15, 16))
				{
					if (Global_114135.f_9089.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_95839 = 1;
					}
				}
			}
		}
		else if (Global_101688.f_11 == 6)
		{
			func_181(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_114135.f_18578[iParam2 /*6*/].f_4 >= 2)
				{
					Global_95839 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_428(SCRIPT::GET_THIS_SCRIPT_NAME());
			if (iVar33 > -1)
			{
				if (Global_114135.f_24990.f_4[iVar33] >= 2)
				{
					Global_95839 = 1;
				}
			}
		}
	}
	return 1;
}

int func_428(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

int func_429()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_430(&(Global_101688.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_430(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = func_431(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_431(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_92451[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_432()
{
	if ((((Global_101688.f_11 == 0 || Global_101688.f_11 == 1) || Global_101688.f_11 == 2) || Global_101688.f_11 == 3) || Global_101688.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_433()
{
	if ((((Global_101688.f_11 == 0 || Global_101688.f_11 == 1) || Global_101688.f_11 == 2) || Global_101688.f_11 == 6) || Global_101688.f_11 == 3)
	{
		return 1;
	}
	if (Global_101688.f_11 == 5)
	{
		if (func_428(&(Global_101688.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_434(bool bParam0)
{
	HUD::DISPLAY_HUD(bParam0);
	HUD::DISPLAY_RADAR(bParam0);
}

void func_435(int iParam0)
{
	if (iParam0 == 1)
	{
		HUD::THEFEED_PAUSE();
		MISC::SET_BIT(&(Global_101688.f_20), 3);
	}
	else if (BitTest(Global_101688.f_20, 3))
	{
		HUD::THEFEED_RESUME();
		MISC::CLEAR_BIT(&(Global_101688.f_20), 3);
	}
}

void func_436(int iParam0)
{
	if (iParam0 == 1)
	{
		if (BitTest(Global_101688.f_20, 4))
		{
			func_438();
			MISC::CLEAR_BIT(&(Global_101688.f_20), 4);
		}
	}
	else
	{
		func_437();
		MISC::SET_BIT(&(Global_101688.f_20), 4);
	}
}

void func_437()
{
	Global_23831.f_5 = 1;
}

void func_438()
{
	Global_23831.f_5 = 0;
}

void func_439()
{
	Global_95839 = 0;
	Global_95840 = 0;
}

int func_440()
{
	if (((Global_101688 == 13 || Global_101688 == 10) || Global_101688 == 11) || Global_101688 == 12)
	{
		return 0;
	}
	return 1;
}

void func_441()
{
	Global_101723 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79772))
		{
			switch (func_265())
			{
				case 0:
					StringCopy(&Global_79772, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_79772, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_79772, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_79776, "", 16);
		}
		Global_101723 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79772))
		{
			switch (func_265())
			{
				case 0:
					StringCopy(&Global_79772, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_79772, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_79772, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_79776, "", 16);
		}
		Global_101723 = 0;
		MISC::SET_BIT(&(Global_101688.f_20), 25);
	}
}

void func_442(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
	}
}

void func_443(var uParam0)
{
	func_444(&(uParam0->f_28));
	func_444(&(uParam0->f_35));
	func_444(&(uParam0->f_41));
}

void func_444(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], false, true);
		}
		iVar0++;
	}
}

int func_445(int iParam0)
{
	if (!func_171(iParam0))
	{
		return func_170(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

