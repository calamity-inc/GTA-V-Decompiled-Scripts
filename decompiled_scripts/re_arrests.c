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
	struct<3> Local_42 = { 0, 0, 0 } ;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	bool bLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 16;
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
	var uLocal_102 = 0;
	var uLocal_103 = 0;
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
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	bool bLocal_246 = 0;
	bool bLocal_247 = 0;
	struct<3> Local_248 = { 0, 0, 0 } ;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	char* sLocal_254 = NULL;
	char* sLocal_255 = NULL;
	char* sLocal_256 = NULL;
	char* sLocal_257 = NULL;
	char* sLocal_258 = NULL;
	bool bLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	char* sLocal_270 = NULL;
	char* sLocal_271 = NULL;
	char* sLocal_272 = NULL;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	struct<3> Local_277 = { 0, 0, 0 } ;
	struct<3> Local_280 = { 0, 0, 0 } ;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	bool bLocal_286 = 0;
	bool bLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	bool bLocal_292 = 0;
	struct<3> Local_293 = { 0, 0, 0 } ;
	bool bLocal_296 = 0;
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
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	iLocal_242 = 8000;
	iLocal_245 = 8;
	iLocal_247 = 1;
	sLocal_255 = "S_M_Y_RANGER_01_WHITE_FULL_01";
	sLocal_256 = "RANDOM@ARRESTS";
	sLocal_257 = "RANDOM@ARRESTS@BUSTED";
	iLocal_261 = 1;
	Local_63 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		bLocal_74 = true;
		func_208();
		func_178();
	}
	if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, Local_63) < 10f)
	{
		iLocal_51 = 1;
	}
	else
	{
		iLocal_51 = 2;
	}
	if (func_135(Local_63, 15, iLocal_51, 0, 0))
	{
		func_130(15);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (iLocal_46)
		{
			case 0:
				if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_129()) && !func_116())
				{
					if (func_113())
					{
						iLocal_46 = 1;
					}
				}
				else
				{
					func_178();
				}
				break;
			
			case 1:
				if (func_109())
				{
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, false, true, true);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					func_98(1);
					iLocal_46 = 2;
				}
				else if (!func_97(200f))
				{
					func_178();
				}
				break;
			
			case 2:
				if (func_97(1128792064))
				{
					func_1();
				}
				else
				{
					func_178();
				}
				break;
		}
	}
}

void func_1()
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	float fVar6;
	
	MISC::SET_BIT(&uVar0, 3);
	MISC::SET_BIT(&uVar0, 4);
	iVar5 = 0;
	func_96();
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		PED::SET_PED_RESET_FLAG(iLocal_53, 129, true);
	}
	if (func_95(iLocal_53))
	{
		if (PED::IS_PED_BEING_STUNNED(iLocal_53, 0))
		{
			bLocal_296 = true;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52) && (iLocal_47 != 2 && iLocal_47 != 1))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			switch (iLocal_50)
			{
				case 0:
					GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					if (SYSTEM::TIMERA() > 10)
					{
						if (!bLocal_72)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, joaat("script_task_go_to_entity")) == 7)
							{
								TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 3f, 2f, 0);
							}
						}
					}
					if (SYSTEM::TIMERA() > 4000)
					{
						if (!bLocal_72)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_smart_flee_ped")) == 7)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_play_anim")) == 1)
								{
									TASK::STOP_ANIM_PLAYBACK(iLocal_53, 2, true);
								}
								TASK::TASK_SMART_FLEE_PED(iLocal_53, iLocal_52, 150f, -1, false, false);
							}
						}
					}
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), ENTITY::GET_ENTITY_COORDS(iLocal_53, true), true);
					if (SYSTEM::TIMERA() > 8000 || fVar4 < 1.5f)
					{
						iVar5 = func_91();
						if (iVar5 == 1)
						{
							TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 0.01f, 2f, 0);
						}
					}
					if (SYSTEM::TIMERA() > 30000 && fVar4 < 10f)
					{
						iVar5 = 1;
					}
					if (SYSTEM::TIMERA() > 2000)
					{
						if (iVar5 || iLocal_276 == 1)
						{
							if (!func_90())
							{
								if (func_75(&uLocal_76, "REARRAU", "REARR_PCUFF", 4, iLocal_252, 0, 0))
								{
								}
								bLocal_292 = (PED::IS_PED_RAGDOLL(iLocal_53) || TASK::IS_PED_GETTING_UP(iLocal_53));
								if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_52, joaat("weapon_pistol"), false))
								{
									WEAPON::GIVE_WEAPON_TO_PED(iLocal_52, joaat("weapon_pistol"), -1, false, true);
								}
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_52, joaat("weapon_pistol"), true);
								Local_66 = { ENTITY::GET_ENTITY_COORDS(iLocal_53, true) };
								TASK::CLEAR_PED_TASKS(iLocal_52);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
								if (!bLocal_292 && fVar4 > 2f)
								{
									TASK::TASK_SHOOT_AT_COORD(0, Local_66.f_0, Local_66.f_1, (Local_66.f_2 + 4f), 1000, 1566631136);
								}
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_53, -1, 2048, 2);
								TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, iLocal_53, iLocal_53, 1f, false, 3f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
								TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, 5000, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_71);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_52);
								PED::SET_PED_KEEP_TASK(iLocal_52, true);
								SYSTEM::SETTIMERA(0);
								iLocal_244 = MISC::GET_GAME_TIMER();
								if (bLocal_292)
								{
									TASK::CLEAR_PED_TASKS(iLocal_53);
									WEAPON::SET_PED_DROPS_WEAPON(iLocal_53);
									iLocal_50 = 4;
								}
								else
								{
									iLocal_50 = 2;
								}
							}
							else if (!iLocal_276)
							{
								TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 0.01f, 2f, 0);
								iLocal_276 = 1;
							}
						}
						else
						{
							func_74();
						}
					}
					else
					{
						GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!PED::IS_PED_INJURED(iLocal_52) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_52))
							{
								TASK::CLEAR_PED_TASKS(iLocal_52);
								iLocal_50 = 1;
								TASK::TASK_STAND_STILL(iLocal_52, 500);
							}
						}
					}
					break;
				
				case 1:
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, joaat("script_task_stand_still")) == 7)
					{
						TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 3f, 2f, 0);
						iLocal_50 = 0;
					}
					break;
				
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_244) > 1000)
					{
						Var1 = { 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iLocal_53) * 3f) };
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_53, Var1, 2f, -1, 1f, 1024, 40000f);
						iLocal_50 = 3;
					}
					break;
				
				case 3:
					if ((MISC::GET_GAME_TIMER() - iLocal_244) > 4500)
					{
						iLocal_50 = 4;
					}
					break;
				
				case 4:
					bLocal_72 = true;
					TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
					TASK::TASK_PLAY_ANIM(0, sLocal_256, "idle_2_hands_up", 2f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_256, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_71);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_53, true);
					iLocal_50 = 5;
					break;
				
				case 5:
					if (iLocal_48 == 3)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, joaat("script_task_perform_sequence")) == 7)
						{
							TASK::CLEAR_PED_TASKS(iLocal_52);
							if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_52, joaat("weapon_pistol"), false))
							{
								WEAPON::GIVE_WEAPON_TO_PED(iLocal_52, joaat("weapon_pistol"), -1, false, true);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_52, joaat("weapon_pistol"), true);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, -1, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_71);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
							PED::SET_PED_KEEP_TASK(iLocal_52, true);
							iLocal_50 = 6;
						}
					}
					break;
				
				case 6:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false) && !PED::IS_PED_INJURED(iLocal_54))
					{
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(iLocal_55, true);
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, joaat("script_task_play_anim")) == 7)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, joaat("script_task_vehicle_mission")) == 7)
							{
								if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_53, iLocal_55, 2, false, false))
								{
									if (!PED::IS_PED_INJURED(iLocal_53))
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_53, iLocal_55))
										{
											if (!PED::IS_PED_IN_COMBAT(iLocal_53, 0))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_enter_vehicle")) == 7)
												{
													TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
													TASK::TASK_PLAY_ANIM(0, sLocal_256, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0f, false, false, false);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_71);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_70, iLocal_69);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_69, iLocal_70);
												}
											}
										}
									}
									if (!PED::IS_PED_INJURED(iLocal_52))
									{
										PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_52);
										if (!PED::IS_PED_IN_COMBAT(iLocal_52, 0))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
											{
												if (!func_90())
												{
													if (func_75(&uLocal_76, "REARRAU", "REARR_INCAR", 4, iLocal_252, 0, 0))
													{
														if (func_73(iLocal_52, iLocal_55) == 2)
														{
															if (PED::IS_PED_FACING_PED(iLocal_54, iLocal_53, 180f))
															{
																Local_293 = { 2.978f, -0.75f, 1f };
															}
															else
															{
																Local_293 = { 2.978f, 0.75f, 1f };
															}
														}
														else if (PED::IS_PED_FACING_PED(iLocal_54, iLocal_53, 180f))
														{
															Local_293 = { -2.978f, -0.75f, 1f };
														}
														else
														{
															Local_293 = { -2.978f, 0.75f, 1f };
														}
														TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
														TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_55, Local_293), iLocal_53, 0.75f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 60000);
														TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, -1, false);
														TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
														TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_71);
														TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
														PED::SET_PED_KEEP_TASK(iLocal_52, true);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_55, false);
														iLocal_242 = 8000;
														SYSTEM::SETTIMERB(0);
														iLocal_275 = MISC::GET_GAME_TIMER();
														iLocal_50 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_72();
								}
							}
						}
					}
					break;
				
				case 7:
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 35f, 35f, 35f, false, true, 0))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_275) > 8000)
							{
								if (!func_90())
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
									func_75(&uLocal_76, "REARRAU", "REARR_PLEAVE", 4, iLocal_252, 0, 0);
									iLocal_242 = 8000;
									iLocal_275 = MISC::GET_GAME_TIMER();
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
						{
							if (iLocal_62)
							{
								if (func_73(iLocal_52, iLocal_55) == 2)
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_53, iLocal_55, -1, 2, 1f, 1, 0, 0);
								}
								else
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_53, iLocal_55, -1, 1, 1f, 1, 0, 0);
								}
								iLocal_50 = 8;
							}
							else if (iLocal_61)
							{
								fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), ENTITY::GET_ENTITY_COORDS(iLocal_55, true), true);
								if (fVar6 < 4f && iLocal_283 == 0)
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_53, iLocal_55, 60000, 0.5f, Local_293.f_0, Local_293.f_1, 1f, 1);
									iLocal_283 = 1;
								}
								else if (fVar6 < 3f)
								{
									TASK::CLEAR_PED_TASKS(iLocal_53);
									iLocal_62 = 1;
								}
							}
							else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_256, "kneeling_arrest_get_up", 3))
							{
								if (func_73(iLocal_52, iLocal_55) == 2)
								{
									Local_293 = { 1.578f, -0.5f, 1f };
								}
								else
								{
									Local_293 = { -1.578f, -0.5f, 1f };
								}
								TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_53, iLocal_55, 60000, 0.5f, Local_293.f_0, Local_293.f_1, 1f, 1);
								if (bLocal_296)
								{
									PED::SET_PED_MOVEMENT_CLIPSET(iLocal_53, "MOVE_M@BAIL_BOND_TAZERED", 0.25f);
								}
								else
								{
									PED::SET_PED_MOVEMENT_CLIPSET(iLocal_53, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
								}
								iLocal_61 = 1;
							}
						}
					}
					break;
				
				case 8:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_54))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_53, iLocal_55))
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_56))
								{
									HUD::REMOVE_BLIP(&iLocal_56);
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_57))
								{
									HUD::REMOVE_BLIP(&iLocal_57);
								}
								if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_52, iLocal_55))
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_54, iLocal_55, 10f, 786603);
									PED::SET_PED_KEEP_TASK(iLocal_54, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, false);
									func_178();
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, joaat("script_task_enter_vehicle")) == 7)
								{
									TASK::CLEAR_PED_TASKS(iLocal_52);
									TASK::TASK_ENTER_VEHICLE(iLocal_52, iLocal_55, 20000, 0, 1f, 1, 0, 0);
									PED::SET_PED_KEEP_TASK(iLocal_52, true);
								}
							}
						}
					}
					break;
				}
			}
	}
	func_58();
	if (PED::IS_PED_INJURED(iLocal_53))
	{
	}
	if (PED::IS_PED_INJURED(iLocal_52))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (iLocal_47 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_47 == 1 || iLocal_47 == 3)
				{
					if (!func_90())
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 20f)
						{
							func_75(&uLocal_76, "REARRAU", sLocal_272, 4, iLocal_252, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_256, "kneeling_arrest_idle", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
					TASK::TASK_PLAY_ANIM(0, sLocal_256, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_71);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
				}
				SYSTEM::WAIT(0);
				if (iLocal_47 == 0)
				{
					iLocal_47 = 2;
				}
				func_178();
			}
		}
	}
	if (PED::IS_PED_INJURED(iLocal_53))
	{
		if (!bLocal_59)
		{
			if (func_11())
			{
				func_3(0);
			}
		}
	}
	if (iLocal_50 == 5 || iLocal_50 == 6)
	{
		if (!bLocal_59)
		{
			if (iLocal_47 == 3)
			{
				if (func_11())
				{
					func_3(0);
				}
			}
			else
			{
				func_3(1);
			}
		}
	}
	func_2();
}

