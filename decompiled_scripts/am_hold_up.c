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
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
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
	struct<75> Local_90 = { 0, 0, 3, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_165[32];
	struct<54> Local_486 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	int iLocal_542 = 0;
	char* sLocal_543 = NULL;
	int iLocal_544 = 0;
	struct<3> Local_545 = { 0, 0, 0 } ;
	struct<3> Local_548 = { 0, 0, 0 } ;
	float fLocal_551 = 0f;
	int iLocal_552 = 0;
	struct<3> Local_553 = { 0, 0, 0 } ;
	struct<3> Local_556 = { 0, 0, 0 } ;
	int iLocal_559 = 0;
	var uLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	struct<3> Local_569 = { 0, 0, 0 } ;
	float fLocal_572 = 0f;
	struct<3> Local_573 = { 0, 0, 0 } ;
	float fLocal_576 = 0f;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	struct<3> Local_589 = { 0, 0, 0 } ;
	struct<3> Local_592 = { 0, 0, 0 } ;
	struct<3> Local_595 = { 0, 0, 0 } ;
	struct<3> Local_598 = { 0, 0, 0 } ;
	float fLocal_601 = 0f;
	struct<3> Local_602 = { 0, 0, 0 } ;
	struct<3> Local_605 = { 0, 0, 0 } ;
	float fLocal_608 = 0f;
	var uLocal_609 = 16;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
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
	var uLocal_692 = 0;
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
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	int iLocal_774[5] = { 0, 0, 0, 0, 0 };
	int iLocal_780[5] = { 0, 0, 0, 0, 0 };
	float fLocal_786 = 0f;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	int iLocal_801 = 0;
	int iLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	struct<3> Local_810 = { 0, 0, 0 } ;
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
	sLocal_16 = "NULL";
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
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	fLocal_63 = 0f;
	iLocal_544 = joaat("mp_m_shopkeep_01");
	iLocal_552 = -1;
	iLocal_559 = -1;
	iLocal_577 = joaat("prop_till_01");
	iLocal_578 = SYSTEM::ROUND(Global_262145.f_2405);
	iLocal_579 = SYSTEM::ROUND(Global_262145.f_2401) + 1;
	iLocal_580 = 1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_489(ScriptParam_0))
		{
			func_484();
		}
		if (func_483(1))
		{
			func_470(PLAYER::PLAYER_ID(), 0, 98816, 0);
		}
	}
	while (true)
	{
		func_469();
		if (func_461())
		{
			func_484();
		}
		func_450();
		if (BitTest(Local_90.f_25, 6))
		{
			if (func_483(1))
			{
				func_470(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_447();
				MISC::CLEAR_BIT(&(Local_486.f_53), 7);
				func_446();
			}
		}
		switch (func_445(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
				if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
				{
					if (func_435())
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_434(Local_486.f_0), false);
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_0))
						{
							if (func_433() > 0)
							{
								if (!func_432(Local_90.f_0))
								{
									func_431(&uLocal_609, 3, NETWORK::NET_TO_PED(Local_90.f_0), &(Local_90.f_48), 1, 0);
									func_430();
								}
								MISC::SET_BIT(&(Local_486.f_52), 22);
								Global_1979161 = Local_486.f_0;
								Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 2;
							}
						}
					}
				}
				if (func_433() == 6)
				{
					Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 5;
				}
				break;
			
			case 2:
				func_274(&Local_486, Local_553, Local_556, &Local_90, &(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_PED(Local_90.f_0), Local_602, Local_605, fLocal_608, false, true, 0), 0);
				func_267();
				if (func_433() == 2)
				{
					func_136();
				}
				else if (func_433() == 6)
				{
					Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 5;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_592, 30f, 30f, 30f, false, true, 0))
				{
					Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
				}
				break;
			
			case 5:
				func_135(&(Local_90.f_71));
				if (func_134(&(Local_90.f_71)))
				{
					Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
				}
				break;
			
			case 4:
				Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
			
			case 6:
				func_55();
				func_484();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_433())
			{
				case 0:
					if (!BitTest(Local_486.f_52, 16))
					{
						func_53(func_54(0));
						func_53(func_54(1));
						func_53(func_54(2));
						STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
						if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
						{
							if (func_435())
							{
								MISC::CLEAR_AREA(Local_553, 1.5f, false, true, false, true);
								MISC::CLEAR_AREA(Local_548, 1.5f, false, true, false, true);
								MISC::SET_BIT(&(Local_486.f_52), 16);
							}
						}
					}
					else if (func_51())
					{
						Local_90.f_13 = 2;
					}
					break;
				
				case 2:
					func_50();
					func_47();
					func_31();
					func_30();
					func_23();
					func_22();
					func_13();
					func_12();
					if (func_4())
					{
						func_1();
						Local_90.f_13 = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_14))
	{
		if (func_3(Local_90.f_14))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(Local_90.f_14)))
			{
				ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_90.f_14), true, true);
				func_2(&(Local_90.f_14));
			}
		}
	}
}

void func_2(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_3(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_4()
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()
{
	if (BitTest(Local_90.f_25, 2))
	{
		return 1;
	}
	if (BitTest(Local_90.f_25, 3))
	{
		return 1;
	}
	if (!func_11())
	{
		if ((BitTest(Local_90.f_25, 11) || BitTest(Local_90.f_25, 19)) || (BitTest(Local_90.f_25, 9) && !BitTest(Local_90.f_25, 20)))
		{
			func_6(Local_486.f_50, 1, func_7());
			return 1;
		}
		if (BitTest(Local_90.f_25, 18))
		{
			func_6(Local_486.f_50, 1, func_7());
			return 1;
		}
	}
	if (BitTest(Local_90.f_25, 18))
	{
		if (!BitTest(Local_90.f_26, 7))
		{
			func_6(Local_486.f_50, 1, func_7());
			MISC::SET_BIT(&(Local_90.f_26), 7);
		}
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = 1925046697;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 5, iParam2, Var0.f_0);
	}
}

int func_7()
{
	return func_8(NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_10(), -1, 0));
}

int func_8(int iParam0)
{
	var uVar0;
	
	if (func_9(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_9(var uParam0)
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

char* func_10()
{
	switch (Global_2698864)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_11()
{
	if ((BitTest(Local_90.f_25, 13) || BitTest(Local_90.f_25, 27)) || BitTest(Local_90.f_25, 28))
	{
		return 1;
	}
	return 0;
}

void func_12()
{
	var uVar0;
	
	if (!BitTest(Local_90.f_25, 21))
	{
		if (func_432(Local_90.f_0))
		{
			Local_90.f_74 = NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_90.f_0, &uVar0);
			MISC::SET_BIT(&(Local_90.f_25), 21);
		}
	}
	if (!BitTest(Local_90.f_25, 19))
	{
		if (BitTest(Local_90.f_25, 10) && Local_90.f_39 <= 0f)
		{
			MISC::SET_BIT(&(Local_90.f_25), 19);
		}
	}
	if (!BitTest(Local_90.f_26, 17))
	{
		if (BitTest(Local_90.f_25, 20))
		{
			if (func_3(Local_90.f_14))
			{
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_90.f_14), false, false);
				MISC::SET_BIT(&(Local_90.f_26), 17);
			}
		}
	}
	if (!BitTest(Local_90.f_25, 6))
	{
		if (Global_2738934.f_8 == 1)
		{
			MISC::SET_BIT(&(Local_90.f_25), 6);
			MISC::SET_BIT(&(Local_90.f_25), 16);
		}
	}
}

int func_13()
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() || !BitTest(Local_90.f_27, 0))
	{
		return 0;
	}
	if (Local_90.f_68 != 6)
	{
		if (Local_90.f_68 > 0 && func_432(Local_90.f_16))
		{
			Local_90.f_68 = 6;
			return 0;
		}
		switch (Local_90.f_68)
		{
			case 0:
				if (!func_20(&uLocal_799, 10000, 0))
				{
					iVar0 = PED::GET_RANDOM_PED_AT_COORD(Local_602, 20f, 20f, 20f, -1);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
						{
							iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !PED::IS_COP_PED_IN_AREA_3D(Local_602, 25f, 25f, 25f)) && !ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_589, 1f, 1f, 2f, false, true, 0)) && !WEAPON::IS_PED_ARMED(iVar0, 7)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, true)) && PED::IS_PED_HUMAN(iVar0)) && func_18(iVar1))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
								{
									if (func_17(&(Local_90.f_16), iVar0, 1, 0))
									{
										WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_90.f_16), joaat("weapon_pistol"), 25000, false);
										PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_90.f_16), true);
										Local_90.f_68 = 1;
										MISC::SET_BIT(&(Local_90.f_27), 1);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_90.f_16), Global_1837314);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_90.f_16), 2);
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_90.f_16), SYSTEM::ROUND((200f * Global_262145.f_156)), 0, 0);
										func_431(&uLocal_609, 4, NETWORK::NET_TO_PED(Local_90.f_16), "StoreHero", 1, 0);
										TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_90.f_16), func_16(), 0, true);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((BitTest(Local_90.f_25, 9) || BitTest(Local_90.f_25, 5)) || BitTest(Local_90.f_25, 4))
				{
					Local_90.f_68 = 2;
				}
				break;
			
			case 2:
				if (func_20(&(Local_90.f_69), 3000, 0) || (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_16), joaat("script_task_go_to_entity")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_16), joaat("script_task_go_to_entity")) != 1))
				{
					func_15(&(Local_90.f_69));
					Local_90.f_68 = 3;
				}
				break;
			
			case 3:
				if (((BitTest(Local_90.f_25, 5) || BitTest(Local_90.f_27, 8)) || BitTest(Local_90.f_27, 9)) || func_20(&(Local_90.f_69), 5000, 0))
				{
					if (func_14() || func_20(&(Local_90.f_69), 5000, 0))
					{
						Local_90.f_68 = 4;
					}
					else
					{
						Local_90.f_68 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_14()
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_15(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_16()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_17(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, bParam2, bParam3);
	*uParam0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam2)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

int func_18(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01")) || iParam0 == joaat("s_m_y_casino_01")) || func_19(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
		case joaat("a_c_cat_01"):
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_chimp"):
		case joaat("a_c_chimp_02"):
		case joaat("a_c_chop"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_cow"):
		case joaat("a_c_coyote"):
		case joaat("a_c_crow"):
		case joaat("a_c_deer"):
		case joaat("a_c_dolphin"):
		case joaat("a_c_fish"):
		case joaat("a_c_hen"):
		case joaat("a_c_humpback"):
		case joaat("a_c_husky"):
		case joaat("a_c_killerwhale"):
		case joaat("a_c_mtlion"):
		case joaat("a_c_pig"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_poodle"):
		case joaat("a_c_pug"):
		case joaat("a_c_rabbit_01"):
		case joaat("a_c_rabbit_02"):
		case joaat("a_c_rat"):
		case joaat("a_c_retriever"):
		case joaat("a_c_rhesus"):
		case joaat("a_c_rottweiler"):
		case joaat("a_c_seagull"):
		case joaat("a_c_sharkhammer"):
		case joaat("a_c_sharktiger"):
		case joaat("a_c_shepherd"):
		case joaat("a_c_stingray"):
		case joaat("a_c_westy"):
		case joaat("ig_orleans"):
			return 1;
		
		default:
	}
	return 0;
}

int func_20(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_21(uParam0, bParam2, 0);
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

void func_21(var uParam0, bool bParam1, bool bParam2)
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

void func_22()
{
	if (Local_90.f_32 == 0)
	{
		if (Local_90.f_3 >= 2 && Local_90.f_3 != 9)
		{
			Local_90.f_32 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(101, PLAYER::PLAYER_PED_ID(), 60000f);
		}
	}
}

void func_23()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!BitTest(Local_90.f_1, 5))
	{
		if (Local_90.f_43 > 0)
		{
			func_27();
			if (!BitTest(Local_90.f_1, 5))
			{
				return;
			}
		}
	}
	if (BitTest(Local_90.f_1, 1))
	{
		if (Local_90.f_2 == 3 && !BitTest(Local_90.f_25, 9))
		{
			Local_90.f_2 = 0;
		}
		MISC::CLEAR_BIT(&(Local_90.f_1), 1);
	}
	switch (Local_90.f_2)
	{
		case 0:
			if ((((func_3(Local_90.f_0) && !func_432(Local_90.f_0)) && func_3(Local_90.f_17[Local_90.f_28])) && Local_90.f_3 != 8) && Local_90.f_3 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_90.f_0)))
				{
					if (BitTest(Local_90.f_25, 9) || BitTest(Local_90.f_1, 4))
					{
						Local_90.f_2 = 2;
						return;
					}
					if (!iLocal_542)
					{
						TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_90.f_0), Local_90.f_44, 1600);
						iLocal_542 = 1;
					}
					if (func_20(&uLocal_789, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_90.f_0));
						fVar1 = (Local_90.f_44 - 10f);
						fVar2 = (Local_90.f_44 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_90.f_44 - 10f) + 360f);
							fVar1 = ((Local_90.f_44 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_90.f_44 - 10f) - 360f);
							fVar1 = ((Local_90.f_44 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_20(&uLocal_795, 1000, 0)) || func_20(&uLocal_795, 3125, 0))
						{
							TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_90.f_0));
							Local_90.f_29 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_PED(Local_90.f_0), -0.65f, 0.87f, -0.02f), Local_556, 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_90.f_0), Local_90.f_29, "mp_am_hold_up", func_26(Local_90.f_28), 1.5f, -1.5f, 157, 16, 1000f, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[Local_90.f_28]))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_90.f_17[Local_90.f_28]), true, false);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_90.f_17[Local_90.f_28]), Local_90.f_29, "mp_am_hold_up", func_25(Local_90.f_28), 4f, -4f, 8);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_90.f_29);
							Local_90.f_2 = 1;
							iLocal_559 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_29);
						}
					}
				}
			}
			break;
		
		case 1:
			if (BitTest(Local_90.f_25, 9) || BitTest(Local_90.f_1, 4))
			{
				iLocal_559 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_29);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_559))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_90.f_29);
				}
				Local_90.f_2 = 2;
				return;
			}
			if (iLocal_559 != -1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_559) || func_20(&uLocal_791, 2000, 0))
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_559) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_559) == 1f) || func_20(&uLocal_791, 2000, 0))
					{
						if ((func_3(Local_90.f_0) && !func_432(Local_90.f_0)) && !BitTest(Local_90.f_25, 9))
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_90.f_0));
						}
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_90.f_29);
						Local_90.f_2 = 2;
					}
				}
			}
			else
			{
				iLocal_559 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_29);
			}
			break;
		
		case 2:
			func_3(Local_90.f_17[Local_90.f_28]);
			if (func_20(&uLocal_797, 1000, 0) && func_3(Local_90.f_17[Local_90.f_28]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_OBJ(Local_90.f_17[Local_90.f_28])))
				{
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_90.f_17[Local_90.f_28]), false, false);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_90.f_17[Local_90.f_28]), true);
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_90.f_17[Local_90.f_28]), func_24(Local_90.f_28), true, false, false, true);
				}
				iLocal_559 = -1;
				iLocal_542 = 0;
				if (BitTest(Local_90.f_1, 4))
				{
					MISC::CLEAR_BIT(&(Local_90.f_1), 4);
				}
				func_15(&uLocal_797);
				func_15(&uLocal_791);
				func_15(&uLocal_789);
				func_15(&uLocal_795);
				Local_90.f_2 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_24(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return Local_573 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return Local_573 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return Local_573 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return Local_573 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return Local_573 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return Local_573 - Vector(1f, -0.2f, -0.1f);
		
		case 6:
			return Local_573 - Vector(1f, -0.2f, 0.2f);
		
		default:
	}
	return Local_573 - Vector(1f, 0f, -0.1f);
}

char* func_25(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		case 6:
			return "purchase_beer";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_26(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		case 6:
			return "purchase_beer_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_27()
{
	if ((((((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[3]) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[1])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[2])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[4])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[0])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[5])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[6]))
	{
		if ((((((func_53(func_29(3)) && func_53(func_29(1))) && func_53(func_29(2))) && func_53(func_29(4))) && func_53(func_29(0))) && func_53(func_29(5))) && func_53(func_29(6)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 7, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[3]))
				{
					if (func_28(&(Local_90.f_17[3]), func_29(3), func_24(3), 1, 1, 0, 1, 0, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_90.f_17[3]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_545));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_90.f_17[3]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_90.f_17[3]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[1]))
				{
					if (func_28(&(Local_90.f_17[1]), func_29(1), func_24(1), 1, 1, 0, 1, 0, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_90.f_17[1]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_545));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_90.f_17[1]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_90.f_17[1]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[2]))
				{
					if (func_28(&(Local_90.f_17[2]), func_29(2), func_24(2), 1, 1, 0, 1, 0, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_90.f_17[2]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_545));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_90.f_17[2]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_90.f_17[2]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[4]))
				{
					if (func_28(&(Local_90.f_17[4]), func_29(4), func_24(4), 1, 1, 0, 1, 0, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_90.f_17[4]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_545));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_90.f_17[4]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_90.f_17[4]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[0]))
				{
					if (func_28(&(Local_90.f_17[0]), func_29(0), func_24(0), 1, 1, 0, 1, 0, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_90.f_17[0]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_545));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_90.f_17[0]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_90.f_17[0]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[5]))
				{
					if (func_28(&(Local_90.f_17[5]), func_29(5), func_24(5), 1, 1, 0, 1, 0, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_90.f_17[5]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_545));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_90.f_17[5]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_90.f_17[5]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_17[6]))
				{
					if (func_28(&(Local_90.f_17[6]), func_29(6), func_24(6), 1, 1, 0, 1, 0, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_90.f_17[6]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_545));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_90.f_17[6]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_90.f_17[6]), false, false);
					}
				}
			}
		}
	}
	else
	{
		MISC::SET_BIT(&(Local_90.f_1), 5);
		return 1;
	}
	return 0;
}

int func_28(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam6, bParam5, bParam7, iParam12));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		if (bParam10)
		{
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, false);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
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

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		case 4:
			return joaat("prop_ld_fags_01");
		
		case 0:
			return joaat("prop_ecola_can");
		
		case 5:
			return joaat("prop_amb_beer_bottle");
		
		case 6:
			return joaat("prop_ld_can_01b");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_30()
{
	float fVar0;
	
	if (!BitTest(Local_90.f_25, 9))
	{
		if (Global_2738934.f_8 == 1 || BitTest(Local_90.f_25, 6))
		{
			if ((((func_3(Local_90.f_14) && func_3(Local_90.f_0)) && !func_432(Local_90.f_0)) && Local_90.f_3 != 8) && Local_90.f_3 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_90.f_0)))
				{
					if (!BitTest(Local_486.f_52, 30))
					{
						TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_90.f_0), Local_90.f_44, 1600);
						MISC::SET_BIT(&(Local_486.f_52), 30);
					}
					if (func_20(&uLocal_787, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_90.f_0));
						if ((fVar0 > (Local_90.f_44 - 20f) && fVar0 < (Local_90.f_44 + 20f)) || func_20(&uLocal_793, 1500, 0))
						{
							TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_90.f_0));
							Local_90.f_31 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_553, Local_556, 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_90.f_0), Local_90.f_31, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1000f, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_14))
							{
								ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_90.f_14), false);
								ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_90.f_14), true);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_90.f_14), Local_90.f_31, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_15))
							{
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_90.f_15), Local_90.f_31, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_90.f_31);
							MISC::SET_BIT(&(Local_90.f_25), 9);
						}
					}
				}
				else
				{
					Local_90.f_3 = 8;
				}
			}
		}
	}
	else if (!BitTest(Local_90.f_25, 17))
	{
		iLocal_552 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_31);
		if (iLocal_552 != -1)
		{
			func_3(Local_90.f_0);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_552))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				MISC::SET_BIT(&(Local_90.f_25), 17);
			}
		}
	}
	else if (!BitTest(Local_90.f_26, 15))
	{
		iLocal_552 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_31);
		if (iLocal_552 != -1)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_552))
			{
				func_3(Local_90.f_0);
				if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_14) && func_3(Local_90.f_14)) && func_3(Local_90.f_0))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_552) > 0.44f)
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_90.f_14), true, false);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_90.f_14), true, false);
						MISC::SET_BIT(&(Local_90.f_26), 15);
					}
				}
			}
		}
	}
}

int func_31()
{
	int iVar0;
	float fVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	func_45();
	if (Local_90.f_3 != 9)
	{
		if (func_432(Local_90.f_0))
		{
			Local_90.f_3 = 9;
			return 0;
		}
		if ((BitTest(Local_90.f_25, 6) && !BitTest(Local_90.f_25, 9)) && Local_90.f_3 < 8)
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_14) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_15))
			{
				Local_90.f_3 = 8;
			}
		}
		switch (Local_90.f_3)
		{
			case 0:
				if (!func_432(Local_90.f_0))
				{
					Local_90.f_3 = 1;
				}
				break;
			
			case 1:
				if (BitTest(Local_90.f_25, 4))
				{
					Local_90.f_3 = 2;
				}
				else if (BitTest(Local_90.f_25, 6) || BitTest(Local_90.f_25, 9))
				{
					Local_90.f_3 = 4;
				}
				else if (func_43() || func_36(0))
				{
					Local_90.f_3 = 8;
				}
				else if (func_34())
				{
					Local_90.f_3 = 7;
				}
				break;
			
			case 2:
				if (BitTest(Local_90.f_25, 6) || BitTest(Local_90.f_25, 9))
				{
					Local_90.f_3 = 4;
				}
				else if (func_43() || func_36(1))
				{
					Local_90.f_3 = 8;
				}
				else if (func_34())
				{
					Local_90.f_3 = 7;
				}
				break;
			
			case 3:
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_achieve_heading")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_achieve_heading")) != 1)
				{
					Local_90.f_3 = 4;
				}
				else if (func_36(1))
				{
					Local_90.f_3 = 8;
				}
				else if (func_34())
				{
					Local_90.f_3 = 7;
				}
				break;
			
			case 4:
				if (BitTest(Local_90.f_25, 17))
				{
					iVar0 = 0;
					iLocal_552 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_31);
					if (iLocal_552 != -1)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_552))
						{
							if (MISC::IS_BULLET_IN_AREA(Local_545, 3f, false))
							{
								if (!BitTest(Local_90.f_25, 25))
								{
									MISC::SET_BIT(&(Local_90.f_25), 25);
								}
								Local_90.f_35 = (Local_90.f_35 + 0.35f);
							}
							fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_552);
							if (fVar1 >= 0.8f)
							{
								Local_90.f_39 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_90.f_39 = 0f;
							}
							else if (fVar1 > Local_90.f_39)
							{
								Local_90.f_39 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_90.f_39 = 1f;
								iVar0 = 1;
							}
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
					if (iVar0 == 1)
					{
						Local_90.f_3 = 6;
					}
					else if (func_36(1))
					{
						Local_90.f_3 = 8;
					}
					else if (func_34())
					{
						Local_90.f_3 = 7;
					}
				}
				break;
			
			case 5:
				if (func_43() || func_36(1))
				{
					Local_90.f_3 = 8;
				}
				break;
			
			case 6:
				func_32();
				if (func_43() || func_36(1))
				{
					Local_90.f_3 = 8;
				}
				else if (func_34())
				{
					Local_90.f_3 = 7;
				}
				else if (BitTest(Local_90.f_26, 3))
				{
					if (!BitTest(Local_90.f_26, 4))
					{
						Local_90.f_3 = 7;
					}
				}
				break;
			
			case 8:
				func_32();
				break;
			
			case 7:
				break;
		}
	}
	else if (!BitTest(Local_90.f_26, 10))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_0))
		{
			Local_90.f_45 = (Local_90.f_45 - 1);
			MISC::SET_BIT(&(Local_90.f_26), 10);
		}
	}
	return 1;
}

void func_32()
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Local_90.f_26, 2))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		iVar1 = (iLocal_580 + func_33());
		if (iVar0 < iVar1)
		{
			MISC::SET_BIT(&(Local_90.f_26), 3);
		}
		MISC::SET_BIT(&(Local_90.f_26), 2);
	}
}

int func_33()
{
	int iVar0;
	
	iVar0 = (Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_36 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_34()
{
	int iVar0;
	int iVar1;
	
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 24) || PAD::IS_CONTROL_JUST_PRESSED(0, 257))
	{
		iVar0 = func_35(PLAYER::PLAYER_PED_ID());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
			if (((((((WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) == 0 && iVar1 != joaat("GROUP_MELEE")) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != joaat("GROUP_FIREEXTINGUISHER")) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_585)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_35(int iParam0)
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true);
	return uVar0;
}

int func_36(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar14;
	int iVar15;
	
	if (func_41(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	if (func_40(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (BitTest(Local_90.f_25, 5))
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_90.f_0)))
	{
		return 1;
	}
	if (func_39() || func_38())
	{
		return 1;
	}
	if (func_37())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) == 186)
		{
			if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 13))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var1.f_0) && ENTITY::IS_ENTITY_A_PED(Var1.f_0))
				{
					iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_0);
					if (PED::IS_PED_INJURED(iVar14) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar14) == iLocal_585)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
						{
							iVar15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
							if (iVar15 != NETWORK::NET_TO_PED(Local_90.f_0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(Local_90.f_26, 5))
		{
			if (PED::IS_COP_PED_IN_AREA_3D(Local_595 - Vector(25f, 25f, 25f), Local_595 + Vector(25f, 25f, 25f)))
			{
				MISC::SET_BIT(&(Local_90.f_26), 5);
			}
		}
	}
	return 0;
}

int func_37()
{
	if (Local_486.f_50 >= 15 && Local_486.f_50 <= 19)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(9, Local_595, 40f))
		{
			return 1;
		}
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_595, Local_598, fLocal_601))
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_602, Local_605, fLocal_608))
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_602, Local_605, fLocal_608, joaat("weapon_grenade"), false) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_602, Local_605, fLocal_608, joaat("weapon_molotov"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_602, Local_605, fLocal_608, joaat("weapon_stickybomb"), false))
	{
		return 1;
	}
	return 0;
}

int func_39()
{
	if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_595, Local_598, fLocal_601, joaat("weapon_grenade"), false) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_595, Local_598, fLocal_601, joaat("weapon_molotov"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_595, Local_598, fLocal_601, joaat("weapon_stickybomb"), false))
	{
		return 1;
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2708056;
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

int func_41(int iParam0, int iParam1)
{
	if (Global_1887305[iParam0 /*610*/] == iParam1)
	{
		return func_42(iParam0);
	}
	return 0;
}

int func_42(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

int func_43()
{
	if (func_44() || func_37())
	{
		return 1;
	}
	return 0;
}

int func_44()
{
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_595, Local_598, fLocal_601, false))
	{
		return 1;
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_602, Local_605, fLocal_608, false))
	{
		return 1;
	}
	return 0;
}

void func_45()
{
	if (Local_90.f_35 > 0f)
	{
		if (func_46(&(Local_90.f_36), 50, 0))
		{
			Local_90.f_35 = (Local_90.f_35 - 0.02f);
			if (Local_90.f_35 < 0f)
			{
				Local_90.f_35 = 0f;
			}
			func_15(&(Local_90.f_36));
		}
	}
}

int func_46(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_21(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_15(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_15(uParam0);
		return 1;
	}
	return 0;
}

void func_47()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_566)))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_566));
		iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
		if (!BitTest(Local_90.f_25, 11))
		{
			if (BitTest(Local_165[iLocal_566 /*10*/], 5))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_14))
				{
					if (func_3(Local_90.f_14))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_90.f_14), true, true);
						func_49(&(Local_90.f_14));
					}
				}
				else
				{
					Local_90.f_40 = { Local_165[iLocal_566 /*10*/].f_7 };
					Local_90.f_46 = 7;
					MISC::SET_BIT(&(Local_90.f_25), 11);
				}
			}
		}
		if (!BitTest(Local_90.f_25, 14))
		{
			if (BitTest(Local_165[iLocal_566 /*10*/], 6))
			{
				MISC::SET_BIT(&(Local_90.f_25), 14);
			}
		}
		if (!BitTest(Local_90.f_25, 15))
		{
			if (BitTest(Local_165[iLocal_566 /*10*/], 7))
			{
				MISC::SET_BIT(&(Local_90.f_25), 15);
			}
		}
		if (!BitTest(Local_90.f_25, 26))
		{
			if (BitTest(Local_165[iLocal_566 /*10*/], 24))
			{
				MISC::SET_BIT(&(Local_90.f_25), 26);
			}
		}
		if (!BitTest(Local_90.f_25, 22))
		{
			if (BitTest(Local_165[iLocal_566 /*10*/], 22))
			{
				MISC::SET_BIT(&(Local_90.f_25), 22);
			}
		}
		if (!BitTest(Local_90.f_25, 23))
		{
			if (BitTest(Local_165[iLocal_566 /*10*/], 23))
			{
				MISC::SET_BIT(&(Local_90.f_25), 23);
			}
		}
		if (!BitTest(Local_90.f_25, 30))
		{
			if (BitTest(Local_165[iLocal_566 /*10*/], 25))
			{
				MISC::SET_BIT(&(Local_90.f_25), 30);
			}
		}
		if (!BitTest(Local_90.f_25, 31))
		{
			if (BitTest(Local_165[iLocal_566 /*10*/], 26))
			{
				MISC::SET_BIT(&(Local_90.f_25), 31);
			}
		}
		if (!BitTest(Local_90.f_26, 6))
		{
			if (BitTest(Local_165[iLocal_566 /*10*/], 29))
			{
				MISC::SET_BIT(&(Local_90.f_26), 6);
			}
		}
		if (!BitTest(Local_90.f_26, 9))
		{
			if (BitTest(Local_165[iLocal_566 /*10*/], 31))
			{
				MISC::SET_BIT(&(Local_90.f_26), 9);
			}
		}
		if (!BitTest(Local_90.f_1, 3))
		{
			if (BitTest(Local_165[iLocal_566 /*10*/].f_1, 3))
			{
				MISC::SET_BIT(&(Local_90.f_1), 3);
			}
		}
		if (BitTest(Local_90.f_27, 1))
		{
			if (!BitTest(Local_90.f_27, 6))
			{
				if (BitTest(Local_165[iLocal_566 /*10*/].f_5, 1))
				{
					MISC::SET_BIT(&(Local_90.f_27), 6);
				}
			}
			if (!BitTest(Local_90.f_27, 7))
			{
				if (BitTest(Local_165[iLocal_566 /*10*/].f_5, 2))
				{
					MISC::SET_BIT(&(Local_90.f_27), 7);
				}
			}
			if (!BitTest(Local_90.f_27, 5))
			{
				if (BitTest(Local_165[iLocal_566 /*10*/].f_5, 0))
				{
					MISC::SET_BIT(&(Local_90.f_27), 5);
				}
			}
		}
		if (!BitTest(Local_90.f_25, 20))
		{
			if (BitTest(Local_165[iLocal_566 /*10*/], 11))
			{
				MISC::SET_BIT(&(Local_90.f_25), 20);
			}
		}
		if (!BitTest(Local_90.f_26, 17))
		{
			if (BitTest(Local_165[iLocal_566 /*10*/], 13))
			{
				MISC::SET_BIT(&(Local_90.f_26), 17);
			}
		}
		if (func_48(iVar0, 1, 1))
		{
			if (!BitTest(Local_90.f_25, 5))
			{
				if (!func_432(Local_90.f_0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_90.f_0), iVar1, true))
					{
						MISC::SET_BIT(&(Local_90.f_25), 5);
					}
				}
			}
			if (BitTest(Local_90.f_27, 1))
			{
				if (!BitTest(Local_90.f_27, 8))
				{
					if (!func_432(Local_90.f_16))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_90.f_16), iVar1, true))
						{
							MISC::SET_BIT(&(Local_90.f_27), 8);
						}
					}
				}
				if (!BitTest(Local_90.f_27, 9))
				{
					if (BitTest(Local_165[iLocal_566 /*10*/].f_5, 3))
					{
						MISC::SET_BIT(&(Local_90.f_27), 9);
					}
				}
			}
			if (!BitTest(Local_90.f_25, 6))
			{
				if (BitTest(Local_165[iLocal_566 /*10*/], 1))
				{
					MISC::SET_BIT(&(Local_90.f_25), 6);
				}
			}
			if (!BitTest(Local_90.f_25, 16))
			{
				if (BitTest(Local_165[iLocal_566 /*10*/], 8))
				{
					MISC::SET_BIT(&(Local_90.f_25), 16);
				}
			}
			if (!BitTest(Local_90.f_26, 1))
			{
				if (BitTest(Local_165[iLocal_566 /*10*/], 27))
				{
					MISC::SET_BIT(&(Local_90.f_26), 1);
				}
			}
			if (!BitTest(Local_90.f_25, 7))
			{
				if (BitTest(Local_165[iLocal_566 /*10*/], 0))
				{
					MISC::SET_BIT(&(Local_90.f_25), 7);
				}
			}
			if (!BitTest(Local_90.f_25, 10))
			{
				if (BitTest(Local_165[iLocal_566 /*10*/], 4))
				{
					if (Local_90.f_3 != 5 && Local_90.f_3 != 6)
					{
						Local_90.f_3 = 5;
					}
					MISC::SET_BIT(&(Local_90.f_25), 10);
				}
			}
			if (!BitTest(Local_90.f_1, 2))
			{
				if (BitTest(Local_165[iLocal_566 /*10*/].f_1, 2))
				{
					MISC::SET_BIT(&(Local_90.f_1), 2);
					MISC::SET_BIT(&(Local_90.f_1), 4);
					iLocal_568 = iLocal_566;
				}
			}
			else if (!BitTest(Local_165[iLocal_568 /*10*/].f_1, 2))
			{
				MISC::CLEAR_BIT(&(Local_90.f_1), 2);
				if (BitTest(Local_90.f_1, 3))
				{
					MISC::CLEAR_BIT(&(Local_90.f_1), 3);
				}
			}
			if (!BitTest(Local_90.f_26, 8))
			{
				if (BitTest(Local_165[iLocal_566 /*10*/], 30))
				{
					MISC::SET_BIT(&(Local_90.f_26), 8);
				}
			}
			if (!BitTest(Local_90.f_1, 0))
			{
				if (BitTest(Local_165[iLocal_566 /*10*/].f_1, 0))
				{
					MISC::SET_BIT(&(Local_90.f_1), 0);
					MISC::SET_BIT(&(Local_90.f_1), 1);
					Local_90.f_28 = Local_165[iLocal_566 /*10*/].f_2;
					iLocal_567 = iLocal_566;
				}
			}
			else if (!BitTest(Local_165[iLocal_567 /*10*/].f_1, 0))
			{
				MISC::CLEAR_BIT(&(Local_90.f_1), 0);
			}
			if (!BitTest(Local_90.f_26, 13))
			{
				if (BitTest(Local_165[iLocal_566 /*10*/], 21))
				{
					MISC::SET_BIT(&(Local_90.f_26), 13);
				}
			}
		}
	}
	iLocal_566++;
	if (iLocal_566 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_566 = 0;
	}
}

