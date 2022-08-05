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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	float fLocal_62 = 0f;
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
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	struct<73> Local_81 = { 0, 0, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_154[32];
	struct<54> Local_475 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	int iLocal_531 = 0;
	char* sLocal_532 = NULL;
	int iLocal_533 = 0;
	struct<3> Local_534 = { 0, 0, 0 } ;
	struct<3> Local_537 = { 0, 0, 0 } ;
	float fLocal_540 = 0f;
	int iLocal_541 = 0;
	struct<3> Local_542 = { 0, 0, 0 } ;
	struct<3> Local_545 = { 0, 0, 0 } ;
	int iLocal_548 = 0;
	var uLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	struct<3> Local_558 = { 0, 0, 0 } ;
	float fLocal_561 = 0f;
	struct<3> Local_562 = { 0, 0, 0 } ;
	float fLocal_565 = 0f;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	struct<3> Local_578 = { 0, 0, 0 } ;
	struct<3> Local_581 = { 0, 0, 0 } ;
	struct<3> Local_584 = { 0, 0, 0 } ;
	struct<3> Local_587 = { 0, 0, 0 } ;
	float fLocal_590 = 0f;
	struct<3> Local_591 = { 0, 0, 0 } ;
	struct<3> Local_594 = { 0, 0, 0 } ;
	float fLocal_597 = 0f;
	var uLocal_598 = 16;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
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
	int iLocal_763[5] = { 0, 0, 0, 0, 0 };
	int iLocal_769[5] = { 0, 0, 0, 0, 0 };
	float fLocal_775 = 0f;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	int iLocal_790 = 0;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	int iLocal_797 = 0;
	int iLocal_798 = 0;
	struct<3> Local_799 = { 0, 0, 0 } ;
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_533 = joaat("mp_m_shopkeep_01");
	iLocal_541 = -1;
	iLocal_548 = -1;
	iLocal_566 = joaat("prop_till_01");
	iLocal_567 = SYSTEM::ROUND(Global_262145.f_2421);
	iLocal_568 = SYSTEM::ROUND(Global_262145.f_2417) + 1;
	iLocal_569 = 1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_451(ScriptParam_0))
		{
			func_446();
		}
		if (func_445(1))
		{
			func_433(PLAYER::PLAYER_ID(), 0, 98816, 0);
		}
	}
	while (true)
	{
		func_432();
		if (func_424())
		{
			func_446();
		}
		func_413();
		if (BitTest(Local_81.f_23, 6))
		{
			if (func_445(1))
			{
				func_433(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_410();
				MISC::CLEAR_BIT(&(Local_475.f_53), 7);
				func_409();
			}
		}
		switch (func_408(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
				if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
				{
					if (func_398())
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_397(Local_475.f_0), false);
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_0))
						{
							if (func_396() > 0)
							{
								if (!func_395(Local_81.f_0))
								{
									func_394(&uLocal_598, 3, NETWORK::NET_TO_PED(Local_81.f_0), &(Local_81.f_46), 1, 0);
									func_393();
								}
								MISC::SET_BIT(&(Local_475.f_52), 22);
								Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 2;
							}
						}
					}
				}
				if (func_396() == 6)
				{
					Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 5;
				}
				break;
			
			case 2:
				func_266(&Local_475, Local_542, Local_545, &Local_81, &(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_PED(Local_81.f_0), Local_591, Local_594, fLocal_597, false, true, 0), 0);
				func_259();
				if (func_396() == 2)
				{
					func_129();
				}
				else if (func_396() == 6)
				{
					Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 5;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_581, 30f, 30f, 30f, false, true, 0))
				{
					Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
				}
				break;
			
			case 5:
				func_128(&(Local_81.f_69));
				if (func_127(&(Local_81.f_69)))
				{
					Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
				}
				break;
			
			case 4:
				Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
			
			case 6:
				func_53();
				func_446();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_396())
			{
				case 0:
					if (!BitTest(Local_475.f_52, 16))
					{
						func_51(func_52(0));
						func_51(func_52(1));
						func_51(func_52(2));
						STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
						if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
						{
							if (func_398())
							{
								MISC::CLEAR_AREA(Local_542, 1.5f, false, true, false, true);
								MISC::CLEAR_AREA(Local_537, 1.5f, false, true, false, true);
								MISC::SET_BIT(&(Local_475.f_52), 16);
							}
						}
					}
					else if (func_49())
					{
						Local_81.f_12 = 2;
					}
					break;
				
				case 2:
					func_48();
					func_45();
					func_29();
					func_28();
					func_21();
					func_20();
					func_12();
					func_11();
					if (func_4())
					{
						func_1();
						Local_81.f_12 = 6;
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
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_13))
	{
		if (func_3(Local_81.f_13))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(Local_81.f_13)))
			{
				ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_81.f_13), true, true);
				func_2(&(Local_81.f_13));
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
	if (BitTest(Local_81.f_23, 2))
	{
		return 1;
	}
	if (BitTest(Local_81.f_23, 3))
	{
		return 1;
	}
	if (!func_10())
	{
		if ((BitTest(Local_81.f_23, 11) || BitTest(Local_81.f_23, 19)) || (BitTest(Local_81.f_23, 9) && !BitTest(Local_81.f_23, 20)))
		{
			func_6(Local_475.f_50, 1, func_7());
			return 1;
		}
		if (BitTest(Local_81.f_23, 18))
		{
			func_6(Local_475.f_50, 1, func_7());
			return 1;
		}
	}
	if (BitTest(Local_81.f_23, 18))
	{
		if (!BitTest(Local_81.f_24, 7))
		{
			func_6(Local_475.f_50, 1, func_7());
			MISC::SET_BIT(&(Local_81.f_24), 7);
		}
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = -903578754;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 4, iParam2);
	}
}

int func_7()
{
	return func_8(NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_9(), -1, 0));
}

int func_8(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_9()
{
	switch (Global_2727594)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_10()
{
	if ((BitTest(Local_81.f_23, 13) || BitTest(Local_81.f_23, 27)) || BitTest(Local_81.f_23, 28))
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	var uVar0;
	
	if (!BitTest(Local_81.f_23, 21))
	{
		if (func_395(Local_81.f_0))
		{
			Local_81.f_72 = NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_81.f_0, &uVar0);
			MISC::SET_BIT(&(Local_81.f_23), 21);
		}
	}
	if (!BitTest(Local_81.f_23, 19))
	{
		if (BitTest(Local_81.f_23, 10) && Local_81.f_37 <= 0f)
		{
			MISC::SET_BIT(&(Local_81.f_23), 19);
		}
	}
	if (!BitTest(Local_81.f_24, 17))
	{
		if (BitTest(Local_81.f_23, 20))
		{
			if (func_3(Local_81.f_13))
			{
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_81.f_13), false, false);
				MISC::SET_BIT(&(Local_81.f_24), 17);
			}
		}
	}
	if (!BitTest(Local_81.f_23, 6))
	{
		if (Global_2810701.f_8 == 1)
		{
			MISC::SET_BIT(&(Local_81.f_23), 6);
			MISC::SET_BIT(&(Local_81.f_23), 16);
		}
	}
}

int func_12()
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() || !BitTest(Local_81.f_25, 0))
	{
		return 0;
	}
	if (Local_81.f_66 != 6)
	{
		if (Local_81.f_66 > 0 && func_395(Local_81.f_15))
		{
			Local_81.f_66 = 6;
			return 0;
		}
		switch (Local_81.f_66)
		{
			case 0:
				if (!func_18(&uLocal_788, 10000, 0))
				{
					iVar0 = PED::GET_RANDOM_PED_AT_COORD(Local_591, 20f, 20f, 20f, -1);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
						{
							iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !PED::IS_COP_PED_IN_AREA_3D(Local_591, 25f, 25f, 25f)) && !ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_578, 1f, 1f, 2f, false, true, 0)) && !WEAPON::IS_PED_ARMED(iVar0, 7)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, true)) && PED::IS_PED_HUMAN(iVar0)) && func_17(iVar1))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
								{
									if (func_16(&(Local_81.f_15), iVar0, 1, 0))
									{
										WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_81.f_15), joaat("weapon_pistol"), 25000, false);
										PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_81.f_15), true);
										Local_81.f_66 = 1;
										MISC::SET_BIT(&(Local_81.f_25), 1);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_81.f_15), Global_1837188);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_81.f_15), 2);
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_81.f_15), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
										func_394(&uLocal_598, 4, NETWORK::NET_TO_PED(Local_81.f_15), "StoreHero", 1, 0);
										TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_81.f_15), func_15(), 0, true);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((BitTest(Local_81.f_23, 9) || BitTest(Local_81.f_23, 5)) || BitTest(Local_81.f_23, 4))
				{
					Local_81.f_66 = 2;
				}
				break;
			
			case 2:
				if (func_18(&(Local_81.f_67), 3000, 0) || (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_15), joaat("script_task_go_to_entity")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_15), joaat("script_task_go_to_entity")) != 1))
				{
					func_14(&(Local_81.f_67));
					Local_81.f_66 = 3;
				}
				break;
			
			case 3:
				if (((BitTest(Local_81.f_23, 5) || BitTest(Local_81.f_25, 8)) || BitTest(Local_81.f_25, 9)) || func_18(&(Local_81.f_67), 5000, 0))
				{
					if (func_13() || func_18(&(Local_81.f_67), 5000, 0))
					{
						Local_81.f_66 = 4;
					}
					else
					{
						Local_81.f_66 = 5;
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

int func_13()
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_15()
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

int func_16(var uParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_17(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01")) || iParam0 == joaat("s_m_y_casino_01"))
	{
		return 0;
	}
	return 1;
}

int func_18(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
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

void func_19(var uParam0, bool bParam1, bool bParam2)
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

void func_20()
{
	if (Local_81.f_30 == 0)
	{
		if (Local_81.f_3 >= 2 && Local_81.f_3 != 9)
		{
			Local_81.f_30 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(101, PLAYER::PLAYER_PED_ID(), 60000f);
		}
	}
}

void func_21()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!BitTest(Local_81.f_1, 5))
	{
		if (Local_81.f_41 > 0)
		{
			func_25();
			if (!BitTest(Local_81.f_1, 5))
			{
				return;
			}
		}
	}
	if (BitTest(Local_81.f_1, 1))
	{
		if (Local_81.f_2 == 3 && !BitTest(Local_81.f_23, 9))
		{
			Local_81.f_2 = 0;
		}
		MISC::CLEAR_BIT(&(Local_81.f_1), 1);
	}
	switch (Local_81.f_2)
	{
		case 0:
			if ((((func_3(Local_81.f_0) && !func_395(Local_81.f_0)) && func_3(Local_81.f_16[Local_81.f_26])) && Local_81.f_3 != 8) && Local_81.f_3 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_81.f_0)))
				{
					if (BitTest(Local_81.f_23, 9) || BitTest(Local_81.f_1, 4))
					{
						Local_81.f_2 = 2;
						return;
					}
					if (!iLocal_531)
					{
						TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_81.f_0), Local_81.f_42, 1600);
						iLocal_531 = 1;
					}
					if (func_18(&uLocal_778, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_81.f_0));
						fVar1 = (Local_81.f_42 - 10f);
						fVar2 = (Local_81.f_42 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_81.f_42 - 10f) + 360f);
							fVar1 = ((Local_81.f_42 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_81.f_42 - 10f) - 360f);
							fVar1 = ((Local_81.f_42 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_18(&uLocal_784, 1000, 0)) || func_18(&uLocal_784, 3125, 0))
						{
							TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_81.f_0));
							Local_81.f_27 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_PED(Local_81.f_0), -0.65f, 0.87f, -0.02f), Local_545, 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_81.f_0), Local_81.f_27, "mp_am_hold_up", func_24(Local_81.f_26), 1.5f, -1.5f, 157, 16, 1000f, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_16[Local_81.f_26]))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_81.f_16[Local_81.f_26]), true, false);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_81.f_16[Local_81.f_26]), Local_81.f_27, "mp_am_hold_up", func_23(Local_81.f_26), 4f, -4f, 8);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_81.f_27);
							Local_81.f_2 = 1;
							iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_27);
						}
					}
				}
			}
			break;
		
		case 1:
			if (BitTest(Local_81.f_23, 9) || BitTest(Local_81.f_1, 4))
			{
				iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_27);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_81.f_27);
				}
				Local_81.f_2 = 2;
				return;
			}
			if (iLocal_548 != -1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548) || func_18(&uLocal_780, 2000, 0))
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_548) == 1f) || func_18(&uLocal_780, 2000, 0))
					{
						if ((func_3(Local_81.f_0) && !func_395(Local_81.f_0)) && !BitTest(Local_81.f_23, 9))
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_81.f_0));
						}
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_81.f_27);
						Local_81.f_2 = 2;
					}
				}
			}
			else
			{
				iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_27);
			}
			break;
		
		case 2:
			func_3(Local_81.f_16[Local_81.f_26]);
			if (func_18(&uLocal_786, 1000, 0) && func_3(Local_81.f_16[Local_81.f_26]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_OBJ(Local_81.f_16[Local_81.f_26])))
				{
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_81.f_16[Local_81.f_26]), false, false);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_81.f_16[Local_81.f_26]), true);
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_81.f_16[Local_81.f_26]), func_22(Local_81.f_26), true, false, false, true);
				}
				iLocal_548 = -1;
				iLocal_531 = 0;
				if (BitTest(Local_81.f_1, 4))
				{
					MISC::CLEAR_BIT(&(Local_81.f_1), 4);
				}
				func_14(&uLocal_786);
				func_14(&uLocal_780);
				func_14(&uLocal_778);
				func_14(&uLocal_784);
				Local_81.f_2 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_22(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return Local_562 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return Local_562 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return Local_562 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return Local_562 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return Local_562 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return Local_562 - Vector(1f, -0.2f, -0.1f);
		
		default:
	}
	return Local_562 - Vector(1f, 0f, -0.1f);
}

char* func_23(int iParam0)
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
		
		default:
	}
	return "purchase_energydrink";
}

char* func_24(int iParam0)
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
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_25()
{
	if (((((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_16[3]) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_16[1])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_16[2])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_16[4])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_16[0])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_16[5]))
	{
		if (((((func_51(func_27(3)) && func_51(func_27(1))) && func_51(func_27(2))) && func_51(func_27(4))) && func_51(func_27(0))) && func_51(func_27(5)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 6, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_16[3]))
				{
					if (func_26(&(Local_81.f_16[3]), func_27(3), func_22(3), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_81.f_16[3]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_534));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_81.f_16[3]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_81.f_16[3]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_16[1]))
				{
					if (func_26(&(Local_81.f_16[1]), func_27(1), func_22(1), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_81.f_16[1]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_534));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_81.f_16[1]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_81.f_16[1]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_16[2]))
				{
					if (func_26(&(Local_81.f_16[2]), func_27(2), func_22(2), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_81.f_16[2]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_534));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_81.f_16[2]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_81.f_16[2]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_16[4]))
				{
					if (func_26(&(Local_81.f_16[4]), func_27(4), func_22(4), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_81.f_16[4]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_534));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_81.f_16[4]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_81.f_16[4]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_16[0]))
				{
					if (func_26(&(Local_81.f_16[0]), func_27(0), func_22(0), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_81.f_16[0]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_534));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_81.f_16[0]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_81.f_16[0]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_16[5]))
				{
					if (func_26(&(Local_81.f_16[5]), func_27(5), func_22(5), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_81.f_16[5]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_534));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_81.f_16[5]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_81.f_16[5]), false, false);
					}
				}
			}
		}
	}
	else
	{
		MISC::SET_BIT(&(Local_81.f_1), 5);
		return 1;
	}
	return 0;
}

int func_26(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		if (bParam10)
		{
			NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_OBJ(*uParam0), true);
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

int func_27(int iParam0)
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
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_28()
{
	float fVar0;
	
	if (!BitTest(Local_81.f_23, 9))
	{
		if (Global_2810701.f_8 == 1 || BitTest(Local_81.f_23, 6))
		{
			if ((((func_3(Local_81.f_13) && func_3(Local_81.f_0)) && !func_395(Local_81.f_0)) && Local_81.f_3 != 8) && Local_81.f_3 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_81.f_0)))
				{
					if (!BitTest(Local_475.f_52, 30))
					{
						TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_81.f_0), Local_81.f_42, 1600);
						MISC::SET_BIT(&(Local_475.f_52), 30);
					}
					if (func_18(&uLocal_776, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_81.f_0));
						if ((fVar0 > (Local_81.f_42 - 20f) && fVar0 < (Local_81.f_42 + 20f)) || func_18(&uLocal_782, 1500, 0))
						{
							TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_81.f_0));
							Local_81.f_29 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_542, Local_545, 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_81.f_0), Local_81.f_29, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1000f, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_13))
							{
								ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_81.f_13), false);
								ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_81.f_13), true);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_81.f_13), Local_81.f_29, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_14))
							{
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_81.f_14), Local_81.f_29, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_81.f_29);
							MISC::SET_BIT(&(Local_81.f_23), 9);
						}
					}
				}
				else
				{
					Local_81.f_3 = 8;
				}
			}
		}
	}
	else if (!BitTest(Local_81.f_23, 17))
	{
		iLocal_541 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_29);
		if (iLocal_541 != -1)
		{
			func_3(Local_81.f_0);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_541))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				MISC::SET_BIT(&(Local_81.f_23), 17);
			}
		}
	}
	else if (!BitTest(Local_81.f_24, 15))
	{
		iLocal_541 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_29);
		if (iLocal_541 != -1)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_541))
			{
				func_3(Local_81.f_0);
				if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_13) && func_3(Local_81.f_13)) && func_3(Local_81.f_0))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_541) > 0.44f)
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_81.f_13), true, false);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_81.f_13), true, false);
						MISC::SET_BIT(&(Local_81.f_24), 15);
					}
				}
			}
		}
	}
}

int func_29()
{
	int iVar0;
	float fVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	func_43();
	if (Local_81.f_3 != 9)
	{
		if (func_395(Local_81.f_0))
		{
			Local_81.f_3 = 9;
			return 0;
		}
		if ((BitTest(Local_81.f_23, 6) && !BitTest(Local_81.f_23, 9)) && Local_81.f_3 < 8)
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_13) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_14))
			{
				Local_81.f_3 = 8;
			}
		}
		switch (Local_81.f_3)
		{
			case 0:
				if (!func_395(Local_81.f_0))
				{
					Local_81.f_3 = 1;
				}
				break;
			
			case 1:
				if (BitTest(Local_81.f_23, 4))
				{
					Local_81.f_3 = 2;
				}
				else if (BitTest(Local_81.f_23, 6) || BitTest(Local_81.f_23, 9))
				{
					Local_81.f_3 = 4;
				}
				else if (func_41() || func_34(0))
				{
					Local_81.f_3 = 8;
				}
				else if (func_32())
				{
					Local_81.f_3 = 7;
				}
				break;
			
			case 2:
				if (BitTest(Local_81.f_23, 6) || BitTest(Local_81.f_23, 9))
				{
					Local_81.f_3 = 4;
				}
				else if (func_41() || func_34(1))
				{
					Local_81.f_3 = 8;
				}
				else if (func_32())
				{
					Local_81.f_3 = 7;
				}
				break;
			
			case 3:
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_achieve_heading")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_achieve_heading")) != 1)
				{
					Local_81.f_3 = 4;
				}
				else if (func_34(1))
				{
					Local_81.f_3 = 8;
				}
				else if (func_32())
				{
					Local_81.f_3 = 7;
				}
				break;
			
			case 4:
				if (BitTest(Local_81.f_23, 17))
				{
					iVar0 = 0;
					iLocal_541 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_29);
					if (iLocal_541 != -1)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_541))
						{
							if (MISC::IS_BULLET_IN_AREA(Local_534, 3f, false))
							{
								if (!BitTest(Local_81.f_23, 25))
								{
									MISC::SET_BIT(&(Local_81.f_23), 25);
								}
								Local_81.f_33 = (Local_81.f_33 + 0.35f);
							}
							fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_541);
							if (fVar1 >= 0.8f)
							{
								Local_81.f_37 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_81.f_37 = 0f;
							}
							else if (fVar1 > Local_81.f_37)
							{
								Local_81.f_37 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_81.f_37 = 1f;
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
						Local_81.f_3 = 6;
					}
					else if (func_34(1))
					{
						Local_81.f_3 = 8;
					}
					else if (func_32())
					{
						Local_81.f_3 = 7;
					}
				}
				break;
			
			case 5:
				if (func_41() || func_34(1))
				{
					Local_81.f_3 = 8;
				}
				break;
			
			case 6:
				func_30();
				if (func_41() || func_34(1))
				{
					Local_81.f_3 = 8;
				}
				else if (func_32())
				{
					Local_81.f_3 = 7;
				}
				else if (BitTest(Local_81.f_24, 3))
				{
					if (!BitTest(Local_81.f_24, 4))
					{
						Local_81.f_3 = 7;
					}
				}
				break;
			
			case 8:
				func_30();
				break;
			
			case 7:
				break;
		}
	}
	else if (!BitTest(Local_81.f_24, 10))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_0))
		{
			Local_81.f_43 = (Local_81.f_43 - 1);
			MISC::SET_BIT(&(Local_81.f_24), 10);
		}
	}
	return 1;
}

void func_30()
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Local_81.f_24, 2))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		iVar1 = (iLocal_569 + func_31());
		if (iVar0 < iVar1)
		{
			MISC::SET_BIT(&(Local_81.f_24), 3);
		}
		MISC::SET_BIT(&(Local_81.f_24), 2);
	}
}

int func_31()
{
	int iVar0;
	
	iVar0 = (Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_36 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_32()
{
	int iVar0;
	int iVar1;
	
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 24) || PAD::IS_CONTROL_JUST_PRESSED(0, 257))
	{
		iVar0 = func_33(PLAYER::PLAYER_PED_ID());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
			if (((((((WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) == 0 && iVar1 != joaat("GROUP_MELEE")) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != joaat("GROUP_FIREEXTINGUISHER")) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_574)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_33(int iParam0)
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true);
	return uVar0;
}

int func_34(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar14;
	int iVar15;
	
	if (func_39(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	if (func_38(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (BitTest(Local_81.f_23, 5))
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_81.f_0)))
	{
		return 1;
	}
	if (func_37() || func_36())
	{
		return 1;
	}
	if (func_35())
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
					if (PED::IS_PED_INJURED(iVar14) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar14) == iLocal_574)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
						{
							iVar15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
							if (iVar15 != NETWORK::NET_TO_PED(Local_81.f_0))
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
		if (!BitTest(Local_81.f_24, 5))
		{
			if (PED::IS_COP_PED_IN_AREA_3D(Local_584 - Vector(25f, 25f, 25f), Local_584 + Vector(25f, 25f, 25f)))
			{
				MISC::SET_BIT(&(Local_81.f_24), 5);
			}
		}
	}
	return 0;
}

int func_35()
{
	if (Local_475.f_50 >= 15 && Local_475.f_50 <= 19)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(9, Local_584, 40f))
		{
			return 1;
		}
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_584, Local_587, fLocal_590))
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_591, Local_594, fLocal_597))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_591, Local_594, fLocal_597, joaat("weapon_grenade"), false) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_591, Local_594, fLocal_597, joaat("weapon_molotov"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_591, Local_594, fLocal_597, joaat("weapon_stickybomb"), false))
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_584, Local_587, fLocal_590, joaat("weapon_grenade"), false) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_584, Local_587, fLocal_590, joaat("weapon_molotov"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_584, Local_587, fLocal_590, joaat("weapon_stickybomb"), false))
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0)
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

int func_39(int iParam0, int iParam1)
{
	if (Global_1893551[iParam0 /*599*/] == iParam1)
	{
		return func_40(iParam0);
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1893551[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_41()
{
	if (func_42() || func_35())
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_584, Local_587, fLocal_590, false))
	{
		return 1;
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_591, Local_594, fLocal_597, false))
	{
		return 1;
	}
	return 0;
}

void func_43()
{
	if (Local_81.f_33 > 0f)
	{
		if (func_44(&(Local_81.f_34), 50, 0))
		{
			Local_81.f_33 = (Local_81.f_33 - 0.02f);
			if (Local_81.f_33 < 0f)
			{
				Local_81.f_33 = 0f;
			}
			func_14(&(Local_81.f_34));
		}
	}
}

int func_44(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_14(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_14(uParam0);
		return 1;
	}
	return 0;
}

