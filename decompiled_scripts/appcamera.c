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
	char* sLocal_17[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_31[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_45 = 0;
	char* sLocal_46[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	float fLocal_112 = 0f;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	char cLocal_143[16] = "";
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
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
	iLocal_57 = 1;
	bLocal_60 = true;
	bLocal_61 = true;
	fLocal_71 = 0f;
	fLocal_72 = 172f;
	fLocal_75 = 0.7f;
	iLocal_135 = 1200;
	iLocal_136 = 1200;
	iLocal_137 = 166;
	fLocal_155 = 0.5f;
	fLocal_156 = 0.85f;
	fLocal_157 = 0.5f;
	fLocal_158 = -0.25f;
	fLocal_159 = 0.25f;
	fLocal_160 = 0.3f;
	fLocal_161 = 0.3f;
	fLocal_162 = 0.075f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
	{
		fLocal_75 = 1f;
	}
	else
	{
		fLocal_75 = 0.7f;
	}
	if (!func_177())
	{
		Global_4541707 = 99;
		Global_4541708 = 99;
		iLocal_55 = 99;
	}
	else
	{
		Global_4541707 = 0;
		Global_4541708 = 0;
	}
	sLocal_17[0] = "No_Filter";
	sLocal_17[1] = "phone_cam1";
	sLocal_17[2] = "phone_cam2";
	sLocal_17[3] = "phone_cam3";
	sLocal_17[4] = "phone_cam4";
	sLocal_17[5] = "phone_cam5";
	sLocal_17[6] = "phone_cam6";
	sLocal_17[7] = "phone_cam7";
	sLocal_17[8] = "phone_cam8";
	sLocal_17[9] = "phone_cam9";
	sLocal_17[10] = "phone_cam10";
	sLocal_17[11] = "phone_cam11";
	sLocal_17[12] = "phone_cam12";
	sLocal_31[0] = "No_Border";
	sLocal_31[1] = "frame1";
	sLocal_31[2] = "frame2";
	sLocal_31[3] = "frame3";
	sLocal_31[4] = "frame4";
	sLocal_31[5] = "frame5";
	sLocal_31[6] = "frame6";
	sLocal_31[7] = "frame7";
	sLocal_31[8] = "frame8";
	sLocal_31[9] = "frame9";
	sLocal_31[10] = "frame10";
	sLocal_31[11] = "frame11";
	sLocal_31[12] = "frame12";
	sLocal_46[0] = "No_Expression";
	sLocal_46[1] = "mood_Aiming_1";
	sLocal_46[2] = "mood_Happy_1";
	sLocal_46[3] = "mood_smug_1";
	sLocal_46[4] = "mood_Injured_1";
	sLocal_46[5] = "mood_sulk_1";
	sLocal_46[6] = "mood_Angry_1";
	func_176();
	if (func_175(1, 1, !iLocal_62, 1))
	{
		iLocal_62 = 1;
	}
	func_174();
	iLocal_110 = AUDIO::GET_SOUND_ID();
	if (Global_20758 == 0)
	{
		fLocal_94 = 0.207f;
		fLocal_95 = 0.158f;
		fLocal_96 = 0.207f;
		fLocal_97 = 0.335f;
	}
	else
	{
		fLocal_94 = 0.24f;
		fLocal_95 = 0.258f;
		fLocal_96 = 0.24f;
		fLocal_97 = 0.435f;
	}
	Global_23199 = 0;
	Global_23200 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			Global_23199 = 1;
		}
		if (GRAPHICS::GET_USINGNIGHTVISION())
		{
			Global_23199 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
		{
			Global_23199 = 1;
		}
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			Global_23199 = 1;
		}
		if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
		{
			Global_23199 = 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_129 == 1)
			{
				Global_23199 = 1;
			}
			iLocal_147 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if ((((ENTITY::GET_ENTITY_MODEL(iLocal_147) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_147) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_147) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_147) == joaat("khanjali")) || (ENTITY::GET_ENTITY_MODEL(iLocal_147) == joaat("barrage") && VEHICLE::IS_TURRET_SEAT(iLocal_147, func_173(PLAYER::PLAYER_PED_ID(), 1))))
			{
				Global_23199 = 1;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_147, -1, false) == PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_147) > 0f)
				{
					if (!Global_79248)
					{
						if (!func_172(0))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), iLocal_147, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_79248)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		}
	}
	MISC::CLEAR_BIT(&Global_8683, 21);
	func_171(0);
	MISC::SET_BIT(&Global_8683, 17);
	if (Global_20755 == 0)
	{
		func_170();
	}
	else
	{
		iLocal_138 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("camera_gallery");
		iLocal_139 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_138) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_139))
		{
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 25, true);
		}
		if (Global_79248)
		{
			iLocal_142 = 2;
		}
		else
		{
			switch (func_169())
			{
				case 0:
					iLocal_142 = 2;
					break;
				
				case 2:
					iLocal_142 = 2;
					break;
				
				case 3:
					iLocal_142 = 2;
					break;
				}
		}
		func_168(iLocal_138, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_142), -1082130432, -1082130432, -1082130432, -1082130432);
		func_167(iLocal_138, "CLOSE_SHUTTER");
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "DISPLAY_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	Local_76 = { Global_20773 };
	Local_79 = { Global_20766[Global_20758 /*3*/] };
	Global_23200 = 1;
	iLocal_116 = 1;
	iLocal_117 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 0;
	iLocal_123 = 0;
	if (Global_20813.f_1 > 3)
	{
		Global_20813.f_1 = 8;
	}
	if (iLocal_129 == 0)
	{
		MISC::CLEAR_BIT(&Global_8685, 3);
	}
	func_165();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	if (NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV())
	{
	}
	if (Global_4718592.f_176767)
	{
	}
	if (Global_4718592.f_176769 == 1)
	{
		iLocal_154 = 1;
	}
	if (iLocal_154 == 1)
	{
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_20782);
		PAD::SET_INPUT_EXCLUSIVE(0, 186);
		RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0, 25, true);
		PAD::DISABLE_CONTROL_ACTION(0, 0, true);
		if (func_164())
		{
			if (!BitTest(Global_4542983, 2))
			{
				MISC::SET_BIT(&Global_4542983, 2);
				func_168(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_114372.f_14054.f_81)
		{
			if (!BitTest(Global_4542983, 13))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!BitTest(Global_8684, 28))
					{
						if ((iLocal_126 && iLocal_129 == 0) && !func_164())
						{
							MISC::SET_BIT(&Global_4542983, 13);
							Global_114372.f_14054.f_81 = 1;
							func_163("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_4718592.f_176766 == 0 && Global_4718592.f_176767 == 0)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			func_162();
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 44, true);
			PAD::DISABLE_CONTROL_ACTION(0, 47, true);
			PAD::DISABLE_CONTROL_ACTION(0, 91, true);
			PAD::DISABLE_CONTROL_ACTION(0, 92, true);
			PAD::DISABLE_CONTROL_ACTION(0, 68, true);
			if (iLocal_148 == 0)
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_20786);
			}
			PAD::SET_INPUT_EXCLUSIVE(0, Global_20783);
			if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !func_164())
			{
				iLocal_128 = 1;
				Global_20813.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
			{
				Global_20813.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (BitTest(Global_8684, 3))
			{
				Global_20813.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_154())
				{
					Global_20813.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					Global_20813.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
				if ((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (func_153())
					{
					}
					else
					{
						Global_20813.f_1 = 3;
						MISC::SET_GAME_PAUSED(false);
					}
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_79248 == 1)
					{
						Global_20813.f_1 = 3;
					}
				}
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						Global_20813.f_1 = 3;
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_152();
					iLocal_147 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_147) < 0f)
					{
						func_149(0);
					}
					if (iLocal_113 == 1)
					{
						if (iLocal_114 == 1)
						{
							if (!CAM::IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING())
							{
								func_149(0);
							}
						}
						else if (!CAM::IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING())
						{
							iLocal_114 = 1;
							SYSTEM::WAIT(0);
							RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
						}
					}
				}
				else if (Global_79248 == 0)
				{
					if (BitTest(Global_8683, 18))
					{
						func_148();
						if ((Global_20813 == 0 || Global_20813 == 1) || Global_20813 == 2)
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
								{
								}
								else
								{
									Global_20813.f_1 = 3;
									MISC::SET_GAME_PAUSED(false);
								}
							}
						}
					}
				}
			}
			if (iLocal_140)
			{
				func_147();
			}
			if (Global_20813.f_1 < 4)
			{
			}
			if (iLocal_151 == 0)
			{
				if (iLocal_101 == 0)
				{
					if (iLocal_102 == 0)
					{
						if (iLocal_109 == 0)
						{
							if (Global_20813.f_1 > 3)
							{
								if (iLocal_148)
								{
									func_145();
									if (Global_23204 == 0 && Global_23201 == 6)
									{
										HUD::CLEAR_FLOATING_HELP(0, true);
										HUD::BUSYSPINNER_OFF();
										iLocal_148 = 0;
										func_144();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
										}
										func_143();
										iLocal_107++;
										if (func_177())
										{
											func_168(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_168(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
										}
										iLocal_130 = 0;
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_125 = 0;
										func_129();
									}
									if (Global_23201 == 0)
									{
										iLocal_148 = 0;
										HUD::BUSYSPINNER_OFF();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
										}
										func_128();
										iLocal_130 = 0;
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_125 = 0;
										func_129();
										if (func_177())
										{
											if (Global_4541708 == 0)
											{
												if (!BitTest(Global_4542983, 2))
												{
													func_168(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!BitTest(Global_4542983, 2))
										{
											func_168(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_127();
										func_126(1);
									}
								}
								else if (Global_20813.f_1 != 9)
								{
									if (Global_23200 == 1)
									{
										if (Global_23199 == 0)
										{
											func_125();
										}
									}
									else if ((Global_9291 - Global_9290) > Global_9292)
									{
										if (CAM::IS_SCREEN_FADED_OUT() && func_124())
										{
											if (func_123() && iLocal_125)
											{
											}
											else if (iLocal_125 == 0)
											{
												MISC::SET_GAME_PAUSED(false);
												AUDIO::STOP_SOUND(iLocal_110);
												iLocal_141 = 0;
												if (Global_23199 == 0)
												{
													func_143();
													Global_23199 = 1;
													HUD::CLEAR_FLOATING_HELP(0, true);
													iLocal_126 = 0;
													iLocal_116 = 1;
													iLocal_117 = 1;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													func_122(0, 0);
													func_126(0);
													iLocal_113 = 0;
													func_117(1);
													iLocal_140 = 0;
													func_115(0, 1);
													func_168(Global_20794, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_113(1);
												}
											}
										}
										if (func_112(2, Global_20781, 0))
										{
											if (func_164())
											{
												if (((Global_1927715 || Global_1574971) || Global_23202) || BitTest(Global_8683, 21))
												{
												}
												else if (func_123() && iLocal_125)
												{
												}
												else if (!func_124())
												{
													if (iLocal_125 == 0)
													{
														CAM::DO_SCREEN_FADE_OUT(500);
														iLocal_141 = 0;
														func_115(1, 1);
														func_111(1);
													}
												}
											}
											else if (func_123() && iLocal_125)
											{
											}
											else if (iLocal_125 == 0)
											{
												MISC::SET_GAME_PAUSED(false);
												AUDIO::STOP_SOUND(iLocal_110);
												iLocal_141 = 0;
												if (Global_23199 == 0)
												{
													func_143();
													Global_23199 = 1;
													HUD::CLEAR_FLOATING_HELP(0, true);
													iLocal_126 = 0;
													iLocal_116 = 1;
													iLocal_117 = 1;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													func_122(0, 0);
													func_126(0);
													iLocal_113 = 0;
													func_117(1);
													iLocal_140 = 0;
													func_115(0, 1);
													func_168(Global_20794, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_99 == 0)
									{
										if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_110();
											iLocal_99 = 1;
										}
									}
									else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_110();
										iLocal_99 = 0;
									}
									if (iLocal_100 == 0)
									{
										if (BitTest(Global_8683, 28))
										{
											func_110();
											iLocal_100 = 1;
										}
									}
									else if (!BitTest(Global_8683, 28))
									{
										func_110();
										iLocal_100 = 0;
									}
									if (Global_23199 == 1)
									{
										func_99();
									}
									else if (Global_20813.f_1 > 4)
									{
										if (iLocal_122 == 1 && iLocal_123 == 0)
										{
											func_95();
										}
										if (iLocal_122 == 0 && iLocal_123 == 1)
										{
											func_128();
											if (iLocal_134 == 1 || iLocal_134 == 0)
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
													{
														func_167(iLocal_138, "CLOSE_SHUTTER");
														iLocal_133 = MISC::GET_GAME_TIMER();
														while (MISC::GET_GAME_TIMER() < (iLocal_133 + iLocal_135) && Global_20813.f_1 > 3)
														{
															func_162();
															func_147();
															func_94();
															RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
															SYSTEM::WAIT(0);
														}
													}
												}
												if (func_177())
												{
													if (Global_4541708 == 0)
													{
														if (!BitTest(Global_4542983, 2))
														{
															func_168(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!BitTest(Global_4542983, 2))
												{
													func_168(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_147();
												func_162();
												iLocal_130 = 0;
												iLocal_131 = 0;
												iLocal_132 = 0;
												iLocal_125 = 0;
												func_129();
												iLocal_134 = 0;
												func_167(iLocal_138, "OPEN_SHUTTER");
											}
											func_127();
											func_126(1);
											func_93();
										}
									}
									if (iLocal_141 == 1)
									{
										func_90();
									}
									if (iLocal_127)
									{
										if (SYSTEM::TIMERB() > 500)
										{
											iLocal_126 = 1;
											iLocal_127 = 0;
											MISC::SET_BIT(&Global_8683, 18);
											if (Global_23199 == 0)
											{
												func_115(1, 1);
											}
										}
									}
									if (iLocal_125 == 0)
									{
										if (iLocal_126 && Global_23199 == 0)
										{
											if ((iLocal_128 == 0 && iLocal_123 == 0) && Global_23202 == 0)
											{
												func_12();
											}
										}
										else
										{
											func_94();
										}
									}
									else if (iLocal_122 == 0)
									{
										func_7();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_20813.f_1 > 3)
					{
						if (Global_23200 == 1)
						{
							if (Global_23199 == 0)
							{
								func_125();
							}
						}
					}
					func_6();
				}
			}
			else
			{
				if (iLocal_153 == 1)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_150, "CELL_CAM_FW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_153 == 2)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_150, "", false, -1, "", "", true, 0);
				}
				if (iLocal_153 == 6)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_150, "", false, -1, "", "", true, 0);
				}
				if (iLocal_153 == 3)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_150, "", false, -1, "", "", true, 0);
				}
				if (iLocal_153 == 7)
				{
					if (MISC::IS_XBOX360_VERSION() || func_5())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_150, "", false, -1, "", "", true, 0);
					}
					if (MISC::IS_PS3_VERSION() || func_4())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_150, "", false, -1, "", "", true, 0);
					}
					if (MISC::IS_PC_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_150, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_153 == 4)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_150, "CELL_CAM_CCW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_153 == 5)
				{
					iVar0 = NETWORK::NETWORK_GET_AGE_GROUP();
					switch (iVar0)
					{
						case -1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_150, "", false, -1, "", "", true, 0);
							break;
						
						case 0:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_150, "", false, -1, "", "", true, 0);
							break;
						
						case 1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_150, "", false, -1, "", "", true, 0);
							break;
						
						case 2:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_150, "", false, -1, "", "", true, 0);
							break;
						
						default:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_150, "", false, -1, "", "", true, 0);
							break;
						}
				}
				if (iLocal_153 == 0)
				{
				}
				if (iLocal_153 == 2 || iLocal_153 == 3)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_151 = 0;
						iLocal_153 = 0;
						func_115(0, 1);
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
					{
						iLocal_152 = 1;
					}
					if (iLocal_152 == 1)
					{
						if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							iLocal_151 = 0;
							iLocal_153 = 0;
							func_115(0, 1);
							iLocal_152 = 0;
							HUD::SET_SOCIAL_CLUB_TOUR("Gallery");
							HUD::OPEN_SOCIAL_CLUB_MENU(444471228);
						}
					}
				}
				else if (iLocal_153 == 7)
				{
					if (func_4())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
						{
							iLocal_151 = 0;
							iLocal_153 = 0;
							func_115(0, 1);
							iLocal_109 = 0;
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_151 = 0;
						iLocal_153 = 0;
						func_115(0, 1);
						iLocal_109 = 0;
					}
					if (!func_4())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_20785))
						{
							iLocal_151 = 0;
							iLocal_153 = 0;
							func_115(0, 1);
							if (BitTest(Global_8684, 28))
							{
								iLocal_109 = 0;
							}
							else
							{
								iLocal_109 = 2;
							}
							iLocal_105 = MISC::GET_GAME_TIMER();
							PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(true);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
				{
					iLocal_151 = 0;
					iLocal_153 = 0;
					func_115(0, 1);
				}
			}
		}
		iLocal_106 = MISC::GET_GAME_TIMER();
		if (func_164())
		{
			if (!BitTest(Global_4542983, 2))
			{
				MISC::SET_BIT(&Global_4542983, 2);
				func_168(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_128)
		{
			func_1(0);
			func_122(0, 0);
			func_126(0);
			iLocal_113 = 0;
			func_117(1);
			Global_23199 = 0;
			Global_23200 = 0;
			Global_23202 = 0;
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_138);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_139);
			MISC::SET_GAME_PAUSED(false);
			if (Global_21027 == 1)
			{
				MISC::SET_BIT(&Global_8683, 17);
			}
			else
			{
				MISC::CLEAR_BIT(&Global_8683, 17);
			}
			HUD::CLEAR_FLOATING_HELP(0, true);
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			MISC::CLEAR_BIT(&Global_8685, 3);
			MISC::CLEAR_BIT(&Global_4542983, 3);
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23203 = 1;
			AUDIO::STOP_SOUND(iLocal_110);
			AUDIO::RELEASE_SOUND_ID(iLocal_110);
			HUD::BUSYSPINNER_OFF();
			func_117(1);
			MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
			MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
			}
			if (Global_4541708 > 0 && Global_4541708 < 13)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_31[Global_4541708]);
			}
			MISC::CLEAR_BIT(&Global_8683, 18);
			if (func_164())
			{
				func_115(1, 1);
			}
			else
			{
				func_115(0, 1);
			}
			if (func_175(0, 1, iLocal_62, 1))
			{
				iLocal_62 = 0;
			}
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(true);
		}
		else if (Global_20813.f_1 > 3)
		{
			MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(false);
		}
	}
}