void func_2()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 40f, 40f, 20f };
	if (MISC::GET_GAME_TIMER() > iLocal_253 + 1000)
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), Var1, false, true, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), Var1, false, true, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			iLocal_252 = 1;
		}
		else
		{
			iLocal_252 = 0;
		}
		iLocal_253 = MISC::GET_GAME_TIMER();
	}
}

void func_3(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (bParam0)
	{
		sVar0 = "radio_enter";
		sVar1 = "radio_chatter";
		sVar2 = "radio_exit";
	}
	else
	{
		sVar0 = "generic_radio_enter";
		sVar1 = "generic_radio_chatter";
		sVar2 = "generic_radio_exit";
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		switch (iLocal_48)
		{
			case 0:
				if ((iLocal_241 == 3 || iLocal_50 == 5) || iLocal_50 == 6)
				{
					if (!func_90())
					{
						TASK::CLEAR_PED_TASKS(iLocal_52);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
						TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_53, false), 10000, 0, 2);
						TASK::TASK_PLAY_ANIM(0, sLocal_256, sVar0, 8f, -4f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, sLocal_256, sVar1, 16f, -8f, -1, 1, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_71);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
						iLocal_48 = 1;
					}
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52, sLocal_256, sVar1, 3))
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						if (!func_90())
						{
							if (func_75(&uLocal_76, "REARRAU", "REARR_PRAD1", 4, iLocal_252, 0, 0))
							{
								iLocal_48 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!func_90())
						{
							if (func_75(&uLocal_76, "REARRAU", "REARR_PRAD2", 4, iLocal_252, 0, 0))
							{
								iLocal_48 = 2;
							}
						}
					}
				}
				break;
			
			case 2:
				if (!func_90())
				{
					if (func_10())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
						{
							VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_55, false);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_55, true);
						}
						TASK::CLEAR_PED_TASKS(iLocal_52);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
						TASK::TASK_PLAY_ANIM(0, sLocal_256, sVar2, 8f, -1.5f, -1, 0, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_71);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_52, false, false);
						func_8();
						iLocal_48 = 3;
					}
				}
				break;
			
			case 3:
				if (!bLocal_72)
				{
					func_7();
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_53) || !ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53))
					{
						if (!func_90())
						{
							func_75(&uLocal_76, "REARRAU", "REARR_PWTF", 4, iLocal_252, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 35f, 35f, 35f, false, true, 0))
				{
					PED::SET_IK_TARGET(iLocal_52, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
					PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, iLocal_52, 31086, 0f, 0f, 0f, 0, -1, -1);
					if (SYSTEM::TIMERB() > iLocal_242 || iLocal_260)
					{
						if (iLocal_47 == 3 || iLocal_47 == 0)
						{
							if (!PED::IS_PED_INJURED(iLocal_53))
							{
								if (iLocal_242 == 8000 || iLocal_260)
								{
									if (bLocal_259)
									{
										func_6();
									}
									else
									{
										func_4();
									}
								}
								else if (!func_90())
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 500, 2048, 2);
									func_75(&uLocal_76, "REARRAU", "REARR_PLEAVE", 4, iLocal_252, 0, 0);
									iLocal_242 = 8000;
								}
							}
							else if (iLocal_242 == 8000)
							{
								if (!func_90())
								{
									func_75(&uLocal_76, "REARRAU", "REARR_PRA2", 4, iLocal_252, 0, 0);
									iLocal_242 = 20000;
								}
							}
							else if (!func_90())
							{
								func_75(&uLocal_76, "REARRAU", "REARR_PRA2", 4, iLocal_252, 0, 0);
								iLocal_242 = 8000;
							}
							SYSTEM::SETTIMERB(0);
						}
						else
						{
							if (PED::IS_PED_INJURED(iLocal_53))
							{
								if (!func_90())
								{
									func_75(&uLocal_76, "REARRAU", "REARR_PRA2", 4, iLocal_252, 0, 0);
									iLocal_242 = 30000;
								}
							}
							else if (!func_90())
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
								func_75(&uLocal_76, "REARRAU", "REARR_PLEAVE", 4, iLocal_252, 0, 0);
								iLocal_242 = MISC::GET_RANDOM_INT_IN_RANGE(8, 22);
								iLocal_242 *= 30000;
							}
							SYSTEM::SETTIMERB(0);
						}
					}
				}
				if (iLocal_50 != 8)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_53))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_53, iLocal_55, false))
							{
								func_72();
							}
						}
					}
					else
					{
						func_72();
					}
				}
				break;
			}
	}
}

void func_4()
{
	if (!iLocal_260)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				sLocal_258 = "idle_a";
				break;
			
			case 1:
				sLocal_258 = "idle_b";
				break;
			
			case 2:
				sLocal_258 = "idle_c";
				break;
		}
		TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
		TASK::TASK_PLAY_ANIM(0, sLocal_257, "enter", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_257, sLocal_258, 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_257, "exit", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_256, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_71);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
		iLocal_260 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_257, "enter", 3))
	{
		if (func_5())
		{
			func_75(&uLocal_76, "REARRAU", "REARR_PRAND", 4, iLocal_252, 0, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_257, "exit", 3))
	{
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_257, sLocal_258, 3))
	{
		func_75(&uLocal_76, "REARRAU", sLocal_270, 4, iLocal_252, 0, 0);
	}
	else
	{
		func_8();
	}
}