void func_45()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_555)))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_555));
		iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
		if (!BitTest(Local_81.f_23, 11))
		{
			if (BitTest(Local_154[iLocal_555 /*10*/], 5))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_13))
				{
					if (func_3(Local_81.f_13))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_81.f_13), true, true);
						func_47(&(Local_81.f_13));
					}
				}
				else
				{
					Local_81.f_38 = { Local_154[iLocal_555 /*10*/].f_7 };
					Local_81.f_44 = 7;
					MISC::SET_BIT(&(Local_81.f_23), 11);
				}
			}
		}
		if (!BitTest(Local_81.f_23, 14))
		{
			if (BitTest(Local_154[iLocal_555 /*10*/], 6))
			{
				MISC::SET_BIT(&(Local_81.f_23), 14);
			}
		}
		if (!BitTest(Local_81.f_23, 15))
		{
			if (BitTest(Local_154[iLocal_555 /*10*/], 7))
			{
				MISC::SET_BIT(&(Local_81.f_23), 15);
			}
		}
		if (!BitTest(Local_81.f_23, 26))
		{
			if (BitTest(Local_154[iLocal_555 /*10*/], 24))
			{
				MISC::SET_BIT(&(Local_81.f_23), 26);
			}
		}
		if (!BitTest(Local_81.f_23, 22))
		{
			if (BitTest(Local_154[iLocal_555 /*10*/], 22))
			{
				MISC::SET_BIT(&(Local_81.f_23), 22);
			}
		}
		if (!BitTest(Local_81.f_23, 23))
		{
			if (BitTest(Local_154[iLocal_555 /*10*/], 23))
			{
				MISC::SET_BIT(&(Local_81.f_23), 23);
			}
		}
		if (!BitTest(Local_81.f_23, 30))
		{
			if (BitTest(Local_154[iLocal_555 /*10*/], 25))
			{
				MISC::SET_BIT(&(Local_81.f_23), 30);
			}
		}
		if (!BitTest(Local_81.f_23, 31))
		{
			if (BitTest(Local_154[iLocal_555 /*10*/], 26))
			{
				MISC::SET_BIT(&(Local_81.f_23), 31);
			}
		}
		if (!BitTest(Local_81.f_24, 6))
		{
			if (BitTest(Local_154[iLocal_555 /*10*/], 29))
			{
				MISC::SET_BIT(&(Local_81.f_24), 6);
			}
		}
		if (!BitTest(Local_81.f_24, 9))
		{
			if (BitTest(Local_154[iLocal_555 /*10*/], 31))
			{
				MISC::SET_BIT(&(Local_81.f_24), 9);
			}
		}
		if (!BitTest(Local_81.f_1, 3))
		{
			if (BitTest(Local_154[iLocal_555 /*10*/].f_1, 3))
			{
				MISC::SET_BIT(&(Local_81.f_1), 3);
			}
		}
		if (BitTest(Local_81.f_25, 1))
		{
			if (!BitTest(Local_81.f_25, 6))
			{
				if (BitTest(Local_154[iLocal_555 /*10*/].f_5, 1))
				{
					MISC::SET_BIT(&(Local_81.f_25), 6);
				}
			}
			if (!BitTest(Local_81.f_25, 7))
			{
				if (BitTest(Local_154[iLocal_555 /*10*/].f_5, 2))
				{
					MISC::SET_BIT(&(Local_81.f_25), 7);
				}
			}
			if (!BitTest(Local_81.f_25, 5))
			{
				if (BitTest(Local_154[iLocal_555 /*10*/].f_5, 0))
				{
					MISC::SET_BIT(&(Local_81.f_25), 5);
				}
			}
		}
		if (!BitTest(Local_81.f_23, 20))
		{
			if (BitTest(Local_154[iLocal_555 /*10*/], 11))
			{
				MISC::SET_BIT(&(Local_81.f_23), 20);
			}
		}
		if (!BitTest(Local_81.f_24, 17))
		{
			if (BitTest(Local_154[iLocal_555 /*10*/], 13))
			{
				MISC::SET_BIT(&(Local_81.f_24), 17);
			}
		}
		if (func_46(iVar0, 1, 1))
		{
			if (!BitTest(Local_81.f_23, 5))
			{
				if (!func_395(Local_81.f_0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_81.f_0), iVar1, true))
					{
						MISC::SET_BIT(&(Local_81.f_23), 5);
					}
				}
			}
			if (BitTest(Local_81.f_25, 1))
			{
				if (!BitTest(Local_81.f_25, 8))
				{
					if (!func_395(Local_81.f_15))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_81.f_15), iVar1, true))
						{
							MISC::SET_BIT(&(Local_81.f_25), 8);
						}
					}
				}
				if (!BitTest(Local_81.f_25, 9))
				{
					if (BitTest(Local_154[iLocal_555 /*10*/].f_5, 3))
					{
						MISC::SET_BIT(&(Local_81.f_25), 9);
					}
				}
			}
			if (!BitTest(Local_81.f_23, 6))
			{
				if (BitTest(Local_154[iLocal_555 /*10*/], 1))
				{
					MISC::SET_BIT(&(Local_81.f_23), 6);
				}
			}
			if (!BitTest(Local_81.f_23, 16))
			{
				if (BitTest(Local_154[iLocal_555 /*10*/], 8))
				{
					MISC::SET_BIT(&(Local_81.f_23), 16);
				}
			}
			if (!BitTest(Local_81.f_24, 1))
			{
				if (BitTest(Local_154[iLocal_555 /*10*/], 27))
				{
					MISC::SET_BIT(&(Local_81.f_24), 1);
				}
			}
			if (!BitTest(Local_81.f_23, 7))
			{
				if (BitTest(Local_154[iLocal_555 /*10*/], 0))
				{
					MISC::SET_BIT(&(Local_81.f_23), 7);
				}
			}
			if (!BitTest(Local_81.f_23, 10))
			{
				if (BitTest(Local_154[iLocal_555 /*10*/], 4))
				{
					if (Local_81.f_3 != 5 && Local_81.f_3 != 6)
					{
						Local_81.f_3 = 5;
					}
					MISC::SET_BIT(&(Local_81.f_23), 10);
				}
			}
			if (!BitTest(Local_81.f_1, 2))
			{
				if (BitTest(Local_154[iLocal_555 /*10*/].f_1, 2))
				{
					MISC::SET_BIT(&(Local_81.f_1), 2);
					MISC::SET_BIT(&(Local_81.f_1), 4);
					iLocal_557 = iLocal_555;
				}
			}
			else if (!BitTest(Local_154[iLocal_557 /*10*/].f_1, 2))
			{
				MISC::CLEAR_BIT(&(Local_81.f_1), 2);
				if (BitTest(Local_81.f_1, 3))
				{
					MISC::CLEAR_BIT(&(Local_81.f_1), 3);
				}
			}
			if (!BitTest(Local_81.f_24, 8))
			{
				if (BitTest(Local_154[iLocal_555 /*10*/], 30))
				{
					MISC::SET_BIT(&(Local_81.f_24), 8);
				}
			}
			if (!BitTest(Local_81.f_1, 0))
			{
				if (BitTest(Local_154[iLocal_555 /*10*/].f_1, 0))
				{
					MISC::SET_BIT(&(Local_81.f_1), 0);
					MISC::SET_BIT(&(Local_81.f_1), 1);
					Local_81.f_26 = Local_154[iLocal_555 /*10*/].f_2;
					iLocal_556 = iLocal_555;
				}
			}
			else if (!BitTest(Local_154[iLocal_556 /*10*/].f_1, 0))
			{
				MISC::CLEAR_BIT(&(Local_81.f_1), 0);
			}
			if (!BitTest(Local_81.f_24, 13))
			{
				if (BitTest(Local_154[iLocal_555 /*10*/], 21))
				{
					MISC::SET_BIT(&(Local_81.f_24), 13);
				}
			}
		}
	}
	iLocal_555++;
	if (iLocal_555 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_555 = 0;
	}
}

int func_46(int iParam0, bool bParam1, bool bParam2)
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

void func_47(var uParam0)
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

void func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	MISC::SET_BIT(&(Local_81.f_23), 2);
	MISC::SET_BIT(&(Local_81.f_23), 3);
	MISC::CLEAR_BIT(&(Local_81.f_23), 13);
	MISC::CLEAR_BIT(&(Local_81.f_23), 27);
	MISC::CLEAR_BIT(&(Local_81.f_23), 28);
	MISC::CLEAR_BIT(&(Local_81.f_24), 4);
	if (!BitTest(Local_81.f_23, 18))
	{
		if (func_395(Local_81.f_0))
		{
			if (Local_81.f_37 <= 0f)
			{
				MISC::SET_BIT(&(Local_81.f_23), 18);
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
			if (Local_154[iVar0 /*10*/].f_3 > 0)
			{
				Local_81.f_4 = (Local_81.f_4 + Local_154[iVar0 /*10*/].f_3);
				Local_154[iVar0 /*10*/].f_3 = 0;
			}
			if (BitTest(Local_81.f_23, 3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_581, 30f, 30f, 30f, false, true, 0))
				{
					MISC::CLEAR_BIT(&(Local_81.f_23), 3);
				}
			}
			if (!BitTest(Local_81.f_24, 16))
			{
				if (BitTest(Local_154[iVar0 /*10*/], 12))
				{
					MISC::SET_BIT(&(Local_81.f_24), 16);
				}
			}
			if (func_46(iVar5, 1, 1))
			{
				if (BitTest(Local_81.f_23, 2))
				{
					MISC::CLEAR_BIT(&(Local_81.f_23), 2);
				}
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar6) == iLocal_574)
				{
					if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_575 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_576)
					{
						iVar2 = 1;
					}
					else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_577)
					{
						MISC::SET_BIT(&(Local_81.f_23), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					MISC::SET_BIT(&(Local_81.f_23), 13);
					iVar4++;
					if (!BitTest(Local_81.f_23, 9) && !BitTest(Local_81.f_23, 21))
					{
						if (!BitTest(Local_81.f_23, 4))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(iVar6, &iVar1, true))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_81.f_32 == -1)
									{
										Local_81.f_32 = iVar0;
									}
									else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_81.f_32)))
									{
										Local_81.f_32 = -1;
									}
									MISC::SET_BIT(&(Local_81.f_23), 4);
									if (!BitTest(Local_81.f_23, 12))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_534, 2.5f, 2.5f, 3f, false, true, 0))
										{
											MISC::SET_BIT(&(Local_81.f_23), 12);
										}
									}
								}
							}
						}
						if (!BitTest(Local_81.f_24, 0))
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar5) > 0)
							{
								MISC::SET_BIT(&(Local_81.f_24), 0);
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_581, 5f, 5f, 2.5f, false, true, 0))
				{
					MISC::SET_BIT(&(Local_81.f_23), 28);
					iVar4++;
				}
				if (!BitTest(Local_81.f_24, 4))
				{
					if (BitTest(Local_154[iVar0 /*10*/], 28))
					{
						MISC::SET_BIT(&(Local_81.f_24), 4);
					}
				}
				if ((BitTest(Local_81.f_23, 9) && !BitTest(Local_81.f_23, 20)) && !BitTest(Local_81.f_23, 19))
				{
					if (Local_154[iLocal_555 /*10*/].f_6 > Local_81.f_33)
					{
						Local_81.f_33 = Local_154[iVar0 /*10*/].f_6;
						func_14(&(Local_81.f_34));
						if (!BitTest(Local_81.f_23, 24))
						{
							if (Local_81.f_33 > (0.55f + 0.2f))
							{
								MISC::SET_BIT(&(Local_81.f_23), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_81.f_41 != iVar4)
	{
		Local_81.f_41 = iVar4;
	}
}

int func_49()
{
	int iVar0;
	
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_0) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_13)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_14))
	{
		if ((func_51(iLocal_533) && func_51(func_52(1))) && func_51(func_52(2)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 0, 2, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_0))
				{
					if (func_50(&Local_81, 4, iLocal_533, Local_534 - Vector(1f, 0f, 0f), Local_81.f_42, 1, 1, 1))
					{
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_81.f_0), 0, iLocal_763[0], iLocal_769[0], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_81.f_0), 2, iLocal_763[1], iLocal_769[1], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_81.f_0), 3, iLocal_763[2], iLocal_769[2], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_81.f_0), 4, iLocal_763[3], iLocal_769[3], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_81.f_0), 8, iLocal_763[4], iLocal_769[4], 0);
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_PED(Local_81.f_0), INTERIOR::GET_INTERIOR_AT_COORDS(Local_534));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_81.f_0), true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_81.f_0), true);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_81.f_0), true, 0f);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_81.f_0), 16);
						PED::SET_PED_CAN_EVASIVE_DIVE(NETWORK::NET_TO_PED(Local_81.f_0), false);
						PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_0), 1024, true);
						WEAPON::REMOVE_ALL_PED_WEAPONS(NETWORK::NET_TO_PED(Local_81.f_0), true);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_81.f_0), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
						if (!DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_81.f_0), "XP_Blocker"))
						{
							DECORATOR::DECOR_SET_BOOL(NETWORK::NET_TO_PED(Local_81.f_0), "XP_Blocker", true);
						}
						func_394(&uLocal_598, 3, NETWORK::NET_TO_PED(Local_81.f_0), &(Local_81.f_46), 1, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_13))
				{
					iVar0 = OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_crate_unfixed_low_glow"), Local_558, false, func_52(1));
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						Local_81.f_13 = NETWORK::OBJ_TO_NET(iVar0);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_81.f_13), true);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_81.f_13), false, false);
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_81.f_13), fLocal_561);
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_81.f_13), INTERIOR::GET_INTERIOR_AT_COORDS(Local_534));
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_81.f_13), true);
						OBJECT::_0xA08FE5E49BDC39DD(NETWORK::NET_TO_OBJ(Local_81.f_13), -0.2f, true);
						OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_81.f_13), true, false);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_81.f_13), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_14))
				{
					if (func_26(&(Local_81.f_14), func_52(2), Local_562 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_81.f_14), fLocal_565);
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_81.f_14), INTERIOR::GET_INTERIOR_AT_COORDS(Local_534));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_81.f_14), true);
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

int func_50(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
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
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, bParam9);
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