int func_2()
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

int func_3()
{
	if (((Global_20813.f_1 == 1 || Global_20813.f_1 == 3) || Global_20813.f_1 == 0) || Global_20757 == 1)
	{
		Global_20800 = 1;
		return 1;
	}
	return 0;
}

bool func_4()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_5()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_6()
{
	iLocal_104 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
	switch (iLocal_104)
	{
		case 0:
			iLocal_101 = 0;
			iLocal_107 = GRAPHICS::GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS();
			iLocal_108 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS();
			if (iLocal_102 == 1)
			{
				if (iLocal_125 == 0)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_138))
					{
						if (func_177())
						{
							if (Global_4541708 == 0)
							{
								if (!BitTest(Global_4542983, 2))
								{
									func_168(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_168(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!BitTest(Global_4542983, 2))
							{
								func_168(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_168(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_138))
				{
					func_168(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_168(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
				}
				iLocal_102 = 0;
			}
			HUD::BUSYSPINNER_OFF();
			break;
		
		case 1:
			if (!HUD::BUSYSPINNER_IS_ON())
			{
				HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_SPINNER2");
				HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
			}
			break;
		
		case 2:
			if (BitTest(Global_8684, 28))
			{
				iLocal_101 = 0;
				iLocal_107 = 0;
				iLocal_108 = 0;
			}
			else
			{
				Global_20813.f_1 = 3;
				Global_23203 = 1;
			}
			HUD::BUSYSPINNER_OFF();
			break;
	}
}

void func_7()
{
	if (func_112(2, Global_20782, 0))
	{
		func_1(0);
		if (BitTest(Global_8684, 28))
		{
			MISC::SET_GAME_PAUSED(false);
			SYSTEM::SETTIMERB(0);
			func_144();
			iLocal_125 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_143();
			iLocal_134 = 1;
		}
		else if (func_11())
		{
			if (BitTest(Global_8684, 14))
			{
				func_163("CELL_299", -1);
			}
			else
			{
				func_143();
				func_10();
			}
		}
		else
		{
			iLocal_151 = 1;
			func_115(1, 1);
		}
	}
	if (BitTest(Global_8683, 22))
	{
		func_1(0);
		while (SYSTEM::TIMERA() < 2000)
		{
			SYSTEM::WAIT(0);
			func_162();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_94();
			func_152();
			func_147();
		}
		MISC::SET_GAME_PAUSED(false);
		func_144();
		SYSTEM::SETTIMERB(0);
		iLocal_125 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_129();
		func_143();
	}
	if (func_112(2, Global_20786, 0))
	{
		func_1(0);
		if (func_123() || BitTest(Global_8684, 28))
		{
		}
		else
		{
			MISC::SET_GAME_PAUSED(false);
			SYSTEM::SETTIMERB(0);
			iLocal_134 = 1;
			func_144();
			iLocal_125 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_143();
		}
	}
	if (BitTest(Global_8683, 28))
	{
		if (func_112(2, Global_20785, 0))
		{
			func_1(0);
			MISC::SET_GAME_PAUSED(false);
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_162();
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_162();
			GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
			GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
			Global_23203 = 1;
			iLocal_141 = 0;
			iLocal_124 = 0;
			func_115(0, 1);
			Global_23199 = 1;
			HUD::CLEAR_FLOATING_HELP(0, true);
			iLocal_126 = 0;
			iLocal_116 = 1;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			func_8();
			iLocal_125 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_122(0, 0);
			func_126(0);
			iLocal_113 = 0;
			func_117(1);
			if (!Global_2738587.f_6775)
			{
				MISC::SET_BIT(&Global_8683, 9);
			}
			iLocal_140 = 0;
			func_168(Global_20794, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_8()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20802, true);
		func_9();
	}
}

void func_9()
{
	if (func_2())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

void func_10()
{
	iLocal_148 = 1;
	Global_23204 = 1;
	HUD::CLEAR_FLOATING_HELP(0, true);
}

int func_11()
{
	if (iLocal_105 == iLocal_106)
	{
		if (iLocal_103)
		{
			iLocal_103 = 1;
		}
	}
	if (Global_20813.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_107 == iLocal_108 || iLocal_107 > iLocal_108)
	{
		iLocal_153 = 1;
		iLocal_150 = 2;
		return 0;
	}
	return 1;
}

void func_12()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_129)
	{
		func_85();
		func_81();
		func_80();
		fLocal_71 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_72 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		if (iLocal_131 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, iVar0) && !PAD::IS_CONTROL_PRESSED(2, iVar1))
			{
				iLocal_131 = 1;
				func_168(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_168(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8683, 28))
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, true), "CELL_281");
					func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, true), func_66());
					func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, true), "CELL_280");
					func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, true), "CELL_281");
					func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				func_65();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_168(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_CONTROL_PRESSED(2, iVar1))
		{
			iLocal_131 = 0;
			func_129();
		}
		if (iLocal_132 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, iVar1) && !PAD::IS_CONTROL_PRESSED(2, iVar0))
			{
				iLocal_132 = 1;
				func_168(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_168(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8683, 28))
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, true), "CELL_281");
					func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, true), func_66());
				}
				else if (!func_164())
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, true), "CELL_280");
					func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, true), "CELL_281");
				}
				else
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, true), "CELL_280");
					func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, true), "CELL_281");
				}
				func_64();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_168(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2, iVar1) || PAD::IS_CONTROL_PRESSED(2, iVar0))
		{
			iLocal_132 = 0;
			func_129();
		}
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, true);
		PAD::ENABLE_CONTROL_ACTION(0, 1, true);
	}
	if (PAD::HAVE_CONTROLS_CHANGED(2))
	{
		func_129();
	}
	func_152();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
	}
	if (func_164())
	{
		if (!BitTest(Global_4542983, 2))
		{
			MISC::SET_BIT(&Global_4542983, 2);
			func_168(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2, 183) && iLocal_154 == 0) && !func_164())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (BitTest(Global_4542983, 2))
				{
					MISC::CLEAR_BIT(&Global_4542983, 2);
					if (!BitTest(Global_4542983, 2))
					{
						func_168(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					MISC::SET_BIT(&Global_4542983, 2);
					func_168(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_129)
	{
		if (iLocal_130 == 1)
		{
			iLocal_130 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_138, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			func_63("CELL_FOCUS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (!func_62(14))
		{
			if (BitTest(Global_4542983, 10))
			{
				if ((Global_79248 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_61())
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_138, "SET_FOCUS_LOCK");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_4543968));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::CLEAR_BIT(&Global_4542983, 10);
				}
			}
		}
		else if (BitTest(Global_4542983, 10))
		{
			MISC::CLEAR_BIT(&Global_4542983, 10);
		}
		iLocal_64 = MISC::GET_GAME_TIMER();
		if ((iLocal_64 - iLocal_63) > 1500)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_68 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_68, Local_65, true) > 5f)
				{
					Global_20813.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
				iLocal_63 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (iLocal_130)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, 182) && !func_164())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
			iLocal_130 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_138, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			func_63("CELL_FOCUS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0, 182) && !func_164())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
		iLocal_130 = 1;
		if (!func_62(14))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_138, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			func_63("CELL_FOCUS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (func_177())
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, 186) && iLocal_154 == 0) && !func_164())
		{
			if (iLocal_129)
			{
				iLocal_55++;
				if (iLocal_55 > 0 && iLocal_55 < 7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						if (Global_20813 == 0)
						{
							iVar4 = 0;
							iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1, 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_55 == 2 || iLocal_55 == 3) || iLocal_55 == 4) || iLocal_55 == 8) || iLocal_55 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_55 == 3)
										{
											PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_46[iLocal_55], 0);
										}
									}
								}
								else
								{
									PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_46[iLocal_55], 0);
								}
							}
							else
							{
								PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_46[iLocal_55], 0);
							}
						}
						else
						{
							PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_46[iLocal_55], 0);
						}
					}
				}
				if (iLocal_55 == 7 || iLocal_55 > 7)
				{
					iLocal_55 = 0;
				}
				if (iLocal_55 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
					}
				}
			}
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, 185) && iLocal_154 == 0) && !func_164())
		{
			if (iLocal_129)
			{
				if (bLocal_60 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
					if (iLocal_59 == 0)
					{
						iLocal_59 = 1;
						iLocal_58 = 1;
						if (MISC::ARE_STRINGS_EQUAL(sLocal_17[Global_4541707], "phone_cam12DUMMY"))
						{
						}
						else
						{
							MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(true);
							MOBILE::SET_MOBILE_PHONE_DOF_STATE(true);
						}
					}
					else
					{
						iLocal_59 = 0;
						iLocal_58 = 0;
						MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
						MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
					}
				}
			}
			else if (bLocal_61 == 1)
			{
				if (iLocal_58 == 0)
				{
					iLocal_58 = 1;
					iLocal_59 = 1;
					MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(true);
					MOBILE::SET_MOBILE_PHONE_DOF_STATE(true);
				}
				else
				{
					iLocal_58 = 0;
					iLocal_59 = 0;
					MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
					MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
				}
			}
		}
	}
	if (iLocal_57 == 1 && !func_164())
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 172) && iLocal_154 == 0)
		{
			if (func_177())
			{
				Global_4541708++;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
			}
			if (Global_4541708 == 13)
			{
				func_126(0);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_31[(Global_4541708 - 1)]);
				Global_4541708 = 0;
				func_60();
				if (iLocal_45 == 1)
				{
					MISC::CLEAR_BIT(&Global_4542983, 2);
					iLocal_45 = 0;
					func_168(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4541708 > 0 && Global_4541708 < 13)
			{
				iLocal_57 = 0;
				iLocal_56 = 0;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_31[Global_4541708], false);
			}
		}
	}
	if (Global_4541708 > 0)
	{
		if (iLocal_57 == 0)
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_31[Global_4541708]))
			{
				iLocal_56 = 1;
				iLocal_57 = 1;
				if (!GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE())
				{
					func_126(1);
				}
				if (iLocal_45 == 0)
				{
					if (!BitTest(Global_4542983, 2))
					{
						iLocal_45 = 1;
					}
				}
				MISC::SET_BIT(&Global_4542983, 2);
				func_168(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(0.25f);
				GRAPHICS::PHONEPHOTOEDITOR_SET_FRAME_TXD(sLocal_31[Global_4541708], false);
			}
		}
		if (iLocal_56 == 1)
		{
			if (Global_4541708 == 1 || Global_4541708 == 3)
			{
			}
			if (Global_4541708 == 2 || Global_4541708 == 4)
			{
			}
		}
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(0, 173) && iLocal_154 == 0) && !func_164())
	{
		if (func_177())
		{
			func_117(0);
			Global_4541707++;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
		}
		if (Global_4541707 == 13)
		{
			Global_4541707 = 0;
		}
		if (Global_4541707 == 0)
		{
			if (func_177())
			{
				func_117(0);
			}
		}
		else
		{
			func_127();
		}
		func_59();
	}
	if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 184) && iLocal_154 == 0) && !func_164())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
				func_168(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_167(iLocal_138, "CLOSE_SHUTTER");
				iLocal_133 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_133 + iLocal_137) && Global_20813.f_1 > 3)
				{
					func_162();
					func_147();
					func_94();
					RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				if (iLocal_129 == 0)
				{
					AUDIO::STOP_SOUND(iLocal_110);
					iLocal_129 = 1;
					func_58(1);
					func_57();
					MISC::SET_BIT(&Global_8685, 3);
					iLocal_63 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_131 = 0;
					iLocal_132 = 0;
					func_58(0);
					iLocal_129 = 0;
					MISC::CLEAR_BIT(&Global_8685, 3);
				}
				iLocal_133 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_133 + iLocal_135) && Global_20813.f_1 > 3)
				{
					func_162();
					func_147();
					func_94();
					RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				func_167(iLocal_138, "OPEN_SHUTTER");
				if (func_177())
				{
					if (Global_4541708 == 0)
					{
						if (!BitTest(Global_4542983, 2))
						{
							func_168(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!BitTest(Global_4542983, 2))
				{
					func_168(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_147();
				func_162();
				if (BitTest(Global_8683, 28))
				{
					StringCopy(&cLocal_143, "CELL_296", 16);
					func_55();
				}
				else
				{
					StringCopy(&cLocal_143, "CELL_295", 16);
					func_29();
				}
			}
		}
	}
	if (iLocal_129 == 0)
	{
		if (iLocal_111 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 40) || PAD::IS_CONTROL_JUST_PRESSED(0, 41))
			{
				fLocal_112 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
				if (fLocal_112 > 1f && fLocal_112 < 4.5f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_110))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_110, "Camera_Zoom", &Global_20802, true);
					}
				}
				else
				{
					AUDIO::STOP_SOUND(iLocal_110);
				}
				iLocal_111 = 1;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(0, 40) || PAD::IS_CONTROL_PRESSED(0, 41))
		{
			fLocal_112 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
			if (fLocal_112 > 1f && fLocal_112 < 4.5f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_110))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_110, "Camera_Zoom", &Global_20802, true);
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_110);
			}
		}
		else
		{
			AUDIO::STOP_SOUND(iLocal_110);
		}
	}
	if ((func_112(2, Global_20782, 0) && !func_124()) && !func_112(2, Global_20781, 0))
	{
		fLocal_73 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_74 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
		MISC::SET_BIT(&Global_8683, 21);
		AUDIO::STOP_SOUND(iLocal_110);
		iLocal_125 = 1;
		func_168(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_168(iLocal_138, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Camera_Shoot", &Global_20802, true);
		func_167(iLocal_138, "CLOSE_SHUTTER");
		Local_82 = { -90.3f, 0f, 90f };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_82, 0);
		if (!func_177())
		{
			func_117(1);
		}
		Global_23202 = 1;
		HUD::CLEAR_FLOATING_HELP(0, true);
		while (Global_23201 < 6 && Global_20813.f_1 > 3)
		{
			func_162();
			func_147();
			func_94();
			func_152();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		MOBILE::CELL_CAM_ACTIVATE(false, false);
		if (Global_20755)
		{
			func_1(1);
		}
		iLocal_133 = MISC::GET_GAME_TIMER();
		while (MISC::GET_GAME_TIMER() < (iLocal_133 + iLocal_136) && Global_20813.f_1 > 3)
		{
			func_162();
			func_147();
			func_94();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		SYSTEM::SETTIMERA(0);
		func_167(iLocal_138, "OPEN_SHUTTER");
		MISC::CLEAR_BIT(&Global_8683, 21);
		func_129();
		if (Global_20813.f_1 > 3)
		{
			if (Global_79248)
			{
				func_23(1087, 1, -1);
				func_22();
				func_19(-1492367786, 23, 0);
			}
			else
			{
				switch (func_13())
				{
					case 0:
						STATS::STAT_INCREMENT(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						STATS::STAT_INCREMENT(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						STATS::STAT_INCREMENT(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_22();
			}
			func_126(0);
		}
		func_147();
	}
	if (BitTest(Global_8683, 28))
	{
		if (func_112(2, Global_20785, 0))
		{
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_162();
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_162();
			GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
			GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
			Global_23203 = 1;
			iLocal_141 = 0;
			iLocal_124 = 1;
			Global_23199 = 1;
			HUD::CLEAR_FLOATING_HELP(0, true);
			iLocal_126 = 0;
			iLocal_116 = 1;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			func_8();
			iLocal_125 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_122(0, 0);
			func_126(0);
			iLocal_113 = 0;
			func_117(1);
			if (!Global_2738587.f_6775)
			{
				MISC::SET_BIT(&Global_8683, 9);
			}
			MISC::SET_GAME_PAUSED(false);
			iLocal_140 = 0;
			func_168(Global_20794, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_13()
{
	func_14();
	return Global_114372.f_2366.f_539.f_4321;
}

void func_14()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_17(Global_114372.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_16(PLAYER::PLAYER_PED_ID());
			if (func_15(iVar0) && (!func_62(14) || Global_113320))
			{
				if (Global_114372.f_2366.f_539.f_4321 != iVar0 && func_15(Global_114372.f_2366.f_539.f_4321))
				{
					Global_114372.f_2366.f_539.f_4322 = Global_114372.f_2366.f_539.f_4321;
				}
				Global_114372.f_2366.f_539.f_4323 = iVar0;
				Global_114372.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114372.f_2366.f_539.f_4321 != 145)
			{
				Global_114372.f_2366.f_539.f_4323 = Global_114372.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114372.f_2366.f_539.f_4321 = 145;
}

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return func_18(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_18(int iParam0)
{
	return Global_2139[iParam0 /*29*/];
}

void func_19(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_21(iParam1, iParam2))
	{
		iVar0 = func_20();
		Global_2695845[iVar0] = iParam1;
		Global_2695856[iVar0] = iParam0;
	}
}

int func_20()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2695845[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_21(int iParam0, var uParam1)
{
	if (Global_1575067)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575079) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_22()
{
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 0;
	Global_20750 = { Global_20766[Global_20758 /*3*/] };
	func_115(0, 1);
	func_122(0, 0);
	func_126(0);
	iLocal_113 = 0;
	func_117(1);
	if (!BitTest(Global_8684, 28))
	{
		if (NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV() == 0)
		{
			if (MISC::IS_XBOX360_VERSION())
			{
				if (iLocal_115 == 0)
				{
					iLocal_115 = 1;
				}
			}
		}
	}
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_26(iParam0, func_27(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_24(iParam0, iVar0, iParam2, 1);
}

void func_24(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_25(iParam0, uParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_25(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_27(uParam1));
}

int func_26(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_25(iParam0, uParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_28();
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

var func_28()
{
	return Global_1574925;
}

void func_29()
{
	if (iLocal_154 == 1)
	{
		func_54();
		return;
	}
	if (iLocal_131 == 0 && iLocal_132 == 0)
	{
		func_168(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_168(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_164())
		{
			func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, true), "CELL_281");
			func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, true), "CELL_280");
		}
		else
		{
			func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, true), "CELL_281");
			func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, true), "CELL_280");
		}
		if (iLocal_129)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_79248 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_61())
				{
					func_52();
				}
				else
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, true), "CELL_GRID");
					func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
					if (func_177())
					{
						func_51(5f);
						func_50(6f);
						if (func_31(1))
						{
							func_30(7f);
							if (bLocal_60)
							{
								func_78(iLocal_139, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_60)
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (!func_164())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
						func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, true), "CELL_GRID");
						func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, true), "CELL_284");
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
						if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 210, true), "CELL_284");
						}
						else
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 29, true), "CELL_284");
						}
					}
					if (!func_164())
					{
						if (func_177())
						{
							func_51(6f);
							func_50(7f);
							if (bLocal_61)
							{
								func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 182, true), "CELL_FOCUS");
							}
							func_78(iLocal_139, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
					if (func_177())
					{
						func_51(3f);
						func_50(4f);
						func_78(iLocal_139, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_164())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (!func_164())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, true), "CELL_GRID");
						func_78(iLocal_139, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
						if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 210, true), "CELL_284");
						}
						else
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 29, true), "CELL_284");
						}
					}
					if (!func_164())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, true), "CELL_284");
					}
					if (!func_164())
					{
						if (func_177())
						{
							func_51(7f);
							func_50(8f);
							if (bLocal_61)
							{
								func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 182, true), "CELL_FOCUS");
							}
							func_78(iLocal_139, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
					if (func_177())
					{
						func_51(3f);
						func_50(4f);
						func_78(iLocal_139, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, true), "CELL_DEPTH");
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_168(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_30(float fParam0)
{
	func_78(iLocal_139, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 174, true), "CELL_ACTION");
}

int func_31(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_49(Global_4456522, Global_4456523))
		{
			if (iParam0 == 0 || !func_32(Global_4456522, Global_4456523, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_32(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_33(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_33(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar9;
	var uVar18;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	
	if (func_48())
	{
		return 0;
	}
	uVar0 = 8;
	uVar9 = 8;
	uVar18 = 8;
	if (iParam1 == 0)
	{
		iVar30 = 3;
	}
	else if (bParam3)
	{
		iVar30 = 1;
	}
	else if (bParam4)
	{
		iVar30 = 2;
	}
	else
	{
		iVar30 = 0;
	}
	func_41(iParam1, iParam2, &uVar0, &uVar9, &uVar18, iVar30, bParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar27 = func_40(iParam0);
			if (!iVar27 == -1)
			{
				if (func_39(&uVar0, iVar27))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar28 = func_38(iParam0);
			if (!iVar28 == -1)
			{
				if (func_36(&uVar9, iVar28))
				{
					return 1;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar29 = func_35(iParam0);
			if (!iVar29 == 0)
			{
				if (func_34(&uVar18, iVar29))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_34(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (BitTest((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	return iVar0;
}

bool func_36(var uParam0, int iParam1)
{
	return func_37(uParam0, iParam1);
}

int func_37(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (BitTest((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0, 1);
	return iVar0;
}

bool func_39(var uParam0, int iParam1)
{
	return func_37(uParam0, iParam1);
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0, 1);
	return iVar0;
}

void func_41(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_47(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_46(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 13, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 2, 1);
							func_43(uParam2, 20, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 1:
							func_45(uParam3, 4, 1);
							func_45(uParam3, 13, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 2, 1);
							func_43(uParam2, 20, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 2:
							func_45(uParam3, 13, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 39, 1);
							func_43(uParam2, 2, 1);
							func_43(uParam2, 20, 1);
							func_43(uParam2, 38, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_45(uParam3, 62, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 4, 1);
							func_47(uParam4, 5, 1);
							func_47(uParam4, 7, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 14, 1);
							func_47(uParam4, 15, 1);
							func_47(uParam4, 16, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_47(uParam4, 115, 1);
							func_47(uParam4, 116, 1);
							func_47(uParam4, 136, 1);
							func_47(uParam4, 138, 1);
							func_47(uParam4, 139, 1);
							func_47(uParam4, 143, 1);
							func_47(uParam4, 144, 1);
							func_47(uParam4, 145, 1);
							func_47(uParam4, 147, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 1:
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_47(uParam4, 115, 1);
							func_47(uParam4, 116, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 2:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 4, 1);
							func_47(uParam4, 5, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 14, 1);
							func_47(uParam4, 15, 1);
							func_47(uParam4, 16, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_47(uParam4, 115, 1);
							func_47(uParam4, 116, 1);
							func_47(uParam4, 136, 1);
							func_47(uParam4, 138, 1);
							func_47(uParam4, 139, 1);
							func_47(uParam4, 143, 1);
							func_47(uParam4, 144, 1);
							func_47(uParam4, 145, 1);
							func_47(uParam4, 147, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
					}
					break;
				
				case 64:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 66, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 77, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 65:
				case 68:
					func_45(uParam3, 67, 1);
					func_45(uParam3, 68, 1);
					func_45(uParam3, 69, 1);
					func_45(uParam3, 70, 1);
					func_45(uParam3, 71, 1);
					func_45(uParam3, 72, 1);
					func_45(uParam3, 73, 1);
					func_45(uParam3, 74, 1);
					func_45(uParam3, 78, 1);
					func_45(uParam3, 79, 1);
					func_45(uParam3, 80, 1);
					func_45(uParam3, 81, 1);
					func_45(uParam3, 82, 1);
					func_45(uParam3, 91, 1);
					func_45(uParam3, 92, 1);
					func_43(uParam2, 66, 1);
					func_43(uParam2, 67, 1);
					func_43(uParam2, 68, 1);
					func_43(uParam2, 69, 1);
					func_43(uParam2, 70, 1);
					func_43(uParam2, 71, 1);
					func_43(uParam2, 72, 1);
					func_43(uParam2, 73, 1);
					func_43(uParam2, 77, 1);
					func_43(uParam2, 78, 1);
					func_43(uParam2, 79, 1);
					func_43(uParam2, 80, 1);
					func_43(uParam2, 81, 1);
					func_43(uParam2, 90, 1);
					func_43(uParam2, 91, 1);
					func_45(uParam3, 38, 1);
					func_45(uParam3, 47, 1);
					func_45(uParam3, 111, 1);
					func_43(uParam2, 37, 1);
					func_43(uParam2, 46, 1);
					func_43(uParam2, 110, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					func_42(uParam2, uParam3, uParam4);
					break;
				
				case 66:
					func_45(uParam3, 67, 1);
					func_45(uParam3, 68, 1);
					func_45(uParam3, 69, 1);
					func_45(uParam3, 70, 1);
					func_45(uParam3, 71, 1);
					func_45(uParam3, 72, 1);
					func_45(uParam3, 73, 1);
					func_45(uParam3, 74, 1);
					func_45(uParam3, 78, 1);
					func_45(uParam3, 79, 1);
					func_45(uParam3, 80, 1);
					func_45(uParam3, 81, 1);
					func_45(uParam3, 82, 1);
					func_45(uParam3, 91, 1);
					func_45(uParam3, 92, 1);
					func_43(uParam2, 66, 1);
					func_43(uParam2, 67, 1);
					func_43(uParam2, 68, 1);
					func_43(uParam2, 69, 1);
					func_43(uParam2, 70, 1);
					func_43(uParam2, 71, 1);
					func_43(uParam2, 72, 1);
					func_43(uParam2, 73, 1);
					func_43(uParam2, 77, 1);
					func_43(uParam2, 78, 1);
					func_43(uParam2, 79, 1);
					func_43(uParam2, 80, 1);
					func_43(uParam2, 81, 1);
					func_43(uParam2, 90, 1);
					func_43(uParam2, 91, 1);
					func_45(uParam3, 38, 1);
					func_45(uParam3, 47, 1);
					func_45(uParam3, 111, 1);
					func_43(uParam2, 37, 1);
					func_43(uParam2, 46, 1);
					func_43(uParam2, 110, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					func_42(uParam2, uParam3, uParam4);
					break;
				
				case 67:
					func_45(uParam3, 67, 1);
					func_45(uParam3, 68, 1);
					func_45(uParam3, 69, 1);
					func_45(uParam3, 70, 1);
					func_45(uParam3, 71, 1);
					func_45(uParam3, 72, 1);
					func_45(uParam3, 73, 1);
					func_45(uParam3, 74, 1);
					func_45(uParam3, 78, 1);
					func_45(uParam3, 79, 1);
					func_45(uParam3, 80, 1);
					func_45(uParam3, 81, 1);
					func_45(uParam3, 82, 1);
					func_45(uParam3, 91, 1);
					func_45(uParam3, 92, 1);
					func_43(uParam2, 66, 1);
					func_43(uParam2, 67, 1);
					func_43(uParam2, 68, 1);
					func_43(uParam2, 69, 1);
					func_43(uParam2, 70, 1);
					func_43(uParam2, 71, 1);
					func_43(uParam2, 72, 1);
					func_43(uParam2, 73, 1);
					func_43(uParam2, 77, 1);
					func_43(uParam2, 78, 1);
					func_43(uParam2, 79, 1);
					func_43(uParam2, 80, 1);
					func_43(uParam2, 81, 1);
					func_43(uParam2, 90, 1);
					func_43(uParam2, 91, 1);
					func_45(uParam3, 38, 1);
					func_45(uParam3, 47, 1);
					func_45(uParam3, 111, 1);
					func_43(uParam2, 37, 1);
					func_43(uParam2, 46, 1);
					func_43(uParam2, 110, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					func_42(uParam2, uParam3, uParam4);
					break;
				
				case 69:
				case 70:
				case 71:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 3, 1);
							func_45(uParam3, 4, 1);
							func_45(uParam3, 6, 1);
							func_45(uParam3, 10, 1);
							func_45(uParam3, 54, 1);
							func_45(uParam3, 55, 1);
							func_45(uParam3, 56, 1);
							func_45(uParam3, 13, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_45(uParam3, 20, 1);
							func_45(uParam3, 26, 1);
							func_45(uParam3, 27, 1);
							func_45(uParam3, 32, 1);
							func_45(uParam3, 33, 1);
							func_45(uParam3, 37, 1);
							func_45(uParam3, 39, 1);
							func_45(uParam3, 55, 1);
							func_45(uParam3, 106, 1);
							func_45(uParam3, 114, 1);
							func_45(uParam3, 116, 1);
							func_45(uParam3, 117, 1);
							func_45(uParam3, 118, 1);
							func_45(uParam3, 119, 1);
							func_43(uParam2, 3, 1);
							func_43(uParam2, 4, 1);
							func_43(uParam2, 6, 1);
							func_43(uParam2, 8, 1);
							func_43(uParam2, 9, 1);
							func_43(uParam2, 10, 1);
							func_43(uParam2, 53, 1);
							func_43(uParam2, 56, 1);
							func_43(uParam2, 55, 1);
							func_43(uParam2, 13, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_43(uParam2, 21, 1);
							func_43(uParam2, 26, 1);
							func_43(uParam2, 27, 1);
							func_43(uParam2, 28, 1);
							func_43(uParam2, 32, 1);
							func_43(uParam2, 36, 1);
							func_43(uParam2, 38, 1);
							func_43(uParam2, 55, 1);
							func_43(uParam2, 14, 1);
							func_43(uParam2, 105, 1);
							func_43(uParam2, 113, 1);
							func_43(uParam2, 114, 1);
							func_43(uParam2, 115, 1);
							func_43(uParam2, 116, 1);
							func_43(uParam2, 117, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 4, 1);
							func_47(uParam4, 14, 1);
							func_47(uParam4, 15, 1);
							func_47(uParam4, 16, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_45(uParam3, 65, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 76, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 64, 1);
							func_43(uParam2, 65, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 75, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_45(uParam3, 3, 1);
							func_45(uParam3, 4, 1);
							func_45(uParam3, 6, 1);
							func_45(uParam3, 13, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_45(uParam3, 19, 1);
							func_45(uParam3, 20, 1);
							func_45(uParam3, 26, 1);
							func_45(uParam3, 27, 1);
							func_45(uParam3, 32, 1);
							func_45(uParam3, 33, 1);
							func_45(uParam3, 37, 1);
							func_45(uParam3, 39, 1);
							func_45(uParam3, 55, 1);
							func_45(uParam3, 106, 1);
							func_45(uParam3, 114, 1);
							func_45(uParam3, 116, 1);
							func_45(uParam3, 117, 1);
							func_45(uParam3, 118, 1);
							func_45(uParam3, 119, 1);
							func_43(uParam2, 3, 1);
							func_43(uParam2, 4, 1);
							func_43(uParam2, 6, 1);
							func_43(uParam2, 8, 1);
							func_43(uParam2, 9, 1);
							func_43(uParam2, 10, 1);
							func_43(uParam2, 53, 1);
							func_43(uParam2, 56, 1);
							func_43(uParam2, 55, 1);
							func_43(uParam2, 11, 1);
							func_43(uParam2, 13, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_43(uParam2, 21, 1);
							func_43(uParam2, 22, 1);
							func_43(uParam2, 54, 1);
							func_43(uParam2, 26, 1);
							func_43(uParam2, 27, 1);
							func_43(uParam2, 28, 1);
							func_43(uParam2, 30, 1);
							func_43(uParam2, 31, 1);
							func_43(uParam2, 32, 1);
							func_43(uParam2, 36, 1);
							func_43(uParam2, 38, 1);
							func_43(uParam2, 55, 1);
							func_43(uParam2, 14, 1);
							func_43(uParam2, 105, 1);
							func_43(uParam2, 113, 1);
							func_43(uParam2, 114, 1);
							func_43(uParam2, 115, 1);
							func_43(uParam2, 116, 1);
							func_43(uParam2, 117, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 4, 1);
							func_47(uParam4, 14, 1);
							func_47(uParam4, 15, 1);
							func_47(uParam4, 16, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_45(uParam3, 65, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 76, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 64, 1);
							func_43(uParam2, 65, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 75, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_45(uParam3, 39, 1);
							func_45(uParam3, 106, 1);
							func_45(uParam3, 114, 1);
							func_45(uParam3, 116, 1);
							func_45(uParam3, 117, 1);
							func_45(uParam3, 118, 1);
							func_45(uParam3, 119, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_43(uParam2, 38, 1);
							func_43(uParam2, 14, 1);
							func_43(uParam2, 105, 1);
							func_43(uParam2, 113, 1);
							func_43(uParam2, 114, 1);
							func_43(uParam2, 115, 1);
							func_43(uParam2, 116, 1);
							func_43(uParam2, 117, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_45(uParam3, 65, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 76, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 64, 1);
							func_43(uParam2, 65, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 75, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_43(uParam2, 19, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_47(uParam4, 115, 1);
							func_47(uParam4, 116, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 7, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_47(uParam4, 115, 1);
							func_47(uParam4, 116, 1);
							func_42(uParam2, uParam3, uParam4);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 2:
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 5, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_47(uParam4, 115, 1);
							func_47(uParam4, 116, 1);
							func_42(uParam2, uParam3, uParam4);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 4, 1);
							break;
						
						case 1:
							func_47(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 5, 1);
							func_47(uParam4, 6, 1);
							func_47(uParam4, 7, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 1:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 5, 1);
							func_47(uParam4, 6, 1);
							func_47(uParam4, 7, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 2:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 5, 1);
							func_47(uParam4, 6, 1);
							func_47(uParam4, 7, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 3, 1);
							func_45(uParam3, 7, 1);
							func_45(uParam3, 0, 1);
							func_45(uParam3, 12, 1);
							func_45(uParam3, 13, 1);
							func_45(uParam3, 15, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 17, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_45(uParam3, 20, 1);
							func_45(uParam3, 21, 1);
							func_45(uParam3, 25, 1);
							func_45(uParam3, 26, 1);
							func_45(uParam3, 27, 1);
							func_45(uParam3, 30, 1);
							func_45(uParam3, 31, 1);
							func_45(uParam3, 32, 1);
							func_45(uParam3, 33, 1);
							func_45(uParam3, 39, 1);
							func_45(uParam3, 37, 1);
							func_43(uParam2, 0, 1);
							func_43(uParam2, 2, 1);
							func_43(uParam2, 3, 1);
							func_43(uParam2, 4, 1);
							func_43(uParam2, 6, 1);
							func_43(uParam2, 7, 1);
							func_43(uParam2, 8, 1);
							func_43(uParam2, 11, 1);
							func_43(uParam2, 13, 1);
							func_43(uParam2, 15, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 17, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_43(uParam2, 19, 1);
							func_43(uParam2, 20, 1);
							func_43(uParam2, 21, 1);
							func_43(uParam2, 22, 1);
							func_43(uParam2, 54, 1);
							func_43(uParam2, 24, 1);
							func_43(uParam2, 26, 1);
							func_43(uParam2, 27, 1);
							func_43(uParam2, 28, 1);
							func_43(uParam2, 30, 1);
							func_43(uParam2, 31, 1);
							func_43(uParam2, 32, 1);
							func_43(uParam2, 38, 1);
							func_43(uParam2, 36, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 4, 1);
							func_47(uParam4, 14, 1);
							func_47(uParam4, 15, 1);
							func_47(uParam4, 16, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 65, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 76, 1);
							func_45(uParam3, 77, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 64, 1);
							func_43(uParam2, 65, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 75, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 1:
							func_45(uParam3, 3, 1);
							func_45(uParam3, 7, 1);
							func_45(uParam3, 0, 1);
							func_45(uParam3, 12, 1);
							func_45(uParam3, 13, 1);
							func_45(uParam3, 15, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 17, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_45(uParam3, 20, 1);
							func_45(uParam3, 21, 1);
							func_45(uParam3, 25, 1);
							func_45(uParam3, 26, 1);
							func_45(uParam3, 27, 1);
							func_45(uParam3, 30, 1);
							func_45(uParam3, 31, 1);
							func_45(uParam3, 32, 1);
							func_45(uParam3, 33, 1);
							func_45(uParam3, 39, 1);
							func_43(uParam2, 0, 1);
							func_43(uParam2, 2, 1);
							func_43(uParam2, 3, 1);
							func_43(uParam2, 4, 1);
							func_43(uParam2, 6, 1);
							func_43(uParam2, 7, 1);
							func_43(uParam2, 11, 1);
							func_43(uParam2, 13, 1);
							func_43(uParam2, 15, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 17, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_43(uParam2, 19, 1);
							func_43(uParam2, 20, 1);
							func_43(uParam2, 21, 1);
							func_43(uParam2, 22, 1);
							func_43(uParam2, 54, 1);
							func_43(uParam2, 24, 1);
							func_43(uParam2, 38, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 4, 1);
							func_47(uParam4, 14, 1);
							func_47(uParam4, 15, 1);
							func_47(uParam4, 16, 1);
							func_47(uParam4, 6, 1);
							func_47(uParam4, 7, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 65, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 76, 1);
							func_45(uParam3, 77, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 64, 1);
							func_43(uParam2, 65, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 75, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 2:
							func_45(uParam3, 1, 1);
							func_45(uParam3, 3, 1);
							func_45(uParam3, 4, 1);
							func_45(uParam3, 5, 1);
							func_45(uParam3, 7, 1);
							func_45(uParam3, 10, 1);
							func_45(uParam3, 54, 1);
							func_45(uParam3, 55, 1);
							func_45(uParam3, 56, 1);
							func_45(uParam3, 0, 1);
							func_45(uParam3, 12, 1);
							func_45(uParam3, 13, 1);
							func_45(uParam3, 15, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 17, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_45(uParam3, 20, 1);
							func_45(uParam3, 21, 1);
							func_45(uParam3, 25, 1);
							func_45(uParam3, 26, 1);
							func_45(uParam3, 27, 1);
							func_45(uParam3, 30, 1);
							func_45(uParam3, 31, 1);
							func_45(uParam3, 32, 1);
							func_45(uParam3, 33, 1);
							func_45(uParam3, 37, 1);
							func_45(uParam3, 39, 1);
							func_43(uParam2, 0, 1);
							func_43(uParam2, 1, 1);
							func_43(uParam2, 2, 1);
							func_43(uParam2, 3, 1);
							func_43(uParam2, 4, 1);
							func_43(uParam2, 5, 1);
							func_43(uParam2, 6, 1);
							func_43(uParam2, 7, 1);
							func_43(uParam2, 8, 1);
							func_43(uParam2, 9, 1);
							func_43(uParam2, 10, 1);
							func_43(uParam2, 53, 1);
							func_43(uParam2, 56, 1);
							func_43(uParam2, 55, 1);
							func_43(uParam2, 11, 1);
							func_43(uParam2, 12, 1);
							func_43(uParam2, 13, 1);
							func_43(uParam2, 14, 1);
							func_43(uParam2, 15, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 17, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_43(uParam2, 19, 1);
							func_43(uParam2, 20, 1);
							func_43(uParam2, 21, 1);
							func_43(uParam2, 22, 1);
							func_43(uParam2, 54, 1);
							func_43(uParam2, 23, 1);
							func_43(uParam2, 24, 1);
							func_43(uParam2, 26, 1);
							func_43(uParam2, 27, 1);
							func_43(uParam2, 28, 1);
							func_43(uParam2, 29, 1);
							func_43(uParam2, 30, 1);
							func_43(uParam2, 31, 1);
							func_43(uParam2, 32, 1);
							func_43(uParam2, 33, 1);
							func_43(uParam2, 36, 1);
							func_43(uParam2, 38, 1);
							func_43(uParam2, 55, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 4, 1);
							func_47(uParam4, 14, 1);
							func_47(uParam4, 15, 1);
							func_47(uParam4, 16, 1);
							func_47(uParam4, 6, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 65, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 76, 1);
							func_45(uParam3, 77, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 64, 1);
							func_43(uParam2, 65, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 75, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_43(uParam2, 2, 1);
							func_43(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_41(2, 64, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_41(2, 65, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_42(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_47(uParam2, 124, 1);
	func_47(uParam2, 125, 1);
	func_47(uParam2, 126, 1);
	func_47(uParam2, 127, 1);
	func_47(uParam2, 128, 1);
	func_47(uParam2, 129, 1);
	func_47(uParam2, 130, 1);
	func_47(uParam2, 131, 1);
	func_47(uParam2, 132, 1);
	func_47(uParam2, 133, 1);
	func_47(uParam2, 136, 1);
	func_47(uParam2, 138, 1);
	func_47(uParam2, 139, 1);
	func_47(uParam2, 143, 1);
	func_47(uParam2, 144, 1);
	func_47(uParam2, 145, 1);
	func_47(uParam2, 147, 1);
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	func_44(uParam0, iParam1, bParam2);
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_45(var uParam0, int iParam1, bool bParam2)
{
	func_44(uParam0, iParam1, bParam2);
}

void func_46(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_47(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							break;
						
						case 1:
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							break;
						
						case 2:
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_45(uParam3, 16, 1);
						func_45(uParam3, 48, 1);
						func_45(uParam3, 49, 1);
						func_45(uParam3, 18, 1);
						func_45(uParam3, 50, 1);
						func_45(uParam3, 51, 1);
						func_45(uParam3, 52, 1);
						func_45(uParam3, 53, 1);
						func_45(uParam3, 38, 1);
						func_45(uParam3, 47, 1);
						func_45(uParam3, 111, 1);
						func_45(uParam3, 62, 1);
						func_43(uParam2, 16, 1);
						func_43(uParam2, 47, 1);
						func_43(uParam2, 48, 1);
						func_43(uParam2, 18, 1);
						func_43(uParam2, 37, 1);
						func_43(uParam2, 46, 1);
						func_43(uParam2, 110, 1);
					}
					func_47(uParam4, 3, 1);
					func_47(uParam4, 4, 1);
					func_47(uParam4, 5, 1);
					func_47(uParam4, 6, 1);
					func_47(uParam4, 7, 1);
					func_47(uParam4, 8, 1);
					func_47(uParam4, 9, 1);
					func_47(uParam4, 12, 1);
					func_47(uParam4, 14, 1);
					func_47(uParam4, 15, 1);
					func_47(uParam4, 16, 1);
					func_47(uParam4, 17, 1);
					func_47(uParam4, 18, 1);
					func_47(uParam4, 19, 1);
					func_47(uParam4, 20, 1);
					func_47(uParam4, 59, 1);
					func_47(uParam4, 60, 1);
					func_47(uParam4, 61, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 63, 1);
					func_47(uParam4, 64, 1);
					func_47(uParam4, 65, 1);
					func_47(uParam4, 66, 1);
					func_47(uParam4, 67, 1);
					func_47(uParam4, 68, 1);
					func_47(uParam4, 69, 1);
					func_47(uParam4, 70, 1);
					func_47(uParam4, 71, 1);
					func_47(uParam4, 72, 1);
					func_47(uParam4, 21, 1);
					func_47(uParam4, 22, 1);
					func_47(uParam4, 23, 1);
					func_47(uParam4, 24, 1);
					func_47(uParam4, 25, 1);
					func_47(uParam4, 26, 1);
					func_47(uParam4, 36, 1);
					func_47(uParam4, 46, 1);
					func_47(uParam4, 38, 1);
					func_47(uParam4, 28, 1);
					func_47(uParam4, 10, 1);
					func_47(uParam4, 33, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					func_47(uParam4, 110, 1);
					func_47(uParam4, 112, 1);
					func_47(uParam4, 115, 1);
					func_47(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_45(uParam3, 16, 1);
						func_45(uParam3, 48, 1);
						func_45(uParam3, 49, 1);
						func_45(uParam3, 18, 1);
						func_45(uParam3, 50, 1);
						func_45(uParam3, 51, 1);
						func_45(uParam3, 52, 1);
						func_45(uParam3, 53, 1);
						func_45(uParam3, 38, 1);
						func_45(uParam3, 47, 1);
						func_45(uParam3, 111, 1);
						func_45(uParam3, 62, 1);
						func_43(uParam2, 18, 1);
						func_43(uParam2, 49, 1);
						func_43(uParam2, 50, 1);
						func_43(uParam2, 51, 1);
						func_43(uParam2, 52, 1);
						func_43(uParam2, 62, 1);
						func_43(uParam2, 37, 1);
						func_43(uParam2, 46, 1);
						func_43(uParam2, 110, 1);
					}
					func_47(uParam4, 9, 1);
					func_47(uParam4, 12, 1);
					func_47(uParam4, 13, 1);
					func_47(uParam4, 17, 1);
					func_47(uParam4, 18, 1);
					func_47(uParam4, 19, 1);
					func_47(uParam4, 20, 1);
					func_47(uParam4, 59, 1);
					func_47(uParam4, 60, 1);
					func_47(uParam4, 61, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 63, 1);
					func_47(uParam4, 64, 1);
					func_47(uParam4, 65, 1);
					func_47(uParam4, 66, 1);
					func_47(uParam4, 67, 1);
					func_47(uParam4, 68, 1);
					func_47(uParam4, 69, 1);
					func_47(uParam4, 70, 1);
					func_47(uParam4, 71, 1);
					func_47(uParam4, 72, 1);
					func_47(uParam4, 21, 1);
					func_47(uParam4, 22, 1);
					func_47(uParam4, 23, 1);
					func_47(uParam4, 24, 1);
					func_47(uParam4, 25, 1);
					func_47(uParam4, 26, 1);
					func_47(uParam4, 36, 1);
					func_47(uParam4, 46, 1);
					func_47(uParam4, 38, 1);
					func_47(uParam4, 29, 1);
					func_47(uParam4, 28, 1);
					func_47(uParam4, 8, 1);
					func_47(uParam4, 10, 1);
					func_47(uParam4, 31, 1);
					func_47(uParam4, 33, 1);
					func_47(uParam4, 34, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					break;
				
				case 10:
					func_47(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_45(uParam3, 3, 1);
						func_45(uParam3, 4, 1);
						func_45(uParam3, 6, 1);
						func_45(uParam3, 10, 1);
						func_45(uParam3, 54, 1);
						func_45(uParam3, 55, 1);
						func_45(uParam3, 56, 1);
						func_45(uParam3, 13, 1);
						func_45(uParam3, 16, 1);
						func_45(uParam3, 48, 1);
						func_45(uParam3, 49, 1);
						func_45(uParam3, 18, 1);
						func_45(uParam3, 50, 1);
						func_45(uParam3, 51, 1);
						func_45(uParam3, 52, 1);
						func_45(uParam3, 53, 1);
						func_45(uParam3, 38, 1);
						func_45(uParam3, 47, 1);
						func_45(uParam3, 111, 1);
						func_45(uParam3, 62, 1);
						func_45(uParam3, 20, 1);
						func_45(uParam3, 26, 1);
						func_45(uParam3, 27, 1);
						func_45(uParam3, 32, 1);
						func_45(uParam3, 33, 1);
						func_45(uParam3, 37, 1);
						func_45(uParam3, 39, 1);
						func_45(uParam3, 106, 1);
						func_45(uParam3, 114, 1);
						func_45(uParam3, 116, 1);
						func_45(uParam3, 117, 1);
						func_45(uParam3, 118, 1);
						func_45(uParam3, 119, 1);
						func_43(uParam2, 3, 1);
						func_43(uParam2, 4, 1);
						func_43(uParam2, 6, 1);
						func_43(uParam2, 8, 1);
						func_43(uParam2, 9, 1);
						func_43(uParam2, 10, 1);
						func_43(uParam2, 53, 1);
						func_43(uParam2, 56, 1);
						func_43(uParam2, 55, 1);
						func_43(uParam2, 13, 1);
						func_43(uParam2, 18, 1);
						func_43(uParam2, 49, 1);
						func_43(uParam2, 50, 1);
						func_43(uParam2, 51, 1);
						func_43(uParam2, 52, 1);
						func_43(uParam2, 62, 1);
						func_43(uParam2, 37, 1);
						func_43(uParam2, 46, 1);
						func_43(uParam2, 110, 1);
						func_43(uParam2, 21, 1);
						func_43(uParam2, 26, 1);
						func_43(uParam2, 27, 1);
						func_43(uParam2, 28, 1);
						func_43(uParam2, 32, 1);
						func_43(uParam2, 36, 1);
						func_43(uParam2, 38, 1);
						func_43(uParam2, 55, 1);
						func_43(uParam2, 14, 1);
						func_43(uParam2, 105, 1);
						func_43(uParam2, 113, 1);
						func_43(uParam2, 114, 1);
						func_43(uParam2, 115, 1);
						func_43(uParam2, 116, 1);
						func_43(uParam2, 117, 1);
					}
					func_47(uParam4, 2, 1);
					func_47(uParam4, 3, 1);
					func_47(uParam4, 4, 1);
					func_47(uParam4, 14, 1);
					func_47(uParam4, 15, 1);
					func_47(uParam4, 16, 1);
					func_47(uParam4, 9, 1);
					func_47(uParam4, 10, 1);
					func_47(uParam4, 12, 1);
					func_47(uParam4, 13, 1);
					func_47(uParam4, 17, 1);
					func_47(uParam4, 18, 1);
					func_47(uParam4, 19, 1);
					func_47(uParam4, 20, 1);
					func_47(uParam4, 59, 1);
					func_47(uParam4, 60, 1);
					func_47(uParam4, 61, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 63, 1);
					func_47(uParam4, 64, 1);
					func_47(uParam4, 65, 1);
					func_47(uParam4, 66, 1);
					func_47(uParam4, 67, 1);
					func_47(uParam4, 68, 1);
					func_47(uParam4, 69, 1);
					func_47(uParam4, 70, 1);
					func_47(uParam4, 71, 1);
					func_47(uParam4, 72, 1);
					func_47(uParam4, 21, 1);
					func_47(uParam4, 22, 1);
					func_47(uParam4, 23, 1);
					func_47(uParam4, 24, 1);
					func_47(uParam4, 25, 1);
					func_47(uParam4, 26, 1);
					func_47(uParam4, 36, 1);
					func_47(uParam4, 46, 1);
					func_47(uParam4, 38, 1);
					func_47(uParam4, 29, 1);
					func_47(uParam4, 28, 1);
					func_47(uParam4, 8, 1);
					func_47(uParam4, 31, 1);
					func_47(uParam4, 32, 1);
					func_47(uParam4, 33, 1);
					func_47(uParam4, 34, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					func_47(uParam4, 110, 1);
					func_47(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_45(uParam3, 16, 1);
						func_45(uParam3, 48, 1);
						func_45(uParam3, 49, 1);
						func_45(uParam3, 18, 1);
						func_45(uParam3, 50, 1);
						func_45(uParam3, 51, 1);
						func_45(uParam3, 52, 1);
						func_45(uParam3, 53, 1);
						func_45(uParam3, 38, 1);
						func_45(uParam3, 47, 1);
						func_45(uParam3, 111, 1);
						func_45(uParam3, 62, 1);
						func_43(uParam2, 18, 1);
						func_43(uParam2, 49, 1);
						func_43(uParam2, 50, 1);
						func_43(uParam2, 51, 1);
						func_43(uParam2, 52, 1);
						func_43(uParam2, 62, 1);
						func_43(uParam2, 37, 1);
						func_43(uParam2, 46, 1);
						func_43(uParam2, 110, 1);
						func_43(uParam2, 19, 1);
					}
					func_47(uParam4, 3, 1);
					func_47(uParam4, 6, 1);
					func_47(uParam4, 8, 1);
					func_47(uParam4, 9, 1);
					func_47(uParam4, 10, 1);
					func_47(uParam4, 13, 1);
					func_47(uParam4, 17, 1);
					func_47(uParam4, 18, 1);
					func_47(uParam4, 19, 1);
					func_47(uParam4, 20, 1);
					func_47(uParam4, 59, 1);
					func_47(uParam4, 60, 1);
					func_47(uParam4, 61, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 63, 1);
					func_47(uParam4, 64, 1);
					func_47(uParam4, 65, 1);
					func_47(uParam4, 66, 1);
					func_47(uParam4, 67, 1);
					func_47(uParam4, 68, 1);
					func_47(uParam4, 69, 1);
					func_47(uParam4, 70, 1);
					func_47(uParam4, 71, 1);
					func_47(uParam4, 72, 1);
					func_47(uParam4, 21, 1);
					func_47(uParam4, 22, 1);
					func_47(uParam4, 23, 1);
					func_47(uParam4, 24, 1);
					func_47(uParam4, 25, 1);
					func_47(uParam4, 26, 1);
					func_47(uParam4, 36, 1);
					func_47(uParam4, 46, 1);
					func_47(uParam4, 38, 1);
					func_47(uParam4, 29, 1);
					func_47(uParam4, 28, 1);
					func_47(uParam4, 31, 1);
					func_47(uParam4, 32, 1);
					func_47(uParam4, 33, 1);
					func_47(uParam4, 34, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					func_47(uParam4, 110, 1);
					func_47(uParam4, 112, 1);
					func_47(uParam4, 115, 1);
					func_47(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_45(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_47(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_45(uParam3, 16, 1);
						func_45(uParam3, 48, 1);
						func_45(uParam3, 49, 1);
						func_45(uParam3, 18, 1);
						func_45(uParam3, 50, 1);
						func_45(uParam3, 51, 1);
						func_45(uParam3, 52, 1);
						func_45(uParam3, 53, 1);
						func_45(uParam3, 38, 1);
						func_45(uParam3, 47, 1);
						func_45(uParam3, 111, 1);
						func_45(uParam3, 62, 1);
						func_43(uParam2, 16, 1);
						func_43(uParam2, 47, 1);
						func_43(uParam2, 48, 1);
						func_43(uParam2, 18, 1);
						func_43(uParam2, 49, 1);
						func_43(uParam2, 50, 1);
						func_43(uParam2, 51, 1);
						func_43(uParam2, 52, 1);
						func_43(uParam2, 62, 1);
						func_43(uParam2, 37, 1);
						func_43(uParam2, 46, 1);
						func_43(uParam2, 110, 1);
					}
					func_47(uParam4, 9, 1);
					func_47(uParam4, 10, 1);
					func_47(uParam4, 18, 1);
					func_47(uParam4, 19, 1);
					func_47(uParam4, 20, 1);
					func_47(uParam4, 59, 1);
					func_47(uParam4, 60, 1);
					func_47(uParam4, 61, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 63, 1);
					func_47(uParam4, 64, 1);
					func_47(uParam4, 65, 1);
					func_47(uParam4, 66, 1);
					func_47(uParam4, 67, 1);
					func_47(uParam4, 68, 1);
					func_47(uParam4, 69, 1);
					func_47(uParam4, 70, 1);
					func_47(uParam4, 71, 1);
					func_47(uParam4, 72, 1);
					func_47(uParam4, 21, 1);
					func_47(uParam4, 22, 1);
					func_47(uParam4, 23, 1);
					func_47(uParam4, 24, 1);
					func_47(uParam4, 25, 1);
					func_47(uParam4, 26, 1);
					func_47(uParam4, 36, 1);
					func_47(uParam4, 46, 1);
					func_47(uParam4, 38, 1);
					func_47(uParam4, 29, 1);
					func_47(uParam4, 8, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_45(uParam3, 3, 1);
						func_45(uParam3, 7, 1);
						func_45(uParam3, 0, 1);
						func_45(uParam3, 12, 1);
						func_45(uParam3, 13, 1);
						func_45(uParam3, 15, 1);
						func_45(uParam3, 16, 1);
						func_45(uParam3, 48, 1);
						func_45(uParam3, 49, 1);
						func_45(uParam3, 17, 1);
						func_45(uParam3, 18, 1);
						func_45(uParam3, 50, 1);
						func_45(uParam3, 51, 1);
						func_45(uParam3, 52, 1);
						func_45(uParam3, 53, 1);
						func_45(uParam3, 38, 1);
						func_45(uParam3, 47, 1);
						func_45(uParam3, 111, 1);
						func_45(uParam3, 62, 1);
						func_45(uParam3, 20, 1);
						func_45(uParam3, 21, 1);
						func_45(uParam3, 25, 1);
						func_45(uParam3, 26, 1);
						func_45(uParam3, 27, 1);
						func_45(uParam3, 30, 1);
						func_45(uParam3, 31, 1);
						func_45(uParam3, 32, 1);
						func_45(uParam3, 33, 1);
						func_45(uParam3, 39, 1);
						func_45(uParam3, 37, 1);
						func_45(uParam3, 55, 1);
						func_43(uParam2, 0, 1);
						func_43(uParam2, 2, 1);
						func_43(uParam2, 3, 1);
						func_43(uParam2, 4, 1);
						func_43(uParam2, 6, 1);
						func_43(uParam2, 7, 1);
						func_43(uParam2, 8, 1);
						func_43(uParam2, 11, 1);
						func_43(uParam2, 13, 1);
						func_43(uParam2, 15, 1);
						func_43(uParam2, 16, 1);
						func_43(uParam2, 47, 1);
						func_43(uParam2, 48, 1);
						func_43(uParam2, 17, 1);
						func_43(uParam2, 18, 1);
						func_43(uParam2, 49, 1);
						func_43(uParam2, 50, 1);
						func_43(uParam2, 51, 1);
						func_43(uParam2, 52, 1);
						func_43(uParam2, 62, 1);
						func_43(uParam2, 37, 1);
						func_43(uParam2, 46, 1);
						func_43(uParam2, 110, 1);
						func_43(uParam2, 19, 1);
						func_43(uParam2, 20, 1);
						func_43(uParam2, 21, 1);
						func_43(uParam2, 22, 1);
						func_43(uParam2, 54, 1);
						func_43(uParam2, 24, 1);
						func_43(uParam2, 26, 1);
						func_43(uParam2, 27, 1);
						func_43(uParam2, 28, 1);
						func_43(uParam2, 30, 1);
						func_43(uParam2, 31, 1);
						func_43(uParam2, 32, 1);
						func_43(uParam2, 38, 1);
						func_43(uParam2, 36, 1);
					}
					func_47(uParam4, 3, 1);
					func_47(uParam4, 3, 1);
					func_47(uParam4, 4, 1);
					func_47(uParam4, 14, 1);
					func_47(uParam4, 15, 1);
					func_47(uParam4, 16, 1);
					func_47(uParam4, 8, 1);
					func_47(uParam4, 9, 1);
					func_47(uParam4, 10, 1);
					func_47(uParam4, 12, 1);
					func_47(uParam4, 13, 1);
					func_47(uParam4, 17, 1);
					func_47(uParam4, 18, 1);
					func_47(uParam4, 19, 1);
					func_47(uParam4, 20, 1);
					func_47(uParam4, 59, 1);
					func_47(uParam4, 60, 1);
					func_47(uParam4, 61, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 63, 1);
					func_47(uParam4, 64, 1);
					func_47(uParam4, 65, 1);
					func_47(uParam4, 66, 1);
					func_47(uParam4, 67, 1);
					func_47(uParam4, 68, 1);
					func_47(uParam4, 69, 1);
					func_47(uParam4, 70, 1);
					func_47(uParam4, 71, 1);
					func_47(uParam4, 72, 1);
					func_47(uParam4, 21, 1);
					func_47(uParam4, 22, 1);
					func_47(uParam4, 23, 1);
					func_47(uParam4, 24, 1);
					func_47(uParam4, 25, 1);
					func_47(uParam4, 26, 1);
					func_47(uParam4, 36, 1);
					func_47(uParam4, 46, 1);
					func_47(uParam4, 38, 1);
					func_47(uParam4, 29, 1);
					func_47(uParam4, 28, 1);
					func_47(uParam4, 31, 1);
					func_47(uParam4, 33, 1);
					func_47(uParam4, 34, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_47(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_48()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_50(float fParam0)
{
	func_78(iLocal_139, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 172, true), "CELL_BORDER");
}

void func_51(float fParam0)
{
	if (Global_1938039)
	{
		fParam0 = -1f;
	}
	func_78(iLocal_139, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 173, true), "CELL_FILTER");
}

void func_52()
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4())
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 183, true), "CELL_GRID");
	func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
	func_51(5f);
	func_50(6f);
	func_53(7f);
	func_30(8f);
	if (bLocal_60)
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, true), "CELL_DEPTH");
	}
	if (!func_62(14))
	{
		if ((Global_79248 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_61())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_138, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_4543968));
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_53(float fParam0)
{
	func_78(iLocal_139, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 175, true), "CELL_ACCYC");
}

void func_54()
{
	func_168(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_168(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, true), "CELL_284");
	func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
	func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, true), "CELL_281");
	func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, true), "CELL_280");
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_168(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_55()
{
	if (iLocal_154 == 1)
	{
		func_56();
		return;
	}
	if (iLocal_131 == 0 && iLocal_132 == 0)
	{
		func_168(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_168(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, true), "CELL_281");
		func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, true), func_66());
		if (iLocal_129)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_2NP_XB");
					}
					if (func_177())
					{
						func_51(3f);
						func_50(4f);
					}
				}
				else if ((Global_79248 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_61())
				{
					func_52();
				}
				else
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, true), "CELL_GRID");
					func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
					if (func_177())
					{
						func_51(5f);
						func_50(6f);
						if (func_31(1))
						{
							func_30(7f);
							if (bLocal_60)
							{
								func_78(iLocal_139, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_60)
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, true), "CELL_GRID");
					func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
					func_78(iLocal_139, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, true), "CELL_284");
					if (func_177())
					{
						func_51(6f);
						func_50(7f);
						func_78(iLocal_139, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
					if (func_177())
					{
						func_51(3f);
						func_50(4f);
						func_78(iLocal_139, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!func_164())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, true), "CELL_GRID");
				func_78(iLocal_139, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
				func_78(iLocal_139, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, true), "CELL_284");
				if (func_177())
				{
					if (!func_164())
					{
						func_51(7f);
						func_50(8f);
						if (bLocal_61)
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 182, true), "CELL_FOCUS");
						}
						func_78(iLocal_139, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_164())
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4())
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_1NP_XB");
						}
						else
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_1NP_XB");
						}
					}
					func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
					if (func_177())
					{
						if (!func_164())
						{
							func_51(4f);
							func_50(5f);
							func_78(iLocal_139, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_168(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_56()
{
	func_168(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_168(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, true), "CELL_284");
	func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_285");
	func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, true), func_66());
	func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, true), "CELL_281");
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_168(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_57()
{
	if (iLocal_129)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_71, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_72);
	}
}

void func_58(bool bParam0)
{
	if (iLocal_154 == 1)
	{
		return;
	}
	if (Global_4718592.f_176766 == 1)
	{
	}
	else if (Global_4718592.f_176767 == 1)
	{
	}
	else
	{
		MOBILE::CELL_CAM_ACTIVATE_SELFIE_MODE(bParam0);
	}
}

void func_59()
{
	if (iLocal_59 == 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sLocal_17[Global_4541707], "phone_cam12DUMMY"))
		{
			MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
			MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
		}
		else
		{
			MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(true);
			MOBILE::SET_MOBILE_PHONE_DOF_STATE(true);
		}
	}
}

void func_60()
{
	func_168(iLocal_138, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_177())
	{
		if (!Global_1938039)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("phone_cam");
		}
	}
}

int func_61()
{
	if (func_62(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[2 /*29*/])
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
	return 1;
}

bool func_62(int iParam0)
{
	return Global_43922 == iParam0;
}

void func_63(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_64()
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4())
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_2NP_XB");
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 30, true), "CELL_RT_RSTICK");
		func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, 1, true), "CELL_RT_LSTICK");
	}
	else
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_RT_RSTICK");
		func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, 0, true), "CELL_RT_LSTICK");
	}
}

void func_65()
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4())
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, true), "CELL_LT_RSTICK");
	if (func_62(14))
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 30, true), "CELL_LT_LSTICK");
	}
	else
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, true), "CELL_LT_LSTICKZ");
		func_78(iLocal_139, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 30, true), "CELL_LT_LSTICK");
	}
}

char* func_66()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1962295))
	{
		return func_77(&Global_1962295);
	}
	if (func_76())
	{
		return "FHHUD_SENDLES";
	}
	if (func_74())
	{
		return "CSH_PHONEC";
	}
	if (func_73(PLAYER::PLAYER_ID(), 275) && Global_1962288)
	{
		return "RE_SS_SNDOMG";
	}
	switch (func_72(PLAYER::PLAYER_ID()))
	{
		case 14:
		case 3:
		case 7:
		case 8:
		case 12:
		case 2:
		case 15:
			return "TR_SESS_PHTO";
		
		default:
	}
	switch (func_67(PLAYER::PLAYER_ID()))
	{
		case 3:
			return "FXR_FRAN_PHTO";
		
		case 2:
			return "FXR_IMAN_PHTO";
		
		default:
	}
	if (BitTest(Global_2707706.f_613, 3))
	{
		return "ANIMAPHOCELL_1";
	}
	return "CELL_287";
}

int func_67(int iParam0)
{
	if (func_71(iParam0) == 264)
	{
		return func_68(iParam0);
	}
	return -1;
}

int func_68(int iParam0)
{
	if (func_69(iParam0, 0))
	{
		return Global_1886967[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

int func_69(int iParam0, int iParam1)
{
	if (func_70(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1886967[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_70(var uParam0)
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

int func_71(int iParam0)
{
	if (func_70(iParam0))
	{
		if (func_69(iParam0, 0))
		{
			return Global_1886967[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_72(int iParam0)
{
	if (func_71(iParam0) == 271)
	{
		return func_68(iParam0);
	}
	return -1;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < Global_1882343)
	{
		if (Global_1882343[iVar1] == iParam1)
		{
			if (Global_1882422[iVar0 /*142*/].f_78.f_1[iVar1 /*3*/] == 2)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_74()
{
	switch (func_75(PLAYER::PLAYER_ID()))
	{
		case 16:
			return 1;
		
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_75(int iParam0)
{
	if (func_71(iParam0) == 256)
	{
		return func_68(iParam0);
	}
	return -1;
}

int func_76()
{
	switch (Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_33)
	{
		case 233:
			switch (Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_182)
			{
				case 9:
					return 1;
				
				default:
			}
			break;
		
		case 158:
			switch (Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_182)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				
				default:
			}
			break;
	}
	if (Global_1970486)
	{
		return 1;
	}
	return 0;
}

var func_77(var uParam0)
{
	return uParam0;
}

void func_78(int iParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_79(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_63(sParam4);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_79(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_80()
{
	if (Global_79248)
	{
		switch (Global_23283)
		{
			case 0:
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
				{
					func_163("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_163("CELL_CAM_SELFIE_0", -1);
				}
				Global_23283++;
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
					{
						func_163("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_163("CELL_CAM_SELFIE_1", -1);
					}
					Global_23283++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_23282)
		{
			case 0:
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
				{
					func_163("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_163("CELL_CAM_SELFIE_0", -1);
				}
				Global_23282++;
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
					{
						func_163("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_163("CELL_CAM_SELFIE_1", -1);
					}
					Global_23282++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (PAD::IS_CONTROL_PRESSED(2, iVar10) && !PAD::IS_CONTROL_PRESSED(2, iVar9))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 2, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1, true);
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 2)) * 127;
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
		{
			if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			}
		}
		else if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
		{
			fVar7 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290);
			fVar8 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291);
			if (PAD::IS_MOUSE_LOOK_INVERTED())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_162);
		}
		func_84(fVar5);
		func_83(fVar6);
		func_82(fVar4);
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, iVar9))
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, true);
		PAD::ENABLE_CONTROL_ACTION(0, 1, true);
	}
}

void func_82(float fParam0)
{
	fLocal_159 = (fLocal_159 + fParam0);
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < -1f)
	{
		fLocal_159 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(fLocal_159);
}

void func_83(float fParam0)
{
	fLocal_160 = (fLocal_160 + fParam0);
	if (fLocal_160 > 1f)
	{
		fLocal_160 = 1f;
	}
	else if (fLocal_160 < -1f)
	{
		fLocal_160 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(fLocal_160);
}

void func_84(float fParam0)
{
	fLocal_161 = (fLocal_161 + fParam0);
	if (fLocal_161 > 1f)
	{
		fLocal_161 = 1f;
	}
	else if (fLocal_161 < -1f)
	{
		fLocal_161 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(fLocal_161);
}

void func_85()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (PAD::IS_CONTROL_PRESSED(2, iVar10))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 178) && !func_164())
			{
				MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(0.5f);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(0.85f);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(0.5f);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(-0.25f);
				fLocal_155 = 0.5f;
				fLocal_156 = 0.85f;
				fLocal_157 = 0.5f;
				fLocal_158 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (PAD::IS_CONTROL_PRESSED(2, iVar10) && !PAD::IS_CONTROL_PRESSED(2, iVar11))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 178) && !func_164())
		{
			MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(0.5f);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(0.85f);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(0.5f);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(-0.25f);
			fLocal_155 = 0.5f;
			fLocal_156 = 0.85f;
			fLocal_157 = 0.5f;
			fLocal_158 = -0.25f;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 2, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1, true);
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 2)) * 127;
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
		{
			iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 39)) * 127;
			fVar8 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290);
			fVar9 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291);
			if (PAD::IS_MOUSE_LOOK_INVERTED())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (MISC::ABSI(iVar2) > 15 || MISC::ABSI(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_162);
		}
		func_89(fVar6);
		func_88(fVar7);
		func_87(fVar4);
		if (!func_62(14))
		{
			func_86(fVar5);
		}
	}
	else if (!PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar11))
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, true);
		PAD::ENABLE_CONTROL_ACTION(0, 1, true);
	}
	if (!PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar10) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar11))
	{
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 294)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 295)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 292)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 293)) * 127;
		if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_162);
		}
		if (!func_62(14))
		{
			func_86(fVar5);
		}
	}
}

void func_86(float fParam0)
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 1f)
	{
		fLocal_157 = 1f;
	}
	else if (fLocal_157 < 0f)
	{
		fLocal_157 = 0f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_157);
}

void func_87(float fParam0)
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1f)
	{
		fLocal_158 = 1f;
	}
	else if (fLocal_158 < -1f)
	{
		fLocal_158 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(fLocal_158);
}

void func_88(float fParam0)
{
	fLocal_156 = (fLocal_156 + fParam0);
	if (fLocal_156 > 1.5f)
	{
		fLocal_156 = 1.5f;
	}
	else if (fLocal_156 < 0.5f)
	{
		fLocal_156 = 0.5f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_156);
}

void func_89(float fParam0)
{
	fLocal_155 = (fLocal_155 + fParam0);
	if (fLocal_155 > 2f)
	{
		fLocal_155 = 2f;
	}
	else if (fLocal_155 < -1.7f)
	{
		fLocal_155 = -1.7f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_155);
}

void func_90()
{
	if (Global_79509 || Global_79510)
	{
		return;
	}
	if (iLocal_122 == 0)
	{
		if (!iLocal_148)
		{
			if (Global_4718592.f_176766 == 0 && Global_4718592.f_176767 == 0)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_139, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_125 == 0)
	{
		if (Global_20755)
		{
			if (Global_21025)
			{
				if (iLocal_148 == 0)
				{
					if (Global_20813.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_92(255, 255, 255, 255);
			func_91(0.059f, 0.644f, "CELL_284", 0);
			func_92(255, 255, 255, 255);
			func_91(0.165f, 0.644f, "CELL_285", 0);
			func_92(255, 255, 255, 255);
			func_91(0.275f, 0.75f, "CELL_280", 0);
			func_92(255, 255, 255, 255);
			func_91(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_20755)
	{
	}
	else
	{
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.75f, func_66(), 0);
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.79f, "CELL_286", 0);
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_91(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3)
{
	HUD::SET_TEXT_SCALE(0.4f, 0.4f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(true);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_93()
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_73, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_74);
}

void func_94()
{
	PAD::DISABLE_CONTROL_ACTION(0, 25, true);
	PAD::DISABLE_CONTROL_ACTION(0, 44, true);
	PAD::DISABLE_CONTROL_ACTION(0, 3, true);
	PAD::DISABLE_CONTROL_ACTION(0, 4, true);
	PAD::DISABLE_CONTROL_ACTION(0, 5, true);
	PAD::DISABLE_CONTROL_ACTION(0, 6, true);
	PAD::DISABLE_CONTROL_ACTION(0, 1, true);
	PAD::DISABLE_CONTROL_ACTION(0, 2, true);
	PAD::DISABLE_CONTROL_ACTION(0, 39, true);
	PAD::DISABLE_CONTROL_ACTION(0, 47, true);
	PAD::DISABLE_CONTROL_ACTION(0, 56, true);
}

void func_95()
{
	Local_85 = { Global_20766[Global_20758 /*3*/] };
	if (Global_20755)
	{
		if (func_98())
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Local_91);
			Local_85 = { Local_91 };
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
		}
		func_1(1);
		if (iLocal_119)
		{
			Local_79.f_0 = (Local_79.f_0 + 12f);
		}
		if (Local_79.f_0 > Local_85.f_0 || Local_79.f_0 == Local_85.f_0)
		{
			Local_79.f_0 = Local_85.f_0;
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_79.f_1 = (Local_79.f_1 - 6f);
		}
		if (BitTest(Global_8685, 4))
		{
			if (Local_79.f_1 < (Local_85.f_1 + 15f) || Local_79.f_1 == (Local_85.f_1 + 15f))
			{
				Local_79.f_1 = (Local_85.f_1 + 15f);
				iLocal_120 = 0;
			}
		}
		else if (Local_79.f_1 < (Local_85.f_1 + 10f) || Local_79.f_1 == (Local_85.f_1 + 10f))
		{
			Local_79.f_1 = (Local_85.f_1 + 10f);
			iLocal_120 = 0;
		}
		if (iLocal_121)
		{
			Local_79.f_2 = (Local_79.f_2 - 10f);
		}
		if (Local_79.f_2 < Local_85.f_2 || Local_79.f_2 == Local_85.f_2)
		{
			Local_79.f_2 = Local_85.f_2;
			iLocal_121 = 0;
		}
		if (func_98() == 0)
		{
			if (BitTest(Global_8685, 4))
			{
				Local_85.f_1 = (Local_85.f_1 + 15f);
			}
			else
			{
				Local_85.f_1 = (Local_85.f_1 + 10f);
			}
			Local_85.f_0 = (Local_85.f_0 - 14f);
		}
		else
		{
			Local_85 = { Global_20759[Global_20758 /*3*/] };
		}
		Local_79 = { Local_85 };
		iLocal_121 = 0;
		iLocal_120 = 0;
		iLocal_119 = 0;
		MOBILE::SET_MOBILE_PHONE_POSITION(Local_79);
		if ((iLocal_119 == 0 && iLocal_120 == 0) && iLocal_121 == 0)
		{
			iLocal_122 = 0;
			Local_82 = { -90.3f, 0f, 90f };
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_82, 0);
			if (!BitTest(Global_8683, 22))
			{
				if (BitTest(Global_8683, 28))
				{
					StringCopy(&cLocal_143, "CELL_294", 16);
					func_97();
				}
				else
				{
					StringCopy(&cLocal_143, "CELL_293", 16);
					func_96();
				}
				iLocal_98 = 2;
			}
		}
	}
}

void func_96()
{
	func_168(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_168(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8684, 28))
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, true), "CELL_286");
	}
	else
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 178, true), "CELL_277");
		func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, true), "CELL_GALSAVE");
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_168(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_97()
{
	func_168(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_168(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8684, 28))
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, true), func_66());
		func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, true), "CELL_286");
	}
	else
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, true), func_66());
		func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 178, true), "CELL_277");
		func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, true), "CELL_GALSAVE");
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_168(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_98()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		{
			if (Global_20756 == 0)
			{
				if (Global_7998 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_22166 != 2)
						{
						}
					}
				}
			}
		}
		if (func_62(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1919171))))
		{
			return 0;
		}
		if (Global_113420)
		{
			return 0;
		}
	}
	if (Global_79248)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4543261 || iVar2 == 1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114372.f_14054.f_89)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_99()
{
	PAD::DISABLE_CONTROL_ACTION(0, 47, true);
	PAD::SET_INPUT_EXCLUSIVE(0, Global_20783);
	Local_82 = { Global_20773 };
	Local_85 = { Global_20766[Global_20758 /*3*/] };
	if (func_98())
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_88, 0);
		Local_82 = { Local_88 };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Local_91);
		Local_85 = { Local_91 };
		iLocal_116 = 0;
		iLocal_117 = 0;
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
	}
	if (Global_20755)
	{
		func_168(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_58(0);
		iLocal_129 = 0;
		if (BitTest(Global_8683, 30))
		{
			iLocal_116 = 0;
			iLocal_117 = 0;
			iLocal_118 = 0;
			func_100();
		}
		if (iLocal_119)
		{
			if (BitTest(Global_8683, 9))
			{
				Local_79.f_0 = (Local_79.f_0 + 2f);
			}
			else
			{
				Local_79.f_0 = (Local_79.f_0 + 12f);
			}
		}
		if (Local_79.f_0 > Local_85.f_0 || Local_79.f_0 == Local_85.f_0)
		{
			Local_79.f_0 = Local_85.f_0;
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_79.f_1 = (Local_79.f_1 - 6f);
		}
		if (Local_79.f_1 < Local_85.f_1 || Local_79.f_1 == Local_85.f_1)
		{
			Local_79.f_1 = Local_85.f_1;
			iLocal_120 = 0;
		}
		if (iLocal_121)
		{
			Local_79.f_2 = (Local_79.f_2 - 10f);
		}
		if (Local_79.f_2 < Local_85.f_2 || Local_79.f_2 == Local_85.f_2)
		{
			Local_79.f_2 = Local_85.f_2;
			iLocal_121 = 0;
		}
		if (iLocal_121 == 0)
		{
			if (iLocal_116)
			{
				Local_76.f_0 = (Local_76.f_0 + 1f);
			}
			if (Local_76.f_0 > Local_82.f_0 || Local_76.f_0 == Local_82.f_0)
			{
				Local_76.f_0 = Local_82.f_0;
				iLocal_116 = 0;
			}
			if (iLocal_117)
			{
				Local_76.f_1 = (Local_76.f_1 - 2f);
			}
			if (Local_76.f_1 < Local_82.f_1 || Local_76.f_1 == Local_82.f_1)
			{
				Local_76.f_1 = Local_82.f_1;
				iLocal_117 = 0;
			}
			if (iLocal_118)
			{
				Local_76.f_2 = (Local_76.f_2 - 14f);
			}
			if (Local_76.f_2 < Local_82.f_2 || Local_76.f_2 == Local_82.f_2)
			{
				Local_76.f_2 = Local_82.f_2;
				iLocal_118 = 0;
			}
		}
		if (iLocal_124)
		{
			Local_76 = { Local_82 };
			Local_79 = { Local_85 };
			iLocal_116 = 0;
			iLocal_117 = 0;
			iLocal_118 = 0;
			if (func_98() == 0)
			{
				MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
				MOBILE::SET_MOBILE_PHONE_POSITION(Local_79);
			}
			func_115(0, 1);
		}
		else if (func_98() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(Local_79);
		}
		if ((iLocal_116 == 0 && iLocal_117 == 0) && iLocal_118 == 0)
		{
			func_100();
		}
	}
	else
	{
		if (iLocal_116)
		{
			Local_76.f_0 = (Local_76.f_0 + 1f);
		}
		if (Local_76.f_0 > Local_82.f_0 || Local_76.f_0 == Local_82.f_0)
		{
			iLocal_116 = 0;
		}
		if (iLocal_117)
		{
			Local_76.f_1 = (Local_76.f_1 - 2f);
		}
		if (Local_76.f_1 < Local_82.f_1 || Local_76.f_1 == Local_82.f_1)
		{
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_76.f_2 = (Local_76.f_2 - 7f);
		}
		if (Local_76.f_2 < Local_82.f_2 || Local_76.f_2 == Local_82.f_2)
		{
			iLocal_118 = 0;
		}
		if ((iLocal_116 == 0 && iLocal_117 == 0) && iLocal_118 == 0)
		{
			func_100();
		}
	}
	MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
}