int func_5()
{
	if (MISC::GET_GAME_TIMER() > iLocal_262 + 6000)
	{
		iLocal_262 = MISC::GET_GAME_TIMER();
		return 1;
	}
	return 0;
}

void func_6()
{
	if (!iLocal_260)
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
		TASK::TASK_PLAY_ANIM(0, sLocal_256, "radio_enter", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_256, "radio_chatter", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_256, "radio_exit", 8f, -1.5f, -1, 0, 0f, false, false, false);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, -1, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_71);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
		iLocal_260 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52, sLocal_256, "radio_chatter", 3))
	{
		if (func_5())
		{
			func_75(&uLocal_76, "REARRAU", "REARR_PRAD3", 4, iLocal_252, 0, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52, sLocal_256, "radio_exit", 3))
	{
		iLocal_261 = 0;
		func_8();
	}
}

void func_7()
{
	switch (iLocal_49)
	{
		case 0:
			if (!bLocal_72)
			{
				if (iLocal_47 == 3)
				{
					iLocal_49 = 1;
				}
				else if (iLocal_47 == 0)
				{
					iLocal_49 = 1;
				}
				ENTITY::IS_ENTITY_DEAD(iLocal_52, false);
				ENTITY::IS_ENTITY_DEAD(iLocal_53, false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::DOES_ENTITY_EXIST(iLocal_53))
				{
					TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_52, iLocal_53, -1, 3f, 0f, 0f, 1f, 0);
				}
				SYSTEM::SETTIMERB(0);
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::REMOVE_BLIP(&iLocal_56);
			}
			iLocal_49 = 2;
			iLocal_242 = 8000;
			iLocal_289 = MISC::GET_GAME_TIMER();
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_289) > 20000)
				{
					if (!PED::IS_PED_INJURED(iLocal_54))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, joaat("script_task_vehicle_mission")) == 7)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_52, iLocal_55, -1, 0, 1f, 1, 0, 0);
							iLocal_49 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_54))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_52, iLocal_55))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_54, iLocal_55, 10f, 786603);
						PED::SET_PED_KEEP_TASK(iLocal_54, true);
						func_178();
					}
				}
			}
			break;
	}
}

void func_8()
{
	bLocal_259 = func_9();
	bLocal_259 = iLocal_261;
	iLocal_242 = 20000;
	iLocal_260 = 0;
}

int func_9()
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	int iVar12;
	
	iVar12 = joaat("pranger");
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar12);
	if (STREAMING::HAS_MODEL_LOADED(iVar12))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 1, &Var0, 1, 3f, 0f))
		{
			if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&Var0, &Var6, &uVar9, 0f, 180f, 50f, 1, 1, 1))
			{
				iLocal_55 = VEHICLE::CREATE_VEHICLE(iVar12, Var6, 0f, true, true, false);
				iLocal_54 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_55, 6, joaat("s_m_y_ranger_01"), -1, true, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_54, 294, true);
				if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_54, joaat("weapon_pistol"), false))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_54, joaat("weapon_pistol"), -1, false, true);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_54, joaat("weapon_pistol"), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_54, iLocal_69);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_55, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_55, 5f);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_55, true);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_55, true);
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_55, true) };
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Var0 };
				ENTITY::SET_ENTITY_HEADING(iLocal_55, MISC::GET_HEADING_FROM_VECTOR_2D(Var3.f_0, Var3.f_1));
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 1, &Var0, 1, 3f, 0f);
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, 2528.563f, 2639.115f, 36.9446f, true) < 75f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(2538.71f, 2592.007f, 36.9446f, Var0, true) < 16f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_54, iLocal_55, Var0, 4, 7f, 786471, 5f, -1f, true);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_55, 4f);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_55, true);
				iLocal_75 = 1;
				VEHICLE::SET_RANDOM_TRAINS(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_11()
{
	if (iLocal_47 != 3)
	{
		iLocal_241 = 3;
	}
	switch (iLocal_241)
	{
		case 0:
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, joaat("script_task_perform_sequence")) == 7 || MISC::GET_GAME_TIMER() > iLocal_244 + 15000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 25f, 25f, 25f, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						TASK::CLEAR_PED_TASKS(iLocal_52);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
						{
							TASK::TASK_GO_TO_ENTITY(0, iLocal_53, -1, 3.5f, 2f, 2f, 0);
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_71);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
						iLocal_241 = 1;
					}
				}
				else
				{
					iLocal_241 = 3;
				}
			}
			break;
		
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, joaat("script_task_perform_sequence")) == 1)
			{
				if (TASK::GET_SEQUENCE_PROGRESS(iLocal_52) > 0)
				{
					if (!func_90())
					{
						if (iLocal_243 < 2)
						{
							func_75(&uLocal_76, "REARRAU", "REARR_PTHANK", 4, iLocal_252, 0, 0);
							if (HUD::DOES_BLIP_EXIST(iLocal_56))
							{
								HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, true);
							}
						}
						else
						{
							func_75(&uLocal_76, "REARRAU", "REARR_PHELP", 4, iLocal_252, 0, 0);
						}
						iLocal_241 = 2;
					}
				}
			}
			else if (!func_90())
			{
				if (iLocal_243 < 2)
				{
					func_75(&uLocal_76, "REARRAU", "REARR_PTHANK", 4, iLocal_252, 0, 0);
					if (HUD::DOES_BLIP_EXIST(iLocal_56))
					{
						HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, true);
					}
				}
				else
				{
					func_75(&uLocal_76, "REARRAU", "REARR_PHELP", 4, iLocal_252, 0, 0);
				}
				iLocal_241 = 2;
			}
			break;
		
		case 2:
			if (!func_90())
			{
				iLocal_241 = 3;
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 100);
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_12()
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true);
	bVar1 = func_57();
	if (bVar1)
	{
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (!bVar0)
		{
			if (!bVar1)
			{
				if (iLocal_47 == 2 || bLocal_72 == 1)
				{
					switch (iLocal_245)
					{
						case 8:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							HUD::SET_BLIP_AS_FRIENDLY(iLocal_57, true);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_256, "kneeling_arrest_idle", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
								TASK::TASK_PLAY_ANIM(0, sLocal_256, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_71);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
								iLocal_245 = 9;
							}
							else
							{
								iLocal_245 = 3;
							}
							break;
						
						case 9:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_perform_sequence")) == 7)
							{
								iLocal_245 = 0;
							}
							break;
						
						case 0:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 75f, 75f, 75f, false, true, 0))
							{
								AUDIO::STOP_PED_SPEAKING(iLocal_53, true);
								iLocal_245 = 3;
							}
							break;
						
						case 1:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 4f, 4f, 3f, false, true, 0))
							{
								iLocal_245 = 2;
							}
							else
							{
								TASK::CLEAR_PED_TASKS(iLocal_53);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
								TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 1000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 2f, -1, 3f, 0, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_71);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
								iLocal_245 = 2;
							}
							break;
						
						case 2:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 4f, 4f, 3f, false, true, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_perform_sequence")) == 7 || func_75(&uLocal_76, "REARRAU", sLocal_269, 4, iLocal_252, 0, 0))
								{
									iLocal_245 = 6;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_perform_sequence")) == 7)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
								TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 1000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 2f, -1, 3f, 0, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_71);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
							}
							break;
						
						case 3:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 5f, 5f, 3f, false, true, 0))
							{
								iLocal_245 = 4;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 75f, 75f, 75f, false, true, 0))
							{
								if (!func_90())
								{
									TASK::CLEAR_PED_TASKS(iLocal_53);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
									TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 8f, 2f, 2f, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_71);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
									iLocal_245 = 4;
								}
							}
							else
							{
								iLocal_245 = 6;
							}
							break;
						
						case 4:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 9f, 9f, 9f, false, true, 0))
							{
								iLocal_290 = MISC::GET_GAME_TIMER();
								iLocal_245 = 7;
							}
							break;
						
						case 7:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!PED::IS_PED_HEADTRACKING_PED(iLocal_53, PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), -1, 2064, 2);
							}
							if (!PED::IS_PED_FACING_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 30f))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), -1);
							}
							if ((MISC::GET_GAME_TIMER() - iLocal_290) > 2000)
							{
								iLocal_245 = 5;
							}
							break;
						
						case 5:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_256, "Thanks_Male_05", 3) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_perform_sequence")) == 7)
							{
								if (!func_90())
								{
									if (iLocal_243 < 2)
									{
										func_75(&uLocal_76, "REARRAU", sLocal_264, 4, iLocal_252, 0, 0);
										TASK::TASK_PLAY_ANIM(iLocal_53, sLocal_256, "Thanks_Male_05", 16f, -16f, -1, 16, 0f, false, false, false);
									}
									else
									{
										func_75(&uLocal_76, "REARRAU", sLocal_268, 4, iLocal_252, 0, 0);
									}
									func_15(func_51(), 1, 250, 0, 0);
									TASK::TASK_CLEAR_LOOK_AT(iLocal_53);
									iLocal_245 = 6;
								}
							}
							break;
						
						case 6:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!func_90())
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
								func_178();
							}
							break;
						}
				}
			}
			else
			{
				if (!func_90())
				{
					func_75(&uLocal_76, "REARRAU", sLocal_271, 4, iLocal_252, 0, 0);
				}
				TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				func_178();
			}
		}
		else
		{
			func_13();
			TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			if (bVar0 == 1)
			{
				iLocal_47 = 1;
			}
			if (!func_90())
			{
				func_75(&uLocal_76, "REARRAU", sLocal_268, 4, iLocal_252, 0, 0);
			}
			func_178();
		}
	}
}