int func_48(int iParam0, bool bParam1, bool bParam2)
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
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_49(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

void func_50()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	MISC::SET_BIT(&(Local_90.f_25), 2);
	MISC::SET_BIT(&(Local_90.f_25), 3);
	MISC::CLEAR_BIT(&(Local_90.f_25), 13);
	MISC::CLEAR_BIT(&(Local_90.f_25), 27);
	MISC::CLEAR_BIT(&(Local_90.f_25), 28);
	MISC::CLEAR_BIT(&(Local_90.f_26), 4);
	if (!BitTest(Local_90.f_25, 18))
	{
		if (func_432(Local_90.f_0))
		{
			if (Local_90.f_39 <= 0f)
			{
				MISC::SET_BIT(&(Local_90.f_25), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (Local_165[iVar0 /*10*/].f_3 > 0)
			{
				Local_90.f_4 = (Local_90.f_4 + Local_165[iVar0 /*10*/].f_3);
				Local_165[iVar0 /*10*/].f_3 = 0;
			}
			if (BitTest(Local_90.f_25, 3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_592, 30f, 30f, 30f, false, true, 0))
				{
					MISC::CLEAR_BIT(&(Local_90.f_25), 3);
				}
			}
			if (!BitTest(Local_90.f_26, 16))
			{
				if (BitTest(Local_165[iVar0 /*10*/], 12))
				{
					MISC::SET_BIT(&(Local_90.f_26), 16);
				}
			}
			if (func_48(iVar5, 1, 1))
			{
				if (BitTest(Local_90.f_25, 2))
				{
					MISC::CLEAR_BIT(&(Local_90.f_25), 2);
				}
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar6) == iLocal_585)
				{
					if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_586 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_587)
					{
						iVar2 = 1;
					}
					else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_588)
					{
						MISC::SET_BIT(&(Local_90.f_25), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					MISC::SET_BIT(&(Local_90.f_25), 13);
					iVar4++;
					if (!BitTest(Local_90.f_25, 9) && !BitTest(Local_90.f_25, 21))
					{
						if (!BitTest(Local_90.f_25, 4))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(iVar6, &iVar1, true))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_90.f_34 == -1)
									{
										Local_90.f_34 = iVar0;
									}
									else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_90.f_34)))
									{
										Local_90.f_34 = -1;
									}
									MISC::SET_BIT(&(Local_90.f_25), 4);
									if (!BitTest(Local_90.f_25, 12))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_545, 2.5f, 2.5f, 3f, false, true, 0))
										{
											MISC::SET_BIT(&(Local_90.f_25), 12);
										}
									}
								}
							}
						}
						if (!BitTest(Local_90.f_26, 0))
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar5) > 0)
							{
								MISC::SET_BIT(&(Local_90.f_26), 0);
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_592, 5f, 5f, 2.5f, false, true, 0))
				{
					MISC::SET_BIT(&(Local_90.f_25), 28);
					iVar4++;
				}
				if (!BitTest(Local_90.f_26, 4))
				{
					if (BitTest(Local_165[iVar0 /*10*/], 28))
					{
						MISC::SET_BIT(&(Local_90.f_26), 4);
					}
				}
				if ((BitTest(Local_90.f_25, 9) && !BitTest(Local_90.f_25, 20)) && !BitTest(Local_90.f_25, 19))
				{
					if (Local_165[iLocal_566 /*10*/].f_6 > Local_90.f_35)
					{
						Local_90.f_35 = Local_165[iVar0 /*10*/].f_6;
						func_15(&(Local_90.f_36));
						if (!BitTest(Local_90.f_25, 24))
						{
							if (Local_90.f_35 > (0.55f + 0.2f))
							{
								MISC::SET_BIT(&(Local_90.f_25), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_90.f_43 != iVar4)
	{
		Local_90.f_43 = iVar4;
	}
}

int func_51()
{
	int iVar0;
	
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_0) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_14)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_15))
	{
		if ((func_53(iLocal_544) && func_53(func_54(1))) && func_53(func_54(2)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 0, 2, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_0))
				{
					if (func_52(&Local_90, 4, iLocal_544, Local_545 - Vector(1f, 0f, 0f), Local_90.f_44, 1, 1, 1))
					{
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_90.f_0), 0, iLocal_774[0], iLocal_780[0], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_90.f_0), 2, iLocal_774[1], iLocal_780[1], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_90.f_0), 3, iLocal_774[2], iLocal_780[2], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_90.f_0), 4, iLocal_774[3], iLocal_780[3], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_90.f_0), 8, iLocal_774[4], iLocal_780[4], 0);
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_PED(Local_90.f_0), INTERIOR::GET_INTERIOR_AT_COORDS(Local_545));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_90.f_0), true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_90.f_0), true);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_90.f_0), true, 0f);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_90.f_0), 16);
						PED::SET_PED_CAN_EVASIVE_DIVE(NETWORK::NET_TO_PED(Local_90.f_0), false);
						PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_90.f_0), 1024, true);
						WEAPON::REMOVE_ALL_PED_WEAPONS(NETWORK::NET_TO_PED(Local_90.f_0), true);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_90.f_0), SYSTEM::ROUND((200f * Global_262145.f_156)), 0, 0);
						if (!DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_90.f_0), "XP_Blocker"))
						{
							DECORATOR::DECOR_SET_BOOL(NETWORK::NET_TO_PED(Local_90.f_0), "XP_Blocker", true);
						}
						func_431(&uLocal_609, 3, NETWORK::NET_TO_PED(Local_90.f_0), &(Local_90.f_48), 1, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_14))
				{
					iVar0 = OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_crate_unfixed_low_glow"), Local_569, false, func_54(1));
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						Local_90.f_14 = NETWORK::OBJ_TO_NET(iVar0);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_90.f_14), true);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_90.f_14), false, false);
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_90.f_14), fLocal_572);
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_90.f_14), INTERIOR::GET_INTERIOR_AT_COORDS(Local_545));
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_90.f_14), true);
						OBJECT::SET_PICKUP_OBJECT_GLOW_OFFSET(NETWORK::NET_TO_OBJ(Local_90.f_14), -0.2f, true);
						OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_90.f_14), true, false);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_90.f_14), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_15))
				{
					if (func_28(&(Local_90.f_15), func_54(2), Local_573 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0, 0))
					{
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_90.f_15), fLocal_576);
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_90.f_15), INTERIOR::GET_INTERIOR_AT_COORDS(Local_545));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_90.f_15), true);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*iParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*iParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_m_shopkeep_01");
		
		case 1:
			return joaat("p_poly_bag_01_s");
		
		case 2:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("mp_m_shopkeep_01");
}

void func_55()
{
	if (!BitTest(Local_486.f_52, 20))
	{
		if (BitTest(Local_90.f_25, 11) || BitTest(Local_90.f_26, 16))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_585 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_592, 5f, 5f, 2.5f, false, true, 0))
			{
				func_58();
				func_56();
				func_6(Local_486.f_50, 1, func_7());
				MISC::SET_BIT(&(Local_486.f_52), 20);
			}
			else
			{
				if ((BitTest(Local_486.f_52, 31) && (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_592, 20f, 20f, 20f, false, true, 0))
				{
					func_58();
				}
				MISC::SET_BIT(&(Local_486.f_52), 20);
			}
		}
	}
}

void func_56()
{
	int iVar0;
	
	iVar0 = func_57(47);
	Global_2645400[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2645400[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_57(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645400[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645400[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_58()
{
	int iVar0;
	
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
	{
		iVar0 = func_133(1182, -1);
		if (!BitTest(iVar0, Local_486.f_50))
		{
			func_131(14, 1, -1);
			MISC::SET_BIT(&iVar0, Local_486.f_50);
			func_129(1182, iVar0, -1, 1);
			if (func_127(14, -1) >= 20)
			{
				func_113(44, 1);
			}
			else
			{
				func_112(44, func_127(14, -1));
			}
		}
		func_110(1168, 1, -1);
		func_109(12, 1, -1);
		func_107(19);
		iLocal_802 = 100;
		iLocal_802 = SYSTEM::ROUND((IntToFloat(iLocal_802) * Global_262145.f_3929));
		func_59(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_802, 1, -1, 0);
	}
}

var func_59(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_60(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_60(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_61(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_61(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_96();
	if (func_95(sParam2))
	{
	}
	if (func_94())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_92(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_91(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_88(0, &iVar1);
					break;
				
				case 3:
					func_88(1, &iVar1);
					break;
				
				case 1:
					func_79(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_262145.f_13369)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_110(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_70((func_78(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_2 != -1)
				{
					func_110(1166, iVar1, -1);
				}
				func_66(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_62((func_64(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_62((func_64(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_62(int iParam0)
{
	if (func_94())
	{
		Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_5 = iParam0;
		func_63(joaat("mpply_globalxp"), iParam0);
	}
}

void func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_64(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_48(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_65(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_5;
			}
		}
		else
		{
			return func_65(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_65(int iParam0)
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

void func_66(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_69(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_67(func_68(&Var0));
			if (iVar13 == 0)
			{
				func_63(joaat("mpply_crew_local_xp_0"), (func_65(joaat("mpply_crew_local_xp_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_63(joaat("mpply_crew_local_xp_1"), (func_65(joaat("mpply_crew_local_xp_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_63(joaat("mpply_crew_local_xp_2"), (func_65(joaat("mpply_crew_local_xp_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_63(joaat("mpply_crew_local_xp_3"), (func_65(joaat("mpply_crew_local_xp_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_63(joaat("mpply_crew_local_xp_4"), (func_65(joaat("mpply_crew_local_xp_4")) + iParam0));
			}
		}
	}
}

int func_67(int iParam0)
{
	if (iParam0 == func_65(joaat("mpply_crew_0_id")))
	{
		return 0;
	}
	else if (iParam0 == func_65(joaat("mpply_crew_1_id")))
	{
		return 1;
	}
	else if (iParam0 == func_65(joaat("mpply_crew_2_id")))
	{
		return 2;
	}
	else if (iParam0 == func_65(joaat("mpply_crew_3_id")))
	{
		return 3;
	}
	else if (iParam0 == func_65(joaat("mpply_crew_4_id")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_68(var* uParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2696114;
		}
	}
	return Global_2696114;
}

struct<13> func_69(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_70(int iParam0, int iParam1, int iParam2)
{
	if (func_94())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10095 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_133(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == func_133(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_77(PLAYER::PLAYER_ID()))
		{
			Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_1 = iParam0;
			Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_6 = func_74(iParam0, 1);
		}
		func_129(640, iParam0, -1, 1);
		func_129(641, func_74(iParam0, 1), -1, 1);
		func_71(-1109644434, 7, 0);
	}
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_73(iParam1, iParam2))
	{
		iVar0 = func_72();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696066[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_73(int iParam0, var uParam1)
{
	if (Global_1575071)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575083) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_75(iParam0, 0);
}

int func_75(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (func_76(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_76(iVar3) < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return joaat("pyro_sub_bass_synth");
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_77(int iParam0)
{
	if (!func_9(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, iParam0);
}

int func_78(int iParam0)
{
	if (Global_1574633.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_133(640, -1);
			}
			else if (func_77(iParam0))
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_1;
			}
		}
	}
	else
	{
		return func_133(640, -1);
	}
	return 0;
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_82(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_81(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_80(*iParam0, 100) * (10f * Global_262145.f_3922)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_80(*iParam0, 100) * (20f * Global_262145.f_3920)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_80(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_81(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2707307 = { func_69(iParam0) };
		Global_2707320 = { func_69(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707307))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707320))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707237, 35, &Global_2707307);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707272, 35, &Global_2707320);
				if (Global_2707237 == Global_2707272)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058116.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25622, bVar0))
			{
				bVar1 = Global_1058116.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_83(iParam0, bVar0, iParam1, bVar1) || !func_83(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_83(iParam0, bVar0, iParam1, bVar1) || !func_83(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_83(iParam0, bVar0, iParam1, bVar1) || !func_83(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_83(iParam0, bVar0, iParam1, bVar1) || !func_83(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_83(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25623, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3592[iParam2 /*25891*/].f_25623, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_48(iVar1, 1, 1) || func_85(iVar1, 0)) || BitTest(Global_2657971[iVar1 /*465*/].f_200, 2)) || func_84(iVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("mp_f_freemode_01") || iVar4 == joaat("mp_m_freemode_01"))
				{
					if (iVar3 == joaat("mp_f_freemode_01") || iVar3 == joaat("mp_m_freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_84(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_36.f_18, 14);
}

bool func_85(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_86(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
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

int func_86(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_87();
	}
	if (Global_1575063[iVar1] == 1)
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

int func_87()
{
	return Global_1574926;
}

void func_88(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_48(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_81(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_48(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_89(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_81(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_80(*iParam1, 100) * (10f * Global_262145.f_3922)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_80(*iParam1, 100) * (20f * Global_262145.f_3920)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_89(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_90(iParam0), func_90(iParam1));
	return 0f;
}

Vector3 func_90(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_91(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_80(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_92(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_78(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_78(PLAYER::PLAYER_ID());
		}
	}
	if (func_93(8000, 0, 0) > 0)
	{
		if (func_93(8000, 0, 0) < (iParam0 + func_78(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_93(8000, 0, 0) - func_78(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_93(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return func_76(iParam0);
}

int func_94()
{
	return 1;
}

int func_95(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_96()
{
	int iVar0;
	
	if (func_106(PLAYER::PLAYER_ID()) || func_105(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10125 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10125;
		}
	}
	else if (func_102() || func_98(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22930 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_22930;
		}
	}
	else if (func_97(Global_4718592.f_185586))
	{
		if (Global_262145.f_7169 > 36000)
		{
			iVar0 = 36000;
		}
		else
		{
			iVar0 = Global_262145.f_7169;
		}
	}
	else if (Global_262145.f_7168 > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7168;
	}
	return iVar0;
}

bool func_97(int iParam0)
{
	return iParam0 == 89;
}

int func_98(int iParam0)
{
	return func_99(func_100(iParam0));
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_100(int iParam0)
{
	if (func_9(iParam0))
	{
		if (func_101(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_101(int iParam0, int iParam1)
{
	if (func_9(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_102()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_104();
	}
	return func_103(Global_4718592.f_127178);
}

int func_103(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4707[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_104()
{
	return Global_2684504.f_19;
}

bool func_105(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 2;
}

bool func_106(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 7;
}

void func_107(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9090)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_108() /*5570*/].f_681.f_4244[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574744.f_1[iVar0] == -1)
			{
				Global_1574744.f_1[iVar0] = iParam0;
				Global_1574744 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_108()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_109(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_87();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_110(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_133(iParam0, func_111(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_129(iParam0, iVar0, iParam2, 1);
}

int func_111(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_87();
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

int func_112(int iParam0, int iParam1)
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

int func_113(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_114(iParam0, iParam1);
}

int func_114(int iParam0, int iParam1)
{
	if (func_126(14) && !func_125(iParam0))
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
	if (func_124(&Global_4543384))
	{
		if (func_122(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_115(&Global_4543384, iParam0))
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

int func_115(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	func_118(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_116(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_116(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_117(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_117(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_118(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_119(uParam0, iVar0);
		iVar0++;
	}
	func_120(uParam0, (Global_4543383 - 0.5f));
}

void func_119(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_120(var uParam0, float fParam1)
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

float func_121(var uParam0)
{
	return uParam0->f_80;
}

bool func_122(var uParam0, int iParam1)
{
	return func_123(uParam0, iParam1) != -1;
}

int func_123(var uParam0, int iParam1)
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

bool func_124(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_125(int iParam0)
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

bool func_126(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_128(iParam0, iParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_128(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_111(uParam1));
}

void func_129(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_130(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_130(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_111(uParam1));
}

void func_131(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_127(iParam0, func_111(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_132(iParam0, iVar0, iParam2);
}

void func_132(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_128(iParam0, uParam2);
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_133(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_130(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_134(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_135(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_21(uParam0, 0, 0);
		}
	}
}

void func_136()
{
	bool bVar0;
	int iVar1;
	
	func_259();
	func_229();
	func_179();
	func_55();
	func_177();
	func_176();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_585)
		{
			if (Global_2738934.f_6019.f_1 == 0)
			{
				Global_2738934.f_6019.f_1 = 1;
			}
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_586 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_587)
			{
				bVar0 = true;
			}
			else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_588)
			{
				iVar1 = 1;
			}
		}
		else if (Global_2738934.f_6019.f_1 == 1)
		{
			Global_2738934.f_6019.f_1 = 0;
		}
	}
	if (!BitTest(Local_486.f_52, 31))
	{
		if (func_100(PLAYER::PLAYER_ID()) != 154)
		{
			if ((bVar0 || iVar1) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_592, (5f / 2f), (5f / 2f), (5f / 2f), false, true, 0))
			{
				if (!func_40(PLAYER::PLAYER_ID()))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
					MISC::SET_BIT(&(Local_486.f_52), 31);
				}
			}
		}
	}
	if ((!BitTest(Local_486.f_52, 26) && bVar0) && !(func_175(0) || func_174()))
	{
		if (func_172("SNK_MNU", Local_486.f_0, 0))
		{
			MISC::SET_BIT(&(Local_486.f_52), 26);
		}
	}
	if (!bVar0 && BitTest(Local_486.f_52, 26))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || (CAM::DOES_CAM_EXIST(Local_486.f_1) && CAM::IS_CAM_ACTIVE(Local_486.f_1)))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (Local_486.f_51 > 0)
			{
				Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3 = Local_486.f_51;
				Local_486.f_51 = 0;
			}
			func_447();
			MISC::CLEAR_BIT(&(Local_486.f_53), 7);
			if (CAM::DOES_CAM_EXIST(Local_486.f_1))
			{
				CAM::DESTROY_CAM(Local_486.f_1, false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		func_169(1, Local_486.f_0);
		MISC::CLEAR_BIT(&(Local_486.f_52), 26);
	}
	if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 21))
	{
		if (iVar1 || func_167(PLAYER::PLAYER_PED_ID(), Local_486.f_50))
		{
			MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_164();
		func_158();
		func_152();
		func_148(1);
		func_141();
		PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		if (BitTest(Global_2738934.f_7, 0))
		{
			PLAYER::SET_LAW_RESPONSE_DELAY_OVERRIDE(Local_90.f_73);
			func_139(Local_592, func_140(30), 0);
			MISC::CLEAR_BIT(&(Global_2738934.f_7), 0);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_592, 5f, 5f, 2.5f, false, true, 0))
		{
			func_148(0);
		}
		if (!BitTest(Global_2738934.f_7, 0))
		{
			PLAYER::RESET_LAW_RESPONSE_DELAY_OVERRIDE();
			func_137(Local_592, func_140(30), "");
			MISC::SET_BIT(&(Global_2738934.f_7), 0);
		}
	}
	if ((BitTest(Local_90.f_25, 22) || BitTest(Local_90.f_25, 23)) || BitTest(Local_90.f_25, 7))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
}

int func_137(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_2738934.f_4085[iVar0 /*26*/].f_4), sParam3))
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2738934.f_4085[iVar0 /*26*/].f_4)))
				{
					Global_2738934.f_4085[iVar0 /*26*/] = 1;
					Global_2738934.f_4085[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2738934.f_4085[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2738934.f_4085[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_138(Global_2738934.f_4085[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2738934.f_4085[iVar0 /*26*/] = 1;
				Global_2738934.f_4085[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2738934.f_4085[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2738934.f_4085[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_138(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_139(struct<3> Param0, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2738934.f_4085[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_138(Global_2738934.f_4085[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2738934.f_4085[iVar0 /*26*/] = 0;
					Global_2738934.f_4085[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2738934.f_4085[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2738934.f_4085[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_140(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	MISC::CLEAR_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 28);
	if (!func_432(Local_90.f_0) && func_48(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
		{
			if ((((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball")) && iVar0 != joaat("weapon_flashlight"))
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_90.f_0), 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_90.f_0), 5f, 5f, 2f, false, true, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_90.f_0))) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_90.f_0)))
				{
					if (!(func_175(0) || func_174()) && ((!func_145(PLAYER::PLAYER_ID()) || func_100(PLAYER::PLAYER_ID()) == 154) || func_100(PLAYER::PLAYER_ID()) == 171))
					{
						if (func_143(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_90.f_0)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
						{
							if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
							{
								func_142(func_8(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
								MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 1);
							}
							if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 8))
							{
								MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 8);
							}
						}
						MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 28);
					}
				}
			}
		}
	}
	if (!BitTest(Local_486.f_52, 28))
	{
		if (BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 28))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true))
			{
				if (iVar1 != 0 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = WEAPON::GET_WEAPONTYPE_GROUP(iVar1);
					if (iVar2 == joaat("GROUP_PISTOL"))
					{
						sLocal_543 = "hold_up_head_additive_pistol";
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_543, 8f, -8f, -1, 305, 0f, false, false, false);
					}
					else if ((((iVar2 == joaat("GROUP_MG") || iVar2 == joaat("GROUP_RIFLE")) || iVar2 == joaat("GROUP_SHOTGUN")) || iVar2 == joaat("GROUP_SNIPER")) || iVar2 == joaat("GROUP_SMG"))
					{
						sLocal_543 = "hold_up_head_additive_rifle";
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_543, 8f, -8f, -1, 305, 0f, false, false, false);
					}
					else
					{
						sLocal_543 = "";
					}
					MISC::SET_BIT(&(Local_486.f_52), 28);
				}
			}
		}
	}
	else if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 28) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_543))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_543, 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_543, -8f);
			}
		}
		MISC::CLEAR_BIT(&(Local_486.f_52), 28);
	}
	if (BitTest(Local_90.f_27, 1))
	{
		if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 3))
		{
			if (!func_432(Local_90.f_16) && func_48(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, true))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !(func_175(0) || func_174()))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_90.f_16)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_90.f_16)))
						{
							if (func_143(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_90.f_16)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
							{
								MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_142(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = -2095300399;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 3, iParam0, Var0.f_0);
	}
}

int func_143(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (func_48(iParam0, 1, 1))
	{
		Var0 = { func_90(iParam0) };
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	Var9 = { Var3 - Var0 };
	if (!PED::IS_PED_INJURED(iParam1))
	{
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 7f, 0f) };
		Var12 = { Var6 - Var3 };
	}
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	fVar15 = func_144(Var9, Var12);
	if (fVar15 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_144(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_145(int iParam0)
{
	if (func_42(iParam0))
	{
		return 1;
	}
	if (func_146(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_147(iParam0, 9);
	}
	return 0;
}

var func_147(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

void func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (PLAYER::PLAYER_ID() != Global_2738934.f_5171 && !func_40(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Local_486.f_52, 6))
		{
			if (iParam0 == 1)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true))
				{
					if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_545, 2.5f, 2.5f, 3f, false, true, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) || (iVar0 == 1 && Local_90.f_3 >= 3)) || (iVar0 == 1 && BitTest(Local_90.f_26, 16))) || BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12))
				{
					if (((!BitTest(Local_90.f_25, 12) || Local_90.f_3 >= 3) || BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12)) || (iVar0 == 1 && BitTest(Local_90.f_26, 16)))
					{
						Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_36++;
						func_15(&(Global_2672855.f_3586));
						func_21(&(Global_2672855.f_3586), 0, 0);
						if (Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_36 <= 2)
						{
							if (func_151())
							{
								if (func_150() < 2)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_150()));
								}
								else
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
								}
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
							}
						}
						else if (Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_36 >= 5)
						{
							if (func_151())
							{
								if (func_150() < 3)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_150()));
								}
								else
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
								}
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
							}
						}
						else if (func_151())
						{
							if (func_150() < 3)
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_150()));
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
							}
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
						if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
						{
							MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
						}
						MISC::SET_BIT(&(Local_486.f_52), 6);
						MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
					}
				}
			}
			if (!BitTest(Local_486.f_52, 27) && !BitTest(Local_486.f_52, 6))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					if (func_20(&uLocal_583, 2000, 0) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
						MISC::SET_BIT(&(Local_486.f_52), 27);
						MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 27);
						MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
						{
							MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
						}
					}
				}
				else if (func_149(&uLocal_583))
				{
					func_15(&uLocal_583);
				}
			}
		}
		if (!BitTest(Local_486.f_52, 24))
		{
			if (BitTest(Local_486.f_52, 31))
			{
				if (func_432(Local_90.f_0))
				{
					if (func_151())
					{
						if (func_150() < 3)
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_150()));
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 13, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
					}
					MISC::SET_BIT(&(Local_486.f_52), 24);
					if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
					{
						MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
					}
				}
			}
		}
	}
}

bool func_149(var uParam0)
{
	return uParam0->f_1;
}

int func_150()
{
	return Global_262145.f_13050;
}

int func_151()
{
	if (func_146(PLAYER::PLAYER_ID()) && func_100(PLAYER::PLAYER_ID()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_152()
{
	int iVar0;
	int iVar1;
	
	if (func_48(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!BitTest(Local_486.f_52, 23) && BitTest(Local_90.f_25, 17))
		{
			if (!func_432(Local_90.f_0))
			{
				iLocal_552 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_31);
				if (iLocal_552 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_552))
					{
						if ((!BitTest(Global_1919774, 15) && func_157()) && func_156())
						{
							MISC::SET_BIT(&Global_1919774, 15);
						}
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							iVar0 = func_133(1191, -1);
							if (!BitTest(iVar0, 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_552) < 0.4f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_585)
								{
									func_155("FHU_HELP3", -1);
									MISC::SET_BIT(&iVar0, 3);
									func_129(1191, iVar0, -1, 1);
								}
							}
							else if (!BitTest(iVar0, 5) || !BitTest(iVar0, 6))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_552) < 0.7f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_585)
								{
									func_155("FHU_HELP4", -1);
									MISC::SET_BIT(&iVar0, 5);
									func_129(1191, iVar0, -1, 1);
									MISC::SET_BIT(&(Local_486.f_52), 23);
								}
							}
							else
							{
								MISC::SET_BIT(&(Local_486.f_52), 23);
							}
						}
					}
				}
			}
		}
		if (((((((((!func_41(PLAYER::PLAYER_ID(), 146) && !func_154()) && func_100(PLAYER::PLAYER_ID()) != 167) && func_100(PLAYER::PLAYER_ID()) != 190) && func_100(PLAYER::PLAYER_ID()) != 191) && func_100(PLAYER::PLAYER_ID()) != 250) && func_100(PLAYER::PLAYER_ID()) != 237) && func_100(PLAYER::PLAYER_ID()) != 238) && !func_40(PLAYER::PLAYER_ID())) && (!func_145(PLAYER::PLAYER_ID()) || func_100(PLAYER::PLAYER_ID()) == 154))
		{
			if (!BitTest(Local_486.f_53, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (((((func_432(Local_90.f_0) || Local_90.f_3 > 7) && !BitTest(Local_90.f_25, 20)) && !BitTest(Local_90.f_25, 11)) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_553, 1.5f) == 0)
					{
						iVar1 = func_133(1191, -1);
						if (!BitTest(iVar1, 20) || !BitTest(iVar1, 21))
						{
							func_155("FHU_HELPM", -1);
							if (!BitTest(iVar1, 20))
							{
								MISC::SET_BIT(&iVar1, 20);
							}
							else
							{
								MISC::SET_BIT(&iVar1, 21);
							}
							func_129(1191, iVar1, -1, 1);
							MISC::SET_BIT(&(Local_486.f_53), 1);
						}
						else
						{
							MISC::SET_BIT(&(Local_486.f_53), 1);
						}
					}
				}
			}
			else if (func_153("FHU_HELPM"))
			{
				if ((BitTest(Local_90.f_25, 20) || BitTest(Local_90.f_25, 11)) || BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5))
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
	}
}

bool func_153(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_154()
{
	return Global_1835494;
}

void func_155(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

var func_156()
{
	return BitTest(Global_2738934.f_1847, 21);
}

var func_157()
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 3);
}

void func_158()
{
	float fVar0;
	float fVar1;
	
	if (Local_90.f_3 == 4)
	{
		if (func_48(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!func_432(Local_90.f_0))
			{
				iLocal_552 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_31);
				if (iLocal_552 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_552))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_552);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_159(SYSTEM::ROUND(fVar0), 890, "HUP_PROG", func_163(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())), 0, 1, 13);
						}
						fVar1 = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_159(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	func_160(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
}

void func_160(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_162(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_161(0, iVar0);
		Global_1670224.f_1177[iVar0] = uParam0;
		Global_1670224.f_1177.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1670224.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1670224.f_1177.f_194[iVar0] = uParam3;
		Global_1670224.f_1177.f_183[iVar0] = uParam4;
		Global_1670224.f_1177.f_227[iVar0] = uParam5;
		Global_1670224.f_1177.f_238[iVar0 /*3*/] = fParam6;
		Global_1670224.f_1177.f_238[iVar0 /*3*/].f_1 = fParam7;
		Global_1670224.f_1177.f_269[iVar0] = iParam8;
		Global_1670224.f_1177.f_280[iVar0] = uParam9;
		Global_1670224.f_1177.f_323[iVar0] = iParam10;
		Global_1670224.f_1177.f_334[iVar0] = iParam11;
		Global_1670224.f_1177.f_345[iVar0] = iParam12;
		Global_1670224.f_1177.f_356[iVar0] = iParam13;
		Global_1670224.f_1172 = 1;
		Global_1670224.f_1177.f_367[iVar0] = iParam14;
		Global_1670224.f_1177.f_378[iVar0] = iParam15;
		Global_1670224.f_1177.f_389[iVar0] = iParam16;
		Global_1670224.f_1177.f_400[iVar0] = iParam17;
		Global_1670224.f_1177.f_411[iVar0] = iParam18;
		Global_1670224.f_1177.f_422[iVar0] = iParam19;
		Global_1670224.f_1177.f_433[iVar0] = iParam20;
		Global_1670224.f_1177.f_444[iVar0] = iParam21;
		Global_1670224.f_1177.f_455[iVar0] = iParam22;
		Global_1670224.f_1177.f_466[iVar0] = iParam23;
		Global_1670224.f_1177.f_477[iVar0] = iParam24;
		Global_1670224.f_1177.f_205[iVar0] = iParam25;
		Global_1670224.f_1177.f_216[iVar0] = iParam39;
		Global_1670224.f_1177.f_488[iVar0] = iParam26;
		Global_1670224.f_1177.f_499[iVar0] = iParam27;
		Global_1670224.f_1177.f_510[iVar0] = iParam28;
		Global_1670224.f_1177.f_521[iVar0] = iParam29;
		Global_1670224.f_1177.f_532[iVar0] = iParam30;
		Global_1670224.f_1177.f_543[iVar0] = iParam31;
		Global_1670224.f_1177.f_554[iVar0] = iParam32;
		Global_1670224.f_1177.f_565[iVar0] = iParam33;
		Global_1670224.f_1177.f_576[iVar0] = iParam34;
		Global_1670224.f_1177.f_587[iVar0] = iParam35;
		Global_1670224.f_1177.f_598[iVar0] = iParam36;
		Global_1670224.f_1177.f_609[iVar0] = iParam37;
		Global_1670224.f_1177.f_620[iVar0] = iParam38;
	}
}

void func_161(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1670224.f_7064[iParam0]), iParam1);
}

int func_162(int iParam0, int iParam1)
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

int func_163(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_164()
{
	if (!BitTest(Local_486.f_53, 2))
	{
		STREAMING::REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
		STREAMING::REQUEST_ANIM_DICT(func_165());
		if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till") && STREAMING::HAS_ANIM_DICT_LOADED(func_165()))
		{
			MISC::SET_BIT(&(Local_486.f_53), 2);
		}
	}
}

char* func_165()
{
	if (func_166(PLAYER::PLAYER_ID()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_166(int iParam0)
{
	if (!func_9(iParam0))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2657971[iParam0 /*465*/].f_241;
}

int func_167(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar6 = 0f;
	func_168(iParam1, &Var0, &Var3, &fVar6);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Var0, Var3, fVar6, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_168(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390.033f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.412f, 3607.156f, 36.38288f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041.675f, 583.5931f, 6.908931f };
		*uParam2 = { -3037.284f, 585.0375f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245.184f, 1000.124f, 11.83071f };
		*uParam2 = { -3240.504f, 999.7783f, 14.46645f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549.5332f, 2668.464f, 41.15651f };
		*uParam2 = { 548.9114f, 2673.108f, 43.7766f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554.316f, 380.8569f, 107.623f };
		*uParam2 = { 2558.98f, 380.6908f, 110.2684f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675.476f, 3280.807f, 54.24115f };
		*uParam2 = { 2679.577f, 3278.526f, 56.8955f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729.145f, 6417.834f, 34.03724f };
		*uParam2 = { 1727.07f, 6413.635f, 36.66442f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958.61f, 3742.512f, 31.34376f };
		*uParam2 = { 1960.958f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24.51093f, -1344.449f, 28.49703f };
		*uParam2 = { 24.52224f, -1349.084f, 31.14272f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373.296f, 329.2379f, 102.5664f };
		*uParam2 = { 372.1347f, 324.6985f, 105.214f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168.183f, 2711.203f, 37.06316f };
		*uParam2 = { 1163.144f, 2711.246f, 40.16688f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966.142f, 388.6418f, 14.04331f };
		*uParam2 = { -2965.812f, 393.6473f, 17.17248f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223.599f, -909.8984f, 11.32635f };
		*uParam2 = { -1219.443f, -907.0756f, 14.45929f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.524f, -980.3087f, 45.41582f };
		*uParam2 = { 1134.22f, -985.284f, 48.53235f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.413f, -379.3236f, 39.16341f };
		*uParam2 = { -1487.954f, -375.7666f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699.447f, 4921.57f, 41.06366f };
		*uParam2 = { 1695.64f, 4924.245f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.7026f, -916.374f, 21.33545f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.26995f, -1756.669f, 28.42101f };
		*uParam2 = { -48.26036f, -1760.285f, 31.56342f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164.697f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.0899f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821.205f, 795.8699f, 137.0893f };
		*uParam2 = { -1818.041f, 792.3982f, 140.1836f };
		*fParam3 = 2.25f;
	}
}

void func_169(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_171(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23831.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23831.f_9116 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23831.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23831.f_6231[iVar0] = 0;
	}
	if (Global_23831.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23831.f_6217[iVar0] = 0;
	}
	if (Global_23831.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23831.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_170(&(Global_23831.f_6263[iVar0 /*10*/]));
		Global_23831.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23831.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_170(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_171(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23831.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23831.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23831.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

bool func_172(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_171(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23831.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23831.f_6238[iVar0 /*4*/]), 9);
		Global_23831.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23831.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		bVar1 = false;
	}
	Global_23831.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23831.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23831.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_173(&(Global_23831.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_173(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

int func_174()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_175(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
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
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_176()
{
	if (PLAYER::PLAYER_ID() != Global_2738934.f_5171 && !func_40(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Local_486.f_52, 24))
		{
			if (Local_90.f_74 == PLAYER::PLAYER_ID() || (BitTest(Local_486.f_52, 31) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_595, 20f, 20f, 20f, false, true, 0)))
			{
				if (func_432(Local_90.f_0))
				{
					if (func_151())
					{
						if (func_150() < 3)
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_150()));
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 13, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
					}
					MISC::SET_BIT(&(Local_486.f_52), 24);
					if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
					{
						MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
					}
				}
			}
		}
	}
}

int func_177()
{
	if (!BitTest(Local_90.f_27, 0))
	{
		return 0;
	}
	if (func_432(Local_90.f_16))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_801))
		{
			HUD::REMOVE_BLIP(&iLocal_801);
		}
		return 0;
	}
	if (Local_90.f_68 == 4)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_801))
		{
			iLocal_801 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_90.f_16));
			HUD::SET_BLIP_COLOUR(iLocal_801, 1);
			HUD::SET_BLIP_SCALE(iLocal_801, 0.7f);
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_16))
	{
		return 0;
	}
	switch (Local_90.f_68)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_16), joaat("script_task_follow_nav_mesh_to_coord")) != 0)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_16), joaat("script_task_follow_nav_mesh_to_coord")) != 1)
				{
					if (func_48(PLAYER::PLAYER_ID(), 1, 1))
					{
						TASK::TASK_GO_TO_ENTITY(NETWORK::NET_TO_PED(Local_90.f_16), PLAYER::PLAYER_PED_ID(), -1, 4f, 2f, 2f, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!BitTest(Local_90.f_27, 5) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_16), joaat("script_task_go_to_entity")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_16), joaat("script_task_go_to_entity")) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_90.f_16), PLAYER::PLAYER_PED_ID(), 10000);
					MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 0);
				}
			}
			if ((!BitTest(Local_90.f_27, 6) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 1)) && !func_178())
			{
				func_431(&uLocal_609, 4, NETWORK::NET_TO_PED(Local_90.f_16), "StoreHero", 1, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(NETWORK::NET_TO_PED(Local_90.f_16), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 1);
			}
			break;
		
		case 4:
			if ((!BitTest(Local_90.f_27, 7) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 2)) && !func_178())
			{
				func_431(&uLocal_609, 4, NETWORK::NET_TO_PED(Local_90.f_16), "StoreHero", 1, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(NETWORK::NET_TO_PED(Local_90.f_16), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 2);
			}
			if (BitTest(Local_90.f_27, 7) || BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 2))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_16), joaat("script_task_combat_hated_targets_around_ped")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_16), joaat("script_task_combat_hated_targets_around_ped")) != 1)
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_90.f_16));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_90.f_16), Global_1837315);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_90.f_16), 20f, 0);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_90.f_16), true);
				}
			}
			break;
		
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_16), joaat("script_task_perform_sequence")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_16), joaat("script_task_perform_sequence")) != 1)
			{
				TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_90.f_16));
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_90.f_16), iLocal_561);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_90.f_16), true);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_16), joaat("script_task_turn_ped_to_face_entity")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_16), joaat("script_task_turn_ped_to_face_entity")) != 0)
			{
				if (func_20(&uLocal_581, 5000, 0))
				{
					func_15(&uLocal_581);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_90.f_16), PLAYER::PLAYER_PED_ID(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_178()
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_179()
{
	if (Local_90.f_3 == 4)
	{
		if ((!BitTest(Local_90.f_25, 10) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 4)) && BitTest(Local_90.f_25, 17))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_14))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_14) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_90.f_14) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (!func_432(Local_90.f_0))
					{
						if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_90.f_0)))
						{
							ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_90.f_14), true, false);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_90.f_14), true);
							ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_90.f_14), 0f, 0f, -1f);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_90.f_0), 16);
							MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 4);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_90.f_14), true, false);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_90.f_14), true);
						ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_90.f_14), 0f, 0f, -1f);
						MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 4);
					}
				}
			}
		}
	}
	func_180();
}