void func_100()
{
	func_1(0);
	if (func_98() == 0)
	{
		if (BitTest(Global_8683, 30))
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20759[Global_20758 /*3*/]);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20766[Global_20758 /*3*/]);
		}
		Local_76 = { Local_82 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
	}
	Global_23199 = 0;
	func_122(0, 0);
	func_126(0);
	iLocal_113 = 0;
	func_117(1);
	Global_20800 = 1;
	Global_23202 = 0;
	if (Global_20813.f_1 > 4)
	{
		Global_20813.f_1 = 6;
		Global_20791 = 1;
		func_101();
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_138))
	{
		func_167(iLocal_138, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0);
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_139);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_138);
	if (Global_21027 == 1)
	{
		MISC::SET_BIT(&Global_8683, 17);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 17);
	}
	MISC::CLEAR_BIT(&Global_8683, 18);
	MISC::CLEAR_BIT(&Global_8683, 21);
	HUD::CLEAR_FLOATING_HELP(0, true);
	MISC::CLEAR_BIT(&Global_8685, 3);
	MISC::CLEAR_BIT(&Global_4542983, 3);
	MISC::SET_GAME_PAUSED(false);
	PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	Global_23203 = 1;
	AUDIO::STOP_SOUND(iLocal_110);
	AUDIO::RELEASE_SOUND_ID(iLocal_110);
	HUD::BUSYSPINNER_OFF();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
	}
	func_117(1);
	MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
	MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
	if (Global_4541708 > 0 && Global_4541708 < 13)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_31[Global_4541708]);
	}
	func_115(0, 1);
	if (func_175(0, 1, iLocal_62, 1))
	{
		iLocal_62 = 0;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_101()
{
	char cVar0[24];
	
	if (Global_20796 == 1)
	{
		return;
	}
	if (Global_20813.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794))
	{
		if (Global_79248)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_20813.f_1)
	{
		case 6:
			func_168(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_109(Global_9288);
			if (Global_9288 == 1)
			{
				func_168(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
				Global_20793 = Global_20817;
			}
			else
			{
				func_168(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20818), -1082130432, -1082130432, -1082130432);
				Global_20793 = Global_20818;
			}
			if (Global_20801)
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_108(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_108(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21027 == 0)
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8683, 17);
			}
			else if (Global_79248)
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8683, 17);
			}
			else
			{
				if (Global_21026 == 1)
				{
					if (Global_20801)
					{
						func_108(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_108(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20801)
				{
					func_108(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_108(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8683, 17);
			}
			if (Global_79248)
			{
				func_106();
				MISC::CLEAR_BIT(&Global_8685, 9);
				func_168(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_168(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_108(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
			if (BitTest(Global_8683, 20))
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20756)
				{
					func_108(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20812 == 1)
			{
				func_105();
				func_168(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114372.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22179)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22181);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_63("CELL_300");
					func_63("CELL_217");
					func_63("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_104(Global_7998, Global_20813) == 0)
				{
					func_108(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_7998 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_108(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2139[Global_7998 /*29*/].f_3), &(Global_2139[Global_7998 /*29*/].f_7), "CELL_217", &(Global_2139[Global_7998 /*29*/].f_3), 0);
				}
				func_168(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22166 == 4 || Global_22166 == 3)
			{
				func_168(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114372.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_105();
				if (Global_22179)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22181);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_63("CELL_300");
					func_63("CELL_219");
					func_63("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_22424)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_104(Global_7998, Global_20813) == 0)
					{
						func_168(Global_20794, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_7998 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_168(Global_20794, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2139[Global_7998 /*29*/].f_3), &(Global_2139[Global_7998 /*29*/].f_7), &cVar0, &(Global_2139[Global_7998 /*29*/].f_3), 0);
					}
				}
				func_168(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_102();
			break;
		
		default:
			break;
	}
}

void func_102()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794))
	{
		func_103();
		if (Global_20812 == 1)
		{
			if (Global_20801)
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22213)
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8683, 20))
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_108(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
		}
		else
		{
			func_108(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
			if (BitTest(Global_8683, 20))
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20756)
				{
					func_108(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_103()
{
	if (Global_79248)
	{
		func_108(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8683, 17);
	}
}

int func_104(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2139[iParam0 /*29*/].f_24[iParam1];
}

void func_105()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20813 == 0)
		{
			switch (Global_114372.f_14054[Global_20813 /*20*/].f_6)
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
			switch (Global_114372.f_14054[Global_20813 /*20*/].f_6)
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
			switch (Global_114372.f_14054[Global_20813 /*20*/].f_6)
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

void func_106()
{
	if (Global_79248)
	{
		if (func_107() == 0)
		{
			return;
		}
		func_108(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_8683, 17);
	}
}

int func_107()
{
	return 0;
}

void func_108(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_63(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_63(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_63(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_63(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_63(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_109(int iParam0)
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
	
	Global_23234 = 0;
	Global_9288 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9252[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_62(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8690[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8690[iVar1 /*15*/].f_4)
					{
						if (Global_9252[iVar0] == 0)
						{
							Global_9216[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8684, 3))
								{
									iVar2 = 42;
									Global_21029 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21029 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_63(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2695946)
							{
								if (iVar1 == 14)
								{
									func_108(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9252[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8690[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8690[iVar1 /*15*/].f_4)
					{
						if (Global_9252[iVar0] == 0)
						{
							Global_9216[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114372.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114372.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114372.f_14144[iVar3 /*104*/].f_99[Global_20813] == 1)
											{
												Global_23234++;
											}
										}
									}
									iVar3++;
								}
								func_108(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23234), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79248)
								{
									iVar4 = 0;
									iVar4 = Global_4541717;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541718[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541718[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541718[iVar5 /*104*/].f_99[Global_20813] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_108(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20813)
									{
										case 0:
											iVar6 = Global_45133;
											break;
										
										case 1:
											iVar6 = Global_45134;
											break;
										
										case 2:
											iVar6 = Global_45135;
											break;
										
										default:
											break;
									}
									func_108(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_108(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_63(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8689);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8684, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_63(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8684, 3))
								{
									iVar8 = 42;
									Global_21029 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21029 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_63(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_63(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8690[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8684, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_63(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8690[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1881898.f_1;
								func_108(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9252[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_110()
{
	switch (iLocal_98)
	{
		case 1:
			HUD::CLEAR_FLOATING_HELP(0, true);
			if (BitTest(Global_8683, 28))
			{
				StringCopy(&cLocal_143, "CELL_296", 16);
				func_55();
			}
			else
			{
				StringCopy(&cLocal_143, "CELL_295", 16);
				func_29();
			}
			break;
		
		case 2:
			if (!BitTest(Global_8683, 22))
			{
				HUD::CLEAR_FLOATING_HELP(0, true);
				if (BitTest(Global_8683, 28))
				{
					StringCopy(&cLocal_143, "CELL_294", 16);
					func_97();
				}
				else
				{
					StringCopy(&cLocal_143, "CELL_293", 16);
					func_96();
				}
				iLocal_98 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_111(bool bParam0)
{
	if (bParam0)
	{
		if (!func_124())
		{
			MISC::SET_BIT(&Global_1956030, 17);
		}
	}
	else if (func_124())
	{
		MISC::CLEAR_BIT(&Global_1956030, 17);
	}
}

int func_112(int iParam0, int iParam1, int iParam2)
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

void func_113(bool bParam0)
{
	if (bParam0)
	{
		if (!func_114())
		{
			MISC::SET_BIT(&Global_1956030, 18);
		}
	}
	else if (func_114())
	{
		MISC::CLEAR_BIT(&Global_1956030, 18);
	}
}

bool func_114()
{
	return BitTest(Global_1956030, 18);
}

void func_115(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_116(0))
		{
			Global_21025 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20750);
			}
			Global_20741 = { Global_20759[Global_20758 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
	else if (Global_21025 == 1)
	{
		Global_21025 = 0;
		Global_20741 = { Global_20766[Global_20758 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20750);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
}

int func_116(int iParam0)
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

void func_117(int iParam0)
{
	if ((Global_4718592.f_176766 == 0 && Global_4718592.f_176767 == 0) && !Global_1938039)
	{
		if (func_118(PLAYER::PLAYER_ID()) && iParam0)
		{
			Global_1970559 = 1;
		}
		else
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

int func_118(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_120(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_119(Global_2657921[iParam0 /*463*/].f_321.f_7) == 17;
			}
		}
	}
	return 0;
}

int func_119(int iParam0)
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
		case 79:
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
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
	}
	return -1;
}

int func_120(int iParam0, bool bParam1, bool bParam2)
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
				if (iVar0 == Global_2672741.f_3)
				{
					return Global_2672741.f_2;
				}
				else if (Global_2657921[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_121()
{
	return -1;
}

void func_122(bool bParam0, bool bParam1)
{
	if (Global_4718592.f_176766 == 1)
	{
	}
	else if (Global_4718592.f_176767 == 1)
	{
	}
	else
	{
		MOBILE::CELL_CAM_ACTIVATE(bParam0, bParam1);
	}
}

int func_123()
{
	if (BitTest(Global_8683, 15))
	{
		return 1;
	}
	return 0;
}

bool func_124()
{
	return BitTest(Global_1956030, 17);
}

void func_125()
{
	if (Global_20755)
	{
		Local_82 = { -90.3f, 0f, 90f };
		Local_85 = { 1.5f, 0f, -17f };
		if (func_98())
		{
			MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_88, 0);
			Local_82 = { Local_88 };
			MOBILE::GET_MOBILE_PHONE_POSITION(&Local_91);
			Local_85 = { Local_91 };
			iLocal_116 = 0;
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
		}
		if (iLocal_118 == 0)
		{
			if (iLocal_119)
			{
				Local_79.f_0 = (Local_79.f_0 - 14f);
			}
			if (Local_79.f_0 < Local_85.f_0 || Local_79.f_0 == Local_85.f_0)
			{
				iLocal_119 = 0;
			}
			if (iLocal_120)
			{
				Local_79.f_1 = (Local_79.f_1 + 7f);
			}
			if (Local_79.f_1 > Local_85.f_1 || Local_79.f_1 == Local_85.f_1)
			{
				iLocal_120 = 0;
			}
			if (iLocal_121)
			{
				Local_79.f_2 = (Local_79.f_2 + 12f);
			}
			if (Local_79.f_2 > Local_85.f_2 || Local_79.f_2 == Local_85.f_2)
			{
				iLocal_121 = 0;
			}
		}
		if (iLocal_116)
		{
			Local_76.f_0 = (Local_76.f_0 - 1f);
		}
		if (Local_76.f_0 < Local_82.f_0 || Local_76.f_0 == Local_82.f_0)
		{
			Local_76.f_0 = Local_82.f_0;
			iLocal_116 = 0;
		}
		if (iLocal_117)
		{
			Local_76.f_1 = (Local_76.f_1 - 0.5f);
		}
		if (Local_76.f_1 < Local_82.f_1 || Local_76.f_1 == Local_82.f_1)
		{
			Local_76.f_1 = Local_82.f_1;
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_76.f_2 = (Local_76.f_2 + 11f);
		}
		if (Local_76.f_2 > Local_82.f_2 || Local_76.f_2 == Local_82.f_2)
		{
			Local_76.f_2 = Local_82.f_2;
			iLocal_118 = 0;
		}
		if (func_98() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(Local_79);
		}
	}
	else
	{
		Local_82 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_116)
		{
			Local_76.f_0 = (Local_76.f_0 - 1f);
		}
		if (Local_76.f_0 < Local_82.f_0 || Local_76.f_0 == Local_82.f_0)
		{
			iLocal_116 = 0;
		}
		if (iLocal_117)
		{
			Local_76.f_1 = (Local_76.f_1 + 2f);
		}
		if (Local_76.f_1 > Local_82.f_1 || Local_76.f_1 == Local_82.f_1)
		{
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_76.f_2 = (Local_76.f_2 + 7f);
		}
		if (Local_76.f_2 > Local_82.f_2 || Local_76.f_2 == Local_82.f_2)
		{
			iLocal_118 = 0;
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
	}
	if (Global_20755)
	{
		if (((((iLocal_116 == 0 && iLocal_117 == 0) && iLocal_118 == 0) && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0)
		{
			if (func_98())
			{
			}
			else
			{
				Local_76 = { Local_82 };
				MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
				Local_79 = { Local_85 };
				MOBILE::SET_MOBILE_PHONE_POSITION(Local_79);
			}
			if (iLocal_101 == 0)
			{
				Global_23200 = 0;
				func_122(1, 1);
				iLocal_113 = 1;
				func_126(1);
				func_60();
				func_127();
				func_58(0);
				SYSTEM::SETTIMERA(0);
				iLocal_140 = 1;
				iLocal_141 = 1;
				func_147();
				func_168(iLocal_138, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_142), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!BitTest(Global_4542983, 2))
				{
					func_168(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_168(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
				func_170();
			}
		}
	}
	else if ((iLocal_116 == 0 && iLocal_117 == 0) && iLocal_118 == 0)
	{
		Local_76 = { Local_82 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
		Global_23200 = 0;
	}
}

void func_126(bool bParam0)
{
	if (func_177())
	{
		if (bParam0)
		{
			if (!GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE())
			{
				GRAPHICS::PHONEPHOTOEDITOR_TOGGLE(true);
				if (Global_4541708 > 0 && Global_4541708 < 99)
				{
					GRAPHICS::PHONEPHOTOEDITOR_SET_FRAME_TXD(sLocal_31[Global_4541708], false);
					MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(0.25f);
				}
			}
		}
		else if (GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE())
		{
			GRAPHICS::PHONEPHOTOEDITOR_TOGGLE(false);
		}
	}
}

void func_127()
{
	if (Global_4541707 > 0 && Global_4541707 < 99)
	{
		if (!Global_1938039)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER(sLocal_17[Global_4541707]);
		}
	}
}

void func_128()
{
	if (Global_20755)
	{
		iLocal_123 = 0;
		func_60();
		func_115(1, 1);
		func_122(1, 1);
		iLocal_113 = 1;
		Global_23203 = 1;
	}
}

void func_129()
{
	if (Global_4718592.f_176766 == 1 && func_130())
	{
		return;
	}
	if (iLocal_125 == 0)
	{
		if (BitTest(Global_8683, 28))
		{
			StringCopy(&cLocal_143, "CELL_296", 16);
			func_55();
		}
		else
		{
			StringCopy(&cLocal_143, "CELL_295", 16);
			func_29();
		}
		if (MISC::ARE_STRINGS_EQUAL(&cLocal_143, "DUMMYCOMPARISON"))
		{
			fLocal_96 = fLocal_97;
			fLocal_94 = fLocal_95;
			fLocal_97 = fLocal_96;
			fLocal_95 = fLocal_94;
		}
		iLocal_98 = 1;
	}
}

int func_130()
{
	if (((((((func_142() || func_141()) || func_140()) || func_139()) || func_138()) || func_136()) || func_134()) || func_131())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_131()
{
	return func_132(Global_4718592.f_126144);
}

int func_132(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_133(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_34045[iParam0];
	}
	return -1;
}

int func_134()
{
	return func_135(Global_4718592.f_126144);
}

int func_135(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_32038[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_136()
{
	return func_137(Global_4718592.f_126144);
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31332[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_138()
{
	return Global_2684312.f_24;
}

var func_139()
{
	return Global_2684312.f_21;
}

var func_140()
{
	return Global_2684312.f_19;
}

var func_141()
{
	return Global_2684312.f_18;
}

var func_142()
{
	return Global_2684312.f_17;
}

void func_143()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20802, true);
	}
}

void func_144()
{
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 0;
	iLocal_123 = 1;
}

void func_145()
{
	func_146();
}

void func_146()
{
	if (iLocal_149)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_149 = 0;
		}
	}
	if (iLocal_149 == 0)
	{
	}
}

void func_147()
{
	if (Global_20813.f_1 > 3)
	{
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_138, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_148()
{
	if (func_62(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[0 /*29*/])
			{
				Global_20813 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[1 /*29*/])
			{
				Global_20813 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[2 /*29*/])
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
		Global_20813 = func_13();
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

void func_149(int iParam0)
{
	if (func_151())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_164())
		{
			func_115(1, 1);
		}
		else
		{
			func_115(0, 0);
		}
	}
	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8684, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22166 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8683, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 30);
	}
	if (!func_150())
	{
		Global_20813.f_1 = 3;
	}
}

int func_150()
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_151()
{
	return BitTest(Global_1956030, 19);
}

void func_152()
{
	PAD::DISABLE_CONTROL_ACTION(0, 0, true);
	PAD::DISABLE_CONTROL_ACTION(0, 56, true);
	if (iLocal_148 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_20786);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_20783);
		PAD::DISABLE_CONTROL_ACTION(0, 278, true);
		PAD::DISABLE_CONTROL_ACTION(0, 279, true);
		PAD::DISABLE_CONTROL_ACTION(0, 280, true);
		PAD::DISABLE_CONTROL_ACTION(0, 281, true);
		PAD::DISABLE_CONTROL_ACTION(0, 282, true);
		PAD::DISABLE_CONTROL_ACTION(0, 282, true);
		PAD::DISABLE_CONTROL_ACTION(0, 284, true);
		PAD::DISABLE_CONTROL_ACTION(0, 285, true);
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 114, true);
		PAD::DISABLE_CONTROL_ACTION(0, 71, true);
		PAD::DISABLE_CONTROL_ACTION(0, 72, true);
		PAD::DISABLE_CONTROL_ACTION(0, 74, true);
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
		PAD::DISABLE_CONTROL_ACTION(0, 76, true);
		PAD::DISABLE_CONTROL_ACTION(0, 73, true);
		PAD::DISABLE_CONTROL_ACTION(0, 77, true);
		PAD::DISABLE_CONTROL_ACTION(0, 78, true);
		PAD::DISABLE_CONTROL_ACTION(0, 286, true);
		PAD::DISABLE_CONTROL_ACTION(0, 287, true);
		PAD::DISABLE_CONTROL_ACTION(0, 79, true);
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		PAD::DISABLE_CONTROL_ACTION(0, 81, true);
		PAD::DISABLE_CONTROL_ACTION(0, 82, true);
		PAD::DISABLE_CONTROL_ACTION(0, 86, true);
		PAD::DISABLE_CONTROL_ACTION(0, 59, true);
		PAD::DISABLE_CONTROL_ACTION(0, 60, true);
		PAD::DISABLE_CONTROL_ACTION(0, 61, true);
		PAD::DISABLE_CONTROL_ACTION(0, 62, true);
		PAD::DISABLE_CONTROL_ACTION(0, 63, true);
		PAD::DISABLE_CONTROL_ACTION(0, 64, true);
		PAD::DISABLE_CONTROL_ACTION(0, 87, true);
		PAD::DISABLE_CONTROL_ACTION(0, 88, true);
		PAD::DISABLE_CONTROL_ACTION(0, 89, true);
		PAD::DISABLE_CONTROL_ACTION(0, 90, true);
		PAD::DISABLE_CONTROL_ACTION(0, 107, true);
		PAD::DISABLE_CONTROL_ACTION(0, 108, true);
		PAD::DISABLE_CONTROL_ACTION(0, 109, true);
		PAD::DISABLE_CONTROL_ACTION(0, 110, true);
		PAD::DISABLE_CONTROL_ACTION(0, 111, true);
		PAD::DISABLE_CONTROL_ACTION(0, 112, true);
		PAD::DISABLE_CONTROL_ACTION(0, 113, true);
		PAD::DISABLE_CONTROL_ACTION(0, 114, true);
		PAD::DISABLE_CONTROL_ACTION(0, 91, true);
		PAD::DISABLE_CONTROL_ACTION(0, 92, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
		PAD::DISABLE_CONTROL_ACTION(0, 102, true);
		PAD::DISABLE_CONTROL_ACTION(0, 136, true);
		PAD::DISABLE_CONTROL_ACTION(0, 137, true);
		PAD::DISABLE_CONTROL_ACTION(0, 138, true);
		PAD::DISABLE_CONTROL_ACTION(0, 139, true);
		PAD::DISABLE_CONTROL_ACTION(0, 102, true);
	}
}

int func_153()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
			{
				return 1;
			}
			else if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_154()
{
	if (Global_1575052 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_161())
	{
		return 1;
	}
	if (Global_2698534)
	{
		return 1;
	}
	if (func_160())
	{
		return 1;
	}
	if (func_159(159))
	{
		if (!func_158())
		{
			return 1;
		}
	}
	if (func_159(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_155() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_155()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_155()
{
	switch (func_157())
	{
		case 0:
			return func_156();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_156()
{
	switch (Global_2698640)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_157()
{
	return Global_32828;
}

bool func_158()
{
	return Global_2684312.f_698;
}

int func_159(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_160()
{
	return Global_2695951;
}

bool func_161()
{
	return Global_2684312.f_693;
}

void func_162()
{
	if (iLocal_154 == 1)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	}
	else
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

void func_163(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_164()
{
	return BitTest(Global_1956030, 5);
}

void func_165()
{
	if (func_166())
	{
		GRAPHICS::CLEAR_STATUS_OF_SORTED_LIST_OPERATION();
		if (GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(0))
		{
			iLocal_101 = 1;
			iLocal_109 = 0;
		}
		else
		{
			Global_23203 = 1;
			Global_20813.f_1 = 3;
			HUD::BUSYSPINNER_OFF();
		}
	}
	else
	{
		iLocal_107 = 0;
		iLocal_108 = 0;
		if (iLocal_102 == 1)
		{
			if (iLocal_125 == 0)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_138))
				{
					if (func_177())
					{
						if (Global_4541708 == 0)
						{
							if (!BitTest(Global_4542983, 2))
							{
								func_168(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_168(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!BitTest(Global_4542983, 2))
						{
							func_168(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_168(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_138))
			{
				func_168(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_168(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
			}
			iLocal_102 = 0;
		}
		iLocal_109 = 0;
		HUD::BUSYSPINNER_OFF();
	}
}

int func_166()
{
	if (Global_4718592.f_176766 == 1)
	{
		if (Global_79248)
		{
			return 0;
		}
	}
	if (Global_4718592.f_176767 == 1)
	{
		if (Global_79248)
		{
			return 0;
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION())
	{
		if (BitTest(Global_8684, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_167(int iParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_168(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_169()
{
	if (Global_79248)
	{
		Global_20813 = 3;
	}
	else
	{
		Global_20813 = func_13();
	}
	if (Global_20813 > 3)
	{
		Global_20813 = 3;
	}
	return Global_114372.f_14054[Global_20813 /*20*/].f_7;
}

void func_170()
{
	if (Global_20813.f_1 > 3)
	{
		Global_20813.f_1 = 8;
	}
	Global_23202 = 0;
	iLocal_125 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (Global_20755)
	{
		while (SYSTEM::TIMERA() < iLocal_135)
		{
			SYSTEM::WAIT(0);
			func_147();
			func_94();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
		}
		func_167(iLocal_138, "OPEN_SHUTTER");
		func_162();
		func_129();
		iLocal_127 = 1;
		SYSTEM::SETTIMERB(0);
	}
	else
	{
		func_122(1, 1);
		func_126(1);
		func_60();
		func_127();
		func_58(0);
		iLocal_113 = 1;
	}
}

void func_171(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8683, 15);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 15);
	}
}

bool func_172(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575052;
}

int func_173(int iParam0, bool bParam1)
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

void func_174()
{
}

int func_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_176()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_155);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_156);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_157);
		}
		else
		{
			MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_155);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_156);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_157);
		}
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(fLocal_158);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(fLocal_159);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(fLocal_160);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(fLocal_161);
	func_57();
}

int func_177()
{
	if (iLocal_54 == 0)
	{
		iLocal_54 = 1;
	}
	return 1;
}