void func_13()
{
	Global_21152 = 0;
	func_14();
}

void func_14()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23297 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_50(iParam0) == 3)
	{
		return;
	}
	if (func_50(iParam0) == 4)
	{
		return;
	}
	func_16(func_50(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, true);
	}
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_49();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_48(99, 1);
					func_47(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_47(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_47(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_31(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_28(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_47(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_28(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_47(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_47(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_47(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_47(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_47(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_28(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_47(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_47(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_27(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_48(95, iParam3);
					break;
				
				case 1:
					func_48(97, iParam3);
					break;
				
				case 2:
					func_48(96, iParam3);
					break;
			}
			func_48(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_19(bVar1);
	}
	iVar5 = (Global_61340[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_61340[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_61340[iVar2] = 2147483647;
				}
				else
				{
					Global_61340[iVar2] = (Global_61340[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_47(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_47(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_47(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_61340[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_61340[iVar2];
			Global_61340[iVar2] = (Global_61340[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113969.f_20567.f_233[iVar2 /*69*/]++;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_18(iParam0);
	if (Global_44042 == 15)
	{
		func_17(0);
	}
	return 1;
}

void func_17(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61348[iVar0 /*3*/][0] = Global_113969.f_20567[iVar0];
		Global_61348.f_31[iVar0 /*3*/][0] = Global_113969.f_20567.f_11[iVar0];
		Global_61348.f_62[iVar0 /*3*/][0] = Global_113969.f_20567.f_22[iVar0];
		Global_61348.f_93[iVar0 /*3*/][0] = Global_113969.f_20567.f_33[iVar0];
		Global_61348.f_124[iVar0 /*3*/][0] = Global_113969.f_20567.f_44[iVar0];
		Global_61348.f_155[iVar0 /*3*/][0] = Global_113969.f_20567.f_55[iVar0];
		Global_61348.f_186[iVar0 /*3*/][0] = Global_113969.f_20567.f_66[iVar0];
		Global_61348.f_217[iVar0 /*3*/][0] = Global_113969.f_20567.f_77[iVar0];
		Global_61348.f_248[iVar0 /*3*/][0] = Global_113969.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61348[iVar0 /*3*/][1] = Global_113969.f_20567[iVar0];
			Global_61348.f_31[iVar0 /*3*/][1] = Global_113969.f_20567.f_11[iVar0];
			Global_61348.f_62[iVar0 /*3*/][1] = Global_113969.f_20567.f_22[iVar0];
			Global_61348.f_93[iVar0 /*3*/][1] = Global_113969.f_20567.f_33[iVar0];
			Global_61348.f_124[iVar0 /*3*/][1] = Global_113969.f_20567.f_44[iVar0];
			Global_61348.f_155[iVar0 /*3*/][1] = Global_113969.f_20567.f_55[iVar0];
			Global_61348.f_186[iVar0 /*3*/][1] = Global_113969.f_20567.f_66[iVar0];
			Global_61348.f_217[iVar0 /*3*/][1] = Global_113969.f_20567.f_77[iVar0];
			Global_61348.f_248[iVar0 /*3*/][1] = Global_113969.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_61340[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_19(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_26(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_26(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_26(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_26(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_22(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_22(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_22(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_22(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_22(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_22(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_113969.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_21() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_21() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_20(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_20(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_22(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_23(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_23(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_24(uParam1));
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_25()
{
	return Global_1574926;
}

void func_26(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_25();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_27(int iParam0)
{
	func_48(93, iParam0);
	func_48(29, iParam0);
	func_48(30, iParam0);
}

int func_28(int iParam0)
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
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_30(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_30(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_30(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_30(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_29(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_29(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_29(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_29(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_29(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_29(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113969.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_21() /*5570*/].f_681.f_10, iParam0);
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_23(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_31(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, true);
		func_46(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_32(27, 1);
	return 1;
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
	if (func_45(14) && !func_44(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33199 != 0 && !Global_79389)
	{
		return 0;
	}
	if (func_43(&Global_4543384))
	{
		if (func_41(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_34(&Global_4543384, iParam0))
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
	if (func_45(14) && !func_44(iParam1))
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
	if (func_45(14) && !func_44(iParam1))
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
	func_39(uParam0, (Global_4543383 - 0.5f));
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

bool func_45(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_46(int iParam0, int iParam1)
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

void func_47(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59908[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59908[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_49()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_61340[0] == iVar0)
		{
			Global_61340[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_61340[1] == iVar0)
		{
			Global_61340[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_61340[2] == iVar0)
		{
			Global_61340[2] = iVar0;
		}
	}
}

int func_50(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_17;
}

int func_51()
{
	func_52();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_52()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_55(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_54(PLAYER::PLAYER_PED_ID());
			if (func_53(iVar0) && (!func_45(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_53(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_53(int iParam0)
{
	return iParam0 < 3;
}

int func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_55(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_55(int iParam0)
{
	if (func_53(iParam0))
	{
		return func_56(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_56(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_57()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, iLocal_53, fVar0, fVar0, fVar0, false, true, 0))
		{
			return 1;
		}
	}
	iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_53, false), fVar0, fVar0, fVar0, -1);
	if (!PED::IS_PED_INJURED(iVar1))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_f_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, fVar0, fVar0, -1);
	if (!PED::IS_PED_INJURED(iVar1))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_f_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_53, false), fVar0, 0, 1024);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		return 1;
	}
	iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, 0, 1024);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		return 1;
	}
	return 0;
}

void func_58()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		bVar0 = ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53);
		bVar1 = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true);
		if (((bVar1 || func_71()) || func_69()) || bVar0)
		{
			func_68();
			if (bLocal_72)
			{
				if (((bVar0 || bVar1) && !PED::IS_PED_RAGDOLL(iLocal_53)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_53);
					PED::SET_PED_TO_RAGDOLL(iLocal_53, 500, 2000, 0, false, false, false);
					TASK::TASK_COWER(iLocal_53, -1);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false) && !PED::IS_PED_RAGDOLL(iLocal_53))
				{
					TASK::CLEAR_PED_TASKS(iLocal_53);
					TASK::TASK_COWER(iLocal_53, -1);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
				}
				func_64(0);
				if (!func_90())
				{
					if (!PED::IS_PED_INJURED(iLocal_52) && iLocal_284 == 0)
					{
						if (func_75(&uLocal_76, "REARRAU", "REARR_PWTF", 4, iLocal_252, 0, 0))
						{
							iLocal_284 = 1;
						}
					}
				}
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 3;
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_57))
		{
			HUD::REMOVE_BLIP(&iLocal_57);
			func_63(&uLocal_76, 2);
		}
		func_68();
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true))
		{
			if (bLocal_72)
			{
				func_64(1);
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 3;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (bLocal_59)
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_178();
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
		}
		iVar2 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(iLocal_54) < 190) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_RAGDOLL(iLocal_54)))
				{
					iVar2 = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_55) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), true))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		if ((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(iLocal_52) < 190) || func_62()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || func_61()) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_RAGDOLL(iLocal_52))) || iVar2 == 1)
		{
			func_64(1);
			if (iLocal_47 == 3 || iLocal_47 == 1)
			{
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 2;
			}
		}
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true))
		{
			if (iLocal_285 == 0)
			{
				iLocal_285 = 1;
				iLocal_288 = MISC::GET_GAME_TIMER();
			}
			if (iLocal_47 == 3 || iLocal_47 == 1)
			{
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 2;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::REMOVE_BLIP(&iLocal_56);
			func_63(&uLocal_76, 1);
		}
	}
	if (iLocal_285)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_288) > 5000)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			iLocal_285 = 0;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52) && !PED::IS_PED_INJURED(iLocal_53))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_52) < 190 && ENTITY::GET_ENTITY_HEALTH(iLocal_53) < 190)
			{
				func_68();
				func_64(1);
				iLocal_47 = 1;
			}
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, iLocal_52, 110f, 110f, 40f, false, true, 0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 20f, 20f, 20f, false, true, 0))
			{
				func_59();
				SYSTEM::WAIT(0);
				func_75(&uLocal_76, "REARRAU", "REARR_PORUN", 4, iLocal_252, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 40f, 40f, 40f, false, true, 0))
			{
				func_59();
				SYSTEM::WAIT(0);
				func_75(&uLocal_76, "REARRAU", sLocal_265, 4, iLocal_252, 0, 0);
			}
			func_178();
		}
	}
	if (PED::IS_PED_INJURED(iLocal_52) && PED::IS_PED_INJURED(iLocal_53))
	{
		func_178();
	}
	if (PED::IS_PED_INJURED(iLocal_53))
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 100f, 100f, 40f, false, true, 0))
			{
				func_178();
			}
		}
	}
}

void func_59()
{
	Global_21152 = 0;
	func_60();
}

void func_60()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

bool func_61()
{
	bool bVar0;
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("bulldozer"))
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_52))
				{
					bVar0 = true;
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_55))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_75)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), true))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_62()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	Var0 = { 3f, 3f, 3f };
	Var3 = { -3f, -3f, -3f };
	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f), 0.5f, true))
	{
		if (PED::IS_PED_INJURED(iLocal_53))
		{
			return 1;
		}
		else if (!MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_53, 31086, 0f, 0f, 0f), 2f, true))
		{
			return 1;
		}
	}
	if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f), 3f))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 5f, 5f, 5f, false, true, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_52) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_52))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar6, true))
				{
					if (iVar6 != joaat("weapon_unarmed"))
					{
						return 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_53) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_53))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar6, true))
				{
					if (iVar6 != joaat("weapon_unarmed"))
					{
						if (bLocal_72)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f) };
	Var3 = { Var3 + PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f) };
	if (((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_smokegrenade"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_grenade"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_stickybomb"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("vehicle_weapon_tank"), true))
	{
		return 1;
	}
	return 0;
}

void func_63(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_64(int iParam0)
{
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_52);
		if (!bLocal_59)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_52, true);
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, false);
			}
			if (iParam0 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_53))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_smart_flee_ped")) == 7)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_256, "kneeling_arrest_idle", 3))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
							TASK::TASK_PLAY_ANIM(0, sLocal_256, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0f, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_71);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
							PED::FORCE_PED_MOTION_STATE(iLocal_53, joaat("MotionState_Run"), false, 0, false);
							PED::SET_PED_KEEP_TASK(iLocal_53, true);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_53);
							TASK::TASK_SMART_FLEE_PED(iLocal_53, iLocal_52, 150f, -1, false, false);
						}
					}
				}
				if ((!ENTITY::IS_ENTITY_DEAD(iLocal_53, false) && !PED::IS_PED_INJURED(iLocal_53)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 20f)
					{
						if (!func_90())
						{
							func_75(&uLocal_76, "REARRAU", sLocal_271, 4, iLocal_252, 0, 0);
						}
					}
				}
			}
			TASK::CLEAR_PED_TASKS(iLocal_52);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_71);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
			PED::SET_PED_KEEP_TASK(iLocal_52, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_52, true, 0f);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_55, 1);
			}
			func_66();
			SYSTEM::WAIT(0);
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				if (!PED::IS_PED_RAGDOLL(iLocal_52))
				{
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				func_65();
			}
			bLocal_59 = true;
		}
	}
}