bool func_51(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_52(int iParam0)
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

void func_53()
{
	if (!BitTest(Local_475.f_52, 20))
	{
		if (BitTest(Local_81.f_23, 11) || BitTest(Local_81.f_24, 16))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_574 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_581, 5f, 5f, 2.5f, false, true, 0))
			{
				func_56();
				func_54();
				func_6(Local_475.f_50, 1, func_7());
				MISC::SET_BIT(&(Local_475.f_52), 20);
			}
			else
			{
				if ((BitTest(Local_475.f_52, 31) && (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_581, 20f, 20f, 20f, false, true, 0))
				{
					func_56();
				}
				MISC::SET_BIT(&(Local_475.f_52), 20);
			}
		}
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = func_55(47);
	Global_2676730[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2676730[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_55(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2676730[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2676730[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_56()
{
	int iVar0;
	
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
	{
		iVar0 = func_126(1182, -1, 0);
		if (!BitTest(iVar0, Local_475.f_50))
		{
			func_124(14, 1, -1);
			MISC::SET_BIT(&iVar0, Local_475.f_50);
			func_123(1182, iVar0, -1, 1, 0);
			if (func_122(14, -1) >= 20)
			{
				func_108(44, 1);
			}
			else
			{
				func_107(44, func_122(14, -1));
			}
		}
		func_105(1168, 1, -1);
		func_104(12, 1, -1);
		func_102(19);
		iLocal_791 = 100;
		iLocal_791 = SYSTEM::ROUND((IntToFloat(iLocal_791) * Global_262145.f_4225));
		func_57(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_791, 1, -1, 0);
	}
}

var func_57(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_58(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_58(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_59(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_59(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_101(PLAYER::PLAYER_ID()) || func_100(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9894 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9894;
		}
	}
	else if (func_97() || func_93(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23051 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_23051;
		}
	}
	else if (Global_262145.f_6892 > 20000)
	{
		iVar2 = 20000;
	}
	else
	{
		iVar2 = Global_262145.f_6892;
	}
	if (func_92(sParam2))
	{
	}
	if (func_91())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_89(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_88(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_85(0, &iVar1);
					break;
				
				case 3:
					func_85(1, &iVar1);
					break;
				
				case 1:
					func_81(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957933)
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
			func_105(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_70((func_80(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_2 != -1)
				{
					func_105(1166, iVar1, -1);
				}
				func_64(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_60((func_62(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_60((func_62(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_60(int iParam0)
{
	if (func_91())
	{
		Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_5 = iParam0;
		func_61(joaat("mpply_globalxp"), iParam0);
	}
}

void func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_62(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_46(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_63(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853131[iParam0 /*888*/].f_205.f_5;
			}
		}
		else
		{
			return func_63(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_63(int iParam0)
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

void func_64(int iParam0)
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
				func_66(&Global_1655492, iParam0);
				func_65(joaat("mpply_crew_local_xp_0"), Global_1655492);
			}
			else if (iVar13 == 1)
			{
				func_66(&Global_1655493, iParam0);
				func_65(joaat("mpply_crew_local_xp_1"), Global_1655493);
			}
			else if (iVar13 == 2)
			{
				func_66(&Global_1655494, iParam0);
				func_65(joaat("mpply_crew_local_xp_2"), Global_1655494);
			}
			else if (iVar13 == 3)
			{
				func_66(&Global_1655495, iParam0);
				func_65(joaat("mpply_crew_local_xp_3"), Global_1655495);
			}
			else if (iVar13 == 4)
			{
				func_66(&Global_1655496, iParam0);
				func_65(joaat("mpply_crew_local_xp_4"), Global_1655496);
			}
		}
	}
}

void func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1655487 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1655490 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1655491 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1655492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1655493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1655494 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1655495 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1655496 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1655497 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1655498 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1655499 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1655500 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1655501 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1655502 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1655503 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_67(int iParam0)
{
	if (iParam0 == Global_1655487)
	{
		return 0;
	}
	else if (iParam0 == Global_1655488)
	{
		return 1;
	}
	else if (iParam0 == Global_1655489)
	{
		return 2;
	}
	else if (iParam0 == Global_1655490)
	{
		return 3;
	}
	else if (iParam0 == Global_1655491)
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
			return Global_2725175;
		}
	}
	return Global_2725175;
}

struct<13> func_69(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_70(int iParam0, int iParam1, int iParam2)
{
	if (func_91())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9862 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1655637[func_78(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1655637[func_78(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9861 == 0)
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
		if (Global_262145.f_9861 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_77(PLAYER::PLAYER_ID()))
		{
			Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_1 = iParam0;
			Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_6 = func_75(iParam0, 1);
		}
		func_74(640, iParam0, -1, 1);
		func_123(641, func_75(iParam0, 1), -1, 1, 0);
		Global_1655637[func_78(-1)] = iParam0;
		func_71(-1109644434, 7, 0);
	}
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_73(iParam1, iParam2))
	{
		iVar0 = func_72();
		Global_2725127[iVar0] = iParam1;
		Global_2725138[iVar0] = iParam0;
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
		if (Global_2725127[iVar1] == 0)
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
	if (Global_1575042)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575054) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_74(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2822371[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655565[func_78(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655571[func_78(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655577[func_78(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655583[func_78(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655589[func_78(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655535[func_78(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655541[func_78(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655547[func_78(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655553[func_78(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655559[func_78(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655505[func_78(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655511[func_78(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655517[func_78(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655523[func_78(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655529[func_78(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655595[func_78(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655601[func_78(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655607[func_78(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655613[func_78(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655619[func_78(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655625[func_78(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655631[func_78(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655637[func_78(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655643[func_78(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863698[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863698[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863698[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863698[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 10874:
			Global_2863859[func_78(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655649[func_78(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655655[func_78(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655661[func_78(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655667[func_78(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655673[func_78(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655679[func_78(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863777[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863777[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863777[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863777[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863777[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863862[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863862[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863862[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863862[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863862[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863878[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863878[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863878[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863878[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863878[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863777[5 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863698[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863894[func_78(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863903[func_78(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863897[func_78(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863906[func_78(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863900[func_78(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863909[func_78(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863912[func_78(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863777[6 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863698[5 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863777[7 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863698[6 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863777[8 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863698[7 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863777[9 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863698[8 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863777[10 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863698[9 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863777[11 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863698[10 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863777[12 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863698[11 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863777[13 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863698[12 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863777[14 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863698[13 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863777[15 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863698[14 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863777[16 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863698[15 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863777[17 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863698[16 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863698[17 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863698[18 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863698[19 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863698[20 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863915[func_78(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863918[func_78(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863921[func_78(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863924[func_78(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863927[func_78(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863930[func_78(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863933[func_78(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863936[func_78(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863939[func_78(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863942[func_78(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863945[func_78(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863948[func_78(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863951[func_78(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863954[func_78(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863698[21 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863777[23 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863698[22 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863777[24 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863698[23 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863698[24 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863698[25 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_75(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_76(iParam0, 0);
}

int func_76(int iParam0, int iParam1)
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
		if (Global_294354[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_294354[iVar3] < iParam0)
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

int func_77(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703660.f_1, iParam0);
	}
	return 1;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1574915;
}

int func_80(int iParam0)
{
	if (Global_1574631.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1655637[func_78(-1)];
			}
			else if (func_77(iParam0))
			{
				return Global_1853131[iParam0 /*888*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1655637[func_78(-1)];
	}
	return 0;
}

void func_81(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_84(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_83(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_82(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_82(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_82(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_83(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2783316 = { func_69(iParam0) };
		Global_2783329 = { func_69(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783316))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783329))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783246, 35, &Global_2783316);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783281, 35, &Global_2783329);
				if (Global_2783246 == Global_2783281)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2)
{
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
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 0);
				
				case 1:
					return BitTest(Global_4718592.f_544, 1);
				
				case 2:
					return BitTest(Global_4718592.f_544, 2);
				
				case 3:
					return BitTest(Global_4718592.f_544, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 4);
				
				case 1:
					return BitTest(Global_4718592.f_544, 5);
				
				case 2:
					return BitTest(Global_4718592.f_544, 6);
				
				case 3:
					return BitTest(Global_4718592.f_544, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 8);
				
				case 1:
					return BitTest(Global_4718592.f_544, 9);
				
				case 2:
					return BitTest(Global_4718592.f_544, 10);
				
				case 3:
					return BitTest(Global_4718592.f_544, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 12);
				
				case 1:
					return BitTest(Global_4718592.f_544, 13);
				
				case 2:
					return BitTest(Global_4718592.f_544, 14);
				
				case 3:
					return BitTest(Global_4718592.f_544, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_85(bool bParam0, int iParam1)
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
				if (func_46(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_83(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_46(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_86(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_83(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_82(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_82(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_86(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_87(iParam0), func_87(iParam1));
	return 0f;
}

Vector3 func_87(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_88(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_82(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_89(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_80(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_80(PLAYER::PLAYER_ID());
		}
	}
	if (func_90(8000, 0, 0) > 0)
	{
		if (func_90(8000, 0, 0) < (iParam0 + func_80(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_90(8000, 0, 0) - func_80(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_90(int iParam0, bool bParam1, int iParam2)
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
	return Global_294354[iParam0];
}

int func_91()
{
	return 1;
}

int func_92(char* sParam0)
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

int func_93(int iParam0)
{
	return func_94(func_95(iParam0));
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_95(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return Global_1893551[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_96(int iParam0, int iParam1)
{
	if (Global_1893551[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1893551[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_97()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_99();
	}
	return func_98(Global_4718592.f_87009);
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_99()
{
	return Global_2714635.f_19;
}

bool func_100(int iParam0)
{
	return Global_2689224[iParam0 /*451*/].f_119 == 2;
}

bool func_101(int iParam0)
{
	return Global_2689224[iParam0 /*451*/].f_119 == 7;
}

void func_102(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8828)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_103() /*5559*/].f_675.f_4239[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574740.f_1[iVar0] == -1)
			{
				Global_1574740.f_1[iVar0] = iParam0;
				Global_1574740 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_103()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_104(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_79();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_126(iParam0, func_78(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_106(iParam0))
	{
		func_123(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_74(iParam0, iVar0, iParam2, 1);
	}
}

int func_106(int iParam0)
{
	if (Global_1655486)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10874:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
			case 9912:
				return 1;
				break;
			}
	}
	return 0;
}

int func_107(int iParam0, int iParam1)
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
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

int func_108(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_109(iParam0, iParam1);
}

int func_109(int iParam0, int iParam1)
{
	if (func_121(14) && !func_120(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31761 != 0 && !Global_77858)
	{
		return 0;
	}
	if (func_119(&Global_4535627))
	{
		if (func_117(&Global_4535627, iParam0))
		{
			return 0;
		}
		if (func_110(&Global_4535627, iParam0))
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

int func_110(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_121(14) && !func_120(iParam1))
	{
		return 0;
	}
	if (func_117(uParam0, iParam1))
	{
		return 0;
	}
	if (func_116(uParam0) < 0f)
	{
		func_115(uParam0, 0);
	}
	func_113(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_111(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_111(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_121(14) && !func_120(iParam1))
	{
		return 0;
	}
	if (func_117(uParam0, iParam1))
	{
		return 0;
	}
	if (func_116(uParam0) < 0f)
	{
		func_115(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_112(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_112(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_113(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_114(uParam0, iVar0);
		iVar0++;
	}
	func_115(uParam0, (Global_4535626 - 0.5f));
}

void func_114(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_115(var uParam0, float fParam1)
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

float func_116(var uParam0)
{
	return uParam0->f_80;
}

bool func_117(var uParam0, int iParam1)
{
	return func_118(uParam0, iParam1) != -1;
}

int func_118(var uParam0, int iParam1)
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

bool func_119(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_120(int iParam0)
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

bool func_121(int iParam0)
{
	return Global_42602 == iParam0;
}

int func_122(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2862655[iParam0 /*3*/][func_78(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_123(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2822371[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_124(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_122(iParam0, func_78(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_125(iParam0, iVar0, iParam2);
}

void func_125(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2862655[iParam0 /*3*/][func_78(uParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2822371[iParam0 /*3*/][func_78(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_127(var uParam0)
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

void func_128(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_129()
{
	bool bVar0;
	int iVar1;
	
	func_251();
	func_221();
	func_172();
	func_53();
	func_170();
	func_169();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_574)
		{
			if (Global_2810701.f_5960.f_1 == 0)
			{
				Global_2810701.f_5960.f_1 = 1;
			}
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_575 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_576)
			{
				bVar0 = true;
			}
			else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_577)
			{
				iVar1 = 1;
			}
		}
		else if (Global_2810701.f_5960.f_1 == 1)
		{
			Global_2810701.f_5960.f_1 = 0;
		}
	}
	if (!BitTest(Local_475.f_52, 31))
	{
		if (func_95(PLAYER::PLAYER_ID()) != 154)
		{
			if ((bVar0 || iVar1) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_581, (5f / 2f), (5f / 2f), (5f / 2f), false, true, 0))
			{
				if (!func_38(PLAYER::PLAYER_ID()))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
					MISC::SET_BIT(&(Local_475.f_52), 31);
				}
			}
		}
	}
	if ((!BitTest(Local_475.f_52, 26) && bVar0) && !(func_168(0) || func_167()))
	{
		if (func_165("SNK_MNU", Local_475.f_0, 0))
		{
			MISC::SET_BIT(&(Local_475.f_52), 26);
		}
	}
	if (!bVar0 && BitTest(Local_475.f_52, 26))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || (CAM::DOES_CAM_EXIST(Local_475.f_1) && CAM::IS_CAM_ACTIVE(Local_475.f_1)))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (Local_475.f_51 > 0)
			{
				Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3 = Local_475.f_51;
				Local_475.f_51 = 0;
			}
			func_410();
			MISC::CLEAR_BIT(&(Local_475.f_53), 7);
			if (CAM::DOES_CAM_EXIST(Local_475.f_1))
			{
				CAM::DESTROY_CAM(Local_475.f_1, false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		func_162(1, Local_475.f_0);
		MISC::CLEAR_BIT(&(Local_475.f_52), 26);
	}
	if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 21))
	{
		if (iVar1 || func_160(PLAYER::PLAYER_PED_ID(), Local_475.f_50))
		{
			MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_157();
		func_151();
		func_145();
		func_141(1);
		func_134();
		PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
		PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		if (BitTest(Global_2810701.f_7, 0))
		{
			PLAYER::_0xB45EFF719D8427A6(Local_81.f_71);
			func_132(Local_581, func_133(30), 0);
			MISC::CLEAR_BIT(&(Global_2810701.f_7), 0);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_581, 5f, 5f, 2.5f, false, true, 0))
		{
			func_141(0);
		}
		if (!BitTest(Global_2810701.f_7, 0))
		{
			PLAYER::_0x0032A6DBA562C518();
			func_130(Local_581, func_133(30), "");
			MISC::SET_BIT(&(Global_2810701.f_7), 0);
		}
	}
	if ((BitTest(Local_81.f_23, 22) || BitTest(Local_81.f_23, 23)) || BitTest(Local_81.f_23, 7))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
}

int func_130(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_2810701.f_4033[iVar0 /*26*/].f_4), sParam3))
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2810701.f_4033[iVar0 /*26*/].f_4)))
				{
					Global_2810701.f_4033[iVar0 /*26*/] = 1;
					Global_2810701.f_4033[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2810701.f_4033[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2810701.f_4033[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_131(Global_2810701.f_4033[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2810701.f_4033[iVar0 /*26*/] = 1;
				Global_2810701.f_4033[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2810701.f_4033[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2810701.f_4033[iVar0 /*26*/].f_10), sParam4, 64);
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

bool func_131(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_132(struct<3> Param0, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2810701.f_4033[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_131(Global_2810701.f_4033[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2810701.f_4033[iVar0 /*26*/] = 0;
					Global_2810701.f_4033[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2810701.f_4033[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2810701.f_4033[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_133(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_134()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	MISC::CLEAR_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 28);
	if (!func_395(Local_81.f_0) && func_46(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
		{
			if ((((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball")) && iVar0 != joaat("weapon_flashlight"))
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_81.f_0), 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_81.f_0), 5f, 5f, 2f, false, true, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_81.f_0))) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_81.f_0)))
				{
					if (!(func_168(0) || func_167()) && ((!func_138(PLAYER::PLAYER_ID()) || func_95(PLAYER::PLAYER_ID()) == 154) || func_95(PLAYER::PLAYER_ID()) == 171))
					{
						if (func_136(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_81.f_0)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
						{
							if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
							{
								func_135(func_8(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
								MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 1);
							}
							if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 8))
							{
								MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 8);
							}
						}
						MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 28);
					}
				}
			}
		}
	}
	if (!BitTest(Local_475.f_52, 28))
	{
		if (BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 28))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true))
			{
				if (iVar1 != 0 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = WEAPON::GET_WEAPONTYPE_GROUP(iVar1);
					if (iVar2 == joaat("GROUP_PISTOL"))
					{
						sLocal_532 = "hold_up_head_additive_pistol";
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_532, 8f, -8f, -1, 305, 0f, false, false, false);
					}
					else if ((((iVar2 == joaat("GROUP_MG") || iVar2 == joaat("GROUP_RIFLE")) || iVar2 == joaat("GROUP_SHOTGUN")) || iVar2 == joaat("GROUP_SNIPER")) || iVar2 == joaat("GROUP_SMG"))
					{
						sLocal_532 = "hold_up_head_additive_rifle";
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_532, 8f, -8f, -1, 305, 0f, false, false, false);
					}
					else
					{
						sLocal_532 = "";
					}
					MISC::SET_BIT(&(Local_475.f_52), 28);
				}
			}
		}
	}
	else if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 28) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_532))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_532, 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_532, -8f);
			}
		}
		MISC::CLEAR_BIT(&(Local_475.f_52), 28);
	}
	if (BitTest(Local_81.f_25, 1))
	{
		if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 3))
		{
			if (!func_395(Local_81.f_15) && func_46(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, true))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !(func_168(0) || func_167()))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_81.f_15)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_81.f_15)))
						{
							if (func_136(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_81.f_15)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
							{
								MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_135(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 33622745;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 2, iParam0);
	}
}

int func_136(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (func_46(iParam0, 1, 1))
	{
		Var0 = { func_87(iParam0) };
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
	fVar15 = func_137(Var9, Var12);
	if (fVar15 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_137(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_138(int iParam0)
{
	if (func_40(iParam0))
	{
		return 1;
	}
	if (func_139(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_140(iParam0, 9);
	}
	return 0;
}

var func_140(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_4, iParam1);
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (PLAYER::PLAYER_ID() != Global_2810701.f_5119 && !func_38(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Local_475.f_52, 6))
		{
			if (iParam0 == 1)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true))
				{
					if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_534, 2.5f, 2.5f, 3f, false, true, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) || (iVar0 == 1 && Local_81.f_3 >= 3)) || (iVar0 == 1 && BitTest(Local_81.f_24, 16))) || BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12))
				{
					if (((!BitTest(Local_81.f_23, 12) || Local_81.f_3 >= 3) || BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12)) || (iVar0 == 1 && BitTest(Local_81.f_24, 16)))
					{
						Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_36++;
						func_14(&(Global_2703660.f_3429));
						func_19(&(Global_2703660.f_3429), 0, 0);
						if (Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_36 <= 2)
						{
							if (func_144())
							{
								if (func_143() < 2)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_143()));
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
						else if (Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_36 >= 5)
						{
							if (func_144())
							{
								if (func_143() < 3)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_143()));
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
						else if (func_144())
						{
							if (func_143() < 3)
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_143()));
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
						if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
						{
							MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
						}
						MISC::SET_BIT(&(Local_475.f_52), 6);
						MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
					}
				}
			}
			if (!BitTest(Local_475.f_52, 27) && !BitTest(Local_475.f_52, 6))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					if (func_18(&uLocal_572, 2000, 0) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
						MISC::SET_BIT(&(Local_475.f_52), 27);
						MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 27);
						MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
						{
							MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
						}
					}
				}
				else if (func_142(&uLocal_572))
				{
					func_14(&uLocal_572);
				}
			}
		}
		if (!BitTest(Local_475.f_52, 24))
		{
			if (BitTest(Local_475.f_52, 31))
			{
				if (func_395(Local_81.f_0))
				{
					if (func_144())
					{
						if (func_143() < 3)
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_143()));
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
					MISC::SET_BIT(&(Local_475.f_52), 24);
					if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
					{
						MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
					}
				}
			}
		}
	}
}

bool func_142(var uParam0)
{
	return uParam0->f_1;
}

int func_143()
{
	return Global_262145.f_12862;
}

int func_144()
{
	if (func_139(PLAYER::PLAYER_ID()) && func_95(PLAYER::PLAYER_ID()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_145()
{
	int iVar0;
	int iVar1;
	
	if (func_46(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!BitTest(Local_475.f_52, 23) && BitTest(Local_81.f_23, 17))
		{
			if (!func_395(Local_81.f_0))
			{
				iLocal_541 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_29);
				if (iLocal_541 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_541))
					{
						if ((!BitTest(Global_1923535, 15) && func_150()) && func_149())
						{
							MISC::SET_BIT(&Global_1923535, 15);
						}
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							iVar0 = func_126(1191, -1, 0);
							if (!BitTest(iVar0, 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_541) < 0.4f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_574)
								{
									func_148("FHU_HELP3", -1);
									MISC::SET_BIT(&iVar0, 3);
									func_123(1191, iVar0, -1, 1, 0);
								}
							}
							else if (!BitTest(iVar0, 5) || !BitTest(iVar0, 6))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_541) < 0.7f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_574)
								{
									func_148("FHU_HELP4", -1);
									MISC::SET_BIT(&iVar0, 5);
									func_123(1191, iVar0, -1, 1, 0);
									MISC::SET_BIT(&(Local_475.f_52), 23);
								}
							}
							else
							{
								MISC::SET_BIT(&(Local_475.f_52), 23);
							}
						}
					}
				}
			}
		}
		if (((((((((!func_39(PLAYER::PLAYER_ID(), 146) && !func_147()) && func_95(PLAYER::PLAYER_ID()) != 167) && func_95(PLAYER::PLAYER_ID()) != 190) && func_95(PLAYER::PLAYER_ID()) != 191) && func_95(PLAYER::PLAYER_ID()) != 250) && func_95(PLAYER::PLAYER_ID()) != 237) && func_95(PLAYER::PLAYER_ID()) != 238) && !func_38(PLAYER::PLAYER_ID())) && (!func_138(PLAYER::PLAYER_ID()) || func_95(PLAYER::PLAYER_ID()) == 154))
		{
			if (!BitTest(Local_475.f_53, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (((((func_395(Local_81.f_0) || Local_81.f_3 > 7) && !BitTest(Local_81.f_23, 20)) && !BitTest(Local_81.f_23, 11)) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_542, 1.5f) == 0)
					{
						iVar1 = func_126(1191, -1, 0);
						if (!BitTest(iVar1, 20) || !BitTest(iVar1, 21))
						{
							func_148("FHU_HELPM", -1);
							if (!BitTest(iVar1, 20))
							{
								MISC::SET_BIT(&iVar1, 20);
							}
							else
							{
								MISC::SET_BIT(&iVar1, 21);
							}
							func_123(1191, iVar1, -1, 1, 0);
							MISC::SET_BIT(&(Local_475.f_53), 1);
						}
						else
						{
							MISC::SET_BIT(&(Local_475.f_53), 1);
						}
					}
				}
			}
			else if (func_146("FHU_HELPM"))
			{
				if ((BitTest(Local_81.f_23, 20) || BitTest(Local_81.f_23, 11)) || BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5))
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
	}
}

bool func_146(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_147()
{
	return Global_1835491;
}

void func_148(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

var func_149()
{
	return BitTest(Global_2810701.f_1795, 21);
}

var func_150()
{
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_143, 3);
}

void func_151()
{
	float fVar0;
	float fVar1;
	
	if (Local_81.f_3 == 4)
	{
		if (func_46(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!func_395(Local_81.f_0))
			{
				iLocal_541 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_29);
				if (iLocal_541 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_541))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_541);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_152(SYSTEM::ROUND(fVar0), 890, "HUP_PROG", func_156(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())), 0, 1, 13);
						}
						fVar1 = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_152(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	func_153(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
}

void func_153(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_155(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1645748.f_1 = 1;
		func_154(0, iVar0);
		Global_1645748.f_1135[iVar0] = uParam0;
		Global_1645748.f_1135.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1645748.f_1135.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1645748.f_1135.f_194[iVar0] = uParam3;
		Global_1645748.f_1135.f_183[iVar0] = uParam4;
		Global_1645748.f_1135.f_216[iVar0] = uParam5;
		Global_1645748.f_1135.f_227[iVar0 /*3*/] = fParam6;
		Global_1645748.f_1135.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1645748.f_1135.f_258[iVar0] = iParam8;
		Global_1645748.f_1135.f_269[iVar0] = uParam9;
		Global_1645748.f_1135.f_312[iVar0] = iParam10;
		Global_1645748.f_1135.f_323[iVar0] = iParam11;
		Global_1645748.f_1135.f_334[iVar0] = iParam12;
		Global_1645748.f_1135.f_345[iVar0] = iParam13;
		Global_1645748.f_1130 = 1;
		Global_1645748.f_1135.f_356[iVar0] = iParam14;
		Global_1645748.f_1135.f_367[iVar0] = iParam15;
		Global_1645748.f_1135.f_378[iVar0] = iParam16;
		Global_1645748.f_1135.f_389[iVar0] = iParam17;
		Global_1645748.f_1135.f_400[iVar0] = iParam18;
		Global_1645748.f_1135.f_411[iVar0] = iParam19;
		Global_1645748.f_1135.f_422[iVar0] = iParam20;
		Global_1645748.f_1135.f_433[iVar0] = iParam21;
		Global_1645748.f_1135.f_444[iVar0] = iParam22;
		Global_1645748.f_1135.f_455[iVar0] = iParam23;
		Global_1645748.f_1135.f_466[iVar0] = iParam24;
		Global_1645748.f_1135.f_205[iVar0] = iParam25;
		Global_1645748.f_1135.f_477[iVar0] = iParam26;
		Global_1645748.f_1135.f_488[iVar0] = iParam27;
		Global_1645748.f_1135.f_499[iVar0] = iParam28;
		Global_1645748.f_1135.f_510[iVar0] = iParam29;
		Global_1645748.f_1135.f_521[iVar0] = iParam30;
		Global_1645748.f_1135.f_532[iVar0] = iParam31;
		Global_1645748.f_1135.f_543[iVar0] = iParam32;
		Global_1645748.f_1135.f_554[iVar0] = iParam33;
		Global_1645748.f_1135.f_565[iVar0] = iParam34;
		Global_1645748.f_1135.f_576[iVar0] = iParam35;
		Global_1645748.f_1135.f_587[iVar0] = iParam36;
	}
}

void func_154(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1645748.f_6736[iParam0]), iParam1);
}

int func_155(int iParam0, int iParam1)
{
	return BitTest(Global_1645748.f_6736[iParam0], iParam1);
}

int func_156(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_157()
{
	if (!BitTest(Local_475.f_53, 2))
	{
		STREAMING::REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
		STREAMING::REQUEST_ANIM_DICT(func_158());
		if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till") && STREAMING::HAS_ANIM_DICT_LOADED(func_158()))
		{
			MISC::SET_BIT(&(Local_475.f_53), 2);
		}
	}
}

char* func_158()
{
	if (func_159(PLAYER::PLAYER_ID()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_159(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2689224[iParam0 /*451*/].f_237;
}

int func_160(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar6 = 0f;
	func_161(iParam1, &Var0, &Var3, &fVar6);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Var0, Var3, fVar6, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0, var uParam1, var uParam2, float fParam3)
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

void func_162(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_164(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22830.f_8680)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_22830.f_8680 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_22830.f_5891[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_22830.f_5891[iVar0] = 0;
	}
	if (Global_22830.f_5877[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22830.f_5877[iVar0] = 0;
	}
	if (Global_22830.f_5884[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22830.f_5884[iVar0] = 0;
	}
	if (bParam0)
	{
		func_163(&(Global_22830.f_5923[iVar0 /*10*/]));
		Global_22830.f_5984[iVar0] = 0;
	}
	else
	{
		Global_22830.f_5984[iVar0] = 0;
	}
}

void func_163(int* iParam0)
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

int func_164(var uParam0, bool bParam1, int iParam2)
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
		if (Global_22830.f_5984[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22830.f_5984[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22830.f_5984[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

bool func_165(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_164(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22830.f_5898[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22830.f_5898[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_22830.f_5898[iVar0 /*4*/]), 9);
		Global_22830.f_5891[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22830.f_5898[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_22830.f_5877[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_22830.f_5884[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22830.f_5923[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_166(&(Global_22830.f_5923[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_166(var uParam0)
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

int func_167()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (BitTest(Global_7824, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_169()
{
	if (PLAYER::PLAYER_ID() != Global_2810701.f_5119 && !func_38(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Local_475.f_52, 24))
		{
			if (Local_81.f_72 == PLAYER::PLAYER_ID() || (BitTest(Local_475.f_52, 31) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_584, 20f, 20f, 20f, false, true, 0)))
			{
				if (func_395(Local_81.f_0))
				{
					if (func_144())
					{
						if (func_143() < 3)
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_143()));
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
					MISC::SET_BIT(&(Local_475.f_52), 24);
					if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
					{
						MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
					}
				}
			}
		}
	}
}

int func_170()
{
	if (!BitTest(Local_81.f_25, 0))
	{
		return 0;
	}
	if (func_395(Local_81.f_15))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_790))
		{
			HUD::REMOVE_BLIP(&iLocal_790);
		}
		return 0;
	}
	if (Local_81.f_66 == 4)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_790))
		{
			iLocal_790 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_81.f_15));
			HUD::SET_BLIP_COLOUR(iLocal_790, 1);
			HUD::SET_BLIP_SCALE(iLocal_790, 0.7f);
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_15))
	{
		return 0;
	}
	switch (Local_81.f_66)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_15), joaat("script_task_follow_nav_mesh_to_coord")) != 0)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_15), joaat("script_task_follow_nav_mesh_to_coord")) != 1)
				{
					if (func_46(PLAYER::PLAYER_ID(), 1, 1))
					{
						TASK::TASK_GO_TO_ENTITY(NETWORK::NET_TO_PED(Local_81.f_15), PLAYER::PLAYER_PED_ID(), -1, 4f, 2f, 2f, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!BitTest(Local_81.f_25, 5) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_15), joaat("script_task_go_to_entity")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_15), joaat("script_task_go_to_entity")) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_81.f_15), PLAYER::PLAYER_PED_ID(), 10000);
					MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 0);
				}
			}
			if ((!BitTest(Local_81.f_25, 6) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 1)) && !func_171())
			{
				func_394(&uLocal_598, 4, NETWORK::NET_TO_PED(Local_81.f_15), "StoreHero", 1, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(NETWORK::NET_TO_PED(Local_81.f_15), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 1);
			}
			break;
		
		case 4:
			if ((!BitTest(Local_81.f_25, 7) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 2)) && !func_171())
			{
				func_394(&uLocal_598, 4, NETWORK::NET_TO_PED(Local_81.f_15), "StoreHero", 1, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(NETWORK::NET_TO_PED(Local_81.f_15), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 2);
			}
			if (BitTest(Local_81.f_25, 7) || BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 2))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_15), joaat("script_task_combat_hated_targets_around_ped")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_15), joaat("script_task_combat_hated_targets_around_ped")) != 1)
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_81.f_15));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_81.f_15), Global_1837189);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_81.f_15), 20f, 0);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_81.f_15), true);
				}
			}
			break;
		
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_15), joaat("script_task_perform_sequence")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_15), joaat("script_task_perform_sequence")) != 1)
			{
				TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_81.f_15));
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_81.f_15), iLocal_550);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_81.f_15), true);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_15), joaat("script_task_turn_ped_to_face_entity")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_15), joaat("script_task_turn_ped_to_face_entity")) != 0)
			{
				if (func_18(&uLocal_570, 5000, 0))
				{
					func_14(&uLocal_570);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_81.f_15), PLAYER::PLAYER_PED_ID(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_171()
{
	if (Global_21285 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_172()
{
	if (Local_81.f_3 == 4)
	{
		if ((!BitTest(Local_81.f_23, 10) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 4)) && BitTest(Local_81.f_23, 17))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_13))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_13) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_81.f_13) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (!func_395(Local_81.f_0))
					{
						if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_81.f_0)))
						{
							ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_81.f_13), true, false);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_81.f_13), true);
							ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_81.f_13), 0f, 0f, -1f);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_81.f_0), 16);
							MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 4);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_81.f_13), true, false);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_81.f_13), true);
						ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_81.f_13), 0f, 0f, -1f);
						MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 4);
					}
				}
			}
		}
	}
	func_173();
}

void func_173()
{
	int iVar0;
	var uVar1;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_13))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_81.f_13), false))
		{
			if ((!BitTest(Local_81.f_23, 11) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) && Local_81.f_37 > 0f)
			{
				if (((func_220() || func_219(0.87f)) || Local_81.f_3 >= 5) || BitTest(Local_81.f_23, 10))
				{
					if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 11))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_13))
						{
							OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_81.f_13), false, false);
							MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 13);
						}
						if (func_95(PLAYER::PLAYER_ID()) != 155)
						{
							OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(func_52(1), 1);
						}
						MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 11);
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_81.f_13), PLAYER::PLAYER_PED_ID()))
					{
						Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7, &(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7.f_2), false, false);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_13))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_81.f_13), true, true);
							func_47(&(Local_81.f_13));
						}
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iLocal_567, iLocal_568);
						if (BitTest(Local_81.f_23, 10))
						{
							iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Local_81.f_37));
						}
						if (Local_81.f_4 > 1000)
						{
							Local_81.f_4 = 1000;
						}
						iVar0 = (iVar0 + Local_81.f_4);
						iVar0 = func_218(iVar0, 1);
						if (iVar0 > Global_262145.f_166)
						{
							iVar0 = Global_262145.f_166;
						}
						if (func_217(PLAYER::PLAYER_ID()) && func_215(func_216(PLAYER::PLAYER_ID())) < 1f)
						{
							if (Global_262145.f_4226 > 1f)
							{
								Global_262145.f_4226 = 1f;
							}
							iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4226));
						}
						if (iVar0 > 0)
						{
							if (func_214())
							{
								func_203(1734805203, iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_199(iVar0, 1, 1, 1092616192);
								MONEY::NETWORK_EARN_FROM_HOLDUPS(iVar0);
							}
						}
						Global_2810701.f_5960 = (Global_2810701.f_5960 + iVar0);
						Global_2810701.f_5960.f_2 = 1;
						Global_2810701.f_5960.f_5 = 1;
						iLocal_792 = (iLocal_792 + iVar0);
						func_198(3);
						if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5))
						{
							func_197(Local_81.f_38, iVar0);
						}
						else
						{
							func_188(PLAYER::PLAYER_PED_ID(), iVar0);
						}
						func_187(1, iVar0);
						if (func_183(1))
						{
							func_174(4);
						}
						MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 5);
						MISC::SET_BIT(&(Local_475.f_53), 6);
					}
				}
			}
		}
	}
}

void func_174(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17959;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17949;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17960;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17952;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17948;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17963;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17964;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17967;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17968;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17961;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18850;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18849;
			break;
	}
	if (iVar0 != 0)
	{
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_181(func_182()), func_179(func_182()), func_178(), func_177(), iParam0, iVar0);
	}
	func_176(iVar0);
	func_175(iVar0);
}

void func_175(int iParam0)
{
	int iVar0;
	
	iVar0 = func_126(3970, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_468 = iVar0;
	func_123(3970, iVar0, -1, 1, 0);
}

void func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1893551[iVar0 /*599*/].f_10.f_467 = (Global_1893551[iVar0 /*599*/].f_10.f_467 + iParam0);
	if (Global_1893551[iVar0 /*599*/].f_10.f_467 < -9999)
	{
		Global_1893551[iVar0 /*599*/].f_10.f_467 = 9999;
	}
	else if (Global_1893551[iVar0 /*599*/].f_10.f_467 > 9999)
	{
		Global_1893551[iVar0 /*599*/].f_10.f_467 = 9999;
	}
}

int func_177()
{
	if (Global_1944626.f_3 != 0)
	{
		return Global_1944626.f_3;
	}
	return -1;
}

int func_178()
{
	if (Global_1944626.f_2 != 0)
	{
		return Global_1944626.f_2;
	}
	return -1;
}

int func_179(int iParam0)
{
	if (iParam0 == func_180())
	{
		return -1;
	}
	return Global_1893551[iParam0 /*599*/].f_10.f_8[1];
}

int func_180()
{
	return -1;
}

int func_181(int iParam0)
{
	if (iParam0 == func_180())
	{
		return -1;
	}
	return Global_1893551[iParam0 /*599*/].f_10.f_8[0];
}

int func_182()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10;
}

bool func_183(bool bParam0)
{
	return func_184(PLAYER::PLAYER_ID(), bParam0);
}

int func_184(int iParam0, bool bParam1)
{
	return func_185(iParam0, bParam1, 1);
}

int func_185(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_180())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_186(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893551[iParam0 /*599*/].f_10;
	if (iVar0 != func_180() && Global_1893551[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_186(int iParam0, int iParam1)
{
	if (iParam0 != func_180())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_180())
		{
			if (Global_1893551[iParam0 /*599*/].f_10 == iParam0 && Global_1893551[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_187(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23766 == 0 || Global_262145.f_23766 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23766 == 1)
			{
				Global_2810701.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6841)
				{
					iParam1 = Global_262145.f_6841;
				}
				Global_2810701.f_284 = iParam1;
				Global_2810701.f_285 = 0;
			}
		}
	}
}

void func_188(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { func_195(PLAYER::PLAYER_PED_ID(), 1) };
	if (iParam0 == func_194(PLAYER::PLAYER_PED_ID()))
	{
		func_193(1);
	}
	func_189(Var0, iParam1, 7, 0, 0);
}

void func_189(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703660.f_967[iVar0 /*30*/].f_6 == 0 || Global_2703660.f_967[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703660.f_967[iVar1 /*30*/] = { Param0 };
			Global_2703660.f_967[iVar1 /*30*/].f_6 = 1;
			Global_2703660.f_967[iVar1 /*30*/].f_4 = func_192(Global_2703660.f_967[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703660.f_967[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2703660.f_967[iVar1 /*30*/].f_3 = iParam3;
			Global_2703660.f_967[iVar1 /*30*/].f_8 = iParam4;
			Global_2703660.f_967[iVar1 /*30*/].f_9 = func_191();
			Global_2703660.f_967[iVar1 /*30*/].f_10 = func_190();
			StringCopy(&(Global_2703660.f_967[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2703660.f_967[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_190()
{
	if (Global_2703660.f_1568)
	{
		Global_2703660.f_1568 = 0;
		return 1;
	}
	Global_2703660.f_1568 = 0;
	return 0;
}

var func_191()
{
	var uVar0;
	
	uVar0 = Global_2703660.f_1570;
	Global_2703660.f_1570 = 1;
	return uVar0;
}

float func_192(struct<3> Param0, var uParam3, var uParam4)
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

void func_193(int iParam0)
{
	Global_2703660.f_1568 = iParam0;
}

int func_194(int iParam0)
{
	return iParam0;
}

Vector3 func_195(int iParam0, bool bParam1)
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
	if (iParam0 == func_196(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
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
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
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
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_196(int iParam0)
{
	return iParam0;
}

void func_197(struct<3> Param0, int iParam3)
{
	func_189(Param0, iParam3, 6, 0, 0);
}

void func_198(int iParam0)
{
	Global_2703660.f_1570 = iParam0;
}

void func_199(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_200(iParam0, iParam1, iParam2, fParam3);
}

void func_200(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_201(iParam0, iParam1, iParam2, fParam3);
}

void func_201(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_4 = iVar1;
	Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_3 = (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_202(iVar1, 0);
	}
}

void func_202(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_203(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_214())
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
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28039)
			{
				func_204(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_204(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_28039)
			{
				func_204(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
			func_204(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_204(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_79()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726400)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4528329[iVar2 /*85*/].f_66.f_2 == 0)
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
			*uParam0 = func_211(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4528329[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4528329[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4529830 = 1;
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_210(1, iParam4);
			Global_4529830 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_205(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_205(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_124.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_206(iParam0);
	}
}

void func_206(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_209(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_207(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_207(var uParam0)
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
	func_208(&(uParam0->f_14));
	func_208(&(uParam0->f_14.f_13));
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

void func_208(var uParam0)
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

int func_209(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_210(int iParam0, int iParam1)
{
	Global_2727588 = iParam1;
	Global_2727587 = iParam0;
}

int func_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_214())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4528329[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4528329[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4528329[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4528329[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4528329[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4528329[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4528329[iVar0 /*85*/].f_66 = iParam0;
			Global_4528329[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4528329[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4528329[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4528329[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4528329[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4528329[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4529816 = 0;
			if (bParam6)
			{
				Global_4528329[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_212(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_212(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -1141953949;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_8(Var0.f_1);
	if ((Global_262145.f_23845 && !Global_262145.f_23846) && !Global_262145.f_23847)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_213();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar36);
	}
}

void func_213()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_214()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

float func_215(int iParam0)
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

int func_216(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893551[iVar0 /*599*/];
	}
	return -1;
}

int func_217(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893551[iVar0 /*599*/] != -1;
	}
	return 0;
}

int func_218(int iParam0, int iParam1)
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

int func_219(float fParam0)
{
	iLocal_541 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_29);
	if (iLocal_541 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_541))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_541) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_220()
{
	iLocal_541 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_29);
	if (iLocal_541 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_541))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_541) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_221()
{
	func_222();
}

int func_222()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_0))
	{
		return 0;
	}
	if (func_395(Local_81.f_0))
	{
		if (!BitTest(Local_475.f_53, 3))
		{
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_81.f_0));
			MISC::SET_BIT(&(Local_475.f_53), 3);
		}
		return 0;
	}
	switch (Local_81.f_3)
	{
		case 0:
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_81.f_0), 71, true);
			break;
		
		case 1:
			if (!BitTest(Local_81.f_23, 4) && !BitTest(Local_81.f_23, 12))
			{
				if (BitTest(Local_81.f_23, 13))
				{
					if (!BitTest(Local_475.f_52, 17))
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_81.f_0), 16);
						TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_81.f_0), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							func_228(10);
						}
						else if (BitTest(Local_81.f_24, 0))
						{
							if (!BitTest(Local_81.f_24, 11))
							{
								if (!BitTest(Local_81.f_24, 12))
								{
									func_228(13);
								}
								else
								{
									func_228(20);
								}
							}
							else
							{
								func_228(17);
							}
							MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						}
						else if (!BitTest(Local_81.f_24, 11))
						{
							if (!BitTest(Local_81.f_24, 12))
							{
								func_228(0);
							}
							else
							{
								func_228(18);
							}
						}
						else
						{
							func_228(15);
						}
						MISC::SET_BIT(&(Local_475.f_52), 17);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_turn_ped_to_face_entity")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_turn_ped_to_face_entity")) != 0)
					{
						if (func_18(&uLocal_570, 5000, 0))
						{
							func_14(&uLocal_570);
							if (!iLocal_531)
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_81.f_0), PLAYER::PLAYER_PED_ID(), 10000);
							}
							TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_81.f_0), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
				}
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_81.f_0), 71, true);
			break;
		
		case 2:
			if (!BitTest(Local_81.f_23, 7) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 0))
			{
				iVar1 = PLAYER::PLAYER_PED_ID();
				if (Local_81.f_32 > -1)
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_81.f_32)))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_81.f_32));
						iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_81.f_0), iVar1, -1, 0, 2);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_81.f_0), 16);
					TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_81.f_0), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0f, false, false, false);
					MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 0);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_turn_ped_to_face_entity")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_turn_ped_to_face_entity")) != 0)
			{
				if (func_18(&uLocal_570, 5000, 0))
				{
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_81.f_32 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_81.f_32)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_81.f_32));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					func_14(&uLocal_570);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_81.f_0), iVar1, 10000);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_81.f_0), iVar1, -1, 0, 2);
				}
			}
			if (BitTest(Local_81.f_23, 16))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_81.f_0), 16);
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_81.f_0), 71, true);
			break;
		
		case 3:
			if (!BitTest(Local_475.f_52, 25))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_achieve_heading")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_achieve_heading")) != 1)
				{
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_81.f_0), true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_0), 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_0), 8, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_0), 16, true);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_81.f_0), 16);
					TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_81.f_0), Local_81.f_42, -1);
					MISC::SET_BIT(&(Local_475.f_52), 25);
				}
			}
			break;
		
		case 4:
			if (!BitTest(Local_81.f_23, 17) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 3))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					Global_2810701.f_8 = 1;
				}
				iVar2 = PLAYER::PLAYER_PED_ID();
				if (Global_2810701.f_9 != func_180())
				{
					if (func_46(Global_2810701.f_9, 1, 1))
					{
						iVar2 = PLAYER::GET_PLAYER_PED(Global_2810701.f_9);
					}
				}
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_81.f_0), iVar2, 30000, 0, 3);
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_81.f_0), "mood_stressed_1", 0);
				MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 3);
			}
			else
			{
				iLocal_541 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_29);
				if (iLocal_541 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_541))
					{
						fLocal_775 = (Local_81.f_33 + 0.6f);
						if (fLocal_775 < 0.75f)
						{
							fLocal_775 = 0.75f;
						}
						if (BitTest(Local_81.f_24, 4))
						{
							fLocal_775 = (fLocal_775 + 0.25f);
						}
						if (fLocal_775 > 1.75f)
						{
							fLocal_775 = 1.75f;
						}
						PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_541, fLocal_775);
					}
				}
			}
			break;
		
		case 5:
			if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 10))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_perform_sequence")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_perform_sequence")) != 1)
				{
					if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_81.f_0)))
					{
						iLocal_541 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_29);
						if ((iLocal_541 != -1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_541)) || iLocal_541 == -1)
						{
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_81.f_0), iLocal_550);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_81.f_0), 16);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_81.f_0), true);
							MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 10);
						}
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_turn_ped_to_face_entity")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_turn_ped_to_face_entity")) != 0)
			{
				if (func_18(&uLocal_570, 5000, 0))
				{
					func_14(&uLocal_570);
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_81.f_32 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_81.f_32)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_81.f_32));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_81.f_0), iVar1, 10000);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_81.f_0), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 10))
			{
				if ((iLocal_541 == -1 || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_541)) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_541) >= 0.95f)
				{
					func_227();
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_81.f_32 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_81.f_32)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_81.f_32));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					TASK::TASK_HANDS_UP(NETWORK::NET_TO_PED(Local_81.f_0), -1, iVar1, -1, true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_PED(Local_81.f_0), false, false);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_81.f_0), 16);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_81.f_0), true);
					MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 10);
				}
			}
			break;
		
		case 7:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_combat_hated_targets_around_ped")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_combat_hated_targets_around_ped")) != 1)
			{
				if (!func_171())
				{
					func_226();
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_81.f_0));
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_81.f_0), 20f, 0);
					func_228(4);
				}
			}
			break;
		
		case 8:
			if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
			{
				func_227();
				iLocal_541 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_29);
				if ((iLocal_541 != -1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_541)) || iLocal_541 == -1)
				{
					if ((!BitTest(Local_81.f_23, 27) && !func_37()) && !func_36())
					{
						if (BitTest(Local_81.f_24, 2))
						{
							if (!BitTest(Local_81.f_24, 3))
							{
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_81.f_0), iLocal_552);
								iVar3 = 1;
							}
							else
							{
								func_226();
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_81.f_0), iLocal_553);
								iVar3 = 1;
							}
						}
					}
					else
					{
						TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_81.f_0), Local_537, 250f, -1, true, false);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_228(25);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_81.f_0), true);
						func_6(Local_475.f_50, 1, func_7());
						MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 9);
					}
				}
			}
			else if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 19))
			{
				iVar4 = TASK::GET_NAVMESH_ROUTE_RESULT(NETWORK::NET_TO_PED(Local_81.f_0));
				if (iVar4 == 3)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_81.f_0));
					MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 19);
				}
				else if (iVar4 == 2)
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_81.f_0));
					if (!BitTest(Local_81.f_24, 3))
					{
						TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_81.f_0), iLocal_554);
					}
					else
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_81.f_0), 20f, 0);
					}
					MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 19);
				}
			}
			break;
	}
	func_223();
	return 1;
}