void func_180()
{
	int iVar0;
	var uVar1;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_90.f_14), false))
		{
			if ((!BitTest(Local_90.f_25, 11) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) && Local_90.f_39 > 0f)
			{
				if (((func_228() || func_227(0.87f)) || Local_90.f_3 >= 5) || BitTest(Local_90.f_25, 10))
				{
					if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 11))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_14))
						{
							OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_90.f_14), false, false);
							MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 13);
						}
						if (func_100(PLAYER::PLAYER_ID()) != 155)
						{
							OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(func_54(1), 1);
						}
						MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 11);
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_90.f_14), PLAYER::PLAYER_PED_ID()))
					{
						Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7, &(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7.f_2), false, false);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_14))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_90.f_14), true, true);
							func_49(&(Local_90.f_14));
						}
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iLocal_578, iLocal_579);
						if (BitTest(Local_90.f_25, 10))
						{
							iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Local_90.f_39));
						}
						if (Local_90.f_4 > 1000)
						{
							Local_90.f_4 = 1000;
						}
						iVar0 = (iVar0 + Local_90.f_4);
						iVar0 = func_226(iVar0, 1);
						if (iVar0 > Global_262145.f_167)
						{
							iVar0 = Global_262145.f_167;
						}
						if (func_225(PLAYER::PLAYER_ID()) && func_223(func_224(PLAYER::PLAYER_ID())) < 1f)
						{
							if (Global_262145.f_3930 > 1f)
							{
								Global_262145.f_3930 = 1f;
							}
							iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_3930));
						}
						if (iVar0 > 0)
						{
							if (func_222())
							{
								func_211(joaat("service_earn_holdups"), iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_207(iVar0, 1, 1, 1092616192);
								MONEY::NETWORK_EARN_FROM_HOLDUPS(iVar0);
							}
						}
						Global_2738934.f_6019 = (Global_2738934.f_6019 + iVar0);
						Global_2738934.f_6019.f_2 = 1;
						Global_2738934.f_6019.f_5 = 1;
						iLocal_803 = (iLocal_803 + iVar0);
						func_206(3);
						if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5))
						{
							func_205(Local_90.f_40, iVar0);
						}
						else
						{
							func_196(PLAYER::PLAYER_PED_ID(), iVar0);
						}
						func_194(1, iVar0);
						if (func_190(1))
						{
							func_181(4);
						}
						MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 5);
						MISC::SET_BIT(&(Local_486.f_53), 6);
					}
				}
			}
		}
	}
}

void func_181(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_18009;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17999;
			break;
		
		case 2:
			iVar0 = Global_262145.f_18010;
			break;
		
		case 3:
			iVar0 = Global_262145.f_18002;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17998;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_18013;
			break;
		
		case 8:
			iVar0 = Global_262145.f_18014;
			break;
		
		case 9:
			iVar0 = Global_262145.f_18017;
			break;
		
		case 22:
			iVar0 = Global_262145.f_18018;
			break;
		
		case 23:
			iVar0 = Global_262145.f_18011;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18863;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18862;
			break;
	}
	if (iVar0 != 0)
	{
		STATS::PLAYSTATS_EARNED_MC_POINTS(func_188(func_189()), func_186(func_189()), func_185(), func_184(), iParam0, iVar0);
	}
	func_183(iVar0);
	func_182(iVar0);
}

void func_182(int iParam0)
{
	int iVar0;
	
	iVar0 = func_133(3971, -1);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10.f_470 = iVar0;
	func_129(3971, iVar0, -1, 1);
}

void func_183(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1887305[iVar0 /*610*/].f_10.f_469 = (Global_1887305[iVar0 /*610*/].f_10.f_469 + iParam0);
	if (Global_1887305[iVar0 /*610*/].f_10.f_469 < -9999)
	{
		Global_1887305[iVar0 /*610*/].f_10.f_469 = 9999;
	}
	else if (Global_1887305[iVar0 /*610*/].f_10.f_469 > 9999)
	{
		Global_1887305[iVar0 /*610*/].f_10.f_469 = 9999;
	}
}

int func_184()
{
	if (Global_1941113.f_3 != 0)
	{
		return Global_1941113.f_3;
	}
	return -1;
}

int func_185()
{
	if (Global_1941113.f_2 != 0)
	{
		return Global_1941113.f_2;
	}
	return -1;
}

int func_186(int iParam0)
{
	if (iParam0 == func_187())
	{
		return -1;
	}
	return Global_1887305[iParam0 /*610*/].f_10.f_8[1];
}

int func_187()
{
	return -1;
}

int func_188(int iParam0)
{
	if (iParam0 == func_187())
	{
		return -1;
	}
	return Global_1887305[iParam0 /*610*/].f_10.f_8[0];
}

int func_189()
{
	return Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10;
}

bool func_190(bool bParam0)
{
	return func_191(PLAYER::PLAYER_ID(), bParam0);
}

int func_191(int iParam0, bool bParam1)
{
	return func_192(iParam0, bParam1, 1);
}

int func_192(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_193(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_9(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_193(int iParam0, int iParam1)
{
	if (func_9(iParam0))
	{
		if (func_9(Global_1887305[iParam0 /*610*/].f_10))
		{
			if (Global_1887305[iParam0 /*610*/].f_10 == iParam0 && Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_194(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23639 != -1)
		{
			if (func_195())
			{
				Global_2738934.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7119)
				{
					iParam1 = Global_262145.f_7119;
				}
				Global_2738934.f_284 = iParam1;
				Global_2738934.f_285 = 0;
			}
		}
	}
}

int func_195()
{
	if (MISC::IS_PC_VERSION() && Global_1979285 == 0)
	{
		return 0;
	}
	return 0;
}

void func_196(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { func_203(PLAYER::PLAYER_PED_ID(), 1) };
	if (iParam0 == func_202(PLAYER::PLAYER_PED_ID()))
	{
		func_201(1);
	}
	func_197(Var0, iParam1, 7, 0, 0);
}

void func_197(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672855.f_1124[iVar0 /*30*/].f_6 == 0 || Global_2672855.f_1124[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672855.f_1124[iVar1 /*30*/] = { Param0 };
			Global_2672855.f_1124[iVar1 /*30*/].f_6 = 1;
			Global_2672855.f_1124[iVar1 /*30*/].f_4 = func_200(Global_2672855.f_1124[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672855.f_1124[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672855.f_1124[iVar1 /*30*/].f_3 = iParam3;
			Global_2672855.f_1124[iVar1 /*30*/].f_8 = iParam4;
			Global_2672855.f_1124[iVar1 /*30*/].f_9 = func_199();
			Global_2672855.f_1124[iVar1 /*30*/].f_10 = func_198();
			StringCopy(&(Global_2672855.f_1124[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2672855.f_1124[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_198()
{
	if (Global_2672855.f_1725)
	{
		Global_2672855.f_1725 = 0;
		return 1;
	}
	Global_2672855.f_1725 = 0;
	return 0;
}

var func_199()
{
	var uVar0;
	
	uVar0 = Global_2672855.f_1727;
	Global_2672855.f_1727 = 1;
	return uVar0;
}

float func_200(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

void func_201(int iParam0)
{
	Global_2672855.f_1725 = iParam0;
}

int func_202(int iParam0)
{
	return iParam0;
}

Vector3 func_203(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_204(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_204(int iParam0)
{
	return iParam0;
}

void func_205(struct<3> Param0, int iParam3)
{
	func_197(Param0, iParam3, 6, 0, 0);
}

void func_206(int iParam0)
{
	Global_2672855.f_1727 = iParam0;
}

void func_207(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_208(iParam0, iParam1, iParam2, fParam3);
}

void func_208(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_209(iParam0, iParam1, iParam2, fParam3);
}

void func_209(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_4 = iVar1;
	Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_3 = (Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_210(iVar1, 0);
	}
}

void func_210(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_211(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_222())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("service_spend_mechanic_wage"):
		case joaat("service_spend_utility_bills"):
		case joaat("service_spend_prostitutes"):
		case joaat("service_spend_strip_club"):
		case joaat("service_spend_cinema"):
		case joaat("service_spend_fairground"):
		case joaat("service_spend_lottery"):
		case joaat("service_spend_telescope"):
		case joaat("service_spend_call_player"):
		case joaat("service_spend_vehicle_insurance"):
		case joaat("service_spend_vehicle_insurance_premium"):
		case joaat("service_spend_car_repair"):
		case joaat("service_spend_personal_vehicle_dropoff"):
		case joaat("service_spend_pegasus_delivery"):
		case joaat("service_spend_car_impound"):
		case joaat("service_spend_carwash"):
		case joaat("service_spend_healthcare"):
		case joaat("service_spend_other_player_healthcare"):
		case joaat("service_spend_arrest_bail"):
		case joaat("service_spend_cash_drop"):
		case joaat("service_spend_robbed_by_mugger"):
		case joaat("service_spend_cash_drop_holdup"):
		case joaat("service_spend_match_entry_fee"):
		case joaat("service_spend_race_vehicle_rental"):
		case joaat("service_spend_challenge_wager"):
		case joaat("service_spend_betting"):
		case joaat("service_spend_airstrike"):
		case joaat("service_spend_ammo_drop"):
		case joaat("service_spend_backup_gang"):
		case joaat("service_spend_backup_heli"):
		case joaat("service_spend_boat_pickup"):
		case joaat("service_spend_bounty"):
		case joaat("service_spend_bull_shark"):
		case joaat("service_spend_cops_turn_eye"):
		case joaat("service_spend_heli_pickup"):
		case joaat("service_spend_hire_mercenary"):
		case joaat("service_spend_hire_mugger"):
		case joaat("service_spend_locate_vehicle"):
		case joaat("service_spend_lose_wanted_level"):
		case joaat("service_spend_off_the_radar"):
		case joaat("service_spend_passive"):
		case joaat("service_spend_request_heist"):
		case joaat("service_spend_request_job"):
		case joaat("service_spend_reveal_players"):
		case joaat("service_spend_taxi"):
		case joaat("service_spend_bank_interest"):
		case joaat("service_spend_cash_gift"):
		case joaat("service_spend_cash_shared"):
		case joaat("service_spend_impromptu_race_fee"):
		case joaat("service_spend_bounty_dm"):
		case joaat("service_spend_wager"):
		case joaat("service_spend_pay_boss"):
		case joaat("service_spend_pay_goon"):
		case joaat("service_spend_rename_organization"):
		case joaat("service_spend_rename_acid_product"):
		case joaat("service_spend_rename_acid_lab"):
		case joaat("service_spend_pa_service_heli_pickup"):
		case joaat("service_spend_order_bodyguard_vehicle"):
		case joaat("service_spend_order_warehouse_vehicle"):
		case joaat("service_spend_jukebox"):
		case joaat("service_spend_business"):
		case joaat("service_spend_ba_vp_bounty"):
		case joaat("service_spend_ba_vp_bullshark"):
		case joaat("service_spend_ba_sarge_ammo"):
		case joaat("service_spend_ba_sarge_molotov"):
		case joaat("service_spend_ba_enforcer_armour"):
		case joaat("service_spend_vehicle_export_mods"):
		case joaat("service_spend_import_export_repair"):
		case joaat("service_spend_employ_assassins"):
		case joaat("service_spend_gangops_cannon"):
		case joaat("service_spend_gangops_skip_mission"):
		case joaat("service_spend_gangops_start_strand"):
		case joaat("service_spend_gangops_trip_skip"):
		case joaat("service_spend_gangops_repair_cost"):
		case joaat("service_spend_nightclub_entry_fee"):
		case joaat("service_spend_nightclub_bar_drink"):
		case joaat("service_spend_nightclub_dj_rehire"):
		case joaat("service_spend_arena_join_spectator"):
		case joaat("service_spend_arena_spectator_box"):
		case joaat("service_spend_make_it_rain"):
		case 571787049:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_212(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_pickup"):
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
		case joaat("service_earn_debug"):
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
		case joaat("service_earn_wage_payment"):
		case joaat("service_earn_refundammodrop"):
		case joaat("service_earn_salvage_checkpoint_collection"):
		case joaat("service_earn_ambient_mugging"):
		case joaat("service_earn_ambient_pickup"):
		case joaat("service_earn_deathmatch_bounty"):
		case joaat("service_earn_cashing_out"):
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
		case joaat("service_earn_bb_event_bonus"):
		case joaat("service_earn_arena_skill_lvl_award"):
		case joaat("service_earn_arena_career_tier_progression_1"):
		case joaat("service_earn_arena_career_tier_progression_2"):
		case joaat("service_earn_arena_career_tier_progression_3"):
		case joaat("service_earn_arena_career_tier_progression_4"):
		case joaat("service_earn_spin_the_wheel_cash"):
			func_212(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("service_spend_spin_the_wheel_payment"):
		case joaat("service_spend_casino_generic"):
		case joaat("service_spend_arcade_game"):
		case joaat("service_spend_arcade_generic"):
		case joaat("service_spend_casino_heist_skip_mission"):
		case joaat("service_spend_casino_heist_setup_heist"):
		case joaat("service_spend_casino_heist_casino_model"):
		case joaat("service_spend_casino_heist_vault_door"):
		case joaat("service_spend_casino_heist_door_security"):
		case joaat("service_spend_island_heist_support_airstrike"):
		case joaat("service_spend_island_heist_support_heavy_weapon"):
		case joaat("service_spend_island_heist_support_sniper"):
		case joaat("service_spend_island_heist_support_air_support"):
		case joaat("service_spend_island_heist_support_drone"):
		case joaat("service_spend_island_heist_support_weapon_stash"):
		case joaat("service_spend_island_heist_suppressors"):
		case joaat("service_spend_island_heist_replay"):
		case joaat("service_spend_beach_party_generic"):
		case joaat("service_spend_submarine_utility_fee"):
		case joaat("service_spend_submarine_boat"):
		case joaat("service_spend_submarine_relocation"):
		case joaat("service_spend_casino_club_generic"):
		case joaat("service_spend_business_expenses"):
		case joaat("service_spend_fixer_hq_concierge"):
		case joaat("service_spend_request_company_suv"):
		case joaat("service_spend_interaction_menu_ability"):
		case joaat("service_spend_agent_14_vehicle_request"):
		case joaat("service_spend_tony_limo"):
		case joaat("service_spend_nightclub_toilet_attendant"):
		case joaat("service_spend_jugallo_boss_vehicle_request"):
		case 1989973742:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_212(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_assassinate_target_killed"):
		case joaat("service_earn_arena_war"):
		case joaat("service_earn_refund_arena_spec_box_entry"):
		case joaat("service_earn_ambient_job_rc_time_trial"):
		case joaat("service_earn_daily_objective_event"):
		case joaat("service_earn_collectables_action_figures"):
		case joaat("service_earn_casino_mission_reward"):
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
		case joaat("service_earn_casino_story_mission_reward"):
		case joaat("service_earn_casino_heist_setup_mission"):
		case joaat("service_earn_casino_heist_prep_mission"):
		case joaat("service_earn_casino_heist_finale"):
		case joaat("service_earn_casino_heist_award_smash_n_grab"):
		case joaat("service_earn_casino_heist_award_in_plain_sight"):
		case joaat("service_earn_casino_heist_award_undetected"):
		case joaat("service_earn_casino_heist_award_all_rounder"):
		case joaat("service_earn_casino_heist_award_elite_thief"):
		case joaat("service_earn_casino_heist_award_professional"):
		case joaat("service_earn_casino_heist_elite_stealth"):
		case joaat("service_earn_casino_heist_elite_subterfuge"):
		case joaat("service_earn_casino_heist_elite_direct"):
		case joaat("service_earn_collectable_item"):
		case joaat("service_earn_collectable_completed_collection"):
		case joaat("service_earn_collectables_signal_jammers"):
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
		case joaat("service_earn_juggalo_story_mission"):
		case joaat("service_earn_juggalo_phone_mission"):
		case joaat("service_earn_winter_22_award_juggalo_story"):
		case joaat("service_earn_winter_22_award_acid_lab"):
		case joaat("service_earn_winter_22_award_daily_stash"):
		case joaat("service_earn_winter_22_award_dead_drop"):
		case joaat("service_earn_winter_22_award_random_event"):
		case joaat("service_earn_winter_22_award_taxi"):
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
		case -1433838369:
		case 1648751987:
		case 674719198:
		case 617724895:
		case 1424147761:
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
			func_212(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_212(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_222())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_87()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535950[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_219(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535950[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535950[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537455 = 1;
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_218(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_213(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_213(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			MISC::SET_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_127.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_214(iParam0);
	}
}

void func_214(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_222())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_217(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535950[iParam0 /*85*/].f_66);
		}
		func_215(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_215(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_216(&(uParam0->f_14));
	func_216(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_216(var uParam0)
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

int func_217(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_218(int iParam0, int iParam1)
{
	Global_2698855 = iParam1;
	Global_2698854 = iParam0;
}

int func_219(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_222())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535950[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535950[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535950[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535950[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535950[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535950[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535950[iVar0 /*85*/].f_66 = iParam0;
			Global_4535950[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535950[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535950[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535950[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535950[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535950[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537437 = 0;
			if (bParam6)
			{
				Global_4535950[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_220(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_220(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<4> Var0;
	int iVar37;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam85;
	iVar37 = func_8(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar37 == 0)
	{
		func_221();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 37, iVar37, Var0.f_0);
	}
}

void func_221()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_222()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

float func_223(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_224(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/];
	}
	return -1;
}

int func_225(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/] != -1;
	}
	return 0;
}

int func_226(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_227(float fParam0)
{
	iLocal_552 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_31);
	if (iLocal_552 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_552))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_552) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_228()
{
	iLocal_552 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_31);
	if (iLocal_552 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_552))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_552) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_229()
{
	func_230();
}

int func_230()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_0))
	{
		return 0;
	}
	if (func_432(Local_90.f_0))
	{
		if (!BitTest(Local_486.f_53, 3))
		{
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_90.f_0));
			MISC::SET_BIT(&(Local_486.f_53), 3);
		}
		return 0;
	}
	switch (Local_90.f_3)
	{
		case 0:
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_90.f_0), 71, true);
			break;
		
		case 1:
			if (!BitTest(Local_90.f_25, 4) && !BitTest(Local_90.f_25, 12))
			{
				if (BitTest(Local_90.f_25, 13))
				{
					if (!BitTest(Local_486.f_52, 17))
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_90.f_0), 16);
						TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_90.f_0), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							func_236(10);
						}
						else if (BitTest(Local_90.f_26, 0))
						{
							if (!BitTest(Local_90.f_26, 11))
							{
								if (!BitTest(Local_90.f_26, 12))
								{
									func_236(13);
								}
								else
								{
									func_236(20);
								}
							}
							else
							{
								func_236(17);
							}
							MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						}
						else if (!BitTest(Local_90.f_26, 11))
						{
							if (!BitTest(Local_90.f_26, 12))
							{
								func_236(0);
							}
							else
							{
								func_236(18);
							}
						}
						else
						{
							func_236(15);
						}
						MISC::SET_BIT(&(Local_486.f_52), 17);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_turn_ped_to_face_entity")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_turn_ped_to_face_entity")) != 0)
					{
						if (func_20(&uLocal_581, 5000, 0))
						{
							func_15(&uLocal_581);
							if (!iLocal_542)
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_90.f_0), PLAYER::PLAYER_PED_ID(), 10000);
							}
							TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_90.f_0), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
				}
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_90.f_0), 71, true);
			break;
		
		case 2:
			if (!BitTest(Local_90.f_25, 7) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 0))
			{
				iVar1 = PLAYER::PLAYER_PED_ID();
				if (Local_90.f_34 > -1)
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_90.f_34)))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_90.f_34));
						iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_90.f_0), iVar1, -1, 0, 2);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_90.f_0), 16);
					TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_90.f_0), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0f, false, false, false);
					MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 0);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_turn_ped_to_face_entity")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_turn_ped_to_face_entity")) != 0)
			{
				if (func_20(&uLocal_581, 5000, 0))
				{
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_90.f_34 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_90.f_34)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_90.f_34));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					func_15(&uLocal_581);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_90.f_0), iVar1, 10000);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_90.f_0), iVar1, -1, 0, 2);
				}
			}
			if (BitTest(Local_90.f_25, 16))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_90.f_0), 16);
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_90.f_0), 71, true);
			break;
		
		case 3:
			if (!BitTest(Local_486.f_52, 25))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_achieve_heading")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_achieve_heading")) != 1)
				{
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_90.f_0), true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_90.f_0), 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_90.f_0), 8, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_90.f_0), 16, true);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_90.f_0), 16);
					TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_90.f_0), Local_90.f_44, -1);
					MISC::SET_BIT(&(Local_486.f_52), 25);
				}
			}
			break;
		
		case 4:
			if (!BitTest(Local_90.f_25, 17) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 3))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					Global_2738934.f_8 = 1;
				}
				iVar2 = PLAYER::PLAYER_PED_ID();
				if (Global_2738934.f_9 != func_187())
				{
					if (func_48(Global_2738934.f_9, 1, 1))
					{
						iVar2 = PLAYER::GET_PLAYER_PED(Global_2738934.f_9);
					}
				}
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_90.f_0), iVar2, 30000, 0, 3);
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_90.f_0), "mood_stressed_1", 0);
				MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 3);
			}
			else
			{
				iLocal_552 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_31);
				if (iLocal_552 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_552))
					{
						fLocal_786 = (Local_90.f_35 + 0.6f);
						if (fLocal_786 < 0.75f)
						{
							fLocal_786 = 0.75f;
						}
						if (BitTest(Local_90.f_26, 4))
						{
							fLocal_786 = (fLocal_786 + 0.25f);
						}
						if (fLocal_786 > 1.75f)
						{
							fLocal_786 = 1.75f;
						}
						PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_552, fLocal_786);
					}
				}
			}
			break;
		
		case 5:
			if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 10))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_perform_sequence")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_perform_sequence")) != 1)
				{
					if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_90.f_0)))
					{
						iLocal_552 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_31);
						if ((iLocal_552 != -1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_552)) || iLocal_552 == -1)
						{
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_90.f_0), iLocal_561);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_90.f_0), 16);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_90.f_0), true);
							MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 10);
						}
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_turn_ped_to_face_entity")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_turn_ped_to_face_entity")) != 0)
			{
				if (func_20(&uLocal_581, 5000, 0))
				{
					func_15(&uLocal_581);
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_90.f_34 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_90.f_34)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_90.f_34));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_90.f_0), iVar1, 10000);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_90.f_0), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 10))
			{
				if ((iLocal_552 == -1 || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_552)) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_552) >= 0.95f)
				{
					func_235();
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_90.f_34 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_90.f_34)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_90.f_34));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					TASK::TASK_HANDS_UP(NETWORK::NET_TO_PED(Local_90.f_0), -1, iVar1, -1, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_PED(Local_90.f_0), false, false);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_90.f_0), 16);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_90.f_0), true);
					MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 10);
				}
			}
			break;
		
		case 7:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_combat_hated_targets_around_ped")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_combat_hated_targets_around_ped")) != 1)
			{
				if (!func_178())
				{
					func_234();
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_90.f_0));
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_90.f_0), 20f, 0);
					func_236(4);
				}
			}
			break;
		
		case 8:
			if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
			{
				func_235();
				iLocal_552 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_31);
				if ((iLocal_552 != -1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_552)) || iLocal_552 == -1)
				{
					if ((!BitTest(Local_90.f_25, 27) && !func_39()) && !func_38())
					{
						if (BitTest(Local_90.f_26, 2))
						{
							if (!BitTest(Local_90.f_26, 3))
							{
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_90.f_0), iLocal_563);
								iVar3 = 1;
							}
							else
							{
								func_234();
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_90.f_0), iLocal_564);
								iVar3 = 1;
							}
						}
					}
					else
					{
						TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_90.f_0), Local_548, 250f, -1, true, false);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_236(25);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_90.f_0), true);
						func_6(Local_486.f_50, 1, func_7());
						MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 9);
					}
				}
			}
			else if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 19))
			{
				iVar4 = TASK::GET_NAVMESH_ROUTE_RESULT(NETWORK::NET_TO_PED(Local_90.f_0));
				if (iVar4 == 3)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_90.f_0));
					MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 19);
				}
				else if (iVar4 == 2)
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_90.f_0));
					if (!BitTest(Local_90.f_26, 3))
					{
						TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_90.f_0), iLocal_565);
					}
					else
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_90.f_0), 20f, 0);
					}
					MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 19);
				}
			}
			break;
	}
	func_231();
	return 1;
}