void func_65()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_71);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
			PED::SET_PED_KEEP_TASK(iLocal_54, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_54, true, 0f);
		}
	}
}

void func_66()
{
	Global_21152 = 0;
	func_67();
}

void func_67()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}
}

void func_68()
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_57))
		{
			HUD::SET_BLIP_AS_FRIENDLY(iLocal_57, false);
		}
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
	}
}

int func_69()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_52, false))
	{
		if (bLocal_72)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_274) > 1000)
				{
					func_70();
				}
			}
		}
	}
	if (iLocal_273 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_70()
{
	if (!func_90())
	{
		if (iLocal_273 < 3)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
			func_75(&uLocal_76, "REARRAU", "REARR_PLEAVE", 4, iLocal_252, 0, 0);
		}
	}
	iLocal_273++;
	iLocal_274 = MISC::GET_GAME_TIMER();
}

int func_71()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_53))
		{
			if (bLocal_72)
			{
				if (iLocal_50 != 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), Local_66) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	if (bLocal_72)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53))
		{
			if (PED::IS_PED_RAGDOLL(iLocal_53))
			{
				if (iLocal_50 != 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), Local_66) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (bLocal_72)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_274) > 1000)
				{
					func_70();
				}
			}
		}
	}
	if (iLocal_273 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_72()
{
	if (!iLocal_73)
	{
		switch (iLocal_243)
		{
			case 0:
				if (!bLocal_59)
				{
					if (SYSTEM::TIMERA() > 80000)
					{
						if (!PED::IS_PED_INJURED(iLocal_52))
						{
							if (!PED::IS_PED_INJURED(iLocal_53))
							{
								func_59();
								SYSTEM::WAIT(0);
								func_75(&uLocal_76, "REARRAU", "REARR_PRAD3", 4, iLocal_252, 0, 0);
							}
						}
						iLocal_243 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_90())
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_256, "kneeling_arrest_idle", 3))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
							TASK::TASK_PLAY_ANIM(0, sLocal_256, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0f, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_71);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
							PED::FORCE_PED_MOTION_STATE(iLocal_53, joaat("MotionState_Run"), false, 0, false);
							PED::SET_PED_KEEP_TASK(iLocal_53, true);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_53, iLocal_52, 150f, -1, false, false);
						}
						PED::SET_PED_KEEP_TASK(iLocal_53, true);
						ENTITY::SET_ENTITY_HEALTH(iLocal_53, 101, 0, 0);
						func_75(&uLocal_76, "REARRAU", sLocal_267, 4, iLocal_252, 0, 0);
						iLocal_243 = 2;
					}
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						TASK::CLEAR_PED_TASKS(iLocal_52);
						iLocal_243 = 2;
					}
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_52))
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_70, iLocal_69);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_69, iLocal_70);
						TASK::TASK_COMBAT_PED(iLocal_52, iLocal_53, 0, 16);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(iLocal_52, 40000f, 0);
						func_178();
					}
					PED::SET_PED_KEEP_TASK(iLocal_52, true);
				}
				iLocal_73 = 1;
				break;
			}
	}
}

int func_73(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		}
		else
		{
			return -1;
		}
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 1f, -0.5f, 0f) };
		Var9 = { Var3 - Var0 };
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, -1f, -0.5f, 0f) };
		Var12 = { Var6 - Var0 };
		if (SYSTEM::VMAG(Var9) < SYSTEM::VMAG(Var12))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}

void func_74()
{
	if (!func_90())
	{
		if (!iLocal_291)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 30f, 30f, 30f, false, true, 0))
			{
				func_75(&uLocal_76, "REARRAU", "REARR_PSTOP", 4, iLocal_252, 0, 0);
				iLocal_291 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else if (SYSTEM::TIMERB() > 8000)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 99) > 50)
			{
				func_75(&uLocal_76, "REARRAU", "REARR_PRAND", 4, iLocal_252, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 10f, 10f, 10f, false, true, 0))
			{
				func_75(&uLocal_76, "REARRAU", sLocal_266, 4, iLocal_252, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 10f, 10f, 10f, false, true, 0))
			{
				func_75(&uLocal_76, "REARRAU", sLocal_266, 4, iLocal_252, 0, 0);
			}
			else
			{
				func_75(&uLocal_76, "REARRAU", sLocal_270, 4, iLocal_252, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
		}
	}
}

bool func_75(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_89(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_76(sParam2, iParam3, 0);
}

int func_76(char* sParam0, int iParam1, bool bParam2)
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_60();
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
		if (func_88(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_87();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, false);
			if (bParam2)
			{
				func_86();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_85())
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
				if (!Global_79389)
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
			if (func_84())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
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
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_83();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_82();
		func_77();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_60();
	}
	return 0;
}

void func_77()
{
	if (!func_78())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

int func_78()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_81())
	{
		return 0;
	}
	if (func_79(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_79(int iParam0)
{
	return func_80(iParam0, 20);
}

var func_80(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_81()
{
	return -1;
}

void func_82()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22286 = 1;
}

void func_83()
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	MISC::CLEAR_BIT(&Global_8801, 16);
}

int func_84()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_85()
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
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

void func_86()
{
	if (func_45(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_51();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

bool func_88(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

void func_89(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = uParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

int func_90()
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_91()
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, iLocal_52, 3.5f, 3.5f, 3.5f, false, true, 0) || func_94())
	{
		if (!func_92(1063675494))
		{
			return 1;
		}
	}
	return 0;
}

int func_92(float fParam0)
{
	var uVar0;
	struct<3> Var1;
	
	if (MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), &uVar0, &Var1))
	{
		if (func_93(Var1, 0f, 0f, 1f) < fParam0)
		{
			return 1;
		}
	}
	return 0;
}

float func_93(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_94()
{
	return 0;
}

int func_95(int iParam0)
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

void func_96()
{
	if ((MISC::GET_GAME_TIMER() - iLocal_251) > 500)
	{
		if ((iLocal_47 != 1 && iLocal_47 != 3) && iLocal_47 != 2)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_57, iLocal_246);
				if (bLocal_246 == 1)
				{
					bLocal_246 = false;
				}
				else
				{
					bLocal_246 = true;
				}
			}
		}
		else
		{
			bLocal_286 = true;
		}
		if (!bLocal_59)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, iLocal_247);
				if (bLocal_247 == 1)
				{
					bLocal_247 = false;
				}
				else
				{
					bLocal_247 = true;
				}
			}
		}
		else
		{
			bLocal_286 = true;
		}
		iLocal_251 = MISC::GET_GAME_TIMER();
	}
	if (!bLocal_287 == bLocal_286)
	{
		if (bLocal_286)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, true);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_56, true);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, false);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_56, false);
			}
		}
		bLocal_287 = bLocal_286;
	}
}