void func_223()
{
	if ((Local_81.f_3 != 8 && Local_81.f_3 != 7) && Local_81.f_2 == 3)
	{
		if ((((!BitTest(Local_81.f_23, 14) || !BitTest(Local_81.f_23, 15)) || !BitTest(Local_81.f_23, 22)) || !BitTest(Local_81.f_23, 23)) || !BitTest(Local_81.f_23, 30))
		{
			iLocal_541 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_29);
			if (iLocal_541 != -1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_541))
				{
					if (!func_171())
					{
						if (!BitTest(Local_81.f_23, 14) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 6))
						{
							func_228(2);
							MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 6);
						}
						if (!BitTest(Local_81.f_23, 15) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 7))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_541) > 0.87f)
							{
								func_228(3);
								MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 7);
							}
						}
						if (!BitTest(Local_81.f_23, 22) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 22))
						{
							if (BitTest(Local_81.f_23, 24) && !func_171())
							{
								func_228(11);
								MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 22);
							}
						}
						if (!BitTest(Local_81.f_23, 23) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 23))
						{
							if (BitTest(Local_81.f_23, 25) && !func_171())
							{
								func_228(12);
								MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 23);
							}
						}
					}
				}
			}
		}
		if (!BitTest(Local_81.f_23, 9))
		{
			if (!BitTest(Local_81.f_23, 26) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 24))
			{
				if (BitTest(Local_81.f_23, 7))
				{
					if (!func_171())
					{
						if (!BitTest(Local_81.f_24, 11))
						{
							if (!BitTest(Local_81.f_24, 12))
							{
								func_228(1);
							}
							else
							{
								func_228(19);
							}
						}
						else
						{
							func_228(16);
						}
						MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 24);
						return;
					}
					else
					{
						func_224();
						return;
					}
				}
			}
			if (((!BitTest(Local_81.f_23, 30) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 25)) && !BitTest(Local_81.f_23, 7)) && !BitTest(Local_81.f_23, 4))
			{
				if (BitTest(Local_81.f_24, 0) && !func_171())
				{
					if ((BitTest(Local_81.f_23, 7) && BitTest(Local_81.f_23, 4)) || (!BitTest(Local_81.f_23, 7) && !BitTest(Local_81.f_23, 4)))
					{
						if (!BitTest(Local_81.f_24, 11))
						{
							if (!BitTest(Local_81.f_24, 12))
							{
								func_228(13);
							}
							else
							{
								func_228(20);
							}
						}
						else
						{
							func_228(17);
						}
						MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						return;
					}
				}
			}
			if (!BitTest(Local_81.f_23, 31) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 26))
			{
				if (BitTest(Local_81.f_24, 1) && !func_171())
				{
					func_228(14);
					MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 26);
					return;
				}
			}
			if (!BitTest(Local_81.f_24, 9) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 31))
			{
				if (BitTest(Local_81.f_24, 8) && !func_171())
				{
					func_228(22);
					MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 31);
					return;
				}
			}
			if (!BitTest(Local_81.f_1, 3) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 3))
			{
				if (BitTest(Local_81.f_1, 2) && !func_171())
				{
					func_228(24);
					MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 3);
					return;
				}
			}
			if (!BitTest(Local_81.f_24, 14) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 20))
			{
				if (BitTest(Local_81.f_24, 13) && !func_171())
				{
					func_228(23);
					MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 20);
					return;
				}
			}
		}
	}
	if (!BitTest(Local_81.f_24, 6) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 29))
	{
		if (BitTest(Local_81.f_24, 5))
		{
			if (!func_171())
			{
				func_228(21);
				MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 29);
				return;
			}
		}
	}
}

void func_224()
{
	Global_20151 = 0;
	func_225();
}

void func_225()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22296 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21285 = 6;
	}
}

void func_226()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iVar0 < 3)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_81.f_0), joaat("weapon_pistol"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_81.f_0), MISC::GET_RANDOM_INT_IN_RANGE(10, 35));
	}
	else if (iVar0 < 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_81.f_0), joaat("weapon_combatpistol"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_81.f_0), MISC::GET_RANDOM_INT_IN_RANGE(15, 40));
	}
	else if (iVar0 == 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_81.f_0), joaat("weapon_microsmg"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_81.f_0), MISC::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	else if (iVar0 == 7)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_81.f_0), joaat("weapon_combatmg"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_81.f_0), MISC::GET_RANDOM_INT_IN_RANGE(5, 15));
	}
	else if (iVar0 == 8)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_81.f_0), joaat("weapon_bat"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_81.f_0), MISC::GET_RANDOM_INT_IN_RANGE(20, 40));
	}
	else if (iVar0 == 9)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_81.f_0), joaat("weapon_assaultrifle"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_81.f_0), MISC::GET_RANDOM_INT_IN_RANGE(5, 30));
	}
	else if (iVar0 == 10)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_81.f_0), joaat("weapon_sawnoffshotgun"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_81.f_0), MISC::GET_RANDOM_INT_IN_RANGE(5, 20));
	}
	else
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_81.f_0), joaat("weapon_pumpshotgun"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_81.f_0), MISC::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	func_6(Local_475.f_50, 1, func_7());
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_81.f_0), Global_1837189);
	PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_81.f_0), true);
	PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_81.f_0), 1);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_81.f_0), Local_534, 20f, false, false);
	PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_81.f_0), true);
}

void func_227()
{
	iLocal_541 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_81.f_29);
	if (iLocal_541 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_541))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_81.f_29);
		}
	}
}

void func_228(int iParam0)
{
	struct<2> Var0;
	int iVar4;
	
	if (BitTest(Local_81.f_23, 13))
	{
		if (!func_395(Local_81.f_0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_81.f_0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_81.f_0)))
				{
					if (Local_81.f_45 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_81.f_45 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_81.f_31, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (MISC::ARE_STRINGS_EQUAL(&Var0, "RB_SH241"))
					{
						if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, true))
						{
							if ((((((iVar4 == joaat("weapon_unarmed") || iVar4 == 0) || iVar4 == joaat("object")) || iVar4 == joaat("weapon_flare")) || iVar4 == joaat("weapon_snowball")) || func_250(iVar4)) || func_249(iVar4))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_394(&uLocal_598, 3, NETWORK::NET_TO_PED(Local_81.f_0), &(Local_81.f_46), 1, 0);
					switch (iParam0)
					{
						case 0:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_GREET", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 1:
							func_229(&uLocal_598, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_229(&uLocal_598, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_229(&uLocal_598, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_BRAVE", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 10:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_REMOVE_VEHICLE", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 11:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_REACT_TO_SHOUT", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 12:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_HURRYING", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 13:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_NO_COPS", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 14:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_THREATENED", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 15:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_GREET_START", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 16:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_SCARED_START", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 17:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_NO_COPS_START", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 18:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_GREET_END", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 19:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_SCARED_END", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 20:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_NO_COPS_END", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 21:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_COPS_ARRIVED", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 22:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_SELL", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 23:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_NO_ENTRY", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 24:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SHOP_STEAL", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 25:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_81.f_0), "SCREAM_PANIC", &(Local_81.f_50), "SPEECH_PARAMS_FORCE", true);
							break;
						}
					}
				}
			}
	}
}