void func_231()
{
	if ((Local_90.f_3 != 8 && Local_90.f_3 != 7) && Local_90.f_2 == 3)
	{
		if ((((!BitTest(Local_90.f_25, 14) || !BitTest(Local_90.f_25, 15)) || !BitTest(Local_90.f_25, 22)) || !BitTest(Local_90.f_25, 23)) || !BitTest(Local_90.f_25, 30))
		{
			iLocal_552 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_31);
			if (iLocal_552 != -1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_552))
				{
					if (!func_178())
					{
						if (!BitTest(Local_90.f_25, 14) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 6))
						{
							func_236(2);
							MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 6);
						}
						if (!BitTest(Local_90.f_25, 15) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 7))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_552) > 0.87f)
							{
								func_236(3);
								MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 7);
							}
						}
						if (!BitTest(Local_90.f_25, 22) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 22))
						{
							if (BitTest(Local_90.f_25, 24) && !func_178())
							{
								func_236(11);
								MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 22);
							}
						}
						if (!BitTest(Local_90.f_25, 23) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 23))
						{
							if (BitTest(Local_90.f_25, 25) && !func_178())
							{
								func_236(12);
								MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 23);
							}
						}
					}
				}
			}
		}
		if (!BitTest(Local_90.f_25, 9))
		{
			if (!BitTest(Local_90.f_25, 26) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 24))
			{
				if (BitTest(Local_90.f_25, 7))
				{
					if (!func_178())
					{
						if (!BitTest(Local_90.f_26, 11))
						{
							if (!BitTest(Local_90.f_26, 12))
							{
								func_236(1);
							}
							else
							{
								func_236(19);
							}
						}
						else
						{
							func_236(16);
						}
						MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 24);
						return;
					}
					else
					{
						func_232();
						return;
					}
				}
			}
			if (((!BitTest(Local_90.f_25, 30) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 25)) && !BitTest(Local_90.f_25, 7)) && !BitTest(Local_90.f_25, 4))
			{
				if (BitTest(Local_90.f_26, 0) && !func_178())
				{
					if ((BitTest(Local_90.f_25, 7) && BitTest(Local_90.f_25, 4)) || (!BitTest(Local_90.f_25, 7) && !BitTest(Local_90.f_25, 4)))
					{
						if (!BitTest(Local_90.f_26, 11))
						{
							if (!BitTest(Local_90.f_26, 12))
							{
								func_236(13);
							}
							else
							{
								func_236(20);
							}
						}
						else
						{
							func_236(17);
						}
						MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						return;
					}
				}
			}
			if (!BitTest(Local_90.f_25, 31) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 26))
			{
				if (BitTest(Local_90.f_26, 1) && !func_178())
				{
					func_236(14);
					MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 26);
					return;
				}
			}
			if (!BitTest(Local_90.f_26, 9) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 31))
			{
				if (BitTest(Local_90.f_26, 8) && !func_178())
				{
					func_236(22);
					MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 31);
					return;
				}
			}
			if (!BitTest(Local_90.f_1, 3) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 3))
			{
				if (BitTest(Local_90.f_1, 2) && !func_178())
				{
					func_236(24);
					MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 3);
					return;
				}
			}
			if (!BitTest(Local_90.f_26, 14) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 20))
			{
				if (BitTest(Local_90.f_26, 13) && !func_178())
				{
					func_236(23);
					MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 20);
					return;
				}
			}
		}
	}
	if (!BitTest(Local_90.f_26, 6) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 29))
	{
		if (BitTest(Local_90.f_26, 5))
		{
			if (!func_178())
			{
				func_236(21);
				MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 29);
				return;
			}
		}
	}
}

void func_232()
{
	Global_21152 = 0;
	func_233();
}

void func_233()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}
}

void func_234()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iVar0 < 3)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_90.f_0), joaat("weapon_pistol"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_90.f_0), MISC::GET_RANDOM_INT_IN_RANGE(10, 35));
	}
	else if (iVar0 < 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_90.f_0), joaat("weapon_combatpistol"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_90.f_0), MISC::GET_RANDOM_INT_IN_RANGE(15, 40));
	}
	else if (iVar0 == 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_90.f_0), joaat("weapon_microsmg"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_90.f_0), MISC::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	else if (iVar0 == 7)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_90.f_0), joaat("weapon_combatmg"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_90.f_0), MISC::GET_RANDOM_INT_IN_RANGE(5, 15));
	}
	else if (iVar0 == 8)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_90.f_0), joaat("weapon_bat"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_90.f_0), MISC::GET_RANDOM_INT_IN_RANGE(20, 40));
	}
	else if (iVar0 == 9)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_90.f_0), joaat("weapon_assaultrifle"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_90.f_0), MISC::GET_RANDOM_INT_IN_RANGE(5, 30));
	}
	else if (iVar0 == 10)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_90.f_0), joaat("weapon_sawnoffshotgun"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_90.f_0), MISC::GET_RANDOM_INT_IN_RANGE(5, 20));
	}
	else
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_90.f_0), joaat("weapon_pumpshotgun"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_90.f_0), MISC::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	func_6(Local_486.f_50, 1, func_7());
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_90.f_0), Global_1837315);
	PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_90.f_0), true);
	PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_90.f_0), 1);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_90.f_0), Local_545, 20f, false, false);
	PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_90.f_0), true);
}

void func_235()
{
	iLocal_552 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_90.f_31);
	if (iLocal_552 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_552))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_90.f_31);
		}
	}
}