int func_97(float fParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	Var2 = { fParam0, fParam0, 50f };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_277, Local_280, 194.75f, false, true, 0))
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), Var2, false, true, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), Var2, false, true, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (iVar1 == 2)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_98(int iParam0)
{
	if (func_103())
	{
		Global_113959 = 1;
		Global_113956 = MISC::GET_GAME_TIMER();
		if (func_102(Global_113958))
		{
			func_99(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_102(Global_113958))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_100(func_101(iParam0), -1);
					Global_113969.f_24998.f_2++;
					MISC::SET_BIT(&Global_113965, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113965, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_100(func_101(iParam0), -1);
					Global_113969.f_24998.f_3++;
					MISC::SET_BIT(&Global_113965, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113965, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_100(func_101(iParam0), -1);
					Global_113969.f_24998.f_4++;
					MISC::SET_BIT(&Global_113965, 2);
				}
			}
			break;
	}
}

void func_100(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_101(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_103()
{
	switch (func_104(&Global_33008, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_104(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98991.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_108(0))
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23692.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_44042 = iParam2;
		Global_44004 = *uParam0;
		Global_44005 = iParam4;
		Global_44003 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_44003 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_44003)
			{
				if (Global_44009[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_44004 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_106(iParam2))
		{
			return 0;
		}
		if (Global_44003 == 8)
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		Global_44009[Global_44003 /*4*/] = Global_44006;
		Global_44009[Global_44003 /*4*/].f_1 = iParam1;
		Global_44009[Global_44003 /*4*/].f_2 = iParam2;
		Global_44009[Global_44003 /*4*/].f_3 = 0;
		Global_44003++;
		if (iParam4 != 0)
		{
			func_105(uParam0, iParam4);
		}
	}
	return 2;
}

void func_105(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_44003 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_44003)
	{
		if (Global_44009[iVar0 /*4*/] == *uParam0)
		{
			Global_44009[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_106(int iParam0)
{
	return func_107(iParam0, Global_44042);
}

int func_107(int iParam0, int iParam1)
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

int func_108(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_106(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_109()
{
	float fVar0;
	
	fVar0 = 50f;
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, fVar0, fVar0, fVar0, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, fVar0, fVar0, fVar0, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_277, Local_280, 194.75f, false, true, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_57))
				{
					iLocal_57 = func_110(iLocal_53, 0, 145);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_56))
				{
					iLocal_56 = func_110(iLocal_52, 0, 145);
				}
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, false);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_56, false);
				SYSTEM::SETTIMERA(0);
				return 1;
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_56))
				{
					iLocal_56 = func_110(iLocal_52, 0, 145);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::REMOVE_BLIP(&iLocal_57);
			}
			return 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				iLocal_57 = func_110(iLocal_53, 0, 145);
			}
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::REMOVE_BLIP(&iLocal_56);
		}
		return 1;
	}
	return 0;
}

int func_110(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_111(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_111(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_112(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_112(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_112(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_112(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_113()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	
	iVar0 = joaat("s_m_y_ranger_01");
	if (iLocal_51 == 1)
	{
		Var2 = { 2429.822f, 4952.938f, 44.8892f };
		fVar8 = 218.3434f;
		Var5 = { 2431.685f, 4945.31f, 44.6996f };
		fVar9 = 220.0087f;
		Local_277 = { 2378.284f, 4863.027f, 32.50883f };
		Local_280 = { 2512.797f, 4998.586f, 90.12283f };
		sLocal_254 = "A_M_M_HillBilly_02_WHITE_MINI_02";
		sLocal_263 = "arrestcriminal";
		sLocal_264 = "REARR_CTHANK";
		sLocal_265 = "REARR_CORUN";
		sLocal_266 = "REARR_CWTF";
		sLocal_267 = "REARR_CTURN";
		sLocal_268 = "REARR_CHELP";
		sLocal_269 = "REARR_HATE";
		sLocal_270 = "REARR_CRAND";
		sLocal_271 = "REARR_CRAND";
		sLocal_272 = "REARR_CRAND";
		iVar1 = joaat("a_m_m_hillbilly_02");
	}
	else if (iLocal_51 == 2)
	{
		Var2 = { 2592.637f, 2540.05f, 30.4162f };
		fVar8 = 90.5639f;
		Var5 = { 2586.005f, 2541.41f, 31.0379f };
		fVar9 = 75.5943f;
		Local_277 = { 2543.135f, 2683.917f, 0.307461f };
		Local_280 = { 2597.603f, 2408.885f, 121.901f };
		sLocal_254 = "G_M_M_ArmGoon_01_White_Armenian_MINI_01";
		sLocal_263 = "arrestcriminal2";
		sLocal_264 = "REARR_THANK2";
		sLocal_265 = "REARR_CORUN2";
		sLocal_266 = "REARR_CWTF2";
		sLocal_267 = "REARR_CTURN2";
		sLocal_268 = "REARR_CHELP2";
		sLocal_269 = "REARR_HATE2";
		sLocal_270 = "REARR_CRAND2";
		sLocal_271 = "REARR_CRAND2";
		sLocal_272 = "REARR_CRAND2";
		iVar1 = joaat("g_m_m_armgoon_01");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_binbag_01"));
	STREAMING::REQUEST_ANIM_DICT(sLocal_256);
	STREAMING::REQUEST_ANIM_DICT(sLocal_257);
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_TAZERED");
	if ((((((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_binbag_01"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_256)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_257)) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_NOT_TAZERED")) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_TAZERED"))
	{
		iLocal_52 = PED::CREATE_PED(6, iVar0, Var2, fVar8, true, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_52, 294, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_52, true, 0f);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_52, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, true);
		func_115(&uLocal_76, 1, iLocal_52, "ArrestCop", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_52, true, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_52, 1);
		iLocal_53 = PED::CREATE_PED(26, iVar1, Var5, fVar9, true, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_53, true, 0f);
		PED::SET_PED_CONFIG_FLAG(iLocal_53, 42, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_53, 281, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, true);
		func_115(&uLocal_76, 2, iLocal_53, sLocal_263, 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_53, true, 1);
		if (iLocal_51 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 4, 0, 0, 0);
		}
		func_114();
		if (func_51() == 0)
		{
			func_115(&uLocal_76, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (func_51() == 1)
		{
			func_115(&uLocal_76, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (func_51() == 2)
		{
			func_115(&uLocal_76, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_52, joaat("weapon_pistol"), false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_52, joaat("weapon_pistol"), -1, false, true);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_52, joaat("weapon_pistol"), true);
		iLocal_58 = OBJECT::CREATE_OBJECT(joaat("prop_ld_binbag_01"), Local_63.f_0, Local_63.f_1, (Local_63.f_2 + 100f), true, true, false);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_58, false, false);
		if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, Local_63) < 10f)
		{
			iLocal_51 = 1;
			TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2473.254f, 4901.651f, 43.1488f, 3f, -1, 2f, 1, Local_248, 40000f);
			TASK::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_71);
			PED::SET_PED_KEEP_TASK(iLocal_53, true);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
			PATHFIND::DISABLE_NAVMESH_IN_AREA(2544.862f, 4729.893f, 27.8986f, 2564.862f, 4749.893f, 28.8986f, true);
		}
		else
		{
			iLocal_51 = 2;
			TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2531.445f, 2521.749f, 38.2072f, 3f, -1, 2f, 1, Local_248, 40000f);
			TASK::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_71);
			PED::SET_PED_KEEP_TASK(iLocal_53, true);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
		}
		if (iLocal_51 == 1)
		{
		}
		TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 3f, 2f, 0);
		PED::SET_PED_KEEP_TASK(iLocal_52, true);
		return 1;
	}
	return 0;
}

void func_114()
{
	Local_248.f_0 = 0f;
	Local_248.f_1 = 10f;
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_52, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 11, false);
	PED::SET_PED_COMBAT_RANGE(iLocal_52, 0);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_53, 3);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 17, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 6, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 11, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53, 1, false);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_COP", &iLocal_69);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_CRIM", &iLocal_70);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_52, iLocal_69);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, iLocal_70);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_70, iLocal_69);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_69, joaat("player"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_70, joaat("player"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_70, joaat("COP"));
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_52, sLocal_255);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_53, sLocal_254);
}