int func_229(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_248(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21292 = 0;
	Global_21294 = 0;
	Global_21299 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_2883585 = 1;
	return func_230(sParam2, iParam3, 0);
}

int func_230(char* sParam0, int iParam1, bool bParam2)
{
	Global_21286 = 0;
	if (Global_21285 == 0 || Global_21287 == 2)
	{
		if (Global_21285 != 0)
		{
			if (iParam1 > Global_21287)
			{
				if (Global_21292 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19954.f_1 = 3;
					Global_21285 = 0;
					Global_21286 = 1;
					Global_21338 = 0;
					Global_21281 = 0;
					Global_21282 = 0;
					Global_21296 = 0;
					Global_21295 = 0;
					Global_19953 = 0;
				}
				else
				{
					func_247();
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
		if (func_246(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_245();
		Global_20574 = { Global_20739 };
		Global_21291 = Global_21292;
		Global_21298 = Global_21299;
		Global_2883586 = Global_2883585;
		Global_21300 = { Global_21316 };
		Global_21293 = Global_21294;
		Global_22275 = Global_22276;
		Global_22283 = { Global_22289 };
		Global_22277 = Global_22278;
		Global_22279 = Global_22280;
		Global_22281 = Global_22282;
		Global_20904.f_370 = Global_22274;
		Global_20904.f_368 = Global_22272;
		Global_20904.f_369 = Global_22273;
		Global_21281 = Global_21282;
		if (Global_21291)
		{
			MISC::CLEAR_BIT(&Global_7824, 20);
			MISC::CLEAR_BIT(&Global_7825, 17);
			MISC::CLEAR_BIT(&Global_7826, 0);
			if (bParam2)
			{
				func_238();
				if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19954.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19920 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_237())
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
				if (!Global_77858)
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
			if (func_236())
			{
				return 0;
			}
			else
			{
				switch (Global_19954.f_1)
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
				if (BitTest(Global_7824, 9))
				{
					return 0;
				}
			}
			func_235();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_234();
		func_231();
		return 1;
	}
	if (Global_21285 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21287 || iParam1 == Global_21287)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_247();
	}
	return 0;
}

void func_231()
{
	if (!func_232())
	{
		return;
	}
	if (Global_21291)
	{
		MemCopy(&(Global_1973354.f_1), {Global_20904}, 4);
		Global_1973354 = Global_7139;
		Global_1973354.f_6 = Global_21295;
	}
}

int func_232()
{
	if (!Global_262145.f_28542)
	{
		return 0;
	}
	if (!Global_77858)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_180())
	{
		return 0;
	}
	if (func_233(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_233(int iParam0)
{
	return func_140(iParam0, 20);
}

void func_234()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20153[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21285 = 1;
}

void func_235()
{
	Global_21338 = Global_21337;
	Global_21332 = Global_21333;
	Global_21379 = { Global_21367 };
	Global_21385 = { Global_21373 };
	Global_21340 = Global_21339;
	Global_21409 = { Global_21391 };
	Global_21415 = { Global_21397 };
	Global_21421 = { Global_21403 };
	Global_21427 = { Global_21433 };
	Global_7139 = Global_7140;
	Global_7141 = Global_7142;
	Global_21296 = Global_21297;
	Global_21298 = Global_21299;
	Global_21300 = { Global_21316 };
	Global_21289 = Global_21290;
	Global_22301 = 0;
	Global_21334 = 0;
	Global_21335 = 0;
	MISC::CLEAR_BIT(&Global_7825, 16);
}

int func_236()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_237()
{
	int iVar0;
	int iVar1;
	
	if (Global_77858)
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

void func_238()
{
	if (func_121(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[0 /*29*/])
			{
				Global_19954 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[1 /*29*/])
			{
				Global_19954 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[2 /*29*/])
			{
				Global_19954 = 2;
			}
			else
			{
				Global_19954 = 0;
			}
		}
	}
	else
	{
		Global_19954 = func_239();
		if (Global_19954 == 145)
		{
			Global_19954 = 3;
		}
		if (Global_77858)
		{
			Global_19954 = 3;
		}
		if (Global_19954 > 3)
		{
			Global_19954 = 3;
		}
	}
}

var func_239()
{
	func_240();
	return Global_112922.f_2363.f_539.f_4321;
}

void func_240()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_243(Global_112922.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_242(PLAYER::PLAYER_PED_ID());
			if (func_241(iVar0) && (!func_121(14) || Global_111873))
			{
				if (Global_112922.f_2363.f_539.f_4321 != iVar0 && func_241(Global_112922.f_2363.f_539.f_4321))
				{
					Global_112922.f_2363.f_539.f_4322 = Global_112922.f_2363.f_539.f_4321;
				}
				Global_112922.f_2363.f_539.f_4323 = iVar0;
				Global_112922.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112922.f_2363.f_539.f_4321 != 145)
			{
				Global_112922.f_2363.f_539.f_4323 = Global_112922.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112922.f_2363.f_539.f_4321 = 145;
}

bool func_241(int iParam0)
{
	return iParam0 < 3;
}

int func_242(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_243(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_243(int iParam0)
{
	if (func_241(iParam0))
	{
		return func_244(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_244(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

void func_245()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20574[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20574[iVar0 /*10*/].f_1), "", 24);
		Global_20574[iVar0 /*10*/].f_7 = 0;
		Global_20574[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20574.f_161 = -99;
	Global_20574.f_162 = { 0f, 0f, 0f };
}

bool func_246(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644218.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1644218.f_1048, iParam0);
}

void func_247()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22296 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19954.f_1 == 9) || Global_19953 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21285 = 6;
		Global_19954.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21285 = 6;
		return;
	}
}

void func_248(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20739 = { *uParam0 };
	Global_7140 = iParam1;
	StringCopy(&Global_21355, sParam2, 24);
	Global_22274 = uParam5;
	if (iParam3 == 0)
	{
		Global_22272 = 1;
		Global_22270 = 0;
	}
	else
	{
		Global_22272 = 0;
		Global_22270 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22273 = 1;
		Global_22271 = 0;
	}
	else
	{
		Global_22273 = 0;
		Global_22271 = 1;
	}
}

int func_249(int iParam0)
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
	return 0;
}

int func_250(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

void func_251()
{
	int iVar0;
	
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0);
	if (Local_81.f_43 != iVar0)
	{
		if (Local_81.f_43 < iVar0 || func_258(Local_81.f_43, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_81.f_43);
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0);
	if (Local_81.f_44 != iVar0)
	{
		if (Local_81.f_44 < iVar0 || func_252(Local_81.f_44, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_81.f_44);
		}
	}
}

int func_252(int iParam0, bool bParam1, bool bParam2)
{
	return func_253(2, iParam0, 1, bParam1, bParam2);
}

int func_253(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1656884, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_257(iParam0) - func_256(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_256(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_257(iParam0) - func_255(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_256(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_257(iParam0) - func_256(iParam0, 1));
		}
		if (!bParam4 && Global_1853131[PLAYER::PLAYER_ID() /*888*/] != 3)
		{
			iVar1 = (iVar1 - func_254(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0)
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

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1656884.f_1;
			break;
		
		case 1:
			return Global_1656884.f_2;
			break;
		
		case 2:
			return Global_1656884.f_3;
			break;
	}
	return 0;
}

int func_256(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689224[iVar0 /*451*/].f_216;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689224[iVar0 /*451*/].f_217;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689224[iVar0 /*451*/].f_218;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1656892;
			break;
		
		case 1:
			return Global_1656893;
			break;
		
		case 2:
			return Global_1656894;
			break;
	}
	return 0;
}

int func_258(int iParam0, bool bParam1, bool bParam2)
{
	return func_253(0, iParam0, 1, bParam1, bParam2);
}

void func_259()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	switch (iLocal_793)
	{
		case 0:
			if (!BitTest(Local_475.f_53, 0))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_14))
				{
					if (func_265(Local_799))
					{
						Local_799 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_OBJ(Local_81.f_14), 0f, -0.5f, 0f) };
						MISC::SET_BIT(&(Local_475.f_53), 0);
					}
				}
			}
			if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_799, 0.5f, 0.5f, 1f, false, true, 0) && (func_395(Local_81.f_0) || Local_81.f_3 > 7)) && !BitTest(Local_81.f_23, 20)) && !BitTest(Local_81.f_23, 11)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_542, 1.5f) == 0)
			{
				if (((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_168(0)) && !func_264()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_39(PLAYER::PLAYER_ID(), 146)) && !func_38(PLAYER::PLAYER_ID())) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_14)) && (!func_138(PLAYER::PLAYER_ID()) || func_95(PLAYER::PLAYER_ID()) == 154))
				{
					func_148("FHU_MANR", -1);
					Global_2810701.f_5960.f_4 = 1;
					iLocal_793 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!BitTest(Local_81.f_24, 16) && !BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12)) && !BitTest(Local_81.f_23, 20)) && !BitTest(Local_81.f_23, 11)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_799, 0.5f, 0.5f, 1f, false, true, 0)) && (!func_138(PLAYER::PLAYER_ID()) || func_95(PLAYER::PLAYER_ID()) == 154))
			{
				if (((PAD::IS_CONTROL_JUST_PRESSED(0, 51) && !func_263(0)) && !func_264()) && !HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_146("FHU_MANR"))
					{
						HUD::CLEAR_HELP(true);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 640);
					MISC::SET_BIT(&(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 12);
					iLocal_793 = 2;
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
					if (iLocal_798 == 0)
					{
						func_260(&iLocal_798, 4, "FHU_MANR", 0, 0, 0, 0);
					}
				}
			}
			else if (func_146("FHU_MANR"))
			{
				HUD::CLEAR_HELP(true);
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Local_799.f_2 = (Var3.f_2 - 1f);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_799, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D((Local_562.f_0 - Local_799.f_0), (Local_562.f_1 - Local_799.f_1)));
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
				bVar2 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_797, true);
				if (bVar2)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				if (!CAM::DOES_CAM_EXIST(iLocal_794))
				{
					iLocal_794 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_794, PLAYER::PLAYER_PED_ID(), -0.1878f, 3.0635f, 0.68f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_794, PLAYER::PLAYER_PED_ID(), -0.0129f, 0.0927f, 0.3008f, true);
				CAM::SET_CAM_FOV(iLocal_794, 35f);
				CAM::SHAKE_CAM(iLocal_794, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(iLocal_794, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			iLocal_793 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_795))
				{
					iLocal_795 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_795, PLAYER::PLAYER_PED_ID(), -1.0346f, 2.9183f, 0.68f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_795, PLAYER::PLAYER_PED_ID(), -0.0574f, 0.1074f, 0.3008f, true);
				CAM::SET_CAM_FOV(iLocal_795, 35f);
				CAM::SHAKE_CAM(iLocal_795, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_795, iLocal_794, 6000, 1, 1);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, true);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			iLocal_793 = 4;
			break;
		
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_795))
			{
				iLocal_793 = 5;
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_796)
						{
							iVar7 = SYSTEM::ROUND(((IntToFloat(iLocal_567) * 0.75f) / 4f));
							iVar8 = SYSTEM::ROUND(((IntToFloat(iLocal_568) * 0.75f) / 4f));
							iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(iVar7, iVar8 + 1);
							iVar1 = func_218(iVar1, 1);
							if (iVar1 > (Global_262145.f_166 / 4))
							{
								iVar1 = (Global_262145.f_166 / 4);
							}
							if (func_217(PLAYER::PLAYER_ID()) && func_215(func_216(PLAYER::PLAYER_ID())) < 1f)
							{
								if (Global_262145.f_4226 > 1f)
								{
									Global_262145.f_4226 = 1f;
								}
								iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_4226));
							}
							if (iVar1 > 0)
							{
								if (func_214())
								{
									func_203(1734805203, iVar1, &uVar9, 0, 0, 0);
								}
								else
								{
									func_199(iVar1, 1, 1, 1092616192);
									MONEY::NETWORK_EARN_FROM_HOLDUPS(iVar1);
								}
							}
							Global_2810701.f_5960 = (Global_2810701.f_5960 + iVar1);
							iLocal_792 = (iLocal_792 + iVar1);
							func_187(1, iLocal_792);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
							iLocal_796 = 1;
						}
					}
					else if (iLocal_796)
					{
						iLocal_796 = 0;
					}
				}
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, true);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			break;
		
		case 5:
			if (iLocal_797 != joaat("weapon_unarmed") && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_797, true);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (CAM::DOES_CAM_EXIST(iLocal_794))
			{
				CAM::DESTROY_CAM(iLocal_794, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_795))
			{
				CAM::DESTROY_CAM(iLocal_795, false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			Global_2810701.f_5960.f_2 = 1;
			Global_2810701.f_5960.f_5 = 1;
			if (func_183(1))
			{
				func_174(4);
			}
			iLocal_793 = 7;
			break;
		
		case 6:
			CAM::SET_CAM_ACTIVE(iLocal_795, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			iLocal_793 = 5;
			break;
	}
}

void func_260(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_261(iParam0);
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
		if (!Global_43334[iVar0 /*32*/])
		{
			Global_43334[iVar0 /*32*/] = 1;
			Global_43334[iVar0 /*32*/].f_1 = Global_43535;
			Global_43535++;
			Global_43334[iVar0 /*32*/].f_4 = 0;
			Global_43334[iVar0 /*32*/].f_29 = 0;
			Global_43334[iVar0 /*32*/].f_5 = 0;
			Global_43334[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43334[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43334[iVar0 /*32*/].f_6 = iParam3;
			Global_43334[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_43334[iVar0 /*32*/].f_7 = 0;
			Global_43334[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_43334[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43334[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43334[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43334[iVar0 /*32*/].f_12 = 0;
				Global_43334[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_43334[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_261(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_262(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43334[iVar0 /*32*/])
		{
			Global_43334[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_262(int iParam0)
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
		if (Global_43334[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_263(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (BitTest(Global_7824, 14))
			{
				if (Global_19953 == 1)
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_19953 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_19954.f_1 > 3)
	{
		if (Global_19953 == 1)
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

bool func_264()
{
	return MISC::GET_GAME_TIMER() <= Global_22830.f_6141 + 100;
}

int func_265(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_266(var uParam0, var uParam1, var uParam2, var uParam3, struct<3> Param4, var uParam7, int* iParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	bool bVar8;
	int iVar9;
	char* sVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	
	if (((uParam7->f_4 >= 1000 || (uParam7->f_4 + uParam0->f_51) >= 1000) || func_392(&(uParam7->f_5))) || (func_142(&(Global_2810701.f_10)) && !func_391(Global_2810701.f_10, 300000, 0)))
	{
		if (func_142(&(Global_2810701.f_10)))
		{
			if ((MISC::GET_GAME_TIMER() % 2500) < 50)
			{
			}
		}
		if (!uParam0->f_34)
		{
			uParam0->f_34 = 1;
			if (!func_142(&(Global_2810701.f_10)))
			{
				func_19(&(Global_2810701.f_10), 0, 0);
			}
		}
	}
	else
	{
		if (func_142(&(Global_2810701.f_10)))
		{
			func_14(&(Global_2810701.f_10));
		}
		if (uParam0->f_34)
		{
			uParam0->f_34 = 0;
		}
	}
	if ((MISC::GET_GAME_TIMER() % 5000) < 50)
	{
	}
	if ((((((uParam7->f_3 < 2 && func_46(PLAYER::PLAYER_ID(), 1, 1)) && BitTest(uParam0->f_52, 26)) && !func_390(-1082130432)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1) && !bParam9) && !func_395(*uParam7))
	{
		bVar8 = false;
		iVar9 = 0;
		if ((HUD::IS_PAUSE_MENU_ACTIVE() && uParam0->f_54 != 0) && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			if (!bParam10)
			{
				uParam0->f_54 = 0;
				func_389(uParam0, &(iParam8->f_3));
			}
		}
		switch (uParam0->f_54)
		{
			case 0:
				if ((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && (!func_138(PLAYER::PLAYER_ID()) || func_95(PLAYER::PLAYER_ID()) == 154)) && !func_388(PLAYER::PLAYER_ID(), 21))
				{
					if (func_387(*uParam0, &uParam1, Param4.f_2, &(uParam0->f_16[0 /*3*/]), &(uParam0->f_16[1 /*3*/]), &(uParam0->f_23), &(uParam0->f_26)))
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(*uParam7), true) };
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, uParam0->f_23, true) < 5f && MISC::ABSF((Var2.f_2 - Var5.f_2)) < 0.25f) || func_445(1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_26, false, true, 0) || func_445(1))
							{
								if (PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uParam0->f_23, 135f) || func_445(1))
								{
									if (uParam0->f_34)
									{
										if (func_445(1))
										{
											func_409();
										}
										if (((!func_146("SHR_HOLDUP_1") && !func_146("SHR_MENU")) && !func_386()) && func_385())
										{
											func_148("SHR_SOLD_OUT", -1);
											uParam0->f_54 = 10;
										}
									}
									else
									{
										if (func_445(1))
										{
										}
										uParam0->f_14 = -1;
										func_260(&(uParam0->f_14), 4, "SHR_MENU", 0, 0, 0, 0);
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
					if (func_146("SHR_MENU"))
					{
						HUD::CLEAR_HELP(true);
					}
					if (func_40(PLAYER::PLAYER_ID()))
					{
						if (!BitTest(uParam0->f_53, 4))
						{
							func_148("SHR_FM_CRIT", -1);
							HUD::_SET_HELP_MESSAGE_TEXT_STYLE(3, 21, 200, 0, 0);
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
				if ((!PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uParam0->f_23, 135f) || MISC::ABSF((Var2.f_2 - Var5.f_2)) >= 0.25f) && !func_445(1))
				{
					if (func_146("SHR_MENU"))
					{
						HUD::CLEAR_HELP(true);
					}
					func_261(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_146("SHR_MENU"))
					{
						HUD::CLEAR_HELP(true);
					}
					func_261(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (func_168(0) || func_167())
				{
					if (func_146("SHR_MENU"))
					{
						HUD::CLEAR_HELP(true);
					}
					func_261(&(uParam0->f_14));
					func_162(1, *uParam0);
					MISC::CLEAR_BIT(&(uParam0->f_52), 26);
					uParam0->f_54 = 0;
				}
				if (!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					if (func_384(uParam0->f_14, 1) || func_445(1))
					{
						if (func_445(1))
						{
							func_409();
						}
						if (func_146("SHR_MENU"))
						{
							HUD::CLEAR_HELP(true);
						}
						func_382(&(uParam0->f_44));
						func_261(&(uParam0->f_14));
						func_376(0, 0);
						MISC::SET_BIT(&(uParam0->f_53), 7);
						func_433(PLAYER::PLAYER_ID(), 0, 66048, 0);
						HUD::THEFEED_FLUSH_QUEUE();
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_395(*uParam7))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(*uParam7), 0);
							MISC::CLEAR_BIT(&(iParam8->f_1), 1);
						}
						func_375();
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
						func_374(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &fVar11);
						CAM::SET_CAM_COORD(uParam0->f_1, uParam0->f_2);
						CAM::SET_CAM_ROT(uParam0->f_1, uParam0->f_5, 2);
						CAM::SET_CAM_FOV(uParam0->f_1, fVar11);
						CAM::SHAKE_CAM(uParam0->f_1, "HAND_SHAKE", 0.1f);
						CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					}
					uParam0->f_37 = func_397(*uParam0);
				}
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				uParam0->f_13 = 6;
				func_373(0, 0);
				func_372(1, 1, 0, 0, 0);
				func_371(1, 2, 1, 1, 1);
				func_370("SNK_ITEM");
				if (!bParam10)
				{
					func_368(1, uParam0->f_37, uParam0->f_37);
				}
				iVar12 = 0;
				while (iVar12 < uParam0->f_13)
				{
					bVar8 = func_367(iVar12);
					func_362(iVar12, func_366(iVar12), 0, !bVar8, 0, 0, 0);
					if (uParam7->f_5[iVar12] >= 10 || ((func_142(&(Global_2810701.f_12[iVar12 /*2*/])) && !func_391(Global_2810701.f_12[iVar12 /*2*/], 150000, 0)) && *uParam0 == Global_2810701.f_27))
					{
						func_362(iVar12, "", 1, 1, 0, 0, 0);
						func_361(15, 0);
						if (func_142(&(Global_2810701.f_12[iVar12 /*2*/])) && !func_391(Global_2810701.f_12[iVar12 /*2*/], 150000, 0))
						{
							uParam7->f_5[iVar12] = 10;
						}
						if (!func_142(&(Global_2810701.f_12[iVar12 /*2*/])))
						{
							Global_2810701.f_27 = *uParam0;
							func_19(&(Global_2810701.f_12[iVar12 /*2*/]), 0, 0);
						}
					}
					else if (bVar8)
					{
						func_362(iVar12, "SNK_FULL", 0, !bVar8, 0, 0, 0);
					}
					else if (!bParam10)
					{
						func_362(iVar12, "ITEM_COST", 1, 1, 0, 0, 0);
						func_357(func_360(uParam0, iVar12), 0);
					}
					else
					{
						func_362(iVar12, "SNK_FREE", 0, 1, 0, 0, 0);
					}
					iVar12++;
				}
				func_356(0);
				func_355(uParam0->f_12, 1, 1);
				if (uParam0->f_35)
				{
					if (!bParam10)
					{
						func_354("SNK_BOUGHT", 0, 0);
					}
					else
					{
						func_354("SNK_STORED", 0, 0);
					}
				}
				else if (uParam7->f_5[uParam0->f_12] >= 10)
				{
					func_354("SNK_SOUT", 0, 0);
				}
				else
				{
					func_354(func_353(uParam0->f_12), 0, 0);
				}
				func_352(201, "ITEM_SELECT", -1, 0);
				if (bParam10)
				{
					func_352(203, "STORE_TAKE_ALL", -1, 0);
				}
				func_352(202, "ITEM_BACK", -1, 0);
				if (!bParam10)
				{
					func_352(203, "SNK_LIFT", -1, 0);
					func_317(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
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
							func_433(PLAYER::PLAYER_ID(), 0, 98816, 0);
						}
						else
						{
							func_433(PLAYER::PLAYER_ID(), 0, 256, 0);
						}
						MISC::SET_BIT(&(iParam8->f_1), 1);
					}
				}
				iVar9 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, true);
						PAD::DISABLE_CONTROL_ACTION(0, 2, true);
						PAD::ENABLE_CONTROL_ACTION(0, 237, true);
						PAD::ENABLE_CONTROL_ACTION(0, 238, true);
						PAD::ENABLE_CONTROL_ACTION(0, 241, true);
						PAD::ENABLE_CONTROL_ACTION(0, 242, true);
						func_313(0, 0, 0, 1);
						func_312(0, -1, 1);
						if (func_311())
						{
							if (Global_4534059 != uParam0->f_12)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								uParam0->f_12 = Global_4534059;
								func_355(uParam0->f_12, 1, 1);
								uParam0->f_27 = 0;
								uParam0->f_29 = 0;
								uParam0->f_30 = 0;
								uParam0->f_32 = 0;
								sVar10 = func_353(uParam0->f_12);
								if (HUD::DOES_TEXT_LABEL_EXIST(sVar10))
								{
									func_354(sVar10, 0, 0);
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
					func_317(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				func_301(uParam0, &(uParam7->f_5), bParam10);
				if ((uParam7->f_2 > 2 && BitTest(uParam7->f_1, 0)) && BitTest(iParam8->f_1, 0))
				{
					MISC::CLEAR_BIT(&(iParam8->f_1), 0);
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
				{
					func_298(uParam0);
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
						func_382(&(uParam0->f_44));
					}
					if ((uParam0->f_28 && uParam0->f_31) && uParam0->f_33)
					{
						if (func_214())
						{
							uParam0->f_47 = 1;
							uParam0->f_48 = 0;
							uParam0->f_49 = -1;
							iVar0 = 0;
							if (!bParam10)
							{
								iVar0 = func_360(uParam0, uParam0->f_12);
							}
							func_286(uParam0, -1303831698, 537254313, iVar0);
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
								iVar0 = func_360(uParam0, uParam0->f_12);
							}
							func_285(MISC::GET_HASH_KEY(func_353(uParam0->f_12)), iVar0, 0);
							func_278(0, 31, 3);
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
						func_382(&(uParam0->f_44));
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
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_158(), func_277(), 8f, -8f, -1, 1048576, 0f, false, false, false);
							uParam0->f_54 = 8;
							uParam0->f_15 = MISC::GET_GAME_TIMER();
							AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", true);
							if (!bParam10)
							{
								func_389(uParam0, &(iParam8->f_3));
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					if (func_445(1))
					{
						func_409();
					}
					uParam0->f_54 = 9;
					uParam0->f_15 = MISC::GET_GAME_TIMER();
					if (!bParam10)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
						func_389(uParam0, &(iParam8->f_3));
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FREEMODE_SOUNDSET", true);
						Global_2725263 = 1;
					}
				}
				if (uParam0->f_34)
				{
					uParam0->f_54 = 10;
					uParam0->f_15 = MISC::GET_GAME_TIMER();
					if (!bParam10)
					{
						func_389(uParam0, &(iParam8->f_3));
					}
					func_148("SHR_SOLD_OUT", -1);
				}
				iVar13 = 0;
				while (iVar13 < uParam0->f_13)
				{
					if (func_142(&(Global_2810701.f_12[iVar13 /*2*/])) && func_391(Global_2810701.f_12[iVar13 /*2*/], 150000, 0))
					{
						func_14(&(Global_2810701.f_12[iVar13 /*2*/]));
						uParam7->f_5[iVar13] = 0;
						uParam0->f_54 = 3;
					}
					iVar13++;
				}
				break;
			
			case 5:
				iVar0 = 0;
				if (!bParam10)
				{
					func_317(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
					iVar0 = func_360(uParam0, uParam0->f_12);
				}
				if (func_286(uParam0, -1303831698, 537254313, iVar0))
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
									iVar0 = func_360(uParam0, uParam0->f_12);
								}
								func_285(MISC::GET_HASH_KEY(func_353(uParam0->f_12)), iVar0, 0);
								func_278(0, 31, 3);
								func_276();
								func_275();
								uParam0->f_54 = 11;
							}
							else
							{
								if (func_445(1))
								{
									func_409();
								}
								uParam0->f_54 = 9;
								uParam0->f_15 = MISC::GET_GAME_TIMER();
								AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
								if (!bParam10)
								{
									func_389(uParam0, &(iParam8->f_3));
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
					func_317(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (func_214())
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_273(func_274()));
				}
				if (bParam10)
				{
					if (!BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_127, 6))
					{
						MONEY::_0x0D30EB83668E63C5(1, uParam0->f_12, 0, 1);
						MISC::SET_BIT(&(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_127), 6);
					}
					iVar1 = 0;
					switch (uParam0->f_12)
					{
						case 3:
							func_105(1276, 1, -1);
							func_104(16, 1, -1);
							break;
						
						case 1:
							func_105(1277, 1, -1);
							func_104(15, 1, -1);
							break;
						
						case 2:
							func_104(14, 1, -1);
							func_105(1278, 1, -1);
							break;
						
						case 4:
							uParam0->f_55 = 20;
							if (func_126(1098, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_126(1098, -1, 0));
							}
							func_105(1098, uParam0->f_55, -1);
							break;
						
						case 0:
							func_105(62, 1, -1);
							break;
						
						case 5:
							func_105(63, 1, -1);
							break;
					}
				}
				else
				{
					switch (uParam0->f_12)
					{
						case 3:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_360(uParam0, uParam0->f_12);
							}
							func_105(1276, 1, -1);
							func_104(16, 1, -1);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM1"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 1:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_360(uParam0, uParam0->f_12);
							}
							func_105(1277, 1, -1);
							func_104(15, 1, -1);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM2"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 2:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_360(uParam0, uParam0->f_12);
							}
							func_104(14, 1, -1);
							func_105(1278, 1, -1);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM3"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 4:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_360(uParam0, uParam0->f_12);
							}
							uParam0->f_55 = 20;
							if (func_126(1098, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_126(1098, -1, 0));
							}
							func_105(1098, uParam0->f_55, -1);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM4"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 0:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_360(uParam0, uParam0->f_12);
							}
							func_105(62, 1, -1);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM5"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 5:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_360(uParam0, uParam0->f_12);
							}
							func_105(63, 1, -1);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM6"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						}
				}
				if (func_214())
				{
					func_206(func_274());
				}
				func_271(-iVar1, 0);
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
						func_389(uParam0, &(iParam8->f_3));
					}
					func_148("SHR_SOLD_OUT", -1);
				}
				else if (uParam7->f_5[uParam0->f_12] >= 10 || func_367(uParam0->f_12))
				{
					uParam0->f_54 = 3;
				}
				else
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 8:
				func_193(1);
				switch (uParam0->f_12)
				{
					case 3:
						func_269(0, 1f, 3);
						func_105(1276, 1, -1);
						func_104(13, 1, -1);
						break;
					
					case 1:
						func_269(1, 1f, 3);
						func_105(1277, 1, -1);
						func_104(13, 1, -1);
						break;
					
					case 2:
						func_269(2, 1f, 3);
						func_105(1278, 1, -1);
						func_104(13, 1, -1);
						break;
					
					case 4:
						uParam0->f_55 = 20;
						if (func_126(1098, -1, 0) + 20 > 20)
						{
							uParam0->f_55 = (20 - func_126(1098, -1, 0));
						}
						func_269(5, SYSTEM::TO_FLOAT(uParam0->f_55), 3);
						func_105(1098, uParam0->f_55, -1);
						break;
					
					case 0:
						func_269(3, 1f, 3);
						func_105(62, 1, -1);
						break;
					
					case 5:
						func_269(4, 1f, 3);
						func_105(63, 1, -1);
						break;
				}
				if (!bParam10)
				{
					func_433(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1 && !func_267(PLAYER::PLAYER_ID()))
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
				if (!Global_100032.f_1457 && !NETWORK::IS_COMMERCE_STORE_OPEN())
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 10:
				if (!bParam10)
				{
					func_433(PLAYER::PLAYER_ID(), 1, 0, 0);
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
				func_389(uParam0, &(iParam8->f_3));
			}
			uParam0->f_54 = 12;
		}
		if (uParam0->f_14 != -1)
		{
			func_261(&(uParam0->f_14));
		}
	}
}

int func_267(int iParam0)
{
	if ((func_40(iParam0) || func_268(iParam0)) && func_215(func_216(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_268(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1893551[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

void func_269(int iParam0, float fParam1, int iParam2)
{
	struct<8> Var0;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	
	if (fParam1 > 0f)
	{
		if (func_270(iParam0, &Var0))
		{
			Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			func_193(1);
			iVar12 = -1;
			iVar11 = 0;
			while (iVar11 < 20)
			{
				if (Global_2703660.f_967[iVar11 /*30*/].f_6 == 0 || Global_2703660.f_967[iVar11 /*30*/].f_6 == 7)
				{
					iVar12 = iVar11;
					iVar11 = 20;
				}
				iVar11++;
			}
			if (iVar12 != -1)
			{
				Global_2703660.f_967[iVar12 /*30*/] = { Var8 };
				Global_2703660.f_967[iVar12 /*30*/].f_6 = 1;
				Global_2703660.f_967[iVar12 /*30*/].f_4 = func_192(Global_2703660.f_967[iVar12 /*30*/], &Global_1574479, &Global_1574480);
				Global_2703660.f_967[iVar12 /*30*/].f_5 = fParam1;
				Global_2703660.f_967[iVar12 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
				Global_2703660.f_967[iVar12 /*30*/].f_8 = iParam2;
				Global_2703660.f_967[iVar12 /*30*/].f_14 = { Var0 };
				Global_2703660.f_967[iVar12 /*30*/].f_9 = func_191();
				Global_2703660.f_967[iVar12 /*30*/].f_10 = func_190();
			}
		}
	}
}

int func_270(int iParam0, char* sParam1)
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
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_271(int iParam0, int iParam1)
{
	func_201(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_202(iParam0, 0);
	}
}

int func_272(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_180())
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

int func_273(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_274()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_273(iVar0) != 2147483647)
		{
			if (func_209(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_275()
{
	Global_2714635.f_785.f_32 = 1;
}

void func_276()
{
	Global_2714635.f_785.f_28 = 1;
	Global_2714635.f_785.f_32 = 0;
	Global_2714635.f_785.f_31 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	func_14(&(Global_2714635.f_785.f_29));
}

char* func_277()
{
	if (func_13())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_278(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!NETWORK::IS_STORE_AVAILABLE_TO_USER())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_282(PLAYER::PLAYER_ID(), 1, 0))
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
	if (func_281())
	{
		return;
	}
	if (!func_279())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0)
	{
		if (!Global_100032.f_1457 && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			iVar0 = 18;
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", false, -1, 0, 0, true, 0);
			Global_2726293 = iParam1;
			Global_100032.f_1457 = 1;
			Global_100032.f_1458 = iParam2;
		}
	}
}

int func_279()
{
	if (func_280())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_280()
{
	return Global_2725740;
}

bool func_281()
{
	return Global_2726400;
}

int func_282(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_283(iParam0))
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

bool func_283(int iParam0)
{
	return func_284(iParam0);
}

var func_284(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_11.f_1, 0);
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	Global_100032.f_1459 = iParam0;
	Global_100032.f_1460 = iParam1;
	Global_100032.f_1461 = iParam2;
}

int func_286(var uParam0, int iParam1, int iParam2, int iParam3)
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
				cVar3 = func_366(uParam0->f_12);
				func_294(&sVar4, cVar3, func_295(uParam0));
				if (func_291(78225582, iParam1, MISC::GET_HASH_KEY(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_289())
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
				if (func_288(func_274()))
				{
					if (func_287(func_274()) == 2)
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
				func_206(func_274());
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

int func_287(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_288(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_289()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_274();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_79()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_290(Global_4528329[iVar2 /*85*/].f_66.f_6, Global_4528329[iVar2 /*85*/].f_66.f_4, Global_4528329[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4529831 = 1;
			}
			return 0;
		}
		if (Global_2726400)
		{
			if (Global_4528329[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4528329[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_273(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4528329[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4528329[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4528329[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4528329[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4528329[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_212(Global_4528329[iVar2 /*85*/], iVar2);
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_79()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726400)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_274();
	if (iVar1 == -1)
	{
		if (!func_293(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_292(iParam1))
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
		Global_4528329[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4528329[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4528329[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0)
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

int func_293(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_79()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726400)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4528329[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4528329[iVar1 /*85*/].f_66.f_5 == 1)
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
		if (NETSHOPPING::NET_GAMESERVER_BASKET_END())
		{
			NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_211(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

void func_294(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_295(var uParam0)
{
	if (func_272(PLAYER::PLAYER_ID(), 1, 0) || func_296(PLAYER::PLAYER_ID()))
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

int func_296(int iParam0)
{
	if (iParam0 != func_180())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_297(Global_2689224[iParam0 /*451*/].f_317.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_297(int iParam0)
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

void func_298(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_367(uParam0->f_12))
	{
		func_123(func_300(uParam0->f_12), func_299(uParam0->f_12), -1, 1, 0);
		bVar0 = true;
	}
	if (bVar0)
	{
		MONEY::NETWORK_BUY_ITEM(0, MISC::GET_HASH_KEY(func_366(uParam0->f_12)), 12, 1, false, 0, 0, 0, 0, true);
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

int func_299(var uParam0)
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
		
		default:
	}
	return 0;
}

int func_300(var uParam0)
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
		
		default:
	}
	return 12581;
}

void func_301(var uParam0, var uParam1, bool bParam2)
{
	char* sVar0;
	
	if (!uParam0->f_29)
	{
	}
	if (func_310(uParam0))
	{
		uParam0->f_27 = 0;
		func_309(&(uParam0->f_44));
		uParam0->f_12 = (uParam0->f_12 - 1);
		if (uParam0->f_12 < 0)
		{
			uParam0->f_12 = (uParam0->f_13 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_355(uParam0->f_12, 1, 1);
		sVar0 = func_353(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_354(sVar0, 0, 0);
		}
	}
	if (func_306(uParam0))
	{
		uParam0->f_27 = 0;
		func_309(&(uParam0->f_44));
		uParam0->f_12++;
		if (uParam0->f_12 > (uParam0->f_13 - 1))
		{
			uParam0->f_12 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_355(uParam0->f_12, 1, 1);
		sVar0 = func_353(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_354(sVar0, 0, 0);
		}
	}
	if (!uParam0->f_29)
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(func_360(uParam0, uParam0->f_12), false, true, false, -1, 0))
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
			uParam0->f_31 = func_126(1276, -1, 0) < 30;
		}
		else if (uParam0->f_12 == 1)
		{
			uParam0->f_31 = func_126(1277, -1, 0) < 15;
		}
		else if (uParam0->f_12 == 2)
		{
			uParam0->f_31 = func_126(1278, -1, 0) < 5;
		}
		else if (uParam0->f_12 == 4)
		{
			uParam0->f_31 = func_126(1098, -1, 0) < 20;
		}
		else if (uParam0->f_12 == 0)
		{
			uParam0->f_31 = func_126(62, -1, 0) < 10;
		}
		else if (uParam0->f_12 == 5)
		{
			uParam0->f_31 = func_126(63, -1, 0) < 10;
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
			func_354("SNK_SOUT", 0, 0);
		}
		uParam0->f_32 = 1;
	}
	if (uParam0->f_27)
	{
		if (func_302(&(uParam0->f_44)) < 3f)
		{
			if (uParam0->f_35)
			{
				if (!bParam2)
				{
					func_354("SNK_BOUGHT", 0, 0);
				}
				else
				{
					func_354("SNK_STORED", 0, 0);
				}
			}
			else if (!uParam0->f_28)
			{
				func_354("SNK_AFFORD", 0, 0);
			}
			else if (!uParam0->f_33)
			{
				func_354("SNK_SOUT", 0, 0);
			}
			else if (!uParam0->f_31)
			{
				if (uParam0->f_12 == 3)
				{
					func_354("SNK_SNK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 1)
				{
					func_354("SNK_SNK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 2)
				{
					func_354("SNK_SNK3FU", 0, 0);
				}
				else if (uParam0->f_12 == 4)
				{
					func_354("SNK_SMOKFU", 0, 0);
				}
				else if (uParam0->f_12 == 0)
				{
					func_354("SNK_DRK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 5)
				{
					func_354("SNK_DRK2FU", 0, 0);
				}
				else
				{
					func_354("SNK_NEEDED", 0, 0);
				}
				MISC::SET_BIT(&(uParam0->f_53), 26);
			}
		}
		else
		{
			uParam0->f_27 = 0;
			uParam0->f_35 = 0;
			func_309(&(uParam0->f_44));
			sVar0 = func_353(uParam0->f_12);
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_354(sVar0, 0, 0);
			}
		}
	}
}

float func_302(var uParam0)
{
	if (func_305(uParam0))
	{
		if (func_304(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_303(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_303(bool bParam0)
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

bool func_304(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_305(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_306(var uParam0)
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		if (!func_305(&(uParam0->f_41)))
		{
			func_308(&(uParam0->f_41));
			return 1;
		}
		else if (func_307(&(uParam0->f_41)) > 0.25f)
		{
			func_382(&(uParam0->f_41));
			return 1;
		}
	}
	else if (func_305(&(uParam0->f_41)))
	{
		func_309(&(uParam0->f_41));
	}
	return 0;
}

float func_307(var uParam0)
{
	if (func_305(uParam0))
	{
		if (func_304(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_303(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_308(int* iParam0)
{
	if (!func_305(iParam0))
	{
		func_382(iParam0);
	}
}

void func_309(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_310(var uParam0)
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		if (!func_305(&(uParam0->f_38)))
		{
			func_308(&(uParam0->f_38));
			return 1;
		}
		else if (func_307(&(uParam0->f_38)) > 0.25f)
		{
			func_382(&(uParam0->f_38));
			return 1;
		}
	}
	else if (func_305(&(uParam0->f_38)))
	{
		func_309(&(uParam0->f_38));
	}
	return 0;
}

int func_311()
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

int func_312(int iParam0, int iParam1, bool bParam2)
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	}
	if (Global_4534059 == -6)
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4534059 = -1;
			return 0;
		}
	}
	if (((Global_4534059 > -1 || Global_4534059 == -3) || Global_4534059 == -2) || HUD::_0x3D9ACB1EB139E702())
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_4534059 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(4);
			Global_4534059 = -6;
			return 1;
		}
		else
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_MOUSE_CURSOR_SPRITE(1);
	return 0;
}

void func_313(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		Global_4534059 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(true);
	fVar0 = Global_22827;
	fVar2 = (fVar0 + Global_22829);
	fVar3 = Global_22830.f_5993;
	fVar1 = (Global_22830.f_5993 - (IntToFloat(Global_22830.f_5995) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22830.f_5995 < 1)
	{
		fVar1 = (Global_22830.f_5993 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_316();
	if (Global_4534059 == -6)
	{
		return;
	}
	Global_4534059 = -1;
	fVar7 = Global_4534053;
	fVar8 = Global_4534054;
	if (Global_22830.f_5996 > Global_22830.f_5995)
	{
		if (((Global_4534053 >= fVar0 && Global_4534053 <= fVar2) && Global_4534054 >= fVar3) && Global_4534054 < (fVar3 + fVar6))
		{
			Global_4534059 = -2;
			if (bParam3)
			{
				func_315(0);
			}
			return;
		}
		if (((Global_4534053 >= fVar0 && Global_4534053 <= fVar2) && Global_4534054 >= (fVar3 + fVar6)) && Global_4534054 < (fVar3 + 0.034722f))
		{
			Global_4534059 = -3;
			if (bParam3)
			{
				func_315(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_22830.f_5996 == -1)
		{
			Global_4534059 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22830.f_5995);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_314(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22829, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4534059 = Global_22830.f_8301[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4534059 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4534059 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4534059 = -4;
		return;
	}
	Global_4534059 = -1;
}

void func_314(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

void func_315(bool bParam0)
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
	fVar0 = Global_22827;
	fVar1 = Global_22830.f_5993;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4534059 == -2)
	{
		func_314(fVar0, fVar1, Global_22829, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4534059 == -3)
	{
		func_314(fVar0, (fVar1 + fVar2), Global_22829, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_316()
{
	Global_4534055 = Global_4534053;
	Global_4534056 = Global_4534054;
	Global_4534053 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4534054 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4534057 = (Global_4534053 - Global_4534055);
	Global_4534058 = (Global_4534054 - Global_4534056);
}

void func_317(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar96;
	float fVar97;
	float fVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	char cVar105[16];
	float fVar109;
	float fVar110;
	float fVar111;
	float fVar112;
	float fVar113;
	
	if (!func_164(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_350(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_22830)
	{
		if (func_348(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_22830 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22829;
	}
	fVar57 = (fParam5 * fVar58);
	if (MISC::GET_HASH_KEY(&(Global_22830.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_22828;
	}
	else
	{
		fVar59 = (((Global_22828 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_346(bParam7, &iVar60, &iVar61, &fVar62);
	if (bParam3)
	{
		if (Global_22830.f_5481 <= 1)
		{
			func_362(Global_22830.f_5481 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_22830.f_6277 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22830.f_5991)
		{
			if (MISC::GET_HASH_KEY(&(Global_22830.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_22828;
			}
			else
			{
				if (Global_22830)
				{
					StringCopy(&cVar63, func_345(29), 64);
					StringCopy(&cVar79, func_343(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_22830.f_7292[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_314(Global_22827, Global_22828, fParam5, fVar57, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_22827 + (fParam5 * 0.5f)), (Global_22828 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_22827 + (fParam5 * 0.5f)), (Global_22828 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_22830.f_8650)
				{
					iVar1 = Global_22830.f_8646;
					iVar2 = Global_22830.f_8647;
					iVar3 = Global_22830.f_8648;
					iVar4 = Global_22830.f_8649;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_314(Global_22827, (Global_22828 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22828 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_22830.f_1)) != 0)
				{
					func_342();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22830.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22830.f_74)
					{
						if (Global_22830.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22830.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22830.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22830.f_14[iVar16], Global_22830.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22830.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_22830.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_22830.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22830.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22830.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22830.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_22827 + 0.00390625f), ((Global_22828 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22830.f_5998)
				{
					func_342();
					func_340((((Global_22827 + fParam5) - 0.00390625f) - func_341("CM_ITEM_COUNT", Global_22830.f_5999, Global_22830.f_6000)), ((Global_22828 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22830.f_5999, Global_22830.f_6000);
				}
				else if (Global_22830.f_5994 > Global_22830.f_5488)
				{
					if (Global_22830.f_5997 != 0)
					{
						func_342();
						func_340((((Global_22827 + fParam5) - 0.00390625f) - func_341("CM_ITEM_COUNT", Global_22830.f_5997, Global_22830.f_5996)), ((Global_22828 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22830.f_5997, Global_22830.f_5996);
					}
				}
			}
			iVar6 = Global_22830.f_6001;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_22830.f_8660)
			{
				iVar1 = Global_22830.f_8656;
				iVar2 = Global_22830.f_8657;
				iVar3 = Global_22830.f_8658;
				iVar4 = Global_22830.f_8659;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22830.f_5488 && iVar6 <= Global_22830.f_5481)
			{
				if (iVar6 >= 0)
				{
					if (Global_22830.f_5748[iVar6])
					{
						if (Global_22830.f_5619[iVar6] && iVar6 != Global_22830.f_6001)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22830.f_6008[iVar6] != 0f)
						{
							fVar56 = Global_22830.f_6008[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22827 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, false, 0);
			if (Global_22830.f_5994 > Global_22830.f_5488)
			{
				if (Global_22830.f_8665)
				{
					iVar1 = Global_22830.f_8661;
					iVar2 = Global_22830.f_8662;
					iVar3 = Global_22830.f_8663;
					iVar4 = Global_22830.f_8664;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_314(Global_22827, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_22830.f_8678)
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
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_22827 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_22830.f_4953)) != 0 && Global_22830.f_5029 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22827 + 0.0046875f);
				if (Global_22830.f_5031 != 0)
				{
					func_348(Global_22830.f_5031, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22827 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_339(fVar42);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_22830.f_4953));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22830.f_5025)
				{
					if (Global_22830.f_4959[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22830.f_4964[iVar15]);
						iVar15++;
					}
					else if (Global_22830.f_4959[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22830.f_4968[iVar16], Global_22830.f_4972[iVar16]);
						iVar16++;
					}
					else if (Global_22830.f_4959[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_314(Global_22827, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22830.f_8670)
				{
					iVar1 = Global_22830.f_8666;
					iVar2 = Global_22830.f_8667;
					iVar3 = Global_22830.f_8668;
					iVar4 = Global_22830.f_8669;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22827 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_339(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22830.f_4953));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22830.f_5025)
				{
					if (Global_22830.f_4959[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22830.f_4964[iVar15]);
						iVar15++;
					}
					else if (Global_22830.f_4959[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22830.f_4968[iVar16], Global_22830.f_4972[iVar16]);
						iVar16++;
					}
					else if (Global_22830.f_4959[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22830.f_5031 != 0)
				{
					func_348(Global_22830.f_5031, 1, 1, &fVar36, &fVar37, bParam7);
					func_338(Global_22830.f_5031, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_345(Global_22830.f_5031), func_343(Global_22830.f_5031, 1), ((Global_22827 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22830.f_5029 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_22830.f_5030) > Global_22830.f_5029)
					{
						StringCopy(&(Global_22830.f_4953), "", 24);
						Global_22830.f_5029 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_4533983.f_21)) != 0 && Global_4533983.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22827 + 0.0046875f);
				if (Global_4533983.f_67 != 0)
				{
					func_348(Global_4533983.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22827 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_339(fVar42);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4533983.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4533983.f_61)
				{
					if (Global_4533983.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4533983.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4533983.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4533983.f_34[iVar16], Global_4533983.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4533983.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_314(Global_22827, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22830.f_8670)
				{
					iVar1 = Global_22830.f_8666;
					iVar2 = Global_22830.f_8667;
					iVar3 = Global_22830.f_8668;
					iVar4 = Global_22830.f_8669;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22827 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_339(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4533983.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4533983.f_61)
				{
					if (Global_4533983.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4533983.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4533983.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4533983.f_34[iVar16], Global_4533983.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4533983.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4533983.f_67 != 0)
				{
					func_348(Global_4533983.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_338(Global_4533983.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_345(Global_4533983.f_67), func_343(Global_4533983.f_67, 1), ((Global_22827 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4533983.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4533983.f_66) > Global_4533983.f_65)
					{
						StringCopy(&(Global_4533983.f_21), "", 16);
						Global_4533983.f_65 = -1;
					}
				}
			}
			func_331(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22830.f_5991)
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
			iVar96 = Global_22830.f_5481;
			if (Global_22830.f_5992)
			{
				iVar96 = (Global_22830.f_5995 - 1);
			}
			fVar97 = 0f;
			fVar98 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar96)
			{
				fVar56 = 0.034722f;
				if (Global_22830.f_6008[iVar6] != 0f)
				{
					fVar56 = Global_22830.f_6008[iVar6];
				}
				if (Global_22830.f_5992)
				{
					iVar6 = Global_22830.f_8301[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22830.f_6001 && iVar9 < Global_22830.f_5488)
				{
					bVar33 = true;
					if (Global_22830.f_6002 == iVar6)
					{
						fVar98 = fVar97;
					}
					if (Global_22830.f_5619[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22830.f_6142[iVar6] = fVar35;
				fVar34 = (Global_22827 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22830.f_6002 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_22830.f_8672)
					{
						HUD::GET_HUD_COLOUR(Global_22830.f_8671, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_22827 + (fParam5 * 0.5f)), (((fVar59 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar100, iVar101, iVar102, iVar103, false, 0);
					Global_22830.f_6140 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22830.f_5489)
				{
					if (BitTest(Global_22830.f_5352[iVar6], iVar8) || Global_22830.f_5319[iVar8] == 5)
					{
						if (Global_22830.f_5992)
						{
							iVar19 = Global_22830.f_8317[((iVar9 * Global_22830.f_5489) + iVar8)];
							iVar20 = Global_22830.f_8358[((iVar9 * Global_22830.f_5489) + iVar8)];
							iVar21 = Global_22830.f_8399[((iVar9 * Global_22830.f_5489) + iVar8)];
							iVar22 = Global_22830.f_8440[((iVar9 * Global_22830.f_5489) + iVar8)];
							iVar23 = Global_22830.f_8481[((iVar9 * Global_22830.f_5489) + iVar8)];
						}
						else
						{
							Global_22830.f_8317[((iVar9 * Global_22830.f_5489) + iVar8)] = iVar19;
							Global_22830.f_8358[((iVar9 * Global_22830.f_5489) + iVar8)] = iVar20;
							Global_22830.f_8399[((iVar9 * Global_22830.f_5489) + iVar8)] = iVar21;
							Global_22830.f_8440[((iVar9 * Global_22830.f_5489) + iVar8)] = iVar22;
							Global_22830.f_8481[((iVar9 * Global_22830.f_5489) + iVar8)] = iVar23;
						}
						iVar104 = 0;
						bVar55 = false;
						if (Global_22830.f_6274[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22830.f_6271[0])
							{
								bVar55 = true;
								iVar104 = 0;
							}
						}
						if (Global_22830.f_6274[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22830.f_6271[1])
							{
								bVar55 = true;
								iVar104 = 1;
							}
						}
						if (Global_22830.f_5325[iVar8] != -1f)
						{
							fVar34 = ((Global_22827 + 0.0046875f) + Global_22830.f_5325[iVar8]);
						}
						if ((iVar8 < 4 && Global_22830.f_5325[iVar8 + 1] != -1f) && fVar34 < Global_22830.f_5325[iVar8 + 1])
						{
							fVar46 = (Global_22830.f_5325[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22827 + Global_22829) - 0.0046875f) - fVar34);
						}
						if ((Global_22830.f_5338[iVar8] && Global_22830.f_6137) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22830.f_5319[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22830.f_5992)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_22830.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_22830.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_329(bVar32, Global_22830.f_1616[iVar24], Global_22830.f_1873[iVar24], bVar55, iVar104, bVar53, bVar52);
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_22830.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22830.f_4181[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22830.f_4438[(iVar21 + iVar27)], Global_22830.f_4567[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_348(Global_22830.f_4696[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22830.f_4696[(iVar22 + iVar14)] == 2 || Global_22830.f_4696[(iVar22 + iVar14)] == 51) || Global_22830.f_4696[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22830.f_5346[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22830.f_5346[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar42;
										Global_22830.f_8563[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar43;
										Global_22830.f_8604[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar44;
										if (Global_22830.f_5346[iVar8] == 2)
										{
											iVar99 = (iVar8 - 1);
											while (iVar99 >= 0)
											{
												if (Global_22830.f_5346[iVar99] == 2)
												{
													Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar99)] = (Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar99)] - Global_22830.f_5331[iVar8]);
												}
												iVar99 = (iVar99 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)];
										fVar43 = Global_22830.f_8563[((iVar9 * Global_22830.f_5489) + iVar8)];
										fVar44 = Global_22830.f_8604[((iVar9 * Global_22830.f_5489) + iVar8)];
									}
									if (bVar54)
									{
										if (func_348(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22830.f_5346[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_348(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_338(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_345(26), func_343(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_348(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_348(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_338(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_345(27), func_343(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
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
									if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_22830.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_22830.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_329(bVar32, Global_22830.f_1616[iVar24], Global_22830.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22830.f_8676 && Global_22830.f_8677 == iVar6)
										{
											func_328(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22830.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22830.f_4181[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22830.f_4438[(iVar21 + iVar27)], Global_22830.f_4567[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22830.f_4696[(iVar22 + iVar28)] == 2 || Global_22830.f_4696[(iVar22 + iVar28)] == 51) || Global_22830.f_4696[(iVar22 + iVar28)] == 61)
											{
												if (func_348(Global_22830.f_4696[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_348(Global_22830.f_4696[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_338(Global_22830.f_4696[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22830.f_5346[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_345(Global_22830.f_4696[(iVar22 + iVar28)]), func_343(Global_22830.f_4696[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_345(Global_22830.f_4696[(iVar22 + iVar28)]), func_343(Global_22830.f_4696[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
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
									if (MISC::GET_HASH_KEY(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22830.f_5346[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_327() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_22830.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_329(0, Global_22830.f_1616[iVar24], Global_22830.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar105, "TEST_LABEL", 16);
													fVar109 = 0f;
													fVar110 = 55f;
													fVar111 = 0.0185f;
													fVar112 = 0.004f;
													fVar113 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar113 * 0.6f)), (fVar35 + (fVar111 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar110), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar105);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_22830.f_6001 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar113), (fVar35 + fVar112), 0);
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
											if ((Global_22830.f_4696[(iVar22 + iVar14)] != 2 && Global_22830.f_4696[(iVar22 + iVar14)] != 51) && Global_22830.f_4696[(iVar22 + iVar14)] != 61)
											{
												if (func_348(Global_22830.f_4696[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_348(Global_22830.f_4696[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_338(Global_22830.f_4696[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22830.f_4696[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_345(Global_22830.f_4696[(iVar22 + iVar14)]), func_343(Global_22830.f_4696[(iVar22 + iVar14)], bVar32), (Global_22827 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else if (Global_22830.f_5346[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_345(Global_22830.f_4696[(iVar22 + iVar14)]), func_343(Global_22830.f_4696[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_345(Global_22830.f_4696[(iVar22 + iVar14)]), func_343(Global_22830.f_4696[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
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
									if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22830.f_5992)
									{
										func_329(bVar32, Global_22830.f_1616[iVar24], Global_22830.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_22830.f_8676 && Global_22830.f_8677 == iVar6)
										{
											func_328(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22830.f_4181[iVar20]);
										fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar42 = 0f;
										if (Global_22830.f_5346[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22830.f_5346[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar42;
										Global_22830.f_8563[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)];
										fVar43 = Global_22830.f_8563[((iVar9 * Global_22830.f_5489) + iVar8)];
									}
									if (bVar54)
									{
										if (func_348(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22830.f_5346[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_348(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_338(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_345(26), func_343(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_348(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_348(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_338(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_345(27), func_343(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_329(bVar32, Global_22830.f_1616[iVar24], Global_22830.f_1873[iVar24], bVar55, 0, 0, 0);
										func_326((fVar34 + fVar42), fVar35, "NUMBER", Global_22830.f_4181[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22830.f_5992)
									{
										func_329(bVar32, Global_22830.f_1616[iVar24], Global_22830.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_22830.f_8676 && Global_22830.f_8677 == iVar6)
										{
											func_328(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22830.f_4438[iVar21], Global_22830.f_4567[iVar21]);
										fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar42 = 0f;
										if (Global_22830.f_5346[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22830.f_5346[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar42;
										Global_22830.f_8563[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)];
										fVar43 = Global_22830.f_8563[((iVar9 * Global_22830.f_5489) + iVar8)];
									}
									if (bVar54)
									{
										if (func_348(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22830.f_5346[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_348(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_338(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_345(26), func_343(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_348(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_348(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_338(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_345(27), func_343(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									func_329(bVar32, Global_22830.f_1616[iVar24], Global_22830.f_1873[iVar24], bVar55, 0, 0, 0);
									func_325((fVar34 + fVar42), fVar35, "NUMBER", Global_22830.f_4438[iVar21], Global_22830.f_4567[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_348(Global_22830.f_4696[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22830.f_5992)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22830.f_5346[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22830.f_5346[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar42;
											Global_22830.f_8604[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)];
											fVar44 = Global_22830.f_8604[((iVar9 * Global_22830.f_5489) + iVar8)];
										}
										if (bVar54)
										{
											if (func_348(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22830.f_5346[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_348(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_338(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_345(26), func_343(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
											if (func_348(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_348(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_338(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_345(27), func_343(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_348(Global_22830.f_4696[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_338(Global_22830.f_4696[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_345(Global_22830.f_4696[iVar22]), func_343(Global_22830.f_4696[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_324(Global_22830.f_4696[iVar22])), (fVar37 * func_324(Global_22830.f_4696[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
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
						if (Global_22830.f_5319[iVar8] == 5)
						{
							if (Global_22830.f_5331[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22830.f_5331[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22830.f_5331[iVar8]);
							if (Global_22830.f_5338[iVar8])
							{
								if (func_348(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22830.f_5331[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22830.f_8301[iVar9] = iVar6;
						Global_22830.f_6003 = iVar6;
						iVar9++;
						if (Global_22830.f_5619[iVar6])
						{
							iVar13++;
						}
						if (Global_22830.f_6008[iVar6] != 0f)
						{
							fVar97 = (fVar97 + Global_22830.f_6008[iVar6]);
						}
						else
						{
							fVar97 = (fVar97 + 0.034722f);
						}
					}
					if (!Global_22830.f_5991)
					{
						Global_22830.f_5748[iVar6] = 1;
						if (Global_22830.f_5490[iVar6])
						{
							if (bVar32)
							{
								Global_22830.f_5997 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22830.f_5997 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22830.f_5991)
			{
				Global_22830.f_5993 = ((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12)));
				Global_22830.f_5996 = iVar11;
				Global_22830.f_5994 = iVar10;
				Global_22830.f_5991 = 1;
			}
		}
		if (!Global_22830.f_5992)
		{
			Global_22830.f_5995 = iVar9;
			Global_22830.f_5992 = 1;
		}
		iVar5++;
	}
	Global_22830.f_6139 = fVar51;
	Global_22830.f_6141 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_22830.f_6139);
	if (!Global_22830.f_8645)
	{
		func_319(0);
	}
	Global_22830.f_8645 = 0;
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
		func_318(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_318(int iParam0)
{
	Global_1645748.f_1121 = iParam0;
}

void func_319(int iParam0)
{
	if (func_323())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_168(0))
		{
			func_320(iParam0);
		}
		MISC::SET_BIT(&Global_7825, 2);
	}
}

void func_320(int iParam0)
{
	if (func_323())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_322())
		{
			func_321(1, 1);
		}
		else
		{
			func_321(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7825, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7824, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7824, 30);
	}
	if (!func_236())
	{
		Global_19954.f_1 = 3;
	}
}

void func_321(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_168(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19891);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
}

bool func_322()
{
	return BitTest(Global_1958928, 5);
}

bool func_323()
{
	return BitTest(Global_1958928, 19);
}

float func_324(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_325(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_326(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_327()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_328(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_22830.f_8673[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_22830.f_8673[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_329(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_330(Global_22830.f_6274[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_330(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_331(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_164(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_350(bParam4, bParam8))
	{
		return;
	}
	if (func_336())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_334(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_22830.f_5032 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22830.f_5032)
			{
				if (Global_22830.f_5289[iVar1] != 361)
				{
					StringCopy(&(Global_22830.f_5034[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22830.f_5289[iVar1], true), 64);
				}
				else if (Global_22830.f_5302[iVar1] != 32)
				{
					StringCopy(&(Global_22830.f_5034[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_22830.f_5302[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22830.f_5033 = 0;
		}
		if (!Global_22830.f_5033)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5923[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5923[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_22830.f_5344 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5923[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_22830.f_5032)
			{
				if (MISC::GET_HASH_KEY(&(Global_22830.f_5227[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5923[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_333(&(Global_22830.f_5034[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_22830.f_5227[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_333(&(Global_22830.f_5034[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22830.f_5276[iVar1] == -1)
					{
						func_332(&(Global_22830.f_5227[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22830.f_5276[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22830.f_5227[iVar1 /*4*/]));
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
						if (Global_22830.f_5289[iVar1] != 361 && BitTest(Global_22830.f_5315, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22830.f_5289[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4533983.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5923[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22830.f_5032);
				func_333(&Global_4533983);
				if (Global_4533983.f_20 == -1)
				{
					func_332(&(Global_4533983.f_16));
				}
				else
				{
					iVar4 = Global_22830.f_5276[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4533983.f_16));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5923[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5923[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22830.f_5345)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_22830.f_5033 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22830.f_5032)
		{
			if (Global_22830.f_5276[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5923[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22830.f_5227[iVar1 /*4*/]));
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
		if (Global_4533983.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5923[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4533983.f_16));
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
			if (!Global_22830.f_8680)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22830.f_8680 = 1;
			}
		}
		else if (Global_22830.f_8680)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_22830.f_8680 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_22830.f_5318)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22830.f_5923[iVar0 /*10*/], Global_22830.f_5316, Global_22830.f_5317, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22830.f_5923[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_332(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_333(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_334(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_335(-1, 0) == 8;
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

int func_335(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

int func_336()
{
	struct<3> Var0;
	
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	if (func_337())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_19899 == 0)
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

int func_337()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_338(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)
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
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_339(float fParam0)
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
	HUD::SET_TEXT_WRAP(fParam0, ((Global_22827 + Global_22829) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_340(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_341(char* sParam0, int iParam1, int iParam2)
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
	func_342();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_342()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22830.f_8655)
	{
		iVar0 = Global_22830.f_8651;
		iVar1 = Global_22830.f_8652;
		iVar2 = Global_22830.f_8653;
		iVar3 = Global_22830.f_8654;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_22827 + 0.0046875f), ((Global_22827 + Global_22829) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

var func_343(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22830.f_7292[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22830.f_7292[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_69(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_344(&uVar3);
			}
		}
		else
		{
			return func_344(&(Global_22830.f_7292[iParam0 /*16*/]));
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
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
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

var func_344(var uParam0)
{
	return uParam0;
}

char* func_345(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22830.f_6283[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22830.f_6283[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_69(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_344(&uVar0);
		}
		else
		{
			return func_344(&(Global_22830.f_6283[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_346(bool bParam0, int* iParam1, int* iParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (func_347(*iParam1, *iParam2))
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

bool func_347(int iParam0, int iParam1)
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_348(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_345(iParam0), 64);
	StringCopy(&cVar16, func_343(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_346(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_349(iParam0) / fVar34);
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
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_22830.f_7292[29 /*16*/])) == joaat("CREW_LOGO"))
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
			if (*fParam3 > Global_22829)
			{
				*fParam4 = (*fParam4 * (Global_22829 / *fParam3));
				*fParam3 = Global_22829;
			}
		}
		return 1;
	}
	return 0;
}

float func_349(int iParam0)
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
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_350(bool bParam0, bool bParam1)
{
	if (Global_2703660.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_246(8, -1) && func_351() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78118) || Global_22830.f_8679) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100032.f_1457)
	{
		return 0;
	}
	return 1;
}

int func_351()
{
	return Global_1574988;
}

void func_352(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_22830.f_5032 >= 12)
	{
		StringCopy(&Global_4533983, sVar0, 64);
		StringCopy(&(Global_4533983.f_16), sParam1, 16);
		Global_4533983.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_22830.f_5315), Global_22830.f_5032);
	}
	StringCopy(&(Global_22830.f_5034[Global_22830.f_5032 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22830.f_5227[Global_22830.f_5032 /*4*/]), sParam1, 16);
	Global_22830.f_5276[Global_22830.f_5032] = iParam2;
	Global_22830.f_5289[Global_22830.f_5032] = iParam0;
	Global_22830.f_5302[Global_22830.f_5032] = 32;
	Global_22830.f_5032++;
}

char* func_353(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 6;
	}
	switch (iVar0)
	{
		case 6:
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
		
		default:
	}
	return "";
}

void func_354(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_22830.f_4953), sParam0, 24);
	Global_22830.f_5025 = 0;
	Global_22830.f_5026 = 0;
	Global_22830.f_5027 = 0;
	Global_22830.f_5028 = 0;
	Global_22830.f_5029 = iParam1;
	Global_22830.f_5030 = MISC::GET_GAME_TIMER();
	Global_22830.f_5031 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_4959[iVar0] = 0;
		iVar0++;
	}
}

void func_355(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22830.f_6002 = uParam0;
	Global_22830.f_6137 = iParam2;
	if (Global_22830.f_6002 < Global_22830.f_6001)
	{
		Global_22830.f_6001 = Global_22830.f_6002;
	}
	else if ((Global_22830.f_5992 && Global_22830.f_6002 > Global_22830.f_6003) || (!Global_22830.f_5992 && Global_22830.f_6002 >= (Global_22830.f_6001 + Global_22830.f_5488)))
	{
		iVar0 = Global_22830.f_6001;
		while (iVar0 <= Global_22830.f_6002)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22830.f_5352[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22830.f_5488 && Global_22830.f_6001 < 128)
		{
			Global_22830.f_6001++;
			iVar1 = 0;
			iVar0 = Global_22830.f_6001;
			while (iVar0 <= Global_22830.f_6002)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22830.f_5352[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22830.f_5991 = 0;
	Global_22830.f_5992 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22830.f_4953), "", 24);
		StringCopy(&(Global_4533983.f_21), "", 16);
	}
}

void func_356(int iParam0)
{
	Global_22830.f_6001 = iParam0;
}

void func_357(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_22830.f_5485 >= 256)
	{
		return;
	}
	if (Global_22830.f_6006 >= 4)
	{
		return;
	}
	if (Global_22830.f_6007 != 1)
	{
		return;
	}
	if (Global_22830.f_6006 >= Global_22830.f_6004)
	{
		return;
	}
	Global_22830.f_4181[Global_22830.f_5485] = uParam0;
	Global_22830.f_5485++;
	Global_22830.f_2387[Global_22830.f_6005 /*5*/][Global_22830.f_6006] = 2;
	Global_22830.f_6006++;
	if (Global_22830.f_6006 >= Global_22830.f_6004)
	{
		fVar0 = func_359();
		if (Global_22830.f_5338[Global_22830.f_5482] && Global_22830.f_6006 == Global_22830.f_6004)
		{
			func_348(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22830.f_5331[(Global_22830.f_5482 - 1)])
		{
			Global_22830.f_5331[(Global_22830.f_5482 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22830.f_6006 >= Global_22830.f_6004)
		{
			fVar3 = func_358();
			if (fVar3 > Global_22830.f_6008[Global_22830.f_5481])
			{
				Global_22830.f_6008[Global_22830.f_5481] = fVar3;
			}
		}
	}
}

float func_358()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_22830.f_6006)
	{
		if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22830.f_4696[((Global_22830.f_5487 - iVar1) + iVar0)] != 0)
		{
			if (func_348(Global_22830.f_4696[((Global_22830.f_5487 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
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

float func_359()
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
	while (iVar7 < Global_22830.f_6006)
	{
		if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_329(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_22830.f_79[Global_22830.f_6005 /*6*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_22830.f_79[Global_22830.f_6005 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22830.f_6006)
	{
		if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_22830.f_79[Global_22830.f_6005 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_79[(Global_22830.f_6005 + iVar8) /*6*/]));
			}
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_22830.f_79[Global_22830.f_6005 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_79[(Global_22830.f_6005 + iVar8) /*6*/]));
			}
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_22830.f_79[Global_22830.f_6005 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22830.f_4181[((Global_22830.f_5485 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_22830.f_79[Global_22830.f_6005 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22830.f_4438[((Global_22830.f_5486 - iVar4) + iVar10)], Global_22830.f_4567[((Global_22830.f_5486 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_22830.f_79[Global_22830.f_6005 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725779[((Global_22830.f_5484 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_22830.f_79[Global_22830.f_6005 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725779[((Global_22830.f_5484 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_22830.f_79[Global_22830.f_6005 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725779[((Global_22830.f_5484 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22830.f_2387[Global_22830.f_6005 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_22830.f_79[Global_22830.f_6005 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725779[((Global_22830.f_5484 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_22830.f_79[Global_22830.f_6005 /*6*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22830.f_4696[((Global_22830.f_5487 - iVar5) + iVar7)] != 0)
		{
			func_348(Global_22830.f_4696[((Global_22830.f_5487 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_360(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	switch (func_295(uParam0))
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
					return 2;
				
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
					return 2;
				
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
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

void func_361(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_22830.f_5487 >= 256)
	{
		return;
	}
	if (Global_22830.f_6006 >= 4)
	{
		return;
	}
	if (Global_22830.f_6007 != 1)
	{
		return;
	}
	if (Global_22830.f_6006 >= Global_22830.f_6004)
	{
		return;
	}
	Global_22830.f_4696[Global_22830.f_5487] = iParam0;
	Global_22830.f_5487++;
	Global_22830.f_2387[Global_22830.f_6005 /*5*/][Global_22830.f_6006] = 4;
	Global_22830.f_6006++;
	if (Global_22830.f_6006 >= Global_22830.f_6004)
	{
		fVar0 = func_359();
		if (Global_22830.f_5338[Global_22830.f_5482] && Global_22830.f_6006 == Global_22830.f_6004)
		{
			func_348(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22830.f_5331[(Global_22830.f_5482 - 1)])
		{
			Global_22830.f_5331[(Global_22830.f_5482 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22830.f_6006 >= Global_22830.f_6004)
		{
			fVar3 = func_358();
			if (fVar3 > Global_22830.f_6008[Global_22830.f_5481])
			{
				Global_22830.f_6008[Global_22830.f_5481] = fVar3;
			}
		}
	}
}

void func_362(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22830.f_5481 > iParam0)
	{
		return;
	}
	if (Global_22830.f_5481 >= 128)
	{
		return;
	}
	if (Global_22830.f_5483 >= 256)
	{
		return;
	}
	if (Global_22830.f_6006 < Global_22830.f_6004)
	{
		return;
	}
	if (Global_22830.f_5481 != iParam0)
	{
		Global_22830.f_5481 = iParam0;
		Global_22830.f_5482 = 0;
	}
	iVar0 = Global_22830.f_5319[Global_22830.f_5482];
	if (iVar0 != 1)
	{
		while (Global_22830.f_5482 < 4 && iVar0 != 1)
		{
			Global_22830.f_5482++;
			iVar0 = Global_22830.f_5319[Global_22830.f_5482];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22830.f_79[Global_22830.f_5483 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_22830.f_1616[Global_22830.f_5483] = bParam3;
	Global_22830.f_1873[Global_22830.f_5483] = iParam4;
	Global_22830.f_2130[Global_22830.f_5483] = iParam6;
	Global_22830.f_5483++;
	if (!bParam3)
	{
		func_365(Global_22830.f_5481, 1);
	}
	else
	{
		func_365(Global_22830.f_5481, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_364(&(Global_22830.f_79[Global_22830.f_5483 /*6*/]));
		if (Global_22830.f_5338[Global_22830.f_5482])
		{
			func_348(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22830.f_5331[Global_22830.f_5482])
		{
			Global_22830.f_5331[Global_22830.f_5482] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_363(&(Global_22830.f_79[Global_22830.f_5483 /*6*/]));
			if (fVar4 > Global_22830.f_6008[iParam0])
			{
				Global_22830.f_6008[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_22830.f_5352[iParam0]), Global_22830.f_5482);
	Global_22830.f_5482++;
	Global_22830.f_6007 = 1;
	Global_22830.f_6005 = (Global_22830.f_5483 - 1);
	Global_22830.f_6006 = 0;
	Global_22830.f_6004 = iParam2;
}

float func_363(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_364(char* sParam0)
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
	func_329(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_365(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_22830.f_6278[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_22830.f_6278[iVar0]), (iParam0 - iVar0 * 32));
	}
}

char* func_366(int iParam0)
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
		
		default:
	}
	return "";
}

int func_367(int iParam0)
{
	if (func_126(func_300(iParam0), -1, 0) >= func_299(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_368(int iParam0, char* sParam1, char* sParam2)
{
	Global_22830 = iParam0;
	func_369(29, sParam1, sParam2);
}

void func_369(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22830.f_6283[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22830.f_7292[iParam0 /*16*/]), sParam2, 64);
}

void func_370(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22830.f_1), sParam0, 16);
	Global_22830.f_74 = 0;
	Global_22830.f_75 = 0;
	Global_22830.f_76 = 0;
	Global_22830.f_77 = 0;
	Global_22830.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_371(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22830.f_5346[0] = iParam0;
	Global_22830.f_5346[1] = iParam1;
	Global_22830.f_5346[2] = iParam2;
	Global_22830.f_5346[3] = iParam3;
	Global_22830.f_5346[4] = iParam4;
}

void func_372(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22830.f_5319[0] = iParam0;
	Global_22830.f_5319[1] = iParam1;
	Global_22830.f_5319[2] = iParam2;
	Global_22830.f_5319[3] = iParam3;
	Global_22830.f_5319[4] = iParam4;
	Global_22830.f_5489 = 0;
	if (iParam0 != 0)
	{
		Global_22830.f_5489++;
	}
	if (iParam1 != 0)
	{
		Global_22830.f_5489++;
	}
	if (iParam2 != 0)
	{
		Global_22830.f_5489++;
	}
	if (iParam3 != 0)
	{
		Global_22830.f_5489++;
	}
	if (iParam4 != 0)
	{
		Global_22830.f_5489++;
	}
}

void func_373(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22830.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22830.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2725779[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22830.f_4181[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22830.f_4438[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22830.f_4696[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22830.f_5352[iVar0] = 0;
		Global_22830.f_5490[iVar0] = 0;
		Global_22830.f_5619[iVar0] = 0;
		Global_22830.f_6142[iVar0] = 0f;
		Global_22830.f_5748[iVar0] = 0;
		Global_22830.f_6008[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22830.f_5319[iVar0] = 0;
		Global_22830.f_5331[iVar0] = 0f;
		Global_22830.f_5325[iVar0] = -1f;
		Global_22830.f_5338[iVar0] = 0;
		Global_22830.f_5346[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22830.f_5227[iVar0 /*4*/]), "", 16);
		Global_22830.f_5276[iVar0] = -1;
		Global_22830.f_5289[iVar0] = 361;
		Global_22830.f_5302[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22830.f_6283[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22830.f_7292[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22830.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4533983.f_16), "", 16);
	Global_4533983.f_20 = -1;
	Global_22830 = 0;
	Global_22830.f_5481 = 0;
	Global_22830.f_5482 = 0;
	Global_22830.f_5483 = 0;
	Global_22830.f_5485 = 0;
	Global_22830.f_5486 = 0;
	Global_22830.f_5487 = 0;
	Global_22830.f_5484 = 0;
	Global_22830.f_6137 = 0;
	Global_22830.f_6277 = 0;
	Global_22830.f_6002 = 0;
	Global_22830.f_6001 = 0;
	Global_22830.f_6003 = 0;
	StringCopy(&(Global_22830.f_4953), "", 24);
	Global_22830.f_5025 = 0;
	Global_22830.f_5026 = 0;
	Global_22830.f_5027 = 0;
	Global_22830.f_5028 = 0;
	Global_22830.f_5029 = 0;
	Global_22830.f_5030 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_4959[iVar0] = 0;
		iVar0++;
	}
	Global_22830.f_5031 = 0;
	StringCopy(&(Global_4533983.f_21), "", 16);
	Global_4533983.f_61 = 0;
	Global_4533983.f_62 = 0;
	Global_4533983.f_63 = 0;
	Global_4533983.f_64 = 0;
	Global_4533983.f_65 = 0;
	Global_4533983.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4533983.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4533983.f_67 = 0;
	StringCopy(&(Global_22830.f_1), "", 16);
	Global_22830.f_5337 = 0f;
	Global_22830.f_74 = 0;
	Global_22830.f_75 = 0;
	Global_22830.f_76 = 0;
	Global_22830.f_77 = 0;
	Global_22830.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22830.f_6007 = 0;
	Global_22830.f_6006 = 0;
	Global_22830.f_6004 = 0;
	Global_22830.f_6005 = 0;
	Global_22830.f_5032 = 0;
	Global_22830.f_5033 = 0;
	Global_22830.f_5488 = 10;
	Global_22830.f_5489 = 0;
	Global_22830.f_6139 = 0f;
	Global_22830.f_6140 = 0f;
	Global_22830.f_5991 = 0;
	Global_22830.f_5992 = 0;
	Global_22830.f_5993 = 0f;
	Global_22830.f_5994 = 0;
	Global_22830.f_5996 = 0;
	Global_22830.f_5995 = 0;
	Global_22830.f_5997 = 0;
	Global_22830.f_5998 = 0;
	Global_22830.f_5999 = 0;
	Global_22830.f_6000 = 0;
	Global_22830.f_8676 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22830.f_6271[iVar0] = -1;
		Global_22830.f_6274[iVar0] = -1;
		iVar0++;
	}
	Global_22830.f_5344 = 0f;
	Global_22830.f_5315 = 0;
	Global_22830.f_5345 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22830.f_6278)
	{
		Global_22830.f_6278[iVar0] = 0;
		iVar0++;
	}
	Global_22830.f_8655 = 0;
	Global_22830.f_8650 = 0;
	Global_22830.f_8660 = 0;
	Global_22830.f_8665 = 0;
	Global_22830.f_8670 = 0;
	Global_22830.f_8672 = 0;
	Global_22830.f_8678 = 0;
	Global_22827 = 0.05f;
	Global_22828 = 0.05f;
	Global_22829 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_22829 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22829 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_22829 = 0.225f;
	}
}

int func_374(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	float fVar3;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			Var0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar3 = -1.15f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			Var0 = { -2967.027f, 390.9038f, 15.02f };
			fVar3 = -94.76f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			Var0 = { -1222.331f, -907.8234f, 12.31f };
			fVar3 = -147.297f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			Var0 = { 1134.811f, -982.3615f, 46.4f };
			fVar3 = 96.68562f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			Var0 = { -1486.673f, -378.4638f, 40.15f };
			fVar3 = -46.229f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			Var0 = { -3244.573f, 1000.658f, 12.83f };
			fVar3 = 175.074f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			Var0 = { -3041.357f, 584.2665f, 7.9f };
			fVar3 = -162.241f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			Var0 = { 548.9015f, 2668.941f, 42.15f };
			fVar3 = -82.5f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			Var0 = { 2554.875f, 381.3857f, 108.62f };
			fVar3 = 177.716f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			Var0 = { 2676.212f, 3280.969f, 55.24f };
			fVar3 = 150.87f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			Var0 = { 1729.329f, 6417.123f, 35.03f };
			fVar3 = 63.641f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			Var0 = { 1959.323f, 3742.29f, 32.34f };
			fVar3 = 120f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			Var0 = { 24.94562f, -1344.954f, 29.49f };
			fVar3 = 90f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			Var0 = { 373.5954f, 328.5892f, 103.56f };
			fVar3 = 75.885f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
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

void func_375()
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

void func_376(int iParam0, int iParam1)
{
	if (!func_282(PLAYER::PLAYER_ID(), 1, 0) || iParam1)
	{
		if (!func_381())
		{
			Global_1574582.f_1 = 1;
			Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1574582.f_2 = 1;
			}
			func_377(7, 0, -1);
		}
	}
}

void func_377(int iParam0, int iParam1, int iParam2)
{
	if (!func_381() || iParam1)
	{
		Global_1574582 = 1;
		func_380(1);
		if (((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_379()) && !func_378(PLAYER::PLAYER_ID())) && !func_138(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 1;
		}
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_8 = 1;
		STATS::_PLAYSTATS_PASSIVE_MODE(true, iParam0, iParam2, -1);
	}
}

int func_378(int iParam0)
{
	if (func_282(iParam0, 1, 0))
	{
		if (Global_1853131[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_379()
{
	return Global_2714635.f_841;
}

void func_380(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_381())
		{
			if (func_46(PLAYER::PLAYER_ID(), 1, 0))
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
			if (func_46(PLAYER::PLAYER_ID(), 1, 1))
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

bool func_381()
{
	return Global_1574582;
}

void func_382(int* iParam0)
{
	func_383(iParam0, 0f);
}

void func_383(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_303(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_384(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_262(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_168(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43334[iVar0 /*32*/] == 1 && Global_43334[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43334[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43334[iVar0 /*32*/].f_5 = 1;
			Global_43334[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43334[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43334[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_385()
{
	if (Global_112922.f_20410.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_386()
{
	return Global_22689;
}

int func_387(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
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
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
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

bool func_388(int iParam0, int iParam1)
{
	return BitTest(Global_2689224[iParam0 /*451*/].f_215, iParam1);
}

void func_389(var uParam0, var uParam1)
{
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	func_433(PLAYER::PLAYER_ID(), 1, 0, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (uParam0->f_51 > 0)
	{
		*uParam1 = uParam0->f_51;
		uParam0->f_51 = 0;
	}
	func_410();
	MISC::CLEAR_BIT(&(uParam0->f_53), 7);
	if (func_146("SHR_MENU"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (uParam0->f_14 != -1)
	{
		func_261(&(uParam0->f_14));
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, false);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

int func_390(float fParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (fParam0 <= 0f)
		{
			return PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID()) > 0;
		}
		else
		{
			return PED::_0x336B3D200AB007CB(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fParam0) > 0;
		}
	}
	return 0;
}

int func_391(int iParam0, var uParam1, int iParam2, bool bParam3)
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

int func_392(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((*uParam0)[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_393()
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_550);
	TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_550);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_551);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_551);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_552);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_537, 2f, -1, 0.25f, false, fLocal_540);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0f, false, false, false);
	TASK::TASK_SMART_FLEE_COORD(0, Local_537, 250f, -1, true, false);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_552);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_554);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0f, false, false, false);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_554);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_553);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_537, 2f, -1, 0.25f, false, (fLocal_540 - 180f));
	TASK::TASK_SWAP_WEAPON(0, true);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 20f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_553);
}

void func_394(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77858)
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

int func_395(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

int func_396()
{
	return Local_81.f_12;
}

char* func_397(int iParam0)
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

int func_398()
{
	struct<3> Var0;
	
	if (func_406(&(Local_475.f_50), 0))
	{
		func_404(Local_475.f_50, &iLocal_574, &iLocal_575, &iLocal_576, &iLocal_577, &Local_578, &Local_581);
		func_403(Local_475.f_50, &Local_584, &Local_587, &fLocal_590);
		func_402(Local_475.f_50, &Local_591, &Local_594, &fLocal_597);
		switch (Local_475.f_50)
		{
			case 0:
				Local_542 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				Local_545 = { 0f, 0f, 21.89f };
				iLocal_533 = func_52(0);
				Local_537 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_540 = 116.5329f;
				iLocal_569 = 1;
				if (func_400(6, 18))
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 0;
					iLocal_763[1] = 0;
					iLocal_769[1] = 0;
					iLocal_763[2] = 0;
					iLocal_769[2] = 0;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 0;
					iLocal_769[4] = 0;
				}
				else
				{
					iLocal_763[0] = 1;
					iLocal_769[0] = 0;
					iLocal_763[1] = 1;
					iLocal_769[1] = 1;
					iLocal_763[2] = 1;
					iLocal_769[2] = 2;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 0;
					iLocal_769[4] = 0;
				}
				break;
			
			case 1:
				Local_545 = { 0f, 0f, -160f };
				Local_542 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_533 = func_52(0);
				Local_537 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_540 = 178.8753f;
				iLocal_569 = 1;
				if (func_400(6, 18))
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 1;
					iLocal_763[1] = 1;
					iLocal_769[1] = 0;
					iLocal_763[2] = 0;
					iLocal_769[2] = 1;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 0;
					iLocal_769[4] = 1;
				}
				else
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 0;
					iLocal_763[1] = 0;
					iLocal_769[1] = 0;
					iLocal_763[2] = 1;
					iLocal_769[2] = 2;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 0;
					iLocal_769[4] = 1;
				}
				break;
			
			case 2:
				Local_542 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				Local_545 = { 0f, 0f, 175.52f };
				iLocal_533 = func_52(0);
				Local_537 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_540 = 191.594f;
				iLocal_569 = 1;
				if (func_400(6, 18))
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 2;
					iLocal_763[1] = 1;
					iLocal_769[1] = 1;
					iLocal_763[2] = 0;
					iLocal_769[2] = 2;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 0;
					iLocal_769[4] = 2;
				}
				else
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 1;
					iLocal_763[1] = 0;
					iLocal_769[1] = 0;
					iLocal_763[2] = 1;
					iLocal_769[2] = 0;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 0;
					iLocal_769[4] = 2;
				}
				break;
			
			case 3:
				Local_545 = { 0f, 0f, -82.38f };
				Local_542 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_533 = func_52(0);
				Local_537 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_540 = 228.4295f;
				iLocal_569 = 1;
				if (func_400(6, 18))
				{
					iLocal_763[0] = 1;
					iLocal_769[0] = 0;
					iLocal_763[1] = 2;
					iLocal_769[1] = 0;
					iLocal_763[2] = 1;
					iLocal_769[2] = 0;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 0;
					iLocal_769[4] = 0;
				}
				else
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 0;
					iLocal_763[1] = 2;
					iLocal_769[1] = 1;
					iLocal_763[2] = 1;
					iLocal_769[2] = 1;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 0;
					iLocal_769[4] = 0;
				}
				break;
			
			case 4:
				Local_545 = { 0f, 0f, 180f };
				Local_542 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_533 = func_52(0);
				Local_537 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_540 = 197.2994f;
				iLocal_569 = 1;
				if (func_400(6, 18))
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 0;
					iLocal_763[1] = 2;
					iLocal_769[1] = 1;
					iLocal_763[2] = 1;
					iLocal_769[2] = 1;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 0;
					iLocal_769[4] = 1;
				}
				else
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 1;
					iLocal_763[1] = 1;
					iLocal_769[1] = 0;
					iLocal_763[2] = 0;
					iLocal_769[2] = 2;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 0;
					iLocal_769[4] = 1;
				}
				break;
			
			case 5:
				Local_545 = { 0f, 0f, 155f };
				Local_542 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_533 = func_52(0);
				Local_537 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_540 = 296.5427f;
				iLocal_569 = 1;
				if (func_400(6, 18))
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 1;
					iLocal_763[1] = 0;
					iLocal_769[1] = 0;
					iLocal_763[2] = 1;
					iLocal_769[2] = 2;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 0;
					iLocal_769[4] = 2;
				}
				else
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 2;
					iLocal_763[1] = 2;
					iLocal_769[1] = 1;
					iLocal_763[2] = 0;
					iLocal_769[2] = 2;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 0;
					iLocal_769[4] = 2;
				}
				break;
			
			case 6:
				Local_545 = { 0f, 0f, 63.3f };
				Local_542 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_533 = func_52(0);
				Local_537 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_540 = 130.9518f;
				iLocal_569 = 1;
				if (func_400(6, 18))
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 2;
					iLocal_763[1] = 1;
					iLocal_769[1] = 0;
					iLocal_763[2] = 0;
					iLocal_769[2] = 0;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 0;
					iLocal_769[4] = 0;
				}
				else
				{
					iLocal_763[0] = 1;
					iLocal_769[0] = 0;
					iLocal_763[1] = 0;
					iLocal_769[1] = 0;
					iLocal_763[2] = 1;
					iLocal_769[2] = 0;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 0;
					iLocal_769[4] = 0;
				}
				break;
			
			case 7:
				Local_545 = { 0f, 0f, 117f };
				Local_542 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_533 = func_52(0);
				Local_537 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_540 = 73.6245f;
				iLocal_569 = 1;
				if (func_400(6, 18))
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 0;
					iLocal_763[1] = 1;
					iLocal_769[1] = 1;
					iLocal_763[2] = 0;
					iLocal_769[2] = 1;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 0;
					iLocal_769[4] = 1;
				}
				else
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 0;
					iLocal_763[1] = 0;
					iLocal_769[1] = 0;
					iLocal_763[2] = 1;
					iLocal_769[2] = 1;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 0;
					iLocal_769[4] = 1;
				}
				break;
			
			case 8:
				Local_545 = { 0f, 0f, 92f };
				Local_542 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_533 = func_52(0);
				Local_537 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_540 = 110.7699f;
				iLocal_569 = 1;
				if (func_400(6, 18))
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 1;
					iLocal_763[1] = 2;
					iLocal_769[1] = 0;
					iLocal_763[2] = 0;
					iLocal_769[2] = 2;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 0;
					iLocal_769[4] = 2;
				}
				else
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 1;
					iLocal_763[1] = 1;
					iLocal_769[1] = 0;
					iLocal_763[2] = 1;
					iLocal_769[2] = 2;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 0;
					iLocal_769[4] = 2;
				}
				break;
			
			case 9:
				Local_545 = { 0f, 0f, 75f };
				Local_542 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_533 = func_52(0);
				Local_537 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_540 = 52.0064f;
				iLocal_569 = 1;
				if (func_400(6, 18))
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 2;
					iLocal_763[1] = 2;
					iLocal_769[1] = 1;
					iLocal_763[2] = 1;
					iLocal_769[2] = 0;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 0;
					iLocal_769[4] = 0;
				}
				else
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 2;
					iLocal_763[1] = 1;
					iLocal_769[1] = 1;
					iLocal_763[2] = 0;
					iLocal_769[2] = 0;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 0;
					iLocal_769[4] = 0;
				}
				break;
			
			case 10:
				Local_545 = { 0f, 0f, 0f };
				Local_542 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_533 = func_52(0);
				Local_537 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_540 = 136.5945f;
				iLocal_569 = 3;
				if (func_400(10, 22))
				{
					iLocal_763[0] = 1;
					iLocal_769[0] = 0;
					iLocal_763[1] = 0;
					iLocal_769[1] = 0;
					iLocal_763[2] = 1;
					iLocal_769[2] = 1;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				else
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 0;
					iLocal_763[1] = 2;
					iLocal_769[1] = 0;
					iLocal_763[2] = 0;
					iLocal_769[2] = 1;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				break;
			
			case 11:
				Local_545 = { 0f, 0f, -92f };
				Local_542 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_533 = func_52(0);
				Local_537 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_540 = 176.1174f;
				iLocal_569 = 3;
				if (func_400(10, 22))
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 0;
					iLocal_763[1] = 1;
					iLocal_769[1] = 0;
					iLocal_763[2] = 1;
					iLocal_769[2] = 2;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				else
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 1;
					iLocal_763[1] = 2;
					iLocal_769[1] = 1;
					iLocal_763[2] = 0;
					iLocal_769[2] = 2;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				break;
			
			case 12:
				Local_545 = { 0f, 0f, -145f };
				Local_542 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_533 = func_52(0);
				Local_537 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_540 = 43.8031f;
				iLocal_569 = 3;
				if (func_400(10, 22))
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 1;
					iLocal_763[1] = 1;
					iLocal_769[1] = 1;
					iLocal_763[2] = 0;
					iLocal_769[2] = 0;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				else
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 2;
					iLocal_763[1] = 1;
					iLocal_769[1] = 0;
					iLocal_763[2] = 1;
					iLocal_769[2] = 0;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				break;
			
			case 13:
				Local_545 = { 0f, 0f, 103f };
				Local_542 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_533 = func_52(0);
				Local_537 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_540 = 269.2587f;
				iLocal_569 = 3;
				if (func_400(10, 22))
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 2;
					iLocal_763[1] = 2;
					iLocal_769[1] = 0;
					iLocal_763[2] = 0;
					iLocal_769[2] = 1;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				else
				{
					iLocal_763[0] = 1;
					iLocal_769[0] = 0;
					iLocal_763[1] = 0;
					iLocal_769[1] = 0;
					iLocal_763[2] = 1;
					iLocal_769[2] = 1;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				break;
			
			case 14:
				Local_545 = { 0f, 0f, -41f };
				Local_542 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_533 = func_52(0);
				Local_537 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_540 = 36.5415f;
				iLocal_569 = 3;
				if (func_400(10, 22))
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 0;
					iLocal_763[1] = 2;
					iLocal_769[1] = 1;
					iLocal_763[2] = 0;
					iLocal_769[2] = 2;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				else
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 0;
					iLocal_763[1] = 1;
					iLocal_769[1] = 0;
					iLocal_763[2] = 1;
					iLocal_769[2] = 2;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				break;
			
			case 15:
				Local_545 = { 0f, 0f, 145f };
				Local_542 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_533 = func_52(0);
				Local_537 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_540 = 24.9178f;
				iLocal_569 = 2;
				if (func_400(8, 20))
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 1;
					iLocal_763[1] = 0;
					iLocal_769[1] = 0;
					iLocal_763[2] = 1;
					iLocal_769[2] = 0;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				else
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 1;
					iLocal_763[1] = 1;
					iLocal_769[1] = 1;
					iLocal_763[2] = 0;
					iLocal_769[2] = 0;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				break;
			
			case 16:
				Local_545 = { 0f, 0f, -87f };
				Local_542 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_533 = func_52(0);
				Local_537 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_540 = 291.6504f;
				iLocal_569 = 2;
				if (func_400(8, 20))
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 2;
					iLocal_763[1] = 1;
					iLocal_769[1] = 0;
					iLocal_763[2] = 1;
					iLocal_769[2] = 1;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				else
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 2;
					iLocal_763[1] = 2;
					iLocal_769[1] = 0;
					iLocal_763[2] = 0;
					iLocal_769[2] = 1;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				break;
			
			case 17:
				Local_545 = { 0f, 0f, -125f };
				Local_542 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_533 = func_52(0);
				Local_537 = { -40.42f, -1751.423f, 28.421f };
				fLocal_540 = 145.6553f;
				iLocal_569 = 2;
				if (func_400(8, 20))
				{
					iLocal_763[0] = 1;
					iLocal_769[0] = 0;
					iLocal_763[1] = 1;
					iLocal_769[1] = 1;
					iLocal_763[2] = 1;
					iLocal_769[2] = 2;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				else
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 0;
					iLocal_763[1] = 2;
					iLocal_769[1] = 0;
					iLocal_763[2] = 0;
					iLocal_769[2] = 2;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				break;
			
			case 18:
				Local_545 = { 0f, 0f, -74f };
				Local_542 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_533 = func_52(0);
				Local_537 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_540 = 232.6337f;
				iLocal_569 = 2;
				if (func_400(8, 20))
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 0;
					iLocal_763[1] = 2;
					iLocal_769[1] = 1;
					iLocal_763[2] = 0;
					iLocal_769[2] = 0;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				else
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 1;
					iLocal_763[1] = 2;
					iLocal_769[1] = 0;
					iLocal_763[2] = 0;
					iLocal_769[2] = 0;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				break;
			
			case 19:
				Local_542 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				Local_545 = { 0f, 0f, -47.3f };
				iLocal_533 = func_52(0);
				Local_537 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_540 = 247.1234f;
				iLocal_569 = 2;
				if (func_400(8, 20))
				{
					iLocal_763[0] = 2;
					iLocal_769[0] = 1;
					iLocal_763[1] = 0;
					iLocal_769[1] = 0;
					iLocal_763[2] = 0;
					iLocal_769[2] = 1;
					iLocal_763[3] = 0;
					iLocal_769[3] = 0;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				else
				{
					iLocal_763[0] = 0;
					iLocal_769[0] = 2;
					iLocal_763[1] = 2;
					iLocal_769[1] = 1;
					iLocal_763[2] = 0;
					iLocal_769[2] = 1;
					iLocal_763[3] = 0;
					iLocal_769[3] = 1;
					iLocal_763[4] = 1;
					iLocal_769[4] = 0;
				}
				break;
		}
		Local_542 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_542, Local_545.f_2, 0f, 0.075f, 0f) };
		Local_534 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s", Local_542, Local_545, 0f, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s", Local_542, Local_545, 0f, 2) };
		Local_81.f_42 = Var0.f_2;
		Local_558 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_bag", Local_542, Local_545, 0f, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_bag", Local_542, Local_545, 0f, 2) };
		fLocal_561 = Var0.f_2;
		Local_562 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_till", Local_542, Local_545, 0f, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_till", Local_542, Local_545, 0f, 2) };
		fLocal_565 = Var0.f_2;
		Local_475.f_0 = func_399(Local_475.f_50);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_81.f_45 = iLocal_763[0];
			if (Local_81.f_45 == 0)
			{
				StringCopy(&(Local_81.f_50), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_81.f_46), "StoreOwner2", 16);
			}
			else if (Local_81.f_45 == 1)
			{
				StringCopy(&(Local_81.f_50), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_81.f_46), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_81.f_50), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_81.f_46), "StoreOwner3", 16);
			}
		}
		if (!BitTest(Local_475.f_52, 29))
		{
			ENTITY::CREATE_MODEL_HIDE(Local_542, 0.5f, iLocal_566, true);
			MISC::SET_BIT(&(Local_475.f_52), 29);
		}
		return 1;
	}
	return 0;
}

int func_399(int iParam0)
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

bool func_400(int iParam0, int iParam1)
{
	return func_401(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_401(int iParam0, int iParam1, int iParam2)
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

void func_402(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_403(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_404(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_405(iParam0, uParam5, uParam6);
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

void func_405(int iParam0, var uParam1, var uParam2)
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

int func_406(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	fVar1 = 9999.9f;
	bVar2 = false;
	while (bVar2 < 20)
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_87(PLAYER::PLAYER_ID()), func_407(bVar2), true);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!BitTest(Global_2689053.f_62, bVar2) && BitTest(Global_2689053.f_64, bVar2))
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

Vector3 func_407(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	func_405(iParam0, &Var0, &uVar3);
	return Var0;
}

int func_408(int iParam0)
{
	return Local_154[iParam0 /*10*/].f_4;
}

void func_409()
{
	Global_2714635.f_785.f_28 = 0;
}

void func_410()
{
	if (Global_1574582.f_1 == 1)
	{
		func_411(7, 0, 1);
		Global_1574582.f_1 = 0;
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_9 = 0;
	}
}

void func_411(int iParam0, int iParam1, bool bParam2)
{
	if (func_381())
	{
		if (iParam1 == 1)
		{
			if (Global_2810701.f_4462 == -1)
			{
				Global_2810701.f_4462 = Global_262145.f_26848;
			}
			func_412(&(Global_2810701.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2810701.f_4465 == -1)
				{
					Global_2810701.f_4465 = Global_262145.f_26849;
				}
				func_412(&(Global_2810701.f_4463), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
				func_380(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
			func_380(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_379()) && !func_378(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

void func_412(var uParam0, bool bParam1, bool bParam2)
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

void func_413()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_46(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = 1;
		if (BitTest(Local_475.f_53, 6) && !BitTest(Local_475.f_53, 5))
		{
			iVar1 = MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
			iVar2 = 0;
			MISC::SET_BIT(&iVar2, 8);
			MISC::SET_BIT(&iVar2, 4);
			MISC::SET_BIT(&iVar2, 1);
			if (iLocal_792 > Global_262145.f_166)
			{
				iLocal_792 = Global_262145.f_166;
			}
			if (iVar1 < iLocal_792)
			{
				if (iVar1 > 0)
				{
					if (func_51(func_52(1)))
					{
						if (MONEY::_NETWORK_CAN_SPEND_MONEY_2(iVar1, false, false, false, &uVar3, -1, 0))
						{
							if (func_214())
							{
								if (!BitTest(Global_2810701.f_7, 1))
								{
									Global_2810701.f_5018 = iVar1;
									Global_2810701.f_5019 = iVar2;
									Global_2810701.f_5020 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f) };
									func_204(&(Global_2810701.f_5017), -1135378931, 537254313, 1474183246, 1022400740, Global_2810701.f_5018, 1, 3);
									MISC::SET_BIT(&(Global_2810701.f_7), 1);
									iLocal_792 = 0;
									MISC::SET_BIT(&(Local_475.f_53), 5);
								}
							}
							else
							{
								func_415(joaat("pickup_money_variable"), PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f), iVar2, iVar1, func_52(1), 0, 0);
								func_199(-iVar1, 1, 1, 1092616192);
								MONEY::NETWORK_SPENT_HOLDUPS(iVar1, false, false);
								func_203(1022400740, iVar1, &uVar4, 0, 0, 0);
								iLocal_792 = 0;
								func_414();
								MISC::SET_BIT(&(Local_475.f_53), 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_792 > 0)
			{
				if (func_51(func_52(1)))
				{
					if (MONEY::_NETWORK_CAN_SPEND_MONEY_2(iLocal_792, false, false, false, &uVar3, -1, 0))
					{
						if (func_214())
						{
							if (!BitTest(Global_2810701.f_7, 1))
							{
								Global_2810701.f_5018 = iLocal_792;
								Global_2810701.f_5019 = iVar2;
								Global_2810701.f_5020 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f) };
								func_204(&(Global_2810701.f_5017), -1135378931, 537254313, 1474183246, 1022400740, Global_2810701.f_5018, 1, 3);
								MISC::SET_BIT(&(Global_2810701.f_7), 1);
								iLocal_792 = 0;
								MISC::SET_BIT(&(Local_475.f_53), 5);
							}
						}
						else
						{
							func_415(joaat("pickup_money_variable"), PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f), iVar2, iLocal_792, func_52(1), 0, 0);
							func_199(-iLocal_792, 1, 1, 1092616192);
							MONEY::NETWORK_SPENT_HOLDUPS(iLocal_792, false, false);
							func_203(1022400740, iLocal_792, &uVar5, 0, 0, 0);
							iLocal_792 = 0;
							func_414();
							MISC::SET_BIT(&(Local_475.f_53), 5);
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
			func_446();
		}
		else
		{
			return;
		}
	}
}

void func_414()
{
	Global_2810701.f_283 = 0;
	Global_2810701.f_284 = 0;
	Global_2810701.f_285 = 0;
}

struct<5> func_415(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
{
	struct<5> Var0;
	
	if (func_423() && func_422(iParam0))
	{
		Var0 = { func_416(iParam0, Param1, iParam4, iParam5, iParam6, bParam7) };
	}
	else
	{
		Var0.f_4 = OBJECT::CREATE_AMBIENT_PICKUP(iParam0, Param1, iParam4, iParam5, iParam6, bParam7, bParam8);
	}
	return Var0;
}

struct<5> func_416(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	int iVar5;
	struct<5> Var6;
	int iVar11;
	
	if (func_421() == -1)
	{
		return Var0;
	}
	iVar5 = func_420(-1);
	if (iVar5 == -1)
	{
		return Var0;
	}
	Var6.f_0 = iParam0;
	Var6.f_1 = { Param1 };
	if (func_417(&Var6) != -1)
	{
		return Var0;
	}
	MISC::SET_BIT(&iParam4, 5);
	Var6.f_4 = OBJECT::_CREATE_NON_NETWORKED_AMBIENT_PICKUP(iParam0, Param1, iParam4, iParam5, iParam6, bParam7, false);
	iVar11 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (bParam7)
	{
		Global_1912781[iVar11 /*258*/].f_94.f_21[iVar5 /*14*/].f_12 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
		Global_1912781[iVar11 /*258*/].f_94.f_21[iVar5 /*14*/].f_13 = NETWORK::_NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT();
		if (Global_1912781[iVar11 /*258*/].f_94.f_21[iVar5 /*14*/].f_13 == 0)
		{
			Global_1912781[iVar11 /*258*/].f_94.f_21[iVar5 /*14*/].f_13 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
			Global_1912781[iVar11 /*258*/].f_94.f_21[iVar5 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1912781[iVar11 /*258*/].f_94.f_21[iVar5 /*14*/].f_11 = 2;
		}
	}
	Global_1912781[iVar11 /*258*/].f_94.f_21[iVar5 /*14*/] = { Var6 };
	Global_1912781[iVar11 /*258*/].f_94.f_21[iVar5 /*14*/].f_5 = { Param1 };
	Global_1912781[iVar11 /*258*/].f_94.f_21[iVar5 /*14*/].f_8 = iParam4;
	Global_1912781[iVar11 /*258*/].f_94.f_21[iVar5 /*14*/].f_9 = iParam5;
	Global_1912781[iVar11 /*258*/].f_94.f_21[iVar5 /*14*/].f_10 = iParam6;
	return Var6;
}

int func_417(var uParam0)
{
	int iVar0;
	
	if (!func_419(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_418(uParam0, &(Global_2683916.f_2452[iVar0 /*16*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_418(var uParam0, var uParam1)
{
	if ((*uParam0 == *uParam1 && func_131(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4 == uParam1->f_4)
	{
		return 1;
	}
	return 0;
}

int func_419(var uParam0)
{
	if ((*uParam0 == 123 || func_265(uParam0->f_1)) || uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_420(int iParam0)
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
		if (!func_419(&(Global_1912781[iParam0 /*258*/].f_94.f_21[iVar1 /*14*/])))
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

int func_421()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_419(&(Global_2683916.f_2452[iVar1 /*16*/])))
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

int func_422(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

var func_423()
{
	return Global_262145.f_30587;
}

int func_424()
{
	if (Global_1575030 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_431())
	{
		return 1;
	}
	if (Global_2727490)
	{
		return 1;
	}
	if (func_430())
	{
		return 1;
	}
	if (func_429(159))
	{
		if (!func_428())
		{
			return 1;
		}
	}
	if (func_429(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_425() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_425()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_425()
{
	switch (func_427())
	{
		case 0:
			return func_426();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_426()
{
	switch (Global_2727594)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_427()
{
	return Global_31511;
}

bool func_428()
{
	return Global_2714635.f_698;
}

int func_429(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_430()
{
	return Global_2725233;
}

bool func_431()
{
	return Global_2714635.f_693;
}

void func_432()
{
	SYSTEM::WAIT(0);
}

void func_433(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_444())
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
		if (!func_442())
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
				else if (bVar14 || (!func_334(PLAYER::PLAYER_ID(), 0) && !func_441()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689224[iParam0 /*451*/].f_251 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_438(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_437(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_436();
					func_435();
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
				Global_2689224[iParam0 /*451*/].f_252 = 0;
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
				if (!func_437(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_434(Global_4718592.f_138376))
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

bool func_434(int iParam0)
{
	return iParam0 == 17;
}

void func_435()
{
	struct<3> Var0;
	
	Global_2703660.f_910 = 0;
	Global_2703660.f_911 = 0;
	Global_2703660.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703660.f_917 = -1;
	Global_2703660.f_918 = 0;
	Global_2667223.f_2692 = { Var0 };
}

void func_436()
{
	Global_2667223.f_702 = 0;
	Global_2667223.f_2735 = 0;
	Global_2667223.f_515 = 0;
	Global_2667223.f_606 = 0;
	Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_214 = 0;
	Global_2667223.f_2690 = 0;
}

int func_437(int iParam0)
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

void func_438(bool bParam0, int iParam1, int iParam2)
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
				func_440();
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
		if (func_334(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_439(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_439(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_440()
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

bool func_441()
{
	return BitTest(Global_2621446, 3);
}

int func_442()
{
	if (func_443() == 0)
	{
		return 1;
	}
	return 0;
}

int func_443()
{
	return Global_1574631.f_18;
}

int func_444()
{
	if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_887, 2) && !Global_2715551.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_445(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2714635.f_785.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2714635.f_785.f_31);
	}
	return Global_2714635.f_785.f_28;
}

void func_446()
{
	int iVar0;
	
	Global_2810701.f_8 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_395(Local_81.f_0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_81.f_0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_81.f_0), 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_81.f_0));
				if (BitTest(Local_475.f_52, 22))
				{
					if (BitTest(Local_475.f_52, 20))
					{
						if (Local_81.f_3 != 7)
						{
							if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
							{
								TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_81.f_0));
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_81.f_0), iLocal_552);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_81.f_0), false);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_combat_hated_targets_around_ped")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_81.f_0), joaat("script_task_combat_hated_targets_around_ped")) != 1)
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_81.f_0));
							if (!WEAPON::HAS_PED_GOT_WEAPON(NETWORK::NET_TO_PED(Local_81.f_0), joaat("weapon_pistol"), false))
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_81.f_0), joaat("weapon_pistol"), 25000, true);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_81.f_0), 30);
							}
							func_228(4);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_81.f_0), 20f, 0);
						}
					}
					else if ((BitTest(Local_81.f_23, 3) || !func_10()) || !func_450())
					{
						if (!BitTest(Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_81.f_0));
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_81.f_0), iLocal_552);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_81.f_0), false);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_81.f_0));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_81.f_0), true);
						TASK::TASK_STAND_STILL(NETWORK::NET_TO_PED(Local_81.f_0), -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_81.f_0), false);
					}
				}
			}
		}
		if ((BitTest(Local_81.f_23, 3) || !func_10()) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_13))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_13))
				{
					ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_81.f_13), true, true);
					func_47(&(Local_81.f_13));
				}
			}
		}
		if (((BitTest(Local_81.f_23, 3) || !func_10()) || BitTest(Local_475.f_52, 20)) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_14))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_14))
				{
					func_47(&(Local_81.f_14));
				}
			}
		}
		if (func_214() && BitTest(Global_2810701.f_7, 1))
		{
			if (func_287(Global_2810701.f_5017) == 1)
			{
				func_449(Global_2810701.f_5017, 4);
			}
			else
			{
				func_206(Global_2810701.f_5017);
			}
			MISC::CLEAR_BIT(&(Global_2810701.f_7), 1);
		}
		if (Local_81.f_12 == 6)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_0))
			{
				if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_81.f_0), "XP_Blocker"))
				{
					DECORATOR::DECOR_REMOVE(NETWORK::NET_TO_PED(Local_81.f_0), "XP_Blocker");
				}
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			EVENT::REMOVE_SHOCKING_EVENT(Local_81.f_30);
		}
	}
	func_448();
	STREAMING::REMOVE_ANIM_DICT("mp_am_hold_up");
	PLAYER::_0x0032A6DBA562C518();
	if (func_146("SHR_MENU"))
	{
		HUD::CLEAR_HELP(true);
	}
	Global_2810701.f_9 = func_180();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_397(Local_475.f_0));
	func_162(1, Local_475.f_0);
	if (Local_475.f_14 != -1)
	{
		func_261(&(Local_475.f_14));
	}
	Global_2810701.f_27 = Local_475.f_0;
	if (Global_2810701.f_5960.f_4 == 1)
	{
		Global_2810701.f_5960.f_4 = 0;
	}
	if (Global_2810701.f_5960.f_5 == 1)
	{
		Global_2810701.f_5960.f_5 = 0;
	}
	if (BitTest(Local_475.f_52, 29))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_542, 0.5f, iLocal_566, true);
	}
	if (BitTest(Local_475.f_53, 7))
	{
		func_410();
		MISC::CLEAR_BIT(&(Local_475.f_53), 7);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Local_81.f_23, 6) || BitTest(Local_81.f_23, 21))
		{
			if (BitTest(Local_81.f_23, 21))
			{
				iVar0 = 1;
			}
			STATS::PLAYSTATS_HOLD_UP_MISSION_DONE(30, iLocal_791, iLocal_792, iVar0);
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_475.f_1))
	{
		if (CAM::IS_CAM_ACTIVE(Local_475.f_1))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::DESTROY_CAM(Local_475.f_1, false);
	}
	func_447();
}

void func_447()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_448()
{
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_549);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_550);
}

void func_449(int iParam0, int iParam1)
{
	if (func_273(iParam0) != -1)
	{
		if (Global_4528329[iParam0 /*85*/].f_66.f_2 == 1)
		{
			Global_4528329[iParam0 /*85*/].f_66.f_11 = iParam1;
		}
	}
}

int func_450()
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
			if (func_46(iVar1, 1, 1))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar2) == iLocal_574)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_451(struct<21> Param0)
{
	var uVar0;
	
	func_457(func_458(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(8);
	func_455(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_81, 73, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_154, 321, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_454())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_51(func_52(0));
		func_51(func_52(1));
		func_51(func_52(2));
		STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
		STREAMING::REQUEST_ANIM_DICT("mp_missheist_countrybank@cower");
		Local_81.f_44 = 8;
		if (func_453())
		{
			MISC::SET_BIT(&(Local_81.f_24), 11);
		}
		else if (func_452())
		{
			MISC::SET_BIT(&(Local_81.f_24), 12);
		}
		Local_81.f_28 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
		Local_81.f_31 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
		if ((func_13() && !func_388(PLAYER::PLAYER_ID(), 1)) && !func_388(PLAYER::PLAYER_ID(), 2))
		{
			Local_81.f_43 = 2;
			MISC::SET_BIT(&(Local_81.f_25), 0);
		}
		else
		{
			Local_81.f_43 = 1;
		}
		Local_81.f_71 = MISC::GET_RANDOM_FLOAT_IN_RANGE(18f, 28f);
	}
	if (func_95(PLAYER::PLAYER_ID()) != 155)
	{
		OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(func_52(1), 0);
	}
	uVar0 = func_126(1191, -1, 0);
	if (BitTest(uVar0, 20) && BitTest(uVar0, 21))
	{
		MISC::SET_BIT(&(Local_475.f_53), 1);
	}
	Local_154[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 0;
	return 1;
}

int func_452()
{
	if (Local_475.f_50 >= 0 && Local_475.f_50 <= 9)
	{
		if (func_400(5, 6) || func_400(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (Local_475.f_50 >= 10 && Local_475.f_50 <= 14)
	{
		if (func_400(9, 10) || func_400(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (Local_475.f_50 >= 15 && Local_475.f_50 <= 19)
	{
		if (func_400(7, 8) || func_400(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_453()
{
	if (Local_475.f_50 >= 0 && Local_475.f_50 <= 9)
	{
		if (func_400(6, 7) || func_400(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (Local_475.f_50 >= 10 && Local_475.f_50 <= 14)
	{
		if (func_400(10, 11) || func_400(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (Local_475.f_50 >= 15 && Local_475.f_50 <= 19)
	{
		if (func_400(8, 9) || func_400(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_454()
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
		if (func_431())
		{
			return 0;
		}
		if (func_429(157))
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

int func_455(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_447();
			}
			else
			{
				return 0;
			}
		}
		if (!func_456())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_447();
					}
					else
					{
						return 0;
					}
				}
				if (func_431())
				{
					if (!bParam2)
					{
						func_447();
					}
					else
					{
						return 0;
					}
				}
				if (func_429(157))
				{
					if (!bParam2)
					{
						func_447();
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
					func_447();
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
		Global_1574665 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_447();
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
			func_447();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_456()
{
	return Global_1575030;
}

void func_457(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_447();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_458(int iParam0)
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
		
		case joaat("mpsv_lp0_31"):
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
		
		case 146:
			return 32;
		
		case 147:
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
		
		case 158:
			return 32;
		
		case 159:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 153:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 154:
			return 32;
		
		case 155:
			return 32;
		
		case 160:
			return 32;
		
		case 161:
			return 32;
		
		case 162:
			return 32;
		
		case 163:
			return 32;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
			return 4;
		
		case 167:
			return 2;
		
		case 168:
			return 2;
		
		case 150:
			return 1;
		
		case 170:
			return 2;
		
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
			return 0;
		
		case 192:
			return 1;
		
		case 177:
			return 4;
		
		case 180:
			return 4;
		
		case 181:
			return 1;
		
		case 182:
			return 1;
		
		case 188:
			return 1;
		
		case 184:
			return 2;
		
		case 189:
			return 1;
		
		case 185:
			return 1;
		
		case 183:
			return 2;
		
		case 186:
			return 8;
		
		case 187:
			return 8;
		
		case 190:
			return 1;
		
		case 191:
			return 2;
		
		case 142:
			return 8;
		
		case 178:
			return 16;
		
		case 179:
			return 32;
		
		default:
	}
	switch (func_459(func_460(iParam0, 1)))
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

int func_459(int iParam0)
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
		
		case 268:
			return 2;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

int func_460(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 164:
			return 15;
		
		case 171:
			return 8;
		
		case 165:
			return 14;
		
		case 169:
			return 122;
		
		case 172:
			return 1;
		
		case 170:
			return 5;
		
		case 173:
			return 6;
		
		case 166:
			return 11;
		
		case 174:
			return 0;
		
		case 175:
			return 2;
		
		case 167:
			return 13;
		
		case 176:
			return 3;
		
		case 168:
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
		
		case joaat("mpsv_lp0_31"):
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
		
		default:
	}
	if (bParam1)
	{
	}
	return 286;
}