void func_236(int iParam0)
{
	struct<2> Var0;
	int iVar4;
	
	if (BitTest(Local_90.f_25, 13))
	{
		if (!func_432(Local_90.f_0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_90.f_0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_90.f_0)))
				{
					if (Local_90.f_47 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_90.f_47 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_90.f_33, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (MISC::ARE_STRINGS_EQUAL(&Var0, "RB_SH241"))
					{
						if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, true))
						{
							if ((((((iVar4 == joaat("weapon_unarmed") || iVar4 == 0) || iVar4 == joaat("object")) || iVar4 == joaat("weapon_flare")) || iVar4 == joaat("weapon_snowball")) || func_258(iVar4)) || func_257(iVar4, 0))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_431(&uLocal_609, 3, NETWORK::NET_TO_PED(Local_90.f_0), &(Local_90.f_48), 1, 0);
					switch (iParam0)
					{
						case 0:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_GREET", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 1:
							func_237(&uLocal_609, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_237(&uLocal_609, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_237(&uLocal_609, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_BRAVE", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 10:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_REMOVE_VEHICLE", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 11:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_REACT_TO_SHOUT", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 12:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_HURRYING", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 13:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_NO_COPS", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 14:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_THREATENED", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 15:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_GREET_START", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 16:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_SCARED_START", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 17:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_NO_COPS_START", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 18:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_GREET_END", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 19:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_SCARED_END", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 20:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_NO_COPS_END", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 21:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_COPS_ARRIVED", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 22:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_SELL", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 23:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_NO_ENTRY", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 24:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SHOP_STEAL", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 25:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_90.f_0), "SCREAM_PANIC", &(Local_90.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						}
					}
				}
			}
	}
}

int func_237(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_256(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2883585 = 1;
	return func_238(sParam2, iParam3, 0);
}

int func_238(char* sParam0, int iParam1, bool bParam2)
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
					func_255();
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
		if (func_254(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_253();
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
			MISC::CLEAR_BIT(&Global_8802, 0);
			if (bParam2)
			{
				func_246();
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
				if (func_245())
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
			if (func_244())
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
			func_243();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_242();
		func_239();
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
		func_255();
	}
	return 0;
}

void func_239()
{
	if (!func_240())
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

int func_240()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_187())
	{
		return 0;
	}
	if (func_241(PLAYER::PLAYER_ID()))
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

bool func_241(int iParam0)
{
	return func_147(iParam0, 20);
}

void func_242()
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

void func_243()
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

int func_244()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_245()
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

void func_246()
{
	if (func_126(14))
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
		Global_20930 = func_247();
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

var func_247()
{
	func_248();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_248()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_251(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_250(PLAYER::PLAYER_PED_ID());
			if (func_249(iVar0) && (!func_126(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_249(Global_113969.f_2366.f_539.f_4321))
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

bool func_249(int iParam0)
{
	return iParam0 < 3;
}

int func_250(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_251(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_251(int iParam0)
{
	if (func_249(iParam0))
	{
		return func_252(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_252(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_253()
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

bool func_254(int iParam0, int iParam1)
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

void func_255()
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

void func_256(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_257(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case joaat("weapon_pipebomb"):
			return 1;
			break;
	}
	if (iParam1 && iParam0 == joaat("weapon_snowball"))
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
		case joaat("weapon_battleaxe"):
		case joaat("weapon_poolcue"):
		case joaat("weapon_wrench"):
		case joaat("weapon_stone_hatchet"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_candycane"):
		case -624951259:
			return 1;
		
		default:
	}
	return 0;
}

void func_259()
{
	int iVar0;
	
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0);
	if (Local_90.f_45 != iVar0)
	{
		if (Local_90.f_45 < iVar0 || func_266(Local_90.f_45, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_90.f_45);
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0);
	if (Local_90.f_46 != iVar0)
	{
		if (Local_90.f_46 < iVar0 || func_260(Local_90.f_46, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_90.f_46);
		}
	}
}

int func_260(int iParam0, bool bParam1, bool bParam2)
{
	return func_261(2, iParam0, 1, bParam1, bParam2);
}

int func_261(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681448, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_265(iParam0) - func_264(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_264(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_265(iParam0) - func_263(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_264(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_265(iParam0) - func_264(iParam0, 1));
		}
		if (!bParam4 && Global_1845281[PLAYER::PLAYER_ID() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_262(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_262(int iParam0)
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

int func_263(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1681448.f_1;
			break;
		
		case 1:
			return Global_1681448.f_2;
			break;
		
		case 2:
			return Global_1681448.f_3;
			break;
	}
	return 0;
}

int func_264(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657971[iVar0 /*465*/].f_220;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657971[iVar0 /*465*/].f_221;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657971[iVar0 /*465*/].f_222;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1681456;
			break;
		
		case 1:
			return Global_1681457;
			break;
		
		case 2:
			return Global_1681458;
			break;
	}
	return 0;
}

int func_266(int iParam0, bool bParam1, bool bParam2)
{
	return func_261(0, iParam0, 1, bParam1, bParam2);
}

void func_267()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	switch (iLocal_804)
	{
		case 0:
			if (!BitTest(Local_486.f_53, 0))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_15))
				{
					if (func_273(Local_810))
					{
						Local_810 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_OBJ(Local_90.f_15), 0f, -0.5f, 0f) };
						MISC::SET_BIT(&(Local_486.f_53), 0);
					}
				}
			}
			if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_810, 0.5f, 0.5f, 1f, false, true, 0) && (func_432(Local_90.f_0) || Local_90.f_3 > 7)) && !BitTest(Local_90.f_25, 20)) && !BitTest(Local_90.f_25, 11)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_553, 1.5f) == 0)
			{
				if (((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_175(0)) && !func_272()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_41(PLAYER::PLAYER_ID(), 146)) && !func_40(PLAYER::PLAYER_ID())) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_15)) && (!func_145(PLAYER::PLAYER_ID()) || func_100(PLAYER::PLAYER_ID()) == 154))
				{
					func_155("FHU_MANR", -1);
					Global_2738934.f_6019.f_4 = 1;
					iLocal_804 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!BitTest(Local_90.f_26, 16) && !BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12)) && !BitTest(Local_90.f_25, 20)) && !BitTest(Local_90.f_25, 11)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_810, 0.5f, 0.5f, 1f, false, true, 0)) && (!func_145(PLAYER::PLAYER_ID()) || func_100(PLAYER::PLAYER_ID()) == 154))
			{
				if (((PAD::IS_CONTROL_JUST_PRESSED(0, 51) && !func_271(0)) && !func_272()) && !HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_153("FHU_MANR"))
					{
						HUD::CLEAR_HELP(true);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 640);
					MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 12);
					iLocal_804 = 2;
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
					if (iLocal_809 == 0)
					{
						func_268(&iLocal_809, 4, "FHU_MANR", 0, 0, 0, 0);
					}
				}
			}
			else if (func_153("FHU_MANR"))
			{
				HUD::CLEAR_HELP(true);
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Local_810.f_2 = (Var3.f_2 - 1f);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_810, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D((Local_573.f_0 - Local_810.f_0), (Local_573.f_1 - Local_810.f_1)));
				TASK::CLEAR_SEQUENCE_TASK(&iVar6);
				TASK::OPEN_SEQUENCE_TASK(&iVar6);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar6);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar6);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, true);
				bVar2 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_808, true);
				if (bVar2)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				if (!CAM::DOES_CAM_EXIST(iLocal_805))
				{
					iLocal_805 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_805, PLAYER::PLAYER_PED_ID(), -0.1878f, 3.0635f, 0.68f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_805, PLAYER::PLAYER_PED_ID(), -0.0129f, 0.0927f, 0.3008f, true);
				CAM::SET_CAM_FOV(iLocal_805, 35f);
				CAM::SHAKE_CAM(iLocal_805, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(iLocal_805, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			iLocal_804 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_806))
				{
					iLocal_806 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_806, PLAYER::PLAYER_PED_ID(), -1.0346f, 2.9183f, 0.68f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_806, PLAYER::PLAYER_PED_ID(), -0.0574f, 0.1074f, 0.3008f, true);
				CAM::SET_CAM_FOV(iLocal_806, 35f);
				CAM::SHAKE_CAM(iLocal_806, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_806, iLocal_805, 6000, 1, 1);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, true);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			iLocal_804 = 4;
			break;
		
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_806))
			{
				iLocal_804 = 5;
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_807)
						{
							iVar7 = SYSTEM::ROUND(((IntToFloat(iLocal_578) * 0.75f) / 4f));
							iVar8 = SYSTEM::ROUND(((IntToFloat(iLocal_579) * 0.75f) / 4f));
							iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(iVar7, iVar8 + 1);
							iVar1 = func_226(iVar1, 1);
							if (iVar1 > (Global_262145.f_167 / 4))
							{
								iVar1 = (Global_262145.f_167 / 4);
							}
							if (func_225(PLAYER::PLAYER_ID()) && func_223(func_224(PLAYER::PLAYER_ID())) < 1f)
							{
								if (Global_262145.f_3930 > 1f)
								{
									Global_262145.f_3930 = 1f;
								}
								iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_3930));
							}
							if (iVar1 > 0)
							{
								if (func_222())
								{
									func_211(joaat("service_earn_holdups"), iVar1, &uVar9, 0, 0, 0);
								}
								else
								{
									func_207(iVar1, 1, 1, 1092616192);
									MONEY::NETWORK_EARN_FROM_HOLDUPS(iVar1);
								}
							}
							Global_2738934.f_6019 = (Global_2738934.f_6019 + iVar1);
							iLocal_803 = (iLocal_803 + iVar1);
							func_194(1, iLocal_803);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
							iLocal_807 = 1;
						}
					}
					else if (iLocal_807)
					{
						iLocal_807 = 0;
					}
				}
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, true);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			break;
		
		case 5:
			if (iLocal_808 != joaat("weapon_unarmed") && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_808, true);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (CAM::DOES_CAM_EXIST(iLocal_805))
			{
				CAM::DESTROY_CAM(iLocal_805, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_806))
			{
				CAM::DESTROY_CAM(iLocal_806, false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			Global_2738934.f_6019.f_2 = 1;
			Global_2738934.f_6019.f_5 = 1;
			if (func_190(1))
			{
				func_181(4);
			}
			iLocal_804 = 7;
			break;
		
		case 6:
			CAM::SET_CAM_ACTIVE(iLocal_806, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			iLocal_804 = 5;
			break;
	}
}

void func_268(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_269(iParam0);
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
		if (!Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/] = 1;
			Global_44799[iVar0 /*32*/].f_1 = Global_45000;
			Global_45000++;
			Global_44799[iVar0 /*32*/].f_4 = 0;
			Global_44799[iVar0 /*32*/].f_29 = 0;
			Global_44799[iVar0 /*32*/].f_5 = 0;
			Global_44799[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44799[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44799[iVar0 /*32*/].f_6 = iParam3;
			Global_44799[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44799[iVar0 /*32*/].f_7 = 0;
			Global_44799[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44799[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44799[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44799[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44799[iVar0 /*32*/].f_12 = 0;
				Global_44799[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_44799[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_269(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_270(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_270(int iParam0)
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
		if (Global_44799[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_271(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
			{
				if (Global_20929 == 1)
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
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_20929 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_20930.f_1 > 3)
	{
		if (Global_20929 == 1)
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

bool func_272()
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

int func_273(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_274(var uParam0, var uParam1, var uParam2, var uParam3, struct<3> Param4, var uParam7, int* iParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	bool bVar8;
	int iVar9;
	char* sVar10;
	float fVar11;
	struct<4> Var12;
	int iVar16;
	int iVar17;
	
	if (((uParam7->f_4 >= 1000 || (uParam7->f_4 + uParam0->f_51) >= 1000) || func_429(&(uParam7->f_5))) || (func_149(&(Global_2738934.f_10)) && !func_428(Global_2738934.f_10, 300000, 0)))
	{
		if (func_149(&(Global_2738934.f_10)))
		{
			if ((MISC::GET_GAME_TIMER() % 2500) < 50)
			{
			}
		}
		if (!uParam0->f_34)
		{
			uParam0->f_34 = 1;
			if (!func_149(&(Global_2738934.f_10)))
			{
				func_21(&(Global_2738934.f_10), 0, 0);
			}
		}
	}
	else
	{
		if (func_149(&(Global_2738934.f_10)))
		{
			func_15(&(Global_2738934.f_10));
		}
		if (uParam0->f_34)
		{
			uParam0->f_34 = 0;
		}
	}
	if ((MISC::GET_GAME_TIMER() % 5000) < 50)
	{
	}
	if ((((((uParam7->f_3 < 2 && func_48(PLAYER::PLAYER_ID(), 1, 1)) && BitTest(uParam0->f_52, 26)) && !func_427(-1082130432)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1) && !bParam9) && !func_432(*uParam7))
	{
		bVar8 = false;
		iVar9 = 0;
		if ((HUD::IS_PAUSE_MENU_ACTIVE() && uParam0->f_54 != 0) && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			if (!bParam10)
			{
				uParam0->f_54 = 0;
				func_426(uParam0, &(iParam8->f_3));
			}
		}
		switch (uParam0->f_54)
		{
			case 0:
				if ((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && (!func_145(PLAYER::PLAYER_ID()) || func_100(PLAYER::PLAYER_ID()) == 154)) && !func_425(PLAYER::PLAYER_ID(), 21))
				{
					if (func_424(*uParam0, &uParam1, Param4.f_2, &(uParam0->f_16[0 /*3*/]), &(uParam0->f_16[1 /*3*/]), &(uParam0->f_23), &(uParam0->f_26)))
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(*uParam7), true) };
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, uParam0->f_23, true) < 5f && MISC::ABSF((Var2.f_2 - Var5.f_2)) < 0.25f) || func_483(1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_26, false, true, 0) || func_483(1))
							{
								if (PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uParam0->f_23, 135f) || func_483(1))
								{
									if (uParam0->f_34)
									{
										if (func_483(1))
										{
											func_446();
										}
										if (((!func_153("SHR_HOLDUP_1") && !func_153("SHR_MENU")) && !func_423()) && func_422())
										{
											func_155("SHR_SOLD_OUT", -1);
											uParam0->f_54 = 10;
										}
									}
									else
									{
										if (func_483(1))
										{
										}
										uParam0->f_14 = -1;
										func_268(&(uParam0->f_14), 4, "SHR_MENU", 0, 0, 0, 0);
										uParam0->f_54 = 2;
									}
								}
								else if ((MISC::GET_GAME_TIMER() % 8000) < 50)
								{
								}
							}
							else
							{
								if ((MISC::GET_GAME_TIMER() % 8000) < 50)
								{
								}
								GRAPHICS::DRAW_DEBUG_LINE(Var2, uParam0->f_16[0 /*3*/], 0, 0, 255, 255);
								GRAPHICS::DRAW_DEBUG_LINE(Var2, uParam0->f_16[1 /*3*/], 0, 0, 255, 255);
							}
						}
						else
						{
							if ((MISC::GET_GAME_TIMER() % 8000) < 50)
							{
							}
							GRAPHICS::DRAW_DEBUG_LINE(Var2, uParam0->f_23, 0, 0, 255, 255);
						}
					}
				}
				else
				{
					if (func_153("SHR_MENU"))
					{
						HUD::CLEAR_HELP(true);
					}
					if (func_42(PLAYER::PLAYER_ID()))
					{
						if (!BitTest(uParam0->f_53, 4))
						{
							func_155("SHR_FM_CRIT", -1);
							HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
							MISC::SET_BIT(&(uParam0->f_53), 4);
						}
					}
					if ((MISC::GET_GAME_TIMER() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(*uParam7), true) };
				if ((!PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uParam0->f_23, 135f) || MISC::ABSF((Var2.f_2 - Var5.f_2)) >= 0.25f) && !func_483(1))
				{
					if (func_153("SHR_MENU"))
					{
						HUD::CLEAR_HELP(true);
					}
					func_269(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_153("SHR_MENU"))
					{
						HUD::CLEAR_HELP(true);
					}
					func_269(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (func_175(0) || func_174())
				{
					if (func_153("SHR_MENU"))
					{
						HUD::CLEAR_HELP(true);
					}
					func_269(&(uParam0->f_14));
					func_169(1, *uParam0);
					MISC::CLEAR_BIT(&(uParam0->f_52), 26);
					uParam0->f_54 = 0;
				}
				if (!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					if (func_421(uParam0->f_14, 1) || func_483(1))
					{
						if (func_483(1))
						{
							func_446();
						}
						if (func_153("SHR_MENU"))
						{
							HUD::CLEAR_HELP(true);
						}
						func_419(&(uParam0->f_44));
						func_269(&(uParam0->f_14));
						func_413(0, 0);
						MISC::SET_BIT(&(uParam0->f_53), 7);
						func_470(PLAYER::PLAYER_ID(), 0, 66048, 0);
						HUD::THEFEED_FLUSH_QUEUE();
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_432(*uParam7))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(*uParam7), 0);
							MISC::CLEAR_BIT(&(iParam8->f_1), 1);
						}
						func_412();
						uParam0->f_54 = 3;
					}
				}
				break;
			
			case 3:
				if (!bParam10)
				{
					if (!CAM::DOES_CAM_EXIST(uParam0->f_1))
					{
						uParam0->f_1 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
						func_411(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &fVar11);
						CAM::SET_CAM_COORD(uParam0->f_1, uParam0->f_2);
						CAM::SET_CAM_ROT(uParam0->f_1, uParam0->f_5, 2);
						CAM::SET_CAM_FOV(uParam0->f_1, fVar11);
						CAM::SHAKE_CAM(uParam0->f_1, "HAND_SHAKE", 0.1f);
						CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					}
					uParam0->f_37 = func_434(*uParam0);
				}
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				uParam0->f_13 = func_410();
				func_409(0, 0);
				func_408(1, 1, 0, 0, 0);
				func_407(1, 2, 1, 1, 1);
				func_406("SNK_ITEM");
				if (!bParam10)
				{
					func_404(1, uParam0->f_37, uParam0->f_37);
				}
				StringCopy(&Var12, "SHR_MENU", 16);
				func_383(func_403(*uParam0), func_385(), Var12);
				iVar16 = 0;
				while (iVar16 < uParam0->f_13)
				{
					bVar8 = func_382(iVar16);
					func_377(iVar16, func_381(iVar16), 0, !bVar8, 0, 0, 0);
					if (uParam7->f_5[iVar16] >= 10 || ((func_149(&(Global_2738934.f_12[iVar16 /*2*/])) && !func_428(Global_2738934.f_12[iVar16 /*2*/], 150000, 0)) && *uParam0 == Global_2738934.f_27))
					{
						func_377(iVar16, "", 1, 1, 0, 0, 0);
						func_376(15, 0);
						if (func_149(&(Global_2738934.f_12[iVar16 /*2*/])) && !func_428(Global_2738934.f_12[iVar16 /*2*/], 150000, 0))
						{
							uParam7->f_5[iVar16] = 10;
						}
						if (!func_149(&(Global_2738934.f_12[iVar16 /*2*/])))
						{
							Global_2738934.f_27 = *uParam0;
							func_21(&(Global_2738934.f_12[iVar16 /*2*/]), 0, 0);
						}
					}
					else if (bVar8)
					{
						func_377(iVar16, "SNK_FULL", 0, !bVar8, 0, 0, 0);
					}
					else if (!bParam10)
					{
						func_377(iVar16, "ITEM_COST", 1, 1, 0, 0, 0);
						func_372(func_375(uParam0, iVar16), 0);
					}
					else
					{
						func_377(iVar16, "SNK_FREE", 0, 1, 0, 0, 0);
					}
					iVar16++;
				}
				func_371(0);
				func_370(uParam0->f_12, 1, 1);
				if (uParam0->f_35)
				{
					if (!bParam10)
					{
						func_369("SNK_BOUGHT", 0, 0);
					}
					else
					{
						func_369("SNK_STORED", 0, 0);
					}
				}
				else if (uParam7->f_5[uParam0->f_12] >= 10)
				{
					func_369("SNK_SOUT", 0, 0);
				}
				else
				{
					func_369(func_368(uParam0->f_12), 0, 0);
				}
				func_367(201, "ITEM_SELECT", -1, 0);
				if (bParam10)
				{
					func_367(203, "STORE_TAKE_ALL", -1, 0);
				}
				func_367(202, "ITEM_BACK", -1, 0);
				if (!bParam10)
				{
					func_367(203, "SNK_LIFT", -1, 0);
					func_334(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				uParam0->f_54 = 4;
				break;
			
			case 4:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_turn_ped_to_face_entity")) == 7)
				{
					if (!BitTest(iParam8->f_1, 1))
					{
						if (!bParam10)
						{
							func_470(PLAYER::PLAYER_ID(), 0, 98816, 0);
						}
						else
						{
							func_470(PLAYER::PLAYER_ID(), 0, 256, 0);
						}
						MISC::SET_BIT(&(iParam8->f_1), 1);
					}
				}
				iVar9 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::IS_USING_CURSOR(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, true);
						PAD::DISABLE_CONTROL_ACTION(0, 2, true);
						PAD::ENABLE_CONTROL_ACTION(0, 237, true);
						PAD::ENABLE_CONTROL_ACTION(0, 238, true);
						PAD::ENABLE_CONTROL_ACTION(0, 241, true);
						PAD::ENABLE_CONTROL_ACTION(0, 242, true);
						func_330(0, 0, 0, 1);
						func_329(0, -1, 1);
						if (func_328())
						{
							if (Global_4541816 != uParam0->f_12)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								uParam0->f_12 = Global_4541816;
								func_370(uParam0->f_12, 1, 1);
								uParam0->f_27 = 0;
								uParam0->f_29 = 0;
								uParam0->f_30 = 0;
								uParam0->f_32 = 0;
								sVar10 = func_368(uParam0->f_12);
								if (HUD::DOES_TEXT_LABEL_EXIST(sVar10))
								{
									func_369(sVar10, 0, 0);
								}
							}
							else
							{
								iVar9 = 1;
							}
						}
					}
				}
				if (!bParam10)
				{
					func_334(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				func_318(uParam0, &(uParam7->f_5), bParam10);
				if ((uParam7->f_2 > 2 && BitTest(uParam7->f_1, 0)) && BitTest(iParam8->f_1, 0))
				{
					MISC::CLEAR_BIT(&(iParam8->f_1), 0);
				}
				if (bParam10 && PAD::IS_CONTROL_JUST_PRESSED(2, 203))
				{
					func_313(uParam0, bParam10);
					uParam0->f_35 = 1;
					uParam0->f_54 = 3;
				}
				if ((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar9 == 1) || uParam0->f_47)
				{
					if (!uParam0->f_47)
					{
						uParam0->f_27 = 1;
						uParam0->f_29 = 0;
						uParam0->f_30 = 0;
						uParam0->f_32 = 0;
						func_419(&(uParam0->f_44));
					}
					if ((uParam0->f_28 && uParam0->f_31) && uParam0->f_33)
					{
						if (func_222())
						{
							uParam0->f_47 = 1;
							uParam0->f_48 = 0;
							uParam0->f_49 = -1;
							iVar0 = 0;
							if (!bParam10)
							{
								iVar0 = func_375(uParam0, uParam0->f_12);
							}
							func_301(uParam0, -1303831698, 537254313, iVar0);
							uParam0->f_54 = 5;
						}
						else
						{
							uParam0->f_35 = 1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
							uParam7->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
						}
					}
					else
					{
						uParam0->f_35 = 0;
						if (!uParam0->f_28 && !uParam0->f_36)
						{
							iVar0 = 0;
							if (!bParam10)
							{
								iVar0 = func_375(uParam0, uParam0->f_12);
							}
							func_300(MISC::GET_HASH_KEY(func_368(uParam0->f_12)), iVar0, 0);
							func_293(0, 31, 3);
							uParam0->f_54 = 11;
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
					}
					if (!uParam0->f_33)
					{
						uParam0->f_54 = 3;
					}
				}
				if (!bParam10)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 203) && !uParam0->f_47)
					{
						uParam0->f_27 = 1;
						if (uParam7->f_5[uParam0->f_12] < 10)
						{
							uParam0->f_33 = 1;
						}
						else
						{
							uParam0->f_33 = 0;
						}
						func_419(&(uParam0->f_44));
						if (!uParam0->f_33)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
						}
						else if (!uParam0->f_31)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_165(), func_292(), 8f, -8f, -1, 1048576, 0f, false, false, false);
							uParam0->f_54 = 8;
							uParam0->f_15 = MISC::GET_GAME_TIMER();
							AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", true);
							if (!bParam10)
							{
								func_426(uParam0, &(iParam8->f_3));
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					if (func_483(1))
					{
						func_446();
					}
					uParam0->f_54 = 9;
					uParam0->f_15 = MISC::GET_GAME_TIMER();
					if (!bParam10)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
						func_426(uParam0, &(iParam8->f_3));
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FREEMODE_SOUNDSET", true);
						Global_2696202 = 1;
					}
				}
				if (uParam0->f_34)
				{
					uParam0->f_54 = 10;
					uParam0->f_15 = MISC::GET_GAME_TIMER();
					if (!bParam10)
					{
						func_426(uParam0, &(iParam8->f_3));
					}
					func_155("SHR_SOLD_OUT", -1);
				}
				iVar17 = 0;
				while (iVar17 < uParam0->f_13)
				{
					if (func_149(&(Global_2738934.f_12[iVar17 /*2*/])) && func_428(Global_2738934.f_12[iVar17 /*2*/], 150000, 0))
					{
						func_15(&(Global_2738934.f_12[iVar17 /*2*/]));
						uParam7->f_5[iVar17] = 0;
						uParam0->f_54 = 3;
					}
					iVar17++;
				}
				break;
			
			case 5:
				iVar0 = 0;
				if (!bParam10)
				{
					func_334(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
					iVar0 = func_375(uParam0, uParam0->f_12);
				}
				if (func_301(uParam0, -1303831698, 537254313, iVar0))
				{
				}
				else
				{
					switch (uParam0->f_49)
					{
						case 0:
							uParam0->f_35 = 0;
							if (!uParam0->f_28 && !uParam0->f_36)
							{
								if (!bParam10)
								{
									iVar0 = func_375(uParam0, uParam0->f_12);
								}
								func_300(MISC::GET_HASH_KEY(func_368(uParam0->f_12)), iVar0, 0);
								func_293(0, 31, 3);
								func_291();
								func_290();
								uParam0->f_54 = 11;
							}
							else
							{
								if (func_483(1))
								{
									func_446();
								}
								uParam0->f_54 = 9;
								uParam0->f_15 = MISC::GET_GAME_TIMER();
								AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
								if (!bParam10)
								{
									func_426(uParam0, &(iParam8->f_3));
								}
							}
							break;
						
						case 2:
							uParam0->f_35 = 1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
							uParam7->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				if (!bParam10)
				{
					func_334(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (func_222())
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_288(func_289()));
				}
				if (bParam10)
				{
					if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_137, 6))
					{
						MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_137), 6);
					}
					MONEY::NETWORK_SPENT_PA_SERVICE_SNACK(0, uParam0->f_12, 0, 1);
					iVar1 = 0;
					switch (uParam0->f_12)
					{
						case 3:
							func_110(1276, 1, -1);
							func_109(16, 1, -1);
							func_281(1, -251807494, 1359863693, 1, func_385(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 1:
							func_110(1277, 1, -1);
							func_109(15, 1, -1);
							func_281(1, 1199442189, 1359863693, 1, func_385(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 2:
							func_109(14, 1, -1);
							func_110(1278, 1, -1);
							func_281(1, 1486811039, 1359863693, 1, func_385(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 4:
							uParam0->f_55 = 20;
							if (func_133(1098, -1) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_133(1098, -1));
							}
							func_281(1, -181862273, 1359863693, uParam0->f_55, func_385(), joaat("purchase"), 0, joaat("pa"));
							func_110(1098, uParam0->f_55, -1);
							break;
						
						case 0:
							func_110(62, 1, -1);
							func_281(1, -39155154, 1359863693, 1, func_385(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 5:
							func_110(63, 1, -1);
							func_281(1, -1600998734, 1359863693, 1, func_385(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 6:
							func_110(10405, 1, -1);
							func_281(1, 495696637, 1359863693, 1, func_385(), joaat("purchase"), 0, joaat("pa"));
							break;
					}
				}
				else
				{
					switch (uParam0->f_12)
					{
						case 3:
							if (func_280(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_375(uParam0, uParam0->f_12);
							}
							func_110(1276, 1, -1);
							func_281(1, -251807494, 1359863693, 1, func_385(), joaat("purchase"), 0, 1037810546);
							func_109(16, 1, -1);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM1"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 1:
							if (func_280(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_375(uParam0, uParam0->f_12);
							}
							func_110(1277, 1, -1);
							func_281(1, 1199442189, 1359863693, 1, func_385(), joaat("purchase"), 0, 1037810546);
							func_109(15, 1, -1);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM2"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 2:
							if (func_280(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_375(uParam0, uParam0->f_12);
							}
							func_109(14, 1, -1);
							func_110(1278, 1, -1);
							func_281(1, 1486811039, 1359863693, 1, func_385(), joaat("purchase"), 0, 1037810546);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM3"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 4:
							if (func_280(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_375(uParam0, uParam0->f_12);
							}
							uParam0->f_55 = 20;
							if (func_133(1098, -1) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_133(1098, -1));
							}
							func_110(1098, uParam0->f_55, -1);
							func_281(1, -181862273, 1359863693, uParam0->f_55, func_385(), joaat("purchase"), 0, 1037810546);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM4"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 0:
							if (func_280(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_375(uParam0, uParam0->f_12);
							}
							func_110(62, 1, -1);
							func_281(1, -39155154, 1359863693, 1, func_385(), joaat("purchase"), 0, 1037810546);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM5"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 6:
							if (func_280(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_375(uParam0, uParam0->f_12);
							}
							func_110(10405, 1, -1);
							func_281(1, 495696637, 1359863693, 1, func_385(), joaat("purchase"), 0, 1037810546);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM7"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 5:
							if (func_280(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_375(uParam0, uParam0->f_12);
							}
							func_110(63, 1, -1);
							func_281(1, -1600998734, 1359863693, 1, func_385(), joaat("purchase"), 0, 1037810546);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM6"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						}
				}
				if (func_222())
				{
					func_214(func_289());
				}
				func_279(-iVar1, 0);
				uParam0->f_51 = (uParam0->f_51 + iVar1);
				if (!BitTest(*iParam8, 30))
				{
					MISC::SET_BIT(iParam8, 30);
				}
				if (!BitTest(iParam8->f_1, 0))
				{
					MISC::SET_BIT(&(iParam8->f_1), 0);
					iParam8->f_2 = uParam0->f_12;
				}
				if (uParam0->f_34 || uParam0->f_51 >= 1000)
				{
					uParam0->f_54 = 10;
					if (!bParam10)
					{
						func_426(uParam0, &(iParam8->f_3));
					}
					func_155("SHR_SOLD_OUT", -1);
				}
				else if (uParam7->f_5[uParam0->f_12] >= 10 || func_382(uParam0->f_12))
				{
					uParam0->f_54 = 3;
				}
				else
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 8:
				func_201(1);
				switch (uParam0->f_12)
				{
					case 3:
						func_277(0, 1f, 3);
						func_281(1, -251807494, 1359863693, 1, func_385(), -85260536, 0, 1037810546);
						func_110(1276, 1, -1);
						func_109(13, 1, -1);
						break;
					
					case 1:
						func_277(1, 1f, 3);
						func_110(1277, 1, -1);
						func_281(1, 1199442189, 1359863693, 1, func_385(), -85260536, 0, 1037810546);
						func_109(13, 1, -1);
						break;
					
					case 2:
						func_277(2, 1f, 3);
						func_110(1278, 1, -1);
						func_281(1, 1486811039, 1359863693, 1, func_385(), -85260536, 0, 1037810546);
						func_109(13, 1, -1);
						break;
					
					case 4:
						uParam0->f_55 = 20;
						if (func_133(1098, -1) + 20 > 20)
						{
							uParam0->f_55 = (20 - func_133(1098, -1));
						}
						func_277(6, SYSTEM::TO_FLOAT(uParam0->f_55), 3);
						func_110(1098, uParam0->f_55, -1);
						func_281(1, -181862273, 1359863693, 1, func_385(), -85260536, 0, 1037810546);
						break;
					
					case 0:
						func_277(3, 1f, 3);
						func_110(62, 1, -1);
						func_281(1, -39155154, 1359863693, 1, func_385(), -85260536, 0, 1037810546);
						break;
					
					case 6:
						func_277(5, 1f, 3);
						func_110(10405, 1, -1);
						func_281(1, 495696637, 1359863693, 1, func_385(), -85260536, 0, 1037810546);
						break;
					
					case 5:
						func_277(4, 1f, 3);
						func_110(63, 1, -1);
						func_281(1, -1600998734, 1359863693, 1, func_385(), -85260536, 0, 1037810546);
						break;
				}
				if (!bParam10)
				{
					func_470(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1 && !func_275(PLAYER::PLAYER_ID()))
				{
					PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
					MISC::SET_BIT(iParam8, 25);
					if (!BitTest(*iParam8, 1))
					{
						MISC::SET_BIT(iParam8, 2);
					}
				}
				if (!BitTest(iParam8->f_1, 2))
				{
					MISC::SET_BIT(&(iParam8->f_1), 2);
				}
				uParam0->f_54 = 12;
				break;
			
			case 11:
				if (!Global_101585.f_1482 && !NETWORK::IS_COMMERCE_STORE_OPEN())
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 10:
				if (!bParam10)
				{
					func_470(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if ((MISC::GET_GAME_TIMER() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 12;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2, 203);
					PAD::SET_INPUT_EXCLUSIVE(2, 202);
					PAD::SET_INPUT_EXCLUSIVE(2, 188);
					PAD::SET_INPUT_EXCLUSIVE(2, 187);
					PAD::SET_INPUT_EXCLUSIVE(2, 189);
					PAD::SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 9:
				if ((MISC::GET_GAME_TIMER() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 0;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2, 203);
					PAD::SET_INPUT_EXCLUSIVE(2, 202);
					PAD::SET_INPUT_EXCLUSIVE(2, 188);
					PAD::SET_INPUT_EXCLUSIVE(2, 187);
					PAD::SET_INPUT_EXCLUSIVE(2, 189);
					PAD::SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 12:
				if (BitTest(uParam7->f_1, 3))
				{
					if (BitTest(iParam8->f_1, 2))
					{
						MISC::CLEAR_BIT(&(iParam8->f_1), 2);
					}
					if (BitTest(iParam8->f_1, 3))
					{
						MISC::CLEAR_BIT(&(iParam8->f_1), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 8000) < 50)
		{
		}
		if (BitTest(uParam7->f_1, 3))
		{
			if (BitTest(iParam8->f_1, 2))
			{
				MISC::CLEAR_BIT(&(iParam8->f_1), 2);
			}
			if (BitTest(iParam8->f_1, 3))
			{
				MISC::CLEAR_BIT(&(iParam8->f_1), 3);
			}
		}
		if ((uParam0->f_54 != 12 && BitTest(uParam0->f_52, 26)) && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			if ((((uParam0->f_54 == 4 || uParam0->f_54 == 3) || uParam0->f_54 == 6) || uParam0->f_54 == 11) || uParam0->f_54 == 5)
			{
				func_426(uParam0, &(iParam8->f_3));
			}
			uParam0->f_54 = 12;
		}
		if (uParam0->f_14 != -1)
		{
			func_269(&(uParam0->f_14));
		}
	}
}

int func_275(int iParam0)
{
	if ((func_42(iParam0) || func_276(iParam0)) && func_223(func_224(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_276(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 7);
	}
	return 0;
}

void func_277(int iParam0, float fParam1, int iParam2)
{
	struct<8> Var0;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	
	if (fParam1 > 0f)
	{
		if (func_278(iParam0, &Var0))
		{
			Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			func_201(1);
			iVar12 = -1;
			iVar11 = 0;
			while (iVar11 < 20)
			{
				if (Global_2672855.f_1124[iVar11 /*30*/].f_6 == 0 || Global_2672855.f_1124[iVar11 /*30*/].f_6 == 7)
				{
					iVar12 = iVar11;
					iVar11 = 20;
				}
				iVar11++;
			}
			if (iVar12 != -1)
			{
				Global_2672855.f_1124[iVar12 /*30*/] = { Var8 };
				Global_2672855.f_1124[iVar12 /*30*/].f_6 = 1;
				Global_2672855.f_1124[iVar12 /*30*/].f_4 = func_200(Global_2672855.f_1124[iVar12 /*30*/], &Global_1574479, &Global_1574480);
				Global_2672855.f_1124[iVar12 /*30*/].f_5 = fParam1;
				Global_2672855.f_1124[iVar12 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
				Global_2672855.f_1124[iVar12 /*30*/].f_8 = iParam2;
				Global_2672855.f_1124[iVar12 /*30*/].f_14 = { Var0 };
				Global_2672855.f_1124[iVar12 /*30*/].f_9 = func_199();
				Global_2672855.f_1124[iVar12 /*30*/].f_10 = func_198();
			}
		}
	}
}

int func_278(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1", 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2", 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3", 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1", 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2", 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 1;
		
		case 7:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_D3", 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_279(int iParam0, int iParam1)
{
	func_209(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_210(iParam0, 0);
	}
}

int func_280(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_187())
	{
		return 0;
	}
	if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	if (Global_1882574)
	{
		if (Global_1882574.f_3.f_6 != iParam1)
		{
			bVar0 = true;
		}
		else if (Global_1882574.f_3 != iParam0)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1882574.f_3.f_3 != iParam4)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1882574.f_3.f_5 != iParam2)
		{
			bVar0 = true;
		}
		else if (Global_1882574.f_3.f_1 != iParam5)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1882574.f_3.f_4 != iParam7)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1882574.f_3.f_9 != iParam6)
		{
			bVar0 = true;
		}
		else if (Global_1882574.f_3.f_2 != func_286())
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_285(&(Global_1882574.f_3));
		STATS::PLAYSTATS_INVENTORY(&(Global_1882574.f_3));
		func_284();
	}
	Global_1882574 = 1;
	Global_1882574.f_3 = iParam0;
	if (func_282())
	{
		Global_1882574.f_3.f_2 = func_286();
	}
	Global_1882574.f_3.f_6 = iParam1;
	Global_1882574.f_3.f_5 = iParam2;
	Global_1882574.f_3.f_7 = (Global_1882574.f_3.f_7 + iParam3);
	Global_1882574.f_3.f_3 = iParam4;
	Global_1882574.f_3.f_1 = iParam5;
	Global_1882574.f_3.f_4 = iParam7;
	Global_1882574.f_3.f_9 = iParam6;
	if (((((iVar1 || Global_1882574.f_13 != Global_1882574.f_3) || Global_1882574.f_13.f_3 != Global_1882574.f_3.f_3) || Global_1882574.f_13.f_1 != Global_1882574.f_3.f_1) || Global_1882574.f_13.f_4 != Global_1882574.f_3.f_4) || (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1882574.f_3.f_8) >= 120)
	{
		if (Global_1882574.f_3 != 0)
		{
			Global_1882574.f_3.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
		else
		{
			Global_1882574.f_3.f_8 = 0;
		}
	}
	func_15(&(Global_1882574.f_1));
	func_21(&(Global_1882574.f_1), 0, 0);
}

int func_282()
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_283() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_283()
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

void func_284()
{
	Global_1882574.f_13 = { Global_1882574.f_3 };
	Global_1882574 = 0;
	Global_1882574.f_3 = 0;
	Global_1882574.f_3.f_2 = 0;
	Global_1882574.f_3.f_6 = 0;
	Global_1882574.f_3.f_5 = 0;
	Global_1882574.f_3.f_7 = 0;
	Global_1882574.f_3.f_3 = 0;
	Global_1882574.f_3.f_1 = 0;
	Global_1882574.f_3.f_4 = 0;
	Global_1882574.f_3.f_9 = 0;
	func_15(&(Global_1882574.f_1));
}

void func_285(var uParam0)
{
}

int func_286()
{
	struct<13> Var0;
	
	Var0 = { func_283() };
	return func_287(&Var0);
}

int func_287(var* uParam0)
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

int func_288(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_289()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_288(iVar0) != 2147483647)
		{
			if (func_217(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_290()
{
	Global_2684504.f_787.f_32 = 1;
}

void func_291()
{
	Global_2684504.f_787.f_28 = 1;
	Global_2684504.f_787.f_32 = 0;
	Global_2684504.f_787.f_31 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	func_15(&(Global_2684504.f_787.f_29));
}

char* func_292()
{
	if (func_14())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_293(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!NETWORK::IS_STORE_AVAILABLE_TO_USER())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_297(PLAYER::PLAYER_ID(), 1, 0))
	{
		return;
	}
	if (PAD::IS_CONTROL_PRESSED(2, 199) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 199))
	{
		return;
	}
	if (HUD::GET_PAUSE_MENU_STATE() != 0)
	{
		return;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return;
	}
	if (func_296())
	{
		return;
	}
	if (!func_294())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0)
	{
		if (!Global_101585.f_1482 && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			iVar0 = 18;
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", false, -1, 0, 0, true, 0);
			Global_2697525 = iParam1;
			Global_101585.f_1482 = 1;
			Global_101585.f_1483 = iParam2;
		}
	}
}

int func_294()
{
	if (func_295())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_295()
{
	return Global_2696683;
}

bool func_296()
{
	return Global_2697634;
}

int func_297(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_298(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845281[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_298(int iParam0)
{
	return func_299(iParam0);
}

var func_299(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

void func_300(int iParam0, int iParam1, int iParam2)
{
	Global_101585.f_1484 = iParam0;
	Global_101585.f_1485 = iParam1;
	Global_101585.f_1486 = iParam2;
}

int func_301(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (uParam0->f_47)
	{
		switch (uParam0->f_48)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
				{
					if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
					{
						if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_381(uParam0->f_12);
				func_309(&sVar4, cVar3, func_310(uParam0));
				if (func_306(78225582, iParam1, MISC::GET_HASH_KEY(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_304())
					{
						HUD::USE_FAKE_MP_CASH(true);
						HUD::CHANGE_FAKE_MP_CASH(-iVar0, -iVar1);
						uParam0->f_48 = 1;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				else
				{
					uParam0->f_48 = 3;
				}
				break;
			
			case 1:
				if (func_303(func_289()))
				{
					if (func_302(func_289()) == 2)
					{
						uParam0->f_48 = 2;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				break;
			
			case 2:
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				HUD::USE_FAKE_MP_CASH(false);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				uParam0->f_49 = 2;
				return 0;
				break;
			
			case 3:
				func_214(func_289());
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				HUD::USE_FAKE_MP_CASH(false);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				uParam0->f_49 = 0;
				return 0;
				break;
		}
		return 1;
	}
	uParam0->f_48 = 0;
	uParam0->f_49 = -1;
	return 0;
}

int func_302(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_303(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_304()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_222())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_289();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_87()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_305(Global_4535950[iVar2 /*85*/].f_66.f_6, Global_4535950[iVar2 /*85*/].f_66.f_4, Global_4535950[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4537456 = 1;
			}
			return 0;
		}
		if (Global_2697634)
		{
			if (Global_4535950[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4535950[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_288(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4535950[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4535950[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4535950[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4535950[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4535950[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_220(Global_4535950[iVar2 /*85*/], iVar2);
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	return 0;
}

int func_305(int iParam0, int iParam1, int iParam2)
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

int func_306(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_222())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_87()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_289();
	if (iVar1 == -1)
	{
		if (!func_308(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_307(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_4535950[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4535950[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4535950[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_222())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_87()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4535950[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4535950[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_ACTIVE())
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_END();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_219(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

void func_309(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_310(var uParam0)
{
	if (func_280(PLAYER::PLAYER_ID(), 1, 0) || func_311(PLAYER::PLAYER_ID()))
	{
		return 3;
	}
	else if (uParam0->f_50 >= 10 && uParam0->f_50 <= 14)
	{
		return 0;
	}
	else if (uParam0->f_50 >= 15 && uParam0->f_50 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

int func_311(int iParam0)
{
	if (iParam0 != func_187())
	{
		if (func_48(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_312(Global_2657971[iParam0 /*465*/].f_322.f_8) == 9;
			}
		}
	}
	return 0;
}

int func_312(int iParam0)
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
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
	}
	return -1;
}

void func_313(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_382(uParam0->f_12))
	{
		iVar1 = (func_317(uParam0->f_12) - func_133(func_316(uParam0->f_12), -1));
		func_281(1, func_315(uParam0->f_12), 1359863693, iVar1, func_385(), joaat("purchase"), 1, func_314(bParam1, joaat("pa"), 1037810546));
		func_129(func_316(uParam0->f_12), func_317(uParam0->f_12), -1, 1);
		bVar0 = true;
	}
	if (bVar0)
	{
		MONEY::NETWORK_BUY_ITEM(0, MISC::GET_HASH_KEY(func_381(uParam0->f_12)), 12, 1, false, 0, 0, 0, 0, true);
	}
	if (!bVar0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
}

int func_314(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_315(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return -251807494;
		
		case 1:
			return 1199442189;
		
		case 2:
			return 1486811039;
		
		case 4:
			return -181862273;
		
		case 0:
			return -39155154;
		
		case 5:
			return -1600998734;
		
		case 6:
			return 495696637;
		
		default:
	}
	return 0;
}

int func_316(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1276;
		
		case 1:
			return 1277;
		
		case 2:
			return 1278;
		
		case 4:
			return 1098;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		case 6:
			return 10405;
		
		default:
	}
	return 14835;
}

int func_317(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		case 6:
			return 10;
		
		default:
	}
	return 0;
}

void func_318(var uParam0, var uParam1, bool bParam2)
{
	char* sVar0;
	
	if (!uParam0->f_29)
	{
	}
	if (func_327(uParam0))
	{
		uParam0->f_27 = 0;
		func_326(&(uParam0->f_44));
		uParam0->f_12 = (uParam0->f_12 - 1);
		if (uParam0->f_12 < 0)
		{
			uParam0->f_12 = (uParam0->f_13 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_370(uParam0->f_12, 1, 1);
		sVar0 = func_368(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_369(sVar0, 0, 0);
		}
	}
	if (func_323(uParam0))
	{
		uParam0->f_27 = 0;
		func_326(&(uParam0->f_44));
		uParam0->f_12++;
		if (uParam0->f_12 > (uParam0->f_13 - 1))
		{
			uParam0->f_12 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_370(uParam0->f_12, 1, 1);
		sVar0 = func_368(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_369(sVar0, 0, 0);
		}
	}
	if (!uParam0->f_29)
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(func_375(uParam0, uParam0->f_12), false, true, false, -1, 0))
		{
			uParam0->f_28 = 1;
		}
		else
		{
			uParam0->f_28 = 0;
			uParam0->f_36 = 1;
		}
		uParam0->f_29 = 1;
	}
	if (!uParam0->f_30)
	{
		uParam0->f_31 = 1;
		if (uParam0->f_12 == 3)
		{
			uParam0->f_31 = func_133(1276, -1) < 30;
		}
		else if (uParam0->f_12 == 1)
		{
			uParam0->f_31 = func_133(1277, -1) < 15;
		}
		else if (uParam0->f_12 == 2)
		{
			uParam0->f_31 = func_133(1278, -1) < 5;
		}
		else if (uParam0->f_12 == 4)
		{
			uParam0->f_31 = func_133(1098, -1) < 20;
		}
		else if (uParam0->f_12 == 0)
		{
			uParam0->f_31 = func_133(62, -1) < 10;
		}
		else if (uParam0->f_12 == 5)
		{
			uParam0->f_31 = func_133(63, -1) < 10;
		}
		else if (uParam0->f_12 == 6)
		{
			if (Global_262145.f_116)
			{
				uParam0->f_31 = func_133(10405, -1) < 10;
			}
			else
			{
				uParam0->f_31 = 0;
			}
		}
		uParam0->f_30 = 1;
	}
	if (!uParam0->f_32)
	{
		if ((*uParam1)[uParam0->f_12] < 10)
		{
			uParam0->f_33 = 1;
		}
		else
		{
			uParam0->f_33 = 0;
			func_369("SNK_SOUT", 0, 0);
		}
		uParam0->f_32 = 1;
	}
	if (uParam0->f_27)
	{
		if (func_319(&(uParam0->f_44)) < 3f)
		{
			if (uParam0->f_35)
			{
				if (!bParam2)
				{
					func_369("SNK_BOUGHT", 0, 0);
				}
				else
				{
					func_369("SNK_STORED", 0, 0);
				}
			}
			else if (!uParam0->f_28)
			{
				func_369("SNK_AFFORD", 0, 0);
			}
			else if (!uParam0->f_33)
			{
				func_369("SNK_SOUT", 0, 0);
			}
			else if (!uParam0->f_31)
			{
				if (uParam0->f_12 == 3)
				{
					func_369("SNK_SNK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 1)
				{
					func_369("SNK_SNK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 2)
				{
					func_369("SNK_SNK3FU", 0, 0);
				}
				else if (uParam0->f_12 == 4)
				{
					func_369("SNK_SMOKFU", 0, 0);
				}
				else if (uParam0->f_12 == 0)
				{
					func_369("SNK_DRK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 5)
				{
					func_369("SNK_DRK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 6)
				{
					func_369("SNK_DRK7FU", 0, 0);
				}
				else
				{
					func_369("SNK_NEEDED", 0, 0);
				}
				MISC::SET_BIT(&(uParam0->f_53), 26);
			}
		}
		else
		{
			uParam0->f_27 = 0;
			uParam0->f_35 = 0;
			func_326(&(uParam0->f_44));
			sVar0 = func_368(uParam0->f_12);
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_369(sVar0, 0, 0);
			}
		}
	}
}

float func_319(var uParam0)
{
	if (func_322(uParam0))
	{
		if (func_321(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_320(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_320(bool bParam0)
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

bool func_321(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_322(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_323(var uParam0)
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		if (!func_322(&(uParam0->f_41)))
		{
			func_325(&(uParam0->f_41));
			return 1;
		}
		else if (func_324(&(uParam0->f_41)) > 0.25f)
		{
			func_419(&(uParam0->f_41));
			return 1;
		}
	}
	else if (func_322(&(uParam0->f_41)))
	{
		func_326(&(uParam0->f_41));
	}
	return 0;
}

float func_324(var uParam0)
{
	if (func_322(uParam0))
	{
		if (func_321(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_320(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_325(int* iParam0)
{
	if (!func_322(iParam0))
	{
		func_419(iParam0);
	}
}

void func_326(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_327(var uParam0)
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		if (!func_322(&(uParam0->f_38)))
		{
			func_325(&(uParam0->f_38));
			return 1;
		}
		else if (func_324(&(uParam0->f_38)) > 0.25f)
		{
			func_419(&(uParam0->f_38));
			return 1;
		}
	}
	else if (func_322(&(uParam0->f_38)))
	{
		func_326(&(uParam0->f_38));
	}
	return 0;
}

int func_328()
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (Global_4541816 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_329(int iParam0, int iParam1, bool bParam2)
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	if (Global_4541816 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4541816 = -1;
			return 0;
		}
	}
	if (((Global_4541816 > -1 || Global_4541816 == -3) || Global_4541816 == -2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}
	if (Global_4541816 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4541816 = -6;
			return 1;
		}
		else
		{
			HUD::SET_MOUSE_CURSOR_STYLE(3);
			return 0;
		}
	}
	HUD::SET_MOUSE_CURSOR_STYLE(1);
	return 0;
}

void func_330(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		Global_4541816 = -1;
		return;
	}
	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	fVar0 = Global_23828;
	fVar2 = (fVar0 + Global_23830);
	fVar3 = Global_23831.f_6333;
	fVar1 = (Global_23831.f_6333 - (IntToFloat(Global_23831.f_6335) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23831.f_6335 < 1)
	{
		fVar1 = (Global_23831.f_6333 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_333();
	if (Global_4541816 == -6)
	{
		return;
	}
	Global_4541816 = -1;
	fVar7 = Global_4541810;
	fVar8 = Global_4541811;
	if (Global_23831.f_6336 > Global_23831.f_6335)
	{
		if (((Global_4541810 >= fVar0 && Global_4541810 <= fVar2) && Global_4541811 >= fVar3) && Global_4541811 < (fVar3 + fVar6))
		{
			Global_4541816 = -2;
			if (bParam3)
			{
				func_332(0);
			}
			return;
		}
		if (((Global_4541810 >= fVar0 && Global_4541810 <= fVar2) && Global_4541811 >= (fVar3 + fVar6)) && Global_4541811 < (fVar3 + 0.034722f))
		{
			Global_4541816 = -3;
			if (bParam3)
			{
				func_332(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_23831.f_6336 == -1)
		{
			Global_4541816 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23831.f_6335);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_331(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23830, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4541816 = Global_23831.f_8737[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4541816 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4541816 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4541816 = -4;
		return;
	}
	Global_4541816 = -1;
}

void func_331(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

void func_332(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23828;
	fVar1 = Global_23831.f_6333;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4541816 == -2)
	{
		func_331(fVar0, fVar1, Global_23830, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4541816 == -3)
	{
		func_331(fVar0, (fVar1 + fVar2), Global_23830, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_333()
{
	Global_4541812 = Global_4541810;
	Global_4541813 = Global_4541811;
	Global_4541810 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4541811 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4541814 = (Global_4541810 - Global_4541812);
	Global_4541815 = (Global_4541811 - Global_4541813);
}

void func_334(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int* iVar47;
	int* iVar48;
	int* iVar49;
	int* iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int* iVar60;
	int* iVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	float fVar96;
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_171(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_365(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23831)
	{
		if (func_363(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23831 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23830;
	}
	fVar57 = (fParam5 * fVar58);
	if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_23829;
	}
	else
	{
		fVar59 = (((Global_23829 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_361(bParam7, &iVar60, &iVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23831.f_5821 <= 1)
		{
			func_377(Global_23831.f_5821 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23831.f_6617 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23831.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_23829;
			}
			else
			{
				if (Global_23831)
				{
					StringCopy(&cVar63, func_360(29), 64);
					StringCopy(&cVar79, func_358(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23831.f_7680[29 /*16*/])) == joaat("crew_logo"))
					{
						func_331(Global_23828, Global_23829, fParam5, fVar57, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23828 + (fParam5 * 0.5f)), (Global_23829 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23828 + (fParam5 * 0.5f)), (Global_23829 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23831.f_9086)
				{
					iVar1 = Global_23831.f_9082;
					iVar2 = Global_23831.f_9083;
					iVar3 = Global_23831.f_9084;
					iVar4 = Global_23831.f_9085;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_331(Global_23828, (Global_23829 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23829 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) != 0)
				{
					func_357();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23831.f_74)
					{
						if (Global_23831.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23831.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_14[iVar16], Global_23831.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23831.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23831.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23831.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23828 + 0.00390625f), ((Global_23829 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23831.f_6338)
				{
					func_357();
					func_355((((Global_23828 + fParam5) - 0.00390625f) - func_356("CM_ITEM_COUNT", Global_23831.f_6339, Global_23831.f_6340)), ((Global_23829 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23831.f_6339, Global_23831.f_6340);
				}
				else if (Global_23831.f_6334 > Global_23831.f_5828)
				{
					if (Global_23831.f_6337 != 0)
					{
						func_357();
						func_355((((Global_23828 + fParam5) - 0.00390625f) - func_356("CM_ITEM_COUNT", Global_23831.f_6337, Global_23831.f_6336)), ((Global_23829 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23831.f_6337, Global_23831.f_6336);
					}
				}
			}
			iVar6 = Global_23831.f_6341;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23831.f_9096)
			{
				iVar1 = Global_23831.f_9092;
				iVar2 = Global_23831.f_9093;
				iVar3 = Global_23831.f_9094;
				iVar4 = Global_23831.f_9095;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23831.f_5828 && iVar6 <= Global_23831.f_5821)
			{
				if (iVar6 >= 0)
				{
					if (Global_23831.f_6088[iVar6])
					{
						if (Global_23831.f_5959[iVar6] && iVar6 != Global_23831.f_6341)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23831.f_6348[iVar6] != 0f)
						{
							fVar56 = Global_23831.f_6348[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23831.f_6334 > Global_23831.f_5828)
			{
				if (Global_23831.f_9101)
				{
					iVar1 = Global_23831.f_9097;
					iVar2 = Global_23831.f_9098;
					iVar3 = Global_23831.f_9099;
					iVar4 = Global_23831.f_9100;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_331(Global_23828, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23831.f_9114)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23831.f_5241)) != 0 && Global_23831.f_5323 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23828 + 0.0046875f);
				if (Global_23831.f_5325 != 0)
				{
					func_363(Global_23831.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23828 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_354(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_331(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_354(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23831.f_5325 != 0)
				{
					func_363(Global_23831.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					func_353(Global_23831.f_5325, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_360(Global_23831.f_5325), func_358(Global_23831.f_5325, 1), ((Global_23828 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_5247)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_354(fVar42);
					fVar96 = 0.35f;
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23831.f_5247))) > 600)
					{
						fVar96 = (0.35f * 0.625f);
					}
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5247));
					iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
					HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_331(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23831.f_9106)
					{
						iVar1 = Global_23831.f_9102;
						iVar2 = Global_23831.f_9103;
						iVar3 = Global_23831.f_9104;
						iVar4 = Global_23831.f_9105;
					}
					else
					{
						HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, false, 0);
					func_354(fVar42);
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5247));
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23831.f_5323 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23831.f_5324) > Global_23831.f_5323)
					{
						StringCopy(&(Global_23831.f_5241), "", 24);
						Global_23831.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_5247)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23828 + 0.0046875f);
				fVar97 = 0.35f;
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23831.f_5247))) > 600)
				{
					fVar97 = (0.35f * 0.625f);
				}
				func_354(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5247));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_331(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, false, 0);
				func_354(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5247));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (MISC::GET_HASH_KEY(&(Global_4541740.f_21)) != 0 && Global_4541740.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23828 + 0.0046875f);
				if (Global_4541740.f_67 != 0)
				{
					func_363(Global_4541740.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23828 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_354(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4541740.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541740.f_61)
				{
					if (Global_4541740.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541740.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541740.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4541740.f_34[iVar16], Global_4541740.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541740.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_331(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_354(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4541740.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541740.f_61)
				{
					if (Global_4541740.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541740.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541740.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4541740.f_34[iVar16], Global_4541740.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541740.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4541740.f_67 != 0)
				{
					func_363(Global_4541740.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_353(Global_4541740.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_360(Global_4541740.f_67), func_358(Global_4541740.f_67, 1), ((Global_23828 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4541740.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4541740.f_66) > Global_4541740.f_65)
					{
						StringCopy(&(Global_4541740.f_21), "", 16);
						Global_4541740.f_65 = -1;
					}
				}
			}
			func_348(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23831.f_6331)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_23831.f_5821;
			if (Global_23831.f_6332)
			{
				iVar98 = (Global_23831.f_6335 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_23831.f_6348[iVar6] != 0f)
				{
					fVar56 = Global_23831.f_6348[iVar6];
				}
				if (Global_23831.f_6332)
				{
					iVar6 = Global_23831.f_8737[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23831.f_6341 && iVar9 < Global_23831.f_5828)
				{
					bVar33 = true;
					if (Global_23831.f_6342 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_23831.f_5959[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23831.f_6482[iVar6] = fVar35;
				fVar34 = (Global_23828 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23831.f_6342 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_23831.f_9108)
					{
						HUD::GET_HUD_COLOUR(Global_23831.f_9107, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23828 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, false, 0);
					Global_23831.f_6480 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23831.f_5829)
				{
					if (BitTest(Global_23831.f_5692[iVar6], iVar8) || Global_23831.f_5659[iVar8] == 5)
					{
						if (Global_23831.f_6332)
						{
							iVar19 = Global_23831.f_8753[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar20 = Global_23831.f_8794[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar21 = Global_23831.f_8835[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar22 = Global_23831.f_8876[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar23 = Global_23831.f_8917[((iVar9 * Global_23831.f_5829) + iVar8)];
						}
						else
						{
							Global_23831.f_8753[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar19;
							Global_23831.f_8794[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar20;
							Global_23831.f_8835[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar21;
							Global_23831.f_8876[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar22;
							Global_23831.f_8917[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_23831.f_6614[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23831.f_6611[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_23831.f_6614[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23831.f_6611[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_23831.f_5665[iVar8] != -1f)
						{
							fVar34 = ((Global_23828 + 0.0046875f) + Global_23831.f_5665[iVar8]);
						}
						if ((iVar8 < 4 && Global_23831.f_5665[iVar8 + 1] != -1f) && fVar34 < Global_23831.f_5665[iVar8 + 1])
						{
							fVar46 = (Global_23831.f_5665[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23828 + Global_23830) - 0.0046875f) - fVar34);
						}
						if ((Global_23831.f_5678[iVar8] && Global_23831.f_6477) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23831.f_5659[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23831.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_346(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, iVar106, bVar53, bVar52);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23831.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[(iVar21 + iVar27)], Global_23831.f_4855[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_363(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23831.f_4984[(iVar22 + iVar14)] == 2 || Global_23831.f_4984[(iVar22 + iVar14)] == 54) || Global_23831.f_4984[(iVar22 + iVar14)] == 64)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar43;
										Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar44;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_23831.f_5686[iVar101] == 2)
												{
													Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar101)] = (Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar101)] - Global_23831.f_5671[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar43 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar44 = Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_363(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_363(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_353(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_360(26), func_358(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_363(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_363(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_353(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_360(27), func_358(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23831.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_346(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_345(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[(iVar21 + iVar27)], Global_23831.f_4855[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23831.f_4984[(iVar22 + iVar28)] == 2 || Global_23831.f_4984[(iVar22 + iVar28)] == 54) || Global_23831.f_4984[(iVar22 + iVar28)] == 64)
											{
												if (func_363(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_363(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_353(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23831.f_5686[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_360(Global_23831.f_4984[(iVar22 + iVar28)]), func_358(Global_23831.f_4984[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_360(Global_23831.f_4984[(iVar22 + iVar28)]), func_358(Global_23831.f_4984[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23831.f_5686[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_344() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23831.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_346(0, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23831.f_6341 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23831.f_4984[(iVar22 + iVar14)] != 2 && Global_23831.f_4984[(iVar22 + iVar14)] != 54) && Global_23831.f_4984[(iVar22 + iVar14)] != 64)
											{
												if (func_363(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_363(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_353(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23831.f_4984[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_360(Global_23831.f_4984[(iVar22 + iVar14)]), func_358(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), (Global_23828 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else if (Global_23831.f_5686[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_360(Global_23831.f_4984[(iVar22 + iVar14)]), func_358(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_360(Global_23831.f_4984[(iVar22 + iVar14)]), func_358(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										func_346(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_345(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[iVar20]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar43 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_363(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_363(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_353(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_360(26), func_358(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_363(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_363(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_353(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_360(27), func_358(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_346(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
										func_343((fVar34 + fVar42), fVar35, "NUMBER", Global_23831.f_4469[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										func_346(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_345(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[iVar21], Global_23831.f_4855[iVar21]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar43 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_363(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_363(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_353(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_360(26), func_358(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_363(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_363(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_353(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_360(27), func_358(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									func_346(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
									func_342((fVar34 + fVar42), fVar35, "NUMBER", Global_23831.f_4726[iVar21], Global_23831.f_4855[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_363(Global_23831.f_4984[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23831.f_6332)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23831.f_5686[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
											Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
											fVar44 = Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)];
										}
										if (bVar54)
										{
											if (func_363(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23831.f_5686[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_363(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_353(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_360(26), func_358(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
											if (func_363(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_363(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_353(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_360(27), func_358(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_363(Global_23831.f_4984[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_353(Global_23831.f_4984[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_360(Global_23831.f_4984[iVar22]), func_358(Global_23831.f_4984[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_341(Global_23831.f_4984[iVar22])), (fVar37 * func_341(Global_23831.f_4984[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_23831.f_5659[iVar8] == 5)
						{
							if (Global_23831.f_5671[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
							if (Global_23831.f_5678[iVar8])
							{
								if (func_363(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23831.f_8737[iVar9] = iVar6;
						Global_23831.f_6343 = iVar6;
						iVar9++;
						if (Global_23831.f_5959[iVar6])
						{
							iVar13++;
						}
						if (Global_23831.f_6348[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_23831.f_6348[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_23831.f_6331)
					{
						Global_23831.f_6088[iVar6] = 1;
						if (Global_23831.f_5830[iVar6])
						{
							if (bVar32)
							{
								Global_23831.f_6337 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23831.f_6337 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23831.f_6331)
			{
				Global_23831.f_6333 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_23831.f_6336 = iVar11;
				Global_23831.f_6334 = iVar10;
				Global_23831.f_6331 = 1;
			}
		}
		if (!Global_23831.f_6332)
		{
			Global_23831.f_6335 = iVar9;
			Global_23831.f_6332 = 1;
		}
		iVar5++;
	}
	Global_23831.f_6479 = fVar51;
	Global_23831.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23831.f_6479);
	if (!Global_23831.f_9081)
	{
		func_336(0);
	}
	Global_23831.f_9081 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_335(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_335(int iParam0)
{
	Global_1670224.f_1163 = iParam0;
}

void func_336(int iParam0)
{
	if (func_340())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_175(0))
		{
			func_337(iParam0);
		}
		MISC::SET_BIT(&Global_8801, 2);
	}
}

void func_337(int iParam0)
{
	if (func_340())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_339())
		{
			func_338(1, 1);
		}
		else
		{
			func_338(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8801, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 30);
	}
	if (!func_244())
	{
		Global_20930.f_1 = 3;
	}
}

void func_338(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_175(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
}

bool func_339()
{
	return BitTest(Global_1956920, 5);
}

bool func_340()
{
	return BitTest(Global_1956920, 19);
}

float func_341(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 56:
		case 47:
		case 48:
		case 49:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_342(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_343(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_344()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_345(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23831.f_9109[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23831.f_9109[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_346(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_347(Global_23831.f_6614[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_347(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_348(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_171(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_365(bParam4, bParam8))
	{
		return;
	}
	if (func_351())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_85(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return;
		}
	}
	if (Global_23831.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (Global_23831.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23831.f_5625[iVar1], true), 64);
				}
				else if (Global_23831.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23831.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23831.f_5327 = 0;
		}
		if (!Global_23831.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23831.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_23831.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_350(&(Global_23831.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23831.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_350(&(Global_23831.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23831.f_5610[iVar1] == -1)
					{
						func_349(&(Global_23831.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23831.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23831.f_5553[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23831.f_5625[iVar1] != 365 && BitTest(Global_23831.f_5655, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23831.f_5625[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4541740.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23831.f_5326);
				func_350(&Global_4541740);
				if (Global_4541740.f_20 == -1)
				{
					func_349(&(Global_4541740.f_16));
				}
				else
				{
					iVar4 = Global_23831.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541740.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23831.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23831.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23831.f_5326)
		{
			if (Global_23831.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23831.f_5553[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4541740.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541740.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23831.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23831.f_9116 = 1;
			}
		}
		else if (Global_23831.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23831.f_9116 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23831.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23831.f_6263[iVar0 /*10*/], Global_23831.f_5656, Global_23831.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23831.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_349(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_350(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_351()
{
	struct<3> Var0;
	
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	if (func_352())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20875 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
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

int func_352()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_353(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 56:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 47:
		case 48:
		case 49:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 57:
			*iParam5 = 100;
			break;
		
		case 65:
			*iParam5 = 100;
			break;
		
		case 58:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_354(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23828 + Global_23830) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_355(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_356(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_357();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_357()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23831.f_9091)
	{
		iVar0 = Global_23831.f_9087;
		iVar1 = Global_23831.f_9088;
		iVar2 = Global_23831.f_9089;
		iVar3 = Global_23831.f_9090;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23828 + 0.0046875f), ((Global_23828 + Global_23830) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

var func_358(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_7680[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23831.f_7680[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var19 = { func_69(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_359(&uVar3);
			}
		}
		else
		{
			return func_359(&(Global_23831.f_7680[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 54:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 55:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 57:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 58:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 61:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 62:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 65:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 64:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_359(var uParam0)
{
	return uParam0;
}

char* func_360(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_6623[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23831.f_6623[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var16 = { func_69(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_359(&uVar0);
		}
		else
		{
			return func_359(&(Global_23831.f_6623[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 54)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_361(bool bParam0, int* iParam1, int* iParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (func_362(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = SYSTEM::ROUND((fVar1 * fVar2));
		*iParam2 = SYSTEM::ROUND(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*iParam1 = SYSTEM::ROUND((fVar0 / *fParam3));
	*iParam2 = SYSTEM::ROUND((fVar1 / *fParam3));
}

bool func_362(int iParam0, int iParam1)
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_363(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_360(iParam0), 64);
	StringCopy(&cVar16, func_358(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_361(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_364(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23831.f_7680[29 /*16*/])) == joaat("crew_logo"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23830)
			{
				*fParam4 = (*fParam4 * (Global_23830 / *fParam3));
				*fParam3 = Global_23830;
			}
		}
		return 1;
	}
	return 0;
}

float func_364(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 65:
			return 0.5f;
			break;
		
		case 64:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_365(bool bParam0, bool bParam1)
{
	if (Global_2672855.f_1728.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_254(8, -1) && func_366() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_79650) || Global_23831.f_9115) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_101585.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_366()
{
	return Global_1575011;
}

void func_367(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, true);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_23831.f_5655), Global_23831.f_5326);
	}
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = iParam0;
	Global_23831.f_5640[Global_23831.f_5326] = 32;
	Global_23831.f_5326++;
}

char* func_368(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 7;
	}
	switch (iVar0)
	{
		case 7:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		case 6:
			return "SNK_ITEM7_D";
		
		default:
	}
	return "";
}

void func_369(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_23831.f_5241), sParam0, 24);
	Global_23831.f_5319 = 0;
	Global_23831.f_5320 = 0;
	Global_23831.f_5321 = 0;
	Global_23831.f_5322 = 0;
	Global_23831.f_5323 = iParam1;
	Global_23831.f_5324 = MISC::GET_GAME_TIMER();
	Global_23831.f_5325 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5253[iVar0] = 0;
		iVar0++;
	}
}

void func_370(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23831.f_6342 = uParam0;
	Global_23831.f_6477 = iParam2;
	if (Global_23831.f_6342 < Global_23831.f_6341)
	{
		Global_23831.f_6341 = Global_23831.f_6342;
	}
	else if ((Global_23831.f_6332 && Global_23831.f_6342 > Global_23831.f_6343) || (!Global_23831.f_6332 && Global_23831.f_6342 >= (Global_23831.f_6341 + Global_23831.f_5828)))
	{
		iVar0 = Global_23831.f_6341;
		while (iVar0 <= Global_23831.f_6342)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23831.f_5692[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23831.f_5828 && Global_23831.f_6341 < 128)
		{
			Global_23831.f_6341++;
			iVar1 = 0;
			iVar0 = Global_23831.f_6341;
			while (iVar0 <= Global_23831.f_6342)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23831.f_5692[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23831.f_5241), "", 24);
		StringCopy(&(Global_4541740.f_21), "", 16);
	}
}

void func_371(int iParam0)
{
	Global_23831.f_6341 = iParam0;
}

void func_372(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23831.f_5825 >= 256)
	{
		return;
	}
	if (Global_23831.f_6346 >= 4)
	{
		return;
	}
	if (Global_23831.f_6347 != 1)
	{
		return;
	}
	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		return;
	}
	Global_23831.f_4469[Global_23831.f_5825] = uParam0;
	Global_23831.f_5825++;
	Global_23831.f_2387[Global_23831.f_6345 /*5*/][Global_23831.f_6346] = 2;
	Global_23831.f_6346++;
	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		fVar0 = func_374();
		if (Global_23831.f_5678[Global_23831.f_5822] && Global_23831.f_6346 == Global_23831.f_6344)
		{
			func_363(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23831.f_5671[(Global_23831.f_5822 - 1)])
		{
			Global_23831.f_5671[(Global_23831.f_5822 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23831.f_6346 >= Global_23831.f_6344)
		{
			fVar3 = func_373();
			if (fVar3 > Global_23831.f_6348[Global_23831.f_5821])
			{
				Global_23831.f_6348[Global_23831.f_5821] = fVar3;
			}
		}
	}
}

float func_373()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23831.f_6346)
	{
		if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23831.f_4984[((Global_23831.f_5827 - iVar1) + iVar0)] != 0)
		{
			if (func_363(Global_23831.f_4984[((Global_23831.f_5827 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_374()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23831.f_6346)
	{
		if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_346(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
	{
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23831.f_79[Global_23831.f_6345 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23831.f_6346)
	{
		if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(Global_23831.f_6345 + iVar8) /*6*/]));
			}
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(Global_23831.f_6345 + iVar8) /*6*/]));
			}
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[((Global_23831.f_5825 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[((Global_23831.f_5826 - iVar4) + iVar10)], Global_23831.f_4855[((Global_23831.f_5826 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[((Global_23831.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696723[((Global_23831.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[((Global_23831.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[((Global_23831.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
	{
		fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23831.f_4984[((Global_23831.f_5827 - iVar5) + iVar7)] != 0)
		{
			func_363(Global_23831.f_4984[((Global_23831.f_5827 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_375(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	switch (func_310(uParam0))
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return Global_262145.f_123;
				
				case 6:
					return Global_262145.f_121;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return Global_262145.f_123;
				
				case 6:
					return Global_262145.f_121;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return Global_262145.f_124;
				
				case 6:
					return Global_262145.f_122;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

void func_376(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23831.f_5827 >= 256)
	{
		return;
	}
	if (Global_23831.f_6346 >= 4)
	{
		return;
	}
	if (Global_23831.f_6347 != 1)
	{
		return;
	}
	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		return;
	}
	Global_23831.f_4984[Global_23831.f_5827] = iParam0;
	Global_23831.f_5827++;
	Global_23831.f_2387[Global_23831.f_6345 /*5*/][Global_23831.f_6346] = 4;
	Global_23831.f_6346++;
	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		fVar0 = func_374();
		if (Global_23831.f_5678[Global_23831.f_5822] && Global_23831.f_6346 == Global_23831.f_6344)
		{
			func_363(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23831.f_5671[(Global_23831.f_5822 - 1)])
		{
			Global_23831.f_5671[(Global_23831.f_5822 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23831.f_6346 >= Global_23831.f_6344)
		{
			fVar3 = func_373();
			if (fVar3 > Global_23831.f_6348[Global_23831.f_5821])
			{
				Global_23831.f_6348[Global_23831.f_5821] = fVar3;
			}
		}
	}
}

void func_377(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23831.f_5821 > iParam0)
	{
		return;
	}
	if (Global_23831.f_5821 >= 128)
	{
		return;
	}
	if (Global_23831.f_5823 >= 256)
	{
		return;
	}
	if (Global_23831.f_6346 < Global_23831.f_6344)
	{
		return;
	}
	if (Global_23831.f_5821 != iParam0)
	{
		Global_23831.f_5821 = iParam0;
		Global_23831.f_5822 = 0;
	}
	iVar0 = Global_23831.f_5659[Global_23831.f_5822];
	if (iVar0 != 1)
	{
		while (Global_23831.f_5822 < 4 && iVar0 != 1)
		{
			Global_23831.f_5822++;
			iVar0 = Global_23831.f_5659[Global_23831.f_5822];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_23831.f_1616[Global_23831.f_5823] = bParam3;
	Global_23831.f_1873[Global_23831.f_5823] = iParam4;
	Global_23831.f_2130[Global_23831.f_5823] = iParam6;
	Global_23831.f_5823++;
	if (!bParam3)
	{
		func_380(Global_23831.f_5821, 1);
	}
	else
	{
		func_380(Global_23831.f_5821, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_379(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]));
		if (Global_23831.f_5678[Global_23831.f_5822])
		{
			func_363(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23831.f_5671[Global_23831.f_5822])
		{
			Global_23831.f_5671[Global_23831.f_5822] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_378(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]));
			if (fVar4 > Global_23831.f_6348[iParam0])
			{
				Global_23831.f_6348[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_23831.f_5692[iParam0]), Global_23831.f_5822);
	Global_23831.f_5822++;
	Global_23831.f_6347 = 1;
	Global_23831.f_6345 = (Global_23831.f_5823 - 1);
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = iParam2;
}

float func_378(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_379(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_346(0, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_380(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23831.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23831.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
}

char* func_381(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		case 6:
			return "SNK_ITEM7";
		
		default:
	}
	return "";
}

int func_382(int iParam0)
{
	if (func_133(func_316(iParam0), -1) >= func_317(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_383(char* sParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)
{
	bool bVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = false;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam2))
	{
		iVar1 = -1;
	}
	else
	{
		iVar1 = MISC::GET_HASH_KEY(&cParam2);
	}
	STATS::_PLAYSTATS_SHOPMENU_NAV(MISC::GET_HASH_KEY(sParam0), iParam1, func_384(bVar0), iVar1);
}

int func_384(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_385()
{
	return MISC::GET_HASH_KEY(func_386());
}

char* func_386()
{
	int iVar0;
	int iVar1;
	
	if (func_401())
	{
		return func_399(func_400(PLAYER::PLAYER_ID()));
	}
	else if (Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_35 != -1)
	{
		return func_398(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_35);
	}
	else if (func_397(PLAYER::PLAYER_ID()))
	{
		return "SIMEON_SHOWROOM";
	}
	else if (func_395(PLAYER::PLAYER_ID()))
	{
		return "BEACH_PARTY";
	}
	else if (func_394())
	{
		return "ARENA_BOX";
	}
	else if (Global_2738934.f_6019.f_1 && Global_1979161 != -1)
	{
		return func_393(Global_1979161);
	}
	else if (Global_101585.f_393 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 18)
		{
			iVar1 = func_392(iVar0);
			if (BitTest(Global_101585.f_1414[iVar1], 5))
			{
				return func_391(iVar0);
			}
			iVar0++;
		}
	}
	return func_387();
}

char* func_387()
{
	char cVar0[24];
	
	if (func_48(PLAYER::PLAYER_ID(), 1, 1))
	{
		StringCopy(&cVar0, "FREEMODE_", 24);
		StringConCat(&cVar0, func_389(ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true))), 24);
		return func_388(&cVar0);
	}
	return "FREEMODE_DEAD";
}

var func_388(char[4] cParam0)
{
	return cParam0;
}

char* func_389(char* sParam0)
{
	struct<8> Var0;
	char cVar16[64];
	char cVar32[64];
	int iVar48;
	
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			iVar48 = 0;
			iVar48 = 0;
			while (iVar48 <= (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) - 1))
			{
				StringCopy(&Var0, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar48, iVar48 + 1), 64);
				StringCopy(&cVar16, func_390(&Var0), 64);
				StringConCat(&cVar32, &cVar16, 64);
				iVar48++;
			}
			return HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cVar32, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar32));
		}
	}
	return sParam0;
}

char* func_390(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) == 1)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "a") || MISC::ARE_STRINGS_EQUAL(sParam0, "A"))
			{
				return "A";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "b") || MISC::ARE_STRINGS_EQUAL(sParam0, "B"))
			{
				return "B";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "c") || MISC::ARE_STRINGS_EQUAL(sParam0, "C"))
			{
				return "C";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "d") || MISC::ARE_STRINGS_EQUAL(sParam0, "D"))
			{
				return "D";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "e") || MISC::ARE_STRINGS_EQUAL(sParam0, "E"))
			{
				return "E";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "f") || MISC::ARE_STRINGS_EQUAL(sParam0, "F"))
			{
				return "F";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "g") || MISC::ARE_STRINGS_EQUAL(sParam0, "G"))
			{
				return "G";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "h") || MISC::ARE_STRINGS_EQUAL(sParam0, "H"))
			{
				return "H";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "i") || MISC::ARE_STRINGS_EQUAL(sParam0, "I"))
			{
				return "I";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "j") || MISC::ARE_STRINGS_EQUAL(sParam0, "J"))
			{
				return "J";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "k") || MISC::ARE_STRINGS_EQUAL(sParam0, "K"))
			{
				return "K";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "l") || MISC::ARE_STRINGS_EQUAL(sParam0, "L"))
			{
				return "L";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "m") || MISC::ARE_STRINGS_EQUAL(sParam0, "M"))
			{
				return "M";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "n") || MISC::ARE_STRINGS_EQUAL(sParam0, "N"))
			{
				return "N";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "o") || MISC::ARE_STRINGS_EQUAL(sParam0, "O"))
			{
				return "O";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "p") || MISC::ARE_STRINGS_EQUAL(sParam0, "P"))
			{
				return "P";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "q") || MISC::ARE_STRINGS_EQUAL(sParam0, "Q"))
			{
				return "Q";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "r") || MISC::ARE_STRINGS_EQUAL(sParam0, "R"))
			{
				return "R";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "s") || MISC::ARE_STRINGS_EQUAL(sParam0, "S"))
			{
				return "S";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "t") || MISC::ARE_STRINGS_EQUAL(sParam0, "T"))
			{
				return "T";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "u") || MISC::ARE_STRINGS_EQUAL(sParam0, "U"))
			{
				return "U";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "v") || MISC::ARE_STRINGS_EQUAL(sParam0, "V"))
			{
				return "V";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "w") || MISC::ARE_STRINGS_EQUAL(sParam0, "W"))
			{
				return "W";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "x") || MISC::ARE_STRINGS_EQUAL(sParam0, "X"))
			{
				return "X";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "y") || MISC::ARE_STRINGS_EQUAL(sParam0, "Y"))
			{
				return "Y";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "z") || MISC::ARE_STRINGS_EQUAL(sParam0, "Z"))
			{
				return "Z";
			}
		}
	}
	return sParam0;
}

char* func_391(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GUN_SHOP_01_DT";
		
		case 1:
			return "GUN_SHOP_02_SS";
		
		case 2:
			return "GUN_SHOP_03_HW";
		
		case 3:
			return "GUN_SHOP_04_ELS";
		
		case 4:
			return "GUN_SHOP_05_PB";
		
		case 5:
			return "GUN_SHOP_06_LS";
		
		case 6:
			return "GUN_SHOP_07_MW";
		
		case 7:
			return "GUN_SHOP_08_CS";
		
		case 8:
			return "GUN_SHOP_09_GOH";
		
		case 9:
			return "GUN_SHOP_10_VWH";
		
		case 10:
			return "GUN_SHOP_11_ID1";
		
		case 11:
			return "GUN_SHOP_ARMORY";
		
		case 12:
			return "GUN_SHOP_ARMORY_AVENGER";
		
		case 13:
			return "GUN_SHOP_ARMORY_HACKER_TRUCK";
		
		case 14:
			return "GUN_SHOP_ARMORY_ARENA";
		
		case 15:
			return "GUN_SHOP_ARMORY_ARCADE";
		
		case 16:
			return "GUN_SHOP_ARMORY_SUB";
		
		case 17:
			return "GUN_SHOP_ARMORY_FIXER";
		
		case 18:
			return "GUN_SHOP_ARMORY_JUGGALO";
		
		case 19:
			return "GUN_SHOP_ARMORY_HANGAR";
		
		default:
	}
	return "";
}

int func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 28;
		
		case 1:
			return 29;
		
		case 2:
			return 30;
		
		case 3:
			return 31;
		
		case 4:
			return 32;
		
		case 5:
			return 33;
		
		case 6:
			return 34;
		
		case 7:
			return 35;
		
		case 8:
			return 36;
		
		case 9:
			return 37;
		
		case 10:
			return 38;
		
		case 11:
			return 46;
		
		case 12:
			return 47;
		
		case 13:
			return 48;
		
		case 14:
			return 49;
		
		case 15:
			return 52;
		
		case 16:
			return 53;
		
		case 17:
			return 56;
		
		case 18:
			return 59;
		
		case 19:
			return 60;
		
		default:
	}
	return -1;
}

char* func_393(int iParam0)
{
	switch (iParam0)
	{
		case -2:
			return "SHOP_ROBBERIES_SHOP_CONV_10";
		
		case 0:
			return "SHOP_ROBBERIES_SHOP_GAS_1";
		
		case 1:
			return "SHOP_ROBBERIES_SHOP_GAS_2";
		
		case 2:
			return "SHOP_ROBBERIES_SHOP_GAS_3";
		
		case 3:
			return "SHOP_ROBBERIES_SHOP_GAS_4";
		
		case 4:
			return "SHOP_ROBBERIES_SHOP_GAS_5";
		
		case 5:
			return "SHOP_ROBBERIES_SHOP_LIQ_1";
		
		case 6:
			return "SHOP_ROBBERIES_SHOP_LIQ_2";
		
		case 7:
			return "SHOP_ROBBERIES_SHOP_LIQ_3";
		
		case 8:
			return "SHOP_ROBBERIES_SHOP_LIQ_4";
		
		case 9:
			return "SHOP_ROBBERIES_SHOP_LIQ_5";
		
		case 10:
			return "SHOP_ROBBERIES_SHOP_CONV_1";
		
		case 11:
			return "SHOP_ROBBERIES_SHOP_CONV_2";
		
		case 12:
			return "SHOP_ROBBERIES_SHOP_CONV_3";
		
		case 13:
			return "SHOP_ROBBERIES_SHOP_CONV_4";
		
		case 14:
			return "SHOP_ROBBERIES_SHOP_CONV_5";
		
		case 15:
			return "SHOP_ROBBERIES_SHOP_CONV_6";
		
		case 16:
			return "SHOP_ROBBERIES_SHOP_CONV_7";
		
		case 17:
			return "SHOP_ROBBERIES_SHOP_CONV_8";
		
		case 18:
			return "SHOP_ROBBERIES_SHOP_CONV_9";
		
		default:
	}
	return "SHOP_ROBBERIES_SHOP_NONE";
}

bool func_394()
{
	return Global_2707763;
}

bool func_395(int iParam0)
{
	return func_396(&(Global_2657971[iParam0 /*465*/].f_444), 0);
}

var func_396(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

int func_397(int iParam0)
{
	if (iParam0 != func_187())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_5, 25);
	}
	return 0;
}

char* func_398(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "PROPERTY_HIGH_APT_1";
		
		case 2:
			return "PROPERTY_HIGH_APT_2";
		
		case 3:
			return "PROPERTY_HIGH_APT_3";
		
		case 4:
			return "PROPERTY_HIGH_APT_4";
		
		case 5:
			return "PROPERTY_HIGH_APT_5";
		
		case 6:
			return "PROPERTY_HIGH_APT_6";
		
		case 7:
			return "PROPERTY_HIGH_APT_7";
		
		case 8:
			return "PROPERTY_MEDIUM_APT_1";
		
		case 9:
			return "PROPERTY_MEDIUM_APT_2";
		
		case 10:
			return "PROPERTY_MEDIUM_APT_3";
		
		case 11:
			return "PROPERTY_MEDIUM_APT_4";
		
		case 12:
			return "PROPERTY_MEDIUM_APT_5";
		
		case 13:
			return "PROPERTY_MEDIUM_APT_6";
		
		case 14:
			return "PROPERTY_MEDIUM_APT_7";
		
		case 15:
			return "PROPERTY_MEDIUM_APT_8";
		
		case 16:
			return "PROPERTY_MEDIUM_APT_9";
		
		case 17:
			return "PROPERTY_LOW_APT_1";
		
		case 18:
			return "PROPERTY_LOW_APT_2";
		
		case 19:
			return "PROPERTY_LOW_APT_3";
		
		case 20:
			return "PROPERTY_LOW_APT_4";
		
		case 21:
			return "PROPERTY_LOW_APT_5";
		
		case 22:
			return "PROPERTY_LOW_APT_6";
		
		case 23:
			return "PROPERTY_LOW_APT_7";
		
		case 24:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_1";
		
		case 25:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_2";
		
		case 26:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_3";
		
		case 27:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_4";
		
		case 28:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_5";
		
		case 29:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_6";
		
		case 30:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_7";
		
		case 31:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_8";
		
		case 32:
			return "PROPERTY_GARAGE_SOUTH_LOS_SANTOS_1";
		
		case 33:
			return "PROPERTY_GARAGE_SOUTH_LOS_SANTOS_2";
		
		case 34:
			return "PROPERTY_HIGH_APT_8";
		
		case 35:
			return "PROPERTY_HIGH_APT_9";
		
		case 36:
			return "PROPERTY_HIGH_APT_10";
		
		case 37:
			return "PROPERTY_HIGH_APT_11";
		
		case 38:
			return "PROPERTY_HIGH_APT_12";
		
		case 39:
			return "PROPERTY_HIGH_APT_13";
		
		case 40:
			return "PROPERTY_HIGH_APT_14";
		
		case 41:
			return "PROPERTY_HIGH_APT_15";
		
		case 42:
			return "PROPERTY_HIGH_APT_16";
		
		case 43:
			return "PROPERTY_HIGH_APT_17";
		
		case 44:
			return "PROPERTY_GARAGE_NEW_1";
		
		case 45:
			return "PROPERTY_GARAGE_NEW_2";
		
		case 46:
			return "PROPERTY_GARAGE_NEW_3";
		
		case 47:
			return "PROPERTY_GARAGE_NEW_5";
		
		case 48:
			return "PROPERTY_GARAGE_NEW_6";
		
		case 49:
			return "PROPERTY_GARAGE_NEW_7";
		
		case 50:
			return "PROPERTY_GARAGE_NEW_8";
		
		case 51:
			return "PROPERTY_GARAGE_NEW_9";
		
		case 52:
			return "PROPERTY_GARAGE_NEW_14";
		
		case 53:
			return "PROPERTY_GARAGE_NEW_16";
		
		case 54:
			return "PROPERTY_GARAGE_NEW_17";
		
		case 55:
			return "PROPERTY_GARAGE_NEW_18";
		
		case 56:
			return "PROPERTY_GARAGE_NEW_19";
		
		case 57:
			return "PROPERTY_GARAGE_NEW_20";
		
		case 58:
			return "PROPERTY_GARAGE_NEW_21";
		
		case 59:
			return "PROPERTY_GARAGE_NEW_22";
		
		case 60:
			return "PROPERTY_GARAGE_NEW_23";
		
		case 61:
			return "PROPERTY_BUS_HIGH_APT_1";
		
		case 62:
			return "PROPERTY_BUS_HIGH_APT_2";
		
		case 63:
			return "PROPERTY_BUS_HIGH_APT_3";
		
		case 64:
			return "PROPERTY_BUS_HIGH_APT_4";
		
		case 65:
			return "PROPERTY_BUS_HIGH_APT_5";
		
		case 66:
			return "PROPERTY_IND_DAY_MEDIUM_1";
		
		case 67:
			return "PROPERTY_IND_DAY_MEDIUM_2";
		
		case 68:
			return "PROPERTY_IND_DAY_MEDIUM_3";
		
		case 69:
			return "PROPERTY_IND_DAY_MEDIUM_4";
		
		case 70:
			return "PROPERTY_IND_DAY_LOW_1";
		
		case 71:
			return "PROPERTY_IND_DAY_LOW_2";
		
		case 72:
			return "PROPERTY_IND_DAY_LOW_3";
		
		case 73:
			return "PROPERTY_STILT_APT_1_BASE_B";
		
		case 74:
			return "PROPERTY_STILT_APT_2_B";
		
		case 75:
			return "PROPERTY_STILT_APT_3_B";
		
		case 76:
			return "PROPERTY_STILT_APT_4_B";
		
		case 77:
			return "PROPERTY_STILT_APT_5_BASE_A";
		
		case 78:
			return "PROPERTY_STILT_APT_7_A";
		
		case 79:
			return "PROPERTY_STILT_APT_8_A";
		
		case 80:
			return "PROPERTY_STILT_APT_10_A";
		
		case 81:
			return "PROPERTY_STILT_APT_12_A";
		
		case 82:
			return "PROPERTY_STILT_APT_13_A";
		
		case 83:
			return "PROPERTY_CUSTOM_APT_1_BASE";
		
		case 84:
			return "PROPERTY_CUSTOM_APT_2";
		
		case 85:
			return "PROPERTY_CUSTOM_APT_3";
		
		case 86:
			return "PROPERTY_YACHT_APT_1_BASE";
		
		case 87:
			return "PROPERTY_OFFICE_1";
		
		case 88:
			return "PROPERTY_OFFICE_2_BASE";
		
		case 89:
			return "PROPERTY_OFFICE_3";
		
		case 90:
			return "PROPERTY_OFFICE_4";
		
		case 91:
			return "PROPERTY_CLUBHOUSE_1_BASE_A";
		
		case 92:
			return "PROPERTY_CLUBHOUSE_2_BASE_A";
		
		case 93:
			return "PROPERTY_CLUBHOUSE_3_BASE_A";
		
		case 94:
			return "PROPERTY_CLUBHOUSE_4_BASE_A";
		
		case 95:
			return "PROPERTY_CLUBHOUSE_5_BASE_A";
		
		case 96:
			return "PROPERTY_CLUBHOUSE_6_BASE_A";
		
		case 97:
			return "PROPERTY_CLUBHOUSE_7_BASE_B";
		
		case 98:
			return "PROPERTY_CLUBHOUSE_8_BASE_B";
		
		case 99:
			return "PROPERTY_CLUBHOUSE_9_BASE_B";
		
		case 100:
			return "PROPERTY_CLUBHOUSE_10_BASE_B";
		
		case 101:
			return "PROPERTY_CLUBHOUSE_11_BASE_B";
		
		case 102:
			return "PROPERTY_CLUBHOUSE_12_BASE_B";
		
		case 103:
			return "PROPERTY_OFFICE_1_GARAGE_LVL1";
		
		case 104:
			return "PROPERTY_OFFICE_1_GARAGE_LVL2";
		
		case 105:
			return "PROPERTY_OFFICE_1_GARAGE_LVL3";
		
		case 106:
			return "PROPERTY_OFFICE_2_GARAGE_LVL1";
		
		case 107:
			return "PROPERTY_OFFICE_2_GARAGE_LVL2";
		
		case 108:
			return "PROPERTY_OFFICE_2_GARAGE_LVL3";
		
		case 109:
			return "PROPERTY_OFFICE_3_GARAGE_LVL1";
		
		case 110:
			return "PROPERTY_OFFICE_3_GARAGE_LVL2";
		
		case 111:
			return "PROPERTY_OFFICE_3_GARAGE_LVL3";
		
		case 112:
			return "PROPERTY_OFFICE_4_GARAGE_LVL1";
		
		case 113:
			return "PROPERTY_OFFICE_4_GARAGE_LVL2";
		
		case 114:
			return "PROPERTY_OFFICE_4_GARAGE_LVL3";
		
		case 115:
			return "PROPERTY_IMPEXP_VEH_WAREHOUSE";
		
		case 116:
			return "PROPERTY_HANGAR";
		
		case 117:
			return "PROPERTY_DEFUNC_BASE";
		
		case 118:
			return "PROPERTY_NIGHTCLUB";
		
		case 119:
			return "PROPERTY_MEGAWARE_GARAGE_LVL1";
		
		case 120:
			return "PROPERTY_MEGAWARE_GARAGE_LVL2";
		
		case 121:
			return "PROPERTY_MEGAWARE_GARAGE_LVL3";
		
		case 122:
			return "PROPERTY_ARENAWARS_GARAGE_LVL1";
		
		case 123:
			return "PROPERTY_ARENAWARS_GARAGE_LVL2";
		
		case 124:
			return "PROPERTY_ARENAWARS_GARAGE_LVL3";
		
		case 125:
			return "PROPERTY_CASINO_GARAGE";
		
		case 126:
			return "PROPERTY_ARCADE_GARAGE";
		
		case 127:
			return "PROPERTY_AUTO_SHOP";
		
		case 128:
			return "PROPERTY_SECURITY_OFFICE_GARAGE";
		
		default:
	}
	return "PROPERTY_INVALID";
}

char* func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SIMPLE_INTERIOR_WAREHOUSE_1";
		
		case 1:
			return "SIMPLE_INTERIOR_WAREHOUSE_2";
		
		case 2:
			return "SIMPLE_INTERIOR_WAREHOUSE_3";
		
		case 3:
			return "SIMPLE_INTERIOR_WAREHOUSE_4";
		
		case 4:
			return "SIMPLE_INTERIOR_WAREHOUSE_5";
		
		case 5:
			return "SIMPLE_INTERIOR_WAREHOUSE_6";
		
		case 6:
			return "SIMPLE_INTERIOR_WAREHOUSE_7";
		
		case 7:
			return "SIMPLE_INTERIOR_WAREHOUSE_8";
		
		case 8:
			return "SIMPLE_INTERIOR_WAREHOUSE_9";
		
		case 9:
			return "SIMPLE_INTERIOR_WAREHOUSE_10";
		
		case 10:
			return "SIMPLE_INTERIOR_WAREHOUSE_11";
		
		case 11:
			return "SIMPLE_INTERIOR_WAREHOUSE_12";
		
		case 12:
			return "SIMPLE_INTERIOR_WAREHOUSE_13";
		
		case 13:
			return "SIMPLE_INTERIOR_WAREHOUSE_14";
		
		case 14:
			return "SIMPLE_INTERIOR_WAREHOUSE_15";
		
		case 15:
			return "SIMPLE_INTERIOR_WAREHOUSE_16";
		
		case 16:
			return "SIMPLE_INTERIOR_WAREHOUSE_17";
		
		case 17:
			return "SIMPLE_INTERIOR_WAREHOUSE_18";
		
		case 18:
			return "SIMPLE_INTERIOR_WAREHOUSE_19";
		
		case 19:
			return "SIMPLE_INTERIOR_WAREHOUSE_20";
		
		case 20:
			return "SIMPLE_INTERIOR_WAREHOUSE_21";
		
		case 21:
			return "SIMPLE_INTERIOR_WAREHOUSE_22";
		
		case 22:
			return "SIMPLE_INTERIOR_FACTORY_METH_1";
		
		case 23:
			return "SIMPLE_INTERIOR_FACTORY_WEED_1";
		
		case 24:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_1";
		
		case 25:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_1";
		
		case 26:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_1";
		
		case 27:
			return "SIMPLE_INTERIOR_FACTORY_METH_2";
		
		case 28:
			return "SIMPLE_INTERIOR_FACTORY_WEED_2";
		
		case 29:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_2";
		
		case 30:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_2";
		
		case 31:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_2";
		
		case 32:
			return "SIMPLE_INTERIOR_FACTORY_METH_3";
		
		case 33:
			return "SIMPLE_INTERIOR_FACTORY_WEED_3";
		
		case 34:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_3";
		
		case 35:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_3";
		
		case 36:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_3";
		
		case 37:
			return "SIMPLE_INTERIOR_FACTORY_METH_4";
		
		case 38:
			return "SIMPLE_INTERIOR_FACTORY_WEED_4";
		
		case 39:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_4";
		
		case 40:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_4";
		
		case 41:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_4";
		
		case 42:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_POLICE_STATION";
		
		case 43:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MC_CLUBHOUSE";
		
		case 44:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_ROCKFORD";
		
		case 45:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_PILLBOX";
		
		case 46:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_ALTA";
		
		case 47:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_BURTON";
		
		case 48:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_PALETO";
		
		case 49:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_GRAND_SENORA";
		
		case 50:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_CHUMASH";
		
		case 51:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_ROCKCLUB";
		
		case 52:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY";
		
		case 53:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_2";
		
		case 54:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_3";
		
		case 55:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_4";
		
		case 56:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FARMHOUSE";
		
		case 57:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_HEIST_YACHT";
		
		case 58:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_RECYCLING_PLANT";
		
		case 59:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BIOLAB";
		
		case 60:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_1";
		
		case 61:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_2";
		
		case 62:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_3";
		
		case 63:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_4";
		
		case 64:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_5";
		
		case 65:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_6";
		
		case 66:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_7";
		
		case 67:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_8";
		
		case 68:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_9";
		
		case 69:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_10";
		
		case 70:
			return "SIMPLE_INTERIOR_BUNKER_1";
		
		case 71:
			return "SIMPLE_INTERIOR_BUNKER_2";
		
		case 72:
			return "SIMPLE_INTERIOR_BUNKER_3";
		
		case 73:
			return "SIMPLE_INTERIOR_BUNKER_4";
		
		case 74:
			return "SIMPLE_INTERIOR_BUNKER_5";
		
		case 75:
			return "SIMPLE_INTERIOR_BUNKER_6";
		
		case 76:
			return "SIMPLE_INTERIOR_BUNKER_7";
		
		case 77:
			return "SIMPLE_INTERIOR_BUNKER_9";
		
		case 78:
			return "SIMPLE_INTERIOR_BUNKER_10";
		
		case 79:
			return "SIMPLE_INTERIOR_BUNKER_11";
		
		case 80:
			return "SIMPLE_INTERIOR_BUNKER_12";
		
		case 81:
			return "SIMPLE_INTERIOR_ARMORY_TRUCK_1";
		
		case 82:
			return "SIMPLE_INTERIOR_CREATOR_TRAILER_1";
		
		case 83:
			return "SIMPLE_INTERIOR_HANGAR_1";
		
		case 84:
			return "SIMPLE_INTERIOR_HANGAR_2";
		
		case 85:
			return "SIMPLE_INTERIOR_HANGAR_3";
		
		case 86:
			return "SIMPLE_INTERIOR_HANGAR_4";
		
		case 87:
			return "SIMPLE_INTERIOR_HANGAR_5";
		
		case 88:
			return "SIMPLE_INTERIOR_ARMORY_AIRCRAFT_1";
		
		case 89:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_1";
		
		case 90:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_2";
		
		case 91:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_3";
		
		case 92:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_4";
		
		case 93:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_6";
		
		case 94:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_7";
		
		case 95:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_8";
		
		case 96:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_9";
		
		case 97:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_10";
		
		case 98:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MEDIUM_GARAGE";
		
		case 99:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_LOWEND_STUDIO";
		
		case 100:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MIDEND_APARTMENT";
		
		case 101:
			return "SIMPLE_INTERIOR_CREATOR_AIRCRAFT_1";
		
		case 102:
			return "SIMPLE_INTERIOR_HUB_LA_MESA";
		
		case 103:
			return "SIMPLE_INTERIOR_HUB_MISSION_ROW";
		
		case 104:
			return "SIMPLE_INTERIOR_HUB_STRAWBERRY_WAREHOUSE";
		
		case 105:
			return "SIMPLE_INTERIOR_HUB_WEST_VINEWOOD";
		
		case 106:
			return "SIMPLE_INTERIOR_HUB_CYPRESS_FLATS";
		
		case 107:
			return "SIMPLE_INTERIOR_HUB_LSIA_WAREHOUSE";
		
		case 108:
			return "SIMPLE_INTERIOR_HUB_ELYSIAN_ISLAND";
		
		case 109:
			return "SIMPLE_INTERIOR_HUB_DOWNTOWN_VINEWOOD";
		
		case 110:
			return "SIMPLE_INTERIOR_HUB_DEL_PERRO_BUILDING";
		
		case 111:
			return "SIMPLE_INTERIOR_HUB_VESPUCCI_CANALS";
		
		case 112:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SHERIFF";
		
		case 113:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SHERIFF2";
		
		case 114:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_UNION_DEPOSITORY_CARPARK";
		
		case 115:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SIMEON_SHOWROOM";
		
		case 116:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_ABATTOIR";
		
		case 117:
			return "SIMPLE_INTERIOR_HACKER_TRUCK";
		
		case 118:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_JEWEL_STORE";
		
		case 119:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_LIFE_INVADER";
		
		case 120:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_DJ_YACHT";
		
		case 121:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MELANOMA_GARAGE";
		
		case 122:
			return "SIMPLE_INTERIOR_ARENA_GARAGE_1";
		
		case 123:
			return "SIMPLE_INTERIOR_CASINO";
		
		case 124:
			return "SIMPLE_INTERIOR_CASINO_APT";
		
		case 125:
			return "SIMPLE_INTERIOR_CASINO_VAL_GARAGE";
		
		case 126:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_HAYES_AUTOS";
		
		case 127:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_METH_LAB";
		
		case 128:
			return "SIMPLE_INTERIOR_ARCADE_PALETO_BAY";
		
		case 129:
			return "SIMPLE_INTERIOR_ARCADE_GRAPESEED";
		
		case 130:
			return "SIMPLE_INTERIOR_ARCADE_DAVIS";
		
		case 131:
			return "SIMPLE_INTERIOR_ARCADE_WEST_VINEWOOD";
		
		case 132:
			return "SIMPLE_INTERIOR_ARCADE_ROCKFORD_HILLS";
		
		case 133:
			return "SIMPLE_INTERIOR_ARCADE_LA_MESA";
		
		case 134:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FIB_BUILDING";
		
		case 135:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BIOLAB_AND_TUNNEL";
		
		case 136:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FOUNDRY";
		
		case 137:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MAX_RENDA";
		
		case 138:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER";
		
		case 139:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_2";
		
		case 140:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_3";
		
		case 141:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_4";
		
		case 142:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_5";
		
		case 143:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_6";
		
		case 144:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_OMEGA";
		
		case 145:
			return "SIMPLE_INTERIOR_SOLOMONS_OFFICE";
		
		case 146:
			return "SIMPLE_INTERIOR_CASINO_NIGHTCLUB";
		
		case 147:
			return "SIMPLE_INTERIOR_SUBMARINE";
		
		case 148:
			return "SIMPLE_INTERIOR_MUSIC_STUDIO";
		
		case 149:
			return "SIMPLE_INTERIOR_AUTO_SHOP_LA_MESA";
		
		case 150:
			return "SIMPLE_INTERIOR_AUTO_SHOP_STRAWBERRY";
		
		case 151:
			return "SIMPLE_INTERIOR_AUTO_SHOP_BURTON";
		
		case 152:
			return "SIMPLE_INTERIOR_AUTO_SHOP_RANCHO";
		
		case 153:
			return "SIMPLE_INTERIOR_AUTO_SHOP_MISSION_ROW";
		
		case 154:
			return "SIMPLE_INTERIOR_CAR_MEET";
		
		case 155:
			return "SIMPLE_INTERIOR_FIXER_HQ_HAWICK";
		
		case 156:
			return "SIMPLE_INTERIOR_FIXER_HQ_ROCKFORD";
		
		case 157:
			return "SIMPLE_INTERIOR_FIXER_HQ_SEOUL";
		
		case 158:
			return "SIMPLE_INTERIOR_FIXER_HQ_VESPUCCI";
		
		case 159:
			return "SIMPLE_INTERIOR_ACID_LAB";
		
		case 160:
			return "SIMPLE_INTERIOR_JUGGALO_HIDEOUT";
		
		case 161:
			return "SIMPLE_INTERIOR_MULTISTOREY_GARAGE";
		
		case 164:
			return "SIMPLE_INTERIOR_SALVAGE_YARD_LA_PUERTA";
		
		case 166:
			return "SIMPLE_INTERIOR_SALVAGE_YARD_MURIETTA_HEIGHTS";
		
		case 162:
			return "SIMPLE_INTERIOR_SALVAGE_YARD_PALETO_BAY";
		
		case 163:
			return "SIMPLE_INTERIOR_SALVAGE_YARD_SANDY_SHORES";
		
		case 165:
			return "SIMPLE_INTERIOR_SALVAGE_YARD_STRAWBERRY";
		
		case 170:
			return "SIMPLE_INTERIOR_BAIL_OFFICE_DAVIS";
		
		case 169:
			return "SIMPLE_INTERIOR_BAIL_OFFICE_DEL_PERRO";
		
		case 167:
			return "SIMPLE_INTERIOR_BAIL_OFFICE_MISSION_ROW";
		
		case 171:
			return "SIMPLE_INTERIOR_BAIL_OFFICE_PALETO_BAY";
		
		case 168:
			return "SIMPLE_INTERIOR_BAIL_OFFICE_WEST_VINEWOOD";
		
		default:
	}
	return "SIMPLE_INTERIOR_INVALID";
}

int func_400(int iParam0)
{
	if (iParam0 != func_187())
	{
		if (func_48(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
		else if (((Global_1575083 || Global_2635563.f_2980) && iParam0 == PLAYER::PLAYER_ID()) && func_48(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
	}
	return -1;
}

bool func_401()
{
	return func_402() != -1;
}

int func_402()
{
	return Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_8;
}

char* func_403(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "SHR_GAS";
		
		case 5:
			return "SHR_LIQ1";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "SHR_LIQ2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "SHR_CONV";
		
		case -2:
			return "SHR_ACE";
		
		default:
	}
	return "";
}

void func_404(int iParam0, char* sParam1, char* sParam2)
{
	Global_23831 = iParam0;
	func_405(29, sParam1, sParam2);
}

void func_405(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_23831.f_6623[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23831.f_7680[iParam0 /*16*/]), sParam2, 64);
}

void func_406(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23831.f_1), sParam0, 16);
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_407(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23831.f_5686[0] = iParam0;
	Global_23831.f_5686[1] = iParam1;
	Global_23831.f_5686[2] = iParam2;
	Global_23831.f_5686[3] = iParam3;
	Global_23831.f_5686[4] = iParam4;
}

void func_408(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23831.f_5659[0] = iParam0;
	Global_23831.f_5659[1] = iParam1;
	Global_23831.f_5659[2] = iParam2;
	Global_23831.f_5659[3] = iParam3;
	Global_23831.f_5659[4] = iParam4;
	Global_23831.f_5829 = 0;
	if (iParam0 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam1 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam2 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam3 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam4 != 0)
	{
		Global_23831.f_5829++;
	}
}

void func_409(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23831.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23831.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_2696723[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23831.f_4469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23831.f_4726[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23831.f_4984[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23831.f_5692[iVar0] = 0;
		Global_23831.f_5830[iVar0] = 0;
		Global_23831.f_5959[iVar0] = 0;
		Global_23831.f_6482[iVar0] = 0f;
		Global_23831.f_6088[iVar0] = 0;
		Global_23831.f_6348[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23831.f_5659[iVar0] = 0;
		Global_23831.f_5671[iVar0] = 0f;
		Global_23831.f_5665[iVar0] = -1f;
		Global_23831.f_5678[iVar0] = 0;
		Global_23831.f_5686[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23831.f_5553[iVar0 /*4*/]), "", 16);
		Global_23831.f_5610[iVar0] = -1;
		Global_23831.f_5625[iVar0] = 365;
		Global_23831.f_5640[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 66)
	{
		StringCopy(&(Global_23831.f_6623[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23831.f_7680[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23831.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4541740.f_16), "", 16);
	Global_4541740.f_20 = -1;
	Global_23831 = 0;
	Global_23831.f_5821 = 0;
	Global_23831.f_5822 = 0;
	Global_23831.f_5823 = 0;
	Global_23831.f_5825 = 0;
	Global_23831.f_5826 = 0;
	Global_23831.f_5827 = 0;
	Global_23831.f_5824 = 0;
	Global_23831.f_6477 = 0;
	Global_23831.f_6617 = 0;
	Global_23831.f_6342 = 0;
	Global_23831.f_6341 = 0;
	Global_23831.f_6343 = 0;
	StringCopy(&(Global_23831.f_5241), "", 24);
	Global_23831.f_5319 = 0;
	Global_23831.f_5320 = 0;
	Global_23831.f_5321 = 0;
	Global_23831.f_5322 = 0;
	Global_23831.f_5323 = 0;
	Global_23831.f_5324 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5253[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_5325 = 0;
	StringCopy(&(Global_4541740.f_21), "", 16);
	Global_4541740.f_61 = 0;
	Global_4541740.f_62 = 0;
	Global_4541740.f_63 = 0;
	Global_4541740.f_64 = 0;
	Global_4541740.f_65 = 0;
	Global_4541740.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4541740.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4541740.f_67 = 0;
	StringCopy(&(Global_23831.f_1), "", 16);
	Global_23831.f_5677 = 0f;
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_6347 = 0;
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = 0;
	Global_23831.f_6345 = 0;
	Global_23831.f_5326 = 0;
	Global_23831.f_5327 = 0;
	Global_23831.f_5828 = 10;
	Global_23831.f_5829 = 0;
	Global_23831.f_6479 = 0f;
	Global_23831.f_6480 = 0f;
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	Global_23831.f_6333 = 0f;
	Global_23831.f_6334 = 0;
	Global_23831.f_6336 = 0;
	Global_23831.f_6335 = 0;
	Global_23831.f_6337 = 0;
	Global_23831.f_6338 = 0;
	Global_23831.f_6339 = 0;
	Global_23831.f_6340 = 0;
	Global_23831.f_9112 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23831.f_6611[iVar0] = -1;
		Global_23831.f_6614[iVar0] = -1;
		iVar0++;
	}
	Global_23831.f_5684 = 0f;
	Global_23831.f_5655 = 0;
	Global_23831.f_5685 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23831.f_6618)
	{
		Global_23831.f_6618[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_9091 = 0;
	Global_23831.f_9086 = 0;
	Global_23831.f_9096 = 0;
	Global_23831.f_9101 = 0;
	Global_23831.f_9106 = 0;
	Global_23831.f_9108 = 0;
	Global_23831.f_9114 = 0;
	Global_23828 = 0.05f;
	Global_23829 = 0.05f;
	Global_23830 = 0.225f;
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23830 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23830 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23830 = 0.225f;
	}
}

int func_410()
{
	if (!Global_262145.f_116)
	{
		return (7 - 1);
	}
	return 7;
}

int func_411(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	float fVar3;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			Var0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar3 = -1.15f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			Var0 = { -2967.027f, 390.9038f, 15.02f };
			fVar3 = -94.76f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			Var0 = { -1222.331f, -907.8234f, 12.31f };
			fVar3 = -147.297f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			Var0 = { 1134.811f, -982.3615f, 46.4f };
			fVar3 = 96.68562f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			Var0 = { -1486.673f, -378.4638f, 40.15f };
			fVar3 = -46.229f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			Var0 = { -3244.573f, 1000.658f, 12.83f };
			fVar3 = 175.074f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			Var0 = { -3041.357f, 584.2665f, 7.9f };
			fVar3 = -162.241f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			Var0 = { 548.9015f, 2668.941f, 42.15f };
			fVar3 = -82.5f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			Var0 = { 2554.875f, 381.3857f, 108.62f };
			fVar3 = 177.716f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			Var0 = { 2676.212f, 3280.969f, 55.24f };
			fVar3 = 150.87f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			Var0 = { 1729.329f, 6417.123f, 35.03f };
			fVar3 = 63.641f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			Var0 = { 1959.323f, 3742.29f, 32.34f };
			fVar3 = 120f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			Var0 = { 24.94562f, -1344.954f, 29.49f };
			fVar3 = 90f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			Var0 = { 373.5954f, 328.5892f, 103.56f };
			fVar3 = 75.885f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case -2:
			*uParam1 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_412()
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::SET_CURSOR_POSITION(0.325f, 0.3f);
	}
}

void func_413(int iParam0, int iParam1)
{
	if (!func_297(PLAYER::PLAYER_ID(), 1, 0) || iParam1)
	{
		if (!func_418())
		{
			Global_1574582.f_1 = 1;
			Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1574582.f_2 = 1;
			}
			func_414(7, 0, -1);
		}
	}
}

void func_414(int iParam0, int iParam1, int iParam2)
{
	if (!func_418() || iParam1)
	{
		Global_1574582 = 1;
		func_417(1);
		if (((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_416()) && !func_415(PLAYER::PLAYER_ID())) && !func_145(PLAYER::PLAYER_ID()))
		{
			Global_1057439 = 1;
		}
		Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_8 = 1;
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(true, iParam0, iParam2, -1);
	}
}

int func_415(int iParam0)
{
	if (func_297(iParam0, 1, 0))
	{
		if (Global_1845281[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_416()
{
	return Global_2684504.f_844;
}

void func_417(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_418())
		{
			if (func_48(PLAYER::PLAYER_ID(), 1, 0))
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
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_48(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_418()
{
	return Global_1574582;
}

void func_419(int* iParam0)
{
	func_420(iParam0, 0f);
}

void func_420(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_320(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_421(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_270(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_175(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/] == 1 && Global_44799[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44799[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44799[iVar0 /*32*/].f_5 = 1;
			Global_44799[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44799[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44799[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_422()
{
	if (Global_113969.f_20413.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_423()
{
	return Global_23690;
}

int func_424(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

bool func_425(int iParam0, int iParam1)
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_219, iParam1);
}

void func_426(var uParam0, var uParam1)
{
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	func_470(PLAYER::PLAYER_ID(), 1, 0, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (uParam0->f_51 > 0)
	{
		*uParam1 = uParam0->f_51;
		uParam0->f_51 = 0;
	}
	func_447();
	MISC::CLEAR_BIT(&(uParam0->f_53), 7);
	if (func_153("SHR_MENU"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (uParam0->f_14 != -1)
	{
		func_269(&(uParam0->f_14));
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, false);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

int func_427(float fParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (fParam0 <= 0f)
		{
			return PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(PLAYER::PLAYER_PED_ID()) > 0;
		}
		else
		{
			return PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fParam0) > 0;
		}
	}
	return 0;
}

int func_428(int iParam0, var uParam1, int iParam2, bool bParam3)
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

int func_429(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if ((*uParam0)[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_430()
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_561);
	TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_561);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_562);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_562);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_563);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_548, 2f, -1, 0.25f, 0, fLocal_551);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0f, false, false, false);
	TASK::TASK_SMART_FLEE_COORD(0, Local_548, 250f, -1, true, false);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_563);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_565);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0f, false, false, false);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_565);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_564);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_548, 2f, -1, 0.25f, 0, (fLocal_551 - 180f));
	TASK::TASK_SWAP_WEAPON(0, true);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 20f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_564);
}

void func_431(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_432(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

int func_433()
{
	return Local_90.f_13;
}

char* func_434(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_435()
{
	struct<3> Var0;
	
	if (func_443(&(Local_486.f_50), 0))
	{
		func_441(Local_486.f_50, &iLocal_585, &iLocal_586, &iLocal_587, &iLocal_588, &Local_589, &Local_592);
		func_440(Local_486.f_50, &Local_595, &Local_598, &fLocal_601);
		func_439(Local_486.f_50, &Local_602, &Local_605, &fLocal_608);
		switch (Local_486.f_50)
		{
			case 0:
				Local_553 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				Local_556 = { 0f, 0f, 21.89f };
				iLocal_544 = func_54(0);
				Local_548 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_551 = 116.5329f;
				iLocal_580 = 1;
				if (func_437(6, 18))
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 0;
					iLocal_774[1] = 0;
					iLocal_780[1] = 0;
					iLocal_774[2] = 0;
					iLocal_780[2] = 0;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 0;
					iLocal_780[4] = 0;
				}
				else
				{
					iLocal_774[0] = 1;
					iLocal_780[0] = 0;
					iLocal_774[1] = 1;
					iLocal_780[1] = 1;
					iLocal_774[2] = 1;
					iLocal_780[2] = 2;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 0;
					iLocal_780[4] = 0;
				}
				break;
			
			case 1:
				Local_556 = { 0f, 0f, -160f };
				Local_553 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_544 = func_54(0);
				Local_548 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_551 = 178.8753f;
				iLocal_580 = 1;
				if (func_437(6, 18))
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 1;
					iLocal_774[1] = 1;
					iLocal_780[1] = 0;
					iLocal_774[2] = 0;
					iLocal_780[2] = 1;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 0;
					iLocal_780[4] = 1;
				}
				else
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 0;
					iLocal_774[1] = 0;
					iLocal_780[1] = 0;
					iLocal_774[2] = 1;
					iLocal_780[2] = 2;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 0;
					iLocal_780[4] = 1;
				}
				break;
			
			case 2:
				Local_553 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				Local_556 = { 0f, 0f, 175.52f };
				iLocal_544 = func_54(0);
				Local_548 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_551 = 191.594f;
				iLocal_580 = 1;
				if (func_437(6, 18))
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 2;
					iLocal_774[1] = 1;
					iLocal_780[1] = 1;
					iLocal_774[2] = 0;
					iLocal_780[2] = 2;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 0;
					iLocal_780[4] = 2;
				}
				else
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 1;
					iLocal_774[1] = 0;
					iLocal_780[1] = 0;
					iLocal_774[2] = 1;
					iLocal_780[2] = 0;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 0;
					iLocal_780[4] = 2;
				}
				break;
			
			case 3:
				Local_556 = { 0f, 0f, -82.38f };
				Local_553 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_544 = func_54(0);
				Local_548 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_551 = 228.4295f;
				iLocal_580 = 1;
				if (func_437(6, 18))
				{
					iLocal_774[0] = 1;
					iLocal_780[0] = 0;
					iLocal_774[1] = 2;
					iLocal_780[1] = 0;
					iLocal_774[2] = 1;
					iLocal_780[2] = 0;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 0;
					iLocal_780[4] = 0;
				}
				else
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 0;
					iLocal_774[1] = 2;
					iLocal_780[1] = 1;
					iLocal_774[2] = 1;
					iLocal_780[2] = 1;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 0;
					iLocal_780[4] = 0;
				}
				break;
			
			case 4:
				Local_556 = { 0f, 0f, 180f };
				Local_553 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_544 = func_54(0);
				Local_548 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_551 = 197.2994f;
				iLocal_580 = 1;
				if (func_437(6, 18))
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 0;
					iLocal_774[1] = 2;
					iLocal_780[1] = 1;
					iLocal_774[2] = 1;
					iLocal_780[2] = 1;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 0;
					iLocal_780[4] = 1;
				}
				else
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 1;
					iLocal_774[1] = 1;
					iLocal_780[1] = 0;
					iLocal_774[2] = 0;
					iLocal_780[2] = 2;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 0;
					iLocal_780[4] = 1;
				}
				break;
			
			case 5:
				Local_556 = { 0f, 0f, 155f };
				Local_553 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_544 = func_54(0);
				Local_548 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_551 = 296.5427f;
				iLocal_580 = 1;
				if (func_437(6, 18))
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 1;
					iLocal_774[1] = 0;
					iLocal_780[1] = 0;
					iLocal_774[2] = 1;
					iLocal_780[2] = 2;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 0;
					iLocal_780[4] = 2;
				}
				else
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 2;
					iLocal_774[1] = 2;
					iLocal_780[1] = 1;
					iLocal_774[2] = 0;
					iLocal_780[2] = 2;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 0;
					iLocal_780[4] = 2;
				}
				break;
			
			case 6:
				Local_556 = { 0f, 0f, 63.3f };
				Local_553 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_544 = func_54(0);
				Local_548 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_551 = 130.9518f;
				iLocal_580 = 1;
				if (func_437(6, 18))
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 2;
					iLocal_774[1] = 1;
					iLocal_780[1] = 0;
					iLocal_774[2] = 0;
					iLocal_780[2] = 0;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 0;
					iLocal_780[4] = 0;
				}
				else
				{
					iLocal_774[0] = 1;
					iLocal_780[0] = 0;
					iLocal_774[1] = 0;
					iLocal_780[1] = 0;
					iLocal_774[2] = 1;
					iLocal_780[2] = 0;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 0;
					iLocal_780[4] = 0;
				}
				break;
			
			case 7:
				Local_556 = { 0f, 0f, 117f };
				Local_553 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_544 = func_54(0);
				Local_548 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_551 = 73.6245f;
				iLocal_580 = 1;
				if (func_437(6, 18))
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 0;
					iLocal_774[1] = 1;
					iLocal_780[1] = 1;
					iLocal_774[2] = 0;
					iLocal_780[2] = 1;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 0;
					iLocal_780[4] = 1;
				}
				else
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 0;
					iLocal_774[1] = 0;
					iLocal_780[1] = 0;
					iLocal_774[2] = 1;
					iLocal_780[2] = 1;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 0;
					iLocal_780[4] = 1;
				}
				break;
			
			case 8:
				Local_556 = { 0f, 0f, 92f };
				Local_553 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_544 = func_54(0);
				Local_548 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_551 = 110.7699f;
				iLocal_580 = 1;
				if (func_437(6, 18))
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 1;
					iLocal_774[1] = 2;
					iLocal_780[1] = 0;
					iLocal_774[2] = 0;
					iLocal_780[2] = 2;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 0;
					iLocal_780[4] = 2;
				}
				else
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 1;
					iLocal_774[1] = 1;
					iLocal_780[1] = 0;
					iLocal_774[2] = 1;
					iLocal_780[2] = 2;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 0;
					iLocal_780[4] = 2;
				}
				break;
			
			case 9:
				Local_556 = { 0f, 0f, 75f };
				Local_553 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_544 = func_54(0);
				Local_548 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_551 = 52.0064f;
				iLocal_580 = 1;
				if (func_437(6, 18))
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 2;
					iLocal_774[1] = 2;
					iLocal_780[1] = 1;
					iLocal_774[2] = 1;
					iLocal_780[2] = 0;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 0;
					iLocal_780[4] = 0;
				}
				else
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 2;
					iLocal_774[1] = 1;
					iLocal_780[1] = 1;
					iLocal_774[2] = 0;
					iLocal_780[2] = 0;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 0;
					iLocal_780[4] = 0;
				}
				break;
			
			case 10:
				Local_556 = { 0f, 0f, 0f };
				Local_553 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_544 = func_54(0);
				Local_548 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_551 = 136.5945f;
				iLocal_580 = 3;
				if (func_437(10, 22))
				{
					iLocal_774[0] = 1;
					iLocal_780[0] = 0;
					iLocal_774[1] = 0;
					iLocal_780[1] = 0;
					iLocal_774[2] = 1;
					iLocal_780[2] = 1;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				else
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 0;
					iLocal_774[1] = 2;
					iLocal_780[1] = 0;
					iLocal_774[2] = 0;
					iLocal_780[2] = 1;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				break;
			
			case 11:
				Local_556 = { 0f, 0f, -92f };
				Local_553 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_544 = func_54(0);
				Local_548 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_551 = 176.1174f;
				iLocal_580 = 3;
				if (func_437(10, 22))
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 0;
					iLocal_774[1] = 1;
					iLocal_780[1] = 0;
					iLocal_774[2] = 1;
					iLocal_780[2] = 2;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				else
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 1;
					iLocal_774[1] = 2;
					iLocal_780[1] = 1;
					iLocal_774[2] = 0;
					iLocal_780[2] = 2;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				break;
			
			case 12:
				Local_556 = { 0f, 0f, -145f };
				Local_553 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_544 = func_54(0);
				Local_548 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_551 = 43.8031f;
				iLocal_580 = 3;
				if (func_437(10, 22))
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 1;
					iLocal_774[1] = 1;
					iLocal_780[1] = 1;
					iLocal_774[2] = 0;
					iLocal_780[2] = 0;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				else
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 2;
					iLocal_774[1] = 1;
					iLocal_780[1] = 0;
					iLocal_774[2] = 1;
					iLocal_780[2] = 0;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				break;
			
			case 13:
				Local_556 = { 0f, 0f, 103f };
				Local_553 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_544 = func_54(0);
				Local_548 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_551 = 269.2587f;
				iLocal_580 = 3;
				if (func_437(10, 22))
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 2;
					iLocal_774[1] = 2;
					iLocal_780[1] = 0;
					iLocal_774[2] = 0;
					iLocal_780[2] = 1;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				else
				{
					iLocal_774[0] = 1;
					iLocal_780[0] = 0;
					iLocal_774[1] = 0;
					iLocal_780[1] = 0;
					iLocal_774[2] = 1;
					iLocal_780[2] = 1;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				break;
			
			case 14:
				Local_556 = { 0f, 0f, -41f };
				Local_553 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_544 = func_54(0);
				Local_548 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_551 = 36.5415f;
				iLocal_580 = 3;
				if (func_437(10, 22))
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 0;
					iLocal_774[1] = 2;
					iLocal_780[1] = 1;
					iLocal_774[2] = 0;
					iLocal_780[2] = 2;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				else
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 0;
					iLocal_774[1] = 1;
					iLocal_780[1] = 0;
					iLocal_774[2] = 1;
					iLocal_780[2] = 2;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				break;
			
			case 15:
				Local_556 = { 0f, 0f, 145f };
				Local_553 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_544 = func_54(0);
				Local_548 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_551 = 24.9178f;
				iLocal_580 = 2;
				if (func_437(8, 20))
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 1;
					iLocal_774[1] = 0;
					iLocal_780[1] = 0;
					iLocal_774[2] = 1;
					iLocal_780[2] = 0;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				else
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 1;
					iLocal_774[1] = 1;
					iLocal_780[1] = 1;
					iLocal_774[2] = 0;
					iLocal_780[2] = 0;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				break;
			
			case 16:
				Local_556 = { 0f, 0f, -87f };
				Local_553 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_544 = func_54(0);
				Local_548 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_551 = 291.6504f;
				iLocal_580 = 2;
				if (func_437(8, 20))
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 2;
					iLocal_774[1] = 1;
					iLocal_780[1] = 0;
					iLocal_774[2] = 1;
					iLocal_780[2] = 1;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				else
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 2;
					iLocal_774[1] = 2;
					iLocal_780[1] = 0;
					iLocal_774[2] = 0;
					iLocal_780[2] = 1;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				break;
			
			case 17:
				Local_556 = { 0f, 0f, -125f };
				Local_553 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_544 = func_54(0);
				Local_548 = { -40.42f, -1751.423f, 28.421f };
				fLocal_551 = 145.6553f;
				iLocal_580 = 2;
				if (func_437(8, 20))
				{
					iLocal_774[0] = 1;
					iLocal_780[0] = 0;
					iLocal_774[1] = 1;
					iLocal_780[1] = 1;
					iLocal_774[2] = 1;
					iLocal_780[2] = 2;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				else
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 0;
					iLocal_774[1] = 2;
					iLocal_780[1] = 0;
					iLocal_774[2] = 0;
					iLocal_780[2] = 2;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				break;
			
			case 18:
				Local_556 = { 0f, 0f, -74f };
				Local_553 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_544 = func_54(0);
				Local_548 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_551 = 232.6337f;
				iLocal_580 = 2;
				if (func_437(8, 20))
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 0;
					iLocal_774[1] = 2;
					iLocal_780[1] = 1;
					iLocal_774[2] = 0;
					iLocal_780[2] = 0;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				else
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 1;
					iLocal_774[1] = 2;
					iLocal_780[1] = 0;
					iLocal_774[2] = 0;
					iLocal_780[2] = 0;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				break;
			
			case 19:
				Local_553 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				Local_556 = { 0f, 0f, -47.3f };
				iLocal_544 = func_54(0);
				Local_548 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_551 = 247.1234f;
				iLocal_580 = 2;
				if (func_437(8, 20))
				{
					iLocal_774[0] = 2;
					iLocal_780[0] = 1;
					iLocal_774[1] = 0;
					iLocal_780[1] = 0;
					iLocal_774[2] = 0;
					iLocal_780[2] = 1;
					iLocal_774[3] = 0;
					iLocal_780[3] = 0;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				else
				{
					iLocal_774[0] = 0;
					iLocal_780[0] = 2;
					iLocal_774[1] = 2;
					iLocal_780[1] = 1;
					iLocal_774[2] = 0;
					iLocal_780[2] = 1;
					iLocal_774[3] = 0;
					iLocal_780[3] = 1;
					iLocal_774[4] = 1;
					iLocal_780[4] = 0;
				}
				break;
		}
		Local_553 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_553, Local_556.f_2, 0f, 0.075f, 0f) };
		Local_545 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s", Local_553, Local_556, 0f, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s", Local_553, Local_556, 0f, 2) };
		Local_90.f_44 = Var0.f_2;
		Local_569 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_bag", Local_553, Local_556, 0f, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_bag", Local_553, Local_556, 0f, 2) };
		fLocal_572 = Var0.f_2;
		Local_573 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_till", Local_553, Local_556, 0f, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_till", Local_553, Local_556, 0f, 2) };
		fLocal_576 = Var0.f_2;
		Local_486.f_0 = func_436(Local_486.f_50);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_90.f_47 = iLocal_774[0];
			if (Local_90.f_47 == 0)
			{
				StringCopy(&(Local_90.f_52), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_90.f_48), "StoreOwner2", 16);
			}
			else if (Local_90.f_47 == 1)
			{
				StringCopy(&(Local_90.f_52), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_90.f_48), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_90.f_52), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_90.f_48), "StoreOwner3", 16);
			}
		}
		if (!BitTest(Local_486.f_52, 29))
		{
			ENTITY::CREATE_MODEL_HIDE(Local_553, 0.5f, iLocal_577, true);
			MISC::SET_BIT(&(Local_486.f_52), 29);
		}
		return 1;
	}
	return 0;
}

int func_436(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return -2;
		
		default:
	}
	return -1;
}

bool func_437(int iParam0, int iParam1)
{
	return func_438(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_438(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_439(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393.091f, 3607.383f, 33.9809f };
		*uParam2 = { 1391.178f, 3612.516f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045.013f, 585.9666f, (10.35421f - 0.2f) };
		*uParam2 = { -3048.714f, 584.7961f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247.313f, 1003.657f, (15.27433f - 0.2f) };
		*uParam2 = { -3251.157f, 1003.984f, 11.83501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546.5474f, 2665.642f, (44.60108f - 0.2f) };
		*uParam2 = { 547.054f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552f, 384.2527f, (111.0656f - 0.2f) };
		*uParam2 = { 2548.145f, 384.4133f, 107.6241f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674.946f, 3284.833f, (57.68088f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.699f, 54.24464f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733.119f, 6418.579f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.839f, 6422.032f, 34.03751f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960.224f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.295f, 3749.599f, 31.34522f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27.71382f, -1341.968f, (31.93314f - 0.2f) };
		*uParam2 = { 27.71049f, -1338.109f, 28.49479f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377.0183f, 330.808f, (106.0112f - 0.2f) };
		*uParam2 = { 377.9499f, 334.5523f, 102.567f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167.015f, 2711.601f, (40.66147f - 0.2f) };
		*uParam2 = { 1167.082f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965.705f, 389.6696f, (17.64162f - 0.2f) };
		*uParam2 = { -2957.095f, 389.139f, 13.04323f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222.402f, -909.5575f, (14.92466f - 0.2f) };
		*uParam2 = { -1217.682f, -916.7974f, 10.33735f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.284f, -981.473f, (49.01414f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.883f, -378.2694f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.771f, -372.1664f, 38.16948f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704.556f, 4921.806f, (44.02687f - 0.2f) };
		*uParam2 = { 1708.285f, 4919.196f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709.019f, -907.7159f, (21.17918f - 0.2f) };
		*uParam2 = { -709.0177f, -903.1516f, 18.21618f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.37973f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.09f, 28.42099f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160.825f, -317.4214f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.033f, -312.932f, 68.20509f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826.218f, 796.6393f, (140.1334f - 0.2f) };
		*uParam2 = { -1829.301f, 799.9996f, 137.18f };
		*uParam3 = 4f;
	}
}

void func_440(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395.548f, 3600.575f, 33.98914f };
		*uParam2 = { 1392.08f, 3609.983f, (37.33543f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.476f, 587.4066f, (11.31222f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240.032f, 1004.482f, 11.8307f };
		*uParam2 = { -3247.188f, 1005.107f, (16.25224f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544.2278f, 2672.5f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559.176f, 385.3936f, 107.623f };
		*uParam2 = { 2552.054f, 385.6057f, (112.1638f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681.864f, 3282.603f, 54.24114f };
		*uParam2 = { 2675.586f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731.237f, 6411.557f, 34.03723f };
		*uParam2 = { 1734.383f, 6417.952f, (38.58461f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964.999f, 3740.795f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.89571f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.382f, 27.05614f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376.6309f, 323.5533f, 102.5664f };
		*uParam2 = { 378.3253f, 330.4793f, (107.1095f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166.497f, 2703.756f, 37.06307f };
		*uParam2 = { 1166.525f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973.512f, 390.7873f, 14.04322f };
		*uParam2 = { -2965.288f, 390.2452f, (18.54322f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226.417f, -902.6738f, 11.33496f };
		*uParam2 = { -1221.765f, -909.5887f, (15.82626f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141.35f, -980.9322f, 45.41594f };
		*uParam2 = { 1132.976f, -982.0952f, (49.91574f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490.949f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.006f, -377.6167f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698.98f, 4929.093f, 41.06357f };
		*uParam2 = { 1705.233f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711.77f, -916.4685f, 18.21557f };
		*uParam2 = { -711.7368f, -908.7517f, (22.76488f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52.90452f, -1756.474f, 28.42097f };
		*uParam2 = { -47.92523f, -1750.614f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159.633f, -326.5087f, 68.20507f };
		*uParam2 = { 1158.335f, -318.9123f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822.373f, 788.2851f, 137.1876f };
		*uParam2 = { -1827.484f, 794.0739f, (141.6933f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_441(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_442(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_methlab");
			}
			*uParam2 = joaat("V_39_ShopRm");
			*uParam4 = joaat("V_39_StairsRm");
			*uParam3 = -1;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_shop_247");
			}
			*uParam2 = joaat("V_66_ShopRm");
			*uParam4 = joaat("V_66_BackRm");
			*uParam3 = -1;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gen_liquor");
			}
			*uParam2 = joaat("liquor_front");
			*uParam4 = joaat("liquor_back");
			*uParam3 = -1;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gasstation");
			}
			*uParam2 = joaat("V_68_GasRm");
			*uParam4 = joaat("V_68_BackRm");
			*uParam3 = joaat("V_68_Toilets");
			break;
	}
}

void func_442(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394.169f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.548f, 3600.575f, 33.98914f };
			break;
		
		case 1:
			*uParam1 = { -3038.908f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 2:
			*uParam1 = { -3240.317f, 1004.433f, 11.8307f };
			*uParam2 = { -3240.032f, 1004.482f, 11.8307f };
			break;
		
		case 3:
			*uParam1 = { 544.2802f, 2672.811f, 41.1566f };
			*uParam2 = { 544.2278f, 2672.5f, 41.1565f };
			break;
		
		case 4:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.176f, 385.3936f, 107.623f };
			break;
		
		case 5:
			*uParam1 = { 2682.003f, 3282.543f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.603f, 54.24114f };
			break;
		
		case 6:
			*uParam1 = { 1731.21f, 6411.403f, 34.0372f };
			*uParam2 = { 1731.237f, 6411.557f, 34.03723f };
			break;
		
		case 7:
			*uParam1 = { 1965.054f, 3740.555f, 31.3448f };
			*uParam2 = { 1964.999f, 3740.795f, 31.34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.6309f, 323.5533f, 102.5664f };
			break;
		
		case 10:
			*uParam1 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.497f, 2703.756f, 37.06307f };
			break;
		
		case 11:
			*uParam1 = { -2973.262f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.512f, 390.7873f, 14.04322f };
			break;
		
		case 12:
			*uParam1 = { -1226.464f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.417f, -902.6738f, 11.33496f };
			break;
		
		case 13:
			*uParam1 = { 1141.36f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.35f, -980.9322f, 45.41594f };
			break;
		
		case 14:
			*uParam1 = { -1491.057f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.949f, -383.4771f, 39.16332f };
			break;
		
		case 15:
			*uParam1 = { 1698.808f, 4929.198f, 41.0783f };
			*uParam2 = { 1698.98f, 4929.093f, 41.06357f };
			break;
		
		case 16:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.77f, -916.4685f, 18.21557f };
			break;
		
		case 17:
			*uParam1 = { -53.124f, -1756.405f, 28.421f };
			*uParam2 = { -52.90452f, -1756.474f, 28.42097f };
			break;
		
		case 18:
			*uParam1 = { 1159.542f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.5087f, 68.20507f };
			break;
		
		case 19:
			*uParam1 = { -1822.287f, 788.006f, 137.1859f };
			*uParam2 = { -1822.373f, 788.2851f, 137.1876f };
			break;
	}
}

int func_443(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	fVar1 = 9999.9f;
	bVar2 = false;
	while (bVar2 < 20)
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_90(PLAYER::PLAYER_ID()), func_444(bVar2), true);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!BitTest(Global_2657800.f_62, bVar2) && BitTest(Global_2657800.f_64, bVar2))
				{
					fVar1 = fVar0;
					*uParam0 = bVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*uParam0 = bVar2;
			}
		}
		bVar2++;
	}
	return 1;
}

Vector3 func_444(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	func_442(iParam0, &Var0, &uVar3);
	return Var0;
}

int func_445(int iParam0)
{
	return Local_165[iParam0 /*10*/].f_4;
}

void func_446()
{
	Global_2684504.f_787.f_28 = 0;
}

void func_447()
{
	if (Global_1574582.f_1 == 1)
	{
		func_448(7, 0, 1);
		Global_1574582.f_1 = 0;
		Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_9 = 0;
	}
}

void func_448(int iParam0, int iParam1, bool bParam2)
{
	if (func_418())
	{
		if (iParam1 == 1)
		{
			if (Global_2738934.f_4514 == -1)
			{
				Global_2738934.f_4514 = Global_262145.f_26734;
			}
			func_449(&(Global_2738934.f_4512), 0, 0);
			if (bParam2)
			{
				if (Global_2738934.f_4517 == -1)
				{
					Global_2738934.f_4517 = Global_262145.f_26735;
				}
				func_449(&(Global_2738934.f_4515), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_8 = 0;
				func_417(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_8 = 0;
			func_417(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_416()) && !func_415(PLAYER::PLAYER_ID()))
		{
			Global_1057439 = 0;
		}
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

void func_449(var uParam0, bool bParam1, bool bParam2)
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

void func_450()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_48(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = 1;
		if (BitTest(Local_486.f_53, 6) && !BitTest(Local_486.f_53, 5))
		{
			iVar1 = MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
			iVar2 = 0;
			MISC::SET_BIT(&iVar2, 8);
			MISC::SET_BIT(&iVar2, 4);
			MISC::SET_BIT(&iVar2, 1);
			if (iLocal_803 > Global_262145.f_167)
			{
				iLocal_803 = Global_262145.f_167;
			}
			if (iVar1 < iLocal_803)
			{
				if (iVar1 > 0)
				{
					if (func_53(func_54(1)))
					{
						if (MONEY::NETWORK_CAN_SPEND_MONEY2(iVar1, false, false, false, &uVar3, -1, 0))
						{
							if (func_222())
							{
								if (!BitTest(Global_2738934.f_7, 1))
								{
									Global_2738934.f_5071 = iVar1;
									Global_2738934.f_5072 = iVar2;
									Global_2738934.f_5073 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f) };
									func_212(&(Global_2738934.f_5070), -1135378931, 537254313, 1474183246, joaat("service_spend_cash_drop_holdup"), Global_2738934.f_5071, 1, 3);
									MISC::SET_BIT(&(Global_2738934.f_7), 1);
									iLocal_803 = 0;
									MISC::SET_BIT(&(Local_486.f_53), 5);
								}
							}
							else
							{
								func_452(joaat("pickup_money_variable"), PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f), iVar2, iVar1, func_54(1), 0, 0);
								func_207(-iVar1, 1, 1, 1092616192);
								MONEY::NETWORK_SPENT_HOLDUPS(iVar1, false, false);
								func_211(joaat("service_spend_cash_drop_holdup"), iVar1, &uVar4, 0, 0, 0);
								iLocal_803 = 0;
								func_451();
								MISC::SET_BIT(&(Local_486.f_53), 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_803 > 0)
			{
				if (func_53(func_54(1)))
				{
					if (MONEY::NETWORK_CAN_SPEND_MONEY2(iLocal_803, false, false, false, &uVar3, -1, 0))
					{
						if (func_222())
						{
							if (!BitTest(Global_2738934.f_7, 1))
							{
								Global_2738934.f_5071 = iLocal_803;
								Global_2738934.f_5072 = iVar2;
								Global_2738934.f_5073 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f) };
								func_212(&(Global_2738934.f_5070), -1135378931, 537254313, 1474183246, joaat("service_spend_cash_drop_holdup"), Global_2738934.f_5071, 1, 3);
								MISC::SET_BIT(&(Global_2738934.f_7), 1);
								iLocal_803 = 0;
								MISC::SET_BIT(&(Local_486.f_53), 5);
							}
						}
						else
						{
							func_452(joaat("pickup_money_variable"), PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f), iVar2, iLocal_803, func_54(1), 0, 0);
							func_207(-iLocal_803, 1, 1, 1092616192);
							MONEY::NETWORK_SPENT_HOLDUPS(iLocal_803, false, false);
							func_211(joaat("service_spend_cash_drop_holdup"), iLocal_803, &uVar5, 0, 0, 0);
							iLocal_803 = 0;
							func_451();
							MISC::SET_BIT(&(Local_486.f_53), 5);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		if (iVar0 == 1)
		{
			func_484();
		}
		else
		{
			return;
		}
	}
}

void func_451()
{
	Global_2738934.f_283 = 0;
	Global_2738934.f_284 = 0;
	Global_2738934.f_285 = 0;
}

struct<5> func_452(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
{
	struct<5> Var0;
	
	Var0 = 123;
	if (func_460() && func_459(iParam0))
	{
		Var0 = { func_453(iParam0, Param1, iParam4, iParam5, iParam6, bParam7) };
	}
	else
	{
		Var0.f_4 = OBJECT::CREATE_AMBIENT_PICKUP(iParam0, Param1, iParam4, iParam5, iParam6, bParam7, bParam8);
	}
	return Var0;
}

struct<5> func_453(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	int iVar5;
	struct<5> Var6;
	int iVar11;
	
	Var0 = 123;
	if (func_458() == -1)
	{
		return Var0;
	}
	iVar5 = func_457(-1);
	if (iVar5 == -1)
	{
		return Var0;
	}
	Var6 = 123;
	Var6.f_0 = iParam0;
	Var6.f_1 = { Param1 };
	if (func_454(&Var6) != -1)
	{
		return Var0;
	}
	MISC::SET_BIT(&iParam4, 5);
	Var6.f_4 = OBJECT::CREATE_NON_NETWORKED_AMBIENT_PICKUP(iParam0, Param1, iParam4, iParam5, iParam6, bParam7, false);
	iVar11 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (bParam7)
	{
		Global_1906887[iVar11 /*304*/].f_101.f_21[iVar5 /*14*/].f_12 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
		Global_1906887[iVar11 /*304*/].f_101.f_21[iVar5 /*14*/].f_13 = NETWORK::NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT();
		if (Global_1906887[iVar11 /*304*/].f_101.f_21[iVar5 /*14*/].f_13 == 0)
		{
			Global_1906887[iVar11 /*304*/].f_101.f_21[iVar5 /*14*/].f_13 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
			Global_1906887[iVar11 /*304*/].f_101.f_21[iVar5 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1906887[iVar11 /*304*/].f_101.f_21[iVar5 /*14*/].f_11 = 2;
		}
	}
	Global_1906887[iVar11 /*304*/].f_101.f_21[iVar5 /*14*/] = { Var6 };
	Global_1906887[iVar11 /*304*/].f_101.f_21[iVar5 /*14*/].f_5 = { Param1 };
	Global_1906887[iVar11 /*304*/].f_101.f_21[iVar5 /*14*/].f_8 = iParam4;
	Global_1906887[iVar11 /*304*/].f_101.f_21[iVar5 /*14*/].f_9 = iParam5;
	Global_1906887[iVar11 /*304*/].f_101.f_21[iVar5 /*14*/].f_10 = iParam6;
	return Var6;
}

int func_454(var uParam0)
{
	int iVar0;
	
	if (!func_456(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_455(uParam0, &(Global_2652592.f_2452[iVar0 /*16*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_455(var uParam0, var uParam1)
{
	if ((*uParam0 == *uParam1 && func_138(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4 == uParam1->f_4)
	{
		return 1;
	}
	return 0;
}

int func_456(var uParam0)
{
	if ((*uParam0 == 123 || func_273(uParam0->f_1)) || uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_457(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_456(&(Global_1906887[iParam0 /*304*/].f_101.f_21[iVar1 /*14*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_458()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_456(&(Global_2652592.f_2452[iVar1 /*16*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_459(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pickup_money_variable"):
		case joaat("pickup_money_case"):
		case joaat("pickup_money_wallet"):
		case joaat("pickup_money_purse"):
		case joaat("pickup_money_dep_bag"):
		case joaat("pickup_money_med_bag"):
		case joaat("pickup_money_paper_bag"):
		case joaat("pickup_money_security_case"):
		case joaat("pickup_gang_attack_money"):
		case joaat("pickup_vehicle_money_variable"):
			return 1;
		
		default:
	}
	return 0;
}

var func_460()
{
	return Global_262145.f_30251;
}

int func_461()
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_468())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_467())
	{
		return 1;
	}
	if (func_466(159))
	{
		if (!func_465())
		{
			return 1;
		}
	}
	if (func_466(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_462() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_462()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_462()
{
	switch (func_464())
	{
		case 0:
			return func_463();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_463()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_464()
{
	return Global_32948;
}

bool func_465()
{
	return Global_2684504.f_700;
}

int func_466(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_467()
{
	return Global_2696172;
}

bool func_468()
{
	return Global_2684504.f_695;
}

void func_469()
{
	SYSTEM::WAIT(0);
}

void func_470(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_482())
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
		if (!func_480())
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
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || ((!func_85(PLAYER::PLAYER_ID(), 0) && !func_479()) && !func_478(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657971[iParam0 /*465*/].f_255 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_475(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_474(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_473();
					func_472();
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
				Global_2657971[iParam0 /*465*/].f_256 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697540)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697540 = 0;
				}
				if (Global_2635563.f_2981)
				{
					Global_2635563.f_2981 = 0;
				}
			}
			else
			{
				if (!func_474(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
						}
					}
					if (func_471(Global_4718592.f_185586))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575055)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
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
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_471(int iParam0)
{
	return iParam0 == 17;
}

void func_472()
{
	struct<3> Var0;
	
	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { Var0 };
}

void func_473()
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
}

int func_474(int iParam0)
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

void func_475(bool bParam0, int iParam1, int iParam2)
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
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
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
				func_477();
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
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
		if (func_85(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_476(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_476(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_477()
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
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}
}

int func_478(int iParam0)
{
	if (func_85(iParam0, 0))
	{
		return 1;
	}
	if (func_479())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_479()
{
	return BitTest(Global_2621446, 3);
}

int func_480()
{
	if (func_481() == 0)
	{
		return 1;
	}
	return 0;
}

int func_481()
{
	return Global_1574633.f_18;
}

int func_482()
{
	if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_483(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2684504.f_787.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2684504.f_787.f_31);
	}
	return Global_2684504.f_787.f_28;
}

void func_484()
{
	int iVar0;
	
	Global_2738934.f_8 = 0;
	Global_1979161 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_432(Local_90.f_0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_90.f_0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_90.f_0), 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_90.f_0));
				if (BitTest(Local_486.f_52, 22))
				{
					if (BitTest(Local_486.f_52, 20))
					{
						if (Local_90.f_3 != 7)
						{
							if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
							{
								TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_90.f_0));
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_90.f_0), iLocal_563);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_90.f_0), false);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_combat_hated_targets_around_ped")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_0), joaat("script_task_combat_hated_targets_around_ped")) != 1)
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_90.f_0));
							if (!WEAPON::HAS_PED_GOT_WEAPON(NETWORK::NET_TO_PED(Local_90.f_0), joaat("weapon_pistol"), false))
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_90.f_0), joaat("weapon_pistol"), 25000, true);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_90.f_0), 30);
							}
							func_236(4);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_90.f_0), 20f, 0);
						}
					}
					else if ((BitTest(Local_90.f_25, 3) || !func_11()) || !func_488())
					{
						if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_90.f_0));
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_90.f_0), iLocal_563);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_90.f_0), false);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_90.f_0));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_90.f_0), true);
						TASK::TASK_STAND_STILL(NETWORK::NET_TO_PED(Local_90.f_0), -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_90.f_0), false);
					}
				}
			}
		}
		if ((BitTest(Local_90.f_25, 3) || !func_11()) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_14))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_14))
				{
					ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_90.f_14), true, true);
					func_49(&(Local_90.f_14));
				}
			}
		}
		if (((BitTest(Local_90.f_25, 3) || !func_11()) || BitTest(Local_486.f_52, 20)) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_15))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_15))
				{
					func_49(&(Local_90.f_15));
				}
			}
		}
		if (func_222() && BitTest(Global_2738934.f_7, 1))
		{
			if (func_302(Global_2738934.f_5070) == 1)
			{
				func_487(Global_2738934.f_5070, 4);
			}
			else
			{
				func_214(Global_2738934.f_5070);
			}
			MISC::CLEAR_BIT(&(Global_2738934.f_7), 1);
		}
		if (Local_90.f_13 == 6)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_0))
			{
				if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_90.f_0), "XP_Blocker"))
				{
					DECORATOR::DECOR_REMOVE(NETWORK::NET_TO_PED(Local_90.f_0), "XP_Blocker");
				}
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			EVENT::REMOVE_SHOCKING_EVENT(Local_90.f_32);
		}
	}
	func_486();
	STREAMING::REMOVE_ANIM_DICT("mp_am_hold_up");
	PLAYER::RESET_LAW_RESPONSE_DELAY_OVERRIDE();
	if (func_153("SHR_MENU"))
	{
		HUD::CLEAR_HELP(true);
	}
	Global_2738934.f_9 = func_187();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_434(Local_486.f_0));
	func_169(1, Local_486.f_0);
	if (Local_486.f_14 != -1)
	{
		func_269(&(Local_486.f_14));
	}
	Global_2738934.f_27 = Local_486.f_0;
	if (Global_2738934.f_6019.f_4 == 1)
	{
		Global_2738934.f_6019.f_4 = 0;
	}
	if (Global_2738934.f_6019.f_5 == 1)
	{
		Global_2738934.f_6019.f_5 = 0;
	}
	if (BitTest(Local_486.f_52, 29))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_553, 0.5f, iLocal_577, true);
	}
	if (BitTest(Local_486.f_53, 7))
	{
		func_447();
		MISC::CLEAR_BIT(&(Local_486.f_53), 7);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Local_90.f_25, 6) || BitTest(Local_90.f_25, 21))
		{
			if (BitTest(Local_90.f_25, 21))
			{
				iVar0 = 1;
			}
			STATS::PLAYSTATS_HOLD_UP_MISSION_DONE(30, iLocal_802, iLocal_803, iVar0);
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_486.f_1))
	{
		if (CAM::IS_CAM_ACTIVE(Local_486.f_1))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::DESTROY_CAM(Local_486.f_1, false);
	}
	func_485();
}

void func_485()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_486()
{
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_560);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_561);
}

void func_487(int iParam0, int iParam1)
{
	if (func_288(iParam0) != -1)
	{
		if (Global_4535950[iParam0 /*85*/].f_66.f_2 == 1)
		{
			Global_4535950[iParam0 /*85*/].f_66.f_11 = iParam1;
		}
	}
}

int func_488()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (func_48(iVar1, 1, 1))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar2) == iLocal_585)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_489(struct<21> Param0)
{
	var uVar0;
	
	func_495(func_496(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(8);
	func_493(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_90, 75, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_165, 321, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_492())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_53(func_54(0));
		func_53(func_54(1));
		func_53(func_54(2));
		STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
		STREAMING::REQUEST_ANIM_DICT("mp_missheist_countrybank@cower");
		Local_90.f_46 = 8;
		if (func_491())
		{
			MISC::SET_BIT(&(Local_90.f_26), 11);
		}
		else if (func_490())
		{
			MISC::SET_BIT(&(Local_90.f_26), 12);
		}
		Local_90.f_30 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
		Local_90.f_33 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
		if ((func_14() && !func_425(PLAYER::PLAYER_ID(), 1)) && !func_425(PLAYER::PLAYER_ID(), 2))
		{
			Local_90.f_45 = 2;
			MISC::SET_BIT(&(Local_90.f_27), 0);
		}
		else
		{
			Local_90.f_45 = 1;
		}
		Local_90.f_73 = MISC::GET_RANDOM_FLOAT_IN_RANGE(18f, 28f);
	}
	if (func_100(PLAYER::PLAYER_ID()) != 155)
	{
		OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(func_54(1), 0);
	}
	uVar0 = func_133(1191, -1);
	if (BitTest(uVar0, 20) && BitTest(uVar0, 21))
	{
		MISC::SET_BIT(&(Local_486.f_53), 1);
	}
	Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 0;
	return 1;
}

int func_490()
{
	if (Local_486.f_50 >= 0 && Local_486.f_50 <= 9)
	{
		if (func_437(5, 6) || func_437(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (Local_486.f_50 >= 10 && Local_486.f_50 <= 14)
	{
		if (func_437(9, 10) || func_437(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (Local_486.f_50 >= 15 && Local_486.f_50 <= 19)
	{
		if (func_437(7, 8) || func_437(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_491()
{
	if (Local_486.f_50 >= 0 && Local_486.f_50 <= 9)
	{
		if (func_437(6, 7) || func_437(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (Local_486.f_50 >= 10 && Local_486.f_50 <= 14)
	{
		if (func_437(10, 11) || func_437(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (Local_486.f_50 >= 15 && Local_486.f_50 <= 19)
	{
		if (func_437(8, 9) || func_437(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_492()
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
		if (func_468())
		{
			return 0;
		}
		if (func_466(157))
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

int func_493(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_485();
			}
			else
			{
				return 0;
			}
		}
		if (!func_494(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_485();
					}
					else
					{
						return 0;
					}
				}
				if (func_468())
				{
					if (!bParam2)
					{
						func_485();
					}
					else
					{
						return 0;
					}
				}
				if (func_466(157))
				{
					if (!bParam2)
					{
						func_485();
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
					func_485();
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
				func_485();
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
			func_485();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_494(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_495(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_485();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_496(int iParam0)
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
		
		case 197:
			return 32;
		
		case 198:
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
		
		case 209:
			return 32;
		
		case 210:
			return 32;
		
		case 199:
			return 32;
		
		case 200:
			return 32;
		
		case 204:
			return 32;
		
		case 202:
			return 32;
		
		case 203:
			return 32;
		
		case 207:
			return 32;
		
		case 208:
			return 32;
		
		case 205:
			return 32;
		
		case 206:
			return 32;
		
		case 211:
			return 32;
		
		case 212:
			return 32;
		
		case 213:
			return 32;
		
		case 214:
			return 32;
		
		case 215:
			return 2;
		
		case 220:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 4;
		
		case 218:
			return 2;
		
		case 219:
			return 2;
		
		case 201:
			return 1;
		
		case 221:
			return 2;
		
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
			return 0;
		
		case 243:
			return 1;
		
		case 228:
			return 4;
		
		case 231:
			return 4;
		
		case 232:
			return 1;
		
		case 233:
			return 1;
		
		case 239:
			return 1;
		
		case 235:
			return 2;
		
		case 240:
			return 1;
		
		case 236:
			return 1;
		
		case 234:
			return 2;
		
		case 237:
			return 8;
		
		case 238:
			return 8;
		
		case 241:
			return 1;
		
		case 242:
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
		
		case 229:
			return 16;
		
		case 230:
			return 32;
		
		default:
	}
	switch (func_497(func_498(iParam0, 1)))
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

int func_497(int iParam0)
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
		
		default:
	}
	return -1;
}

int func_498(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 215:
			return 15;
		
		case 222:
			return 8;
		
		case 216:
			return 14;
		
		case 220:
			return 122;
		
		case 223:
			return 1;
		
		case 221:
			return 5;
		
		case 224:
			return 6;
		
		case 217:
			return 11;
		
		case 225:
			return 0;
		
		case 226:
			return 2;
		
		case 218:
			return 13;
		
		case 227:
			return 3;
		
		case 219:
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
		
		default:
	}
	if (bParam1)
	{
	}
	return 343;
}

