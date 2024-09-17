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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
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
	while (true)
	{
		if (func_7() || Global_1955906 == 1)
		{
			func_6();
		}
		if (func_1(&uLocal_19, &Global_298114))
		{
			func_6();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (uParam0->f_2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), uParam0->f_1)) >= uParam0->f_3)
		{
			func_5();
		}
	}
	else
	{
		if (!*uParam1)
		{
			return 0;
		}
		iVar9 = 5;
		if (NETWORK::NETWORK_CAN_BAIL())
		{
			iVar10 = 2344;
			iVar11 = (uParam0->f_4 + iVar9);
			iVar12 = func_4(*uParam0);
			iVar2 = uParam0->f_4;
			while (iVar2 <= iVar11)
			{
				if (iVar2 < iVar10)
				{
					func_2(iVar2, &Var3);
					if (iVar2 >= Var3.f_4 && iVar2 != 27)
					{
						if (iVar12 != 0 && Var3.f_5 != 0)
						{
							if (NETWORK::NETWORK_ACCESS_TUNABLE_FLOAT_HASH(iVar12, Var3.f_5, &fVar0))
							{
								if (fVar0 > Var3.f_1 || fVar0 < Var3.f_0)
								{
									uParam0->f_2 = 1;
									uParam0->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 30000);
									uParam0->f_1 = MISC::GET_GAME_TIMER();
								}
							}
							else if (NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(iVar12, Var3.f_5, &iVar1))
							{
								if (iVar1 > Var3.f_3 || iVar1 < Var3.f_2)
								{
									uParam0->f_2 = 1;
									uParam0->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 30000);
									uParam0->f_1 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				uParam0->f_4++;
				iVar2++;
			}
			if (uParam0->f_4 >= 2344)
			{
				uParam0->f_4 = 0;
				*uParam0++;
				if (*uParam0 >= 29)
				{
					*uParam0 = 0;
					*uParam1 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_2(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("cash_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 2:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("max_health_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 3:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("max_armor_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 4:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("hold_up_cash_reward_cap");
			uParam1->f_4 = 1;
			break;
		
		case 5:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("health_regen_rate_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 6:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("health_regen_max_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 7:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("ped_drop_cash_multiplier");
			uParam1->f_4 = 0;
			break;
		
		case 8:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 813685198;
			uParam1->f_4 = 1;
			break;
		
		case 9:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("bounty_award_level_1_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 10:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("bounty_award_level_2_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 11:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("bounty_award_level_3_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 12:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("bounty_award_level_4_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 13:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("bounty_award_level_5_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 14:
			*uParam1 = 2000f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("high_tutorial_wallet_cash");
			uParam1->f_4 = 1;
			break;
		
		case 15:
			*uParam1 = 2000f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("low_tutorial_wallet_cash");
			uParam1->f_4 = 1;
			break;
		
		case 16:
			*uParam1 = 2000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("high_tutorial_bank_cash");
			uParam1->f_4 = 1;
			break;
		
		case 17:
			*uParam1 = 2000f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("low_tutorial_bank_cash");
			uParam1->f_4 = 1;
			break;
		
		case 18:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("win_deathmatch_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 19:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("killstreak_bonus_on_deathmatch_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 20:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("win_race_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 21:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("cash_modifier_crate_drop_gang_attack");
			uParam1->f_4 = 1;
			break;
		
		case 22:
			*uParam1 = 0f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("high_rockstar_missions_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 23:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("low_rockstar_missions_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 24:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("carmod_car_val_sell_cap");
			uParam1->f_4 = 1;
			break;
		
		case 27:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("imp_exp_earn_cap");
			uParam1->f_4 = 1;
			break;
		
		case 28:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("earnings_import_export_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 29:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("high_hold_ups_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 30:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("low_hold_ups_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 31:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("high_lester_npc_target_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 32:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("low_lester_npc_target_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 33:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("impromptu_race_cash_award_cap");
			uParam1->f_4 = 1;
			break;
		
		case 34:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("armoured_truck_earnings_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 35:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("armoured_truck_earnings_multiplier_lo");
			uParam1->f_4 = 1;
			break;
		
		case 36:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("armoured_truck_earnings_multiplier_hi");
			uParam1->f_4 = 1;
			break;
		
		case 37:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("impromptu_dm_entry_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 38:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("impromptu_race_expenses_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 39:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("impromptu_race_entry_fee_cap");
			uParam1->f_4 = 1;
			break;
		
		case 40:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("max_bet_limit");
			uParam1->f_4 = 1;
			break;
		
		case 41:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("min_bet_limit");
			uParam1->f_4 = 1;
			break;
		
		case 42:
			*uParam1 = 50f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("short_odds_limit");
			uParam1->f_4 = 1;
			break;
		
		case 43:
			*uParam1 = 1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("long_odds_limit");
			uParam1->f_4 = 1;
			break;
		
		case 44:
			*uParam1 = 10f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("bookie_rake");
			uParam1->f_4 = 1;
			break;
		
		case 45:
			*uParam1 = 0f;
			uParam1->f_1 = 120000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 120000;
			uParam1->f_5 = joaat("max_bet_total_amount_on_a_single_player");
			uParam1->f_4 = 1;
			break;
		
		case 46:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_performing_jobs_with_other_players");
			uParam1->f_4 = 1;
			break;
		
		case 47:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_all_rp_while_playing_in_a_crew");
			uParam1->f_4 = 1;
			break;
		
		case 48:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_armored_truck");
			uParam1->f_4 = 1;
			break;
		
		case 49:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_bounties_killer");
			uParam1->f_4 = 1;
			break;
		
		case 50:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_bounties_target");
			uParam1->f_4 = 1;
			break;
		
		case 51:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_crate_drop");
			uParam1->f_4 = 1;
			break;
		
		case 52:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_crate_drop_enemy_kills");
			uParam1->f_4 = 1;
			break;
		
		case 53:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_gang_attack");
			uParam1->f_4 = 1;
			break;
		
		case 54:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_gang_attack_enemy_kills");
			uParam1->f_4 = 1;
			break;
		
		case 55:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_hold_ups");
			uParam1->f_4 = 1;
			break;
		
		case 56:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_importexport");
			uParam1->f_4 = 1;
			break;
		
		case 57:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_lester_npc_target");
			uParam1->f_4 = 1;
			break;
		
		case 58:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_minigames_arm_wrestling");
			uParam1->f_4 = 1;
			break;
		
		case 59:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_minigames_golf");
			uParam1->f_4 = 1;
			break;
		
		case 60:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_minigames_all_golf_bonuses");
			uParam1->f_4 = 1;
			break;
		
		case 61:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_minigames_shooting_range");
			uParam1->f_4 = 1;
			break;
		
		case 62:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_minigames_tennis_win");
			uParam1->f_4 = 1;
			break;
		
		case 63:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_minigames_tennis_taking_part");
			uParam1->f_4 = 1;
			break;
		
		case 64:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_minigames_tennis_game");
			uParam1->f_4 = 1;
			break;
		
		case 65:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_minigames_tennis_set");
			uParam1->f_4 = 1;
			break;
		
		case 66:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_minigames_tennis_rally");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("xp_tunable_parachuting_dead_centre");
			uParam1->f_4 = 1;
			break;
		
		case 68:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("xp_tunable_parachuting_in_the_circle");
			uParam1->f_4 = 1;
			break;
		
		case 69:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("xp_tunable_parachuting_clip_the_outer_ring");
			uParam1->f_4 = 1;
			break;
		
		case 70:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_race_to_point");
			uParam1->f_4 = 1;
			break;
		
		case 71:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_rockstar_deathmatch_kill");
			uParam1->f_4 = 1;
			break;
		
		case 72:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_rockstar_deathmatch_1st_place");
			uParam1->f_4 = 1;
			break;
		
		case 73:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_rockstar_deathmatch_2nd_place");
			uParam1->f_4 = 1;
			break;
		
		case 74:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_rockstar_deathmatch_3rd_place");
			uParam1->f_4 = 1;
			break;
		
		case 75:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_3_kills");
			uParam1->f_4 = 1;
			break;
		
		case 76:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_6_kills");
			uParam1->f_4 = 1;
			break;
		
		case 77:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_10_kills");
			uParam1->f_4 = 1;
			break;
		
		case 78:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_headshot");
			uParam1->f_4 = 1;
			break;
		
		case 79:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_end_killstreak");
			uParam1->f_4 = 1;
			break;
		
		case 80:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_revenge_killstreak");
			uParam1->f_4 = 1;
			break;
		
		case 81:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_kill_power_play_player");
			uParam1->f_4 = 1;
			break;
		
		case 85:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_podium_finish");
			uParam1->f_4 = 1;
			break;
		
		case 86:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_win_without_dying");
			uParam1->f_4 = 1;
			break;
		
		case 87:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_rockstar_dm_power_plays");
			uParam1->f_4 = 1;
			break;
		
		case 88:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_rockstar_dm_final_kill_bonus");
			uParam1->f_4 = 1;
			break;
		
		case 89:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_runoverusingvehicledm");
			uParam1->f_4 = 1;
			break;
		
		case 90:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_kill_2_within_10_secondsdm");
			uParam1->f_4 = 1;
			break;
		
		case 91:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_kill_first_30_secondsdm");
			uParam1->f_4 = 1;
			break;
		
		case 92:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_kill_close_to_deathdm");
			uParam1->f_4 = 1;
			break;
		
		case 93:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_least_5_headshot_killsdm");
			uParam1->f_4 = 1;
			break;
		
		case 94:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_killplayermeleeattack");
			uParam1->f_4 = 1;
			break;
		
		case 95:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_finish_more_kills_no_health_packsdm");
			uParam1->f_4 = 1;
			break;
		
		case 96:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_finish_with_a_kd_ratio_of_at_least_2dm");
			uParam1->f_4 = 1;
			break;
		
		case 97:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_win_using_only_pistoldm");
			uParam1->f_4 = 1;
			break;
		
		case 98:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_finish_top_3dm");
			uParam1->f_4 = 1;
			break;
		
		case 99:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_get_a_kill_streakvdm");
			uParam1->f_4 = 1;
			break;
		
		case 100:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_kill_two_enemies_within_10sec_of_each_othervdm");
			uParam1->f_4 = 1;
			break;
		
		case 101:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_kill_enemy_within_the_60_secondsvdm");
			uParam1->f_4 = 1;
			break;
		
		case 102:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_killenemy_while_your_vehicle_is_on_firevdm");
			uParam1->f_4 = 1;
			break;
		
		case 103:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_recover_from_deathstreak_finish_with_more_kills_than_deathsvdm");
			uParam1->f_4 = 1;
			break;
		
		case 104:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_killplayerwhendeadvdm");
			uParam1->f_4 = 1;
			break;
		
		case 105:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_finishmorekillsthandeathsvdm");
			uParam1->f_4 = 1;
			break;
		
		case 106:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_getfirstkillvdm");
			uParam1->f_4 = 1;
			break;
		
		case 107:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_killpowerplayervdm");
			uParam1->f_4 = 1;
			break;
		
		case 108:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_finishvdmintop3vdm");
			uParam1->f_4 = 1;
			break;
		
		case 109:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_rockstar_missions_bonuses");
			uParam1->f_4 = 1;
			break;
		
		case 110:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_kill_all_enemies_on_a_mission");
			uParam1->f_4 = 1;
			break;
		
		case 111:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_only_kill_enemies_with_headshots_individual");
			uParam1->f_4 = 1;
			break;
		
		case 112:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_only_kill_enemies_with_headshots_team");
			uParam1->f_4 = 1;
			break;
		
		case 113:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_not_losing_any_lives_bonus");
			uParam1->f_4 = 1;
			break;
		
		case 114:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_deliver_a_package_bonus");
			uParam1->f_4 = 1;
			break;
		
		case 115:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_difficulty_bonus");
			uParam1->f_4 = 1;
			break;
		
		case 116:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_last_team_standing_winners");
			uParam1->f_4 = 1;
			break;
		
		case 117:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_last_team_standing_losers");
			uParam1->f_4 = 1;
			break;
		
		case 118:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_last_team_standing_survivor_bonus");
			uParam1->f_4 = 1;
			break;
		
		case 119:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_rockstar_races_1st_place");
			uParam1->f_4 = 1;
			break;
		
		case 120:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_rockstar_races_2nd_place");
			uParam1->f_4 = 1;
			break;
		
		case 121:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_rockstar_races_3rd_place");
			uParam1->f_4 = 1;
			break;
		
		case 122:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_overtake_another_player_5_times");
			uParam1->f_4 = 1;
			break;
		
		case 123:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_overtake_another_player_10_times");
			uParam1->f_4 = 1;
			break;
		
		case 124:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_overtake_another_player_15_times");
			uParam1->f_4 = 1;
			break;
		
		case 125:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_slipstream_for_5_seconds");
			uParam1->f_4 = 1;
			break;
		
		case 126:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_be_in_first_place_for_a_whole_lap");
			uParam1->f_4 = 1;
			break;
		
		case 127:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_go_in_to_1st_place");
			uParam1->f_4 = 1;
			break;
		
		case 128:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_clean_lap");
			uParam1->f_4 = 1;
			break;
		
		case 129:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_fastest_lap");
			uParam1->f_4 = 1;
			break;
		
		case 130:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_personal_best_lap");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_flying_under_bridges");
			uParam1->f_4 = 1;
			break;
		
		case 132:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_survival_wave_reached");
			uParam1->f_4 = 1;
			break;
		
		case 133:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_survival_enemy_kill");
			uParam1->f_4 = 1;
			break;
		
		case 134:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_survival_vehicle_destroyed");
			uParam1->f_4 = 1;
			break;
		
		case 135:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_awards_bronze");
			uParam1->f_4 = 1;
			break;
		
		case 136:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_awards_silver");
			uParam1->f_4 = 1;
			break;
		
		case 137:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_awards_gold");
			uParam1->f_4 = 1;
			break;
		
		case 138:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_awards_platinum");
			uParam1->f_4 = 1;
			break;
		
		case 139:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_buddy_in_car_respect_1_buddy");
			uParam1->f_4 = 1;
			break;
		
		case 140:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_buddy_in_car_respect_2_buddies");
			uParam1->f_4 = 1;
			break;
		
		case 141:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_buddy_in_car_respect_3_buddies");
			uParam1->f_4 = 1;
			break;
		
		case 142:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_lose_wanted_level_1_star");
			uParam1->f_4 = 1;
			break;
		
		case 143:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_lose_wanted_level_2_star");
			uParam1->f_4 = 1;
			break;
		
		case 144:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_lose_wanted_level_3_star");
			uParam1->f_4 = 1;
			break;
		
		case 145:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_lose_wanted_level_4_star");
			uParam1->f_4 = 1;
			break;
		
		case 146:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_lose_wanted_level_5_star");
			uParam1->f_4 = 1;
			break;
		
		case 147:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_time_with_5star_wanted_level");
			uParam1->f_4 = 1;
			break;
		
		case 148:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_stunt_jumps");
			uParam1->f_4 = 1;
			break;
		
		case 149:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -623433531;
			uParam1->f_4 = 1;
			break;
		
		case 150:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("psandqs_health_replenish_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 151:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("egochaser_health_replenish_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 152:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("meteorite_health_replenish_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 153:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("redwood_health_deplete_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 154:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("orangotang_health_replenish_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 155:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("bourgeoix_health_replenish_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 156:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("xp_tunable_awards_platinum");
			uParam1->f_4 = 1;
			break;
		
		case 157:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("crate_drop_cash_max");
			uParam1->f_4 = 1;
			break;
		
		case 158:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("crate_drop_cash_total_max");
			uParam1->f_4 = 1;
			break;
		
		case 159:
			*uParam1 = 0f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("crate_drop_special_cash");
			uParam1->f_4 = 1;
			break;
		
		case 160:
			*uParam1 = -1f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("crate_drop_xp");
			uParam1->f_4 = 1;
			break;
		
		case 161:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("crate_drop_special_xp");
			uParam1->f_4 = 1;
			break;
		
		case 162:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_darts_bullseye");
			uParam1->f_4 = 1;
			break;
		
		case 163:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_darts_leg_won");
			uParam1->f_4 = 1;
			break;
		
		case 164:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_darts_taking_part");
			uParam1->f_4 = 1;
			break;
		
		case 165:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("xp_tunable_darts_match_win");
			uParam1->f_4 = 1;
			break;
		
		case 166:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("xp_modifier_buddy_in_car");
			uParam1->f_4 = 1;
			break;
		
		case 167:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("killstreak_bonus_on_mission_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 168:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("hospital_bill_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 169:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("cash_drop_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 170:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("wanted_level_bail_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 171:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("race_rp_player_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 172:
			*uParam1 = 50f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("race_rp_basic");
			uParam1->f_4 = 1;
			break;
		
		case 173:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("race_rp_min_players");
			uParam1->f_4 = 1;
			break;
		
		case 174:
			*uParam1 = 4f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("race_rp_max_players");
			uParam1->f_4 = 1;
			break;
		
		case 175:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("race_rp_max_job_decider");
			uParam1->f_4 = 1;
			break;
		
		case 176:
			*uParam1 = 20f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("race_rp_rank_cap");
			uParam1->f_4 = 1;
			break;
		
		case 177:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("race_rp_rank_divider");
			uParam1->f_4 = 1;
			break;
		
		case 178:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("race_rp_end_divider");
			uParam1->f_4 = 1;
			break;
		
		case 179:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("dm_rp_player_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 180:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("dm_rp_basic");
			uParam1->f_4 = 1;
			break;
		
		case 181:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("dm_rp_min_players");
			uParam1->f_4 = 1;
			break;
		
		case 182:
			*uParam1 = 4f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("dm_rp_max_players");
			uParam1->f_4 = 1;
			break;
		
		case 183:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("dm_rp_max_job_decider");
			uParam1->f_4 = 1;
			break;
		
		case 184:
			*uParam1 = 20f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("dm_rp_rank_cap");
			uParam1->f_4 = 1;
			break;
		
		case 185:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("dm_rp_rank_divider");
			uParam1->f_4 = 1;
			break;
		
		case 186:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("dm_rp_end_divider");
			uParam1->f_4 = 1;
			break;
		
		case 187:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("parachuting_rp_player_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 188:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("parachuting_rp_basic");
			uParam1->f_4 = 1;
			break;
		
		case 189:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("parachuting_rp_min_players");
			uParam1->f_4 = 1;
			break;
		
		case 190:
			*uParam1 = 4f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("parachuting_rp_max_players");
			uParam1->f_4 = 1;
			break;
		
		case 191:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("parachuting_rp_max_job_decider");
			uParam1->f_4 = 1;
			break;
		
		case 192:
			*uParam1 = 200f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("parachuting_rp_rank_cap");
			uParam1->f_4 = 1;
			break;
		
		case 193:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("parachuting_rp_rank_divider");
			uParam1->f_4 = 1;
			break;
		
		case 194:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("parachuting_rp_end_divider");
			uParam1->f_4 = 1;
			break;
		
		case 195:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("parachuting_rp_point_cap");
			uParam1->f_4 = 1;
			break;
		
		case 196:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("parachuting_rp_point_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 197:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("lts_rp_player_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 198:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("lts_rp_basic");
			uParam1->f_4 = 1;
			break;
		
		case 199:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("lts_rp_min_players");
			uParam1->f_4 = 1;
			break;
		
		case 200:
			*uParam1 = 4f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 16;
			uParam1->f_5 = joaat("lts_rp_max_players");
			uParam1->f_4 = 1;
			break;
		
		case 201:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("lts_rp_max_job_decider");
			uParam1->f_4 = 1;
			break;
		
		case 202:
			*uParam1 = 20f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("lts_rp_rank_cap");
			uParam1->f_4 = 1;
			break;
		
		case 203:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("lts_rp_rank_divider");
			uParam1->f_4 = 1;
			break;
		
		case 204:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("lts_rp_end_divider");
			uParam1->f_4 = 1;
			break;
		
		case 205:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("race_player_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 206:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("race_basic");
			uParam1->f_4 = 1;
			break;
		
		case 207:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("race_max_players");
			uParam1->f_4 = 1;
			break;
		
		case 208:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("race_max_job_decider");
			uParam1->f_4 = 1;
			break;
		
		case 209:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("race_rank_cap");
			uParam1->f_4 = 1;
			break;
		
		case 210:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("race_rank_divider");
			uParam1->f_4 = 1;
			break;
		
		case 211:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("race_end_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 212:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("dm_player_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 213:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("dm_basic");
			uParam1->f_4 = 1;
			break;
		
		case 214:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("dm_max_players");
			uParam1->f_4 = 1;
			break;
		
		case 1122:
			*uParam1 = 4f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 16;
			uParam1->f_5 = joaat("tdm_max_players");
			uParam1->f_4 = 1;
			break;
		
		case 1123:
			*uParam1 = 4f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 16;
			uParam1->f_5 = joaat("tdm_rp_max_players");
			uParam1->f_4 = 1;
			break;
		
		case 215:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("dm_max_job_decider");
			uParam1->f_4 = 1;
			break;
		
		case 216:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("dm_rank_cap");
			uParam1->f_4 = 1;
			break;
		
		case 217:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("dm_rank_divider");
			uParam1->f_4 = 1;
			break;
		
		case 218:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("dm_end_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 219:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("parachuting_player_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 220:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("parachuting_basic");
			uParam1->f_4 = 1;
			break;
		
		case 221:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("parachuting_max_players");
			uParam1->f_4 = 1;
			break;
		
		case 222:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("parachuting_max_job_decider");
			uParam1->f_4 = 1;
			break;
		
		case 223:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("parachuting_rank_cap");
			uParam1->f_4 = 1;
			break;
		
		case 224:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("parachuting_rank_divider");
			uParam1->f_4 = 1;
			break;
		
		case 225:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("parachuting_end_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 226:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("lts_player_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 227:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("lts_basic");
			uParam1->f_4 = 1;
			break;
		
		case 228:
			*uParam1 = 2f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("lts_max_players");
			uParam1->f_4 = 1;
			break;
		
		case 229:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("lts_max_job_decider");
			uParam1->f_4 = 1;
			break;
		
		case 230:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("lts_rank_cap");
			uParam1->f_4 = 1;
			break;
		
		case 231:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("lts_rank_divider");
			uParam1->f_4 = 1;
			break;
		
		case 232:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("lts_end_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 233:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("race_rp_time_period_modifier_1");
			uParam1->f_4 = 1;
			break;
		
		case 234:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("race_percentage_rp_reward_modifier_1");
			uParam1->f_4 = 1;
			break;
		
		case 235:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("race_rp_time_period_modifier_2");
			uParam1->f_4 = 1;
			break;
		
		case 236:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("race_percentage_rp_reward_modifier_2");
			uParam1->f_4 = 1;
			break;
		
		case 237:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("race_rp_time_period_modifier_3");
			uParam1->f_4 = 1;
			break;
		
		case 238:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("race_percentage_rp_reward_modifier_3");
			uParam1->f_4 = 1;
			break;
		
		case 239:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("race_rp_time_period_modifier_4");
			uParam1->f_4 = 1;
			break;
		
		case 240:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("race_percentage_rp_reward_modifier_4");
			uParam1->f_4 = 1;
			break;
		
		case 241:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("dm_rp_time_period_modifier_1");
			uParam1->f_4 = 1;
			break;
		
		case 242:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("dm_percentage_rp_reward_modifier_1");
			uParam1->f_4 = 1;
			break;
		
		case 243:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("dm_rp_time_period_modifier_2");
			uParam1->f_4 = 1;
			break;
		
		case 244:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("dm_percentage_rp_reward_modifier_2");
			uParam1->f_4 = 1;
			break;
		
		case 245:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("dm_rp_time_period_modifier_3");
			uParam1->f_4 = 1;
			break;
		
		case 246:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("dm_percentage_rp_reward_modifier_3");
			uParam1->f_4 = 1;
			break;
		
		case 247:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("dm_rp_time_period_modifier_4");
			uParam1->f_4 = 1;
			break;
		
		case 248:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("dm_percentage_rp_reward_modifier_4");
			uParam1->f_4 = 1;
			break;
		
		case 249:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("lts_rp_time_period_modifier_1");
			uParam1->f_4 = 1;
			break;
		
		case 250:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("lts_percentage_rp_reward_modifier_1");
			uParam1->f_4 = 1;
			break;
		
		case 251:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("lts_rp_time_period_modifier_2");
			uParam1->f_4 = 1;
			break;
		
		case 252:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("lts_percentage_rp_reward_modifier_2");
			uParam1->f_4 = 1;
			break;
		
		case 253:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("lts_rp_time_period_modifier_3");
			uParam1->f_4 = 1;
			break;
		
		case 254:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("lts_percentage_rp_reward_modifier_3");
			uParam1->f_4 = 1;
			break;
		
		case 255:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("lts_rp_time_period_modifier_4");
			uParam1->f_4 = 1;
			break;
		
		case 256:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("lts_percentage_rp_reward_modifier_4");
			uParam1->f_4 = 1;
			break;
		
		case 257:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("parachuting_rp_time_period_modifier_1");
			uParam1->f_4 = 1;
			break;
		
		case 258:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("parachuting_percentage_rp_reward_modifier_1");
			uParam1->f_4 = 1;
			break;
		
		case 259:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("parachuting_rp_time_period_modifier_2");
			uParam1->f_4 = 1;
			break;
		
		case 260:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("parachuting_percentage_rp_reward_modifier_2");
			uParam1->f_4 = 1;
			break;
		
		case 261:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("parachuting_rp_time_period_modifier_3");
			uParam1->f_4 = 1;
			break;
		
		case 262:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("parachuting_percentage_rp_reward_modifier_3");
			uParam1->f_4 = 1;
			break;
		
		case 263:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("parachuting_rp_time_period_modifier_4");
			uParam1->f_4 = 1;
			break;
		
		case 264:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("parachuting_percentage_rp_reward_modifier_4");
			uParam1->f_4 = 1;
			break;
		
		case 265:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("timescale_race_minutes_under_1");
			uParam1->f_4 = 1;
			break;
		
		case 266:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("timescale_race_under_1min_cash_mod_percent");
			uParam1->f_4 = 1;
			break;
		
		case 267:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("timescale_race_minutes_under_2");
			uParam1->f_4 = 1;
			break;
		
		case 268:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("timescale_race_under_2min_cash_mod_percent");
			uParam1->f_4 = 1;
			break;
		
		case 269:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("timescale_race_minutes_under_3");
			uParam1->f_4 = 1;
			break;
		
		case 270:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("timescale_race_under_3min_cash_mod_percent");
			uParam1->f_4 = 1;
			break;
		
		case 271:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("timescale_race_minutes_under_4");
			uParam1->f_4 = 1;
			break;
		
		case 272:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("timescale_race_under_4min_cash_mod_percent");
			uParam1->f_4 = 1;
			break;
		
		case 273:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("timescale_dm_minutes_under_1");
			uParam1->f_4 = 1;
			break;
		
		case 274:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("timescale_dm_under_1min_cash_mod_percent");
			uParam1->f_4 = 1;
			break;
		
		case 275:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("timescale_dm_minutes_under_2");
			uParam1->f_4 = 1;
			break;
		
		case 276:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("timescale_dm_under_2min_cash_mod_percent");
			uParam1->f_4 = 1;
			break;
		
		case 277:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("timescale_dm_minutes_under_3");
			uParam1->f_4 = 1;
			break;
		
		case 278:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("timescale_dm_under_3min_cash_mod_percent");
			uParam1->f_4 = 1;
			break;
		
		case 279:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("timescale_dm_minutes_under_4");
			uParam1->f_4 = 1;
			break;
		
		case 280:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("timescale_dm_under_4min_cash_mod_percent");
			uParam1->f_4 = 1;
			break;
		
		case 281:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("lts_time_period_cash_reward_modifier_1");
			uParam1->f_4 = 1;
			break;
		
		case 282:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("lts_percentage_cash_reward_modifier_1");
			uParam1->f_4 = 1;
			break;
		
		case 283:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("lts_time_period_cash_reward_modifier_2");
			uParam1->f_4 = 1;
			break;
		
		case 284:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("lts_percentage_cash_reward_modifier_2");
			uParam1->f_4 = 1;
			break;
		
		case 285:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("lts_time_period_cash_reward_modifier_3");
			uParam1->f_4 = 1;
			break;
		
		case 286:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("lts_percentage_cash_reward_modifier_3");
			uParam1->f_4 = 1;
			break;
		
		case 287:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("lts_time_period_cash_reward_modifier_4");
			uParam1->f_4 = 1;
			break;
		
		case 288:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("lts_percentage_cash_reward_modifier_4");
			uParam1->f_4 = 1;
			break;
		
		case 289:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("parachuting_time_period_cash_reward_modifier_1");
			uParam1->f_4 = 1;
			break;
		
		case 290:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("parachuting_percentage_cash_reward_modifier_1");
			uParam1->f_4 = 1;
			break;
		
		case 291:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("parachuting_time_period_cash_reward_modifier_2");
			uParam1->f_4 = 1;
			break;
		
		case 292:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("parachuting_percentage_cash_reward_modifier_2");
			uParam1->f_4 = 1;
			break;
		
		case 293:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("parachuting_time_period_cash_reward_modifier_3");
			uParam1->f_4 = 1;
			break;
		
		case 294:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("parachuting_percentage_cash_reward_modifier_3");
			uParam1->f_4 = 1;
			break;
		
		case 295:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("parachuting_time_period_cash_reward_modifier_4");
			uParam1->f_4 = 1;
			break;
		
		case 296:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("parachuting_percentage_cash_reward_modifier_4");
			uParam1->f_4 = 1;
			break;
		
		case 297:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("rp_reward_per_like");
			uParam1->f_4 = 1;
			break;
		
		case 299:
			*uParam1 = 1000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("max_cash_wager_for_head_to_head");
			uParam1->f_4 = 1;
			break;
		
		case 298:
			*uParam1 = 1f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("elo_banding_spacing");
			uParam1->f_4 = 1;
			break;
		
		case 300:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("max_cash_wager_for_crew_challenges");
			uParam1->f_4 = 1;
			break;
		
		case 301:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("rp_reward_like_cap");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 25:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("high_selling_vehicles_max_value_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 26:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = -723379143;
			uParam1->f_4 = 1;
			break;
		
		case 303:
			*uParam1 = 45f;
			uParam1->f_1 = 55f;
			uParam1->f_2 = 45;
			uParam1->f_3 = 55;
			uParam1->f_5 = joaat("cheat_threshold");
			uParam1->f_4 = 1;
			break;
		
		case 304:
			*uParam1 = 30f;
			uParam1->f_1 = 49f;
			uParam1->f_2 = 30;
			uParam1->f_3 = 49;
			uParam1->f_5 = joaat("cheat_threshold_notcheater");
			uParam1->f_4 = 1;
			break;
		
		case 305:
			*uParam1 = 15f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 15;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("cheat_reset_minutes");
			uParam1->f_4 = 1;
			break;
		
		case 306:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("amount_to_forgive_by");
			uParam1->f_4 = 1;
			break;
		
		case 307:
			*uParam1 = 0f;
			uParam1->f_1 = 6000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6000;
			uParam1->f_5 = joaat("good_boy_cash_award");
			uParam1->f_4 = 1;
			break;
		
		case 308:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("amount_to_forgive_by_helpful");
			uParam1->f_4 = 1;
			break;
		
		case 309:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("amount_to_forgive_by_friendly");
			uParam1->f_4 = 1;
			break;
		
		case 310:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("amount_to_punish_by_griefing");
			uParam1->f_4 = 1;
			break;
		
		case 311:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("amount_to_punish_by_offensive_language");
			uParam1->f_4 = 1;
			break;
		
		case 312:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("amount_to_destoryed_pvehicle");
			uParam1->f_4 = 1;
			break;
		
		case 313:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("amount_to_voted_out");
			uParam1->f_4 = 1;
			break;
		
		case 314:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("amount_to_punish_by_vc_annoy");
			uParam1->f_4 = 1;
			break;
		
		case 315:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("amount_to_punish_by_offensive_tag");
			uParam1->f_4 = 1;
			break;
		
		case 316:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("amount_to_punish_by_offensive_ugc");
			uParam1->f_4 = 1;
			break;
		
		case 317:
			*uParam1 = 45f;
			uParam1->f_1 = 55f;
			uParam1->f_2 = 45;
			uParam1->f_3 = 55;
			uParam1->f_5 = joaat("badsport_threshold");
			uParam1->f_4 = 1;
			break;
		
		case 318:
			*uParam1 = 30f;
			uParam1->f_1 = 49f;
			uParam1->f_2 = 30;
			uParam1->f_3 = 49;
			uParam1->f_5 = joaat("badsport_threshold_notcheater");
			uParam1->f_4 = 1;
			break;
		
		case 319:
			*uParam1 = 15f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 15;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("badsport_reset_minutes");
			uParam1->f_4 = 1;
			break;
		
		case 320:
			*uParam1 = 0f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = joaat("badsport_numdays_1st_offence");
			uParam1->f_4 = 1;
			break;
		
		case 321:
			*uParam1 = 0f;
			uParam1->f_1 = 8f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 8;
			uParam1->f_5 = joaat("badsport_numdays_2nd_offence");
			uParam1->f_4 = 1;
			break;
		
		case 322:
			*uParam1 = 0f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 16;
			uParam1->f_5 = joaat("badsport_numdays_3rd_offence");
			uParam1->f_4 = 1;
			break;
		
		case 323:
			*uParam1 = 0f;
			uParam1->f_1 = 32f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 32;
			uParam1->f_5 = joaat("badsport_numdays_4th_offence");
			uParam1->f_4 = 1;
			break;
		
		case 324:
			*uParam1 = 0f;
			uParam1->f_1 = 64f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 64;
			uParam1->f_5 = joaat("badsport_numdays_5th_offence");
			uParam1->f_4 = 1;
			break;
		
		case 325:
			*uParam1 = 0f;
			uParam1->f_1 = 64f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 64;
			uParam1->f_5 = joaat("badsport_numdays_6th_offence");
			uParam1->f_4 = 1;
			break;
		
		case 326:
			*uParam1 = 0f;
			uParam1->f_1 = 128f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 128;
			uParam1->f_5 = joaat("badsport_numdays_7th_offence");
			uParam1->f_4 = 1;
			break;
		
		case 327:
			*uParam1 = 0f;
			uParam1->f_1 = 256f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 256;
			uParam1->f_5 = joaat("badsport_numdays_8th_offence");
			uParam1->f_4 = 1;
			break;
		
		case 328:
			*uParam1 = 0f;
			uParam1->f_1 = 512f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 512;
			uParam1->f_5 = joaat("badsport_numdays_9th_offence");
			uParam1->f_4 = 1;
			break;
		
		case 329:
			*uParam1 = 0f;
			uParam1->f_1 = 1024f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1024;
			uParam1->f_5 = joaat("badsport_numdays_10th_offence");
			uParam1->f_4 = 1;
			break;
		
		case 330:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("amount_to_forgive_badsport_by");
			uParam1->f_4 = 1;
			break;
		
		case 331:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("kick_votes_needed_ratio");
			uParam1->f_4 = 1;
			break;
		
		case 332:
			*uParam1 = 400f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 400;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -1307500572;
			uParam1->f_4 = 1;
			break;
		
		case 333:
			*uParam1 = 70f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 70;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("shop_discount_percent");
			uParam1->f_4 = 1;
			break;
		
		case 334:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("shop_goodboy_discount_percent");
			uParam1->f_4 = 1;
			break;
		
		case 335:
			*uParam1 = 200f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = 200;
			uParam1->f_3 = 300;
			uParam1->f_5 = 1882659457;
			uParam1->f_4 = 1;
			break;
		
		case 336:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("commendreport_max_strength");
			uParam1->f_4 = 1;
			break;
		
		case 337:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("max_number_stolen_vehicles_sold_daily");
			uParam1->f_4 = 1;
			break;
		
		case 338:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("survival_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 339:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("rockstar_verified_rp_bonus");
			uParam1->f_4 = 1;
			break;
		
		case 340:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("idle_dm_bounty");
			uParam1->f_4 = 1;
			break;
		
		case 342:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("selling_stolen_personal_vehicle_cap");
			uParam1->f_4 = 1;
			break;
		
		case 341:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("selling_purchased_personal_vehicle_cap");
			uParam1->f_4 = 1;
			break;
		
		case 343:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("selling_stolen_vehicle_cap");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 344:
			*uParam1 = 6000f;
			uParam1->f_1 = 15700f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15700;
			uParam1->f_5 = joaat("assault_smg_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 345:
			*uParam1 = 6000f;
			uParam1->f_1 = 16300f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 16300;
			uParam1->f_5 = joaat("carbine_rifle_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 346:
			*uParam1 = 7000f;
			uParam1->f_1 = 17800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 17800;
			uParam1->f_5 = joaat("advanced_rifle_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 347:
			*uParam1 = 7000f;
			uParam1->f_1 = 16900f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 16900;
			uParam1->f_5 = joaat("mg_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 348:
			*uParam1 = 7000f;
			uParam1->f_1 = 18500f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18500;
			uParam1->f_5 = joaat("combat_mg_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 349:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("assault_shotgun_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 350:
			*uParam1 = 19000f;
			uParam1->f_1 = 47700f;
			uParam1->f_2 = 19000;
			uParam1->f_3 = 47700;
			uParam1->f_5 = joaat("heavy_sniper_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 351:
			*uParam1 = 10000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("sniper_rifle_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 352:
			*uParam1 = 16000f;
			uParam1->f_1 = 40500f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40500;
			uParam1->f_5 = joaat("grenade_launcher_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 353:
			*uParam1 = 13000f;
			uParam1->f_1 = 32800f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 32800;
			uParam1->f_5 = joaat("rpg_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 354:
			*uParam1 = 25000f;
			uParam1->f_1 = 62500f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 62500;
			uParam1->f_5 = joaat("minigun_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 355:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_combatmg_clip_02_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 356:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_pistol_supp_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 357:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_combatpistol_supp_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 358:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_appistol_supp_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 359:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_microsmg_supp_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 360:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_microsmg_scope_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 361:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_smg_supp_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 362:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_smg_scope_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 363:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_asssmg_supp_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 364:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_asssmg_scope_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 365:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_assrifle_supp_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 366:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_assrifle_scope_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 367:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_carbinerrifle_supp_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 368:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_carbinerrifle_scope_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 369:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_advancedrifle_supp_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 370:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_advancedrifle_scope_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 371:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_machinegun_scope_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 372:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_combatmg_scope_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 373:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_pumpshotgun_supp_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 374:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_asshotgun_supp_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 375:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_sniper_scope2_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 376:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_sniper_supp_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 377:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_heavysniper_scope2_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 378:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("weaponaddon_grenadelauncher_scope_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 379:
			*uParam1 = 198000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 198000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("property_high_apt_1_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 380:
			*uParam1 = 185000f;
			uParam1->f_1 = 466300f;
			uParam1->f_2 = 185000;
			uParam1->f_3 = 466300;
			uParam1->f_5 = joaat("property_high_apt_2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 381:
			*uParam1 = 194000f;
			uParam1->f_1 = 488800f;
			uParam1->f_2 = 194000;
			uParam1->f_3 = 488800;
			uParam1->f_5 = joaat("property_high_apt_3_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 382:
			*uParam1 = 189000f;
			uParam1->f_1 = 477500f;
			uParam1->f_2 = 189000;
			uParam1->f_3 = 477500;
			uParam1->f_5 = joaat("property_high_apt_4_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 383:
			*uParam1 = 107000f;
			uParam1->f_1 = 271300f;
			uParam1->f_2 = 107000;
			uParam1->f_3 = 271300;
			uParam1->f_5 = joaat("property_high_apt_5_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 384:
			*uParam1 = 110000f;
			uParam1->f_1 = 278800f;
			uParam1->f_2 = 110000;
			uParam1->f_3 = 278800;
			uParam1->f_5 = joaat("property_high_apt_6_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 385:
			*uParam1 = 101000f;
			uParam1->f_1 = 256300f;
			uParam1->f_2 = 101000;
			uParam1->f_3 = 256300;
			uParam1->f_5 = joaat("property_high_apt_7_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 386:
			*uParam1 = 99000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 99000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("property_high_apt_8_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 387:
			*uParam1 = 166000f;
			uParam1->f_1 = 418800f;
			uParam1->f_2 = 166000;
			uParam1->f_3 = 418800;
			uParam1->f_5 = joaat("property_high_apt_9_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 388:
			*uParam1 = 158000f;
			uParam1->f_1 = 398800f;
			uParam1->f_2 = 158000;
			uParam1->f_3 = 398800;
			uParam1->f_5 = joaat("property_high_apt_10_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 389:
			*uParam1 = 150000f;
			uParam1->f_1 = 380000f;
			uParam1->f_2 = 150000;
			uParam1->f_3 = 380000;
			uParam1->f_5 = joaat("property_high_apt_11_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 390:
			*uParam1 = 116000f;
			uParam1->f_1 = 293800f;
			uParam1->f_2 = 116000;
			uParam1->f_3 = 293800;
			uParam1->f_5 = joaat("property_high_apt_12_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 391:
			*uParam1 = 122000f;
			uParam1->f_1 = 308800f;
			uParam1->f_2 = 122000;
			uParam1->f_3 = 308800;
			uParam1->f_5 = joaat("property_high_apt_13_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 392:
			*uParam1 = 119000f;
			uParam1->f_1 = 301300f;
			uParam1->f_2 = 119000;
			uParam1->f_3 = 301300;
			uParam1->f_5 = joaat("property_high_apt_14_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 393:
			*uParam1 = 125000f;
			uParam1->f_1 = 316300f;
			uParam1->f_2 = 125000;
			uParam1->f_3 = 316300;
			uParam1->f_5 = joaat("property_high_apt_15_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 394:
			*uParam1 = 134000f;
			uParam1->f_1 = 337500f;
			uParam1->f_2 = 134000;
			uParam1->f_3 = 337500;
			uParam1->f_5 = joaat("property_high_apt_16_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 395:
			*uParam1 = 142000f;
			uParam1->f_1 = 357500f;
			uParam1->f_2 = 142000;
			uParam1->f_3 = 357500;
			uParam1->f_5 = joaat("property_high_apt_17_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 396:
			*uParam1 = 64000f;
			uParam1->f_1 = 162500f;
			uParam1->f_2 = 64000;
			uParam1->f_3 = 162500;
			uParam1->f_5 = joaat("property_medium_apt_1_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 397:
			*uParam1 = 63000f;
			uParam1->f_1 = 160000f;
			uParam1->f_2 = 63000;
			uParam1->f_3 = 160000;
			uParam1->f_5 = joaat("property_medium_apt_2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 398:
			*uParam1 = 62000f;
			uParam1->f_1 = 157500f;
			uParam1->f_2 = 62000;
			uParam1->f_3 = 157500;
			uParam1->f_5 = joaat("property_medium_apt_3_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 399:
			*uParam1 = 72000f;
			uParam1->f_1 = 182500f;
			uParam1->f_2 = 72000;
			uParam1->f_3 = 182500;
			uParam1->f_5 = joaat("property_medium_apt_4_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 400:
			*uParam1 = 62000f;
			uParam1->f_1 = 156300f;
			uParam1->f_2 = 62000;
			uParam1->f_3 = 156300;
			uParam1->f_5 = joaat("property_medium_apt_5_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 401:
			*uParam1 = 70000f;
			uParam1->f_1 = 176300f;
			uParam1->f_2 = 70000;
			uParam1->f_3 = 176300;
			uParam1->f_5 = joaat("property_medium_apt_6_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 402:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 74000;
			uParam1->f_3 = 187500;
			uParam1->f_5 = joaat("property_medium_apt_7_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 403:
			*uParam1 = 68000f;
			uParam1->f_1 = 171300f;
			uParam1->f_2 = 68000;
			uParam1->f_3 = 171300;
			uParam1->f_5 = joaat("property_medium_apt_8_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 404:
			*uParam1 = 66000f;
			uParam1->f_1 = 167500f;
			uParam1->f_2 = 66000;
			uParam1->f_3 = 167500;
			uParam1->f_5 = joaat("property_medium_apt_9_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 405:
			*uParam1 = 57000f;
			uParam1->f_1 = 143800f;
			uParam1->f_2 = 57000;
			uParam1->f_3 = 143800;
			uParam1->f_5 = joaat("property_low_apt_1_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 406:
			*uParam1 = 49000f;
			uParam1->f_1 = 123800f;
			uParam1->f_2 = 49000;
			uParam1->f_3 = 123800;
			uParam1->f_5 = joaat("property_low_apt_2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 407:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("property_low_apt_3_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 408:
			*uParam1 = 43000f;
			uParam1->f_1 = 108800f;
			uParam1->f_2 = 43000;
			uParam1->f_3 = 108800;
			uParam1->f_5 = joaat("property_low_apt_4_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 409:
			*uParam1 = 55000f;
			uParam1->f_1 = 140000f;
			uParam1->f_2 = 55000;
			uParam1->f_3 = 140000;
			uParam1->f_5 = joaat("property_low_apt_5_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 410:
			*uParam1 = 52000f;
			uParam1->f_1 = 131300f;
			uParam1->f_2 = 52000;
			uParam1->f_3 = 131300;
			uParam1->f_5 = joaat("property_low_apt_6_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 411:
			*uParam1 = 46000f;
			uParam1->f_1 = 116300f;
			uParam1->f_2 = 46000;
			uParam1->f_3 = 116300;
			uParam1->f_5 = joaat("property_low_apt_7_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 412:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 74000;
			uParam1->f_3 = 187500;
			uParam1->f_5 = joaat("property_garage_east_los_santos_1_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 413:
			*uParam1 = 38000f;
			uParam1->f_1 = 96900f;
			uParam1->f_2 = 38000;
			uParam1->f_3 = 96900;
			uParam1->f_5 = joaat("property_garage_east_los_santos_2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 414:
			*uParam1 = 71000f;
			uParam1->f_1 = 178100f;
			uParam1->f_2 = 71000;
			uParam1->f_3 = 178100;
			uParam1->f_5 = joaat("property_garage_east_los_santos_3_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 415:
			*uParam1 = 67000f;
			uParam1->f_1 = 168800f;
			uParam1->f_2 = 67000;
			uParam1->f_3 = 168800;
			uParam1->f_5 = joaat("property_garage_east_los_santos_4_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 416:
			*uParam1 = 35000f;
			uParam1->f_1 = 87500f;
			uParam1->f_2 = 35000;
			uParam1->f_3 = 87500;
			uParam1->f_5 = joaat("property_garage_east_los_santos_5_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 417:
			*uParam1 = 14750f;
			uParam1->f_1 = 36900f;
			uParam1->f_2 = 14750;
			uParam1->f_3 = 36900;
			uParam1->f_5 = joaat("property_garage_east_los_santos_6_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 418:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("property_garage_east_los_santos_7_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 419:
			*uParam1 = 12000f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12000;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("property_garage_east_los_santos_8_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 420:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("property_garage_south_los_santos_1_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 421:
			*uParam1 = 36000f;
			uParam1->f_1 = 90600f;
			uParam1->f_2 = 36000;
			uParam1->f_3 = 90600;
			uParam1->f_5 = joaat("property_garage_south_los_santos_2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 422:
			*uParam1 = 13000f;
			uParam1->f_1 = 33100f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 33100;
			uParam1->f_5 = joaat("property_garage_new_1_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 423:
			*uParam1 = 13000f;
			uParam1->f_1 = 32500f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 32500;
			uParam1->f_5 = joaat("property_garage_new_2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 424:
			*uParam1 = 13750f;
			uParam1->f_1 = 34400f;
			uParam1->f_2 = 13750;
			uParam1->f_3 = 34400;
			uParam1->f_5 = joaat("property_garage_new_3_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 425:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("property_garage_new_5_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 426:
			*uParam1 = 15750f;
			uParam1->f_1 = 39400f;
			uParam1->f_2 = 15750;
			uParam1->f_3 = 39400;
			uParam1->f_5 = joaat("property_garage_new_6_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 427:
			*uParam1 = 14000f;
			uParam1->f_1 = 36300f;
			uParam1->f_2 = 14000;
			uParam1->f_3 = 36300;
			uParam1->f_5 = joaat("property_garage_new_7_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 428:
			*uParam1 = 31000f;
			uParam1->f_1 = 78100f;
			uParam1->f_2 = 31000;
			uParam1->f_3 = 78100;
			uParam1->f_5 = joaat("property_garage_new_8_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 429:
			*uParam1 = 14000f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 14000;
			uParam1->f_3 = 35000;
			uParam1->f_5 = joaat("property_garage_new_9_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 430:
			*uParam1 = 32000f;
			uParam1->f_1 = 81300f;
			uParam1->f_2 = 32000;
			uParam1->f_3 = 81300;
			uParam1->f_5 = joaat("property_garage_new_14_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 431:
			*uParam1 = 37000f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 37000;
			uParam1->f_3 = 93800;
			uParam1->f_5 = joaat("property_garage_new_16_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 432:
			*uParam1 = 52000f;
			uParam1->f_1 = 131300f;
			uParam1->f_2 = 52000;
			uParam1->f_3 = 131300;
			uParam1->f_5 = joaat("property_garage_new_17_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 433:
			*uParam1 = 33000f;
			uParam1->f_1 = 84400f;
			uParam1->f_2 = 33000;
			uParam1->f_3 = 84400;
			uParam1->f_5 = joaat("property_garage_new_18_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 434:
			*uParam1 = 56000f;
			uParam1->f_1 = 140600f;
			uParam1->f_2 = 56000;
			uParam1->f_3 = 140600;
			uParam1->f_5 = joaat("property_garage_new_19_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 435:
			*uParam1 = 59000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 59000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("property_garage_new_20_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 436:
			*uParam1 = 17000f;
			uParam1->f_1 = 42500f;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 42500;
			uParam1->f_5 = joaat("property_garage_new_21_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 437:
			*uParam1 = 16750f;
			uParam1->f_1 = 41900f;
			uParam1->f_2 = 16750;
			uParam1->f_3 = 41900;
			uParam1->f_5 = joaat("property_garage_new_22_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 438:
			*uParam1 = 17000f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("property_garage_new_23_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 439:
			*uParam1 = 495000f;
			uParam1->f_1 = 1250000f;
			uParam1->f_2 = 495000;
			uParam1->f_3 = 1250000;
			uParam1->f_5 = joaat("adder_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 440:
			*uParam1 = 272000f;
			uParam1->f_1 = 687500f;
			uParam1->f_2 = 272000;
			uParam1->f_3 = 687500;
			uParam1->f_5 = joaat("airbus_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 441:
			*uParam1 = 903000f;
			uParam1->f_1 = 2281300f;
			uParam1->f_2 = 903000;
			uParam1->f_3 = 2281300;
			uParam1->f_5 = joaat("annihilator_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 442:
			*uParam1 = 45000f;
			uParam1->f_1 = 112500f;
			uParam1->f_2 = 45000;
			uParam1->f_3 = 112500;
			uParam1->f_5 = joaat("baller2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 443:
			*uParam1 = 223000f;
			uParam1->f_1 = 562500f;
			uParam1->f_2 = 223000;
			uParam1->f_3 = 562500;
			uParam1->f_5 = joaat("barracks_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 444:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("bati_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 445:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("bati2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 446:
			*uParam1 = 8000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 8000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("bfinjection_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 447:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 37500;
			uParam1->f_5 = joaat("bison_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 448:
			*uParam1 = 77000f;
			uParam1->f_1 = 193800f;
			uParam1->f_2 = 77000;
			uParam1->f_3 = 193800;
			uParam1->f_5 = joaat("bullet_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 449:
			*uParam1 = 248000f;
			uParam1->f_1 = 625000f;
			uParam1->f_2 = 248000;
			uParam1->f_3 = 625000;
			uParam1->f_5 = joaat("bus_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 450:
			*uParam1 = 866000f;
			uParam1->f_1 = 2187500f;
			uParam1->f_2 = 866000;
			uParam1->f_3 = 2187500;
			uParam1->f_5 = joaat("buzzard_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 451:
			*uParam1 = 97000f;
			uParam1->f_1 = 243800f;
			uParam1->f_2 = 97000;
			uParam1->f_3 = 243800;
			uParam1->f_5 = joaat("carbonizzare_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 452:
			*uParam1 = 35000f;
			uParam1->f_1 = 87500f;
			uParam1->f_2 = 35000;
			uParam1->f_3 = 87500;
			uParam1->f_5 = joaat("cavalcade_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 453:
			*uParam1 = 322000f;
			uParam1->f_1 = 812500f;
			uParam1->f_2 = 322000;
			uParam1->f_3 = 812500;
			uParam1->f_5 = joaat("cheetah_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 454:
			*uParam1 = 260000f;
			uParam1->f_1 = 656300f;
			uParam1->f_2 = 260000;
			uParam1->f_3 = 656300;
			uParam1->f_5 = joaat("coach_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 455:
			*uParam1 = 92000f;
			uParam1->f_1 = 231300f;
			uParam1->f_2 = 92000;
			uParam1->f_3 = 231300;
			uParam1->f_5 = joaat("cogcabrio_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 456:
			*uParam1 = 50000f;
			uParam1->f_1 = 125000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 125000;
			uParam1->f_5 = joaat("comet2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 457:
			*uParam1 = 68000f;
			uParam1->f_1 = 172500f;
			uParam1->f_2 = 68000;
			uParam1->f_3 = 172500;
			uParam1->f_5 = joaat("coquette_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 458:
			*uParam1 = 111000f;
			uParam1->f_1 = 281300f;
			uParam1->f_2 = 111000;
			uParam1->f_3 = 281300;
			uParam1->f_5 = joaat("crusader_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 459:
			*uParam1 = 119000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 119000;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("cuban800_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 460:
			*uParam1 = 12000f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12000;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("dilettante_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 461:
			*uParam1 = 6000f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("double_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 462:
			*uParam1 = 495000f;
			uParam1->f_1 = 1250000f;
			uParam1->f_2 = 495000;
			uParam1->f_3 = 1250000;
			uParam1->f_5 = joaat("dump_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 463:
			*uParam1 = 136000f;
			uParam1->f_1 = 343800f;
			uParam1->f_2 = 136000;
			uParam1->f_3 = 343800;
			uParam1->f_5 = joaat("duster_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 464:
			*uParam1 = 394000f;
			uParam1->f_1 = 993800f;
			uParam1->f_2 = 394000;
			uParam1->f_3 = 993800;
			uParam1->f_5 = joaat("entityxf_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 465:
			*uParam1 = 101000f;
			uParam1->f_1 = 256300f;
			uParam1->f_2 = 101000;
			uParam1->f_3 = 256300;
			uParam1->f_5 = joaat("exemplar_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 466:
			*uParam1 = 45000f;
			uParam1->f_1 = 112500f;
			uParam1->f_2 = 45000;
			uParam1->f_3 = 112500;
			uParam1->f_5 = joaat("felon_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 467:
			*uParam1 = 47000f;
			uParam1->f_1 = 118800f;
			uParam1->f_2 = 47000;
			uParam1->f_3 = 118800;
			uParam1->f_5 = joaat("felon2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 468:
			*uParam1 = 72000f;
			uParam1->f_1 = 181300f;
			uParam1->f_2 = 72000;
			uParam1->f_3 = 181300;
			uParam1->f_5 = joaat("feltzer2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 469:
			*uParam1 = 644000f;
			uParam1->f_1 = 1625000f;
			uParam1->f_2 = 644000;
			uParam1->f_3 = 1625000;
			uParam1->f_5 = joaat("frogger_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 470:
			*uParam1 = 12000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 12000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("fugitive_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 471:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("gauntlet_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 472:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("hexer_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 473:
			*uParam1 = 218000f;
			uParam1->f_1 = 550000f;
			uParam1->f_2 = 218000;
			uParam1->f_3 = 550000;
			uParam1->f_5 = joaat("infernus_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 474:
			*uParam1 = 9000f;
			uParam1->f_1 = 22500f;
			uParam1->f_2 = 9000;
			uParam1->f_3 = 22500;
			uParam1->f_5 = joaat("issi2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 475:
			*uParam1 = 173000f;
			uParam1->f_1 = 437500f;
			uParam1->f_2 = 173000;
			uParam1->f_3 = 437500;
			uParam1->f_5 = joaat("jb700_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 476:
			*uParam1 = 148000f;
			uParam1->f_1 = 373800f;
			uParam1->f_2 = 148000;
			uParam1->f_3 = 373800;
			uParam1->f_5 = joaat("jetmax_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 477:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("journey_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 478:
			*uParam1 = 804000f;
			uParam1->f_1 = 2031300f;
			uParam1->f_2 = 804000;
			uParam1->f_3 = 2031300;
			uParam1->f_5 = joaat("luxor_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 479:
			*uParam1 = 149000f;
			uParam1->f_1 = 375000f;
			uParam1->f_2 = 149000;
			uParam1->f_3 = 375000;
			uParam1->f_5 = joaat("mammatus_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 480:
			*uParam1 = 205000f;
			uParam1->f_1 = 517500f;
			uParam1->f_2 = 205000;
			uParam1->f_3 = 517500;
			uParam1->f_5 = joaat("marquis_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 481:
			*uParam1 = 386000f;
			uParam1->f_1 = 975000f;
			uParam1->f_2 = 386000;
			uParam1->f_3 = 975000;
			uParam1->f_5 = joaat("maverick_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 482:
			*uParam1 = 243000f;
			uParam1->f_1 = 612500f;
			uParam1->f_2 = 243000;
			uParam1->f_3 = 612500;
			uParam1->f_5 = joaat("monroe_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 483:
			*uParam1 = 13000f;
			uParam1->f_1 = 33800f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 33800;
			uParam1->f_5 = joaat("mule_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 484:
			*uParam1 = 59000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 59000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("ninef_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 485:
			*uParam1 = 64000f;
			uParam1->f_1 = 162500f;
			uParam1->f_2 = 64000;
			uParam1->f_3 = 162500;
			uParam1->f_5 = joaat("ninef2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 486:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("oracle2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 487:
			*uParam1 = 69000f;
			uParam1->f_1 = 175000f;
			uParam1->f_2 = 69000;
			uParam1->f_3 = 175000;
			uParam1->f_5 = joaat("rapidgt_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 488:
			*uParam1 = 65000f;
			uParam1->f_1 = 165000f;
			uParam1->f_2 = 65000;
			uParam1->f_3 = 165000;
			uParam1->f_5 = joaat("rapidgt2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 489:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 37500;
			uParam1->f_5 = joaat("rentalbus_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 490:
			*uParam1 = 743000f;
			uParam1->f_1 = 1875000f;
			uParam1->f_2 = 743000;
			uParam1->f_3 = 1875000;
			uParam1->f_5 = joaat("rhino_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 491:
			*uParam1 = 42000f;
			uParam1->f_1 = 106300f;
			uParam1->f_2 = 42000;
			uParam1->f_3 = 106300;
			uParam1->f_5 = joaat("rocoto_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 492:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("ruffian_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 493:
			*uParam1 = 22000f;
			uParam1->f_1 = 56300f;
			uParam1->f_2 = 22000;
			uParam1->f_3 = 56300;
			uParam1->f_5 = joaat("sandking_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 494:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("schwarzer_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 495:
			*uParam1 = 8000f;
			uParam1->f_1 = 21100f;
			uParam1->f_2 = 8000;
			uParam1->f_3 = 21100;
			uParam1->f_5 = joaat("seashark_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 496:
			*uParam1 = 569000f;
			uParam1->f_1 = 1437500f;
			uParam1->f_2 = 569000;
			uParam1->f_3 = 1437500;
			uParam1->f_5 = joaat("shamal_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 497:
			*uParam1 = 97000f;
			uParam1->f_1 = 245800f;
			uParam1->f_2 = 97000;
			uParam1->f_3 = 245800;
			uParam1->f_5 = joaat("squalo_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 498:
			*uParam1 = 421000f;
			uParam1->f_1 = 1062500f;
			uParam1->f_2 = 421000;
			uParam1->f_3 = 1062500;
			uParam1->f_5 = joaat("stinger_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 499:
			*uParam1 = 433000f;
			uParam1->f_1 = 1093800f;
			uParam1->f_2 = 433000;
			uParam1->f_3 = 1093800;
			uParam1->f_5 = joaat("stingergt_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 500:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 37500;
			uParam1->f_5 = joaat("stretch_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 501:
			*uParam1 = 124000f;
			uParam1->f_1 = 312500f;
			uParam1->f_2 = 124000;
			uParam1->f_3 = 312500;
			uParam1->f_5 = joaat("stunt_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 502:
			*uParam1 = 12000f;
			uParam1->f_1 = 31500f;
			uParam1->f_2 = 12000;
			uParam1->f_3 = 31500;
			uParam1->f_5 = joaat("suntrap_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 503:
			*uParam1 = 124000f;
			uParam1->f_1 = 312500f;
			uParam1->f_2 = 124000;
			uParam1->f_3 = 312500;
			uParam1->f_5 = joaat("superd_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 504:
			*uParam1 = 54000f;
			uParam1->f_1 = 137500f;
			uParam1->f_2 = 54000;
			uParam1->f_3 = 137500;
			uParam1->f_5 = joaat("surano_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 505:
			*uParam1 = 990000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 990000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("titan_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 506:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("tribike_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 507:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("tribike2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 508:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("tribike3_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 509:
			*uParam1 = 11000f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 11000;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("tropic_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 510:
			*uParam1 = 119000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 119000;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("vacca_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 511:
			*uParam1 = 223000f;
			uParam1->f_1 = 562500f;
			uParam1->f_2 = 223000;
			uParam1->f_3 = 562500;
			uParam1->f_5 = joaat("velum_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 512:
			*uParam1 = 10000f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("vigero_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 513:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 74000;
			uParam1->f_3 = 187500;
			uParam1->f_5 = joaat("voltic_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 514:
			*uParam1 = 30000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 30000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("zion_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 515:
			*uParam1 = 32000f;
			uParam1->f_1 = 81300f;
			uParam1->f_2 = 32000;
			uParam1->f_3 = 81300;
			uParam1->f_5 = joaat("zion2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 516:
			*uParam1 = 470000f;
			uParam1->f_1 = 1187500f;
			uParam1->f_2 = 470000;
			uParam1->f_3 = 1187500;
			uParam1->f_5 = joaat("ztype_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 517:
			*uParam1 = 6000f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("asea_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 518:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l5_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 519:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l6_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 520:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l7_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 521:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l8_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 522:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l9_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 523:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_60_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 524:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_80_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 525:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_100_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 526:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_bullet_proof_tyres_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 527:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_orange_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 528:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_red_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 529:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_yellow_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 530:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_blue_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 531:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_turbo_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 532:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_primarycolorcrew_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 533:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_secondarycolorcrew_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 534:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_crewemblem_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 535:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_wheelcolours_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 536:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_crewsmoke_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 537:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_wheelshighend_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 538:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_wheelssport_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 539:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_wheelslowrider_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 540:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_wheelssuv_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 541:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_wheelsmuscle_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 542:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_wheelstuner_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 543:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_wheelsoffroad_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 544:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_wheelsbike_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 545:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_60_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 546:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_80_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 547:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_100_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 548:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_brakes_l2_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 549:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_brakes_l3_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 550:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_brakes_l4_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 551:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_engine_l5_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 552:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l5_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 553:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l6_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 554:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l7_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 555:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l8_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 556:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l9_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 557:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_primarycolorcrew_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 558:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_secondarycolorcrew_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 559:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_crewemblem_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 560:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_gear_box_l2_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 561:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_gear_box_l3_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 562:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_gear_box_l4_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 563:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_turbo_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 564:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_wheelcolours_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 565:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_bullet_proof_tyres_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 566:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_blue_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 567:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_yellow_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 568:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_orange_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 569:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_red_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 570:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_crewsmoke_expenditure_tunable_suv");
			uParam1->f_4 = 1;
			break;
		
		case 571:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_40_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 572:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_60_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 573:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_80_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 574:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_100_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 575:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_brakes_l2_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 576:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_brakes_l3_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 577:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_brakes_l4_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 578:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_engine_l4_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 579:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_engine_l5_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 580:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l5_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 581:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l6_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 582:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l7_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 583:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l8_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 584:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l9_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 585:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_primarycolorcrew_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 586:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_secondarycolorcrew_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 587:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_crewemblem_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 588:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_gear_box_l2_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 589:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_gear_box_l3_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 590:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_gear_box_l4_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 591:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_turbo_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 592:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_wheelcolours_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 593:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_bullet_proof_tyres_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 594:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_blue_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 595:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_yellow_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 596:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_orange_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 597:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_red_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 598:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_crewsmoke_expenditure_tunable_sport");
			uParam1->f_4 = 1;
			break;
		
		case 599:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_40_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 600:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_60_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 601:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_80_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 602:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_100_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 603:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_brakes_l2_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 604:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_brakes_l3_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 605:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_brakes_l4_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 606:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_f_bumper_l4_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 607:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_f_bumper_l5_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 608:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_f_bumper_l6_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 609:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_f_bumper_l7_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 610:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_r_bumper_l4_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 611:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_r_bumper_l5_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 612:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_engine_l3_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 613:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_engine_l4_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 614:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_engine_l5_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 615:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_bonnet_l6_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 616:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_bonnet_l7_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 617:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l5_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 618:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l6_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 619:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l7_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 620:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l8_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 621:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l9_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 622:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_primarycolorcrew_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 623:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_secondarycolorcrew_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 624:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_crewemblem_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 625:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_skirts_l4_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 626:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_skirts_l5_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 627:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_spoiler_l2_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 628:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_spoiler_l3_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 629:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_spoiler_l4_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 630:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_spoiler_l5_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 631:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_gear_box_l2_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 632:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_gear_box_l3_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 633:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_gear_box_l4_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 634:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_turbo_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 635:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_wheelcolours_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 636:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_bullet_proof_tyres_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 637:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_blue_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 638:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_yellow_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 639:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_orange_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 640:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_red_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 641:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_crewsmoke_expenditure_tunable_special");
			uParam1->f_4 = 1;
			break;
		
		case 642:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_80_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 643:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_body_armour_100_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 644:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l5_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 645:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l6_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 646:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l7_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 647:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l8_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 648:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_horn_l9_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 649:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_primarycolorcrew_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 650:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_secondarycolorcrew_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 651:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_crewemblem_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 652:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_turbo_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 653:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_wheelcolours_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 654:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_bullet_proof_tyres_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 655:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_blue_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 656:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_yellow_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 657:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_orange_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 658:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_tyre_smoke_red_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 659:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("carmod_unlock_crewsmoke_expenditure_tunable_bike");
			uParam1->f_4 = 1;
			break;
		
		case 660:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("discount_male_masks_bone_skull");
			uParam1->f_4 = 1;
			break;
		
		case 661:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("discount_male_masks_pogo");
			uParam1->f_4 = 1;
			break;
		
		case 662:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("discount_male_masks_green_ape");
			uParam1->f_4 = 1;
			break;
		
		case 663:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("discount_male_masks_pink_ape");
			uParam1->f_4 = 1;
			break;
		
		case 664:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("discount_male_masks_red_monster");
			uParam1->f_4 = 1;
			break;
		
		case 665:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("discount_female_masks_bone_skull");
			uParam1->f_4 = 1;
			break;
		
		case 666:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("discount_female_masks_pogo");
			uParam1->f_4 = 1;
			break;
		
		case 667:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("discount_female_masks_green_ape");
			uParam1->f_4 = 1;
			break;
		
		case 668:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("discount_female_masks_pink_ape");
			uParam1->f_4 = 1;
			break;
		
		case 669:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("discount_female_masks_red_monster");
			uParam1->f_4 = 1;
			break;
		
		case 670:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("makeup_unlocks_serpentine_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 671:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("makeup_unlocks_trappedinabox_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 672:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("makeup_unlocks_clowning_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 673:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_head_banger_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 674:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_hustler_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 675:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_win_ever_mode_once_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 676:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_hold_up_shops_4_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 677:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_04_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 678:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_05_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 679:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_06_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 680:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_13_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 681:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_16_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 682:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_17_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 683:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_19_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 684:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_20_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 685:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_25_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 686:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_38_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 687:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("tattoo_mp_fm_46_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 688:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_fm_parasmoke_red_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 689:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_fm_parasmoke_orange_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 690:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_fm_parasmoke_yellow_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 691:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_fm_parasmoke_black_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 692:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_fm_parasmoke_blue_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 693:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_fm_rainbow_parachute_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 694:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_fm_red_parachute_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 695:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_fm_yellowwhiteblue_parachute_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 696:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_fm_whiteredbrown_parachute_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 697:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_fm_bluewhitered_parachute_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 698:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_fm_blue_parachute_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 699:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_fm_black_parachute_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 700:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_fm_brownyellow_parachute_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 701:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_weapon_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 702:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_weapon_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 703:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_pistol_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 704:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_cmbtpistol_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 705:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_appistol_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 706:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_microsmg_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 707:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_smg_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 708:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_asltrifle_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 709:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_crbnrifle_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 710:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_advrrifle_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 711:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_mg_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 712:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_cmbtmg_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 713:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_pump_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 714:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_sawoff_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 715:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_asltshtgn_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 716:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_sniperrfl_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 717:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_grnlaunch_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 718:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_rpg_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 719:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_minigun_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 720:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_pistol_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 721:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_cmbtpistol_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 722:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_appistol_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 723:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_microsmg_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 724:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_smg_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 725:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_asltrifle_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 726:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_crbnrifle_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 727:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_advrrifle_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 728:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_mg_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 729:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_cmbtmg_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 730:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_pump_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 731:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_sawoff_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 732:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_asltshtgn_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 733:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_sniperrfl_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 734:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_grnlaunch_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 735:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_rpg_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 736:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_minigun_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 737:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_gold_dlc_pistol50_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 738:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("playerkit_platinum_dlc_pistol50_expenditure_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 739:
			*uParam1 = 5000f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 32000;
			uParam1->f_5 = joaat("bodhi2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 740:
			*uParam1 = 10000f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 70000;
			uParam1->f_5 = joaat("dune_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 741:
			*uParam1 = 17000f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("sadler_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 742:
			*uParam1 = 19000f;
			uParam1->f_1 = 47500f;
			uParam1->f_2 = 19000;
			uParam1->f_3 = 47500;
			uParam1->f_5 = joaat("sandking2_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 743:
			*uParam1 = 371000f;
			uParam1->f_1 = 937500f;
			uParam1->f_2 = 371000;
			uParam1->f_3 = 937500;
			uParam1->f_5 = joaat("valentine_modifier_caddy_sedan");
			uParam1->f_4 = 1;
			break;
		
		case 744:
			*uParam1 = 7000f;
			uParam1->f_1 = 18300f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18300;
			uParam1->f_5 = joaat("valentine_modifier_caddy_gusenberg");
			uParam1->f_4 = 1;
			break;
		
		case 745:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 74000;
			uParam1->f_3 = 187500;
			uParam1->f_5 = joaat("business_vehicles_alpha");
			uParam1->f_4 = 1;
			break;
		
		case 746:
			*uParam1 = 97000f;
			uParam1->f_1 = 243800f;
			uParam1->f_2 = 97000;
			uParam1->f_3 = 243800;
			uParam1->f_5 = joaat("business_vehicles_huntley");
			uParam1->f_4 = 1;
			break;
		
		case 747:
			*uParam1 = 119000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 119000;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("business_vehicles_jester");
			uParam1->f_4 = 1;
			break;
		
		case 748:
			*uParam1 = 136000f;
			uParam1->f_1 = 343800f;
			uParam1->f_2 = 136000;
			uParam1->f_3 = 343800;
			uParam1->f_5 = joaat("business_vehicles_massacro");
			uParam1->f_4 = 1;
			break;
		
		case 749:
			*uParam1 = 248000f;
			uParam1->f_1 = 625000f;
			uParam1->f_2 = 248000;
			uParam1->f_3 = 625000;
			uParam1->f_5 = joaat("business_vehicles_turismor");
			uParam1->f_4 = 1;
			break;
		
		case 750:
			*uParam1 = 359000f;
			uParam1->f_1 = 906300f;
			uParam1->f_2 = 359000;
			uParam1->f_3 = 906300;
			uParam1->f_5 = joaat("business_vehicles_zentorno");
			uParam1->f_4 = 1;
			break;
		
		case 751:
			*uParam1 = 13000f;
			uParam1->f_1 = 32500f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 32500;
			uParam1->f_5 = joaat("business_vehicles_asterope");
			uParam1->f_4 = 1;
			break;
		
		case 752:
			*uParam1 = 11000f;
			uParam1->f_1 = 28800f;
			uParam1->f_2 = 11000;
			uParam1->f_3 = 28800;
			uParam1->f_5 = joaat("business_vehicles_bobcatxl");
			uParam1->f_4 = 1;
			break;
		
		case 753:
			*uParam1 = 35000f;
			uParam1->f_1 = 87500f;
			uParam1->f_2 = 35000;
			uParam1->f_3 = 87500;
			uParam1->f_5 = joaat("business_vehicles_cavalcade2");
			uParam1->f_4 = 1;
			break;
		
		case 754:
			*uParam1 = 17000f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("business_vehicles_granger");
			uParam1->f_4 = 1;
			break;
		
		case 755:
			*uParam1 = 8000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 8000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("business_vehicles_intruder");
			uParam1->f_4 = 1;
			break;
		
		case 756:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 37500;
			uParam1->f_5 = joaat("business_vehicles_minivan");
			uParam1->f_4 = 1;
			break;
		
		case 757:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("business_vehicles_premier");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 758:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("business_vehicles_radi");
			uParam1->f_4 = 1;
			break;
		
		case 759:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("business_vehicles_stanier");
			uParam1->f_4 = 1;
			break;
		
		case 760:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("business_vehicles_stratum");
			uParam1->f_4 = 1;
			break;
		
		case 761:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("business_vehicles_washington");
			uParam1->f_4 = 1;
			break;
		
		case 762:
			*uParam1 = 470000f;
			uParam1->f_1 = 1187500f;
			uParam1->f_2 = 470000;
			uParam1->f_3 = 1187500;
			uParam1->f_5 = joaat("business_vehicle_vestra");
			uParam1->f_4 = 1;
			break;
		
		case 763:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("xp_tunable_collect_mission_package");
			uParam1->f_4 = 1;
			break;
		
		case 764:
			*uParam1 = 0f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("xp_tunable_vote_for_content");
			uParam1->f_4 = 1;
			break;
		
		case 765:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("xp_tunable_ctf_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 766:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("xp_tunable_ctf_xp_reward_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 767:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("xp_tunable_kill_ctf_ped");
			uParam1->f_4 = 1;
			break;
		
		case 768:
			*uParam1 = 0f;
			uParam1->f_1 = 600f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600;
			uParam1->f_5 = joaat("expired_challenge_basic_xp_reward");
			uParam1->f_4 = 1;
			break;
		
		case 769:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("job_rp_cap");
			uParam1->f_4 = 1;
			break;
		
		case 770:
			*uParam1 = 0f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("player_kill_rp_dm_cap");
			uParam1->f_4 = 1;
			break;
		
		case 771:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("player_kill_rp_race_cap");
			uParam1->f_4 = 1;
			break;
		
		case 772:
			*uParam1 = 0f;
			uParam1->f_1 = 7500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 7500;
			uParam1->f_5 = joaat("player_kill_rp_mission_cap");
			uParam1->f_4 = 1;
			break;
		
		case 773:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("mission_ai_kill_rp");
			uParam1->f_4 = 1;
			break;
		
		case 774:
			*uParam1 = 0f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300;
			uParam1->f_5 = joaat("mission_ai_kill_amount_cap");
			uParam1->f_4 = 1;
			break;
		
		case 775:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = joaat("race_world_record_rp");
			uParam1->f_4 = 1;
			break;
		
		case 776:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("kill_a_mugger_rp");
			uParam1->f_4 = 1;
			break;
		
		case 777:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("sing_in_shower_rp");
			uParam1->f_4 = 1;
			break;
		
		case 778:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("playlist_winner_rp");
			uParam1->f_4 = 1;
			break;
		
		case 779:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("lester_bounty_cut");
			uParam1->f_4 = 1;
			break;
		
		case 780:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("request_a_job_fee");
			uParam1->f_4 = 1;
			break;
		
		case 781:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("mechanic_daily_fee");
			uParam1->f_4 = 1;
			break;
		
		case 782:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("player_cashdrop_cap");
			uParam1->f_4 = 1;
			break;
		
		case 783:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("playlist_entry_fee");
			uParam1->f_4 = 1;
			break;
		
		case 784:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("mugger_amount_steal");
			uParam1->f_4 = 1;
			break;
		
		case 785:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("mugger_steal_cap");
			uParam1->f_4 = 1;
			break;
		
		case 786:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("lose_wanted_level_1_cap");
			uParam1->f_4 = 1;
			break;
		
		case 787:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("lose_wanted_level_2_cap");
			uParam1->f_4 = 1;
			break;
		
		case 788:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("lose_wanted_level_3_cap");
			uParam1->f_4 = 1;
			break;
		
		case 789:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("lose_wanted_level_4_cap");
			uParam1->f_4 = 1;
			break;
		
		case 790:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("lose_wanted_level_5_cap");
			uParam1->f_4 = 1;
			break;
		
		case 791:
			*uParam1 = 37000f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 37000;
			uParam1->f_3 = 93800;
			uParam1->f_5 = joaat("business2_thrust_price");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 792:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("dlc_fashion_hockey");
			uParam1->f_4 = 1;
			break;
		
		case 793:
			*uParam1 = 5200f;
			uParam1->f_1 = 13100f;
			uParam1->f_2 = 5200;
			uParam1->f_3 = 13100;
			uParam1->f_5 = joaat("dlc_metal_warrior");
			uParam1->f_4 = 1;
			break;
		
		case 794:
			*uParam1 = 5600f;
			uParam1->f_1 = 14100f;
			uParam1->f_2 = 5600;
			uParam1->f_3 = 14100;
			uParam1->f_5 = joaat("dlc_circuit_warrior");
			uParam1->f_4 = 1;
			break;
		
		case 795:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("dlc_carbon_warrior");
			uParam1->f_4 = 1;
			break;
		
		case 796:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("dlc_weapon_tint_gold_sns_pistol");
			uParam1->f_4 = 1;
			break;
		
		case 797:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("dlc_weapon_tint_platinum_sns_pistol");
			uParam1->f_4 = 1;
			break;
		
		case 798:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("dlc_weapon_tint_gold_special_carbine");
			uParam1->f_4 = 1;
			break;
		
		case 799:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("dlc_weapon_tint_platinum_special_carbine");
			uParam1->f_4 = 1;
			break;
		
		case 800:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("dlc_weapon_tint_gold_heavy_pistol");
			uParam1->f_4 = 1;
			break;
		
		case 801:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("dlc_weapon_tint_platinum_heavy_pistol");
			uParam1->f_4 = 1;
			break;
		
		case 802:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("dlc_weapon_tint_gold_bullpup_rifle");
			uParam1->f_4 = 1;
			break;
		
		case 803:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("dlc_weapon_tint_platinum_bullpup_rifle");
			uParam1->f_4 = 1;
			break;
		
		case 804:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = 2261411;
			uParam1->f_4 = 1;
			break;
		
		case 805:
			*uParam1 = 9700f;
			uParam1->f_1 = 24400f;
			uParam1->f_2 = 9700;
			uParam1->f_3 = 24400;
			uParam1->f_5 = -948414722;
			uParam1->f_4 = 1;
			break;
		
		case 806:
			*uParam1 = 5900f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 5900;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("dlc_male_tattoo_pirate_skull");
			uParam1->f_4 = 1;
			break;
		
		case 807:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("dlc_male_tattoo_crew_emblem_chest");
			uParam1->f_4 = 1;
			break;
		
		case 808:
			*uParam1 = 9700f;
			uParam1->f_1 = 24400f;
			uParam1->f_2 = 9700;
			uParam1->f_3 = 24400;
			uParam1->f_5 = joaat("dlc_male_tattoo_crew_emblem_arm");
			uParam1->f_4 = 1;
			break;
		
		case 809:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("dlc_car_mods_classical_horn_1");
			uParam1->f_4 = 1;
			break;
		
		case 810:
			*uParam1 = 10600f;
			uParam1->f_1 = 26900f;
			uParam1->f_2 = 10600;
			uParam1->f_3 = 26900;
			uParam1->f_5 = joaat("dlc_car_mods_classical_horn_2");
			uParam1->f_4 = 1;
			break;
		
		case 811:
			*uParam1 = 11400f;
			uParam1->f_1 = 28800f;
			uParam1->f_2 = 11400;
			uParam1->f_3 = 28800;
			uParam1->f_5 = joaat("dlc_car_mods_classical_horn_3");
			uParam1->f_4 = 1;
			break;
		
		case 812:
			*uParam1 = 12100f;
			uParam1->f_1 = 30600f;
			uParam1->f_2 = 12100;
			uParam1->f_3 = 30600;
			uParam1->f_5 = joaat("dlc_car_mods_classical_horn_4");
			uParam1->f_4 = 1;
			break;
		
		case 813:
			*uParam1 = 12900f;
			uParam1->f_1 = 32500f;
			uParam1->f_2 = 12900;
			uParam1->f_3 = 32500;
			uParam1->f_5 = joaat("dlc_car_mods_classical_horn_5");
			uParam1->f_4 = 1;
			break;
		
		case 814:
			*uParam1 = 13600f;
			uParam1->f_1 = 34400f;
			uParam1->f_2 = 13600;
			uParam1->f_3 = 34400;
			uParam1->f_5 = joaat("dlc_car_mods_classical_horn_6");
			uParam1->f_4 = 1;
			break;
		
		case 815:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("dlc_car_mods_classical_horn_7");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 816:
			*uParam1 = 37100f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 37100;
			uParam1->f_3 = 93800;
			uParam1->f_5 = joaat("dlc_vehicle_bf_bifta");
			uParam1->f_4 = 1;
			break;
		
		case 817:
			*uParam1 = 19800f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 19800;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("dlc_vehicle_canis_kalahari");
			uParam1->f_4 = 1;
			break;
		
		case 818:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("dlc_vehicle_bravado_paradise");
			uParam1->f_4 = 1;
			break;
		
		case 819:
			*uParam1 = 160900f;
			uParam1->f_1 = 406300f;
			uParam1->f_2 = 160900;
			uParam1->f_3 = 406300;
			uParam1->f_5 = joaat("dlc_vehicle_pegassi_speeder");
			uParam1->f_4 = 1;
			break;
		
		case 820:
			*uParam1 = 37100f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 37100;
			uParam1->f_3 = 93800;
			uParam1->f_5 = joaat("dlc_vehicle_dinka_thrust");
			uParam1->f_4 = 1;
			break;
		
		case 821:
			*uParam1 = 85100f;
			uParam1->f_1 = 215000f;
			uParam1->f_2 = 85100;
			uParam1->f_3 = 215000;
			uParam1->f_5 = joaat("dlc_vehicle_coil_voltic_topless");
			uParam1->f_4 = 1;
			break;
		
		case 822:
			*uParam1 = 62400f;
			uParam1->f_1 = 157500f;
			uParam1->f_2 = 62400;
			uParam1->f_3 = 157500;
			uParam1->f_5 = joaat("dlc_vehicle_bravado_banshee_topless");
			uParam1->f_4 = 1;
			break;
		
		case 823:
			*uParam1 = 78700f;
			uParam1->f_1 = 198800f;
			uParam1->f_2 = 78700;
			uParam1->f_3 = 198800;
			uParam1->f_5 = joaat("dlc_vehicle_inverto_coquette_topless");
			uParam1->f_4 = 1;
			break;
		
		case 824:
			*uParam1 = 431100f;
			uParam1->f_1 = 1088800f;
			uParam1->f_2 = 431100;
			uParam1->f_3 = 1088800;
			uParam1->f_5 = joaat("dlc_vehicle_grotti_stinger_topless");
			uParam1->f_4 = 1;
			break;
		
		case 825:
			*uParam1 = 17300f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17300;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("dlc_vehicle_vapid_dominator");
			uParam1->f_4 = 1;
			break;
		
		case 826:
			*uParam1 = 39600f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 39600;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("dlc_vehicle_ocelot_f620");
			uParam1->f_4 = 1;
			break;
		
		case 827:
			*uParam1 = 17800f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 17800;
			uParam1->f_3 = 45000;
			uParam1->f_5 = joaat("dlc_vehicle_schyster_fusilade");
			uParam1->f_4 = 1;
			break;
		
		case 828:
			*uParam1 = 11900f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 11900;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("dlc_vehicle_maibatsu_penumbra");
			uParam1->f_4 = 1;
			break;
		
		case 829:
			*uParam1 = 29700f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 29700;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("dlc_vehicle_ubermacht_sentinel_xs");
			uParam1->f_4 = 1;
			break;
		
		case 830:
			*uParam1 = 47000f;
			uParam1->f_1 = 118800f;
			uParam1->f_2 = 47000;
			uParam1->f_3 = 118800;
			uParam1->f_5 = joaat("dlc_vehicle_ubermacht_sentinel");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 831:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("dlc_weapon_addon_special_carbine_suppressor");
			uParam1->f_4 = 1;
			break;
		
		case 832:
			*uParam1 = 6000f;
			uParam1->f_1 = 15100f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15100;
			uParam1->f_5 = joaat("dlc_weapon_addon_heavy_pistol_suppressor");
			uParam1->f_4 = 1;
			break;
		
		case 833:
			*uParam1 = 5700f;
			uParam1->f_1 = 14400f;
			uParam1->f_2 = 5700;
			uParam1->f_3 = 14400;
			uParam1->f_5 = joaat("dlc_weapon_addon_special_carbine_scope");
			uParam1->f_4 = 1;
			break;
		
		case 834:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("dlc_weapon_addon_bullpup_rifle_suppressor");
			uParam1->f_4 = 1;
			break;
		
		case 835:
			*uParam1 = 5600f;
			uParam1->f_1 = 14200f;
			uParam1->f_2 = 5600;
			uParam1->f_3 = 14200;
			uParam1->f_5 = joaat("dlc_weapon_addon_bullpup_rifle_scope");
			uParam1->f_4 = 1;
			break;
		
		case 836:
			*uParam1 = 7300f;
			uParam1->f_1 = 18400f;
			uParam1->f_2 = 7300;
			uParam1->f_3 = 18400;
			uParam1->f_5 = joaat("dlc_weapon_special_carbine");
			uParam1->f_4 = 1;
			break;
		
		case 837:
			*uParam1 = 7200f;
			uParam1->f_1 = 18100f;
			uParam1->f_2 = 7200;
			uParam1->f_3 = 18100;
			uParam1->f_5 = joaat("dlc_weapon_bullpup_rifle");
			uParam1->f_4 = 1;
			break;
		
		case 838:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("request_cops_turn_blind_eye_fee");
			uParam1->f_4 = 1;
			break;
		
		case 839:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("dlc_female_tattoos_crew_emblem_chest");
			uParam1->f_4 = 1;
			break;
		
		case 840:
			*uParam1 = 9700f;
			uParam1->f_1 = 24400f;
			uParam1->f_2 = 9700;
			uParam1->f_3 = 24400;
			uParam1->f_5 = joaat("dlc_female_tattoos_crew_emblem_arm");
			uParam1->f_4 = 1;
			break;
		
		case 841:
			*uParam1 = 0.1f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("mental_state_rp_divider");
			uParam1->f_4 = 1;
			break;
		
		case 842:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("mental_state_rp_divider");
			uParam1->f_4 = 1;
			break;
		
		case 843:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("survival_rp_cap_per_wave");
			uParam1->f_4 = 1;
			break;
		
		case 1063:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("request_a_heist_fee");
			uParam1->f_4 = 1;
			break;
		
		case 844:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("mental_state_kill_player_increase_threshold");
			uParam1->f_4 = 1;
			break;
		
		case 845:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("mental_state_kill_player_increase_amount");
			uParam1->f_4 = 1;
			break;
		
		case 846:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("mental_state_kill_player_increase_under_threshold");
			uParam1->f_4 = 1;
			break;
		
		case 847:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("mental_state_kill_player_increase_divider");
			uParam1->f_4 = 1;
			break;
		
		case 848:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("mental_state_blow_up_vehicle_increase_amount");
			uParam1->f_4 = 1;
			break;
		
		case 849:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("mental_state_kill_ped_increase_amount");
			uParam1->f_4 = 1;
			break;
		
		case 850:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("mental_state_decrease_amount");
			uParam1->f_4 = 1;
			break;
		
		case 851:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("mental_state_decrease_rate");
			uParam1->f_4 = 1;
			break;
		
		case 852:
			*uParam1 = 198000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 198000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("dlc_hipster_modifier_vulcar_pigalle");
			uParam1->f_4 = 1;
			break;
		
		case 853:
			*uParam1 = 0f;
			uParam1->f_1 = 40f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 40;
			uParam1->f_5 = joaat("number_of_challenges_per_day");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 854:
			*uParam1 = 5200f;
			uParam1->f_1 = 13100f;
			uParam1->f_2 = 5200;
			uParam1->f_3 = 13100;
			uParam1->f_5 = joaat("dlc_hipster_clothing_female_purple_floral_babydoll");
			uParam1->f_4 = 1;
			break;
		
		case 855:
			*uParam1 = 79200f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = joaat("ss1_03_98_lod");
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_vapid_blade");
			uParam1->f_4 = 1;
			break;
		
		case 856:
			*uParam1 = 99000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 99000;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_benefactor_glenda");
			uParam1->f_4 = 1;
			break;
		
		case 857:
			*uParam1 = 69300f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 69300;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_declasse_rhapsody");
			uParam1->f_4 = 1;
			break;
		
		case 858:
			*uParam1 = 59400f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 59400;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_vulcar_warrener");
			uParam1->f_4 = 1;
			break;
		
		case 859:
			*uParam1 = 42100f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 42100;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_benefactor_panto");
			uParam1->f_4 = 1;
			break;
		
		case 860:
			*uParam1 = 123300f;
			uParam1->f_1 = 400000f;
			uParam1->f_2 = 123300;
			uParam1->f_3 = 400000;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_dubsta3");
			uParam1->f_4 = 1;
			break;
		
		case 861:
			*uParam1 = 24800f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 24800;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_blazer3");
			uParam1->f_4 = 1;
			break;
		
		case 862:
			*uParam1 = 17300f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17300;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_buffalo");
			uParam1->f_4 = 1;
			break;
		
		case 863:
			*uParam1 = 47500f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 47500;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_buffalo2");
			uParam1->f_4 = 1;
			break;
		
		case 864:
			*uParam1 = 10900f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_rebel2");
			uParam1->f_4 = 1;
			break;
		
		case 865:
			*uParam1 = 5400f;
			uParam1->f_1 = 13800f;
			uParam1->f_2 = 5400;
			uParam1->f_3 = 13800;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_surfer");
			uParam1->f_4 = 1;
			break;
		
		case 866:
			*uParam1 = 27200f;
			uParam1->f_1 = 68800f;
			uParam1->f_2 = 27200;
			uParam1->f_3 = 68800;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_tailgater");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 867:
			*uParam1 = 7900f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 7900;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_youga");
			uParam1->f_4 = 1;
			break;
		
		case 868:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_pure_black");
			uParam1->f_4 = 1;
			break;
		
		case 869:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_jazz_horn_1");
			uParam1->f_4 = 1;
			break;
		
		case 870:
			*uParam1 = 10600f;
			uParam1->f_1 = 26900f;
			uParam1->f_2 = 10600;
			uParam1->f_3 = 26900;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_jazz_horn_2");
			uParam1->f_4 = 1;
			break;
		
		case 871:
			*uParam1 = 11400f;
			uParam1->f_1 = 28800f;
			uParam1->f_2 = 11400;
			uParam1->f_3 = 28800;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_jazz_horn_3");
			uParam1->f_4 = 1;
			break;
		
		case 872:
			*uParam1 = 25000f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 60000;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_jazz_horn_4");
			uParam1->f_4 = 1;
			break;
		
		case 873:
			*uParam1 = 11100f;
			uParam1->f_1 = 28100f;
			uParam1->f_2 = 11100;
			uParam1->f_3 = 28100;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_pink_tire_smoke");
			uParam1->f_4 = 1;
			break;
		
		case 874:
			*uParam1 = 8200f;
			uParam1->f_1 = 20600f;
			uParam1->f_2 = 8200;
			uParam1->f_3 = 20600;
			uParam1->f_5 = joaat("dlc_hipster_car_mod_brown_tire_smoke");
			uParam1->f_4 = 1;
			break;
		
		case 875:
			*uParam1 = 6000f;
			uParam1->f_1 = 15200f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15200;
			uParam1->f_5 = joaat("dlc_hipster_weapon_mod_vintage_pistol_suppressor");
			uParam1->f_4 = 1;
			break;
		
		case 876:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10400;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("dlc_hipster_male_mask_grey_cat");
			uParam1->f_4 = 1;
			break;
		
		case 877:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10400;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("dlc_hipster_male_mask_tabby_cat");
			uParam1->f_4 = 1;
			break;
		
		case 878:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("dlc_hipster_male_mask_red_fox");
			uParam1->f_4 = 1;
			break;
		
		case 879:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("dlc_hipster_male_mask_brown_fox");
			uParam1->f_4 = 1;
			break;
		
		case 880:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 29400;
			uParam1->f_5 = joaat("dlc_hipster_male_mask_brown_owl");
			uParam1->f_4 = 1;
			break;
		
		case 881:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 29400;
			uParam1->f_5 = joaat("dlc_hipster_male_mask_white_owl");
			uParam1->f_4 = 1;
			break;
		
		case 882:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("dlc_hipster_male_mask_gray_racoon");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 883:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("dlc_hipster_mask_black_racoon");
			uParam1->f_4 = 1;
			break;
		
		case 884:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10400;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("dlc_hipster_female_mask_gray_cat");
			uParam1->f_4 = 1;
			break;
		
		case 885:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10400;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("dlc_hipster_female_mask_tabby_cat");
			uParam1->f_4 = 1;
			break;
		
		case 886:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("dlc_hipster_female_mask_red_fox");
			uParam1->f_4 = 1;
			break;
		
		case 887:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("dlc_hipster_female_mask_brown_fox");
			uParam1->f_4 = 1;
			break;
		
		case 888:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 29400;
			uParam1->f_5 = joaat("dlc_hipster_female_mask_brown_owl");
			uParam1->f_4 = 1;
			break;
		
		case 889:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 29400;
			uParam1->f_5 = joaat("dlc_hipster_female_mask_white_owl");
			uParam1->f_4 = 1;
			break;
		
		case 890:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("dlc_hipster_female_mask_gray_racoon");
			uParam1->f_4 = 1;
			break;
		
		case 891:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("dlc_hipster_female_mask_black_racoon");
			uParam1->f_4 = 1;
			break;
		
		case 892:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("hipster_vehicle_pure_gold_metal_respray");
			uParam1->f_4 = 1;
			break;
		
		case 893:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("hipster_vehicle_brushed_gold_metal_respray");
			uParam1->f_4 = 1;
			break;
		
		case 894:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -188849823;
			uParam1->f_4 = 1;
			break;
		
		case 895:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("car_impound_fee");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 896:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 500000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("pilot_school_vehicle_hydra");
			uParam1->f_4 = 1;
			break;
		
		case 897:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 500000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("pilot_school_vehicle_besra");
			uParam1->f_4 = 1;
			break;
		
		case 898:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 500000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("pilot_school_vehicle_miljet");
			uParam1->f_4 = 1;
			break;
		
		case 899:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("pilot_school_vehicle_coquette2");
			uParam1->f_4 = 1;
			break;
		
		case 900:
			*uParam1 = 10000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("pilot_school_player_kit_parachute_canopy_color_1");
			uParam1->f_4 = 1;
			break;
		
		case 901:
			*uParam1 = 10000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("pilot_school_player_kit_parachute_canopy_color_2");
			uParam1->f_4 = 1;
			break;
		
		case 902:
			*uParam1 = 10000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("pilot_school_player_kit_parachute_canopy_color_3");
			uParam1->f_4 = 1;
			break;
		
		case 903:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("rollercoasterridescreamrewardxp");
			uParam1->f_4 = 1;
			break;
		
		case 904:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("rollercoasterridescreamrewardcap");
			uParam1->f_4 = 1;
			break;
		
		case 905:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("purchased_tattoo_application_fee");
			uParam1->f_4 = 1;
			break;
		
		case 906:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("survival_complete_bonus");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 907:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("contact_mission_rp_time_period_1_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 908:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("contact_mission_rp_time_period_2_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 909:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("contact_mission_rp_time_period_3_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 910:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("contact_mission_rp_time_period_4_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 911:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("contact_mission_rp_time_period_5_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 912:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("contact_mission_rp_time_period_6_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 913:
			*uParam1 = 0f;
			uParam1->f_1 = 4.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("contact_mission_rp_time_period_7_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 914:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("contact_mission_rp_time_period_8_percentage");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 915:
			*uParam1 = 0f;
			uParam1->f_1 = 5.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = joaat("contact_mission_rp_time_period_9_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 916:
			*uParam1 = 0f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = joaat("contact_mission_rp_time_period_10_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 917:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("contact_mission_rp_base_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 918:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("contact_mission_rp_difficulty_multiplier_easy");
			uParam1->f_4 = 1;
			break;
		
		case 919:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("contact_mission_rp_difficulty_multiplier_normal");
			uParam1->f_4 = 1;
			break;
		
		case 920:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("contact_mission_rp_difficulty_multiplier_hard");
			uParam1->f_4 = 1;
			break;
		
		case 921:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("contact_mission_rp_rank_cap");
			uParam1->f_4 = 1;
			break;
		
		case 922:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("contact_mission_rp_basic_value");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 947:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_flight_school_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 946:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_elitas_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 945:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_brazil_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 944:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_japan_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 943:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_australia_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 942:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_spain_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 941:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_germany_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 940:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_france_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 939:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_canada_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 938:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_scotland_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 937:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_united_kingdom_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 936:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_usa_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 935:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("ps_sunrise_chute");
			uParam1->f_4 = 1;
			break;
		
		case 934:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("ps_airborne_chute");
			uParam1->f_4 = 1;
			break;
		
		case 933:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("ps_high_altitude_chute");
			uParam1->f_4 = 1;
			break;
		
		case 932:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("ps_shadow_chute");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 931:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("ps_desert_chute");
			uParam1->f_4 = 1;
			break;
		
		case 930:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("ps_air_force_chute");
			uParam1->f_4 = 1;
			break;
		
		case 929:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("ps_swift_livery_2");
			uParam1->f_4 = 1;
			break;
		
		case 928:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("ps_swift_livery_1");
			uParam1->f_4 = 1;
			break;
		
		case 927:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 500000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("ps_buckingham_miljet");
			uParam1->f_4 = 1;
			break;
		
		case 923:
			*uParam1 = 10000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("ps_flight_suit");
			uParam1->f_4 = 1;
			break;
		
		case 924:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("ps_inverto_coquette_classic");
			uParam1->f_4 = 1;
			break;
		
		case 925:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("ps_inverto_coquette_classic_topless");
			uParam1->f_4 = 1;
			break;
		
		case 926:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("ps_western_besra");
			uParam1->f_4 = 1;
			break;
		
		case 1018:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("request_heli_pickup_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 1019:
			*uParam1 = 0f;
			uParam1->f_1 = 750f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 750;
			uParam1->f_5 = joaat("request_boat_pickup_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 1020:
			*uParam1 = 0f;
			uParam1->f_1 = 600f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600;
			uParam1->f_5 = joaat("request_pegasus_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 1021:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("request_thief1_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 1022:
			*uParam1 = 0f;
			uParam1->f_1 = 22500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 22500;
			uParam1->f_5 = joaat("request_army_expenditure_modifier");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 948:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_mission_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 949:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_mission_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 950:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_mission_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 951:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_mission_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 952:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_mission_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 953:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_mission_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 954:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_mission_stage_4");
			uParam1->f_4 = 1;
			break;
		
		case 955:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_deathmatch_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 956:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_deathmatch_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 957:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_deathmatch_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 958:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_deathmatch_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 959:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_deathmatch_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 960:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_deathmatch_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 961:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_deathmatch_stage_4");
			uParam1->f_4 = 1;
			break;
		
		case 962:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_race_stage_1");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 963:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_race_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 964:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_race_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 965:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_race_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 966:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_race_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 967:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_race_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 968:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_race_stage_4");
			uParam1->f_4 = 1;
			break;
		
		case 969:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_survival_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 970:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_survival_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 971:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_survival_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 972:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_survival_stage_1");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 973:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_survival_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 974:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_survival_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 975:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_survival_stage_4");
			uParam1->f_4 = 1;
			break;
		
		case 976:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_ctf_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 977:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_ctf_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 978:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_ctf_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 979:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_ctf_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 980:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_ctf_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 981:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_ctf_stage_3");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 982:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_ctf_stage_4");
			uParam1->f_4 = 1;
			break;
		
		case 983:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_lts_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 984:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_lts_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 985:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_lts_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 986:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_lts_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 987:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_lts_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 988:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_lts_stage_3");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 989:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_lts_stage_4");
			uParam1->f_4 = 1;
			break;
		
		case 990:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_basejump_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 991:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_basejump_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 992:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_basejump_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 993:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_basejump_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 994:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_basejump_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 995:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_basejump_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 996:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_basejump_stage_4");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 997:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_contact_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 998:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_contact_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 999:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_contact_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 1000:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_contact_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 1001:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_contact_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 1002:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_contact_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 1003:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_contact_stage_4");
			uParam1->f_4 = 1;
			break;
		
		case 1004:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_vs_stage_1");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1005:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_vs_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 1006:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_vs_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 1007:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_vs_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 1008:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_vs_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 1009:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_vs_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 1010:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_vs_stage_4");
			uParam1->f_4 = 1;
			break;
		
		case 1011:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_playlist_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 1012:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_playlist_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 1013:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("on_call_timeout_playlist_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 1014:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_playlist_stage_1");
			uParam1->f_4 = 1;
			break;
		
		case 1015:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_playlist_stage_2");
			uParam1->f_4 = 1;
			break;
		
		case 1016:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_playlist_stage_3");
			uParam1->f_4 = 1;
			break;
		
		case 1017:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("on_call_ratio_playlist_stage_4");
			uParam1->f_4 = 1;
			break;
		
		case 1023:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("cars_website_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1024:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("carmod_shop_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1025:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("clothes_shop_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1026:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("hairdo_shop_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1027:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("tattoo_shop_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1028:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("weapons_shop_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1029:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("planes_website_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1030:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("helis_website_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1031:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("boats_website_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1032:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("property_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1033:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("bikes_website_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1034:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("plane_takedown_rewards_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1035:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("plane_takedown_rewards_xp");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1036:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("elegy2_web_price_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 1037:
			*uParam1 = 50000f;
			uParam1->f_1 = 125000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 125000;
			uParam1->f_5 = joaat("khamelion_web_price_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 1038:
			*uParam1 = 45000f;
			uParam1->f_1 = 112500f;
			uParam1->f_2 = 45000;
			uParam1->f_3 = 112500;
			uParam1->f_5 = joaat("hotknife_web_price_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 1039:
			*uParam1 = 20000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("carbonrs_web_price_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 1040:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("cratedropbaseweighting");
			uParam1->f_4 = 1;
			break;
		
		case 1041:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("securityvanbaseweighting");
			uParam1->f_4 = 1;
			break;
		
		case 1042:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("importexportbaseweighting");
			uParam1->f_4 = 1;
			break;
		
		case 1043:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("joyriderbaseweighting");
			uParam1->f_4 = 1;
			break;
		
		case 1044:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("lesterkilltargetbaseweighting");
			uParam1->f_4 = 1;
			break;
		
		case 1045:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("planetakedownbaseweighting");
			uParam1->f_4 = 1;
			break;
		
		case 1046:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("distractpolicebaseweighting");
			uParam1->f_4 = 1;
			break;
		
		case 1047:
			*uParam1 = 0f;
			uParam1->f_1 = 19f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 19;
			uParam1->f_5 = joaat("number_of_scripts_in_history_list");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1048:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_italy_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1049:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_switzerland_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1050:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_jamaica_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1051:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_colombia_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1052:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_norway_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1053:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_sweden_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1054:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_belgium_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1055:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_mexico_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1056:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_austria_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1057:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_russia_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1058:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_argentina_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1059:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_turkey_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1060:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_ireland_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1061:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_wales_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1062:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("ps_england_chute_bag");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1070:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("cash_reward_bet_stake_gift");
			uParam1->f_4 = 1;
			break;
		
		case 1071:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 25;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("disable_event_distract_cops");
			break;
		
		case 1073:
			*uParam1 = 2f;
			uParam1->f_1 = SYSTEM::TO_FLOAT(32);
			uParam1->f_2 = 2;
			uParam1->f_3 = func_3();
			uParam1->f_5 = joaat("max_ng_transition_session_size");
			uParam1->f_4 = 1;
			break;
		
		case 1072:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 25;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("xp_reward_event_distract_cops");
			uParam1->f_4 = 1;
			break;
		
		case 1074:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("lts_m_black_bulletproof");
			uParam1->f_4 = 1;
			break;
		
		case 1075:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("lts_m_gray_bulletproof");
			uParam1->f_4 = 1;
			break;
		
		case 1076:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("lts_m_charcoal_bulletproof");
			uParam1->f_4 = 1;
			break;
		
		case 1077:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("lts_m_tan_bulletproof");
			uParam1->f_4 = 1;
			break;
		
		case 1078:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("lts_m_forest_bulletproof");
			uParam1->f_4 = 1;
			break;
		
		case 1079:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("lts_m_black_skeletal");
			uParam1->f_4 = 1;
			break;
		
		case 1080:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("lts_m_gray_skeletal");
			uParam1->f_4 = 1;
			break;
		
		case 1081:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("lts_m_charcoal_skeletal");
			uParam1->f_4 = 1;
			break;
		
		case 1082:
			*uParam1 = 5100f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5100;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("lts_m_tan_skeletal");
			uParam1->f_4 = 1;
			break;
		
		case 1083:
			*uParam1 = 5200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("lts_m_green_skeletal");
			uParam1->f_4 = 1;
			break;
		
		case 1084:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("lts_f_black_bulletproof");
			uParam1->f_4 = 1;
			break;
		
		case 1085:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("lts_f_gray_bulletproof");
			uParam1->f_4 = 1;
			break;
		
		case 1086:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("lts_f_charcoal_bulletproof");
			uParam1->f_4 = 1;
			break;
		
		case 1087:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("lts_f_tan_bulletproof");
			uParam1->f_4 = 1;
			break;
		
		case 1088:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("lts_f_forest_bulletproof");
			uParam1->f_4 = 1;
			break;
		
		case 1089:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("lts_f_black_skeletal");
			uParam1->f_4 = 1;
			break;
		
		case 1090:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("lts_f_gray_skeletal");
			uParam1->f_4 = 1;
			break;
		
		case 1091:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("lts_f_charcoal_skeletal");
			uParam1->f_4 = 1;
			break;
		
		case 1092:
			*uParam1 = 5100f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5100;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("lts_f_tan_skeletal");
			uParam1->f_4 = 1;
			break;
		
		case 1093:
			*uParam1 = 5200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("lts_f_green_skeletal");
			uParam1->f_4 = 1;
			break;
		
		case 1094:
			*uParam1 = 40000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("lts_lcc_innovation");
			uParam1->f_4 = 1;
			break;
		
		case 1095:
			*uParam1 = 40000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("lts_shitzu_hakuchou");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1096:
			*uParam1 = 200000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("lts_lampadati_furore_gt");
			uParam1->f_4 = 1;
			break;
		
		case 1097:
			*uParam1 = 25000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("lts_canis_kalahari_topless");
			uParam1->f_4 = 1;
			break;
		
		case 1098:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("lts_heavy_shotgun");
			uParam1->f_4 = 1;
			break;
		
		case 1099:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("lts_heavy_shotgun_suppressor");
			uParam1->f_4 = 1;
			break;
		
		case 1100:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("lts_marksman_rifle");
			uParam1->f_4 = 1;
			break;
		
		case 1101:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("lts_marksman_rifle_suppressor");
			uParam1->f_4 = 1;
			break;
		
		case 1102:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_finland_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1103:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_denmark_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1104:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_netherlands_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1105:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_portugal_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1106:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_china_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1107:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_croatia_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1108:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_czech_republic_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1109:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_hungary_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1110:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_liechtenstein_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1111:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_malta_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1112:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_new_zealand_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1113:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_nigeria_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1114:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_poland_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1115:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_puerto_rico_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1116:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_slovakia_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1117:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_slovenia_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1118:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_south_africa_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1119:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_south_korea_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1120:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_palestine_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1121:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("lts_israel_chute_bag");
			uParam1->f_4 = 1;
			break;
		
		case 1124:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("max_heist_cut_amount");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1125:
			*uParam1 = 20000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("vehicles_heist_brute_boxville");
			uParam1->f_4 = 1;
			break;
		
		case 1126:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("vehicles_heist_lampadati_casco");
			uParam1->f_4 = 1;
			break;
		
		case 1127:
			*uParam1 = 60000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 60000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("vehicles_heist_nagasaki_dinghy");
			uParam1->f_4 = 1;
			break;
		
		case 1128:
			*uParam1 = 20000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("vehicles_heist_dinka_enduro");
			uParam1->f_4 = 1;
			break;
		
		case 1129:
			*uParam1 = 30000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 30000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("vehicles_heist_declasse_gang_burrito");
			uParam1->f_4 = 1;
			break;
		
		case 1130:
			*uParam1 = 185000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 185000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("vehicles_heist_vapid_guadian");
			uParam1->f_4 = 1;
			break;
		
		case 1131:
			*uParam1 = 120000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 120000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("vehicles_heist_mammoth_hydra");
			uParam1->f_4 = 1;
			break;
		
		case 1132:
			*uParam1 = 65000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 65000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("vehicles_heist_hvy_insurgent_pickup");
			uParam1->f_4 = 1;
			break;
		
		case 1133:
			*uParam1 = 330000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 330000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("vehicles_heist_hvy_insurgent");
			uParam1->f_4 = 1;
			break;
		
		case 1134:
			*uParam1 = 35000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 35000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("vehicles_heist_karin_kuruma");
			uParam1->f_4 = 1;
			break;
		
		case 1135:
			*uParam1 = 65000f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 65000;
			uParam1->f_3 = 600000;
			uParam1->f_5 = joaat("vehicles_heist_karin_kuruma_armored");
			uParam1->f_4 = 1;
			break;
		
		case 1136:
			*uParam1 = 200000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("vehicles_heist_principe_lectro");
			uParam1->f_4 = 1;
			break;
		
		case 1137:
			*uParam1 = 15000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("vehicles_heist_maibatsu_mule");
			uParam1->f_4 = 1;
			break;
		
		case 1138:
			*uParam1 = 800000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 800000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("vehicles_heist_savage");
			uParam1->f_4 = 1;
			break;
		
		case 1139:
			*uParam1 = 350000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 350000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("vehicles_heist_karin_technical");
			uParam1->f_4 = 1;
			break;
		
		case 1140:
			*uParam1 = 900000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 900000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("vehicles_heist_buckingham_valkyrie");
			uParam1->f_4 = 1;
			break;
		
		case 1141:
			*uParam1 = 200000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("vehicles_heist_velum");
			uParam1->f_4 = 1;
			break;
		
		case 1064:
			*uParam1 = 0f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("heist_first_time_bonus");
			uParam1->f_4 = 1;
			break;
		
		case 1065:
			*uParam1 = 0f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = joaat("heist_order_bonus");
			uParam1->f_4 = 1;
			break;
		
		case 1066:
			*uParam1 = 0f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = joaat("heist_same_team_bonus");
			uParam1->f_4 = 1;
			break;
		
		case 1067:
			*uParam1 = 0f;
			uParam1->f_1 = 2E+07f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000000;
			uParam1->f_5 = joaat("heist_ultimate_challenge");
			uParam1->f_4 = 1;
			break;
		
		case 1142:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("leader_default_heist_tutorial_finale_cut");
			uParam1->f_4 = 1;
			break;
		
		case 1143:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("heist_fleeca_job_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1144:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("heist_prison_break_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1145:
			*uParam1 = 0f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("heist_humane_labs_raid_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1146:
			*uParam1 = 0f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("heist_series_a_funding_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1147:
			*uParam1 = 0f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("heist_pacific_standard_job_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1034:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("plane_takedown_rewards_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1035:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("plane_takedown_rewards_xp");
			uParam1->f_4 = 1;
			break;
		
		case 1071:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 25;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("disable_event_distract_cops");
			break;
		
		case 1072:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 25;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("xp_reward_event_distract_cops");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1148:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("cash_reward_override_elite_objectives_fleeca");
			uParam1->f_4 = 1;
			break;
		
		case 1149:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("cash_reward_override_elite_objectives_humane_labs");
			uParam1->f_4 = 1;
			break;
		
		case 1150:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("cash_reward_override_elite_objectives_prison_break");
			uParam1->f_4 = 1;
			break;
		
		case 1151:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("cash_reward_override_elite_objectives_series_a");
			uParam1->f_4 = 1;
			break;
		
		case 1152:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("cash_reward_override_elite_objectives_pacific_standard");
			uParam1->f_4 = 1;
			break;
		
		case 1153:
			*uParam1 = -1f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 600000;
			uParam1->f_5 = joaat("target_override_elite_objectives_fleeca_time");
			uParam1->f_4 = 1;
			break;
		
		case 1154:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_fleeca_vehicle_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1155:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_fleeca_ped_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1156:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = joaat("target_override_elite_objectives_fleeca_enemy_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1157:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_fleeca_health_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1158:
			*uParam1 = -1f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("target_override_elite_objectives_humane_labs_time");
			uParam1->f_4 = 1;
			break;
		
		case 1159:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_humane_labs_vehicle_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1160:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_humane_labs_ped_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1161:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = joaat("target_override_elite_objectives_humane_labs_enemy_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1162:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_humane_labs_health_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1163:
			*uParam1 = -1f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 600000;
			uParam1->f_5 = joaat("target_override_elite_objectives_prison_time");
			uParam1->f_4 = 1;
			break;
		
		case 1164:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_prison_vehicle_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1165:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_prison_ped_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1166:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = joaat("target_override_elite_objectives_prison_enemy_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1167:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_prison_health_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1168:
			*uParam1 = -1f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 600000;
			uParam1->f_5 = joaat("target_override_elite_objectives_prison_extraction");
			uParam1->f_4 = 1;
			break;
		
		case 1169:
			*uParam1 = -1f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("target_override_elite_objectives_series_a_time");
			uParam1->f_4 = 1;
			break;
		
		case 1170:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_series_a_vehicle_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1171:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_series_a_ped_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1172:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = joaat("target_override_elite_objectives_series_a_enemy_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1173:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_series_a_health_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1174:
			*uParam1 = -1f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("target_override_elite_objectives_pacific_time");
			uParam1->f_4 = 1;
			break;
		
		case 1175:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_pacific_vehicle_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1176:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_pacific_ped_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1177:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = joaat("target_override_elite_objectives_pacific_enemy_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1178:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("target_override_elite_objectives_pacific_health_damage");
			uParam1->f_4 = 1;
			break;
		
		case 1186:
			*uParam1 = 0f;
			uParam1->f_1 = 72000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 72000;
			uParam1->f_5 = joaat("heist_money_grab_cash_drop_threshold_high");
			uParam1->f_4 = 1;
			break;
		
		case 1185:
			*uParam1 = 0f;
			uParam1->f_1 = 36000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 36000;
			uParam1->f_5 = joaat("heist_money_grab_cash_drop_threshold_low");
			uParam1->f_4 = 1;
			break;
		
		case 1190:
			*uParam1 = 0f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("heist_setup_cash_calculation_max_take");
			uParam1->f_4 = 1;
			break;
		
		case 1191:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("max_heist_cash_loss_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 1187:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("default_stack_cash_value");
			uParam1->f_4 = 1;
			break;
		
		case 1188:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("bonus_stack_cash_value");
			uParam1->f_4 = 1;
			break;
		
		case 1189:
			*uParam1 = 0f;
			uParam1->f_1 = 45f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 45;
			uParam1->f_5 = joaat("bonus_stack_number_per_trolley");
			uParam1->f_4 = 1;
			break;
		
		case 1223:
			*uParam1 = 0f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("amount_heist_members_bonus");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1068:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("member_min_heist_finale_take_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 1069:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("leader_min_heist_finale_take_percentage");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1192:
			*uParam1 = 20790f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 20790;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("cgtong_dinka_blista_compact");
			uParam1->f_4 = 1;
			break;
		
		case 1193:
			*uParam1 = 247500f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 247500;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("cgtong_dodo");
			uParam1->f_4 = 1;
			break;
		
		case 1194:
			*uParam1 = 30690f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 30690;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("cgtong_imponte_dukes");
			uParam1->f_4 = 1;
			break;
		
		case 1195:
			*uParam1 = 247500f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 247500;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("cgtong_cheval_marshall");
			uParam1->f_4 = 1;
			break;
		
		case 1196:
			*uParam1 = 35145f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 35145;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("cgtong_declasse_stallion");
			uParam1->f_4 = 1;
			break;
		
		case 1197:
			*uParam1 = 655875f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 655875;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = joaat("cgtong_submersible");
			uParam1->f_4 = 1;
			break;
		
		case 1198:
			*uParam1 = 200f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 200;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("cgtong_hatchet");
			uParam1->f_4 = 1;
			break;
		
		case 1199:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("mp_daily_objective_bonus_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1200:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("mp_daily_objective_bonus_rp_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1201:
			*uParam1 = 0f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("mp_weekly_objective_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1202:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("mp_weekly_objective_rp_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1203:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("mp_monthly_objective_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1204:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("mp_monthly_objective_rp_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1205:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("mp_10_objectives_complete_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1206:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("mp_10_objectives_complete_rp_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1207:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("mp_20_objectives_complete_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1208:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("mp_20_objectives_complete_rp_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1209:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("mp_50_objectives_complete_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1210:
			*uParam1 = 0f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("mp_50_objectives_complete_rp_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1211:
			*uParam1 = 0f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("mp_100_objectives_complete_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1212:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("mp_100_objectives_complete_rp_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1213:
			*uParam1 = 10000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("car_mods_horn_sad_trombone");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1214:
			*uParam1 = 100000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("vehicle_xmas14_dinka_jester_racecar");
			uParam1->f_4 = 1;
			break;
		
		case 1215:
			*uParam1 = 100000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("vehicle_xmas14_dewbauchee_massacro_racecar");
			uParam1->f_4 = 1;
			break;
		
		case 1216:
			*uParam1 = 15000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("vehicle_xmas14_rat_truck");
			uParam1->f_4 = 1;
			break;
		
		case 1217:
			*uParam1 = 15000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("vehicle_xmas14_slamvan");
			uParam1->f_4 = 1;
			break;
		
		case 1218:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("vehicle_xmas14_bravado_sprunk_buffalo");
			uParam1->f_4 = 1;
			break;
		
		case 1219:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("vehicle_xmas14_vapid_pisswasser_dominator");
			uParam1->f_4 = 1;
			break;
		
		case 1220:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("vehicle_xmas14_bravado_redwood_gauntlet");
			uParam1->f_4 = 1;
			break;
		
		case 1221:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("vehicle_xmas14_declasse_burger_shot_stallion");
			uParam1->f_4 = 1;
			break;
		
		case 1222:
			*uParam1 = 30000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 30000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("weapons_xmas14_homing_launcher");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1224:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("earnings_heists_finale_first_play_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1225:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("earnings_heists_finale_replay_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1226:
			*uParam1 = 0f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("earnings_heists_finale_minimum_total_cash_take");
			uParam1->f_4 = 1;
			break;
		
		case 1227:
			*uParam1 = 0f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("earnings_heists_finale_maximum_total_cash_take");
			uParam1->f_4 = 1;
			break;
		
		case 1228:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("rp_heists_heist_fail_rp_time_period_1");
			uParam1->f_4 = 1;
			break;
		
		case 1229:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("rp_heists_heist_fail_rp_time_period_2");
			uParam1->f_4 = 1;
			break;
		
		case 1230:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("rp_heists_heist_fail_rp_time_period_3");
			uParam1->f_4 = 1;
			break;
		
		case 1231:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("rp_heists_heist_fail_rp_time_period_4");
			uParam1->f_4 = 1;
			break;
		
		case 1232:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("rp_heists_heist_fail_rp_time_period_5");
			uParam1->f_4 = 1;
			break;
		
		case 1233:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("rp_heists_heist_fail_rp_time_period_6");
			uParam1->f_4 = 1;
			break;
		
		case 1234:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = -402353485;
			uParam1->f_4 = 1;
			break;
		
		case 1235:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = 430863878;
			uParam1->f_4 = 1;
			break;
		
		case 1236:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = 2083142404;
			uParam1->f_4 = 1;
			break;
		
		case 1237:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("heist_rp_time_period_1_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 1238:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("heist_rp_time_period_2_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 1239:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("heist_rp_time_period_3_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 1240:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("heist_rp_time_period_4_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 1241:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("heist_rp_time_period_5_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 1242:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("heist_rp_time_period_6_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 1243:
			*uParam1 = 0f;
			uParam1->f_1 = 4.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("heist_rp_time_period_7_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 1244:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("heist_rp_time_period_8_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 1245:
			*uParam1 = 0f;
			uParam1->f_1 = 5.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = joaat("heist_rp_time_period_9_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 1246:
			*uParam1 = 0f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = joaat("heist_rp_time_period_10_percentage");
			uParam1->f_4 = 1;
			break;
		
		case 1247:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("rp_heists_gold_medal_rp_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1248:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("rp_heists_silver_medal_rp_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1249:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("rp_heists_bronze_medal_rp_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1250:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("heist_rp_base_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1251:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("heist_rp_basic_value");
			uParam1->f_4 = 1;
			break;
		
		case 1252:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("heist_rp_rank_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1253:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("heist_fail_rp_minimum");
			uParam1->f_4 = 1;
			break;
		
		case 1254:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("heist_fail_rp_time_period_2_divider");
			uParam1->f_4 = 1;
			break;
		
		case 1255:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("heist_fail_rp_time_period_3_divider");
			uParam1->f_4 = 1;
			break;
		
		case 1256:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("heist_fail_rp_time_period_4_divider");
			uParam1->f_4 = 1;
			break;
		
		case 1257:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("heist_fail_rp_time_period_5_divider");
			uParam1->f_4 = 1;
			break;
		
		case 1258:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("heist_fail_rp_time_period_6_divider");
			uParam1->f_4 = 1;
			break;
		
		case 1259:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("heist_fail_rp_time_period_7_divider");
			uParam1->f_4 = 1;
			break;
		
		case 1260:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("heist_fail_rp_time_period_8_divider");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1261:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("heist_fail_rp_time_period_9_divider");
			uParam1->f_4 = 1;
			break;
		
		case 1262:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("heist_fail_rp_time_period_10_divider");
			uParam1->f_4 = 1;
			break;
		
		case 1263:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("heist_rp_stage_prep_bonus");
			uParam1->f_4 = 1;
			break;
		
		case 1264:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("heist_rp_stage_finale_bonus");
			uParam1->f_4 = 1;
			break;
		
		case 1265:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("heist_rp_role_prep_bonus");
			uParam1->f_4 = 1;
			break;
		
		case 1266:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("heist_rp_role_finale_bonus");
			uParam1->f_4 = 1;
			break;
		
		case 1267:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1083949574;
			uParam1->f_4 = 1;
			break;
		
		case 1268:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("heist_fail_cash_time_period_1");
			uParam1->f_4 = 1;
			break;
		
		case 1269:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("heist_fail_cash_time_period_2");
			uParam1->f_4 = 1;
			break;
		
		case 1270:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("heist_fail_cash_time_period_3");
			uParam1->f_4 = 1;
			break;
		
		case 1271:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("heist_fail_cash_time_period_4");
			uParam1->f_4 = 1;
			break;
		
		case 1272:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("heist_fail_cash_time_period_5");
			uParam1->f_4 = 1;
			break;
		
		case 1273:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("heist_fail_cash_time_period_6");
			uParam1->f_4 = 1;
			break;
		
		case 1274:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("heists_finale_fail_cash_percentage_period_1");
			uParam1->f_4 = 1;
			break;
		
		case 1275:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("heists_finale_fail_cash_percentage_period_2");
			uParam1->f_4 = 1;
			break;
		
		case 1276:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("heists_finale_fail_cash_percentage_period_3");
			uParam1->f_4 = 1;
			break;
		
		case 1277:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("heists_finale_fail_cash_percentage_period_4");
			uParam1->f_4 = 1;
			break;
		
		case 1278:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("heists_finale_fail_cash_percentage_period_5");
			uParam1->f_4 = 1;
			break;
		
		case 1279:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("heists_finale_fail_cash_percentage_period_6");
			uParam1->f_4 = 1;
			break;
		
		case 1280:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("heists_finale_fail_cash_percentage_period_7");
			uParam1->f_4 = 1;
			break;
		
		case 1281:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("heists_prep_fail_cash_percentage_period_1");
			uParam1->f_4 = 1;
			break;
		
		case 1282:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("heists_prep_fail_cash_percentage_period_2");
			uParam1->f_4 = 1;
			break;
		
		case 1283:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("heists_prep_fail_cash_percentage_period_3");
			uParam1->f_4 = 1;
			break;
		
		case 1284:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("heists_prep_fail_cash_percentage_period_4");
			uParam1->f_4 = 1;
			break;
		
		case 1285:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("heists_prep_fail_cash_percentage_period_5");
			uParam1->f_4 = 1;
			break;
		
		case 1286:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("heists_prep_fail_cash_percentage_period_6");
			uParam1->f_4 = 1;
			break;
		
		case 1287:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("heists_prep_fail_cash_percentage_period_7");
			uParam1->f_4 = 1;
			break;
		
		case 1288:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1969611153;
			uParam1->f_4 = 1;
			break;
		
		case 1289:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("heists_leader_default_heist_finale_cut");
			uParam1->f_4 = 1;
			break;
		
		case 1290:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("time_start_value");
			uParam1->f_4 = 1;
			break;
		
		case 1291:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("time_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1292:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("kills_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1293:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("max_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1294:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("ambient_cop_kills_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1295:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("max_ambient_cop_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1296:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("head_shot_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1297:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("max_headshots");
			uParam1->f_4 = 1;
			break;
		
		case 1298:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("safe_drive_time_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1299:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("accuracy_multiplier");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1300:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("civillian_kills_start_value");
			uParam1->f_4 = 1;
			break;
		
		case 1301:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("civillian_kills_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1302:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("max_civillian_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1303:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("health_score_start_value");
			uParam1->f_4 = 1;
			break;
		
		case 1304:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("health_score_multiplier_0");
			uParam1->f_4 = 1;
			break;
		
		case 1305:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("health_score_multiplier_1");
			uParam1->f_4 = 1;
			break;
		
		case 1306:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("hack_score_start_value");
			uParam1->f_4 = 1;
			break;
		
		case 1307:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("hack_score_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1308:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("max_hacks");
			uParam1->f_4 = 1;
			break;
		
		case 1309:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("max_wanted_level");
			uParam1->f_4 = 1;
			break;
		
		case 1310:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("wanted_level_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1311:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("wanted_level_time_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1312:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("objective_max_team_players");
			uParam1->f_4 = 1;
			break;
		
		case 1313:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("objective_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1314:
			*uParam1 = 0f;
			uParam1->f_1 = 12000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 12000;
			uParam1->f_5 = joaat("job_heist_rp_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1315:
			*uParam1 = 0.1f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("heist_heavy_armour_affect");
			uParam1->f_4 = 1;
			break;
		
		case 1316:
			*uParam1 = 0.0001f;
			uParam1->f_1 = 1.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("heist_heavy_armour_speed");
			uParam1->f_4 = 1;
			break;
		
		case 1317:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("rp_heists_platinum_medal_rp_multiplier");
			uParam1->f_4 = 1;
			break;
		
		case 1318:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("expenses_heist_cost_percentage_fleeca");
			uParam1->f_4 = 1;
			break;
		
		case 1319:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("expenses_heist_cost_percentage_humane_labs");
			uParam1->f_4 = 1;
			break;
		
		case 1320:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("expenses_heist_cost_percentage_prison_break");
			uParam1->f_4 = 1;
			break;
		
		case 1321:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("expenses_heist_cost_percentage_series_a");
			uParam1->f_4 = 1;
			break;
		
		case 1322:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("expenses_heist_cost_percentage_pacific_standard");
			uParam1->f_4 = 1;
			break;
		
		case 1323:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("heists_prep_percentage_cut_fleeca");
			uParam1->f_4 = 1;
			break;
		
		case 1324:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("heists_prep_percentage_cut_humane_labs");
			uParam1->f_4 = 1;
			break;
		
		case 1325:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("heists_prep_percentage_cut_prison_break");
			uParam1->f_4 = 1;
			break;
		
		case 1326:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("heists_prep_percentage_cut_series_a");
			uParam1->f_4 = 1;
			break;
		
		case 1327:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("heists_prep_percentage_cut_pacific_standard");
			uParam1->f_4 = 1;
			break;
		
		case 1328:
			*uParam1 = 0f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 16;
			uParam1->f_5 = joaat("max_skill_matched_invites_lg");
			uParam1->f_4 = 1;
			break;
		
		case 1329:
			*uParam1 = 0f;
			uParam1->f_1 = 32f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 32;
			uParam1->f_5 = joaat("max_skill_matched_invites_ng");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1330:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 18000;
			uParam1->f_5 = joaat("luxe1_male_shoes_golden_hi_tops");
			uParam1->f_4 = 1;
			break;
		
		case 1331:
			*uParam1 = 6500f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 6500;
			uParam1->f_3 = 39000;
			uParam1->f_5 = joaat("luxe1_male_uppers_brown_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1332:
			*uParam1 = 6250f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 6250;
			uParam1->f_3 = 38000;
			uParam1->f_5 = joaat("luxe1_male_uppers_tan_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1333:
			*uParam1 = 5900f;
			uParam1->f_1 = 36000f;
			uParam1->f_2 = 5900;
			uParam1->f_3 = 36000;
			uParam1->f_5 = joaat("luxe1_male_uppers_black_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1334:
			*uParam1 = 6150f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 6150;
			uParam1->f_3 = 37000;
			uParam1->f_5 = joaat("luxe1_male_uppers_ochre_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1335:
			*uParam1 = 5750f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5750;
			uParam1->f_3 = 35000;
			uParam1->f_5 = joaat("luxe1_male_uppers_white_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1336:
			*uParam1 = 6050f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 6050;
			uParam1->f_3 = 37000;
			uParam1->f_5 = joaat("luxe1_male_uppers_leopard_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1337:
			*uParam1 = 5650f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 5650;
			uParam1->f_3 = 34000;
			uParam1->f_5 = joaat("luxe1_male_uppers_fall_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1338:
			*uParam1 = 5850f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5850;
			uParam1->f_3 = 35000;
			uParam1->f_5 = joaat("luxe1_male_uppers_hunter_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1339:
			*uParam1 = 5600f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 5600;
			uParam1->f_3 = 34000;
			uParam1->f_5 = joaat("luxe1_male_uppers_gray_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1340:
			*uParam1 = 6000f;
			uParam1->f_1 = 36000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 36000;
			uParam1->f_5 = joaat("luxe1_male_uppers_all_black_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1341:
			*uParam1 = 6300f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 6300;
			uParam1->f_3 = 38000;
			uParam1->f_5 = joaat("luxe1_male_uppers_burgundy_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1342:
			*uParam1 = 6400f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 6400;
			uParam1->f_3 = 39000;
			uParam1->f_5 = joaat("luxe1_male_uppers_dark_gray_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1343:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4950;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("luxe1_male_uppers_beige_wool_coat");
			uParam1->f_4 = 1;
			break;
		
		case 1344:
			*uParam1 = 5050f;
			uParam1->f_1 = 31000f;
			uParam1->f_2 = 5050;
			uParam1->f_3 = 31000;
			uParam1->f_5 = joaat("luxe1_male_uppers_gray_wool_coat");
			uParam1->f_4 = 1;
			break;
		
		case 1345:
			*uParam1 = 5150f;
			uParam1->f_1 = 31000f;
			uParam1->f_2 = 5150;
			uParam1->f_3 = 31000;
			uParam1->f_5 = joaat("luxe1_male_uppers_black_wool_coat");
			uParam1->f_4 = 1;
			break;
		
		case 1346:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4950;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("luxe1_male_uppers_navy_wool_coat");
			uParam1->f_4 = 1;
			break;
		
		case 1347:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4650;
			uParam1->f_3 = 28000;
			uParam1->f_5 = joaat("luxe1_male_uppers_classic_sn_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1348:
			*uParam1 = 4400f;
			uParam1->f_1 = 26000f;
			uParam1->f_2 = 4400;
			uParam1->f_3 = 26000;
			uParam1->f_5 = joaat("luxe1_male_uppers_brown_p_wing_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1349:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4650;
			uParam1->f_3 = 28000;
			uParam1->f_5 = joaat("luxe1_male_uppers_black_sn_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1350:
			*uParam1 = 4700f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4700;
			uParam1->f_3 = 28000;
			uParam1->f_5 = joaat("luxe1_male_uppers_color_sn_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1351:
			*uParam1 = 4600f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4600;
			uParam1->f_3 = 28000;
			uParam1->f_5 = joaat("luxe1_male_uppers_brown_diamond_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1352:
			*uParam1 = 3550f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 3550;
			uParam1->f_3 = 21000;
			uParam1->f_5 = joaat("luxe1_male_uppers_gold_coin_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1353:
			*uParam1 = 3500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 3500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = joaat("luxe1_male_uppers_bright_neon_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1354:
			*uParam1 = 3700f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 3700;
			uParam1->f_3 = 22000;
			uParam1->f_5 = joaat("luxe1_male_uppers_black_print_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1355:
			*uParam1 = 3400f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3400;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe1_male_uppers_black_dix_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1356:
			*uParam1 = 4150f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4150;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("luxe1_male_uppers_black_link_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1357:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4100;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("luxe1_male_uppers_red_link_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1358:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4650;
			uParam1->f_3 = 28000;
			uParam1->f_5 = joaat("luxe1_male_uppers_classic_sn_zipped_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1359:
			*uParam1 = 4400f;
			uParam1->f_1 = 26000f;
			uParam1->f_2 = 4400;
			uParam1->f_3 = 26000;
			uParam1->f_5 = joaat("luxe1_male_uppers_brown_p_wing_zipped_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1360:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4650;
			uParam1->f_3 = 28000;
			uParam1->f_5 = joaat("luxe1_male_uppers_black_sn_zipped_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1361:
			*uParam1 = 4700f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4700;
			uParam1->f_3 = 28000;
			uParam1->f_5 = joaat("luxe1_male_uppers_color_sn_zipped_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1362:
			*uParam1 = 4600f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4600;
			uParam1->f_3 = 28000;
			uParam1->f_5 = joaat("luxe1_male_uppers_brown_diamond_zipped_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1363:
			*uParam1 = 3550f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 3550;
			uParam1->f_3 = 21000;
			uParam1->f_5 = joaat("luxe1_male_uppers_gold_coin_zipped_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1364:
			*uParam1 = 3500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 3500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = joaat("luxe1_male_uppers_bright_neon_zipped_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1365:
			*uParam1 = 3700f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 3700;
			uParam1->f_3 = 22000;
			uParam1->f_5 = joaat("luxe1_male_uppers_black_print_zipped_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1366:
			*uParam1 = 3400f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3400;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe1_male_uppers_black_dix_zipped_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1367:
			*uParam1 = 4150f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4150;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("luxe1_male_uppers_black_link_zipped_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1368:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4100;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("luxe1_male_uppers_red_link_zipped_bomber");
			uParam1->f_4 = 1;
			break;
		
		case 1369:
			*uParam1 = 10650f;
			uParam1->f_1 = 64000f;
			uParam1->f_2 = 10650;
			uParam1->f_3 = 64000;
			uParam1->f_5 = joaat("luxe1_male_accessories_gold_sn_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1370:
			*uParam1 = 11600f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 70000;
			uParam1->f_5 = joaat("luxe1_male_accessories_platinum_sn_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1371:
			*uParam1 = 6750f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6750;
			uParam1->f_3 = 41000;
			uParam1->f_5 = joaat("luxe1_male_accessories_gold_skull_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1372:
			*uParam1 = 7800f;
			uParam1->f_1 = 47000f;
			uParam1->f_2 = 7800;
			uParam1->f_3 = 47000;
			uParam1->f_5 = joaat("luxe1_male_accessories_platinum_skull_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1373:
			*uParam1 = 11950f;
			uParam1->f_1 = 72000f;
			uParam1->f_2 = 11950;
			uParam1->f_3 = 72000;
			uParam1->f_5 = joaat("luxe1_male_accessories_platinum_balaclava_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1374:
			*uParam1 = 16050f;
			uParam1->f_1 = 97000f;
			uParam1->f_2 = 16050;
			uParam1->f_3 = 97000;
			uParam1->f_5 = joaat("luxe1_male_accessories_gold_zorse_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1375:
			*uParam1 = 16200f;
			uParam1->f_1 = 98000f;
			uParam1->f_2 = 16200;
			uParam1->f_3 = 98000;
			uParam1->f_5 = joaat("luxe1_male_accessories_platinum_zorse_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1376:
			*uParam1 = 13750f;
			uParam1->f_1 = 83000f;
			uParam1->f_2 = 13750;
			uParam1->f_3 = 83000;
			uParam1->f_5 = joaat("luxe1_male_accessories_gold_lc_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1377:
			*uParam1 = 14950f;
			uParam1->f_1 = 90000f;
			uParam1->f_2 = 14950;
			uParam1->f_3 = 90000;
			uParam1->f_5 = joaat("luxe1_male_accessories_platinum_lc_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1378:
			*uParam1 = 6850f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6850;
			uParam1->f_3 = 41000;
			uParam1->f_5 = joaat("luxe1_male_accessories_gold_dix_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1379:
			*uParam1 = 7450f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 45000;
			uParam1->f_5 = joaat("luxe1_male_accessories_platinum_dix_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1380:
			*uParam1 = 10300f;
			uParam1->f_1 = 62000f;
			uParam1->f_2 = 10300;
			uParam1->f_3 = 62000;
			uParam1->f_5 = joaat("luxe1_male_accessories_gold_le_chien_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1381:
			*uParam1 = 11200f;
			uParam1->f_1 = 68000f;
			uParam1->f_2 = 11200;
			uParam1->f_3 = 68000;
			uParam1->f_5 = joaat("luxe1_male_accessories_platinum_le_chien_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1382:
			*uParam1 = 6450f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 6450;
			uParam1->f_3 = 39000;
			uParam1->f_5 = joaat("luxe1_male_accessories_gold_illusion_square_studs");
			uParam1->f_4 = 1;
			break;
		
		case 1383:
			*uParam1 = 6900f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 6900;
			uParam1->f_3 = 42000;
			uParam1->f_5 = joaat("luxe1_male_accessories_gold_grid_square_studs");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1384:
			*uParam1 = 5800f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5800;
			uParam1->f_3 = 35000;
			uParam1->f_5 = joaat("luxe1_male_accessories_gold_noir_square_studs");
			uParam1->f_4 = 1;
			break;
		
		case 1385:
			*uParam1 = 8700f;
			uParam1->f_1 = 53000f;
			uParam1->f_2 = 8700;
			uParam1->f_3 = 53000;
			uParam1->f_5 = joaat("luxe1_male_accessories_platinum_grid_square_studs");
			uParam1->f_4 = 1;
			break;
		
		case 1386:
			*uParam1 = 8350f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 8350;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("luxe1_male_accessories_platinum_noir_square_studs");
			uParam1->f_4 = 1;
			break;
		
		case 1387:
			*uParam1 = 2700f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe1_male_accessories_platinum_gaulle_retro_hex");
			uParam1->f_4 = 1;
			break;
		
		case 1388:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("luxe1_male_accessories_gold_gaulle_retro_hex");
			uParam1->f_4 = 1;
			break;
		
		case 1389:
			*uParam1 = 2600f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2600;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe1_male_accessories_gold_covgari_supernova");
			uParam1->f_4 = 1;
			break;
		
		case 1390:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe1_male_accessories_pink_gold_covgari_supernova");
			uParam1->f_4 = 1;
			break;
		
		case 1391:
			*uParam1 = 3250f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3250;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe1_male_accessories_gold_crowex_chromosphere");
			uParam1->f_4 = 1;
			break;
		
		case 1392:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4100;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("luxe1_male_accessories_gold_ifruit_link");
			uParam1->f_4 = 1;
			break;
		
		case 1393:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("luxe1_male_accessories_silver_ifruit_link");
			uParam1->f_4 = 1;
			break;
		
		case 1394:
			*uParam1 = 4450f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 4450;
			uParam1->f_3 = 27000;
			uParam1->f_5 = joaat("luxe1_male_accessories_pink_gold_ifruit_link");
			uParam1->f_4 = 1;
			break;
		
		case 1395:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 18000;
			uParam1->f_5 = joaat("luxe1_female_shoes_golden_hi_tops");
			uParam1->f_4 = 1;
			break;
		
		case 1396:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4950;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("luxe1_female_uppers_cream_peacoat");
			uParam1->f_4 = 1;
			break;
		
		case 1397:
			*uParam1 = 5000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("luxe1_female_uppers_black_peacoat");
			uParam1->f_4 = 1;
			break;
		
		case 1398:
			*uParam1 = 4900f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4900;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("luxe1_female_uppers_navy_peacoat");
			uParam1->f_4 = 1;
			break;
		
		case 1399:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4950;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("luxe1_female_uppers_gray_peacoat");
			uParam1->f_4 = 1;
			break;
		
		case 1400:
			*uParam1 = 4800f;
			uParam1->f_1 = 29000f;
			uParam1->f_2 = 4800;
			uParam1->f_3 = 29000;
			uParam1->f_5 = joaat("luxe1_female_uppers_green_peacoat");
			uParam1->f_4 = 1;
			break;
		
		case 1401:
			*uParam1 = 7400f;
			uParam1->f_1 = 44000f;
			uParam1->f_2 = 7400;
			uParam1->f_3 = 44000;
			uParam1->f_5 = joaat("luxe1_female_uppers_red_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1402:
			*uParam1 = 7150f;
			uParam1->f_1 = 43000f;
			uParam1->f_2 = 7150;
			uParam1->f_3 = 43000;
			uParam1->f_5 = joaat("luxe1_female_uppers_brown_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1403:
			*uParam1 = 6800f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6800;
			uParam1->f_3 = 41000;
			uParam1->f_5 = joaat("luxe1_female_uppers_tan_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1404:
			*uParam1 = 7050f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 7050;
			uParam1->f_3 = 42000;
			uParam1->f_5 = joaat("luxe1_female_uppers_black_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1405:
			*uParam1 = 6650f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 6650;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("luxe1_female_uppers_white_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1406:
			*uParam1 = 6950f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 6950;
			uParam1->f_3 = 42000;
			uParam1->f_5 = joaat("luxe1_female_uppers_leopard_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1407:
			*uParam1 = 6550f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 6550;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("luxe1_female_uppers_fall_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1408:
			*uParam1 = 6750f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6750;
			uParam1->f_3 = 41000;
			uParam1->f_5 = joaat("luxe1_female_uppers_blue_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1409:
			*uParam1 = 6500f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 6500;
			uParam1->f_3 = 39000;
			uParam1->f_5 = joaat("luxe1_female_uppers_hunter_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1410:
			*uParam1 = 6900f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 6900;
			uParam1->f_3 = 42000;
			uParam1->f_5 = joaat("luxe1_female_uppers_green_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1411:
			*uParam1 = 7200f;
			uParam1->f_1 = 43000f;
			uParam1->f_2 = 7200;
			uParam1->f_3 = 43000;
			uParam1->f_5 = joaat("luxe1_female_uppers_gray_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1412:
			*uParam1 = 7300f;
			uParam1->f_1 = 44000f;
			uParam1->f_2 = 7300;
			uParam1->f_3 = 44000;
			uParam1->f_5 = joaat("luxe1_female_uppers_all_black_leather_fur_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1413:
			*uParam1 = 5400f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 5400;
			uParam1->f_3 = 32000;
			uParam1->f_5 = joaat("luxe1_female_uppers_black_deep_belted_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1414:
			*uParam1 = 5650f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 5650;
			uParam1->f_3 = 34000;
			uParam1->f_5 = joaat("luxe1_female_uppers_brown_deep_belted_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1415:
			*uParam1 = 5250f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 5250;
			uParam1->f_3 = 32000;
			uParam1->f_5 = joaat("luxe1_female_uppers_red_deep_belted_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1416:
			*uParam1 = 5550f;
			uParam1->f_1 = 33000f;
			uParam1->f_2 = 5550;
			uParam1->f_3 = 33000;
			uParam1->f_5 = joaat("luxe1_female_uppers_teal_deep_belted_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1417:
			*uParam1 = 10650f;
			uParam1->f_1 = 64000f;
			uParam1->f_2 = 10650;
			uParam1->f_3 = 64000;
			uParam1->f_5 = joaat("luxe1_female_accessories_gold_sn_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1418:
			*uParam1 = 11600f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 70000;
			uParam1->f_5 = joaat("luxe1_female_accessories_platinum_sn_necklace");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1419:
			*uParam1 = 6750f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6750;
			uParam1->f_3 = 41000;
			uParam1->f_5 = joaat("luxe1_female_accessories_gold_skull_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1420:
			*uParam1 = 7800f;
			uParam1->f_1 = 47000f;
			uParam1->f_2 = 7800;
			uParam1->f_3 = 47000;
			uParam1->f_5 = joaat("luxe1_female_accessories_platinum_skull_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1421:
			*uParam1 = 11950f;
			uParam1->f_1 = 72000f;
			uParam1->f_2 = 11950;
			uParam1->f_3 = 72000;
			uParam1->f_5 = joaat("luxe1_female_accessories_platinum_balaclava_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1422:
			*uParam1 = 16050f;
			uParam1->f_1 = 97000f;
			uParam1->f_2 = 16050;
			uParam1->f_3 = 97000;
			uParam1->f_5 = joaat("luxe1_female_accessories_gold_zorse_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1423:
			*uParam1 = 16200f;
			uParam1->f_1 = 98000f;
			uParam1->f_2 = 16200;
			uParam1->f_3 = 98000;
			uParam1->f_5 = joaat("luxe1_female_accessories_platinum_zorse_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1424:
			*uParam1 = 13750f;
			uParam1->f_1 = 83000f;
			uParam1->f_2 = 13750;
			uParam1->f_3 = 83000;
			uParam1->f_5 = joaat("luxe1_female_accessories_gold_lc_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1425:
			*uParam1 = 14950f;
			uParam1->f_1 = 90000f;
			uParam1->f_2 = 14950;
			uParam1->f_3 = 90000;
			uParam1->f_5 = joaat("luxe1_female_accessories_platinum_lc_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1426:
			*uParam1 = 6850f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6850;
			uParam1->f_3 = 41000;
			uParam1->f_5 = joaat("luxe1_female_accessories_gold_dix_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1427:
			*uParam1 = 7450f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 45000;
			uParam1->f_5 = joaat("luxe1_female_accessories_platinum_dix_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1428:
			*uParam1 = 10300f;
			uParam1->f_1 = 62000f;
			uParam1->f_2 = 10300;
			uParam1->f_3 = 62000;
			uParam1->f_5 = joaat("luxe1_female_accessories_gold_le_chien_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1429:
			*uParam1 = 11200f;
			uParam1->f_1 = 68000f;
			uParam1->f_2 = 11200;
			uParam1->f_3 = 68000;
			uParam1->f_5 = joaat("luxe1_female_accessories_platinum_le_chien_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1430:
			*uParam1 = 8700f;
			uParam1->f_1 = 53000f;
			uParam1->f_2 = 8700;
			uParam1->f_3 = 53000;
			uParam1->f_5 = joaat("luxe1_female_accessories_platinum_pendulums");
			uParam1->f_4 = 1;
			break;
		
		case 1431:
			*uParam1 = 6900f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 6900;
			uParam1->f_3 = 42000;
			uParam1->f_5 = joaat("luxe1_female_accessories_gold_pendulums");
			uParam1->f_4 = 1;
			break;
		
		case 1432:
			*uParam1 = 6300f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 6300;
			uParam1->f_3 = 38000;
			uParam1->f_5 = joaat("luxe1_female_accessories_gold_diamond_rounds");
			uParam1->f_4 = 1;
			break;
		
		case 1433:
			*uParam1 = 7450f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 45000;
			uParam1->f_5 = joaat("luxe1_female_accessories_gold_diamond_drops");
			uParam1->f_4 = 1;
			break;
		
		case 1434:
			*uParam1 = 9450f;
			uParam1->f_1 = 57000f;
			uParam1->f_2 = 9450;
			uParam1->f_3 = 57000;
			uParam1->f_5 = joaat("luxe1_female_accessories_platinum_diamond_drops_");
			uParam1->f_4 = 1;
			break;
		
		case 1435:
			*uParam1 = 6300f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 6300;
			uParam1->f_3 = 38000;
			uParam1->f_5 = joaat("luxe1_female_accessories_black_gold_diamond_drops");
			uParam1->f_4 = 1;
			break;
		
		case 1436:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe1_female_accessories_platinum_waterfalls");
			uParam1->f_4 = 1;
			break;
		
		case 1437:
			*uParam1 = 2750f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2750;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe1_female_accessories_platinum_totems");
			uParam1->f_4 = 1;
			break;
		
		case 1438:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe1_female_accessories_platinum_sun_drops");
			uParam1->f_4 = 1;
			break;
		
		case 1439:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4100;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("luxe1_female_accessories_gold_ifruit_link");
			uParam1->f_4 = 1;
			break;
		
		case 1440:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("luxe1_female_accessories_silver_ifruit_link");
			uParam1->f_4 = 1;
			break;
		
		case 1441:
			*uParam1 = 4450f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 4450;
			uParam1->f_3 = 27000;
			uParam1->f_5 = joaat("luxe1_female_accessories_pink_gold_ifruit_link");
			uParam1->f_4 = 1;
			break;
		
		case 1442:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_male_outfits_the_midas");
			uParam1->f_4 = 1;
			break;
		
		case 1443:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_male_outfits_the_deluxe");
			uParam1->f_4 = 1;
			break;
		
		case 1444:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_male_outfits_the_exclusive");
			uParam1->f_4 = 1;
			break;
		
		case 1445:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_male_outfits_the_perseus");
			uParam1->f_4 = 1;
			break;
		
		case 1446:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_male_outfits_the_flash");
			uParam1->f_4 = 1;
			break;
		
		case 1447:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_male_outfits_the_pimp");
			uParam1->f_4 = 1;
			break;
		
		case 1448:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_male_outfits_the_talent");
			uParam1->f_4 = 1;
			break;
		
		case 1449:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_male_outfits_the_luxor");
			uParam1->f_4 = 1;
			break;
		
		case 1450:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_male_outfits_the_refined");
			uParam1->f_4 = 1;
			break;
		
		case 1451:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_male_outfits_the_sessanta_nove");
			uParam1->f_4 = 1;
			break;
		
		case 1452:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_male_outfits_the_grand");
			uParam1->f_4 = 1;
			break;
		
		case 1453:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_male_outfits_the_vogue");
			uParam1->f_4 = 1;
			break;
		
		case 1454:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_female_outfits_the_socialite");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1455:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_female_outfits_the_accessory");
			uParam1->f_4 = 1;
			break;
		
		case 1456:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_female_outfits_the_wealth");
			uParam1->f_4 = 1;
			break;
		
		case 1457:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_female_outfits_the_status");
			uParam1->f_4 = 1;
			break;
		
		case 1458:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_female_outfits_the_perseus");
			uParam1->f_4 = 1;
			break;
		
		case 1459:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_female_outfits_the_elite");
			uParam1->f_4 = 1;
			break;
		
		case 1460:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_female_outfits_the_chic");
			uParam1->f_4 = 1;
			break;
		
		case 1461:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_female_outfits_the_golden_girl");
			uParam1->f_4 = 1;
			break;
		
		case 1462:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_female_outfits_the_lavish");
			uParam1->f_4 = 1;
			break;
		
		case 1463:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_female_outfits_the_class");
			uParam1->f_4 = 1;
			break;
		
		case 1464:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_female_outfits_the_shine");
			uParam1->f_4 = 1;
			break;
		
		case 1465:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe1_female_outfits_the_puma");
			uParam1->f_4 = 1;
			break;
		
		case 1466:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("luxe1_car_mods_perseus_green_wings_monogram");
			uParam1->f_4 = 1;
			break;
		
		case 1467:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("luxe1_kit_assault_rifle_yusuf_amir_luxury_finish");
			uParam1->f_4 = 1;
			break;
		
		case 1468:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("luxe1_addonsadvanced_rifle_gilded_gun_metal_finish");
			uParam1->f_4 = 1;
			break;
		
		case 1469:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("luxe1_addonscarbine_rifle_yusuf_amir_luxury_finish");
			uParam1->f_4 = 1;
			break;
		
		case 1470:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("luxe1_addonsap_pistol_gilded_gun_metal_finish");
			uParam1->f_4 = 1;
			break;
		
		case 1471:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("luxe1_addonsheavy_pistol_etched_wood_grip_finish");
			uParam1->f_4 = 1;
			break;
		
		case 1472:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("luxe1_addonspistol_yusuf_amir_luxury_finish");
			uParam1->f_4 = 1;
			break;
		
		case 1473:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("luxe1_addonspistol_50_platinum_pearl_deluxe_finish");
			uParam1->f_4 = 1;
			break;
		
		case 1474:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("luxe1_addonssmg_yusuf_amir_luxury_finish");
			uParam1->f_4 = 1;
			break;
		
		case 1475:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("luxe1_addonsmarksman_rifle_yusuf_amir_luxury_finish");
			uParam1->f_4 = 1;
			break;
		
		case 1476:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("luxe1_addonsmicro_smg_yusuf_amir_luxury_finish");
			uParam1->f_4 = 1;
			break;
		
		case 1477:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("luxe1_addonssawed_off_shotgun_gilded_gun_metal_finish");
			uParam1->f_4 = 1;
			break;
		
		case 1478:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("luxe1_addonssniper_rifle_etched_wood_grip_finish");
			uParam1->f_4 = 1;
			break;
		
		case 1479:
			*uParam1 = 5900f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 5900;
			uParam1->f_3 = 18000;
			uParam1->f_5 = joaat("luxe1_both_genders_serpent_of_death");
			uParam1->f_4 = 1;
			break;
		
		case 1480:
			*uParam1 = 7100f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 7100;
			uParam1->f_3 = 22000;
			uParam1->f_5 = joaat("luxe1_both_genders_elaborate_los_muertos");
			uParam1->f_4 = 1;
			break;
		
		case 1481:
			*uParam1 = 6050f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 6050;
			uParam1->f_3 = 18000;
			uParam1->f_5 = joaat("luxe1_both_genders_floral_raven");
			uParam1->f_4 = 1;
			break;
		
		case 1482:
			*uParam1 = 12400f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 38000;
			uParam1->f_5 = joaat("luxe1_both_genders_adorned_wolf");
			uParam1->f_4 = 1;
			break;
		
		case 1483:
			*uParam1 = 6150f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 6150;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe1_both_genders_eye_of_the_griffin");
			uParam1->f_4 = 1;
			break;
		
		case 1484:
			*uParam1 = 8900f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 8900;
			uParam1->f_3 = 27000;
			uParam1->f_5 = joaat("luxe1_both_genders_flying_eye");
			uParam1->f_4 = 1;
			break;
		
		case 1485:
			*uParam1 = 9500f;
			uParam1->f_1 = 29000f;
			uParam1->f_2 = 9500;
			uParam1->f_3 = 29000;
			uParam1->f_5 = joaat("luxe1_both_genders_floral_symmetry");
			uParam1->f_4 = 1;
			break;
		
		case 1486:
			*uParam1 = 8350f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 8350;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("luxe1_both_genders_mermaid_harpist");
			uParam1->f_4 = 1;
			break;
		
		case 1487:
			*uParam1 = 9000f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 9000;
			uParam1->f_3 = 27000;
			uParam1->f_5 = joaat("luxe1_both_genders_ancient_queen");
			uParam1->f_4 = 1;
			break;
		
		case 1488:
			*uParam1 = 8050f;
			uParam1->f_1 = 24000f;
			uParam1->f_2 = 8050;
			uParam1->f_3 = 24000;
			uParam1->f_5 = joaat("luxe1_both_genders_smoking_sisters");
			uParam1->f_4 = 1;
			break;
		
		case 1489:
			*uParam1 = 8350f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 8350;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("luxe1_both_genders_geisha_bloom");
			uParam1->f_4 = 1;
			break;
		
		case 1490:
			*uParam1 = 11150f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 11150;
			uParam1->f_3 = 34000;
			uParam1->f_5 = joaat("luxe1_both_genders_archangel_and_mary");
			uParam1->f_4 = 1;
			break;
		
		case 1491:
			*uParam1 = 6350f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 6350;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe1_both_genders_gabriel_");
			uParam1->f_4 = 1;
			break;
		
		case 1492:
			*uParam1 = 13500f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 13500;
			uParam1->f_3 = 41000;
			uParam1->f_5 = joaat("luxe1_both_genders_feather_mural");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1493:
			*uParam1 = 480000f;
			uParam1->f_1 = 1463000f;
			uParam1->f_2 = 480000;
			uParam1->f_3 = 1463000;
			uParam1->f_5 = joaat("luxe1_website_benefactor_stirling_gt");
			uParam1->f_4 = 1;
			break;
		
		case 1494:
			*uParam1 = 2500000f;
			uParam1->f_1 = 1.25E+07f;
			uParam1->f_2 = 2500000;
			uParam1->f_3 = 12500000;
			uParam1->f_5 = joaat("luxe1_website_buckingham_luxor_deluxe");
			uParam1->f_4 = 1;
			break;
		
		case 1495:
			*uParam1 = 950000f;
			uParam1->f_1 = 2925000f;
			uParam1->f_2 = 950000;
			uParam1->f_3 = 2925000;
			uParam1->f_5 = joaat("luxe1_website_pegassi_osiris");
			uParam1->f_4 = 1;
			break;
		
		case 1496:
			*uParam1 = 2500000f;
			uParam1->f_1 = 7725000f;
			uParam1->f_2 = 2500000;
			uParam1->f_3 = 7725000;
			uParam1->f_5 = joaat("luxe1_website_buckingham_swift_deluxe");
			uParam1->f_4 = 1;
			break;
		
		case 1497:
			*uParam1 = 95000f;
			uParam1->f_1 = 293000f;
			uParam1->f_2 = 95000;
			uParam1->f_3 = 293000;
			uParam1->f_5 = joaat("luxe1_website_albany_virgo");
			uParam1->f_4 = 1;
			break;
		
		case 1498:
			*uParam1 = 400000f;
			uParam1->f_1 = 1268000f;
			uParam1->f_2 = 400000;
			uParam1->f_3 = 1268000;
			uParam1->f_5 = joaat("luxe1_website_enus_windsor");
			uParam1->f_4 = 1;
			break;
		
		case 1499:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("luxe1_car_mods_sessanta_nove_monogram");
			uParam1->f_4 = 1;
			break;
		
		case 1500:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("luxe1_car_mods_sessanta_nove_multi_color");
			uParam1->f_4 = 1;
			break;
		
		case 1501:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("luxe1_car_mods_sessanta_nove_geometric");
			uParam1->f_4 = 1;
			break;
		
		case 1502:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("luxe1_car_mods_perseus_wings_monogram");
			uParam1->f_4 = 1;
			break;
		
		case 1503:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("luxe1_car_mods_santo_capra_python");
			uParam1->f_4 = 1;
			break;
		
		case 1504:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("luxe1_car_mods_santo_capra_cheetah");
			uParam1->f_4 = 1;
			break;
		
		case 1505:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("luxe1_car_mods_yeti_mall_ninja");
			uParam1->f_4 = 1;
			break;
		
		case 1506:
			*uParam1 = 5800f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 5800;
			uParam1->f_3 = 18000;
			uParam1->f_5 = joaat("luxe1_primary_combat_pdw");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1507:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe2_male_uppers_beige_trench_coat");
			uParam1->f_4 = 1;
			break;
		
		case 1508:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe2_male_uppers_black_trench_coat");
			uParam1->f_4 = 1;
			break;
		
		case 1509:
			*uParam1 = 3150f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3150;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe2_male_uppers_navy_trench_coat");
			uParam1->f_4 = 1;
			break;
		
		case 1510:
			*uParam1 = 3200f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe2_male_uppers_gray_trench_coat");
			uParam1->f_4 = 1;
			break;
		
		case 1511:
			*uParam1 = 3050f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3050;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe2_male_uppers_green_trench_coat");
			uParam1->f_4 = 1;
			break;
		
		case 1512:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe2_male_uppers_gold_geo_print_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1513:
			*uParam1 = 2600f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2600;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe2_male_uppers_le_chien_print_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1514:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("luxe2_male_uppers_teal_tweed_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1515:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_male_uppers_classic_p_print_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1516:
			*uParam1 = 2750f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2750;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_male_uppers_brown_p_print_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1517:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_male_uppers_sword_and_shield_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1518:
			*uParam1 = 3250f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3250;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe2_male_uppers_black_sn_print_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1519:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_male_uppers_brown_p_wi_ng_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1520:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe2_male_uppers_classic_sn_print_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1521:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe2_male_uppers_color_diamond_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1522:
			*uParam1 = 3200f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe2_male_uppers_gold_diamond_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1523:
			*uParam1 = 3300f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3300;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe2_male_uppers_color_sn_print_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1524:
			*uParam1 = 3300f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3300;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe2_male_uppers_color_geo_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1525:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("luxe2_male_accessories_gold_loose_link_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1526:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe2_male_accessories_platinum_loose_link_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1527:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_male_accessories_gold_belcher_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1528:
			*uParam1 = 2850f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 18000;
			uParam1->f_5 = joaat("luxe2_male_accessories_platinum_belcher_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1529:
			*uParam1 = 2700f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe2_male_accessories_gold_pretzel_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1530:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_male_accessories_platinum_pretzel_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1531:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe2_male_accessories_gold_curb_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1532:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_male_accessories_platinum_curb_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1533:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_male_accessories_gold_diamond_curb_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1534:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 18000;
			uParam1->f_5 = joaat("luxe2_male_accessories_platinum_diamond_curb_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1535:
			*uParam1 = 5700f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5700;
			uParam1->f_3 = 35000;
			uParam1->f_5 = joaat("luxe2_male_accessories_gold_heavy_curb_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1536:
			*uParam1 = 6000f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 37000;
			uParam1->f_5 = joaat("luxe2_male_accessories_platinum_heavy_curb_chain");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1537:
			*uParam1 = 5400f;
			uParam1->f_1 = 33000f;
			uParam1->f_2 = 5400;
			uParam1->f_3 = 33000;
			uParam1->f_5 = joaat("luxe2_male_accessories_gold_heavy_square_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1538:
			*uParam1 = 5700f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5700;
			uParam1->f_3 = 35000;
			uParam1->f_5 = joaat("luxe2_male_accessories_platinum_heavy_square_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1539:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_male_accessories_gold_square_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1540:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_male_accessories_platinum_square_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1541:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_male_accessories_gold_popcorn_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1542:
			*uParam1 = 2950f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 2950;
			uParam1->f_3 = 18000;
			uParam1->f_5 = joaat("luxe2_male_accessories_platinum_popcorn_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1543:
			*uParam1 = 2900f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 2900;
			uParam1->f_3 = 18000;
			uParam1->f_5 = joaat("luxe2_male_accessories_gold_rope_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1544:
			*uParam1 = 3050f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3050;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe2_male_accessories_platinum_rope_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1545:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("luxe2_male_accessories_pink_gold_covgari_explorer");
			uParam1->f_4 = 1;
			break;
		
		case 1546:
			*uParam1 = 3100f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3100;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe2_male_accessories_gold_covgari_universe");
			uParam1->f_4 = 1;
			break;
		
		case 1547:
			*uParam1 = 2600f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2600;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe2_male_accessories_silver_covgari_universe");
			uParam1->f_4 = 1;
			break;
		
		case 1548:
			*uParam1 = 8150f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 8150;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("luxe2_female_uppers_padded_leather_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1549:
			*uParam1 = 3150f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3150;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe2_female_uppers_cream_trench_coat");
			uParam1->f_4 = 1;
			break;
		
		case 1550:
			*uParam1 = 3150f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3150;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe2_female_uppers_black_trench_coat");
			uParam1->f_4 = 1;
			break;
		
		case 1551:
			*uParam1 = 3100f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3100;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe2_female_uppers_navy_trench_coat");
			uParam1->f_4 = 1;
			break;
		
		case 1552:
			*uParam1 = 3100f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3100;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe2_female_uppers_gray_trench_coat");
			uParam1->f_4 = 1;
			break;
		
		case 1553:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 18000;
			uParam1->f_5 = joaat("luxe2_female_uppers_green_trench_coat");
			uParam1->f_4 = 1;
			break;
		
		case 1554:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe2_female_uppers_gold_geo_print_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1555:
			*uParam1 = 2600f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2600;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe2_female_uppers_le_chien_print_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1556:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("luxe2_female_uppers_teal_tweed_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1557:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_female_uppers_classic_p_print_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1558:
			*uParam1 = 2750f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2750;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_female_uppers_brown_p_print_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1559:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_female_uppers_sword_and_shield_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1560:
			*uParam1 = 3250f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3250;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe2_female_uppers_black_sn_print_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1561:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_female_uppers_brown_p_wi_ng_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1562:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe2_female_uppers_classic_sn_print_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1563:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe2_female_uppers_color_diamond_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1564:
			*uParam1 = 3200f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe2_female_uppers_gold_diamond_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1565:
			*uParam1 = 3300f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3300;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe2_female_uppers_color_sn_print_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1566:
			*uParam1 = 3300f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3300;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe2_female_uppers_color_geo_sweater");
			uParam1->f_4 = 1;
			break;
		
		case 1567:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("luxe2_female_uppers_gold_loose_link_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1568:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe2_female_uppers_platinum_loose_link_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1569:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_female_uppers_gold_belcher_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1570:
			*uParam1 = 2850f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 18000;
			uParam1->f_5 = joaat("luxe2_female_uppers_platinum_belcher_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1571:
			*uParam1 = 2700f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe2_female_uppers_gold_pretzel_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1572:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_female_lowers_platinum_pretzel_chain");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1573:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = joaat("luxe2_female_lowers_gold_curb_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1574:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_female_lowers_platinum_curb_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1575:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_female_lowers_gold_diamond_curb_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1576:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 18000;
			uParam1->f_5 = joaat("luxe2_female_lowers_platinum_diamond_curb_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1577:
			*uParam1 = 5700f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5700;
			uParam1->f_3 = 35000;
			uParam1->f_5 = joaat("luxe2_female_accessories_gold_heavy_curb_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1578:
			*uParam1 = 6000f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 37000;
			uParam1->f_5 = joaat("luxe2_female_accessories_platinum_heavy_curb_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1579:
			*uParam1 = 5400f;
			uParam1->f_1 = 33000f;
			uParam1->f_2 = 5400;
			uParam1->f_3 = 33000;
			uParam1->f_5 = joaat("luxe2_female_accessories_gold_heavy_square_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1580:
			*uParam1 = 5700f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5700;
			uParam1->f_3 = 35000;
			uParam1->f_5 = joaat("luxe2_female_accessories_platinum_heavy_square_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1581:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_female_accessories_gold_square_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1582:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_female_accessories_platinum_square_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1583:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_female_accessories_gold_popcorn_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1584:
			*uParam1 = 2950f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 2950;
			uParam1->f_3 = 18000;
			uParam1->f_5 = joaat("luxe2_female_accessories_platinum_popcorn_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1585:
			*uParam1 = 2900f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 2900;
			uParam1->f_3 = 18000;
			uParam1->f_5 = joaat("luxe2_female_accessories_gold_rope_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1586:
			*uParam1 = 3050f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3050;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe2_female_accessories_platinum_rope_chain");
			uParam1->f_4 = 1;
			break;
		
		case 1587:
			*uParam1 = 8000f;
			uParam1->f_1 = 49000f;
			uParam1->f_2 = 8000;
			uParam1->f_3 = 49000;
			uParam1->f_5 = joaat("luxe2_female_accessories_gold_snake_cuff");
			uParam1->f_4 = 1;
			break;
		
		case 1588:
			*uParam1 = 9800f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 9800;
			uParam1->f_3 = 60000;
			uParam1->f_5 = joaat("luxe2_female_accessories_gold_diamond_cuff");
			uParam1->f_4 = 1;
			break;
		
		case 1589:
			*uParam1 = 6950f;
			uParam1->f_1 = 43000f;
			uParam1->f_2 = 6950;
			uParam1->f_3 = 43000;
			uParam1->f_5 = joaat("luxe2_female_accessories_gold_plain_cuff");
			uParam1->f_4 = 1;
			break;
		
		case 1590:
			*uParam1 = 5950f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 5950;
			uParam1->f_3 = 37000;
			uParam1->f_5 = joaat("luxe2_female_accessories_gold_le_chien_cuff");
			uParam1->f_4 = 1;
			break;
		
		case 1591:
			*uParam1 = 7750f;
			uParam1->f_1 = 47000f;
			uParam1->f_2 = 7750;
			uParam1->f_3 = 47000;
			uParam1->f_5 = joaat("luxe2_female_accessories_gold_detail_cuff");
			uParam1->f_4 = 1;
			break;
		
		case 1592:
			*uParam1 = 8250f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 8250;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("luxe2_female_accessories_gold_swirl_cuff");
			uParam1->f_4 = 1;
			break;
		
		case 1593:
			*uParam1 = 9500f;
			uParam1->f_1 = 58000f;
			uParam1->f_2 = 9500;
			uParam1->f_3 = 58000;
			uParam1->f_5 = joaat("luxe2_female_accessories_gold_textured_cuff");
			uParam1->f_4 = 1;
			break;
		
		case 1594:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_male_outfits_the_investor");
			uParam1->f_4 = 1;
			break;
		
		case 1595:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_male_outfits_the_mac");
			uParam1->f_4 = 1;
			break;
		
		case 1596:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_male_outfits_the_bullion");
			uParam1->f_4 = 1;
			break;
		
		case 1597:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_male_outfits_the_baller");
			uParam1->f_4 = 1;
			break;
		
		case 1598:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_male_outfits_the_benefactor");
			uParam1->f_4 = 1;
			break;
		
		case 1599:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_male_outfits_the_stacks");
			uParam1->f_4 = 1;
			break;
		
		case 1600:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_male_outfits_the_leisure");
			uParam1->f_4 = 1;
			break;
		
		case 1601:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_male_outfits_the_vip");
			uParam1->f_4 = 1;
			break;
		
		case 1602:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_male_outfits_the_jet");
			uParam1->f_4 = 1;
			break;
		
		case 1603:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_male_outfits_the_platinum");
			uParam1->f_4 = 1;
			break;
		
		case 1604:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_female_outfits_the_vamp");
			uParam1->f_4 = 1;
			break;
		
		case 1605:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_female_outfits_the_treasure");
			uParam1->f_4 = 1;
			break;
		
		case 1606:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_female_outfits_the_manor");
			uParam1->f_4 = 1;
			break;
		
		case 1607:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_female_outfits_the_rose");
			uParam1->f_4 = 1;
			break;
		
		case 1608:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_female_outfits_the_sessanta_nove");
			uParam1->f_4 = 1;
			break;
		
		case 1609:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_female_outfits_the_swank");
			uParam1->f_4 = 1;
			break;
		
		case 1610:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_female_outfits_the_cruise");
			uParam1->f_4 = 1;
			break;
		
		case 1611:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_female_outfits_the_grace");
			uParam1->f_4 = 1;
			break;
		
		case 1612:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_female_outfits_the_heir");
			uParam1->f_4 = 1;
			break;
		
		case 1613:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("luxe2_female_outfits_the_account");
			uParam1->f_4 = 1;
			break;
		
		case 1614:
			*uParam1 = 350000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 350000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("luxe2_coil_brawler");
			uParam1->f_4 = 1;
			break;
		
		case 1615:
			*uParam1 = 100000f;
			uParam1->f_1 = 340000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 340000;
			uParam1->f_5 = joaat("luxe2_vapid_chino");
			uParam1->f_4 = 1;
			break;
		
		case 1616:
			*uParam1 = 340000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 340000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("luxe2_invetero_coquette_blackfin");
			uParam1->f_4 = 1;
			break;
		
		case 1617:
			*uParam1 = 1000000f;
			uParam1->f_1 = 3300000f;
			uParam1->f_2 = 1000000;
			uParam1->f_3 = 3300000;
			uParam1->f_5 = joaat("luxe2_progen_t20");
			uParam1->f_4 = 1;
			break;
		
		case 1618:
			*uParam1 = 850000f;
			uParam1->f_1 = 2625000f;
			uParam1->f_2 = 850000;
			uParam1->f_3 = 2625000;
			uParam1->f_5 = joaat("luxe2_lampadati_toro");
			uParam1->f_4 = 1;
			break;
		
		case 1619:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("luxe2_dinka_vindicator");
			uParam1->f_4 = 1;
			break;
		
		case 1620:
			*uParam1 = 15000f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 70000;
			uParam1->f_5 = -1328179168;
			uParam1->f_4 = 1;
			break;
		
		case 1621:
			*uParam1 = 15000f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 70000;
			uParam1->f_5 = 1612971844;
			uParam1->f_4 = 1;
			break;
		
		case 1622:
			*uParam1 = 15000f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 70000;
			uParam1->f_5 = -2042311803;
			uParam1->f_4 = 1;
			break;
		
		case 1623:
			*uParam1 = 3000f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 15000;
			uParam1->f_5 = 881393295;
			uParam1->f_4 = 1;
			break;
		
		case 1624:
			*uParam1 = 2000f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -1236341588;
			uParam1->f_4 = 1;
			break;
		
		case 1625:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = joaat("luxe2_the_pimp_knuckle_duster");
			uParam1->f_4 = 1;
			break;
		
		case 1626:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = joaat("luxe2_the_ballas_knuckle_duster");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1627:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = joaat("luxe2_the_hustler_knuckle_duster");
			uParam1->f_4 = 1;
			break;
		
		case 1628:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = joaat("luxe2_the_rock_knuckle_duster");
			uParam1->f_4 = 1;
			break;
		
		case 1629:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = joaat("luxe2_the_hater_knuckle_duster");
			uParam1->f_4 = 1;
			break;
		
		case 1630:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = joaat("luxe2_the_lover_knuckle_duster");
			uParam1->f_4 = 1;
			break;
		
		case 1631:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = joaat("luxe2_the_player_knuckle_duster");
			uParam1->f_4 = 1;
			break;
		
		case 1632:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = joaat("luxe2_the_king_knuckle_duster");
			uParam1->f_4 = 1;
			break;
		
		case 1633:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = joaat("luxe2_the_vagos_knuckle_duster");
			uParam1->f_4 = 1;
			break;
		
		case 1634:
			*uParam1 = 5450f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 5450;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_the_howler");
			uParam1->f_4 = 1;
			break;
		
		case 1635:
			*uParam1 = 5050f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 5050;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("luxe2_fatal_dagger");
			uParam1->f_4 = 1;
			break;
		
		case 1636:
			*uParam1 = 7250f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 7250;
			uParam1->f_3 = 22000;
			uParam1->f_5 = joaat("luxe2_intrometric");
			uParam1->f_4 = 1;
			break;
		
		case 1637:
			*uParam1 = 6550f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 6550;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("luxe2_cross_of_roses");
			uParam1->f_4 = 1;
			break;
		
		case 1638:
			*uParam1 = 13100f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 13100;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("luxe2_geometric_galaxy");
			uParam1->f_4 = 1;
			break;
		
		case 1639:
			*uParam1 = 9200f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 9200;
			uParam1->f_3 = 28000;
			uParam1->f_5 = joaat("luxe2_egyptian_mural");
			uParam1->f_4 = 1;
			break;
		
		case 1640:
			*uParam1 = 10650f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 10650;
			uParam1->f_3 = 32000;
			uParam1->f_5 = joaat("luxe2_heavenly_deity");
			uParam1->f_4 = 1;
			break;
		
		case 1641:
			*uParam1 = 11600f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 35000;
			uParam1->f_5 = joaat("luxe2_divine_goddess");
			uParam1->f_4 = 1;
			break;
		
		case 1642:
			*uParam1 = 14100f;
			uParam1->f_1 = 43000f;
			uParam1->f_2 = 14100;
			uParam1->f_3 = 43000;
			uParam1->f_5 = joaat("luxe2_cloaked_angel");
			uParam1->f_4 = 1;
			break;
		
		case 1643:
			*uParam1 = 7700f;
			uParam1->f_1 = 23000f;
			uParam1->f_2 = 7700;
			uParam1->f_3 = 23000;
			uParam1->f_5 = joaat("luxe2_starmetric");
			uParam1->f_4 = 1;
			break;
		
		case 1644:
			*uParam1 = 5700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 5700;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_reaper_sway");
			uParam1->f_4 = 1;
			break;
		
		case 1645:
			*uParam1 = 7300f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 7300;
			uParam1->f_3 = 22000;
			uParam1->f_5 = joaat("luxe2_floral_print");
			uParam1->f_4 = 1;
			break;
		
		case 1646:
			*uParam1 = 6300f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 6300;
			uParam1->f_3 = 19000;
			uParam1->f_5 = joaat("luxe2_cobra_dawn");
			uParam1->f_4 = 1;
			break;
		
		case 1647:
			*uParam1 = 5600f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 5600;
			uParam1->f_3 = 17000;
			uParam1->f_5 = joaat("luxe2_python_skull");
			uParam1->f_4 = 1;
			break;
		
		case 1648:
			*uParam1 = 14850f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 14850;
			uParam1->f_3 = 45000;
			uParam1->f_5 = joaat("luxe2_geometric_design");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1649:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = joaat("challenge_event_start_countdown_time");
			uParam1->f_4 = 1;
			break;
		
		case 1650:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("challenge_minimum_participants_launch");
			uParam1->f_4 = 1;
			break;
		
		case 1651:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_ambient_weighting_longest_freefall");
			uParam1->f_4 = 1;
			break;
		
		case 1652:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_ambient_weighting_lowest_parachute_deploy");
			uParam1->f_4 = 1;
			break;
		
		case 1653:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_ambient_weighting_highest_vehicles_stolen");
			uParam1->f_4 = 1;
			break;
		
		case 1654:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_ambient_weighting_longest_fall_without_dying");
			uParam1->f_4 = 1;
			break;
		
		case 1655:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_ambient_weighting_longest_vehicle_bail_without_dying");
			uParam1->f_4 = 1;
			break;
		
		case 1656:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_ambient_weighting_longest_time_low_flying_under_20m");
			uParam1->f_4 = 1;
			break;
		
		case 1657:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_ambient_weighting_longest_time_low_flying_inverted_under_100m");
			uParam1->f_4 = 1;
			break;
		
		case 1658:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_ambient_weighting_bridges_flown_under");
			uParam1->f_4 = 1;
			break;
		
		case 1659:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_ambient_weighting_reverse_driving_without_crashing");
			uParam1->f_4 = 1;
			break;
		
		case 1660:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_ambient_weighting_pvp_highest_no_of_player_headshots");
			uParam1->f_4 = 1;
			break;
		
		case 1661:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_ambient_weighting_pvp_highest_no_of_player_drive_by_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1662:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_ambient_weighting_pvp_highest_no_of_player_melee_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1663:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_ambient_weighting_pvp_sniper_player_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1664:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("challenge_time_limit_longest_freefall");
			uParam1->f_4 = 1;
			break;
		
		case 1665:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("challenge_time_limit_lowest_parachute_deploy");
			uParam1->f_4 = 1;
			break;
		
		case 1666:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("challenge_time_limit_highest_vehicles_stolen");
			uParam1->f_4 = 1;
			break;
		
		case 1667:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("challenge_time_limit_longest_fall_without_dying");
			uParam1->f_4 = 1;
			break;
		
		case 1668:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("challenge_time_limit_longest_vehicle_bail_without_dying");
			uParam1->f_4 = 1;
			break;
		
		case 1988:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("criminal_damage_bullet_min_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1989:
			*uParam1 = 0f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("criminal_damage_bullet_max_cash");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1669:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("challenge_time_limit_longest_time_low_flying_under_20m");
			uParam1->f_4 = 1;
			break;
		
		case 1670:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("challenge_time_limit_longest_time_low_flying_inverted_under_100m");
			uParam1->f_4 = 1;
			break;
		
		case 1671:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("challenge_time_limit_bridges_flown_under");
			uParam1->f_4 = 1;
			break;
		
		case 1672:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("challenge_time_limit_reverse_driving_without_crashing");
			uParam1->f_4 = 1;
			break;
		
		case 1673:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("challenge_time_limit_pvp_highest_no_of_player_headshots");
			uParam1->f_4 = 1;
			break;
		
		case 1674:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("challenge_time_limit_pvp_highest_no_of_player_drive_by_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1675:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("challenge_time_limit_pvp_highest_no_of_player_melee_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1676:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("challenge_time_limit_pvp_sniper_player_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1677:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("hot_target_event_time_limit");
			uParam1->f_4 = 1;
			break;
		
		case 1678:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("hot_target_event_expiry_time");
			uParam1->f_4 = 1;
			break;
		
		case 1679:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("hot_target_minimum_participants_launch");
			uParam1->f_4 = 1;
			break;
		
		case 1680:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("hot_target_vehicle_health_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 1681:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = joaat("hot_target_player_wait_timer_2_player_vehicles");
			uParam1->f_4 = 1;
			break;
		
		case 1682:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 480261308;
			uParam1->f_4 = 1;
			break;
		
		case 1683:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 1724047327;
			uParam1->f_4 = 1;
			break;
		
		case 1684:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -2099792811;
			uParam1->f_4 = 1;
			break;
		
		case 1685:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = -1961248601;
			uParam1->f_4 = 1;
			break;
		
		case 1686:
			*uParam1 = 100f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 100;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -394742090;
			uParam1->f_4 = 1;
			break;
		
		case 1687:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -973670437;
			uParam1->f_4 = 1;
			break;
		
		case 1688:
			*uParam1 = 100f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 100;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 545710573;
			uParam1->f_4 = 1;
			break;
		
		case 1689:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1719514608;
			uParam1->f_4 = 1;
			break;
		
		case 1690:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1277989416;
			uParam1->f_4 = 1;
			break;
		
		case 1691:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = 213080347;
			uParam1->f_4 = 1;
			break;
		
		case 1692:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = -490956780;
			uParam1->f_4 = 1;
			break;
		
		case 1693:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1186946699;
			uParam1->f_4 = 1;
			break;
		
		case 1694:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1278555348;
			uParam1->f_4 = 1;
			break;
		
		case 1695:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1131328367;
			uParam1->f_4 = 1;
			break;
		
		case 1696:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = -2040003478;
			uParam1->f_4 = 1;
			break;
		
		case 1697:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = -1653484993;
			uParam1->f_4 = 1;
			break;
		
		case 1929:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 320217226;
			uParam1->f_4 = 1;
			break;
		
		case 1930:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -1158399726;
			uParam1->f_4 = 1;
			break;
		
		case 1931:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 1216770442;
			uParam1->f_4 = 1;
			break;
		
		case 1932:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = -922363854;
			uParam1->f_4 = 1;
			break;
		
		case 1933:
			*uParam1 = 100f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 100;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1967099974;
			uParam1->f_4 = 1;
			break;
		
		case 1934:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 260082416;
			uParam1->f_4 = 1;
			break;
		
		case 1935:
			*uParam1 = 100f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 100;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -27625201;
			uParam1->f_4 = 1;
			break;
		
		case 1936:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1998734607;
			uParam1->f_4 = 1;
			break;
		
		case 1937:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -925005551;
			uParam1->f_4 = 1;
			break;
		
		case 1938:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = -1399622480;
			uParam1->f_4 = 1;
			break;
		
		case 1939:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = -1682569610;
			uParam1->f_4 = 1;
			break;
		
		case 1940:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = 495241932;
			uParam1->f_4 = 1;
			break;
		
		case 1941:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -765305944;
			uParam1->f_4 = 1;
			break;
		
		case 1942:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = 1884840135;
			uParam1->f_4 = 1;
			break;
		
		case 1943:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = -132120248;
			uParam1->f_4 = 1;
			break;
		
		case 1944:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = -1843934621;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1698:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 1727296174;
			uParam1->f_4 = 1;
			break;
		
		case 1699:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1048469778;
			uParam1->f_4 = 1;
			break;
		
		case 1700:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 30;
			uParam1->f_5 = 322846059;
			uParam1->f_4 = 1;
			break;
		
		case 1701:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 30;
			uParam1->f_5 = 1911436297;
			uParam1->f_4 = 1;
			break;
		
		case 1702:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("checkpoint_event_time_limit");
			uParam1->f_4 = 1;
			break;
		
		case 1703:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = joaat("checkpoint_event_start_countdown_time");
			uParam1->f_4 = 1;
			break;
		
		case 1704:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("checkpoint_minimum_participants_launch");
			uParam1->f_4 = 1;
			break;
		
		case 1705:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("checkpoint_checkpoint_player_threshold_1");
			uParam1->f_4 = 1;
			break;
		
		case 1706:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("checkpoint_checkpoint_player_threshold_2");
			uParam1->f_4 = 1;
			break;
		
		case 1707:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("checkpoint_checkpoint_player_threshold_3");
			uParam1->f_4 = 1;
			break;
		
		case 1708:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("time_trial_minimum_participants_launch");
			uParam1->f_4 = 1;
			break;
		
		case 1709:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("time_trial_return_to_car_time");
			uParam1->f_4 = 1;
			break;
		
		case 1710:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("time_trial_return_to_bike_time");
			uParam1->f_4 = 1;
			break;
		
		case 1711:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = joaat("penned_in_event_start_countdown_time");
			uParam1->f_4 = 1;
			break;
		
		case 1712:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("penned_in_event_expiry_time");
			uParam1->f_4 = 1;
			break;
		
		case 1713:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("penned_in_minimum_participants_launch");
			uParam1->f_4 = 1;
			break;
		
		case 1714:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("penned_in_pen_movement_speed_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 1715:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = 1948960799;
			uParam1->f_4 = 1;
			break;
		
		case 1716:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("penned_in_percentage_of_session_required_for_quick_launch");
			uParam1->f_4 = 1;
			break;
		
		case 1717:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("penned_in_quick_launch_timer");
			uParam1->f_4 = 1;
			break;
		
		case 1718:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("penned_in_knockout_timer");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1719:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("pass_the_parcel_event_time_limit");
			uParam1->f_4 = 1;
			break;
		
		case 1720:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("pass_the_parcel_event_expiry_time");
			uParam1->f_4 = 1;
			break;
		
		case 1721:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("pass_the_parcel_minimum_participants_launch");
			uParam1->f_4 = 1;
			break;
		
		case 1722:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("pass_the_parcel_vehicle_health_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 1723:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("pass_the_parcel_sudden_death_time_limit");
			uParam1->f_4 = 1;
			break;
		
		case 1724:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("hot_property_event_time_limit");
			uParam1->f_4 = 1;
			break;
		
		case 1725:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("hot_property_minimum_participants_launch");
			uParam1->f_4 = 1;
			break;
		
		case 1726:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("dead_drop_event_time_limit");
			uParam1->f_4 = 1;
			break;
		
		case 1727:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("dead_drop_event_expiry_time");
			uParam1->f_4 = 1;
			break;
		
		case 1728:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("dead_drop_minimum_participants_launch");
			uParam1->f_4 = 1;
			break;
		
		case 1729:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("king_of_the_castle_event_time_limit");
			uParam1->f_4 = 1;
			break;
		
		case 1730:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("king_of_the_castle_event_expiry_time");
			uParam1->f_4 = 1;
			break;
		
		case 1731:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("king_of_the_castle_minimum_participants_launch");
			uParam1->f_4 = 1;
			break;
		
		case 1732:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("king_of_the_castle_points_per_x_seconds_as_king");
			uParam1->f_4 = 1;
			break;
		
		case 1733:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("king_of_the_castle_seconds_as_king_to_earn_points");
			uParam1->f_4 = 1;
			break;
		
		case 1734:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("king_of_the_castle_points_per_player_kill_as_king");
			uParam1->f_4 = 1;
			break;
		
		case 1735:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = joaat("criminal_damage_event_time_limit");
			uParam1->f_4 = 1;
			break;
		
		case 1736:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = joaat("criminal_damage_event_start_countdown_time");
			uParam1->f_4 = 1;
			break;
		
		case 1737:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("criminal_damage_minimum_participants_launch");
			uParam1->f_4 = 1;
			break;
		
		case 1738:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("criminal_damage_base_value_applied_to_props");
			uParam1->f_4 = 1;
			break;
		
		case 1739:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("criminal_damage_base_value_modifier_applied_to_props");
			uParam1->f_4 = 1;
			break;
		
		case 1740:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("criminal_damage_base_value_modifier_applied_to_vehicles");
			uParam1->f_4 = 1;
			break;
		
		case 1741:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("criminal_damage_base_value_modifier_applied_to_clothing");
			uParam1->f_4 = 1;
			break;
		
		case 1742:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("criminal_damage_damage_value_modifier");
			uParam1->f_4 = 1;
			break;
		
		case 1743:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("criminal_damage_destruction_value_modifier");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1744:
			*uParam1 = 0f;
			uParam1->f_1 = 3600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3600000;
			uParam1->f_5 = joaat("hunt_the_beast_event_time_limit");
			uParam1->f_4 = 1;
			break;
		
		case 1745:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = joaat("hunt_the_beast_event_start_countdown_time");
			uParam1->f_4 = 1;
			break;
		
		case 1746:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("hunt_the_beast_minimum_participants_launch");
			uParam1->f_4 = 1;
			break;
		
		case 1747:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("hunt_the_beast_ambient_weighting_hunt_the_beast");
			uParam1->f_4 = 1;
			break;
		
		case 1748:
			*uParam1 = 100f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 100;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("hunt_the_beast_beast_health");
			uParam1->f_4 = 1;
			break;
		
		case 1749:
			*uParam1 = 1f;
			uParam1->f_1 = 1.15f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("hunt_the_beast_beast_speed");
			uParam1->f_4 = 1;
			break;
		
		case 1750:
			*uParam1 = 0f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60000;
			uParam1->f_5 = joaat("hunt_the_beast_beast_blip_flash_duration_base_value");
			uParam1->f_4 = 1;
			break;
		
		case 1751:
			*uParam1 = 0f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60000;
			uParam1->f_5 = joaat("hunt_the_beast_beast_blip_flash_duration_increase_value");
			uParam1->f_4 = 1;
			break;
		
		case 1752:
			*uParam1 = 3f;
			uParam1->f_1 = 15f;
			uParam1->f_2 = 3;
			uParam1->f_3 = 15;
			uParam1->f_5 = joaat("hunt_the_beast_number_of_active_landmarks");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1753:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("hot_target_hot_target_default_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1754:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("hot_target_hot_target_default_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1755:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("hot_target_chaser_default_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1756:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("hot_target_chaser_default_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1757:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("hot_target_minimum_participation_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1758:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("hot_target_minimum_participation_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1759:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("hot_target_participation_threshold_distance");
			uParam1->f_4 = 1;
			break;
		
		case 1760:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 847156826;
			uParam1->f_4 = 1;
			break;
		
		case 1761:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = -371181851;
			uParam1->f_4 = 1;
			break;
		
		case 1762:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = -1645516985;
			uParam1->f_4 = 1;
			break;
		
		case 1763:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -70753559;
			uParam1->f_4 = 1;
			break;
		
		case 1764:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 958196479;
			uParam1->f_4 = 1;
			break;
		
		case 1765:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = -567297957;
			uParam1->f_4 = 1;
			break;
		
		case 1766:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("checkpoint_bonus_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1767:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("checkpoint_bonus_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1768:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("checkpoint_air_checkpoint_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1769:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("checkpoint_air_checkpoint_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1770:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("checkpoint_set_1cash_value");
			uParam1->f_4 = 1;
			break;
		
		case 1771:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("checkpoint_set_2_cash_value");
			uParam1->f_4 = 1;
			break;
		
		case 1772:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("checkpoint_set_3_cash_value");
			uParam1->f_4 = 1;
			break;
		
		case 1773:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("checkpoint_set_4_cash_value");
			uParam1->f_4 = 1;
			break;
		
		case 1774:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("checkpoint_set_5_cash_value");
			uParam1->f_4 = 1;
			break;
		
		case 1775:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("checkpoint_set_6_cash_value");
			uParam1->f_4 = 1;
			break;
		
		case 1776:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("checkpoint_set_7_cash_value");
			uParam1->f_4 = 1;
			break;
		
		case 1777:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("checkpoint_set_8_cash_value");
			uParam1->f_4 = 1;
			break;
		
		case 1778:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("checkpoint_set_9_cash_value");
			uParam1->f_4 = 1;
			break;
		
		case 1779:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("checkpoint_set_10_cash_value");
			uParam1->f_4 = 1;
			break;
		
		case 1780:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("checkpoint_set_1_rp_value");
			uParam1->f_4 = 1;
			break;
		
		case 1781:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("checkpoint_set_2_rp_value");
			uParam1->f_4 = 1;
			break;
		
		case 1782:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("checkpoint_set_3_rp_value");
			uParam1->f_4 = 1;
			break;
		
		case 1783:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("checkpoint_set_4_rp_value");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1784:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("checkpoint_participation_threshold_min_checkpoints_collected");
			uParam1->f_4 = 1;
			break;
		
		case 1785:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("checkpoint_minimum_participation_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1786:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("checkpoint_minimum_participation_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1787:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 909181821;
			uParam1->f_4 = 1;
			break;
		
		case 1788:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -1271696786;
			uParam1->f_4 = 1;
			break;
		
		case 1789:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -191052162;
			uParam1->f_4 = 1;
			break;
		
		case 1790:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 1629828880;
			uParam1->f_4 = 1;
			break;
		
		case 1791:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("helicopter_hot_target_hot_target_default_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1792:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("helicopter_hot_target_hot_target_default_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1793:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("helicopter_hot_target_chaser_default_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1794:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("helicopter_hot_target_chaser_default_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1795:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("helicopter_hot_target_minimum_participation_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1796:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("helicopter_hot_target_minimum_participation_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1797:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("helicopter_hot_target_participation_threshold_distance");
			uParam1->f_4 = 1;
			break;
		
		case 1798:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("penned_in_base_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1799:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("penned_in_base_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1800:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("penned_in_scale_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1801:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("penned_in_scale_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1802:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("penned_in_t_weight_time_threshold_1");
			uParam1->f_4 = 1;
			break;
		
		case 1803:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("penned_in_t_weight_time_threshold_2");
			uParam1->f_4 = 1;
			break;
		
		case 1804:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("penned_in_t_weight_time_threshold_3");
			uParam1->f_4 = 1;
			break;
		
		case 1805:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("penned_in_t_weight_time_threshold_4");
			uParam1->f_4 = 1;
			break;
		
		case 1806:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("penned_in_t_weight_threshold_value_1");
			uParam1->f_4 = 1;
			break;
		
		case 1807:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("penned_in_t_weight_threshold_value_2");
			uParam1->f_4 = 1;
			break;
		
		case 1808:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("penned_in_t_weight_threshold_value_3");
			uParam1->f_4 = 1;
			break;
		
		case 1809:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("penned_in_t_weight_threshold_value_4");
			uParam1->f_4 = 1;
			break;
		
		case 1810:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("penned_in_t_weight_threshold_value_5");
			uParam1->f_4 = 1;
			break;
		
		case 1811:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("penned_in_p_weight");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1812:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("penned_in_p_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1813:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("penned_in_minimum_participation_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1814:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("penned_in_minimum_participation_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1815:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("dead_drop_default_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1816:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("dead_drop_default_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1817:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = joaat("dead_drop_carrier_kills");
			uParam1->f_4 = 1;
			break;
		
		case 1818:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("dead_drop_carrier_kill_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1819:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("dead_drop_participation_threshold_distance");
			uParam1->f_4 = 1;
			break;
		
		case 1820:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("dead_drop_minimum_participation_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1821:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("dead_drop_minimum_participation_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1822:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -848335300;
			uParam1->f_4 = 1;
			break;
		
		case 1823:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = 1893448227;
			uParam1->f_4 = 1;
			break;
		
		case 1824:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = 1243877018;
			uParam1->f_4 = 1;
			break;
		
		case 1825:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 461422908;
			uParam1->f_4 = 1;
			break;
		
		case 1826:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -946050157;
			uParam1->f_4 = 1;
			break;
		
		case 1827:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = -402223749;
			uParam1->f_4 = 1;
			break;
		
		case 1945:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("hunt_the_beast_extended_wanted_reduction_distance");
			uParam1->f_4 = 1;
			break;
		
		case 1946:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("hunt_the_beast_extended_wanted_reduction_multipler");
			uParam1->f_4 = 1;
			break;
		
		case 1947:
			*uParam1 = 2f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("penned_in_max_players");
			uParam1->f_4 = 1;
			break;
		
		case 1990:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("criminal_damage_player_bullet_min_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1991:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("criminal_damage_player_bullet_max_cash");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1828:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("challenge_cash_reward_base");
			uParam1->f_4 = 1;
			break;
		
		case 1829:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("challenge_rp_reward_base");
			uParam1->f_4 = 1;
			break;
		
		case 1830:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("challenge_eom_default_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1831:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("challenge_eom_default_rp_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1832:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_position_modifier_in_place_0");
			uParam1->f_4 = 1;
			break;
		
		case 1833:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_position_modifier_in_place_1");
			uParam1->f_4 = 1;
			break;
		
		case 1834:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_position_modifier_in_place_2");
			uParam1->f_4 = 1;
			break;
		
		case 1835:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_position_modifier_in_place_3");
			uParam1->f_4 = 1;
			break;
		
		case 1836:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("challenge_reward_time_weighting");
			uParam1->f_4 = 1;
			break;
		
		case 1837:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("challenge_reward_player_weighting");
			uParam1->f_4 = 1;
			break;
		
		case 1838:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("challenge_reward_player_divider");
			uParam1->f_4 = 1;
			break;
		
		case 1839:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("challenge_cash_reward_scale");
			uParam1->f_4 = 1;
			break;
		
		case 1840:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("challenge_rp_reward_scale");
			uParam1->f_4 = 1;
			break;
		
		case 1841:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("criminal_damage_get_cash_reward_base");
			uParam1->f_4 = 1;
			break;
		
		case 1842:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("criminal_damage_get_rp_reward_base");
			uParam1->f_4 = 1;
			break;
		
		case 1843:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("criminal_damage_get_eom_default_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1844:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("criminal_damage_get_eom_default_rp_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1845:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("criminal_damage_position_modifier_in_place_1");
			uParam1->f_4 = 1;
			break;
		
		case 1846:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("criminal_damage_position_modifier_in_place_2");
			uParam1->f_4 = 1;
			break;
		
		case 1847:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("criminal_damage_position_modifier_in_place_3");
			uParam1->f_4 = 1;
			break;
		
		case 1848:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("criminal_damage_get_reward_time_weighting");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1849:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("criminal_damage_get_cash_reward_scale");
			uParam1->f_4 = 1;
			break;
		
		case 1850:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("criminal_damage_get_rp_reward_scale");
			uParam1->f_4 = 1;
			break;
		
		case 1851:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("criminal_damage_get_reward_player_weighting");
			uParam1->f_4 = 1;
			break;
		
		case 1852:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("criminal_damage_get_reward_player_divider");
			uParam1->f_4 = 1;
			break;
		
		case 1853:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("criminal_damage_get_reward_player_threshold");
			uParam1->f_4 = 1;
			break;
		
		case 1854:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("hot_property_eom_default_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1855:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("hot_property_eom_default_rp_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1856:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("hot_property_cash_reward_scale");
			uParam1->f_4 = 1;
			break;
		
		case 1857:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("hot_property_rp_reward_scale");
			uParam1->f_4 = 1;
			break;
		
		case 1858:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("hot_property_position_modifier_in_place_0");
			uParam1->f_4 = 1;
			break;
		
		case 1859:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("hot_property_position_modifier_in_place_1");
			uParam1->f_4 = 1;
			break;
		
		case 1860:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("hot_property_position_modifier_in_place_2");
			uParam1->f_4 = 1;
			break;
		
		case 1861:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("hot_property_position_modifier_in_place_3");
			uParam1->f_4 = 1;
			break;
		
		case 1862:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("hot_property_reward_time_weighting");
			uParam1->f_4 = 1;
			break;
		
		case 1863:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("hot_property_reward_player_weighting");
			uParam1->f_4 = 1;
			break;
		
		case 1864:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("hot_property_reward_player_divider");
			uParam1->f_4 = 1;
			break;
		
		case 1865:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = joaat("hot_property_rp_reward_killed_carrier");
			uParam1->f_4 = 1;
			break;
		
		case 1866:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("hot_property_rp_reward_killed_carrier_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1867:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("hot_property_cash_reward_base");
			uParam1->f_4 = 1;
			break;
		
		case 1868:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("hot_property_rp_reward_base");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1869:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("pass_the_parcel_cash_reward_base");
			uParam1->f_4 = 1;
			break;
		
		case 1870:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("pass_the_parcel_rp_reward_base");
			uParam1->f_4 = 1;
			break;
		
		case 1871:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = joaat("pass_the_parcel_rp_reward_kill_carrier");
			uParam1->f_4 = 1;
			break;
		
		case 1872:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("pass_the_parcel_rp_reward_kill_carrier_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1873:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("pass_the_parcel_reward_participation_range");
			uParam1->f_4 = 1;
			break;
		
		case 1874:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("pass_the_parcel_eom_default_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1875:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("pass_the_parcel_eom_default_rp_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1876:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("king_of_the_castle_eom_default_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1877:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("king_of_the_castle_eom_default_rp_reward");
			uParam1->f_4 = 1;
			break;
		
		case 1878:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("king_of_the_castle_cash_reward_scale");
			uParam1->f_4 = 1;
			break;
		
		case 1879:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("king_of_the_castle_rp_reward_scale");
			uParam1->f_4 = 1;
			break;
		
		case 1880:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("king_of_the_castle_modifier_in_place_1");
			uParam1->f_4 = 1;
			break;
		
		case 1881:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("king_of_the_castle_modifier_in_place_2");
			uParam1->f_4 = 1;
			break;
		
		case 1882:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("king_of_the_castle_modifier_in_place_3");
			uParam1->f_4 = 1;
			break;
		
		case 1883:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("king_of_the_castle_reward_time_weighting");
			uParam1->f_4 = 1;
			break;
		
		case 1884:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("king_of_the_castle_reward_player_weighting");
			uParam1->f_4 = 1;
			break;
		
		case 1885:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("king_of_the_castle_reward_player_divider");
			uParam1->f_4 = 1;
			break;
		
		case 1886:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = joaat("king_of_the_castle_rp_reward_killed_king");
			uParam1->f_4 = 1;
			break;
		
		case 1887:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = joaat("king_of_the_castle_rp_reward_kill_as_king");
			uParam1->f_4 = 1;
			break;
		
		case 1888:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("king_of_the_castle_rp_reward_killed_king_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1889:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("king_of_the_castle_rp_reward_kill_as_king_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1890:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("king_of_the_castle_cash_reward_base");
			uParam1->f_4 = 1;
			break;
		
		case 1891:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("king_of_the_castle_rp_reward_base");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1892:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("hunt_the_beast_b_base_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1893:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("hunt_the_beast_b_base_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1894:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("hunt_the_beast_h_base_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1895:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("hunt_the_beast_h_base_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1896:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("hunt_the_beast_scale_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1897:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("hunt_the_beast_scale_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1898:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("hunt_the_beast_v_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1899:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("hunt_the_beast_p_weight_player_threshold_1");
			uParam1->f_4 = 1;
			break;
		
		case 1900:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("hunt_the_beast_p_weight_player_threshold_2");
			uParam1->f_4 = 1;
			break;
		
		case 1901:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("hunt_the_beast_p_weight_player_threshold_3");
			uParam1->f_4 = 1;
			break;
		
		case 1902:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("hunt_the_beast_p_weight_player_threshold_4");
			uParam1->f_4 = 1;
			break;
		
		case 1903:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("hunt_the_beast_p_weight_player_threshold_5");
			uParam1->f_4 = 1;
			break;
		
		case 1904:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("hunt_the_beast_p_weight_threshold_value_1");
			uParam1->f_4 = 1;
			break;
		
		case 1905:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("hunt_the_beast_p_weight_threshold_value_2");
			uParam1->f_4 = 1;
			break;
		
		case 1906:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("hunt_the_beast_p_weight_threshold_value_3");
			uParam1->f_4 = 1;
			break;
		
		case 1907:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("hunt_the_beast_p_weight_threshold_value_4");
			uParam1->f_4 = 1;
			break;
		
		case 1908:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("hunt_the_beast_p_weight_threshold_value_5");
			uParam1->f_4 = 1;
			break;
		
		case 1909:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("hunt_the_beast_p_weight_threshold_value_6");
			uParam1->f_4 = 1;
			break;
		
		case 1910:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("hunt_the_beast_minimum_participation_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1911:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("hunt_the_beast_minimum_participation_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1912:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("hunt_the_beast_participation_threshold_distance");
			uParam1->f_4 = 1;
			break;
		
		case 1913:
			*uParam1 = 0f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60000;
			uParam1->f_5 = joaat("hunt_the_beast_beast_blip_start_visibility");
			uParam1->f_4 = 1;
			break;
		
		case 1914:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("challenge_t_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1915:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("challenge_p_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1916:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("criminal_damage_t_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1917:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("criminal_damage_p_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1918:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("hot_property_t_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1919:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("hot_property_p_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1920:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("hot_property_participation_threshold_distance");
			uParam1->f_4 = 1;
			break;
		
		case 1921:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("king_of_the_castle_t_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1922:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("king_of_the_castle_p_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1984:
			*uParam1 = 0f;
			uParam1->f_1 = 3600f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3600;
			uParam1->f_5 = joaat("shared_cash_cooldown_tunable");
			uParam1->f_4 = 1;
			break;
		
		case 1985:
			*uParam1 = 0f;
			uParam1->f_1 = 3600f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3600;
			uParam1->f_5 = joaat("receive_shared_cash_cooldown_tunable");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1923:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_1 = 3f;
			uParam1->f_5 = joaat("challenge_ambient_weighting_longest_jump");
			uParam1->f_4 = 1;
			break;
		
		case 1924:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_1 = 3f;
			uParam1->f_5 = joaat("challenge_ambient_weighting_most_near_misses");
			uParam1->f_4 = 1;
			break;
		
		case 1925:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_1 = 3f;
			uParam1->f_5 = joaat("challenge_ambient_weighting_longest_stoppie");
			uParam1->f_4 = 1;
			break;
		
		case 1926:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_1 = 3f;
			uParam1->f_5 = joaat("challenge_ambient_weighting_longest_wheelie");
			uParam1->f_4 = 1;
			break;
		
		case 1927:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_1 = 3f;
			uParam1->f_5 = joaat("challenge_ambient_weighting_highest_speed");
			uParam1->f_4 = 1;
			break;
		
		case 1928:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_1 = 3f;
			uParam1->f_5 = joaat("challenge_ambient_weighting_longest_no_crash");
			uParam1->f_4 = 1;
			break;
		
		case 1948:
			*uParam1 = 0f;
			uParam1->f_1 = 3600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3600000;
			uParam1->f_5 = joaat("hunt_the_beast_no_landmarks_blip_time");
			uParam1->f_4 = 1;
			break;
		
		case 1949:
			*uParam1 = 0f;
			uParam1->f_1 = 3600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3600000;
			uParam1->f_5 = joaat("hunt_the_beast_no_landmarks_blip_duration");
			uParam1->f_4 = 1;
			break;
		
		case 1950:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("participation_t_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1951:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("criminal_damage_event_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1952:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("criminal_damage_event_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1953:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("hunt_the_beast_event_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1954:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("hunt_the_beast_event_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1955:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("kill_list_event_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1956:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("kill_list_event_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1957:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("kill_list_competitive_event_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1958:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("kill_list_competitive_event_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1959:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("penned_in_event_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1960:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("penned_in_event_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1961:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("checkpoints_event_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1962:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("checkpoints_event_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1963:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_event_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1964:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("challenge_event_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1965:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("time_trial_event_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1966:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("time_trial_event_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1967:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("moving_target_event_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1968:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("moving_target_event_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1969:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("heli_moving_target_event_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1970:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("heli_moving_target_event_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1971:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("hold_the_wheel_event_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1972:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("hold_the_wheel_event_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1973:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("hot_property_event_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1974:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("hot_property_event_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1975:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("dead_drop_event_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1976:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("dead_drop_event_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1977:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("king_of_the_castle_event_multiplier_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1978:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("king_of_the_castle_event_multiplier_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1979:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("criminal_damage_percent_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1980:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("criminal_damage_percent_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1981:
			*uParam1 = 0f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("criminal_damage_bonus_cash");
			uParam1->f_4 = 1;
			break;
		
		case 1982:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("criminal_damage_bonus_rp");
			uParam1->f_4 = 1;
			break;
		
		case 1983:
			*uParam1 = 0f;
			uParam1->f_1 = 5000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000000;
			uParam1->f_5 = joaat("criminal_damage_s_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1986:
			*uParam1 = 0f;
			uParam1->f_1 = 5000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000000;
			uParam1->f_5 = joaat("criminal_damage_vehicle_value_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1987:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("time_trial_participation_t_cap");
			uParam1->f_4 = 1;
			break;
		
		case 1992:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("lowrider_flow_mission_reward_rank_override");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1993:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("male_uppers_crew_varsity_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1994:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("male_accessories_gold_magnetics_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1995:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("male_accessories_platinum_magnetics_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 1996:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("female_uppers_crew_varsity_jacket");
			uParam1->f_4 = 1;
			break;
		
		case 1997:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("female_accessories_assault_hoops");
			uParam1->f_4 = 1;
			break;
		
		case 1998:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("female_accessories_chunky_hoops");
			uParam1->f_4 = 1;
			break;
		
		case 1999:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("female_accessories_classic_hoops");
			uParam1->f_4 = 1;
			break;
		
		case 2000:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("female_accessories_gold_magnetics_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 2001:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("female_accessories_platinum_magnetics_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 2002:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("website_willard_faction");
			uParam1->f_4 = 1;
			break;
		
		case 2003:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("website_declasse_moonbeam");
			uParam1->f_4 = 1;
			break;
		
		case 2004:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("website_albany_buccaneer");
			uParam1->f_4 = 1;
			break;
		
		case 2005:
			*uParam1 = 2000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("website_declasse_voodoo");
			uParam1->f_4 = 1;
			break;
		
		case 2006:
			*uParam1 = 3000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("website_albany_primo");
			uParam1->f_4 = 1;
			break;
		
		case 2007:
			*uParam1 = 100000f;
			uParam1->f_1 = 340000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 340000;
			uParam1->f_5 = joaat("website_vapid_chino__bennys_website_");
			uParam1->f_4 = 1;
			break;
		
		case 2008:
			*uParam1 = 195000f;
			uParam1->f_1 = 468000f;
			uParam1->f_2 = 195000;
			uParam1->f_3 = 468000;
			uParam1->f_5 = joaat("mod_shop_upgrade_albany_buccaneer_custom");
			uParam1->f_4 = 1;
			break;
		
		case 2009:
			*uParam1 = 92500f;
			uParam1->f_1 = 222000f;
			uParam1->f_2 = 92500;
			uParam1->f_3 = 222000;
			uParam1->f_5 = joaat("mod_shop_upgrade_vapid_chino_custom");
			uParam1->f_4 = 1;
			break;
		
		case 2010:
			*uParam1 = 167500f;
			uParam1->f_1 = 402000f;
			uParam1->f_2 = 167500;
			uParam1->f_3 = 402000;
			uParam1->f_5 = joaat("mod_shop_upgrade_willard_faction_custom");
			uParam1->f_4 = 1;
			break;
		
		case 2011:
			*uParam1 = 185000f;
			uParam1->f_1 = 444000f;
			uParam1->f_2 = 185000;
			uParam1->f_3 = 444000;
			uParam1->f_5 = joaat("mod_shop_upgrade_declasse_moonbeam_custom");
			uParam1->f_4 = 1;
			break;
		
		case 2012:
			*uParam1 = 200000f;
			uParam1->f_1 = 480000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 480000;
			uParam1->f_5 = joaat("mod_shop_upgrade_albany_primo_custom");
			uParam1->f_4 = 1;
			break;
		
		case 2013:
			*uParam1 = 210000f;
			uParam1->f_1 = 504000f;
			uParam1->f_2 = 210000;
			uParam1->f_3 = 504000;
			uParam1->f_5 = joaat("mod_shop_upgrade_declasse_voodoo_custom");
			uParam1->f_4 = 1;
			break;
		
		case 2014:
			*uParam1 = 15000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("car_mods_san_andreas_loop");
			uParam1->f_4 = 1;
			break;
		
		case 2015:
			*uParam1 = 15000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("car_mods_liberty_city_loop");
			uParam1->f_4 = 1;
			break;
		
		case 2016:
			*uParam1 = 7000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("car_mods_supermod_slot_stock_hydraulics");
			uParam1->f_4 = 1;
			break;
		
		case 2017:
			*uParam1 = 1500f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 1500;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("primary_machine_pistol");
			uParam1->f_4 = 1;
			break;
		
		case 2018:
			*uParam1 = 2000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("primary_machete");
			uParam1->f_4 = 1;
			break;
		
		case 2019:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("weaponaddonpump_shotgun_yusuf_amir_luxury_finish");
			uParam1->f_4 = 1;
			break;
		
		case 2020:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("weaponaddonassault_smg_yusuf_amir_luxury_finish");
			uParam1->f_4 = 1;
			break;
		
		case 2021:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("weaponaddonsns_pistol_etched_wood_grip_finish");
			uParam1->f_4 = 1;
			break;
		
		case 2022:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("weaponaddoncombat_pistol_yusuf_amir_luxury_finish");
			uParam1->f_4 = 1;
			break;
		
		case 2023:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("weaponaddonmg_yusuf_amir_luxury_finish");
			uParam1->f_4 = 1;
			break;
		
		case 2024:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("weaponaddoncombat_mg_etched_gun_metal_finish");
			uParam1->f_4 = 1;
			break;
		
		case 2025:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("weaponaddonspecial_carbine_etched_gun_metal_finish");
			uParam1->f_4 = 1;
			break;
		
		case 2026:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("weaponaddonbullpup_rifle_gilded_gun_metal_finish");
			uParam1->f_4 = 1;
			break;
		
		case 2027:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("both_genders_holy_mary");
			uParam1->f_4 = 1;
			break;
		
		case 2028:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("both_genders_bad_angel");
			uParam1->f_4 = 1;
			break;
		
		case 2029:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("both_genders_love_is_blind");
			uParam1->f_4 = 1;
			break;
		
		case 2030:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("both_genders_sad_angel");
			uParam1->f_4 = 1;
			break;
		
		case 2031:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("both_genders_city_sorrow");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 2032:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_evil_pumpkin");
			uParam1->f_4 = 1;
			break;
		
		case 2033:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_rotten_pumpkin");
			uParam1->f_4 = 1;
			break;
		
		case 2034:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_nasty_watermelon");
			uParam1->f_4 = 1;
			break;
		
		case 2035:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_creepy_butler");
			uParam1->f_4 = 1;
			break;
		
		case 2036:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_dead_butler");
			uParam1->f_4 = 1;
			break;
		
		case 2037:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_rotten_butler");
			uParam1->f_4 = 1;
			break;
		
		case 2038:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_white_scalded_psycho");
			uParam1->f_4 = 1;
			break;
		
		case 2039:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_bloody_scalded_psycho");
			uParam1->f_4 = 1;
			break;
		
		case 2040:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_black_scalded_psycho");
			uParam1->f_4 = 1;
			break;
		
		case 2041:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_red_flayed_demon");
			uParam1->f_4 = 1;
			break;
		
		case 2042:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_green_flayed_demon");
			uParam1->f_4 = 1;
			break;
		
		case 2043:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_gray_flayed_demon");
			uParam1->f_4 = 1;
			break;
		
		case 2044:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_white_skull_burst");
			uParam1->f_4 = 1;
			break;
		
		case 2045:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_red_skull_burst");
			uParam1->f_4 = 1;
			break;
		
		case 2046:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_cream_skull_burst");
			uParam1->f_4 = 1;
			break;
		
		case 2047:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_pale_lycanthrope");
			uParam1->f_4 = 1;
			break;
		
		case 2048:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_dark_lycanthrope");
			uParam1->f_4 = 1;
			break;
		
		case 2049:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_gray_lycanthrope");
			uParam1->f_4 = 1;
			break;
		
		case 2050:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_green_toxic_insect");
			uParam1->f_4 = 1;
			break;
		
		case 2051:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_red_toxic_insect");
			uParam1->f_4 = 1;
			break;
		
		case 2052:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_purple_toxic_insect");
			uParam1->f_4 = 1;
			break;
		
		case 2053:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_dirty_sewer_creature");
			uParam1->f_4 = 1;
			break;
		
		case 2054:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_rotten_sewer_creature");
			uParam1->f_4 = 1;
			break;
		
		case 2055:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_scabby_sewer_creature");
			uParam1->f_4 = 1;
			break;
		
		case 2056:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_red_classic_lucifer");
			uParam1->f_4 = 1;
			break;
		
		case 2057:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_orange_classic_lucifer");
			uParam1->f_4 = 1;
			break;
		
		case 2058:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_black_classic_lucifer");
			uParam1->f_4 = 1;
			break;
		
		case 2059:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_classic_sack_slasher");
			uParam1->f_4 = 1;
			break;
		
		case 2060:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_bloody_sack_slasher");
			uParam1->f_4 = 1;
			break;
		
		case 2061:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_black_sack_slasher");
			uParam1->f_4 = 1;
			break;
		
		case 2062:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_blue_hypnotic_alien");
			uParam1->f_4 = 1;
			break;
		
		case 2063:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_green_hypnotic_alien");
			uParam1->f_4 = 1;
			break;
		
		case 2064:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_red_hypnotic_alien");
			uParam1->f_4 = 1;
			break;
		
		case 2065:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_yellow_haggard_witch");
			uParam1->f_4 = 1;
			break;
		
		case 2066:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_gray_haggard_witch");
			uParam1->f_4 = 1;
			break;
		
		case 2067:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_white_haggard_witch");
			uParam1->f_4 = 1;
			break;
		
		case 2068:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_red_bearded_lucifer");
			uParam1->f_4 = 1;
			break;
		
		case 2069:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_orange_bearded_lucifer");
			uParam1->f_4 = 1;
			break;
		
		case 2070:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("halloween_2015_black_bearded_lucifer");
			uParam1->f_4 = 1;
			break;
		
		case 2071:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("halloween_2015_albany_franken_stange");
			uParam1->f_4 = 1;
			break;
		
		case 2072:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("halloween_2015_chariot_lurcher");
			uParam1->f_4 = 1;
			break;
		
		case 2073:
			*uParam1 = 15000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("halloween_2015_halloween_loop_1");
			uParam1->f_4 = 1;
			break;
		
		case 2074:
			*uParam1 = 15000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("halloween_2015_halloween_loop_2");
			uParam1->f_4 = 1;
			break;
		
		case 2075:
			*uParam1 = 1000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("halloween_2015_flashlight");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 2076:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_og_hunnets_chrome");
			uParam1->f_4 = 1;
			break;
		
		case 2077:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_og_hunnets_painted");
			uParam1->f_4 = 1;
			break;
		
		case 2078:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_knock-offs_chrome");
			uParam1->f_4 = 1;
			break;
		
		case 2079:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_knock-offs_painted");
			uParam1->f_4 = 1;
			break;
		
		case 2080:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_spoked_out_chrome");
			uParam1->f_4 = 1;
			break;
		
		case 2081:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_spoked_out_painted");
			uParam1->f_4 = 1;
			break;
		
		case 2082:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_vintage_wire_chrome");
			uParam1->f_4 = 1;
			break;
		
		case 2083:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_vintage_wire_painted");
			uParam1->f_4 = 1;
			break;
		
		case 2084:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_smoothie_chrome");
			uParam1->f_4 = 1;
			break;
		
		case 2085:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_smoothie_chrome_lip");
			uParam1->f_4 = 1;
			break;
		
		case 2086:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_smoothie_painted");
			uParam1->f_4 = 1;
			break;
		
		case 2087:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_rod_me_up_chrome");
			uParam1->f_4 = 1;
			break;
		
		case 2088:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_rod_me_up_chrome_lip");
			uParam1->f_4 = 1;
			break;
		
		case 2089:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_rod_me_up_painted");
			uParam1->f_4 = 1;
			break;
		
		case 2090:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_clean");
			uParam1->f_4 = 1;
			break;
		
		case 2091:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_lotta_chrome");
			uParam1->f_4 = 1;
			break;
		
		case 2092:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_spindles");
			uParam1->f_4 = 1;
			break;
		
		case 2093:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_viking_");
			uParam1->f_4 = 1;
			break;
		
		case 2094:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_triple_spoke");
			uParam1->f_4 = 1;
			break;
		
		case 2095:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_pharohe");
			uParam1->f_4 = 1;
			break;
		
		case 2096:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_tiger_style");
			uParam1->f_4 = 1;
			break;
		
		case 2097:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_three_wheelin");
			uParam1->f_4 = 1;
			break;
		
		case 2098:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_big_bar");
			uParam1->f_4 = 1;
			break;
		
		case 2099:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_biohazard");
			uParam1->f_4 = 1;
			break;
		
		case 2100:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_waves");
			uParam1->f_4 = 1;
			break;
		
		case 2101:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_lick_lick");
			uParam1->f_4 = 1;
			break;
		
		case 2102:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_spiralizer");
			uParam1->f_4 = 1;
			break;
		
		case 2103:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_hypotics");
			uParam1->f_4 = 1;
			break;
		
		case 2104:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_psycho-delic");
			uParam1->f_4 = 1;
			break;
		
		case 2105:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_half_cut");
			uParam1->f_4 = 1;
			break;
		
		case 2106:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("lowrider1_car_mods_bennys_wheels_super electric");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 2107:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("lowrider_1_crew_emblem_front_and_back");
			uParam1->f_4 = 1;
			break;
		
		case 2108:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("car_mods_lowrider_1_bennys_tire_design_white_lines");
			uParam1->f_4 = 1;
			break;
		
		case 2109:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("car_mods_lowrider_1_bennys_tire_design_classic_white_wall");
			uParam1->f_4 = 1;
			break;
		
		case 2110:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("car_mods_lowrider_1_bennys_tire_design_retro_white_wall");
			uParam1->f_4 = 1;
			break;
		
		case 2111:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("car_mods_lowrider_1_bennys_tire_design_red_lines");
			uParam1->f_4 = 1;
			break;
		
		case 2112:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("car_mods_lowrider_1_bennys_tire_design_blue_lines");
			uParam1->f_4 = 1;
			break;
		
		case 2113:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("car_mods_lowrider_1_bennys_tire_design_atomic");
			uParam1->f_4 = 1;
			break;
		
		case 2114:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("car_mods_halloween_2015_franken_stange_livery_blazing_death");
			uParam1->f_4 = 1;
			break;
		
		case 2115:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("car_mods_halloween_2015_franken_stange_livery_hells_furnace");
			uParam1->f_4 = 1;
			break;
		
		case 2116:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("car_mods_halloween_2015_franken_stange_livery_spider_trap");
			uParam1->f_4 = 1;
			break;
		
		case 2117:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("car_mods_halloween_2015_franken_stange_livery_midnight_potion");
			uParam1->f_4 = 1;
			break;
		
		case 2118:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("car_mods_halloween_2015_lurcher_livery_the_ripper");
			uParam1->f_4 = 1;
			break;
		
		case 2119:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("car_mods_halloween_2015_lurcher_livery_hangmans_grave");
			uParam1->f_4 = 1;
			break;
		
		case 2120:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("supermod_slot_hydraulics_1st_mod");
			uParam1->f_4 = 1;
			break;
		
		case 2121:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("supermod_slot_hydraulics_2nd_mod");
			uParam1->f_4 = 1;
			break;
		
		case 2122:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("supermod_slot_hydraulics_3rd_mod");
			uParam1->f_4 = 1;
			break;
		
		case 2123:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("supermod_slot_hydraulics_4th_mod");
			uParam1->f_4 = 1;
			break;
		
		case 2124:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("supermod_slot_hydraulics_5th_mod");
			uParam1->f_4 = 1;
			break;
		
		case 2125:
			*uParam1 = 5000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("lowrider_faction2_livery_special10");
			uParam1->f_4 = 1;
			break;
		
		case 2126:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("gb_number_of_goons");
			uParam1->f_4 = 1;
			break;
		
		case 2127:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = -788216091;
			uParam1->f_4 = 1;
			break;
		
		case 2128:
			*uParam1 = 1f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 6;
			uParam1->f_5 = -301443607;
			uParam1->f_4 = 1;
			break;
		
		case 2129:
			*uParam1 = 1f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 5;
			uParam1->f_5 = -20913835;
			uParam1->f_4 = 1;
			break;
		
		case 2209:
			*uParam1 = 5000f;
			uParam1->f_3 = 100000;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("bennyswebsite_karin_sultan_bennys");
			uParam1->f_4 = 1;
			break;
		
		case 2210:
			*uParam1 = 200000f;
			uParam1->f_3 = 2000000;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = joaat("bennyswebsite_karin_sultan_rs_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2211:
			*uParam1 = 50000f;
			uParam1->f_3 = 500000;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("upgrade_bravado_banshee_bennys");
			uParam1->f_4 = 1;
			break;
		
		case 2212:
			*uParam1 = 200000f;
			uParam1->f_3 = 2000000;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = joaat("upgrade_bravado_banshee_900r_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2213:
			*uParam1 = 200000f;
			uParam1->f_3 = 4000000;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 4000000;
			uParam1->f_5 = joaat("website_valentines2016_albany_roosevelt_valor");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 2130:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = joaat("apartment_website_gallivanter_baller_le");
			uParam1->f_4 = 1;
			break;
		
		case 2131:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("apartment_website_gallivanter_baller_le_armored");
			uParam1->f_4 = 1;
			break;
		
		case 2132:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = joaat("apartment_website_gallivanter_baller_le_lwb");
			uParam1->f_4 = 1;
			break;
		
		case 2133:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("apartment_website_gallivanter_baller_lwb_armored");
			uParam1->f_4 = 1;
			break;
		
		case 2134:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = joaat("apartment_website_enus_cognoscenti_55");
			uParam1->f_4 = 1;
			break;
		
		case 2135:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("apartment_website_enus_cognoscenti_55_armored");
			uParam1->f_4 = 1;
			break;
		
		case 2136:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = joaat("apartment_website_enus_cognoscenti");
			uParam1->f_4 = 1;
			break;
		
		case 2137:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("apartment_website_enus_cognoscenti_armored");
			uParam1->f_4 = 1;
			break;
		
		case 2138:
			*uParam1 = 300000f;
			uParam1->f_1 = 7500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 7500000;
			uParam1->f_5 = joaat("apartment_website_benefactor_schafter_turreted_limo");
			uParam1->f_4 = 1;
			break;
		
		case 2139:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("apartment_website_declasse_mamba");
			uParam1->f_4 = 1;
			break;
		
		case 2140:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("apartment_website_imponte_night_shade");
			uParam1->f_4 = 1;
			break;
		
		case 2141:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = joaat("apartment_website_benefactor_schafter_v12");
			uParam1->f_4 = 1;
			break;
		
		case 2142:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("apartment_website_benefactor_schafter_v12_armored");
			uParam1->f_4 = 1;
			break;
		
		case 2143:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = joaat("apartment_website_benefactor_schafter_lwb");
			uParam1->f_4 = 1;
			break;
		
		case 2144:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("apartment_website_benefactor_schafter_lwb_armored");
			uParam1->f_4 = 1;
			break;
		
		case 2145:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("apartment_website_bravado_verlierer");
			uParam1->f_4 = 1;
			break;
		
		case 2146:
			*uParam1 = 300000f;
			uParam1->f_1 = 7500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 7500000;
			uParam1->f_5 = joaat("apartment_website_buckingham_supervolito");
			uParam1->f_4 = 1;
			break;
		
		case 2147:
			*uParam1 = 300000f;
			uParam1->f_1 = 7500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 7500000;
			uParam1->f_5 = joaat("apartment_website_buckingham_supervolito_carbon");
			uParam1->f_4 = 1;
			break;
		
		case 2148:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("apartment_addons_heavy_revolver_engraved_boss_variant");
			uParam1->f_4 = 1;
			break;
		
		case 2149:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("apartment_addons_heavy_revolver_engraved_goon_variant");
			uParam1->f_4 = 1;
			break;
		
		case 2150:
			*uParam1 = 2000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("apartment_addons_switchblade_engraved_boss_variant");
			uParam1->f_4 = 1;
			break;
		
		case 2151:
			*uParam1 = 100000f;
			uParam1->f_1 = 3E+07f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 30000000;
			uParam1->f_5 = joaat("apartment_purchase_model_the_orion_first_purchase");
			uParam1->f_4 = 1;
			break;
		
		case 2152:
			*uParam1 = 100000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_model_the_orion_mod");
			uParam1->f_4 = 1;
			break;
		
		case 2153:
			*uParam1 = 100000f;
			uParam1->f_1 = 3.5E+07f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 35000000;
			uParam1->f_5 = joaat("apartment_purchase_model_the_pisces_first_purchase");
			uParam1->f_4 = 1;
			break;
		
		case 2154:
			*uParam1 = 100000f;
			uParam1->f_1 = 5000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 5000000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_model_the_pisces_mod");
			uParam1->f_4 = 1;
			break;
		
		case 2155:
			*uParam1 = 100000f;
			uParam1->f_1 = 4E+07f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 40000000;
			uParam1->f_5 = joaat("apartment_purchase_model_the_aquarius_first_purchase");
			uParam1->f_4 = 1;
			break;
		
		case 2156:
			*uParam1 = 100000f;
			uParam1->f_1 = 1E+07f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 10000000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_model_the_aquarius_mod");
			uParam1->f_4 = 1;
			break;
		
		case 2157:
			*uParam1 = 25000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_chrome_fittings");
			uParam1->f_4 = 1;
			break;
		
		case 2158:
			*uParam1 = 100000f;
			uParam1->f_1 = 3750000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3750000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_gold_fittings");
			uParam1->f_4 = 1;
			break;
		
		case 2159:
			*uParam1 = 25000f;
			uParam1->f_1 = 1750000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1750000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_lights_presidential_gold");
			uParam1->f_4 = 1;
			break;
		
		case 2160:
			*uParam1 = 25000f;
			uParam1->f_1 = 1575000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1575000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_lights_presidential_blue");
			uParam1->f_4 = 1;
			break;
		
		case 2161:
			*uParam1 = 25000f;
			uParam1->f_1 = 1650000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1650000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_lights_presidential_rose");
			uParam1->f_4 = 1;
			break;
		
		case 2162:
			*uParam1 = 25000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_lights_presidential_green");
			uParam1->f_4 = 1;
			break;
		
		case 2163:
			*uParam1 = 25000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_vivacious_gold");
			uParam1->f_4 = 1;
			break;
		
		case 2164:
			*uParam1 = 25000f;
			uParam1->f_1 = 2625000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2625000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_vivacious_blue");
			uParam1->f_4 = 1;
			break;
		
		case 2165:
			*uParam1 = 25000f;
			uParam1->f_1 = 2750000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2750000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_vivacious_rose");
			uParam1->f_4 = 1;
			break;
		
		case 2166:
			*uParam1 = 25000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_vivacious_green");
			uParam1->f_4 = 1;
			break;
		
		case 2167:
			*uParam1 = 25000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_pacific");
			uParam1->f_4 = 1;
			break;
		
		case 2168:
			*uParam1 = 25000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_azure");
			uParam1->f_4 = 1;
			break;
		
		case 2169:
			*uParam1 = 25000f;
			uParam1->f_1 = 675000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 675000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_nautical");
			uParam1->f_4 = 1;
			break;
		
		case 2170:
			*uParam1 = 25000f;
			uParam1->f_1 = 2250000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2250000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_continental");
			uParam1->f_4 = 1;
			break;
		
		case 2171:
			*uParam1 = 25000f;
			uParam1->f_1 = 2375000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2375000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_battleship");
			uParam1->f_4 = 1;
			break;
		
		case 2172:
			*uParam1 = 25000f;
			uParam1->f_1 = 3175000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 3175000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_intrepid");
			uParam1->f_4 = 1;
			break;
		
		case 2173:
			*uParam1 = 25000f;
			uParam1->f_1 = 1575000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1575000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_uniform");
			uParam1->f_4 = 1;
			break;
		
		case 2174:
			*uParam1 = 25000f;
			uParam1->f_1 = 3100000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 3100000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_classico");
			uParam1->f_4 = 1;
			break;
		
		case 2175:
			*uParam1 = 25000f;
			uParam1->f_1 = 1825000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1825000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_mediterranean");
			uParam1->f_4 = 1;
			break;
		
		case 2176:
			*uParam1 = 25000f;
			uParam1->f_1 = 2475000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2475000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_command");
			uParam1->f_4 = 1;
			break;
		
		case 2177:
			*uParam1 = 25000f;
			uParam1->f_1 = 850000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 850000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_mariner");
			uParam1->f_4 = 1;
			break;
		
		case 2178:
			*uParam1 = 25000f;
			uParam1->f_1 = 1700000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1700000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_ruby");
			uParam1->f_4 = 1;
			break;
		
		case 2179:
			*uParam1 = 25000f;
			uParam1->f_1 = 2125000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2125000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_vintage");
			uParam1->f_4 = 1;
			break;
		
		case 2180:
			*uParam1 = 25000f;
			uParam1->f_1 = 1100000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1100000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_pristine");
			uParam1->f_4 = 1;
			break;
		
		case 2181:
			*uParam1 = 25000f;
			uParam1->f_1 = 975000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 975000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_merchant");
			uParam1->f_4 = 1;
			break;
		
		case 2182:
			*uParam1 = 25000f;
			uParam1->f_1 = 3250000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 3250000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_yacht_color_voyager");
			uParam1->f_4 = 1;
			break;
		
		case 2183:
			*uParam1 = 25000f;
			uParam1->f_1 = 1250000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1250000;
			uParam1->f_5 = joaat("apartment_mod_upgrade_name_yacht");
			uParam1->f_4 = 1;
			break;
		
		case 2184:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modseclipse_towers_penthouse_suite_1");
			uParam1->f_4 = 1;
			break;
		
		case 2185:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modseclipse_towers_penthouse_suite_2");
			uParam1->f_4 = 1;
			break;
		
		case 2186:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modseclipse_towers_penthouse_suite_3");
			uParam1->f_4 = 1;
			break;
		
		case 2187:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modsstilt_3655_wild_oats_drive");
			uParam1->f_4 = 1;
			break;
		
		case 2188:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modsstilt_2044_north_conker_avenue");
			uParam1->f_4 = 1;
			break;
		
		case 2189:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modsstilt_2868_hillcrest_avenue");
			uParam1->f_4 = 1;
			break;
		
		case 2190:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modsstilt_2862_hillcrest_avenue");
			uParam1->f_4 = 1;
			break;
		
		case 2191:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modsstilt_3677_whispymound_drive");
			uParam1->f_4 = 1;
			break;
		
		case 2192:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modsstilt_2117_milton_road");
			uParam1->f_4 = 1;
			break;
		
		case 2193:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modsstilt_2866_hillcrest_avenue");
			uParam1->f_4 = 1;
			break;
		
		case 2194:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modsstilt_2874_hillcrest_avenue");
			uParam1->f_4 = 1;
			break;
		
		case 2195:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modsstilt_2113_mad_wayne_thunder_drive");
			uParam1->f_4 = 1;
			break;
		
		case 2196:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modsstilt_2045_north_conker_avenue");
			uParam1->f_4 = 1;
			break;
		
		case 2197:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modshigh_end_interior_modern");
			uParam1->f_4 = 1;
			break;
		
		case 2198:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modshigh_end_interior_moody");
			uParam1->f_4 = 1;
			break;
		
		case 2199:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modshigh_end_interior_vibrant");
			uParam1->f_4 = 1;
			break;
		
		case 2200:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modshigh_end_interior_sharp");
			uParam1->f_4 = 1;
			break;
		
		case 2201:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modshigh_end_interior_monochrome");
			uParam1->f_4 = 1;
			break;
		
		case 2202:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modshigh_end_interior_seductive");
			uParam1->f_4 = 1;
			break;
		
		case 2203:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modshigh_end_interior_regal");
			uParam1->f_4 = 1;
			break;
		
		case 2204:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("apartment_car_modshigh_end_interior_aqua");
			uParam1->f_4 = 1;
			break;
		
		case 2205:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = joaat("xmas2015_declasse_tampa");
			uParam1->f_4 = 1;
			break;
		
		case 2206:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 2048560513;
			uParam1->f_4 = 1;
			break;
		
		case 2207:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -2015418102;
			uParam1->f_4 = 1;
			break;
		
		case 2208:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -687749298;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 2214:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("male_uppers_tan_chore_coat");
			uParam1->f_4 = 1;
			break;
		
		case 2215:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("male_accessories_gold_rim_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 2216:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("male_accessories_platinum_rim_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 2217:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("male_accessories_gold_alloy_neckalce");
			uParam1->f_4 = 1;
			break;
		
		case 2218:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("male_accessories_platinum_alloy_neckalce");
			uParam1->f_4 = 1;
			break;
		
		case 2219:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("female_uppers_tan_chore_coat");
			uParam1->f_4 = 1;
			break;
		
		case 2220:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("female_accessories_fu_hoops");
			uParam1->f_4 = 1;
			break;
		
		case 2221:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("female_accessories_screw_you_hoops");
			uParam1->f_4 = 1;
			break;
		
		case 2222:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("female_accessories_gold_rim_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 2223:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("female_accessories_platinum_rim_necklace");
			uParam1->f_4 = 1;
			break;
		
		case 2224:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("female_accessories_gold_alloy_neckalce");
			uParam1->f_4 = 1;
			break;
		
		case 2225:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("female_accessories_platinum_alloy_neckalce");
			uParam1->f_4 = 1;
			break;
		
		case 2226:
			*uParam1 = 50000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("website_bennys_dundreary_virgo_classic");
			uParam1->f_4 = 1;
			break;
		
		case 2227:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("website_bennys_declasse_sabre_turbo");
			uParam1->f_4 = 1;
			break;
		
		case 2228:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("website_bennys_declasse_tornado");
			uParam1->f_4 = 1;
			break;
		
		case 2229:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("website_bennys_vapid_minivan");
			uParam1->f_4 = 1;
			break;
		
		case 2230:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("website_bennys_vapid_slamvan");
			uParam1->f_4 = 1;
			break;
		
		case 2231:
			*uParam1 = 170000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 170000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("car_mods_willard_faction_custom_donk_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2232:
			*uParam1 = 80000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 80000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("car_mods_vapid_minivan_custom_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2233:
			*uParam1 = 120000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 120000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("car_mods_declasse_sabre_turbo_custom_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2234:
			*uParam1 = 100000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("car_mods_vapid_slamvan_custom_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2235:
			*uParam1 = 90000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 90000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("car_mods_declasse_tornado_custom_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2236:
			*uParam1 = 55000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 55000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("car_mods_dundreary_virgo_classic_custom_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2237:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_chrome_og_hunnets");
			uParam1->f_4 = 1;
			break;
		
		case 2238:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_gold_og_hunnets");
			uParam1->f_4 = 1;
			break;
		
		case 2239:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_chrome_wires");
			uParam1->f_4 = 1;
			break;
		
		case 2240:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_gold_wires");
			uParam1->f_4 = 1;
			break;
		
		case 2241:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_chrome_spoked_out");
			uParam1->f_4 = 1;
			break;
		
		case 2242:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_gold_spoked_out");
			uParam1->f_4 = 1;
			break;
		
		case 2243:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_chrome_knockoffs");
			uParam1->f_4 = 1;
			break;
		
		case 2244:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_gold_knockoffs");
			uParam1->f_4 = 1;
			break;
		
		case 2245:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_chrome_bigger_worm");
			uParam1->f_4 = 1;
			break;
		
		case 2246:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_gold_bigger_worm");
			uParam1->f_4 = 1;
			break;
		
		case 2247:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_chrome_vintage_wire");
			uParam1->f_4 = 1;
			break;
		
		case 2248:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_gold_vintage_wire");
			uParam1->f_4 = 1;
			break;
		
		case 2249:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_chrome_classic_wire");
			uParam1->f_4 = 1;
			break;
		
		case 2250:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_gold_classic_wire");
			uParam1->f_4 = 1;
			break;
		
		case 2251:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_chrome_smoothie");
			uParam1->f_4 = 1;
			break;
		
		case 2252:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_gold_smoothie");
			uParam1->f_4 = 1;
			break;
		
		case 2253:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_chrome_classic_rod");
			uParam1->f_4 = 1;
			break;
		
		case 2254:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_gold_classic_rod");
			uParam1->f_4 = 1;
			break;
		
		case 2255:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_chrome_dollar");
			uParam1->f_4 = 1;
			break;
		
		case 2256:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = joaat("car_mods_bennys_bespoke_wheels_gold_dollar");
			uParam1->f_4 = 1;
			break;
		
		case 2257:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("car_mods_supermod_slot_hydraulics_6th_mod");
			uParam1->f_4 = 1;
			break;
		
		case 2258:
			*uParam1 = 5000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("primary_compact_rifle");
			uParam1->f_4 = 1;
			break;
		
		case 2259:
			*uParam1 = 5000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("primary_double_barrel_shotgun");
			uParam1->f_4 = 1;
			break;
		
		case 2260:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("tattoo_sa_assault");
			uParam1->f_4 = 1;
			break;
		
		case 2261:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("tattoo_love_the_game");
			uParam1->f_4 = 1;
			break;
		
		case 2262:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("tattoo_skeleton_party");
			uParam1->f_4 = 1;
			break;
		
		case 2263:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("tattoo_dead_pretty");
			uParam1->f_4 = 1;
			break;
		
		case 2264:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("tattoo_reign_over");
			uParam1->f_4 = 1;
			break;
		
		case 2265:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("bennys_bespoke_wheels_chrome_mighty_star");
			uParam1->f_4 = 1;
			break;
		
		case 2266:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("bennys_bespoke_wheels_gold_mighty_star");
			uParam1->f_4 = 1;
			break;
		
		case 2267:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("bennys_bespoke_wheels_chrome_decadent_dish");
			uParam1->f_4 = 1;
			break;
		
		case 2268:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("bennys_bespoke_wheels_gold_decadent_dish");
			uParam1->f_4 = 1;
			break;
		
		case 2269:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("bennys_bespoke_wheels_chrome_razor_style");
			uParam1->f_4 = 1;
			break;
		
		case 2270:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("bennys_bespoke_wheels_gold_razor_style");
			uParam1->f_4 = 1;
			break;
		
		case 2271:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("bennys_bespoke_wheels_chrome_celtic_knot");
			uParam1->f_4 = 1;
			break;
		
		case 2272:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("bennys_bespoke_wheels_gold_celtic_knot");
			uParam1->f_4 = 1;
			break;
		
		case 2273:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("bennys_bespoke_wheels_chrome_warrior_dish");
			uParam1->f_4 = 1;
			break;
		
		case 2274:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("bennys_bespoke_wheels_gold_warrior_dish");
			uParam1->f_4 = 1;
			break;
		
		case 2275:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("bennys_bespoke_wheels_gold_big_dog_spokes");
			uParam1->f_4 = 1;
			break;
		
		case 2276:
			*uParam1 = 20000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("biker_website_lcc_avarus");
			uParam1->f_4 = 1;
			break;
		
		case 2277:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("biker_website_nagasaki_street_blazer");
			uParam1->f_4 = 1;
			break;
		
		case 2278:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("biker_website_nagasaki_chimera");
			uParam1->f_4 = 1;
			break;
		
		case 2279:
			*uParam1 = 20000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("biker_website_western_daemon_custom");
			uParam1->f_4 = 1;
			break;
		
		case 2280:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("biker_website_shitzu_defiler");
			uParam1->f_4 = 1;
			break;
		
		case 2281:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("biker_website_pegassi_esskey");
			uParam1->f_4 = 1;
			break;
		
		case 2282:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("biker_website_shitzu_hakuchou_drag");
			uParam1->f_4 = 1;
			break;
		
		case 2283:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("biker_website_maibatsu_manchez");
			uParam1->f_4 = 1;
			break;
		
		case 2284:
			*uParam1 = 20000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("biker_website_western_nightblade");
			uParam1->f_4 = 1;
			break;
		
		case 2285:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("biker_website_bf_raptor");
			uParam1->f_4 = 1;
			break;
		
		case 2286:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("biker_website_western_rat_bike");
			uParam1->f_4 = 1;
			break;
		
		case 2287:
			*uParam1 = 100000f;
			uParam1->f_1 = 1E+07f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 10000000;
			uParam1->f_5 = joaat("biker_website_lcc_sanctus");
			uParam1->f_4 = 1;
			break;
		
		case 2288:
			*uParam1 = 500000f;
			uParam1->f_1 = 1E+07f;
			uParam1->f_2 = 500000;
			uParam1->f_3 = 10000000;
			uParam1->f_5 = joaat("biker_website_nagasaki_shotaro");
			uParam1->f_4 = 1;
			break;
		
		case 2289:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("biker_website_pegassi_vortex");
			uParam1->f_4 = 1;
			break;
		
		case 2290:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("biker_website_western_wolfsbane");
			uParam1->f_4 = 1;
			break;
		
		case 2291:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("biker_website_western_zombie_bobber");
			uParam1->f_4 = 1;
			break;
		
		case 2292:
			*uParam1 = 20000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("biker_website_western_zombie_chopper");
			uParam1->f_4 = 1;
			break;
		
		case 2293:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1219608517;
			uParam1->f_4 = 1;
			break;
		
		case 2294:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 2033735347;
			uParam1->f_4 = 1;
			break;
		
		case 2295:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 2023136086;
			uParam1->f_4 = 1;
			break;
		
		case 2296:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1390109608;
			uParam1->f_4 = 1;
			break;
		
		case 2297:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 819519215;
			uParam1->f_4 = 1;
			break;
		
		case 2298:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 813618473;
			uParam1->f_4 = 1;
			break;
		
		case 2299:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 471352940;
			uParam1->f_4 = 1;
			break;
		
		case 2300:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 1241258301;
			uParam1->f_4 = 1;
			break;
		
		case 2301:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1058611921;
			uParam1->f_4 = 1;
			break;
		
		case 2302:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 1669688233;
			uParam1->f_4 = 1;
			break;
		
		case 2303:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1767762009;
			uParam1->f_4 = 1;
			break;
		
		case 2304:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 217858651;
			uParam1->f_4 = 1;
			break;
		
		case 2305:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_paleto_bay_document_forgery_office");
			uParam1->f_4 = 1;
			break;
		
		case 2306:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_city_document_forgery_office");
			uParam1->f_4 = 1;
			break;
		
		case 2307:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_countryside_document_forgery_office");
			uParam1->f_4 = 1;
			break;
		
		case 2308:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_elysian_document_forgery_office");
			uParam1->f_4 = 1;
			break;
		
		case 2309:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_paleto_bay_counterfeit_cash_factoy");
			uParam1->f_4 = 1;
			break;
		
		case 2310:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_city_counterfeit_cash_factoy");
			uParam1->f_4 = 1;
			break;
		
		case 2311:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_countryside_counterfeit_cash_factoy");
			uParam1->f_4 = 1;
			break;
		
		case 2312:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_elysian_counterfeit_cash_factoy");
			uParam1->f_4 = 1;
			break;
		
		case 2313:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_paleto_bay_cocaine_lockup");
			uParam1->f_4 = 1;
			break;
		
		case 2314:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_city_cocaine_lockup");
			uParam1->f_4 = 1;
			break;
		
		case 2315:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_countryside_cocaine_lockup");
			uParam1->f_4 = 1;
			break;
		
		case 2316:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_elysian_cocaine_lockup");
			uParam1->f_4 = 1;
			break;
		
		case 2317:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_paleto_bay_meth_lab");
			uParam1->f_4 = 1;
			break;
		
		case 2318:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_city_meth_lab");
			uParam1->f_4 = 1;
			break;
		
		case 2319:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_countryside_meth_lab");
			uParam1->f_4 = 1;
			break;
		
		case 2320:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_elysian_meth_lab");
			uParam1->f_4 = 1;
			break;
		
		case 2321:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_paleto_bay_weed_farm");
			uParam1->f_4 = 1;
			break;
		
		case 2322:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_city_weed_farm");
			uParam1->f_4 = 1;
			break;
		
		case 2323:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_countryside_weed_farm");
			uParam1->f_4 = 1;
			break;
		
		case 2324:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_business_elysian_weed_farm");
			uParam1->f_4 = 1;
			break;
		
		case 2325:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_forgery_business_equipment_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2326:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_forgery_business_security_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2327:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_forgery_business_staff_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2328:
			*uParam1 = 200000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_counterfeitbusiness_equipment_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2329:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_counterfeitbusiness_security_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2330:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_counterfeitbusiness_staff_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2331:
			*uParam1 = 200000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_cocaine_business_equipment_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2332:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_cocaine_business_security_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2333:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_cocaine_business_staff_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2334:
			*uParam1 = 200000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_meth_business_equipment_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2335:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_meth_business_security_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2336:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_meth_business_staff_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2337:
			*uParam1 = 200000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_weed_business_equipment_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2338:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_weed_business_security_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2339:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("biker_weed_business_staff_upgrade");
			uParam1->f_4 = 1;
			break;
		
		case 2341:
			*uParam1 = 0f;
			uParam1->f_1 = 1625000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1625000;
			uParam1->f_5 = joaat("gangops_the_iaa_job_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 2342:
			*uParam1 = 0f;
			uParam1->f_1 = 2375000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2375000;
			uParam1->f_5 = joaat("gangops_the_submarine_job_cash_reward");
			uParam1->f_4 = 1;
			break;
		
		case 2343:
			*uParam1 = 0f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("gangops_the_missile_silo_job_cash_reward");
			uParam1->f_4 = 1;
			break;
	}
}

int func_3()
{
	if (Global_2692501)
	{
		return 32;
	}
	return (32 - Global_2692502);
}

int func_4(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 >= 28)
	{
		StringCopy(&cVar0, "CONTENT_MODIFIER_", 64);
		StringIntConCat(&cVar0, (iParam0 - 28), 64);
		return MISC::GET_HASH_KEY(&cVar0);
	}
	switch (iParam0)
	{
		case 0:
			return 190769267;
			break;
		
		case 1:
			return joaat("mp_global");
			break;
		
		case 2:
			return 1398379561;
			break;
		
		case 3:
			return -295628664;
			break;
		
		case 4:
			return -1157311665;
			break;
		
		case 5:
			return 988790432;
			break;
		
		case 6:
			return 1140746429;
			break;
		
		case 7:
			return 1882254284;
			break;
		
		case 8:
			return -1021097824;
			break;
		
		case 9:
			return 1031194139;
			break;
		
		case 10:
			return -946481156;
			break;
		
		case 11:
			return -364624190;
			break;
		
		case 12:
			return -199795525;
			break;
		
		case 13:
			return -866645446;
			break;
		
		case 14:
			return 1144300534;
			break;
		
		case 15:
			return 539878179;
			break;
		
		case 16:
			return 571975921;
			break;
		
		case 17:
			return 818280646;
			break;
		
		case 18:
			return -183978087;
			break;
		
		case 19:
			return -52527117;
			break;
		
		case 26:
			return -395434754;
			break;
		
		case 20:
			return -1110334219;
			break;
		
		case 21:
			return -1382306730;
			break;
		
		case 22:
			return 1453550531;
			break;
		
		case 23:
			break;
		
		case 24:
			return 1744317449;
			break;
		
		case 25:
			return -1679896800;
			break;
		
		case 27:
			return 2;
			break;
		
		case 29:
			StringCopy(&cVar0, "ILLEGAL TUNABLE CONTEXT", 64);
			break;
	}
	return 0;
}

void func_5()
{
	MISC::CLEAR_TACTICAL_NAV_MESH_POINTS();
	MISC::ADD_STUNT_JUMP(-9f, -9f, -9f, -10f, -10f, -10f, -25f, -25f, -25f, -28f, -28f, -28f, 0f, 0f, 0f, 0, 0, 0);
	PED::ADD_SCENARIO_BLOCKING_AREA(-9f, -9f, -9f, -10f, -10f, -10f, false, true, true, true, 1);
	func_5();
}

void func_6()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_7()
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_14())
	{
		return 1;
	}
	if (Global_2698758)
	{
		return 1;
	}
	if (func_13())
	{
		return 1;
	}
	if (func_12(159))
	{
		if (!func_11())
		{
			return 1;
		}
	}
	if (func_12(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_8()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_8()
{
	switch (func_10())
	{
		case 0:
			return func_9();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_9()
{
	switch (Global_2698865)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_10()
{
	return Global_32948;
}

bool func_11()
{
	return Global_2684504.f_700;
}

int func_12(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_13()
{
	return Global_2696172;
}

bool func_14()
{
	return Global_2684504.f_695;
}