void func_115(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
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

int func_116()
{
	if (!func_106(5))
	{
		return 1;
	}
	if (func_125())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_124())
		{
			return 0;
		}
	}
	if (func_117(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_117(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_53(func_51()))
		{
			iVar36 = func_123();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113969.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_113969.f_18577[iVar32 /*6*/], 3))
				{
					func_118(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_118(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_119(uParam1, "Abigail1", func_121(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_120(iParam0), 1, 0);
			break;
		
		case 1:
			func_119(uParam1, "Abigail2", func_121(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_120(iParam0), 1, 0);
			break;
		
		case 2:
			func_119(uParam1, "Barry1", func_121(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_120(iParam0), 1, 0);
			break;
		
		case 3:
			func_119(uParam1, "Barry2", func_121(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_120(iParam0), 1, 1);
			break;
		
		case 4:
			func_119(uParam1, "Barry3", func_121(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 5:
			func_119(uParam1, "Barry3A", func_121(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 6:
			func_119(uParam1, "Barry3C", func_121(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 7:
			func_119(uParam1, "Barry4", func_121(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_120(iParam0), 0, 0);
			break;
		
		case 8:
			func_119(uParam1, "Dreyfuss1", func_121(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 9:
			func_119(uParam1, "Epsilon1", func_121(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 10:
			func_119(uParam1, "Epsilon2", func_121(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_120(iParam0), 1, 0);
			break;
		
		case 11:
			func_119(uParam1, "Epsilon3", func_121(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 12:
			func_119(uParam1, "Epsilon4", func_121(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 13:
			func_119(uParam1, "Epsilon5", func_121(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_120(iParam0), 1, 0);
			break;
		
		case 14:
			func_119(uParam1, "Epsilon6", func_121(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 15:
			func_119(uParam1, "Epsilon7", func_121(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 16:
			func_119(uParam1, "Epsilon8", func_121(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_120(iParam0), 1, 0);
			break;
		
		case 17:
			func_119(uParam1, "Extreme1", func_121(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 18:
			func_119(uParam1, "Extreme2", func_121(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 19:
			func_119(uParam1, "Extreme3", func_121(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 20:
			func_119(uParam1, "Extreme4", func_121(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 21:
			func_119(uParam1, "Fanatic1", func_121(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_120(iParam0), 1, 0);
			break;
		
		case 22:
			func_119(uParam1, "Fanatic2", func_121(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_120(iParam0), 1, 0);
			break;
		
		case 23:
			func_119(uParam1, "Fanatic3", func_121(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_120(iParam0), 0, 1);
			break;
		
		case 24:
			func_119(uParam1, "Hao1", func_121(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_120(iParam0), 0, 1);
			break;
		
		case 25:
			func_119(uParam1, "Hunting1", func_121(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 26:
			func_119(uParam1, "Hunting2", func_121(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 27:
			func_119(uParam1, "Josh1", func_121(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_120(iParam0), 1, 0);
			break;
		
		case 28:
			func_119(uParam1, "Josh2", func_121(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_120(iParam0), 1, 1);
			break;
		
		case 29:
			func_119(uParam1, "Josh3", func_121(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_120(iParam0), 1, 1);
			break;
		
		case 30:
			func_119(uParam1, "Josh4", func_121(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_120(iParam0), 1, 0);
			break;
		
		case 31:
			func_119(uParam1, "Maude1", func_121(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 32:
			func_119(uParam1, "Minute1", func_121(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 33:
			func_119(uParam1, "Minute2", func_121(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 34:
			func_119(uParam1, "Minute3", func_121(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 35:
			func_119(uParam1, "MrsPhilips1", func_121(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 36:
			func_119(uParam1, "MrsPhilips2", func_121(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 37:
			func_119(uParam1, "Nigel1", func_121(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_120(iParam0), 1, 0);
			break;
		
		case 38:
			func_119(uParam1, "Nigel1A", func_121(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_120(iParam0), 1, 1);
			break;
		
		case 39:
			func_119(uParam1, "Nigel1B", func_121(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_120(iParam0), 1, 1);
			break;
		
		case 40:
			func_119(uParam1, "Nigel1C", func_121(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_120(iParam0), 1, 1);
			break;
		
		case 41:
			func_119(uParam1, "Nigel1D", func_121(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_120(iParam0), 1, 1);
			break;
		
		case 42:
			func_119(uParam1, "Nigel2", func_121(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_120(iParam0), 1, 1);
			break;
		
		case 43:
			func_119(uParam1, "Nigel3", func_121(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_120(iParam0), 1, 1);
			break;
		
		case 44:
			func_119(uParam1, "Omega1", func_121(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 45:
			func_119(uParam1, "Omega2", func_121(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 46:
			func_119(uParam1, "Paparazzo1", func_121(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 47:
			func_119(uParam1, "Paparazzo2", func_121(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 48:
			func_119(uParam1, "Paparazzo3", func_121(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 49:
			func_119(uParam1, "Paparazzo3A", func_121(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 50:
			func_119(uParam1, "Paparazzo3B", func_121(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 51:
			func_119(uParam1, "Paparazzo4", func_121(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 52:
			func_119(uParam1, "Rampage1", func_121(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 54:
			func_119(uParam1, "Rampage3", func_121(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_120(iParam0), 1, 0);
			break;
		
		case 55:
			func_119(uParam1, "Rampage4", func_121(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_120(iParam0), 1, 0);
			break;
		
		case 56:
			func_119(uParam1, "Rampage5", func_121(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_120(iParam0), 0, 0);
			break;
		
		case 53:
			func_119(uParam1, "Rampage2", func_121(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_120(iParam0), 1, 0);
			break;
		
		case 57:
			func_119(uParam1, "TheLastOne", func_121(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 58:
			func_119(uParam1, "Tonya1", func_121(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 59:
			func_119(uParam1, "Tonya2", func_121(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 60:
			func_119(uParam1, "Tonya3", func_121(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 61:
			func_119(uParam1, "Tonya4", func_121(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		case 62:
			func_119(uParam1, "Tonya5", func_121(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_120(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_119(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_120(int iParam0)
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

struct<2> func_121(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_122(iParam0) };
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

struct<2> func_122(int iParam0)
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

int func_123()
{
	func_52();
	switch (Global_113969.f_2366.f_539.f_4321)
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

int func_124()
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

int func_125()
{
	if (func_128() && !func_124())
	{
		return 1;
	}
	if (func_127() && func_126())
	{
		return 1;
	}
	return 0;
}

bool func_126()
{
	return Global_113687 > 0;
}

int func_127()
{
	if (Global_98435 != -1)
	{
		return 1;
	}
	return 0;
}

int func_128()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_129()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_124())
		{
			return 0;
		}
	}
	if (func_125())
	{
		return 1;
	}
	if (func_117(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_130(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_133();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_132(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113955 = 0;
	func_131();
}

void func_131()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_132(int iParam0)
{
	Global_113958 = iParam0;
}

int func_133()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_134(Var0);
	return uVar16;
}

int func_134(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_135(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152557)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_133();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_177())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_124())
			{
				return 0;
			}
		}
		if (!Global_113969.f_9088)
		{
			return 0;
		}
		if (func_176(0))
		{
			return 0;
		}
		if (func_125())
		{
			return 0;
		}
		if (func_175())
		{
			return 0;
		}
		if (Global_113958 != -1)
		{
			return 0;
		}
		if (func_53(func_51()))
		{
			if (func_117(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_174(iParam3))
		{
			return 0;
		}
		if (func_53(func_51()))
		{
			if (func_173(func_51()) == 4 || func_173(func_51()) == 5)
			{
				return 0;
			}
		}
		if (func_53(func_51()))
		{
			if (!func_172(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_171(Global_113969.f_24998.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113960) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_170())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_161(4))
		{
			return 0;
		}
		if (!func_106(5))
		{
			return 0;
		}
		if (func_160(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_4 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_160(0, 0))
		{
			return 0;
		}
		if (Global_33095)
		{
			return 0;
		}
		if (func_174(30) && !func_160(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_53(func_51()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113969.f_2366.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113969.f_2366.f_539.f_2296[iVar4];
				if (func_159(iVar8))
				{
					if (func_137(iVar4))
					{
						if (!func_136(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_51() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_136(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_137(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113969.f_2366.f_539.f_2296[iParam0];
	return func_138(iVar0);
}

int func_138(int iParam0)
{
	return func_139(iParam0, 1);
}

int func_139(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_159(iParam0))
	{
		return 0;
	}
	func_140(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_140(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_141(func_152(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_141(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_151(iParam0, iParam1))
	{
		iVar0 = func_150(iParam1);
		iVar1 = func_148(iParam0);
		iVar2 = (func_148(iParam0) - func_148(iParam1));
		iVar3 = (func_150(iParam0) - func_150(iParam1));
		iVar4 = (func_147(iParam0) - func_147(iParam1));
		iVar5 = (func_146(iParam0) - func_146(iParam1));
		iVar6 = (func_145(iParam0) - func_145(iParam1));
		iVar7 = (func_144(iParam0) - func_144(iParam1));
	}
	else
	{
		iVar0 = func_150(iParam0);
		iVar1 = func_148(iParam1);
		iVar2 = (func_148(iParam1) - func_148(iParam0));
		iVar3 = (func_150(iParam1) - func_150(iParam0));
		iVar4 = (func_147(iParam1) - func_147(iParam0));
		iVar5 = (func_146(iParam1) - func_146(iParam0));
		iVar6 = (func_145(iParam1) - func_145(iParam0));
		iVar7 = (func_144(iParam1) - func_144(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_143(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_142(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_142(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_143(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_144(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_145(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_146(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_147(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_148(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_149(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_149(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_150(int iParam0)
{
	return iParam0 & 15;
}

int func_151(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_159(iParam1) || !func_159(iParam0))
	{
		return 1;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_150(iParam0);
	iVar1 = func_150(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_152()
{
	var uVar0;
	
	func_158(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_157(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_156(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_155(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_154(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_153(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_153(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_155(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_150(*uParam0);
	iVar1 = func_148(*uParam0);
	if (iParam1 < 1 || iParam1 > func_143(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_157(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_158(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_159(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_145(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_146(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_148(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_150(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_147(iParam0);
	if (iVar5 < 1 || iVar5 > func_143(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_160(int iParam0, bool bParam1)
{
	if (BitTest(Global_113969.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_51();
				if (!func_53(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_169()) || Global_113016) || Global_32951) || func_168()) || func_88(8, -1)) || func_167()) || func_166()) || func_165()) || func_164()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_169()) || Global_32951) || func_168()) || func_88(8, -1)) || func_165()) || func_167()) || func_166()) || func_164()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_169()) || Global_113016) || Global_32951) || func_168()) || func_88(8, -1)) || func_165()) || func_167()) || func_166()) || func_164()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_169()) || Global_113016) || Global_32951) || func_168()) || func_88(8, -1)) || func_167()) || func_166()) || func_164()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_169() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_88(8, -1)) || func_164()) || func_163()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_88(8, -1) || func_167()) || func_166()) || func_163()) || func_162())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_169()) || Global_32951) || func_168()) || func_88(8, -1)) || func_166()) || func_165()) || func_164()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_169()) || func_166()) || Global_113016) || Global_32951) || func_168()) || Global_45250) || func_88(8, -1)) || func_165()) || func_163()) || func_164()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_169()) || Global_113016) || Global_32951) || func_168()) || func_88(8, -1)) || func_165()) || func_163()) || func_167()) || func_166()) || func_164())
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

var func_162()
{
	return Global_101572.f_1;
}

int func_163()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_164()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_165()
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

bool func_166()
{
	return Global_101585.f_394 > 0;
}

bool func_167()
{
	return Global_101585.f_393 > 0;
}

var func_168()
{
	return Global_1575083;
}

int func_169()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_170()
{
	func_86();
	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_171(int iParam0)
{
	return func_151(func_152(), iParam0);
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_51();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_173(int iParam0)
{
	if (!func_53(iParam0))
	{
		return 7;
	}
	return Global_113969.f_7691.f_919[iParam0];
}

int func_174(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_177())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113969.f_24998, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113969.f_24998.f_1, iVar0);
	}
	return iVar1;
}

int func_175()
{
	int iVar0;
	
	if (Global_33100)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_176(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_177()
{
	int iVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
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
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
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

void func_178()
{
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		switch (iLocal_47)
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				func_207(6);
				func_192();
				break;
			
			case 3:
				func_207(5);
				func_192();
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
		{
			if (!PED::IS_PED_INJURED(iLocal_53) && !ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
			{
				ENTITY::IS_ENTITY_DEAD(iLocal_52, false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_52, true), 9000f, -1, false, false);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_53, true), 9000f, -1, false, false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, false);
				PED::SET_PED_KEEP_TASK(iLocal_53, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				PED::SET_PED_KEEP_TASK(iLocal_52, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, false);
				PED::SET_PED_AS_COP(iLocal_52, true);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_52, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_65();
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, false);
				PED::SET_PED_AS_COP(iLocal_54, true);
			}
		}
		if (func_191())
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_70, iLocal_69);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_69, iLocal_70);
		}
		if (iLocal_75)
		{
			VEHICLE::SET_RANDOM_TRAINS(true);
		}
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 1);
	if (iLocal_285)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
	func_179(-1);
	SYSTEM::WAIT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_179(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_133();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_191())
	{
		func_184(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113960 = MISC::GET_GAME_TIMER();
		func_183(30000);
		StringCopy(&cVar0, func_182(Global_113958, 1), 64);
		if (func_181(Global_113958) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113957, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113955, (MISC::GET_GAME_TIMER() - Global_113956), 0);
	}
	else if (BitTest(Global_113965, 0) && Global_113969.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113965, false);
	}
	func_180(&Global_33008);
	Global_113959 = 0;
	func_132(-1);
}

void func_180(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_44004)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = 0;
	Global_64164 = 0;
}

int func_181(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_182(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_183(int iParam0)
{
	Global_44593 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_184(int iParam0)
{
	func_185(iParam0, 0, func_190(iParam0));
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_152();
	func_188(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_187(iParam0, &uVar0);
	Var1 = { func_186(&uVar0) };
}

struct<16> func_186(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_146(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_145(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_144(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_147(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_150(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_148(*uParam0), 64);
	return Var0;
}

void func_187(int iParam0, var uParam1)
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
}

void func_188(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_148(*uParam0);
	iVar1 = func_150(*uParam0);
	iVar2 = func_147(*uParam0);
	iVar3 = func_146(*uParam0);
	iVar4 = func_145(*uParam0);
	iVar5 = func_144(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_143(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_143(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_189(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_189(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_158(uParam0, iParam1);
	func_157(uParam0, iParam2);
	func_156(uParam0, iParam3);
	func_154(uParam0, iParam5);
	func_155(uParam0, iParam4);
	func_153(uParam0, iParam6);
}

int func_190(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_191()
{
	if ((Global_113958 == func_133() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113959)
	{
		return 1;
	}
	return 0;
}

void func_192()
{
	if (!bLocal_74)
	{
		func_206();
	}
	func_195(15, iLocal_51);
	func_193();
}

void func_193()
{
	func_194();
}

int func_194()
{
	if (func_176(0))
	{
		return 0;
	}
	if (Global_101572.f_8)
	{
		if (Global_101572.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101572.f_10 > 1)
	{
		return 0;
	}
	Global_101572.f_10++;
	return 1;
}

void func_195(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_133();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_181(iParam0))
	{
		func_205(iParam0, iParam1);
		if (!func_204(51))
		{
			func_201("RE_REWARD", 1, 0, 4000, 10000, func_123(), 0, 138, 0);
			func_200(51);
		}
		if (func_102(iParam0))
		{
			Global_113969.f_24998.f_2 = 3;
		}
		if (func_199(iParam0, iParam1) != 322)
		{
			func_196(func_199(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_113957 = iParam1;
		if (Global_113955 == 0)
		{
			if (((Global_113958 == 1 || Global_113958 == 5) || Global_113958 == 11) || Global_113958 == 25)
			{
				func_207(2);
			}
			else if ((Global_113958 == 26 || Global_113958 == 8) || Global_113958 == 17)
			{
				func_207(7);
			}
			else
			{
				func_207(1);
			}
		}
	}
}

void func_196(int iParam0, var uParam1, var uParam2)
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
		func_26((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113969.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113969.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113969.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113969.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113969.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = uParam2;
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
		func_197();
	}
}

void func_197()
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
	Global_113705 = 0;
	Global_113706 = 0;
	Global_113707 = 0;
	Global_113708 = 0;
	Global_113709 = 0;
	Global_113710 = 0;
	Global_113711 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113969.f_10197.f_3853;
	Global_113969.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113969.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113969.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113705++;
					fVar1 = (fVar1 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113706++;
					fVar2 = (fVar2 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113707++;
					fVar3 = (fVar3 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113708++;
					fVar4 = (fVar4 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113709++;
					fVar5 = (fVar5 + (Global_113969.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113710++;
					fVar6 = (fVar6 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113711++;
					fVar7 = (fVar7 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113688 > 0)
	{
		if (Global_113705 == Global_113688)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113689 > 0)
	{
		if (Global_113706 == Global_113689)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113690 > 0)
	{
		if (Global_113707 == Global_113690)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113691 > 0)
	{
		if (Global_113708 == Global_113691)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113692 > 0)
	{
		if (((Global_113709 == Global_113692 || (Global_113692 * 10 / Global_113709) < 41) || Global_113709 > Global_113695) || Global_113709 == Global_113695)
		{
			if (!BitTest(Global_113969.f_10197.f_3856, 14))
			{
				if (Global_113709 == Global_113692)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113692, 0);
					MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113693 > 0)
	{
		if (Global_113710 == Global_113693)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113694 > 0)
	{
		if (Global_113711 == Global_113694)
		{
			fVar7 = 5f;
		}
	}
	Global_113969.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113709 > Global_113695 || Global_113709 == Global_113695)
	{
		iVar9 = Global_113695;
	}
	else
	{
		iVar9 = Global_113709;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113705, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113688, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113706, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113689, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113707, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113690, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113708, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113691, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113695, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113711 + Global_113710), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113694 + Global_113693), true);
	Global_113712 = (Global_113705 * 100 / Global_113688);
	Global_113714 = ((Global_113707 + Global_113706) * 100 / (Global_113690 + Global_113689));
	Global_113713 = ((Global_113708 + iVar9) * 100 / (Global_113691 + Global_113695));
	Global_113715 = ((Global_113710 + Global_113711) * 100 / (Global_113693 + Global_113694));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113969.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113712, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113713, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113714, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113969.f_10197.f_3853))
	{
		func_46(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_198() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_194();
				}
			}
		}
	}
}

int func_198()
{
	return Global_32948;
}

int func_199(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_200(int iParam0)
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
		MISC::SET_BIT(&(Global_113969.f_20413.f_150[iVar1]), iVar0);
	}
}

void func_201(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_202(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_202(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113969.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_113969.f_20413.f_145++;
		func_203();
	}
}

void func_203()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113969.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[0])
			{
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[1])
			{
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[2])
			{
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_204(int iParam0)
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
		return BitTest(Global_113969.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_205(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_113969.f_24998.f_8[iParam0]), iParam1);
}

int func_206()
{
	return 1;
}

void func_207(int iParam0)
{
	Global_113955 = iParam0;
}

void func_208()
{
	if (!bLocal_72 && iLocal_49 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_52) && !PED::IS_PED_INJURED(iLocal_53))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_52, ENTITY::GET_ENTITY_COORDS(iLocal_53, true), 3f, 20000, 40000f, 0.5f);
			PED::SET_PED_KEEP_TASK(iLocal_52, true);
			SYSTEM::WAIT(0);
		}
	}
}

