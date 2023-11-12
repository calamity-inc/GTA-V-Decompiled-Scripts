#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	struct<3> Local_16 = { 0, 0, 0 } ;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	struct<13> Local_30 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[3] = { 0, 0, 0 };
	struct<2> Local_53 = { 0, 0 } ;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<2> Local_67 = { 0, 0 } ;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71[415] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	bool bLocal_498 = 0;
	int iLocal_499 = 0;
	struct<2> Local_500[3];
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 10;
	var uLocal_515 = -1;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = -1;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = -1;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = -1;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = -1;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
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
	var uLocal_610 = -1;
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
	var uLocal_629 = -1;
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
	var uLocal_648 = -1;
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
	var uLocal_667 = -1;
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
	var uLocal_686 = -1;
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
	bool bLocal_705 = 0;
	int iLocal_706 = 0;
	int iLocal_707 = 0;
	int iLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	int iLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
	int iLocal_716 = 0;
	int iLocal_717 = 0;
	int iLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	int iLocal_726 = 0;
	int iLocal_727 = 0;
	int iLocal_728 = 0;
	int iLocal_729 = 0;
	int iLocal_730 = 0;
	int iLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	int iLocal_734 = 0;
	int iLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	int iLocal_739 = 0;
	int iLocal_740 = 0;
	bool bLocal_741 = 0;
	int iLocal_742 = 0;
	int iLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	int iLocal_746 = 0;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.67.22";
	iLocal_20 = -1;
	iLocal_21 = -1;
	iLocal_24 = 10000;
	iLocal_492 = 1;
	iLocal_708 = -1;
	iLocal_712 = -1;
	iLocal_713 = -1;
	iLocal_714 = -1;
	iLocal_718 = -1;
	iLocal_739 = -1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		func_513();
		SYSTEM::WAIT(0);
	}
	Global_1578010 = MISC::GET_HASH_KEY(sLocal_0);
	func_512();
	while (true)
	{
		if (func_511())
		{
			func_509();
		}
		func_513();
		func_502();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692776.f_3)
		{
			func_501();
			func_500();
			func_497();
			func_495();
			func_494();
			func_491();
			func_490();
			func_484();
			func_483();
			func_476();
			func_468();
			func_467();
			func_462();
			func_451();
			func_449();
			func_419();
			func_417();
			func_416();
			func_415();
			func_407();
			func_404();
			func_403();
			func_402();
			func_401();
			func_392();
			func_391();
			func_385();
			func_384();
			func_375();
			func_366();
			func_360();
			func_357();
			func_356();
			func_353();
			func_350();
			func_349();
			func_343();
			func_341();
			func_340();
			func_338();
			func_333();
			func_323();
			func_322();
			func_321();
			func_320();
			func_318();
			func_302();
			func_287();
			func_284();
			func_274();
			func_208();
			func_191();
			func_180();
			func_176();
			func_173();
			if (MISC::IS_PC_VERSION())
			{
				func_172();
				func_171();
			}
			func_167();
			func_166();
			func_165();
			func_135();
			func_126();
			func_117();
			func_113();
			func_109();
			func_105();
			func_101();
			func_97();
			func_59();
			func_50();
		}
		func_47();
		func_38();
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_37();
			func_36();
			func_25();
			func_24();
			func_23();
			func_22();
			func_18();
			func_14();
			func_13();
			func_7();
			func_6();
			func_5();
			func_3();
			func_2();
		}
		else
		{
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	Global_1962798 = 70000;
}

void func_2()
{
	if (Global_4718592 != 0)
	{
		return;
	}
	if (Global_4718592.f_2 != 6 && Global_4718592.f_2 != 5)
	{
		return;
	}
	if (Global_4718592.f_1746 > 30)
	{
		Global_4718592.f_1746 = 30;
	}
}

void func_3()
{
	if (func_4(Global_4718592.f_117591) != 4)
	{
		return;
	}
	MISC::SET_BIT(&(Global_4718592.f_144884[0 /*1647*/].f_5), 5);
}

int func_4(int iParam0)
{
	if (iParam0 == Global_262145.f_31922[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_31922[1])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_31922[2])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_31922[3])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_31922[4])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_31922[5])
	{
		return 12;
	}
	return -1;
}

void func_5()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) == 0)
	{
		return;
	}
	Global_1962798 = 90000;
}

void func_6()
{
	int iVar0;
	
	if (Global_4718592.f_117591 != Global_262145.f_33923[2] || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) < 1)
	{
		iLocal_742 = 0;
		return;
	}
	if (iLocal_742)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Global_4718592.f_1816[0 /*24279*/].f_19605[iVar0 /*34*/].f_33 != -1)
		{
			Global_4718592.f_1816[0 /*24279*/].f_19605[iVar0 /*34*/].f_33 = -1;
		}
		iVar0++;
	}
	iLocal_742 = 1;
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_12(Global_4718592.f_117591))
	{
		return;
	}
	if (Global_1577929 == 1)
	{
		iVar0 = func_11();
		iVar1 = func_10(iVar0);
		iVar2 = MISC::GET_PROFILE_SETTING(iVar1);
		if (BitTest(iVar2, 3))
		{
			func_8(3, -1);
		}
	}
}

void func_8(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_11();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
			break;
		
		default:
			iVar1 = func_10(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
			}
			else
			{
				func_9(" Bit Already cleared - skip set ", 0);
			}
			break;
	}
}

void func_9(char* sParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			unk_0x52B85E7F7D5BD284(sParam0, 1);
			break;
		
		case 2:
			unk_0x43AAF8DB361D31DF(sParam0, 1);
			break;
	}
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_11();
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

int func_11()
{
	return Global_1574918;
}

int func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31258[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_13()
{
	if (Global_262145.f_31929[1] != Global_4718592.f_117591)
	{
		return;
	}
	Global_4718592.f_1816[1 /*24279*/].f_16615[10 /*5*/][0] = 13;
	Global_4718592.f_1816[1 /*24279*/].f_16615[11 /*5*/][0] = 13;
}

void func_14()
{
	if (func_17(Global_4718592.f_171044) && !func_16(41671, -1))
	{
		if (Global_1949382.f_24 != 0)
		{
			func_15(41671, 1, -1);
		}
	}
}

void func_15(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_11();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

bool func_16(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_11();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

bool func_17(int iParam0)
{
	return iParam0 == 89;
}

void func_18()
{
	var uVar0;
	var uVar1;
	struct<56> Var2;
	int iVar69;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		return;
	}
	if (Global_4718592.f_117591 != func_21(7))
	{
		return;
	}
	if (Global_4718592.f_118170[56 /*218*/].f_27 == 5)
	{
		return;
	}
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_198190), &(Global_4980736.f_110349[20 /*1098*/]), 1098);
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_110349[20 /*1098*/]), &(Global_4980736.f_110349[5 /*1098*/]), 1098);
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_110349[5 /*1098*/]), &(Global_4980736.f_198190), 1098);
	uVar0 = Global_4718592.f_99800[0 /*4*/][func_20(20)];
	uVar1 = Global_4718592.f_99800[0 /*4*/][func_20(5)];
	if (BitTest(uVar0, func_19(20)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99800[0 /*4*/][func_20(5)]), func_19(5));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99800[0 /*4*/][func_20(5)]), func_19(5));
	}
	if (BitTest(uVar1, func_19(5)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99800[0 /*4*/][func_20(20)]), func_19(20));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99800[0 /*4*/][func_20(20)]), func_19(20));
	}
	uVar0 = Global_4718592.f_99783[0 /*4*/][func_20(20)];
	uVar1 = Global_4718592.f_99783[0 /*4*/][func_20(5)];
	if (BitTest(uVar0, func_19(20)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99783[0 /*4*/][func_20(5)]), func_19(5));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99783[0 /*4*/][func_20(5)]), func_19(5));
	}
	if (BitTest(uVar1, func_19(5)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99783[0 /*4*/][func_20(20)]), func_19(20));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99783[0 /*4*/][func_20(20)]), func_19(20));
	}
	uVar0 = Global_4718592.f_99766[0 /*4*/][func_20(20)];
	uVar1 = Global_4718592.f_99766[0 /*4*/][func_20(5)];
	if (BitTest(uVar0, func_19(20)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99766[0 /*4*/][func_20(5)]), func_19(5));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99766[0 /*4*/][func_20(5)]), func_19(5));
	}
	if (BitTest(uVar1, func_19(5)))
	{
		MISC::SET_BIT(&(Global_4718592.f_99766[0 /*4*/][func_20(20)]), func_19(20));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_99766[0 /*4*/][func_20(20)]), func_19(20));
	}
	Var2 = 12;
	Var2.f_37 = 12;
	Var2.f_51 = -1;
	Var2.f_52 = -1;
	Var2.f_53 = -1;
	Var2.f_54 = -1;
	Var2.f_55 = -1;
	Var2.f_55.f_2 = 1065353216;
	Var2.f_55.f_6.f_3 = 1132396544;
	Var2.f_55.f_10 = -1;
	Var2.f_55.f_11 = -1;
	MISC::COPY_SCRIPT_STRUCT(&Var2, &(Global_4980736.f_110349[20 /*1098*/].f_738), 67);
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_110349[20 /*1098*/].f_738), &(Global_4980736.f_110349[5 /*1098*/].f_738), 67);
	MISC::COPY_SCRIPT_STRUCT(&(Global_4980736.f_110349[5 /*1098*/].f_738), &Var2, 67);
	iVar69 = 0;
	while (iVar69 < 17)
	{
		uVar0 = Global_4718592.f_1816[0 /*24279*/].f_8986[iVar69 /*81*/][20];
		uVar1 = Global_4718592.f_1816[0 /*24279*/].f_8986[iVar69 /*81*/][5];
		Global_4718592.f_1816[0 /*24279*/].f_8986[iVar69 /*81*/][20] = uVar1;
		Global_4718592.f_1816[0 /*24279*/].f_8986[iVar69 /*81*/][5] = uVar0;
		uVar0 = Global_4718592.f_1816[0 /*24279*/].f_20184[iVar69 /*81*/][20];
		uVar1 = Global_4718592.f_1816[0 /*24279*/].f_20184[iVar69 /*81*/][5];
		Global_4718592.f_1816[0 /*24279*/].f_20184[iVar69 /*81*/][20] = uVar1;
		Global_4718592.f_1816[0 /*24279*/].f_20184[iVar69 /*81*/][5] = uVar0;
		uVar0 = Global_4718592.f_1816[0 /*24279*/].f_21562[iVar69 /*81*/][20];
		uVar1 = Global_4718592.f_1816[0 /*24279*/].f_21562[iVar69 /*81*/][5];
		Global_4718592.f_1816[0 /*24279*/].f_21562[iVar69 /*81*/][20] = uVar1;
		Global_4718592.f_1816[0 /*24279*/].f_21562[iVar69 /*81*/][5] = uVar0;
		iVar69++;
	}
	Global_4718592.f_118170[56 /*218*/].f_27 = 5;
}

int func_19(int iParam0)
{
	return (iParam0 - func_20(iParam0) * 31);
}

int func_20(int iParam0)
{
	return (iParam0 / 31);
}

int func_21(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33952[iParam0];
	}
	return -1;
}

void func_22()
{
	if (Global_4718592.f_117591 == 1327987538)
	{
		if (!BitTest(Global_4718592.f_35, 2))
		{
			MISC::SET_BIT(&(Global_4718592.f_35), 2);
		}
	}
}

void func_23()
{
	if (func_4(Global_4718592.f_117591) == 10)
	{
		if (Global_262145.f_33950)
		{
			Global_262145.f_33950 = 0;
		}
	}
}

void func_24()
{
	if (Global_4718592.f_117591 != Global_262145.f_33923[2])
	{
		return;
	}
	if (Global_4718592.f_1816[0 /*24279*/].f_17130[4] == 0)
	{
		return;
	}
	if (BitTest(Global_2684820.f_3883, 0) && BitTest(Global_1574942, 4))
	{
		Global_4718592.f_1816[0 /*24279*/].f_17130[4] = 0;
	}
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((Global_262145.f_33952[10] != Global_4718592.f_117591 || Global_1574964) || !Global_1574965)
	{
		func_35();
		return;
	}
	MISC::CLEAR_BIT(&(Global_4718592.f_161355[1 /*566*/].f_18), 7);
	MISC::CLEAR_BIT(&(Global_4718592.f_161355[1 /*566*/].f_18), 29);
	Global_4980736.f_110349[42 /*1098*/].f_944[0] = 3;
	Global_4980736.f_110349[58 /*1098*/].f_944[0] = 3;
	if (Global_1058071.f_14[0] > 7 || Global_1058071.f_14[0] < 6)
	{
		func_34(&iLocal_49);
		return;
	}
	iVar0 = func_32(&iLocal_49);
	iVar1 = 600;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			iVar1 = 900;
		}
	}
	func_31(iVar0);
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar2 = CUTSCENE::GET_CUTSCENE_END_TIME();
		iVar3 = CUTSCENE::GET_CUTSCENE_TIME();
		if (iVar3 >= (iVar2 - 300) && !func_30(&Local_53))
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			func_29(&Local_53, 0, 0);
		}
	}
	else if (func_30(&Local_53) && func_28(Local_53, iVar1, 0))
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		func_27(&Local_53);
		iLocal_48 = 1;
		func_26(iVar0);
	}
}

void func_26(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
	VEHICLE::SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(iParam0, false);
	VEHICLE::SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(iParam0, false);
	VEHICLE::SET_VEHICLE_HANDBRAKE(iParam0, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 30f);
}

void func_27(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_28(int iParam0, var uParam1, int iParam2, bool bParam3)
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

void func_29(var uParam0, bool bParam1, bool bParam2)
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

bool func_30(var uParam0)
{
	return uParam0->f_1;
}

void func_31(int iParam0)
{
	if (iLocal_48)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	ENTITY::SET_ENTITY_VELOCITY(iParam0, 0f, 0f, 0f);
}

int func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1058071.f_268 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0]))
		{
		}
		else if (ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]) != joaat("cargoplane2"))
		{
		}
		else if (func_33(iParam0, Global_1058071.f_233[iVar0]))
		{
		}
		else
		{
			return Global_1058071.f_233[iVar0];
		}
		iVar0++;
	}
	return 0;
}

int func_33(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (iParam1 == (*uParam0)[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1058071.f_268 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0]))
		{
		}
		else if (ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]) != joaat("cargoplane2"))
		{
		}
		else if (func_33(iParam0, Global_1058071.f_233[iVar0]))
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1]))
				{
				}
				else
				{
					(*iParam0)[iVar1] = Global_1058071.f_233[iVar0];
				}
				else
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
}

void func_35()
{
	int iVar0;
	
	func_27(&Local_53);
	iLocal_48 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_49[iVar0] = 0;
		iVar0++;
	}
}

void func_36()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) >= 1)
	{
		return;
	}
	if (Global_2635560.f_2978)
	{
	}
	Global_2635560.f_2978 = 0;
}

void func_37()
{
	if ((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) != 0 && Global_262145.f_33952[8] != Global_4718592.f_117591) && !(Global_1574964 || Global_1574965))
	{
		MISC::SET_BIT(&Global_1574994, 29);
	}
}

void func_38()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (MISC::IS_PC_VERSION())
	{
		return;
	}
	if (!iLocal_755)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_46(PLAYER::PLAYER_ID(), 1, 1))
		{
			iVar0 = func_45(12020, -1);
			if (BitTest(iVar0, 0))
			{
				func_15(41891, 0, -1);
				func_43(-1739532126, 1, 1, 1, -1);
				func_43(-1534872246, 1, 1, 1, -1);
				iVar3 = func_42();
				iVar1 = 0;
				while (iVar1 < 21)
				{
					if (Global_2359296[iVar3 /*5568*/].f_681.f_2306[iVar1])
					{
						iVar2 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 11, Global_2359296[iVar3 /*5568*/].f_681.f_1336[iVar1 /*13*/][11], Global_2359296[iVar3 /*5568*/].f_681.f_1610[iVar1 /*13*/][11]);
						if (iVar2 == -2094574547 || iVar2 == 1639201221)
						{
							Global_2359296[iVar3 /*5568*/].f_681.f_2306[iVar1] = 0;
						}
					}
					iVar1++;
				}
				iVar2 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 11, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 11), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 11));
				if (iVar2 == -2094574547)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 91, 0, 0);
				}
				else if (iVar2 == 1639201221)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 82, 0, 0);
				}
			}
			func_39(11867, 0, -1, 1);
			func_39(12009, 0, -1, 1);
			func_39(12010, 0, -1, 1);
			func_39(12011, 0, -1, 1);
			func_39(12012, 0, -1, 1);
			func_39(12013, 0, -1, 1);
			func_39(12014, 0, -1, 1);
			func_39(12015, 0, -1, 1);
			func_39(11873, 0, -1, 1);
			func_39(11874, 0, -1, 1);
			func_39(11875, 0, -1, 1);
			func_39(12016, 0, -1, 1);
			func_39(12017, 0, -1, 1);
			func_39(12018, 0, -1, 1);
			func_39(12019, 0, -1, 1);
			func_39(12020, 0, -1, 1);
			func_39(12021, 0, -1, 1);
			func_39(12022, 0, -1, 1);
			iLocal_755 = 1;
		}
	}
	else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_755 = 0;
	}
}

void func_39(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_40(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

var func_40(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_41(uParam1));
}

int func_41(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_11();
		if (iVar1 > -1)
		{
			Global_2805862 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2805862 = 1;
		}
	}
	return iVar0;
}

int func_42()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_43(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_78469;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_44(iParam0, iParam1, &iVar2, &bVar1, bParam2, bParam3))
	{
		iVar3 = func_45(iVar2, iVar0);
		MISC::CLEAR_BIT(&iVar3, bVar1);
		func_39(iVar2, iVar3, iVar0, 1);
	}
}

bool func_44(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 14385;
	if ((bParam4 && Global_4539490) || (!bParam4 && bParam5))
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
		if (Global_4539490)
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
					*uParam2 = 10303;
					break;
				
				case 232:
					*uParam2 = 10304;
					break;
				
				case 233:
					*uParam2 = 10305;
					break;
				
				case 234:
					*uParam2 = 10306;
					break;
				
				case 235:
					*uParam2 = 10307;
					break;
				
				case 236:
					*uParam2 = 10308;
					break;
				
				case 237:
					*uParam2 = 10309;
					break;
				
				case 238:
					*uParam2 = 10310;
					break;
				
				case 239:
					*uParam2 = 10311;
					break;
				
				case 240:
					*uParam2 = 10312;
					break;
				
				case 241:
					*uParam2 = 10313;
					break;
				
				case 242:
					*uParam2 = 10314;
					break;
				
				case 243:
					*uParam2 = 10315;
					break;
				
				case 244:
					*uParam2 = 10316;
					break;
				
				case 245:
					*uParam2 = 10317;
					break;
				
				case 246:
					*uParam2 = 10318;
					break;
				
				case 247:
					*uParam2 = 10319;
					break;
				
				case 248:
					*uParam2 = 10320;
					break;
				
				case 249:
					*uParam2 = 10321;
					break;
				
				case 250:
					*uParam2 = 10322;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10419;
					break;
				
				case 252:
					*uParam2 = 10420;
					break;
				
				case 253:
					*uParam2 = 10421;
					break;
				
				case 254:
					*uParam2 = 10422;
					break;
				
				case 255:
					*uParam2 = 10423;
					break;
				
				case 256:
					*uParam2 = 10424;
					break;
				
				case 257:
					*uParam2 = 10425;
					break;
				
				case 258:
					*uParam2 = 10426;
					break;
				
				case 259:
					*uParam2 = 10427;
					break;
				
				case 260:
					*uParam2 = 10428;
					break;
				
				case 261:
					*uParam2 = 11845;
					break;
				
				case 262:
					*uParam2 = 11846;
					break;
				
				case 263:
					*uParam2 = 11847;
					break;
				
				case 264:
					*uParam2 = 11848;
					break;
				
				case 265:
					*uParam2 = 11849;
					break;
				
				case 266:
					*uParam2 = 11850;
					break;
				
				case 267:
					*uParam2 = 11851;
					break;
				
				case 268:
					*uParam2 = 11852;
					break;
				
				case 269:
					*uParam2 = 11853;
					break;
				
				case 270:
					*uParam2 = 11854;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11876;
					break;
				
				case 272:
					*uParam2 = 11877;
					break;
				
				case 273:
					*uParam2 = 11878;
					break;
				
				case 274:
					*uParam2 = 11879;
					break;
				
				case 275:
					*uParam2 = 11880;
					break;
				
				case 276:
					*uParam2 = 11881;
					break;
				
				case 277:
					*uParam2 = 11882;
					break;
				
				case 278:
					*uParam2 = 11883;
					break;
				
				case 279:
					*uParam2 = 11884;
					break;
				
				case 280:
					*uParam2 = 11885;
					break;
				
				case 281:
					*uParam2 = 11886;
					break;
				
				case 282:
					*uParam2 = 11887;
					break;
				
				case 283:
					*uParam2 = 11974;
					break;
				
				case 284:
					*uParam2 = 11975;
					break;
				
				case 285:
					*uParam2 = 11976;
					break;
				
				case 286:
					*uParam2 = 11977;
					break;
				
				case 287:
					*uParam2 = 11978;
					break;
				
				case 288:
					*uParam2 = 11979;
					break;
				
				case 289:
					*uParam2 = 11980;
					break;
				
				case 290:
					*uParam2 = 11981;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 291:
					*uParam2 = 11982;
					break;
				
				case 292:
					*uParam2 = 11983;
					break;
				
				case 293:
					*uParam2 = 11984;
					break;
				
				case 294:
					*uParam2 = 11985;
					break;
				
				case 295:
					*uParam2 = 11986;
					break;
				
				case 296:
					*uParam2 = 11987;
					break;
				
				case 297:
					*uParam2 = 11988;
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
					*uParam2 = 10323;
					break;
				
				case 232:
					*uParam2 = 10324;
					break;
				
				case 233:
					*uParam2 = 10325;
					break;
				
				case 234:
					*uParam2 = 10326;
					break;
				
				case 235:
					*uParam2 = 10327;
					break;
				
				case 236:
					*uParam2 = 10328;
					break;
				
				case 237:
					*uParam2 = 10329;
					break;
				
				case 238:
					*uParam2 = 10330;
					break;
				
				case 239:
					*uParam2 = 10331;
					break;
				
				case 240:
					*uParam2 = 10332;
					break;
				
				case 241:
					*uParam2 = 10333;
					break;
				
				case 242:
					*uParam2 = 10334;
					break;
				
				case 243:
					*uParam2 = 10335;
					break;
				
				case 244:
					*uParam2 = 10336;
					break;
				
				case 245:
					*uParam2 = 10337;
					break;
				
				case 246:
					*uParam2 = 10338;
					break;
				
				case 247:
					*uParam2 = 10339;
					break;
				
				case 248:
					*uParam2 = 10340;
					break;
				
				case 249:
					*uParam2 = 10341;
					break;
				
				case 250:
					*uParam2 = 10342;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10429;
					break;
				
				case 252:
					*uParam2 = 10430;
					break;
				
				case 253:
					*uParam2 = 10431;
					break;
				
				case 254:
					*uParam2 = 10432;
					break;
				
				case 255:
					*uParam2 = 10433;
					break;
				
				case 256:
					*uParam2 = 10434;
					break;
				
				case 257:
					*uParam2 = 10435;
					break;
				
				case 258:
					*uParam2 = 10436;
					break;
				
				case 259:
					*uParam2 = 10437;
					break;
				
				case 260:
					*uParam2 = 10438;
					break;
				
				case 261:
					*uParam2 = 11855;
					break;
				
				case 262:
					*uParam2 = 11856;
					break;
				
				case 263:
					*uParam2 = 11857;
					break;
				
				case 264:
					*uParam2 = 11858;
					break;
				
				case 265:
					*uParam2 = 11859;
					break;
				
				case 266:
					*uParam2 = 11860;
					break;
				
				case 267:
					*uParam2 = 11861;
					break;
				
				case 268:
					*uParam2 = 11862;
					break;
				
				case 269:
					*uParam2 = 11863;
					break;
				
				case 270:
					*uParam2 = 11864;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11888;
					break;
				
				case 272:
					*uParam2 = 11889;
					break;
				
				case 273:
					*uParam2 = 11890;
					break;
				
				case 274:
					*uParam2 = 11891;
					break;
				
				case 275:
					*uParam2 = 11892;
					break;
				
				case 276:
					*uParam2 = 11893;
					break;
				
				case 277:
					*uParam2 = 11894;
					break;
				
				case 278:
					*uParam2 = 11895;
					break;
				
				case 279:
					*uParam2 = 11896;
					break;
				
				case 280:
					*uParam2 = 11897;
					break;
				
				case 281:
					*uParam2 = 11898;
					break;
				
				case 282:
					*uParam2 = 11899;
					break;
				
				case 283:
					*uParam2 = 11989;
					break;
				
				case 284:
					*uParam2 = 11990;
					break;
				
				case 285:
					*uParam2 = 11991;
					break;
				
				case 286:
					*uParam2 = 11992;
					break;
				
				case 287:
					*uParam2 = 11993;
					break;
				
				case 288:
					*uParam2 = 11994;
					break;
				
				case 289:
					*uParam2 = 11995;
					break;
				
				case 290:
					*uParam2 = 11996;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 291:
					*uParam2 = 11997;
					break;
				
				case 292:
					*uParam2 = 11998;
					break;
				
				case 293:
					*uParam2 = 11999;
					break;
				
				case 294:
					*uParam2 = 12000;
					break;
				
				case 295:
					*uParam2 = 12001;
					break;
				
				case 296:
					*uParam2 = 12002;
					break;
				
				case 297:
					*uParam2 = 12003;
					break;
			}
			break;
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 14385;
}

int func_45(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_40(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672524.f_3)
				{
					return Global_2672524.f_2;
				}
				else if (Global_2657704[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_47()
{
	struct<3> Var0;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!iLocal_729)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Var0 = { -878.0269f, -359.4522f, 36.2491f };
			iVar3 = joaat("hei_prop_bh1_08_mp_gar2");
			Var4 = { -878.5042f, -358.2391f, 34.6839f };
			Var7 = { -858.5212f, -400.1935f, 53.7559f };
			if ((func_46(PLAYER::PLAYER_ID(), 1, 1) && func_49(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var4, Var7, 20f, false, true, 0))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Var0, 3f, iVar3, false))
				{
					iLocal_729 = 1;
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_730))
				{
					if (func_48(iVar3))
					{
						iLocal_730 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar3, Var0, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_730, 0f, 0f, 27f, 2, true);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_730, true);
						ENTITY::SET_ENTITY_COLLISION(iLocal_730, true, false);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_730, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_730, true);
						iLocal_729 = 1;
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
					}
				}
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_730))
		{
			OBJECT::DELETE_OBJECT(&iLocal_730);
		}
		iLocal_729 = 0;
	}
}

bool func_48(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_49(int iParam0)
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

void func_50()
{
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_58()) || !func_49(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (func_56(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@amb@casino@luxury_suite@suite_phone@", func_53(0, 1), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@amb@casino@luxury_suite@suite_phone@", func_53(1, 1), 3))
		{
			func_51();
		}
	}
}

void func_51()
{
	if (!Global_2672524.f_947.f_10)
	{
		Global_2672524.f_947.f_10 = 1;
		func_9(" ---> DISABLE_INTERACTION_MENU - CALLED ", 0);
		func_52();
	}
}

void func_52()
{
}

char* func_53(int iParam0, bool bParam1)
{
	char* sVar0;
	
	if (func_54(PLAYER::PLAYER_ID()))
	{
		if (bParam1)
		{
			switch (iParam0)
			{
				case 0:
					sVar0 = "m_pick_up_mp_m_freemode_01";
					break;
				
				case 1:
					sVar0 = "m_use_phone_mp_m_freemode_01";
					break;
				
				case 2:
					sVar0 = "m_put_down_mp_m_freemode_01";
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					sVar0 = "m_pick_up_vw_prop_casino_phone_01a";
					break;
				
				case 1:
					sVar0 = "m_use_phone_vw_prop_casino_phone_01a";
					break;
				
				case 2:
					sVar0 = "m_put_down_vw_prop_casino_phone_01a";
					break;
				}
		}
	}
	else if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "f_pick_up_mp_f_freemode_01";
				break;
			
			case 1:
				sVar0 = "f_use_phone_mp_f_freemode_01";
				break;
			
			case 2:
				sVar0 = "f_put_down_mp_f_freemode_01";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "f_pick_up_vw_prop_casino_phone_01a";
				break;
			
			case 1:
				sVar0 = "f_use_phone_vw_prop_casino_phone_01a";
				break;
			
			case 2:
				sVar0 = "f_put_down_vw_prop_casino_phone_01a";
				break;
			}
	}
	return sVar0;
}

int func_54(bool bParam0)
{
	if (!func_55(bParam0))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2657704[bParam0 /*463*/].f_240;
}

int func_55(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
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

int func_56(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_46(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[bParam0 /*463*/].f_321.f_10 != func_57())
			{
				return Global_2657704[bParam0 /*463*/].f_321.f_7 == 124;
			}
		}
	}
	return 0;
}

int func_57()
{
	return -1;
}

bool func_58()
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 != 0;
}

void func_59()
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	if (Global_2794162.f_6751.f_31 == -1)
	{
		return;
	}
	Var0 = { func_96(Global_2794162.f_6751.f_31) };
	fVar3 = func_95(Global_2794162.f_6751.f_31);
	Var4 = { func_94(fVar3) };
	Var7 = { Var0 + Var4 * Vector(0.25f, 0.25f, 0.25f) };
	Var10 = { Var7 + Vector(2f, 0f, 0f) + Var4 * Vector(2f, 2f, 2f) };
	if (!func_93(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), (fVar3 - 180f), 60f) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var7, Var10, 2f, false, true, 1))
	{
		return;
	}
	if ((!func_92() && !func_91(0)) && !func_90())
	{
		if ((((!func_88() || func_87()) || func_86()) || BitTest(Global_2794162.f_445.f_5, 0)) || func_85(PLAYER::PLAYER_ID(), 1))
		{
			func_60(func_85(PLAYER::PLAYER_ID(), 1));
		}
	}
}

void func_60(bool bParam0)
{
	if (((((bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && func_88()) && !func_87()) && !func_86()) && !BitTest(Global_2794162.f_445.f_5, 0))
	{
		func_72(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	func_71();
	func_61();
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(true);
	}
}

void func_61()
{
	if (Global_1574582.f_1 == 1)
	{
		func_62(7, 0, 1);
		Global_1574582.f_1 = 0;
		Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_9 = 0;
		func_9(" CLEANUP_TEMP_PASSIVE_MODE called by ", 0);
		func_9(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
		func_9(" - DONE", 0);
		func_52();
	}
}

void func_62(int iParam0, int iParam1, bool bParam2)
{
	if (func_70())
	{
		if (iParam1 == 1)
		{
			if (Global_2794162.f_4499 == -1)
			{
				Global_2794162.f_4499 = Global_262145.f_27370;
			}
			func_69(&(Global_2794162.f_4497), 0, 0);
			func_9(" DISABLE_MP_PASSIVE_MODE - COOLDOWN STARTED", 0);
			func_52();
			if (bParam2)
			{
				if (Global_2794162.f_4502 == -1)
				{
					Global_2794162.f_4502 = Global_262145.f_27371;
				}
				func_69(&(Global_2794162.f_4500), 0, 0);
				func_9(" DISABLE_MP_PASSIVE_MODE - DISABLE DELAY STARTED", 0);
				func_52();
			}
			else
			{
				Global_1574582 = 0;
				Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8 = 0;
				func_68(1);
				func_9(" DISABLE_MP_PASSIVE_MODE - DISABLE DELAY **NOT** STARTED", 0);
				func_52();
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8 = 0;
			func_68(1);
			func_9(" DISABLE_MP_PASSIVE_MODE called by ", 0);
			func_9(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
			func_9(" - DONE", 0);
			func_52();
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_67()) && !func_63(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_63(bool bParam0)
{
	if (func_64(bParam0, 1, 0))
	{
		if (Global_1853988[bParam0 /*867*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_65(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853988[iParam0 /*867*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_65(int iParam0)
{
	return func_66(iParam0);
}

var func_66(int iParam0)
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

bool func_67()
{
	return Global_2683883.f_841;
}

void func_68(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_70())
		{
			if (func_46(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
				func_9(" SET_PLAYER_DEFAULT_FRIENDLY_FIRE_OPTION - SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), PCF_DisableMelee, FALSE)", 0);
				func_52();
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
					func_9(" SET_PLAYER_DEFAULT_FRIENDLY_FIRE_OPTION - PASSIVE MODE - SET_LOCAL_PLAYER_AS_GHOST = FALSE", 0);
					func_52();
				}
				else
				{
					func_9(" SET_PLAYER_DEFAULT_FRIENDLY_FIRE_OPTION - PASSIVE MODE - BNot clear ghosting as bClearGhosting not set", 0);
					func_52();
				}
			}
			func_9(" SET_PLAYER_DEFAULT_FRIENDLY_FIRE_OPTION - PASSIVE MODE OFF - FRIENDLY FIRE = TRUE", 0);
			func_52();
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
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
					func_9(" SET_PLAYER_DEFAULT_FRIENDLY_FIRE_OPTION - PASSIVE MODE - SET_LOCAL_PLAYER_AS_GHOST = TRUE", 0);
					func_52();
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
			func_9(" SET_PLAYER_DEFAULT_FRIENDLY_FIRE_OPTION - PASSIVE MODE ON - FRIENDLY FIRE = FALSE", 0);
			func_52();
		}
	}
}

void func_69(var uParam0, bool bParam1, bool bParam2)
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

bool func_70()
{
	return Global_1574582;
}

void func_71()
{
	if (Global_2672524.f_947.f_10)
	{
		Global_2672524.f_947.f_10 = 0;
		func_9(" ---> ENABLE_INTERACTION_MENU - CALLED ", 0);
		func_52();
	}
}

void func_72(bool bParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_84())
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
		func_9("NET_SET_PLAYER_CONTROL - called while network game not in progress, using native command instead", 0);
		func_52();
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(bParam0, bParam1, iVar0);
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
		if (!func_88())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				func_9(" NET_SET_PLAYER_CONTROL - trying to turn on player control while skyswoop is not at ground. ignoring.", 0);
				func_52();
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				func_9(" NET_SET_PLAYER_CONTROL - trying to unfreeze player while skyswoop is not at ground. ignoring.", 0);
				func_52();
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				func_9(" NET_SET_PLAYER_CONTROL - trying to switch off invincibility while skyswoop is not at ground. ignoring.", 0);
				func_52();
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
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0) && (PLAYER::IS_PLAYER_PLAYING(bParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(bParam0), false))
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
				else if (bVar14 || ((!func_82(PLAYER::PLAYER_ID(), 0) && !func_81()) && !func_80(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657704[bParam0 /*463*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_77(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_76(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
				PLAYER::SET_PLAYER_INVINCIBLE(bParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(bParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_75();
					func_74();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
						func_9("NET_SET_PLAYER_CONTROL - switching player control back on while teleport is still active", 0);
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					func_9("NET_SET_PLAYER_CONTROL - switching player control back on while a load scene is still active", 0);
				}
				Global_2657704[bParam0 /*463*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635560.f_2781)
				{
					Global_2635560.f_2781 = 0;
				}
			}
			else
			{
				if (!func_76(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_73(Global_4718592.f_171044))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575038)
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

bool func_73(int iParam0)
{
	return iParam0 == 17;
}

void func_74()
{
	struct<3> Var0;
	
	func_9("[spawning] RESET_NET_WARP_TO_COORD_GLOBALS - called ", 0);
	func_52();
	Global_2672524.f_1024 = 0;
	Global_2672524.f_1025 = 0;
	Global_2672524.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672524.f_1031 = -1;
	Global_2672524.f_1032 = 0;
	Global_2635560.f_2792 = { Var0 };
}

void func_75()
{
	func_9("[spawning] RESET_WARPING_AND_SPAWNING_GLOBALS - called ", 0);
	func_52();
	Global_2635560.f_702 = 0;
	Global_2635560.f_2835 = 0;
	Global_2635560.f_515 = 0;
	Global_2635560.f_606 = 0;
	Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_217 = 0;
	Global_2635560.f_2790 = 0;
}

int func_76(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		func_9("IS_PED_IN_ANY_VEHICLE_OR_WAITING_TO_START_TASK_ENTER_VEHICLE - returning true 1", 0);
		func_52();
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			func_9("IS_PED_IN_ANY_VEHICLE_OR_WAITING_TO_START_TASK_ENTER_VEHICLE - returning true 2", 0);
			func_52();
			return 1;
		}
	}
	func_9("IS_PED_IN_ANY_VEHICLE_OR_WAITING_TO_START_TASK_ENTER_VEHICLE - returning FALSE", 0);
	func_52();
	return 0;
}

void func_77(bool bParam0, int iParam1, int iParam2)
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
				func_79();
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
		if (func_82(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_78(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_78(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_79()
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

int func_80(bool bParam0)
{
	if (func_82(bParam0, 0))
	{
		return 1;
	}
	if (func_81())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657704[bParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_81()
{
	return BitTest(Global_2621446, 3);
}

bool func_82(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_55(bParam0))
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_83(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853988[bParam0 /*867*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_83(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_11();
	}
	if (Global_1575043[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_84()
{
	if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2) && !Global_2684820.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_85(bool bParam0, int iParam1)
{
	if (Global_1895156[bParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[bParam0 /*609*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_86()
{
	return BitTest(Global_1950844, 6);
}

bool func_87()
{
	return Global_1575063;
}

int func_88()
{
	if (func_89() == 0)
	{
		return 1;
	}
	return 0;
}

int func_89()
{
	return Global_1574632.f_18;
}

bool func_90()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

int func_91(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20500.f_1 > 3)
		{
			if (BitTest(Global_8370, 14))
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
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_92()
{
	if (Global_2672524.f_947.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_93(float fParam0, float fParam1, float fParam2)
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

Vector3 func_94(float fParam0)
{
	return -SYSTEM::SIN(fParam0), SYSTEM::COS(fParam0), 0f;
}

float func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246.399f;
		
		case 1:
			return 223.799f;
		
		case 2:
			return 299.3986f;
		
		case 3:
			return 292.799f;
		
		case 4:
			return 319.197f;
		
		case 5:
			return 144.797f;
		
		case 6:
			return 355.396f;
		
		case 7:
			return 261.996f;
		
		case 8:
			return 299.7947f;
		
		case 9:
			return 89.795f;
		
		case 10:
			return 339.395f;
		
		case 11:
			return 339.395f;
		
		case 12:
			return 12.594f;
		
		case 13:
			return 12.594f;
		
		case 14:
			return 177.992f;
		
		case 15:
			return 49.192f;
		
		case 16:
			return 121.79f;
		
		case 17:
			return 65.79f;
		
		case 18:
			return 320.79f;
		
		case 19:
			return 9.589f;
		
		case 20:
			return 51.5888f;
		
		case 21:
			return 76.389f;
		
		case 22:
			return 242.789f;
		
		case 23:
			return 235.988f;
		
		case 24:
			return 271.588f;
		
		case 25:
			return 163.3863f;
		
		case 26:
			return 302.787f;
		
		case 27:
			return 19f;
		
		case 28:
			return 89.599f;
		
		case 29:
			return 87.998f;
		
		case 30:
			return 225.398f;
		
		case 31:
			return 89.998f;
		
		case 32:
			return 236.5999f;
		
		case 33:
			return 357.399f;
		
		case 34:
			return 1.1978f;
		
		case 35:
			return 317.198f;
		
		case 36:
			return 269.598f;
		
		case 37:
			return 176.3967f;
		
		case 38:
			return 184.997f;
		
		case 39:
			return 121.797f;
		
		case 40:
			return 107.5998f;
		
		case 41:
			return 160.2f;
		
		case 42:
			return 86.3262f;
		
		case 43:
			return 89.599f;
		
		case 44:
			return 128.999f;
		
		case 45:
			return 76.399f;
		
		case 46:
			return 153.798f;
		
		case 47:
			return 174.9978f;
		
		case 48:
			return 248.597f;
		
		case 49:
			return 83.5969f;
		
		default:
	}
	return 0f;
}

Vector3 func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 550.8953f, -1774.517f, 28.3121f;
		
		case 1:
			return -154.924f, 6434.428f, 30.916f;
		
		case 2:
			return 400.9768f, 2635.369f, 43.5045f;
		
		case 3:
			return 1533.846f, 3796.837f, 33.456f;
		
		case 4:
			return -1666.642f, -1080.02f, 12.1537f;
		
		case 5:
			return -1560.61f, -413.3221f, 37.1001f;
		
		case 6:
			return 819.2939f, -2988.856f, 5.0209f;
		
		case 7:
			return 1001.701f, -2162.448f, 29.567f;
		
		case 8:
			return 1388.968f, -1506.082f, 57.0407f;
		
		case 9:
			return -3054.574f, 556.711f, 0.661f;
		
		case 10:
			return -72.8903f, 80.717f, 70.6161f;
		
		case 11:
			return 198.6676f, -167.0663f, 55.3187f;
		
		case 12:
			return 814.636f, -280.109f, 65.463f;
		
		case 13:
			return -237.004f, -256.513f, 38.122f;
		
		case 14:
			return -493.654f, -720.734f, 22.921f;
		
		case 15:
			return 156.1586f, 6656.525f, 30.5882f;
		
		case 16:
			return 1986.313f, 3786.75f, 31.2791f;
		
		case 17:
			return -685.5629f, 5762.871f, 16.511f;
		
		case 18:
			return 1707.703f, 4924.311f, 41.078f;
		
		case 19:
			return 1195.305f, 2630.469f, 36.81f;
		
		case 20:
			return 167.0163f, 2228.922f, 89.7867f;
		
		case 21:
			return 2724.008f, 1483.066f, 23.5007f;
		
		case 22:
			return 1594.933f, 6452.817f, 24.3172f;
		
		case 23:
			return -2177.397f, 4275.945f, 48.12f;
		
		case 24:
			return -2521.249f, 2311.794f, 32.216f;
		
		case 25:
			return -3162.873f, 1115.642f, 19.8526f;
		
		case 26:
			return -1145.026f, -2048.466f, 12.218f;
		
		case 27:
			return -1304.321f, -1318.848f, 3.88f;
		
		case 28:
			return -946.727f, 322.081f, 70.357f;
		
		case 29:
			return -895.112f, -776.624f, 14.91f;
		
		case 30:
			return -250.614f, -1527.617f, 30.561f;
		
		case 31:
			return -601.639f, -1026.49f, 21.55f;
		
		case 32:
			return 2712.987f, 4324.116f, 44.8521f;
		
		case 33:
			return 726.772f, 4169.101f, 39.709f;
		
		case 34:
			return 178.3272f, 3086.26f, 42.0742f;
		
		case 35:
			return 2351.592f, 2524.249f, 46.694f;
		
		case 36:
			return 388.9941f, 799.6882f, 186.6764f;
		
		case 37:
			return 2587.982f, 433.6803f, 107.6139f;
		
		case 38:
			return 830.2875f, -1052.775f, 27.6666f;
		
		case 39:
			return -759.662f, -208.396f, 36.271f;
		
		case 40:
			return -43.7171f, -2015.22f, 17.017f;
		
		case 41:
			return 124.02f, -1039.884f, 28.213f;
		
		case 42:
			return 479.0473f, -597.5507f, 27.4996f;
		
		case 43:
			return 959.67f, 3619.036f, 31.668f;
		
		case 44:
			return 2375.899f, 3162.995f, 47.2087f;
		
		case 45:
			return -1505.687f, 1526.558f, 114.257f;
		
		case 46:
			return 645.737f, 242.173f, 101.153f;
		
		case 47:
			return 1173.138f, -388.2896f, 70.5896f;
		
		case 48:
			return -1801.85f, 172.49f, 67.771f;
		
		case 49:
			return 3729.257f, 4524.872f, 21.4755f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_97()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("ob_mp_shower_med")) > 0)
	{
		if (func_98())
		{
			if (!iLocal_757)
			{
				iLocal_757 = 1;
				Global_2756105.f_11 = 1;
			}
		}
	}
	else if (iLocal_757)
	{
		iLocal_757 = 0;
	}
}

int func_98()
{
	if (func_100() || func_99())
	{
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			return 1;
		}
	}
	return 0;
}

var func_99()
{
	return BitTest(Global_2684820.f_1.f_2810, 4);
}

var func_100()
{
	return BitTest(Global_2683883.f_2, 11);
}

void func_101()
{
	if (func_104())
	{
		if (!iLocal_756)
		{
			if (!func_103())
			{
				if (func_102())
				{
					NETWORK::NETWORK_SUPPRESS_INVITE(true);
					iLocal_756 = 1;
				}
			}
		}
	}
	else if (iLocal_756)
	{
		if (!func_103())
		{
			NETWORK::NETWORK_SUPPRESS_INVITE(false);
		}
		iLocal_756 = 0;
	}
}

int func_102()
{
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Global_1574632.f_18 != 0) || Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 != 0) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_103()
{
	return BitTest(Global_1950844.f_11, 0);
}

bool func_104()
{
	return Global_2694613;
}

void func_105()
{
	if ((!func_107(PLAYER::PLAYER_ID()) && !func_106(PLAYER::PLAYER_ID())) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_bunker")) <= 0)
	{
		if (Global_1853824 != func_57())
		{
			Global_1853824 = func_57();
		}
	}
}

int func_106(bool bParam0)
{
	if (bParam0 != func_57() && func_46(bParam0, 1, 1))
	{
		return BitTest(Global_2657704[bParam0 /*463*/].f_321, 3);
	}
	return 0;
}

int func_107(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_46(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_108(Global_2657704[bParam0 /*463*/].f_321.f_7) == 4;
			}
		}
	}
	return 0;
}

int func_108(int iParam0)
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
	}
	return -1;
}

void func_109()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_706)
	{
		Global_44322 = 1;
		if (!Global_100885.f_1579)
		{
			iLocal_707 = 0;
			Global_100885.f_1579 = 1;
		}
	}
	if (func_30(&uLocal_709))
	{
		if (!func_112(&uLocal_709, 500, 1))
		{
			return;
		}
		else
		{
			func_27(&uLocal_709);
			iLocal_706 = 0;
			if (!iLocal_707)
			{
				Global_100885.f_1579 = 0;
			}
		}
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((func_49(iVar0) && PED::IS_PED_IN_ANY_VEHICLE(iVar0, true)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("carmod_shop")) > 0)
	{
		iVar1 = -1;
		iVar1 = func_111("CMOD_TRIG");
		if (iVar1 > -1 && iVar1 < 6)
		{
			iLocal_708 = 2;
		}
		if (iLocal_708 >= 0)
		{
			if (!iLocal_706)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 75) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 75))
				{
					iLocal_706 = 1;
					if (!func_30(&uLocal_709))
					{
						func_29(&uLocal_709, 1, 0);
					}
					if (func_110(iVar1))
					{
						HUD::CLEAR_HELP(true);
					}
					if (Global_100885.f_1579)
					{
						iLocal_707 = 1;
					}
					else
					{
						iLocal_707 = 0;
					}
					Global_100885.f_1579 = 1;
					Global_44322 = 1;
				}
			}
			if (iLocal_708 >= 0)
			{
				iLocal_708 = (iLocal_708 - 1);
			}
		}
	}
}

bool func_110(int iParam0)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_44123[iParam0 /*32*/].f_6)
	{
		return 0;
	}
	bVar0 = false;
	if (!Global_44123[iParam0 /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44123[iParam0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44318);
		bVar0 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44123[iParam0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44318);
		if (Global_44123[iParam0 /*32*/].f_30)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_44123[iParam0 /*32*/].f_13));
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_44123[iParam0 /*32*/].f_13));
		}
		bVar0 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	return bVar0;
}

int func_111(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_44123[iVar0 /*32*/].f_8)) && MISC::ARE_STRINGS_EQUAL(&(Global_44123[iVar0 /*32*/].f_8), sParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_112(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_29(uParam0, bParam2, 0);
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

void func_113()
{
	if (((func_116(PLAYER::PLAYER_ID()) && !func_106(PLAYER::PLAYER_ID())) && !BitTest(Global_1950844.f_11, 14)) && !func_114())
	{
		Global_1950844.f_514 = -1;
		Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_7 = -1;
	}
}

bool func_114()
{
	struct<4> Var0;
	bool bVar6;
	struct<3> Var7;
	
	Var0 = { 480f, -2620f, -47f };
	Var0.f_3 = { 490f, -2630f, -53f };
	bVar6 = ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var0.f_3, false, true, 0);
	if (!bVar6)
	{
		Var7 = { func_115(PLAYER::PLAYER_ID()) };
	}
	return bVar6;
}

Vector3 func_115(bool bParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_116(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_46(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[bParam0 /*463*/].f_321.f_10 != func_57())
			{
				return func_108(Global_2657704[bParam0 /*463*/].f_321.f_7) == 25;
			}
		}
	}
	return 0;
}

void func_117()
{
	if (((func_119(1) || func_119(2)) || func_119(0)) || func_119(3))
	{
		if (Global_2635560.f_45.f_320 || func_118(16))
		{
			func_69(&uLocal_753, 1, 0);
		}
	}
	else
	{
		func_27(&uLocal_753);
	}
	if (func_30(&uLocal_753))
	{
		if (!func_112(&uLocal_753, 3000, 1))
		{
			Global_44322 = 1;
			Global_44323 = 1;
		}
		else
		{
			func_27(&uLocal_753);
		}
	}
}

var func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_1574935[iVar0], iVar1);
}

int func_119(int iParam0)
{
	int iVar0;
	
	if (func_125())
	{
		iVar0 = 0;
		while (iVar0 < 61)
		{
			if (func_124(iVar0) == iParam0)
			{
				if (func_120(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_120(int iParam0)
{
	return func_121(iParam0, 5, 1);
}

int func_121(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100885.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_123() == 0)
		{
			return BitTest(func_45(func_122(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113810.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_122(int iParam0)
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
			return 12514;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		case 58:
			return 11433;
			break;
		
		case 59:
			return 11844;
			break;
		
		case 60:
			return 11901;
			break;
		
		default:
			break;
	}
	return 14385;
}

int func_123()
{
	return Global_32283;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

bool func_125()
{
	return Global_100885.f_393 > 0;
}

void func_126()
{
	if (func_91(0))
	{
		if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || NETWORK::NETWORK_SESSION_IS_AWAITING_INVITE_RESPONSE())
		{
			if (SCRIPT::DOES_SCRIPT_EXIST("appMPJobListNEW") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpjoblistnew")) > 0)
			{
				func_130(0);
			}
		}
	}
	if (MISC::IS_SCE_PLATFORM())
	{
		switch (iLocal_749)
		{
			case 0:
				if (func_129())
				{
					iLocal_750 = PAD::GET_LOCAL_PLAYER_AIM_STATE();
					iLocal_749 = 1;
					func_27(&uLocal_751);
				}
				break;
			
			case 1:
				if (!func_127())
				{
					iLocal_749 = 0;
					func_27(&uLocal_751);
				}
				if (iLocal_750 != PAD::GET_LOCAL_PLAYER_AIM_STATE())
				{
					if (func_129())
					{
						if (func_112(&uLocal_751, 2500, 1))
						{
							PLAYER::SET_PLAYER_TARGETING_MODE(iLocal_750);
						}
					}
					else
					{
						func_69(&uLocal_751, 1, 0);
					}
				}
				else if (func_30(&uLocal_751))
				{
					func_27(&uLocal_751);
				}
				break;
			}
	}
}

int func_127()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_128()) > 0 && Global_1574666 == 2)
	{
		return 1;
	}
	return 0;
}

int func_128()
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_129()
{
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_88())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_58())
	{
		return 0;
	}
	if (!func_127())
	{
		return 0;
	}
	if (NETWORK::NETWORK_SESSION_IS_AWAITING_INVITE_RESPONSE())
	{
		return 0;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	return 1;
}

void func_130(int iParam0)
{
	if (func_134())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_133())
		{
			func_132(1, 1);
		}
		else
		{
			func_132(0, 0);
		}
	}
	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8371, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21845 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 30);
	}
	if (!func_131())
	{
		Global_20500.f_1 = 3;
	}
}

int func_131()
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_132(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_91(0))
		{
			Global_20704 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20437);
			}
			Global_20428 = { Global_20446[Global_20445 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
	else if (Global_20704 == 1)
	{
		Global_20704 = 0;
		Global_20428 = { Global_20453[Global_20445 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20437);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
}

bool func_133()
{
	return BitTest(Global_1963795, 5);
}

bool func_134()
{
	return BitTest(Global_1963795, 19);
}

void func_135()
{
	int iVar0;
	
	if (!iLocal_748)
	{
		if (func_163(PLAYER::PLAYER_ID()) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			if (func_162(iVar0, 1) || func_161(iVar0, 1))
			{
				if (((((VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar0) || func_160(PLAYER::PLAYER_ID())) || VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("oppressor2"))) && PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false)) && !func_159(PLAYER::PLAYER_ID())) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
				{
					if (func_160(PLAYER::PLAYER_ID()))
					{
						iLocal_748 = 1;
					}
				}
			}
		}
	}
	else if (!func_163(PLAYER::PLAYER_ID()) || !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_748 = 0;
	}
	if (iLocal_748)
	{
		func_136();
		iLocal_748 = 0;
	}
}

void func_136()
{
	int iVar0;
	
	if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && Global_1950837 != 7) && !func_86()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (func_158(PLAYER::PLAYER_PED_ID(), 0) == -1)
		{
			func_150(iVar0, 1);
			VEHICLE::SET_VEHICLE_FIXED(iVar0);
			ENTITY::SET_ENTITY_HEALTH(iVar0, 1000, 0);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar0, 1000f);
			VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar0, 1000f);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
			ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
			VEHICLE::SET_VEHICLE_LIGHTS(iVar0, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, false);
			VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, false);
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar0, false);
			VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, false);
			VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar0, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, true);
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
			VEHICLE::SET_CAN_USE_HYDRAULICS(iVar0, 1);
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar0, false);
			if (func_162(iVar0, 1) && func_148(iVar0) == PLAYER::PLAYER_ID())
			{
				Global_2794162.f_288 = -1;
			}
			else if (func_161(iVar0, 1))
			{
				func_137(&iVar0);
			}
		}
	}
}

void func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 13381;
	iVar1 = func_45(iVar0, -1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 1);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
	{
		func_146(iVar1);
	}
	else
	{
		func_138(iParam0, iVar1, -1, PLAYER::PLAYER_ID(), 0);
	}
	Global_2794162.f_295 = iVar1;
}

void func_138(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		switch (iParam1)
		{
			case 4:
			case 8:
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, bParam3, false);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*uParam0, bParam4);
				iVar1 = 0;
				while (iVar1 < 32)
				{
					bVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
					if (func_46(bVar0, 0, 1) && bVar0 != bParam3)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), *uParam0, false))
						{
							if (iParam2 == -1)
							{
								func_144(func_145(bVar0), 0, 0f, 0, 0, 1, bParam3);
							}
							else
							{
								func_144(func_145(bVar0), 0, 0f, 0, 0, 0, bParam3);
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 1:
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, bParam3, false);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*uParam0, bParam4);
				iVar1 = 0;
				while (iVar1 < 32)
				{
					bVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
					if (func_46(bVar0, 0, 0) && bVar0 != bParam3)
					{
						if (func_142(bParam3, bVar0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, bVar0, false);
						}
						else if (func_46(bVar0, 0, 1))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), *uParam0, false))
							{
								func_144(func_145(bVar0), 0, 0f, 0, 0, 1, bParam3);
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 2:
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, bParam3, false);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*uParam0, bParam4);
				iVar1 = 0;
				while (iVar1 < 32)
				{
					bVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
					if (func_46(bVar0, 0, 0) && bVar0 != bParam3)
					{
						if (func_141(bParam3, bVar0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, bVar0, false);
						}
						else if (func_46(bVar0, 0, 1))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), *uParam0, false))
							{
								func_144(func_145(bVar0), 0, 0f, 0, 0, 1, bParam3);
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 3:
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, bParam3, false);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*uParam0, bParam4);
				iVar1 = 0;
				while (iVar1 < 32)
				{
					bVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
					if (func_46(bVar0, 0, 0) && bVar0 != bParam3)
					{
						if (func_142(bParam3, bVar0) || func_141(bParam3, bVar0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, bVar0, false);
						}
						else if (func_46(bVar0, 0, 1))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), *uParam0, false))
							{
								func_144(func_145(bVar0), 0, 0f, 0, 0, 1, bParam3);
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 0:
			case 9:
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, false);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*uParam0, bParam4);
				break;
			
			case 5:
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, false);
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, PLAYER::GET_PLAYER_PED(bParam3), 0);
				break;
			
			case 6:
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, bParam3, false);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*uParam0, bParam4);
				iVar1 = 0;
				while (iVar1 < 32)
				{
					bVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
					if (func_46(bVar0, 0, 0) && bVar0 != bParam3)
					{
						if (func_139(bParam3, bVar0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, bVar0, false);
						}
						else if (func_46(bVar0, 0, 1))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), *uParam0, false))
							{
								func_144(func_145(bVar0), 0, 0f, 0, 0, 1, bParam3);
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 7:
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(*uParam0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(*uParam0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, bParam3, false);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(*uParam0, bParam4);
				iVar1 = 0;
				while (iVar1 < 32)
				{
					bVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
					if (func_46(bVar0, 0, 0) && bVar0 != bParam3)
					{
						if ((func_142(bParam3, bVar0) || func_141(bParam3, bVar0)) || func_139(bParam3, bVar0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(*uParam0, bVar0, false);
						}
						else if (func_46(bVar0, 0, 1))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), *uParam0, false))
							{
								func_144(func_145(bVar0), 0, 0f, 0, 0, 1, bParam3);
							}
						}
					}
					iVar1++;
				}
				break;
			}
	}
}

int func_139(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = func_140(bParam0);
	if (func_55(bVar0))
	{
		if (bVar0 == func_140(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_140(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1895156[iParam0 /*609*/].f_10;
	}
	return func_57();
}

int func_141(bool bParam0, bool bParam1)
{
	if (BitTest(Global_2657704[bParam0 /*463*/].f_390, bParam1) || BitTest(Global_2657704[bParam1 /*463*/].f_390, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_142(bool bParam0, bool bParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2764376 = { func_143(bParam0) };
		Global_2764389 = { func_143(bParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764376))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764389))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764306, 35, &Global_2764376);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764341, 35, &Global_2764389);
				if (Global_2764306 == Global_2764341)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

struct<13> func_143(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_144(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<9> Var0;
	
	Var0.f_0 = -503325966;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_7 = bParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = MISC::GET_FRAME_COUNT();
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 9, iParam0);
	}
	else
	{
		func_9("BROADCAST_LEAVE_VEHICLE - playerflags = 0 so not broadcasting", 0);
		func_52();
	}
}

int func_145(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

void func_146(int iParam0)
{
	struct<3> Var0;
	
	Var0.f_0 = 1433450626;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, func_147(1, 1));
}

var func_147(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (func_46(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
				else if (!func_82(bVar2, 0))
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_148(int iParam0)
{
	int iVar0;
	
	if (!func_162(iParam0, 1))
	{
		return func_57();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return func_149(iVar0, 0, 1, 0);
}

bool func_149(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_46(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return bVar0;
				}
			}
			bVar1++;
		}
	}
	else if (func_46(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return bParam3;
		}
	}
	return func_57();
}

void func_150(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_157(iParam0) || iParam1)
	{
		if (!Global_1836600 || (Global_1836610 && !func_156()))
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("ruiner2"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_19855);
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 0, Global_262145.f_19856);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("blazer5"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 0, Global_262145.f_19857);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("apc"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_21897);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("dune3"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_21898);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("oppressor"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_21899);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tampa3"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 0, Global_262145.f_21900);
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_21901);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("trailersmall2"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_21902);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("chernobog"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 0, Global_262145.f_24166);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("thruster"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_24167);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("deluxo"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_24168);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("stromberg"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_24169);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("stromberg"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 2, Global_262145.f_24170);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("barrage"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 4, Global_262145.f_24171);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("khanjali"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 3, Global_262145.f_24172);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("khanjali"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 4, Global_262145.f_24172);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("pounder2"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_24425);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("pounder2"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 2, Global_262145.f_24426);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mule4"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_24427);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("oppressor2"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 2, Global_262145.f_24880);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("strikeforce"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_24429);
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("scramjet"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_24430);
			}
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("monster3") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("monster4")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("monster5"))
				{
					VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 0, Global_262145.f_26110);
				}
				if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("imperator") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("imperator2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("imperator3"))
				{
					VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_26111);
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("issi4") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("issi6"))
				{
					VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_26112);
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("issi5"))
				{
					VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 2, Global_262145.f_26112);
				}
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("vigilante"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, Global_262145.f_22139);
			}
			if (func_155(iParam0))
			{
				switch (VEHICLE::GET_VEHICLE_MOD(iParam0, 9))
				{
					case 0:
						if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("volatol")))
						{
							VEHICLE::SET_VEHICLE_BOMB_AMMO(iParam0, Global_262145.f_24173);
						}
						else
						{
							VEHICLE::SET_VEHICLE_BOMB_AMMO(iParam0, Global_262145.f_22135);
						}
						break;
					
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("volatol")))
						{
							VEHICLE::SET_VEHICLE_BOMB_AMMO(iParam0, Global_262145.f_24173);
						}
						else
						{
							VEHICLE::SET_VEHICLE_BOMB_AMMO(iParam0, Global_262145.f_22136);
						}
						break;
					
					case 2:
						if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("volatol")))
						{
							VEHICLE::SET_VEHICLE_BOMB_AMMO(iParam0, Global_262145.f_24173);
						}
						else
						{
							VEHICLE::SET_VEHICLE_BOMB_AMMO(iParam0, Global_262145.f_22137);
						}
						break;
					
					case 3:
						if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("volatol")))
						{
							VEHICLE::SET_VEHICLE_BOMB_AMMO(iParam0, Global_262145.f_24173);
						}
						else
						{
							VEHICLE::SET_VEHICLE_BOMB_AMMO(iParam0, Global_262145.f_22138);
						}
						break;
					}
			}
			if (func_151(iParam0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("oppressor2")))
				{
					if (VEHICLE::GET_VEHICLE_MOD(iParam0, 6) == 1)
					{
						VEHICLE::SET_VEHICLE_COUNTERMEASURE_AMMO(iParam0, Global_262145.f_22144);
					}
					else if (VEHICLE::GET_VEHICLE_MOD(iParam0, 6) == 0)
					{
						VEHICLE::SET_VEHICLE_COUNTERMEASURE_AMMO(iParam0, Global_262145.f_22145);
					}
				}
				else if (VEHICLE::GET_VEHICLE_MOD(iParam0, 1) == 1)
				{
					VEHICLE::SET_VEHICLE_COUNTERMEASURE_AMMO(iParam0, Global_262145.f_22140);
				}
				else if (VEHICLE::GET_VEHICLE_MOD(iParam0, 1) == 0)
				{
					VEHICLE::SET_VEHICLE_COUNTERMEASURE_AMMO(iParam0, Global_262145.f_22141);
				}
			}
		}
		if (!Global_1836600)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("voltic2"))
			{
				VEHICLE::SET_SCRIPT_ROCKET_BOOST_RECHARGE_TIME(iParam0, Global_262145.f_19854);
				VEHICLE::SET_VEHICLE_KERS_ALLOWED(iParam0, true);
			}
		}
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("boxville5"))
		{
			VEHICLE::VEHICLE_SET_RAMP_AND_RAMMING_CARS_TAKE_DAMAGE(iParam0, false);
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			}
			MISC::SET_BIT(&iVar0, 24);
			DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
		}
	}
	else if (Global_1836600 && !Global_1836610)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("ruiner2"))
		{
			if (VEHICLE::GET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 0) != 0)
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 0, 0);
			}
			if (VEHICLE::GET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1) != 0)
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, 0);
			}
			if (!VEHICLE::IS_VEHICLE_WEAPON_DISABLED(joaat("vehicle_weapon_ruiner_bullet"), iParam0, PLAYER::PLAYER_PED_ID()))
			{
				VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("vehicle_weapon_ruiner_bullet"), iParam0, PLAYER::PLAYER_PED_ID());
			}
			if (!VEHICLE::IS_VEHICLE_WEAPON_DISABLED(joaat("vehicle_weapon_ruiner_rocket"), iParam0, PLAYER::PLAYER_PED_ID()))
			{
				VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("vehicle_weapon_ruiner_rocket"), iParam0, PLAYER::PLAYER_PED_ID());
			}
		}
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("blazer5"))
		{
			if (VEHICLE::GET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 0) != 0)
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 0, 0);
			}
			if (!VEHICLE::IS_VEHICLE_WEAPON_DISABLED(joaat("vehicle_weapon_cannon_blazer"), iParam0, PLAYER::PLAYER_PED_ID()))
			{
				VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("vehicle_weapon_cannon_blazer"), iParam0, PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

int func_151(int iParam0)
{
	if (func_154(iParam0))
	{
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 1) == 1)
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("oppressor2")))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 6) == 1)
			{
				return 1;
			}
		}
	}
	if (func_153(iParam0))
	{
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 1) == 0)
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("oppressor2")))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 6) == 0)
			{
				return 1;
			}
		}
	}
	if (func_152(iParam0))
	{
		if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, 20))
		{
			return 1;
		}
	}
	return 0;
}

int func_152(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("cuban800"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("nokota"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("havok"):
		case joaat("alphaz1"):
		case joaat("microlight"):
		case joaat("howard"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("thruster"):
		case joaat("volatol"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
			return 1;
			break;
	}
	return 0;
}

int func_153(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("pyro"):
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("mogul"):
		case joaat("starling"):
		case joaat("nokota"):
		case joaat("hunter"):
		case joaat("molotok"):
		case joaat("bombushka"):
		case joaat("havok"):
		case joaat("alphaz1"):
		case joaat("microlight"):
		case joaat("howard"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("volatol"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
			return 1;
			break;
	}
	return 0;
}

int func_154(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("cuban800"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("nokota"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("havok"):
		case joaat("alphaz1"):
		case joaat("microlight"):
		case joaat("howard"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("volatol"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
			return 1;
			break;
	}
	return 0;
}

int func_155(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("cuban800"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("streamer216"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("alkonost"):
		case joaat("strikeforce"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_156()
{
	if ((BitTest(Global_4718592.f_28, 18) || Global_4718592.f_108230 == 18) || Global_4718592.f_108230 == 19)
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				if (BitTest(iVar0, 24))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_158(int iParam0, bool bParam1)
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

int func_159(bool bParam0)
{
	if (bParam0 != func_57() && func_46(bParam0, 1, 1))
	{
		return BitTest(Global_2657704[bParam0 /*463*/].f_321, 4);
	}
	return 0;
}

int func_160(bool bParam0)
{
	if (bParam0 != func_57())
	{
		return BitTest(Global_1853988[bParam0 /*867*/].f_267.f_308, 13);
	}
	return 0;
}

int func_161(int iParam0, bool bParam1)
{
	if (Global_78689)
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

int func_162(int iParam0, bool bParam1)
{
	if (Global_78689)
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

int func_163(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_164(bParam0) && Global_2657704[bParam0 /*463*/].f_321.f_10 == bParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_164(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_108(Global_2657704[iParam0 /*463*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

void func_165()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iLocal_747 = 0;
		return;
	}
	if (!func_17(Global_4718592.f_171044))
	{
		iLocal_747 = 0;
		return;
	}
	if (iLocal_747)
	{
		return;
	}
	bVar0 = PLAYER::PLAYER_ID();
	if (!func_55(bVar0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(bVar0);
	if (iVar1 != 0 && iVar1 != 1)
	{
		return;
	}
	iVar2 = (Global_1058071.f_94[0] + Global_1058071.f_94[1]);
	if (iVar2 <= Global_262145.f_7302)
	{
		Global_262145.f_7338 = 0;
	}
	else if (iVar2 <= Global_262145.f_7303)
	{
		Global_262145.f_7338 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_7338) / 2.5f));
	}
	else if (iVar2 <= Global_262145.f_7304)
	{
		Global_262145.f_7338 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_7338) / 1.25f));
	}
	else if (iVar2 <= Global_262145.f_7305)
	{
		Global_262145.f_7338 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_7338) / 0.83f));
	}
	else if (iVar2 <= Global_262145.f_7306)
	{
		Global_262145.f_7338 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_7338) / 0.5f));
	}
	else
	{
		Global_262145.f_7338 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_7338) / 0.25f));
	}
	iLocal_747 = 1;
}

void func_166()
{
	if (NETWORK::NETWORK_SESSION_IS_AWAITING_INVITE_RESPONSE())
	{
		func_69(&uLocal_744, 1, 0);
	}
	if (func_30(&uLocal_744))
	{
		if (!Global_4536666)
		{
			Global_4536666 = 1;
			iLocal_746 = 1;
		}
		if (func_112(&uLocal_744, 30000, 1))
		{
			if (iLocal_746)
			{
				Global_4536666 = 0;
			}
			iLocal_746 = 0;
			func_27(&uLocal_744);
		}
	}
}

void func_167()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_contact_requests")) > 0)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			Global_1950843 = 1;
		}
		if (!iLocal_743 && func_170(PLAYER::PLAYER_ID()))
		{
			if (!func_169())
			{
				func_168(1);
				iLocal_743 = 1;
			}
		}
	}
	else if (iLocal_743)
	{
		func_168(0);
		iLocal_743 = 0;
	}
}

void func_168(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1950844.f_2, 27))
		{
			MISC::SET_BIT(&(Global_1950844.f_2), 27);
		}
	}
	else if (BitTest(Global_1950844.f_2, 27))
	{
		MISC::CLEAR_BIT(&(Global_1950844.f_2), 27);
	}
}

bool func_169()
{
	return BitTest(Global_1950844.f_2, 27);
}

int func_170(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_46(bParam0, 1, 1))
		{
			return Global_2657704[bParam0 /*463*/].f_321.f_7 != -1;
		}
		else if ((Global_1575063 && bParam0 == PLAYER::PLAYER_ID()) && func_46(bParam0, 1, 0))
		{
			return Global_2657704[bParam0 /*463*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

void func_171()
{
	Global_1669211.f_324 = 1;
}

void func_172()
{
	bool bVar0;
	
	bVar0 = PLAYER::PLAYER_ID();
	if ((func_55(bVar0) && func_82(bVar0, 0)) && !NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bVar0))
	{
		if (Global_1669211.f_725)
		{
			Global_1669211.f_725 = 0;
		}
	}
	else if (!Global_1669211.f_725)
	{
		Global_1669211.f_725 = 1;
	}
}

void func_173()
{
	if (Global_1969138 && func_92())
	{
		func_175();
	}
	if (!bLocal_741 && Global_1969138)
	{
		if (!func_174())
		{
			func_51();
		}
		bLocal_741 = true;
	}
	else if (bLocal_741 && !Global_1969138)
	{
		if (func_174())
		{
			func_71();
		}
		bLocal_741 = false;
	}
	if (bLocal_741)
	{
		Global_44322 = 1;
	}
}

bool func_174()
{
	return Global_2672524.f_947.f_10;
}

void func_175()
{
	if (func_92())
	{
		Global_2672524.f_947.f_16 = 1;
		func_9(" ---> KILL_INTERACTION_MENU - CALLED ", 0);
		func_52();
	}
}

void func_176()
{
	if (func_179(Global_112834, 32))
	{
		if (!iLocal_740)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_740 = 1;
				func_177(&Global_112834, 4);
			}
		}
		else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			iLocal_740 = 0;
		}
	}
	else if (iLocal_740)
	{
		iLocal_740 = 0;
	}
}

void func_177(var uParam0, int iParam1)
{
	func_178(uParam0, iParam1);
}

void func_178(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_179(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_180()
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	
	if (!iLocal_738)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if ((func_190(iVar0, 1) && !func_189(iVar0, 1)) && !func_106(PLAYER::PLAYER_ID()))
			{
				iVar1 = func_188(iVar0, 1, 0);
				if (func_187(iVar1))
				{
					if (!func_186(PLAYER::PLAYER_ID()) && !func_185(PLAYER::PLAYER_ID()))
					{
						Var3 = { func_115(PLAYER::PLAYER_ID()) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(func_115(PLAYER::PLAYER_ID()), &fVar2, false, false);
						if (fVar2 > Var3.f_2 && MISC::ABSF((fVar2 - Var3.f_2)) > 50f)
						{
							iLocal_739 = func_184(Var3.f_1 < 0f, 1, 0);
							iLocal_738 = 1;
							CAM::DO_SCREEN_FADE_OUT(500);
						}
					}
				}
			}
		}
	}
	else if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (func_181(func_183(iLocal_739 == 1, -1167.329f, -3388.895f, 12.945f, -1892.772f, 3089.299f, 31.8103f), 140f, 0, 1, 0, 0, 1, 0, 1, 0, 0))
		{
			iLocal_738 = 0;
			iLocal_739 = -1;
			CAM::DO_SCREEN_FADE_IN(500);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
}

int func_181(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_23251.f_6 = 1;
	if (Global_2672524.f_1024 && Global_2672524.f_1032)
	{
		func_182(0, bParam9);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (Global_2672524.f_1024)
		{
			func_182(0, bParam9);
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
	if (!Global_2672524.f_1024 && !bParam11)
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
				Global_2672524.f_1024 = 0;
				Global_2672524.f_1025 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2672524.f_1026 || !Param0.f_1 == Global_2672524.f_1026.f_1) || !Param0.f_2 == Global_2672524.f_1026.f_2) || !fParam3 == Global_2672524.f_1029)
	{
		if (Global_2672524.f_1024 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2672524.f_1030) < 10000)
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2672524.f_1025 = 1;
		}
		else
		{
			Global_2672524.f_1025 = 0;
		}
		Global_2672524.f_1026 = { Param0 };
		Global_2672524.f_1029 = fParam3;
		Global_2672524.f_1024 = 0;
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
	if (!Global_2672524.f_1024 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
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
		if (Global_2672524.f_1031 > -1)
		{
			Global_2672524.f_1030 = NETWORK::GET_NETWORK_TIME();
			Global_2672524.f_1024 = 1;
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
				func_182(bParam6, bParam9);
				return 1;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam3, bParam4, bParam10, false);
			}
			Global_2672524.f_1030 = NETWORK::GET_NETWORK_TIME();
			Global_2672524.f_1024 = 1;
		}
	}
	if (Global_2672524.f_1024)
	{
		Global_23251.f_6 = 1;
		Global_2672524.f_1030 = NETWORK::GET_NETWORK_TIME();
		if (Global_2672524.f_1031 > -1)
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
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_2672524.f_1026) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_182(bParam6, bParam9);
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
						Global_2672524.f_1032 = 1;
						return 0;
					}
				}
				func_182(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

void func_182(bool bParam0, bool bParam1)
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
	func_74();
}

Vector3 func_183(bool bParam0, struct<3> Param1, struct<3> Param4)
{
	if (bParam0)
	{
		return Param1;
	}
	return Param4;
}

int func_184(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_185(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_46(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_108(Global_2657704[bParam0 /*463*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_186(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_46(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_108(Global_2657704[bParam0 /*463*/].f_321.f_7) == 7;
			}
		}
	}
	return 0;
}

int func_187(int iParam0)
{
	if (iParam0 != func_57())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_2, 4);
	}
	return 0;
}

int func_188(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_190(iParam0, 1))
	{
		return func_57();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Avenger");
		return func_149(iVar0, 0, bParam1, iParam2);
	}
	return func_57();
}

int func_189(int iParam0, bool bParam1)
{
	if (Global_78689)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Avenger"))
			{
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Avenger") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_190(int iParam0, bool bParam1)
{
	if (Global_78689)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Avenger"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_191()
{
	if (func_207(PLAYER::PLAYER_ID()))
	{
		if (((((BitTest(Global_1574589, 7) || BitTest(Global_1574589, 8)) || BitTest(Global_1574589, 4)) || BitTest(Global_1574589, 1)) || !func_192(PLAYER::PLAYER_ID())) || BitTest(Global_1950844.f_9, 5))
		{
			if (!BitTest(Global_1950844.f_11, 27))
			{
				MISC::SET_BIT(&(Global_1950844.f_11), 27);
				iLocal_512 = 1;
				Global_1669211.f_622 = 1;
			}
		}
		else if (iLocal_512)
		{
			MISC::CLEAR_BIT(&(Global_1950844.f_11), 27);
			iLocal_512 = 0;
			Global_1669211.f_622 = 0;
		}
	}
	else if (iLocal_512 || BitTest(Global_1950844.f_11, 27))
	{
		MISC::CLEAR_BIT(&(Global_1950844.f_11), 27);
		iLocal_512 = 0;
		Global_1669211.f_622 = 0;
	}
}

int func_192(bool bParam0)
{
	if (func_206(PLAYER::GET_PLAYER_PED(bParam0)))
	{
		return 0;
	}
	if (func_205(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_204(PLAYER::PLAYER_ID(), 6))
	{
		return 0;
	}
	if (func_195())
	{
		return 0;
	}
	if (NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 0;
	}
	if (func_90())
	{
		return 0;
	}
	if (Global_2794162.f_28.f_82)
	{
		return 0;
	}
	if ((Global_2794162.f_6898 - MISC::GET_GAME_TIMER()) >= (Global_262145.f_28616 - 30000) && Global_262145.f_28616 > 30000)
	{
		return 0;
	}
	if (func_98())
	{
		return 0;
	}
	if (Global_2635560.f_45.f_320 || func_194(15000))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_193())
		{
			return 0;
		}
	}
	if (Global_1575063)
	{
		return 0;
	}
	return 1;
}

bool func_193()
{
	return Global_1573860[0 /*4*/] > 0;
}

int func_194(int iParam0)
{
	if (Global_2635560.f_45.f_320 == 0 && Global_2635560.f_45.f_322 == 1)
	{
		return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2635560.f_45.f_321, NETWORK::GET_NETWORK_TIME_ACCURATE())) > iParam0;
	}
	return 0;
}

int func_195()
{
	if (((((((((func_203() || func_202()) || func_201()) || func_58()) || (func_200() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_198() && !func_197())) || Global_2625211) || Global_2625211.f_1 != 0) || Global_2625286 != 0) || (func_196() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_196()
{
	return Global_1057409;
}

bool func_197()
{
	return BitTest(Global_2683883.f_2, 27);
}

int func_198()
{
	if (func_100() || func_199())
	{
		return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_95 == 8;
	}
	return 0;
}

var func_199()
{
	return Global_2683883.f_735;
}

var func_200()
{
	return BitTest(Global_2683883, 5);
}

var func_201()
{
	return BitTest(Global_2683883, 2);
}

var func_202()
{
	return BitTest(Global_2683883, 20);
}

var func_203()
{
	return Global_2683883.f_698;
}

bool func_204(bool bParam0, int iParam1)
{
	return BitTest(Global_1895156[bParam0 /*609*/].f_10.f_6, iParam1);
}

int func_205(bool bParam0)
{
	if (Global_1895156[bParam0 /*609*/].f_10.f_26 != func_57())
	{
		return 1;
	}
	return 0;
}

int func_206(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 11, joaat("jugg_suit")))
	{
		return 1;
	}
	return 0;
}

int func_207(bool bParam0)
{
	if (bParam0 != func_57())
	{
		if (func_46(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_108(Global_2657704[bParam0 /*463*/].f_321.f_7) == 26;
			}
		}
	}
	return 0;
}

void func_208()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_735)
	{
		case 0:
			if (func_272())
			{
				if (func_271())
				{
					if (func_268() == 0)
					{
						iLocal_735 = 2;
					}
					else
					{
						iLocal_735 = 1;
					}
				}
			}
			break;
		
		case 1:
			iVar0 = func_267(PLAYER::PLAYER_ID());
			iVar1 = func_268();
			if (iVar1 > 3)
			{
				iVar1 = 3;
			}
			if (iVar0 > iVar1)
			{
				iLocal_735 = 2;
			}
			else
			{
				iLocal_736 = func_265();
				iLocal_735 = 3;
			}
			break;
		
		case 3:
			if (!func_271())
			{
				if (iLocal_736 == func_265())
				{
					iLocal_735 = 2;
				}
				else if (func_265() == func_262())
				{
					iLocal_735 = 2;
				}
				else
				{
					iLocal_737 = func_267(PLAYER::PLAYER_ID());
					if (iLocal_737 == 0)
					{
						iLocal_735 = 2;
					}
					else
					{
						iLocal_735 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_210(iLocal_737, &iLocal_734);
			if (iLocal_734 == 2)
			{
				iLocal_735 = 0;
				func_209();
			}
			else if (iLocal_734 == 3)
			{
				iLocal_735 = 0;
				func_209();
			}
			break;
		
		case 2:
			if (!func_271())
			{
				iLocal_735 = 0;
				func_209();
			}
			break;
	}
}

void func_209()
{
	iLocal_736 = 0;
	iLocal_737 = 0;
	iLocal_734 = 0;
}

void func_210(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 <= 0)
	{
		if (iParam0 == 0)
		{
		}
		*uParam1 = 3;
		return;
	}
	if (*uParam1 != 0 && *uParam1 != 1)
	{
		*uParam1 = 0;
	}
	iVar0 = func_267(PLAYER::PLAYER_ID());
	if (!func_261())
	{
		if (iVar0 >= iParam0)
		{
			iVar1 = (func_262() + iParam0);
			func_260(iVar1);
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293.f_3 = iVar1;
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				STATS::STAT_SET_OPEN_SAVETYPE_IN_JOB(10);
			}
			func_259(18090, 0, -1);
			*uParam1 = 2;
			func_258(142);
			func_254(-1833860512, 10, 0);
		}
		else
		{
			*uParam1 = 3;
		}
	}
	else if (iVar0 >= iParam0)
	{
		if (func_236(iParam0, uParam1))
		{
			if (*uParam1 == 2)
			{
				iVar2 = (func_262() + iParam0);
				func_260(iVar2);
				Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293.f_3 = iVar2;
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					STATS::STAT_SET_OPEN_SAVETYPE_IN_JOB(10);
				}
				*uParam1 = 2;
				func_258(142);
				func_254(-1833860512, 10, 0);
			}
			else if (*uParam1 == 3)
			{
				func_211();
				*uParam1 = 3;
			}
			func_259(18090, 0, -1);
		}
	}
	else
	{
		*uParam1 = 3;
	}
}

void func_211()
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
	
	iVar0 = func_45(6104, -1);
	iVar1 = func_235();
	iVar2 = 0;
	if (iVar1 > iVar0)
	{
		iVar3 = 0;
		while (iVar3 < 50)
		{
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar3 == func_233(func_234(iVar4), -1))
				{
					if (func_233(func_232(iVar3), -1) != 0)
					{
						func_259(func_232(iVar3), 0, -1);
						func_259(func_234(iVar3), 100, -1);
						Global_1963639[iVar3] = 0;
						iVar2++;
					}
				}
				iVar4++;
			}
			iVar3++;
		}
		iVar1 = (iVar1 - iVar2);
		if (iVar1 > iVar0)
		{
			iVar5 = (iVar1 - iVar0);
			iVar2 = 0;
			iVar3 = 0;
			while (iVar3 < 50)
			{
				if (func_233(func_232(iVar3), -1) != 0)
				{
					func_259(func_232(iVar3), 0, -1);
					func_259(func_234(iVar3), 100, -1);
					Global_1963639[iVar3] = 0;
					iVar2++;
					if (iVar2 == iVar5)
					{
					}
					else
					{
						iVar3++;
					}
					iVar1 = (iVar1 - iVar2);
					Jump @345; //curOff = 254
					if (iVar1 < iVar0)
					{
						iVar6 = func_233(18090, -1);
						iVar7 = (iVar0 - iVar1);
						iVar8 = func_231(iVar6);
						if (iVar6 == -1 || iVar6 == 8)
						{
							iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
						}
						iVar9 = 0;
						while (iVar9 < iVar7)
						{
							func_217(iVar8);
							iVar9++;
						}
						func_212();
					}
				}

void func_212()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (func_214(PLAYER::PLAYER_ID()))
	{
		iVar1 = Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_8;
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_MP_HANGAR", iVar1, 0) == PLAYER::PLAYER_ID())
		{
			Global_1963690 = 1;
			Global_1963638 = 0;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar2 = 0;
		while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
			{
				bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
				if (func_46(bVar3, 1, 1))
				{
					if (func_214(bVar3))
					{
						iVar4 = Global_2657704[bVar3 /*463*/].f_321.f_8;
						if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_MP_HANGAR", iVar4, 0) == bVar3)
						{
							if (Global_1963638 > 0)
							{
								if (!func_30(&Global_1963701))
								{
									func_213(bVar3, &Global_1963639);
									func_29(&Global_1963701, 0, 0);
									Global_1963638 = (Global_1963638 - 1);
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
		bVar0 = false;
	}
}

void func_213(bool bParam0, var uParam1)
{
	struct<3> Var0;
	int iVar53;
	
	Var0.f_2 = 50;
	Var0.f_0 = -1544003568;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar53 = 0;
	while (iVar53 < *uParam1)
	{
		Var0.f_2[iVar53] = (*uParam1)[iVar53];
		iVar53++;
	}
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 53, func_145(bParam0));
}

int func_214(bool bParam0)
{
	if (func_215())
	{
		if (bParam0 != func_57())
		{
			if (func_186(bParam0))
			{
				return Global_2657704[bParam0 /*463*/].f_321.f_10 == PLAYER::PLAYER_ID();
			}
		}
	}
	return 0;
}

bool func_215()
{
	return func_216() != 0;
}

int func_216()
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293;
}

void func_217(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = func_230();
	if (func_229(iVar0))
	{
		uVar1 = func_228(iParam0);
		iVar2 = func_219(uVar1, iVar0);
		func_259(func_232(iVar0), func_218(iVar2), -1);
		Global_1963639[iVar0] = func_218(iVar2);
	}
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 2;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 8;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 9;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 10;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 11;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 12;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 13;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 14;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 15;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 16;
		
		default:
	}
	return 0;
}

int func_219(var uParam0, int iParam1)
{
	struct<2> Var0;
	var uVar2;
	
	if (iParam1 > 0)
	{
		func_227(&Var0, uParam0);
		func_223(&uVar2, iParam1);
		if (func_221(&Var0, &uVar2, iParam1))
		{
			return func_220(Var0);
		}
	}
	else if (iParam1 == 0)
	{
		func_227(&Var0, uParam0);
		return func_220(Var0);
	}
	return 0;
}

int func_220(struct<2> Param0)
{
	switch (Param0.f_0)
	{
		case 5:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_medical");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_medical");
					break;
			}
			break;
		
		case 7:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_tobacco");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_tobacco");
					break;
			}
			break;
		
		case 1:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_antiques");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_antiques");
					break;
			}
			break;
		
		case 6:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_narc");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_narc");
					break;
			}
			break;
		
		case 4:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_jewellery");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_jewellery");
					break;
			}
			break;
		
		case 0:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_bones");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_bones");
					break;
			}
			break;
		
		case 3:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_fake");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_fake");
					break;
			}
			break;
		
		case 2:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_hazard");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_hazard");
					break;
			}
			break;
	}
	return 0;
}

int func_221(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 != *uParam1)
	{
		return 1;
	}
	else if (uParam0->f_1 == uParam1->f_1)
	{
		iVar0 = func_222(uParam0, iParam2);
		if (iVar0 <= 2)
		{
			return 1;
		}
		else
		{
			iVar1 = 0;
			while (uParam0->f_1 == uParam1->f_1 && iVar1 < 10)
			{
				func_227(uParam0, *uParam0);
				iVar1++;
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_222(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar1 = 0;
	iVar0 = iParam1;
	while (iVar0 >= (iParam1 - 2))
	{
		if (iVar0 >= 0)
		{
			func_223(&Var2, iParam1);
			if (*uParam0 == Var2.f_0 && uParam0->f_1 == Var2.f_1)
			{
				iVar1++;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	return iVar1;
}

void func_223(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_226(Global_1963639[iParam1]);
	*uParam0 = func_225(iVar0);
	uParam0->f_1 = func_224(iVar0);
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 0;
		
		default:
	}
	return 0;
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_226(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

void func_227(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	*uParam0 = uParam1;
	uParam0->f_1 = iVar0;
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 0;
		
		case 6:
			return 1;
		
		case 7:
			return 2;
		
		case 8:
			return 3;
		
		case 9:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		default:
	}
	return -1;
}

bool func_229(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

int func_230()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (Global_1963639[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 6;
		
		case 2:
			return 7;
		
		case 3:
			return 8;
		
		case 4:
			return 9;
		
		case 5:
			return 10;
		
		case 6:
			return 11;
		
		case 7:
			return 12;
		
		default:
	}
	return 0;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

int func_233(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_11();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 18086;
		
		case 1:
			return 18087;
		
		case 2:
			return 18088;
		
		case 3:
			return 18089;
		
		default:
	}
	return 18086;
}

int func_235()
{
	int iVar0;
	int iVar1;
	
	if (!func_215())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (func_233(func_232(iVar0), -1) != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_236(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (*uParam1 != 0 && *uParam1 != 1)
	{
		*uParam1 = 0;
	}
	switch (*uParam1)
	{
		case 0:
			iVar0 = -1723077437;
			iVar1 = func_253();
			iVar2 = 1673236337;
			if (func_249(78225582, -1799524201, iVar1, 2108234284, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_249(78225582, 69656641, iVar2, 2108234284, iParam0, 0, 0, 4, 0, 3))
				{
					if (func_249(78225582, -739932302, -576067948, 2108234284, 1, 0, iParam0, 4, iVar2, 3))
					{
						*uParam1 = 1;
					}
					else
					{
						*uParam1 = 3;
					}
				}
				else
				{
					*uParam1 = 3;
				}
			}
			else
			{
				*uParam1 = 3;
			}
			if (*uParam1 == 1 && func_245())
			{
			}
			else
			{
				*uParam1 = 3;
				func_239(func_243());
			}
			break;
		
		case 1:
			if (func_238(func_243()))
			{
				if (func_237(func_243()) == 2)
				{
					*uParam1 = 2;
					func_239(func_243());
				}
				else
				{
					*uParam1 = 3;
					func_239(func_243());
				}
			}
			break;
	}
	return *uParam1 != 1;
}

int func_237(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_238(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_239(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_261())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_242(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_240(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_240(var uParam0)
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
	func_241(&(uParam0->f_14));
	func_241(&(uParam0->f_14.f_13));
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

void func_241(var uParam0)
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

int func_242(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_243()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_244(iVar0) != 2147483647)
		{
			if (func_242(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_244(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_245()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_261())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_243();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_248(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4536678 = 1;
			}
			return 0;
		}
		if (Global_2695872)
		{
			if (Global_4535172[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4535172[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_244(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4535172[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4535172[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4535172[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4535172[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4535172[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_246(Global_4535172[iVar2 /*85*/], iVar2);
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	return 0;
}

void func_246(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_145(Var0.f_1);
	if ((Global_262145.f_24258 && !Global_262145.f_24259) && !Global_262145.f_24260)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_247();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_247()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_248(int iParam0, int iParam1, int iParam2)
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
			case 208223429:
			case -1433071892:
			case 761999406:
			case -1101941763:
			case 1748245957:
			case 1036772696:
			case -1384648535:
			case -800037808:
			case -695852120:
			case 77355315:
			case 2097889166:
			case 1707592130:
			case 1628412596:
			case 883337077:
			case -1274418755:
			case -1853979468:
			case -239888995:
			case 1163066566:
			case -955087020:
			case 1874391251:
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

int func_249(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_261())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536678 = 1;
			return 0;
		}
		if (Global_2695872)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_243();
	if (iVar1 == -1)
	{
		if (!func_251(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_250(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4535172[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4535172[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4535172[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_250(int iParam0)
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

int func_251(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_261())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536678 = 1;
			return 0;
		}
		if (Global_2695872)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4535172[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4535172[iVar1 /*85*/].f_66.f_5 == 1)
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
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_252(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_252(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_261())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = uParam0;
			Global_4535172[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535172[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535172[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535172[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535172[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535172[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
			if (bParam6)
			{
				Global_4535172[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_246(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_253()
{
	return Global_4536664;
}

void func_254(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_257(iParam1, iParam2))
	{
		iVar0 = func_255();
		Global_2694470[iVar0] = iParam1;
		Global_2694481[iVar0] = iParam0;
	}
}

int func_255()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		func_52();
		func_9("[stat_savemgr_script]SCRIPT: REQUEST_SAVE: checking for a free index ", 0);
		func_256(iVar1, 0);
		if (Global_2694470[iVar1] == 0)
		{
			func_52();
			func_9("[stat_savemgr_script]SCRIPT: REQUEST_SAVE: Found index at ", 0);
			func_256(iVar1, 0);
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

void func_256(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	IntToString(&Var0, iParam0, 16);
	func_9(&Var0, iParam1);
}

int func_257(int iParam0, var uParam1)
{
	if (Global_1575051)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575063) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_258(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9208)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_42() /*5568*/].f_681.f_4242[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

void func_259(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_11();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

void func_260(int iParam0)
{
	func_39(6104, iParam0, -1, 1);
	if (iParam0 == 50)
	{
		func_15(41987, 1, -1);
	}
}

int func_261()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_262()
{
	return func_263(PLAYER::PLAYER_ID());
}

int func_263(bool bParam0)
{
	if (bParam0 != func_57() && func_264(bParam0))
	{
		return Global_1853988[bParam0 /*867*/].f_267.f_293.f_3;
	}
	return 0;
}

int func_264(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_293 != 0;
	}
	return 0;
}

int func_265()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar2 = iVar0;
		iVar1 = (iVar1 + func_266(iVar2));
		iVar0++;
	}
	return iVar1;
}

int func_266(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_215())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_263(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_226(func_233(func_232(iVar0), -1));
		if (func_225(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_267(bool bParam0)
{
	if (bParam0 == func_57() || Global_1853988[bParam0 /*867*/].f_267.f_293 == 0)
	{
		return 50;
	}
	return (50 - Global_1853988[bParam0 /*867*/].f_267.f_293.f_3);
}

int func_268()
{
	if (func_270() == func_57())
	{
		return 0;
	}
	return func_269(func_270());
}

int func_269(int iParam0)
{
	if (func_140(iParam0) == func_57())
	{
		return 0;
	}
	return Global_1895156[iParam0 /*609*/].f_10.f_19;
}

int func_270()
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}

bool func_271()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_content_smuggler_resupply")) > 0;
}

bool func_272()
{
	return func_273(PLAYER::PLAYER_ID());
}

int func_273(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_57())
		{
			return Global_1895156[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

void func_274()
{
	bool bVar0;
	int iVar1;
	
	if (func_186(PLAYER::PLAYER_ID()))
	{
		bVar0 = func_281();
		if (bVar0 != func_57())
		{
			if (bVar0 != PLAYER::PLAYER_ID())
			{
				if (!func_280() && func_279(bVar0))
				{
					if (!iLocal_731)
					{
						func_278(bVar0, 1);
						iLocal_731 = 1;
					}
				}
				if (BitTest(Global_1950844.f_516, 1) && !func_277(PLAYER::PLAYER_ID(), 1))
				{
					MISC::CLEAR_BIT(&(Global_1950844.f_516), true);
					MISC::SET_BIT(&(Global_1950844.f_516), 5);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_1648773, false) && !func_159(PLAYER::PLAYER_ID())) && ((PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), Global_1648773, false) && func_276(bVar0)) || !func_279(bVar0)))
					{
						if (!func_30(&uLocal_732))
						{
							func_29(&uLocal_732, 0, 0);
						}
						else if (func_112(&uLocal_732, 5000, 0))
						{
							if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2657704[bVar0 /*463*/].f_49))
							{
								TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_1648773, 16);
							}
						}
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_VEHICLE_MODEL(iVar1, func_275(1)) && func_276(PLAYER::PLAYER_ID()))
				{
					if (Global_1950844.f_3715 != func_57())
					{
						if (!func_30(&uLocal_732))
						{
							func_29(&uLocal_732, 0, 0);
						}
						else if (func_112(&uLocal_732, 10000, 0))
						{
							Global_1950844.f_3715 = func_57();
						}
					}
				}
			}
		}
	}
	else if (iLocal_731)
	{
		iLocal_731 = 0;
	}
	else if (func_30(&uLocal_732))
	{
		func_27(&uLocal_732);
	}
}

int func_275(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_276(bool bParam0)
{
	if (bParam0 != func_57() && func_46(bParam0, 1, 1))
	{
		if (func_106(bParam0) && !func_159(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_277(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_273(iParam0))
		{
			return 0;
		}
	}
	return Global_1895156[iParam0 /*609*/].f_10 != func_57();
}

void func_278(bool bParam0, int iParam1)
{
	struct<6> Var0;
	int iVar9;
	
	Var0.f_0 = -1979765145;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_5 = iParam1;
	Var0.f_3 = 1;
	if (bParam0 == func_57())
	{
		return;
	}
	iVar9 = func_145(bParam0);
	if (iVar9 > 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 9, iVar9);
	}
}

int func_279(bool bParam0)
{
	if (bParam0 != func_57())
	{
		return BitTest(Global_2657704[bParam0 /*463*/].f_321.f_6, 16);
	}
	return 0;
}

bool func_280()
{
	return Global_1950844.f_529;
}

int func_281()
{
	return func_282(PLAYER::PLAYER_ID());
}

int func_282(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return iParam0;
	}
	if (func_283(iParam0) != -1)
	{
		iVar0 = func_108(func_283(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_277(iParam0, 0))
			{
				return func_140(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_57();
		}
		return Global_2657704[iParam0 /*463*/].f_321.f_10;
	}
	return func_57();
}

int func_283(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_46(iParam0, 1, 1))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
		else if (((Global_1575063 || Global_2635560.f_2780) && iParam0 == PLAYER::PLAYER_ID()) && func_46(iParam0, 1, 0))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
	}
	return -1;
}

void func_284()
{
	int iVar0;
	int iVar1;
	
	if (!func_276(PLAYER::PLAYER_ID()))
	{
		if (iLocal_728)
		{
			iLocal_728 = 0;
		}
		return;
	}
	if (iLocal_728 || !func_286())
	{
		return;
	}
	iVar0 = func_285();
	if (iVar0 == 25 || iVar0 == 12)
	{
		if (iVar0 == 25)
		{
			iVar1 = Global_1835426;
		}
		else if (iVar0 == 12)
		{
			iVar1 = Global_1853832;
		}
		if (iVar1 != func_57() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (iVar0 == 25)
			{
				Global_2657704[bVar1 /*463*/].f_321.f_12 = Global_2657704[bVar1 /*463*/].f_395;
				Global_2657704[bVar1 /*463*/].f_321.f_12.f_1 = Global_2657704[bVar1 /*463*/].f_395.f_1;
			}
			else if (iVar0 == 12)
			{
				Global_2657704[bVar1 /*463*/].f_321.f_12 = Global_2657704[bVar1 /*463*/].f_391;
				Global_2657704[bVar1 /*463*/].f_321.f_12.f_1 = Global_2657704[bVar1 /*463*/].f_391.f_1;
			}
			iLocal_728 = 1;
		}
	}
}

int func_285()
{
	return func_108(Global_1950844.f_514);
}

bool func_286()
{
	return Global_1950844.f_514 != -1;
}

void func_287()
{
	bool bVar0;
	
	if (func_300())
	{
		MISC::SET_BIT(&bVar0, false);
		MISC::SET_BIT(&bVar0, true);
		MISC::SET_BIT(&bVar0, 2);
	}
	if (func_298())
	{
		MISC::SET_BIT(&bVar0, false);
	}
	if (func_297())
	{
		MISC::SET_BIT(&bVar0, 2);
	}
	func_294(0, BitTest(bVar0, 0), func_169(), 33885);
	func_294(1, BitTest(bVar0, 1), func_293(), 47945);
	func_294(3, BitTest(bVar0, 2), Global_2694610, 47904);
	func_294(4, BitTest(bVar0, 2), Global_262145.f_27122, 47851);
	func_294(5, BitTest(bVar0, 2), Global_262145.f_27158, 47798);
	func_294(6, BitTest(bVar0, 2), Global_1950697, 47757);
}

void func_288(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1950697)
		{
			Global_1950697 = 1;
		}
	}
	else if (Global_1950697)
	{
		Global_1950697 = 0;
	}
}

void func_289(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_262145.f_27158)
		{
			Global_262145.f_27158 = 1;
		}
	}
	else if (Global_262145.f_27158)
	{
		Global_262145.f_27158 = 0;
	}
}

void func_290(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_262145.f_27122)
		{
			Global_262145.f_27122 = 1;
		}
	}
	else if (Global_262145.f_27122)
	{
		Global_262145.f_27122 = 0;
	}
}

void func_291(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_2694610)
		{
			Global_2694610 = 1;
		}
	}
	else if (Global_2694610)
	{
		Global_2694610 = 0;
	}
}

void func_292(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1950844.f_4601, 2))
		{
			MISC::SET_BIT(&(Global_1950844.f_4601), 2);
		}
	}
	else if (BitTest(Global_1950844.f_4601, 2))
	{
		MISC::CLEAR_BIT(&(Global_1950844.f_4601), 2);
	}
}

bool func_293()
{
	return BitTest(Global_1950844.f_4601, 2);
}

void func_294(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam1)
	{
		if (!bParam2)
		{
			Stack.Push(1);
			Call_Loc(iParam3);
			func_296(bParam0, 1);
		}
	}
	else if (func_295(bParam0))
	{
		Stack.Push(0);
		Call_Loc(iParam3);
		func_296(bParam0, 0);
	}
}

bool func_295(bool bParam0)
{
	return BitTest(uLocal_725, bParam0);
}

void func_296(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&uLocal_725, bParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_725, bParam0);
	}
}

bool func_297()
{
	if ((func_170(PLAYER::PLAYER_ID()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_58())
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 982.7889f, 67.60738f, 115.1641f, 983.5815f, 67.09579f, 117.1016f, 1.5f, false, true, 0))
		{
			if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_30(&uLocal_723))
			{
				func_69(&uLocal_723, 1, 0);
			}
		}
	}
	else
	{
		func_27(&uLocal_721);
	}
	if (func_30(&uLocal_723) && func_112(&uLocal_723, 2000, 1))
	{
		func_27(&uLocal_723);
	}
	return func_30(&uLocal_723);
}

bool func_298()
{
	if (func_170(PLAYER::PLAYER_ID()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_299(PLAYER::PLAYER_ID()))
		{
			if (func_90())
			{
				func_69(&uLocal_721, 1, 0);
			}
		}
	}
	else
	{
		func_27(&uLocal_721);
	}
	if (func_30(&uLocal_721) && func_112(&uLocal_721, 7500, 1))
	{
		func_27(&uLocal_721);
	}
	return func_30(&uLocal_721);
}

int func_299(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_57())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				iVar0 = func_108(Global_2657704[iParam0 /*463*/].f_321.f_7);
				switch (iVar0)
				{
					case 15:
					case 16:
					case 19:
					case 14:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

bool func_300()
{
	if (func_301())
	{
		func_69(&uLocal_719, 1, 0);
	}
	if (func_30(&uLocal_719))
	{
		if (func_112(&uLocal_719, 7500, 1))
		{
			func_27(&uLocal_719);
		}
	}
	return func_30(&uLocal_719);
}

int func_301()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if ((func_88() && CAM::IS_SCREEN_FADED_IN()) && !func_58())
		{
			return func_193();
		}
	}
	return 0;
}

void func_302()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = false;
	bVar1 = false;
	if (func_317(PLAYER::PLAYER_ID()))
	{
		if ((func_88() && CAM::IS_SCREEN_FADED_IN()) && func_281() == PLAYER::PLAYER_ID())
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (Global_1950844.f_4794.f_3)
				{
					bVar0 = true;
					if (Global_1950837 == 31)
					{
						if (func_316() || func_314())
						{
							if (!iLocal_716)
							{
								iVar2 = func_313();
								iLocal_718 = iVar2;
								MISC::CLEAR_BIT(&(Global_1950844.f_15[iLocal_718 /*3*/][1]), 3);
								Global_2694610 = 1;
								func_312(-1, 0, -1, 0, 0);
								iLocal_716 = 1;
							}
						}
					}
				}
				else if (HUD::IS_WARNING_MESSAGE_ACTIVE())
				{
					if (!iLocal_716)
					{
						bVar1 = true;
					}
				}
				else if (func_310())
				{
					if (!func_307())
					{
						if (!iLocal_716)
						{
							bVar1 = true;
						}
					}
				}
			}
			else if (func_310())
			{
				if (!func_303())
				{
					if (!iLocal_716)
					{
						bVar1 = true;
					}
				}
			}
		}
	}
	if (bVar1)
	{
		if (!Global_2694610)
		{
			Global_2694610 = 1;
			iLocal_717 = 1;
		}
	}
	else if (iLocal_717)
	{
		iLocal_717 = 0;
		Global_2694610 = 0;
	}
	if (!bVar0)
	{
		if (iLocal_716)
		{
			if (iLocal_718 != -1)
			{
				MISC::SET_BIT(&(Global_1950844.f_15[iLocal_718 /*3*/][1]), 3);
				iLocal_718 = -1;
			}
			if (!func_317(PLAYER::PLAYER_ID()))
			{
				Global_2694610 = 0;
				iLocal_716 = 0;
			}
		}
	}
}

int func_303()
{
	int iVar0;
	
	if (func_317(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_313();
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_304(0, iVar0), func_304(1, iVar0), 2f, false, true, 0);
	}
	return 0;
}

Vector3 func_304(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_306(iParam1), func_305(iParam1), 7.01892f, 2.11517f, 0f);
			break;
		
		case 1:
			return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_306(iParam1), func_305(iParam1), 8.53381f, 0.58459f, 2f);
			break;
	}
	return 0f, 0f, 0f;
}

float func_305(int iParam0)
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
	return 0f;
}

Vector3 func_306(int iParam0)
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
	return -1070f, -70f, -100f;
}

int func_307()
{
	int iVar0;
	
	if (func_317(PLAYER::PLAYER_ID()))
	{
		if (func_309(PLAYER::PLAYER_ID()) == 1)
		{
			return 1;
		}
		iVar0 = func_313();
		return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_308(0, iVar0), func_308(1, iVar0), 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_308(2, iVar0), func_308(3, iVar0), 2f, false, true, 0));
	}
	return 0;
}

Vector3 func_308(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_306(iParam1), func_305(iParam1), 4.7964f, -13.1159f, 0.0002f);
			break;
		
		case 1:
			return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_306(iParam1), func_305(iParam1), -0.1765f, -12.985f, 2.0002f);
			break;
		
		case 2:
			return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_306(iParam1), func_305(iParam1), 5.1173f, -13.5653f, 8.5999f);
			break;
		
		case 3:
			return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_306(iParam1), func_305(iParam1), 0.5385f, -13.5421f, 10.5999f);
			break;
	}
	return 0f, 0f, 0f;
}

int func_309(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2657704[iParam0 /*463*/].f_321.f_3, 28, 31);
}

int func_310()
{
	int iVar0;
	
	if (func_311())
	{
		iVar0 = MISC::GET_HASH_KEY(&(Global_23390.f_1));
		if ((iVar0 == 273080206 || iVar0 == -512681331) || iVar0 == 1890688030)
		{
			return 1;
		}
	}
	return 0;
}

bool func_311()
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

void func_312(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 < 0 && iParam0 != -1)
	{
		return;
	}
	if (Global_1950837 == 0 && bParam1)
	{
		return;
	}
	if (bParam1)
	{
		Global_1950844.f_4794 = iParam0;
		Global_1950844.f_4794.f_1 = iParam2;
		Global_1950844.f_4794.f_2 = iParam3;
		Global_1950844.f_4794.f_4 = iParam4;
		Global_1950844.f_4794.f_3 = 1;
	}
	else
	{
		Global_1950844.f_4794 = -1;
		Global_1950844.f_4794.f_1 = -1;
		Global_1950844.f_4794.f_6 = -1;
		Global_1950844.f_4794.f_2 = 0;
		Global_1950844.f_4794.f_3 = 0;
		Global_1950844.f_4794.f_4 = 0;
	}
}

var func_313()
{
	return Global_1950844.f_514;
}

int func_314()
{
	if (func_315(2) || func_315(1))
	{
		return 1;
	}
	return 0;
}

bool func_315(int iParam0)
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2672524.f_62.f_1, iParam0);
	}
	return BitTest(Global_2672524.f_62.f_2, (iParam0 - 32));
}

var func_316()
{
	return Global_2672524.f_62.f_57;
}

int func_317(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_108(Global_2657704[iParam0 /*463*/].f_321.f_7) == 24;
			}
		}
	}
	return 0;
}

void func_318()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller")) == 0) || func_319(Global_4718592.f_117591) != 0)
	{
		iLocal_715 = 0;
		return;
	}
	if (iLocal_715)
	{
		return;
	}
	iVar0 = -1;
	iVar1 = 13;
	iVar2 = 0;
	while (iVar2 <= (Global_1058071.f_266 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_119[iVar2]) || ENTITY::IS_ENTITY_DEAD(Global_1058071.f_119[iVar2], false))
		{
		}
		else
		{
			iVar3 = ENTITY::GET_ENTITY_MODEL(Global_1058071.f_119[iVar2]);
			if (iVar3 != Global_4980736.f_6204[iVar1 /*546*/].f_15)
			{
			}
			else
			{
				iVar0 = iVar2;
			}
			else
			{
				iVar2++;
			}
			if (iVar0 < 0 || iVar0 >= 32)
			{
				return;
			}
			Var4 = { Global_4980736.f_6204[iVar1 /*546*/] };
			Var7 = { ENTITY::GET_ENTITY_COORDS(Global_1058071.f_119[iVar0], true) };
			if (SYSTEM::VDIST2(Var4, Var7) > 3f && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Global_1058071.f_119[iVar0]))
			{
				ENTITY::SET_ENTITY_COORDS(Global_1058071.f_119[iVar0], Var4, true, false, false, true);
				iLocal_715 = 1;
			}
		}

int func_319(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_28622[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_320()
{
	if (func_272())
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_content_smuggler_resupply")) > 0)
		{
			if (iLocal_714 == -1)
			{
				if (Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_235.f_22 != -1)
				{
					iLocal_714 = Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_235.f_22;
				}
			}
			else if (Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_235.f_22 == -1 || Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_235.f_22 == 8)
			{
				Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_235.f_22 = iLocal_714;
			}
		}
		else if (iLocal_714 != -1)
		{
			iLocal_714 = -1;
		}
	}
}

void func_321()
{
	if (BitTest(Global_1950844.f_8, 25))
	{
		if (Global_4282954 != -1)
		{
			Global_4282954 = -1;
		}
	}
}

void func_322()
{
	int iVar0;
	bool bVar1;
	
	if (NETWORK::NETWORK_SESSION_IS_AWAITING_INVITE_RESPONSE())
	{
		if (!bLocal_705)
		{
			bLocal_705 = true;
		}
	}
	else
	{
		if (bLocal_705)
		{
			bLocal_705 = false;
		}
		bLocal_705 = false;
	}
	if (bLocal_705)
	{
		iVar0 = -1;
		bVar1 = false;
		iVar0 = func_111("GR_ENTERAOC");
		if (iVar0 > -1 && iVar0 < 6)
		{
			if (Global_44123[iVar0 /*32*/] == 1)
			{
				bVar1 = true;
			}
		}
		if (bVar1)
		{
			Global_44322 = 1;
			Global_44323 = 1;
			if (func_110(iVar0))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
}

void func_323()
{
	if (func_46(PLAYER::PLAYER_ID(), 1, 1))
	{
		if ((((func_332() && func_331()) && func_330()) && func_118(1)) && iLocal_711 == 0)
		{
			iLocal_711 = 1;
		}
		if (iLocal_711 == 1)
		{
			if (!func_88())
			{
				iLocal_711 = 2;
			}
			else if ((func_329() && (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())) && Global_2694504 > 0)
			{
				iLocal_711 = 2;
			}
		}
		if ((((func_88() || func_328()) && !func_330()) && func_331()) && iLocal_711 == 2)
		{
			func_327(0);
			iLocal_711 = 0;
		}
		if ((!func_331() && !func_330()) && iLocal_711 != 0)
		{
			iLocal_711 = 0;
		}
		if (func_326(PLAYER::PLAYER_ID(), -1))
		{
			if (func_324(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true), ENTITY::GET_ENTITY_COORDS(func_325(), true)) < 255f)
			{
				if ((func_330() && func_331()) || func_332())
				{
					Global_44322 = 1;
				}
			}
		}
	}
}

float func_324(struct<3> Param0, struct<3> Param3)
{
	return SYSTEM::VDIST2(Param0, Param3);
}

int func_325()
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_128())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_49) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_49))
		{
			return NETWORK::NET_TO_VEH(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_49);
		}
	}
	return Global_2794162.f_309;
}

int func_326(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (func_46(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_327(int iParam0)
{
	Global_1574921 = iParam0;
}

var func_328()
{
	return Global_2683883.f_729;
}

int func_329()
{
	if (Global_2694496)
	{
		return Global_2694495;
	}
	return 0;
}

bool func_330()
{
	return Global_2694594;
}

bool func_331()
{
	return Global_1574921;
}

bool func_332()
{
	return (Global_1574935[0] != 0 || Global_1574935[1] != 0);
}

void func_333()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_337(PLAYER::PLAYER_ID()) == 164 && func_334(PLAYER::PLAYER_ID())))
	{
		return;
	}
	if (Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_232 != 99 && Global_2672524.f_2514[0 /*80*/].f_1 == 1)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
	}
}

int func_334(int iParam0)
{
	if (func_273(iParam0))
	{
		if (func_335(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_335(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_336(iParam0, 9);
	}
	return 0;
}

var func_336(int iParam0, int iParam1)
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_337(int iParam0)
{
	if (func_85(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_33;
	}
	return -1;
}

void func_338()
{
	if (func_116(PLAYER::PLAYER_ID()) && ((((((((func_90() || BitTest(Global_1574589, 7)) || BitTest(Global_1574589, 8)) || BitTest(Global_1574589, 4)) || BitTest(Global_1574589, 1)) || func_58()) || func_339(PLAYER::PLAYER_ID(), 0)) || func_196() == 2) || BitTest(Global_1950844.f_9, 5)))
	{
		if (!func_169())
		{
			func_168(1);
			iLocal_511 = 1;
		}
	}
	else if (iLocal_511)
	{
		func_168(0);
		iLocal_511 = 0;
	}
}

int func_339(int iParam0, int iParam1)
{
	if (func_55(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10.f_32 != -1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_33 != -1))
		{
			return 1;
		}
	}
	return 0;
}

void func_340()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) == -127723389)
	{
		if (HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			iVar1 = HUD::GET_WARNING_SCREEN_MESSAGE_HASH();
			if (iVar1 == 15890625 || iVar1 == -398982408)
			{
				iVar0 = 1;
			}
		}
	}
	Global_4536666 = iVar0;
	Global_4536667 = HUD::IS_WARNING_MESSAGE_ACTIVE();
}

void func_341()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		iLocal_510 = 0;
		return;
	}
	if (Global_4718592.f_171045 != 6 && Global_4718592.f_171045 != 7)
	{
		return;
	}
	if (iLocal_510)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_110343 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_110349[iVar0 /*1098*/].f_944[iVar1] >= 91)
			{
				func_342(&(Global_4980736.f_110349[iVar0 /*1098*/].f_944[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_91870 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_91874[iVar0 /*529*/].f_52[iVar1] >= 91)
			{
				func_342(&(Global_4980736.f_91874[iVar0 /*529*/].f_52[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_42750 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_42751[iVar0 /*160*/].f_99[iVar1] >= 91)
			{
				func_342(&(Global_4980736.f_42751[iVar0 /*160*/].f_99[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_74915 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_74917[iVar0 /*225*/].f_115[iVar1] >= 91)
			{
				func_342(&(Global_4980736.f_74917[iVar0 /*225*/].f_115[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_219864 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_219865[iVar0 /*178*/].f_100[iVar1] >= 91)
			{
				func_342(&(Global_4980736.f_219865[iVar0 /*178*/].f_100[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_144662 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4718592.f_118170[iVar0 /*218*/].f_195[iVar1] >= 91)
			{
				func_342(&(Global_4718592.f_118170[iVar0 /*218*/].f_195[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_24223 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_24224[iVar0 /*275*/].f_254[iVar1] >= 91)
			{
				func_342(&(Global_4980736.f_24224[iVar0 /*275*/].f_254[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4718592.f_175537[iVar0 /*115*/].f_109[iVar1] >= 91)
			{
				func_342(&(Global_4718592.f_175537[iVar0 /*115*/].f_109[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_199684 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_199691[iVar0 /*66*/].f_60[iVar1] >= 91)
			{
				func_342(&(Global_4980736.f_199691[iVar0 /*66*/].f_60[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (Global_4718592.f_1750 - 1))
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4980736.f_199685[iVar2] - 1))
		{
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				if (Global_4980736.f_203652[iVar2 /*3961*/][iVar0 /*66*/].f_60[iVar1] >= 91)
				{
					func_342(&(Global_4980736.f_203652[iVar2 /*3961*/][iVar0 /*66*/].f_60[iVar1]));
				}
				iVar1++;
			}
			iVar0++;
		}
		iVar2++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_82343 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_82352[iVar0 /*156*/].f_71[iVar1] >= 91)
			{
				func_342(&(Global_4980736.f_82352[iVar0 /*156*/].f_71[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_6201 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_4980736.f_6204[iVar0 /*546*/].f_343[iVar1] >= 91)
			{
				func_342(&(Global_4980736.f_6204[iVar0 /*546*/].f_343[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	iLocal_510 = 1;
}

void func_342(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	iVar0 += 5;
	*uParam0 = iVar0;
}

void func_343()
{
	if (func_348())
	{
		if ((PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_58())
		{
			func_69(&uLocal_507, 1, 0);
		}
	}
	if (func_30(&uLocal_507))
	{
		Global_44322 = 1;
		if (func_112(&uLocal_507, 5000, 1))
		{
			func_27(&uLocal_507);
		}
	}
	if ((func_344() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_58())
	{
		if (!iLocal_509)
		{
			NETWORK::NETWORK_SUPPRESS_INVITE(true);
			iLocal_509 = 1;
		}
	}
	else if (iLocal_509)
	{
		NETWORK::NETWORK_SUPPRESS_INVITE(false);
		iLocal_509 = 0;
	}
}

int func_344()
{
	if (func_347(PLAYER::PLAYER_ID()) || func_345())
	{
		return 1;
	}
	return 0;
}

bool func_345()
{
	return func_346() == 1;
}

int func_346()
{
	return Global_1978359;
}

var func_347(int iParam0)
{
	return Global_2657704[iParam0 /*463*/].f_444.f_1;
}

bool func_348()
{
	return func_111("HI_LEAVE") != -1;
}

void func_349()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0 || Global_4718592.f_117591 != Global_262145.f_33923[1]) || Global_1058071 != 6) || Global_1574632.f_18 != 0)
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			func_27(&(Local_500[iVar0 /*2*/]));
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!ENTITY::IS_ENTITY_ATTACHED(Global_1058071.f_119[iVar0]) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_1058071.f_119[iVar0]))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(Global_1058071.f_119[iVar0], true) };
			fVar4 = 0f;
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &fVar4, true, false);
			if ((Var1.f_2 - fVar4) > 1.5f && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1058071.f_119[iVar0]))
			{
				if (!func_30(&(Local_500[iVar0 /*2*/])))
				{
					func_69(&(Local_500[iVar0 /*2*/]), 0, 0);
				}
				else if (func_28(Local_500[iVar0 /*2*/], 3000, 0))
				{
					ENTITY::SET_ENTITY_COORDS(Global_1058071.f_119[iVar0], Global_4980736.f_6204[iVar0 /*546*/], true, false, false, true);
					func_27(&(Local_500[iVar0 /*2*/]));
				}
			}
			else
			{
				func_27(&(Local_500[iVar0 /*2*/]));
			}
		}
		else
		{
			func_27(&(Local_500[iVar0 /*2*/]));
		}
		iVar0++;
	}
}

void func_350()
{
	if ((!Global_1971297 && func_351(PLAYER::PLAYER_ID())) && !Global_1971295)
	{
		Global_1971295 = 1;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_VEHICLE_SPAWN")) < 1)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(iLocal_499))
		{
			SCRIPT::TERMINATE_THREAD(iLocal_499);
		}
		iLocal_496 = 0;
		iLocal_497 = 0;
		bLocal_498 = false;
		return;
	}
	if (Global_1971295 && !bLocal_498)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(iLocal_499))
		{
			SCRIPT::TERMINATE_THREAD(iLocal_499);
		}
		if (iLocal_496)
		{
			iLocal_496 = 0;
			iLocal_497 = 0;
			bLocal_498 = false;
		}
		else
		{
			return;
		}
	}
	if (iLocal_496 && iLocal_497)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_VEHICLE_REWARD")) >= 0 && SCRIPT::IS_THREAD_ACTIVE(iLocal_499))
		{
			Global_1971295 = 0;
			iLocal_497 = 0;
			bLocal_498 = false;
		}
	}
	if (iLocal_496)
	{
		return;
	}
	if (!Global_1971295 && !bLocal_498)
	{
		bLocal_498 = true;
		iLocal_497 = 0;
		Global_1971295 = 1;
	}
	if (bLocal_498)
	{
		SCRIPT::REQUEST_SCRIPT("AM_MP_VEHICLE_REWARD");
		if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_VEHICLE_REWARD"))
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_VEHICLE_REWARD")) < 1 && !SCRIPT::IS_THREAD_ACTIVE(iLocal_499))
			{
				if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_VEHICLE_REWARD", -1, true, 0))
				{
					iLocal_499 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("AM_MP_VEHICLE_REWARD"), 2050);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_VEHICLE_REWARD");
					iLocal_496 = 1;
					iLocal_497 = 1;
				}
				else if (!Global_1971295)
				{
					Global_1971295 = 1;
				}
			}
			else if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_499))
			{
				if (!Global_1971295)
				{
					Global_1971295 = 1;
				}
			}
		}
	}
}

var func_351(int iParam0)
{
	return func_352(&(Global_2657704[iParam0 /*463*/].f_442), 0);
}

var func_352(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_353()
{
	if (func_354(PLAYER::PLAYER_ID()))
	{
		if (SCRIPT::DOES_SCRIPT_EXIST("appMPJobListNEW") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpjoblistnew")) > 0)
		{
			func_130(0);
		}
	}
}

int func_354(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_355(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_355(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_108(Global_2657704[iParam0 /*463*/].f_321.f_7) == 22;
			}
		}
	}
	return 0;
}

void func_356()
{
	if (func_170(PLAYER::PLAYER_ID()))
	{
		if (func_311() && !func_92())
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) == 863149140)
			{
				func_69(&uLocal_493, 1, 0);
			}
		}
	}
	if (func_30(&uLocal_493))
	{
		if (!Global_4593995)
		{
			Global_4593995 = 1;
		}
		else if (func_112(&uLocal_493, 5000, 1))
		{
			func_27(&uLocal_493);
			Global_4593995 = 0;
		}
	}
	if (Global_1836768.f_78)
	{
		if (!iLocal_495)
		{
			if (!func_169())
			{
				func_168(1);
				iLocal_495 = 1;
			}
		}
	}
	else if (iLocal_495)
	{
		func_168(0);
		iLocal_495 = 0;
	}
}

void func_357()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((Global_100885.f_394 > 0 || Global_98122) && Global_2883587 == 122)
	{
		iVar0 = 0;
		while (iVar0 < 125)
		{
			if (func_358(Global_4538180[iVar0]))
			{
				Global_4538432[iVar0] = 1;
			}
			iVar0++;
		}
	}
	if (iLocal_492)
	{
		if (func_46(PLAYER::PLAYER_ID(), 1, 1))
		{
			iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 10, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 10), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 10));
			if (func_358(iVar1))
			{
				switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
				{
					case joaat("mp_m_freemode_01"):
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 0, 0, 0);
						break;
					
					case joaat("mp_f_freemode_01"):
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 4, 14, 0);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 4, 0, 0);
						break;
					}
			}
			iVar2 = func_42();
			iVar3 = 0;
			while (iVar3 < 21)
			{
				if (Global_2359296[iVar2 /*5568*/].f_681.f_1336[iVar3 /*13*/][10] != 0)
				{
					iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 10, Global_2359296[iVar2 /*5568*/].f_681.f_1336[iVar3 /*13*/][10], Global_2359296[iVar2 /*5568*/].f_681.f_1610[iVar3 /*13*/][10]);
					if (func_358(iVar1))
					{
						Global_2359296[iVar2 /*5568*/].f_681.f_2306[iVar3] = 0;
					}
				}
				iVar3++;
			}
			iLocal_492 = 0;
		}
	}
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case -514913742:
		case -878040611:
		case 482583909:
		case -602911151:
			if (func_16(41907, -1) || (MISC::IS_PC_VERSION() && func_359(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case 1460860356:
		case -1318980275:
		case 1383502026:
		case 853179368:
			if (func_16(41904, -1) || (MISC::IS_PC_VERSION() && func_359(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case -454979229:
		case -2112416072:
		case -2143753138:
		case -1064462516:
			if (func_16(41905, -1) || (MISC::IS_PC_VERSION() && func_359(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case -90719025:
		case -1879788941:
		case -301152196:
		case -1533649058:
			if (func_16(41906, -1) || (MISC::IS_PC_VERSION() && func_359(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case 140662884:
		case 1719951255:
		case -49715659:
		case -1286013725:
			if (func_16(41908, -1) || (MISC::IS_PC_VERSION() && func_359(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case -1107289734:
		case 670922658:
		case -1487561132:
		case 1985271521:
			if (func_16(41972, -1) || (MISC::IS_PC_VERSION() && func_359(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case -936530475:
		case -1243933865:
		case -1253098937:
		case -2078117252:
			if (func_16(41974, -1) || (MISC::IS_PC_VERSION() && func_359(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case -640050226:
		case 45163847:
		case -772630900:
		case 25792662:
			if (func_16(41973, -1) || (MISC::IS_PC_VERSION() && func_359(iParam0, 1, 1, 1, -1)))
			{
			}
			else
			{
				return 1;
			}
			break;
		
		case 1147367644:
		case 1847196647:
		case -2076574952:
		case 994214923:
			if (func_16(41975, -1) || (MISC::IS_PC_VERSION() && func_359(iParam0, 1, 1, 1, -1)))
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

int func_359(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_78469;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_44(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		iVar3 = func_45(iVar2, iVar0);
		return BitTest(iVar3, uVar1);
	}
	return 0;
}

void func_360()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (func_337(PLAYER::PLAYER_ID()) == 276 && func_365(PLAYER::PLAYER_ID()) == 3)
	{
		if (func_364(PLAYER::PLAYER_ID()))
		{
			if (CAM::IS_SCREEN_FADING_OUT() || HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				bVar3 = true;
				bVar1 = true;
			}
		}
		else
		{
			bVar0 = true;
			if (func_363(PLAYER::PLAYER_ID()))
			{
				bVar2 = true;
			}
		}
	}
	if (bVar3)
	{
		func_362(1);
	}
	if (bVar0)
	{
		if (!iLocal_489)
		{
			func_361(1);
			iLocal_489 = 1;
		}
	}
	else if (iLocal_489)
	{
		func_361(0);
		iLocal_489 = 0;
	}
	if (bVar1)
	{
		if (!iLocal_491)
		{
			Global_1950843 = 1;
			iLocal_491 = 1;
		}
	}
	else if (iLocal_491)
	{
		if (Global_1950843)
		{
			Global_1950843 = 0;
		}
		iLocal_491 = 0;
	}
	if (bVar2)
	{
		if (Global_2625764 == 145)
		{
			if (!iLocal_490)
			{
				Global_2625764 = 79;
				iLocal_490 = 1;
			}
		}
	}
	else if (iLocal_490)
	{
		if (Global_2625764 == 79)
		{
			Global_2625764 = 145;
		}
		iLocal_490 = 0;
	}
}

void func_361(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_100885.f_1414[39]), 2);
		MISC::SET_BIT(&(Global_100885.f_1414[40]), 2);
		MISC::SET_BIT(&(Global_100885.f_1414[41]), 2);
		MISC::SET_BIT(&(Global_100885.f_1414[42]), 2);
		MISC::SET_BIT(&(Global_100885.f_1414[43]), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_100885.f_1414[39]), 2);
		MISC::CLEAR_BIT(&(Global_100885.f_1414[40]), 2);
		MISC::CLEAR_BIT(&(Global_100885.f_1414[41]), 2);
		MISC::CLEAR_BIT(&(Global_100885.f_1414[42]), 2);
		MISC::CLEAR_BIT(&(Global_100885.f_1414[43]), 2);
	}
}

void func_362(int iParam0)
{
	if (func_134())
	{
		return;
	}
	if (!Global_20500.f_1 == 1)
	{
		if (func_91(0))
		{
			func_130(iParam0);
		}
		MISC::SET_BIT(&Global_8371, 2);
	}
}

bool func_363(int iParam0)
{
	return Global_2657704[iParam0 /*463*/].f_272;
}

int func_364(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_108(Global_2657704[iParam0 /*463*/].f_321.f_7) == 23;
			}
		}
	}
	return 0;
}

int func_365(int iParam0)
{
	if (func_85(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

void func_366()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (func_374(91))
	{
		func_69(&uLocal_69, 1, 0);
		bVar1 = true;
	}
	if (!iLocal_487)
	{
		if (func_30(&uLocal_69))
		{
			if (!func_112(&uLocal_69, 60000, 1))
			{
				bVar1 = true;
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_contact_requests")) > 0)
				{
					iLocal_487 = 1;
					iVar0 = 0;
					while (iVar0 < 415)
					{
						iLocal_71[iVar0] = 0;
						if (STREAMING::IS_MODEL_A_VEHICLE(Global_1586488[iVar0 /*142*/].f_66))
						{
							if (!func_372(Global_1586488[iVar0 /*142*/].f_66))
							{
								iLocal_71[iVar0] = Global_1586488[iVar0 /*142*/].f_66;
								Global_1586488[iVar0 /*142*/].f_66 = 0;
							}
						}
						iVar0++;
					}
				}
			}
			else
			{
				func_27(&uLocal_69);
			}
		}
	}
	else
	{
		bVar1 = true;
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_contact_requests")) <= 0)
		{
			func_27(&uLocal_69);
			iVar0 = 0;
			while (iVar0 < 415)
			{
				if (iLocal_71[iVar0] != 0)
				{
					Global_1586488[iVar0 /*142*/].f_66 = iLocal_71[iVar0];
				}
				iLocal_71[iVar0] = 0;
				iVar0++;
			}
			iLocal_487 = 0;
			func_27(&uLocal_69);
		}
	}
	if (!bVar1)
	{
		iVar2 = func_45(5396, -1);
		if (iVar2 == joaat("hauler2") || iVar2 == joaat("phantom3"))
		{
			if (Global_1586488[158 /*142*/].f_66 == 0)
			{
				Global_1586488[158 /*142*/].f_66 = iVar2;
				func_368(158, 158, -1);
			}
		}
	}
	if (iLocal_488 >= 0 && iLocal_488 < 415)
	{
		if ((!BitTest(Global_1586488[iLocal_488 /*142*/].f_103, 2) && Global_1586488[iLocal_488 /*142*/].f_66 != 0) && func_367(Global_1586488[iLocal_488 /*142*/].f_66))
		{
			MISC::SET_BIT(&(Global_1586488[iLocal_488 /*142*/].f_103), 2);
			if (iVar0 == 0)
			{
				if (!BitTest(Global_1586488[iLocal_488 /*142*/].f_103, 15))
				{
					MISC::SET_BIT(&(Global_1586488[iLocal_488 /*142*/].f_103), 15);
				}
			}
		}
	}
	iLocal_488++;
	if (iLocal_488 >= 415)
	{
		iLocal_488 = 0;
	}
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("coquette"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt2"):
		case joaat("rapidgt"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("vacca"):
		case joaat("ztype"):
		case joaat("akuma"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("elegy2"):
		case joaat("khamelion"):
		case joaat("hotknife"):
		case joaat("carbonrs"):
		case joaat("voltic"):
		case joaat("comet2"):
		case joaat("surano"):
		case joaat("banshee"):
		case joaat("blazer3"):
		case joaat("jester"):
		case joaat("massacro"):
		case joaat("turismor"):
		case joaat("zentorno"):
		case joaat("huntley"):
		case joaat("alpha"):
		case joaat("paradise"):
		case joaat("bifta"):
		case joaat("kalahari"):
		case joaat("btype"):
		case joaat("thrust"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("coquette2"):
		case joaat("monster"):
		case joaat("sovereign"):
		case joaat("innovation"):
		case joaat("hakuchou"):
		case joaat("furoregt"):
		case joaat("boxville4"):
		case joaat("casco"):
		case joaat("dinghy3"):
		case joaat("enduro"):
		case joaat("gburrito2"):
		case joaat("guardian"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kuruma"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("mule3"):
		case joaat("savage"):
		case joaat("technical"):
		case joaat("valkyrie"):
		case joaat("velum2"):
		case joaat("blista2"):
		case joaat("dodo"):
		case joaat("dukes"):
		case joaat("marshall"):
		case joaat("stalion"):
		case joaat("submersible2"):
		case joaat("blista3"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
		case joaat("dominator2"):
		case joaat("dukes2"):
		case joaat("gauntlet2"):
		case joaat("stalion2"):
		case joaat("blimp2"):
		case joaat("jester2"):
		case joaat("massacro2"):
		case joaat("ratloader2"):
		case joaat("slamvan"):
		case joaat("barracks3"):
		case joaat("slamvan2"):
		case joaat("brawler"):
		case joaat("chino"):
		case joaat("coquette3"):
		case joaat("feltzer3"):
		case joaat("luxor2"):
		case joaat("osiris"):
		case joaat("swift2"):
		case joaat("t20"):
		case joaat("toro"):
		case joaat("vindicator"):
		case joaat("virgo"):
		case joaat("windsor"):
		case joaat("faction"):
		case joaat("moonbeam"):
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("btype2"):
		case joaat("lurcher"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("virgo3"):
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("baller5"):
		case joaat("baller6"):
		case joaat("cog55"):
		case joaat("cog552"):
		case joaat("cognoscenti"):
		case joaat("cognoscenti2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter5"):
		case joaat("schafter4"):
		case joaat("schafter6"):
		case joaat("verlierer2"):
		case joaat("tampa"):
		case joaat("banshee2"):
		case joaat("sultanrs"):
		case joaat("btype3"):
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
		case joaat("le7b"):
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("contender"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("tyrus"):
		case joaat("sheava"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("lynx"):
		case joaat("avarus"):
		case joaat("blazer4"):
		case joaat("chimera"):
		case joaat("daemon2"):
		case joaat("defiler"):
		case joaat("esskey"):
		case joaat("faggio3"):
		case joaat("faggio"):
		case joaat("hakuchou2"):
		case joaat("manchez"):
		case joaat("nightblade"):
		case joaat("raptor"):
		case joaat("ratbike"):
		case joaat("sanctus"):
		case joaat("shotaro"):
		case joaat("tornado6"):
		case joaat("vortex"):
		case joaat("wolfsbane"):
		case joaat("youga2"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("comet2"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("elegy2"):
		case joaat("elegy"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("italigtb2"):
		case joaat("nero"):
		case joaat("nero2"):
		case joaat("penetrator"):
		case joaat("specter"):
		case joaat("specter2"):
		case joaat("tempesta"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("ruiner3"):
		case joaat("technical2"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("gp1"):
		case joaat("infernus2"):
		case joaat("ruston"):
		case joaat("turismo2"):
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("cyclone"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("visione"):
		case joaat("vigilante"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("barrage"):
		case joaat("volatol"):
		case joaat("comet4"):
		case joaat("neon"):
		case joaat("streiter"):
		case joaat("sentinel3"):
		case joaat("yosemite"):
		case joaat("sc1"):
		case joaat("autarch"):
		case joaat("gt500"):
		case joaat("hustler"):
		case joaat("revolter"):
		case joaat("pariah"):
		case joaat("raiden"):
		case joaat("savestra"):
		case joaat("riata"):
		case joaat("hermes"):
		case joaat("comet5"):
		case joaat("z190"):
		case joaat("viseris"):
		case joaat("kamacho"):
		case joaat("gb200"):
		case joaat("fagaloa"):
		case joaat("ellie"):
		case joaat("issi3"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("speedo4"):
		case joaat("oppressor2"):
		case joaat("scramjet"):
		case joaat("freecrawler"):
		case joaat("menacer"):
		case joaat("patriot2"):
		case joaat("stafford"):
		case joaat("swinger"):
		case joaat("terbyte"):
		case joaat("strikeforce"):
		case joaat("pbus2"):
		case joaat("blimp3"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("rcbandito"):
		case joaat("zr380"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("jugular"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("stryder"):
		case joaat("retinue2"):
		case joaat("formula2"):
		case joaat("yosemite2"):
		case joaat("furia"):
		case joaat("gauntlet5"):
		case joaat("club"):
		case joaat("dukes3"):
		case joaat("yosemite3"):
		case joaat("peyote3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("coquette4"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("alkonost"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("kosatka"):
		case joaat("toreador"):
		case joaat("italirsx"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("annihilator2"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("astron"):
		case joaat("baller7"):
		case joaat("buffalo4"):
		case joaat("comet7"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("ignus"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("cinquemila"):
		case joaat("reever"):
		case joaat("shinobi"):
		case joaat("iwagen"):
		case joaat("brioso3"):
		case joaat("corsita"):
		case joaat("draugur"):
		case joaat("greenwood"):
		case joaat("kanjosj"):
		case joaat("lm87"):
		case joaat("postlude"):
		case joaat("rhinehart"):
		case joaat("sm722"):
		case joaat("tenf"):
		case joaat("tenf2"):
		case joaat("torero2"):
		case joaat("vigero2"):
		case joaat("weevil2"):
		case joaat("ruiner4"):
		case joaat("sentinel4"):
		case joaat("omnisegt"):
		case joaat("manchez3"):
		case joaat("brickade2"):
		case joaat("eudora"):
		case joaat("powersurge"):
		case joaat("surfer3"):
		case joaat("journey2"):
		case joaat("entity3"):
		case joaat("panthere"):
		case joaat("boor"):
		case joaat("everon2"):
		case joaat("tulip2"):
		case joaat("r300"):
		case joaat("virtue"):
		case joaat("issi8"):
		case joaat("broadway"):
		case joaat("tahoma"):
		case joaat("conada2"):
		case joaat("gauntlet6"):
		case joaat("brigham"):
		case joaat("clique2"):
		case joaat("l35"):
		case joaat("ratel"):
		case joaat("stingertt"):
		case joaat("buffalo5"):
		case joaat("streamer216"):
		case joaat("monstrociti"):
		case joaat("coureur"):
		case joaat("speedo5"):
		case joaat("raiju"):
		case joaat("inductor"):
		case joaat("inductor2"):
			return 1;
			break;
	}
	return 0;
}

void func_368(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_369(iParam0, iParam1, iParam2);
	if (iParam0 >= 415)
	{
		return;
	}
	if (iParam2 == func_11() || iParam2 == -1)
	{
		Global_1945123[iParam0] = iParam1;
	}
}

void func_369(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_259(func_371(iParam0), iParam1, iParam2);
		func_259(func_370(iParam0), 0, iParam2);
	}
	else
	{
		func_259(func_371(iParam0), 255, iParam2);
		func_259(func_370(iParam0), (iParam1 - 255), iParam2);
	}
}

int func_370(int iParam0)
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28069 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30200 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31548 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34096 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36594 + iParam0) - 337);
	}
	else if (iParam0 < 415)
	{
		return ((41160 + iParam0) - 363);
	}
	return (24625 + iParam0);
}

int func_371(int iParam0)
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31538 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34076 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36568 + iParam0) - 337);
	}
	else if (iParam0 < 415)
	{
		return ((41108 + iParam0) - 363);
	}
	return (4036 + iParam0);
}

int func_372(int iParam0)
{
	if (func_373(iParam0))
	{
		return 1;
	}
	if ((((((((((((((((((((iParam0 == joaat("blazer5") || iParam0 == joaat("boxville5")) || iParam0 == joaat("dune5")) || iParam0 == joaat("phantom2")) || iParam0 == joaat("ruiner2")) || iParam0 == joaat("technical2")) || iParam0 == joaat("voltic2")) || iParam0 == joaat("wastelander")) || iParam0 == joaat("trailersmall2")) || iParam0 == joaat("technical3")) || iParam0 == joaat("insurgent3")) || iParam0 == joaat("khanjali")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("riot2")) || iParam0 == joaat("thruster")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("deluxo")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2")) || iParam0 == joaat("oppressor2"))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("airbus"):
		case joaat("airtug"):
		case joaat("ambulance"):
		case joaat("annihilator"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("asea2"):
		case joaat("baletrailer"):
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("benson"):
		case joaat("besra"):
		case joaat("biff"):
		case joaat("blimp"):
		case joaat("blimp2"):
		case joaat("boattrailer"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("bulldozer"):
		case joaat("burrito"):
		case joaat("burrito3"):
		case joaat("burrito4"):
		case joaat("burrito5"):
		case joaat("bus"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("camper"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("cargobob3"):
		case joaat("cargoplane"):
		case joaat("coach"):
		case joaat("crusader"):
		case joaat("cuban800"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dinghy"):
		case joaat("dinghy2"):
		case joaat("dinghy3"):
		case joaat("docktrailer"):
		case joaat("docktug"):
		case joaat("dodo"):
		case joaat("dump"):
		case joaat("dune2"):
		case joaat("duster"):
		case joaat("emperor3"):
		case joaat("fbi"):
		case joaat("fbi2"):
		case joaat("firetruk"):
		case joaat("fixter"):
		case joaat("flatbed"):
		case joaat("forklift"):
		case joaat("freight"):
		case joaat("freightcar"):
		case joaat("freightcont1"):
		case joaat("freightcont2"):
		case joaat("freightgrain"):
		case joaat("frogger"):
		case joaat("frogger2"):
		case joaat("gburrito"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("hauler"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("jet"):
		case joaat("jetmax"):
		case joaat("journey"):
		case joaat("lazer"):
		case joaat("limo2"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("mammatus"):
		case joaat("marshall"):
		case joaat("marquis"):
		case joaat("maverick"):
		case joaat("mesa2"):
		case joaat("metrotrain"):
		case joaat("monster"):
		case joaat("miljet"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("phantom"):
		case joaat("police"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("pounder"):
		case joaat("pranger"):
		case joaat("predator"):
		case joaat("proptrailer"):
		case joaat("raketrailer"):
		case joaat("rancherxl2"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("riot"):
		case joaat("ripley"):
		case joaat("rubble"):
		case joaat("rumpo2"):
		case joaat("sadler2"):
		case joaat("savage"):
		case joaat("scrap"):
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("shamal"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
		case joaat("skylift"):
		case joaat("speeder"):
		case joaat("speedo2"):
		case joaat("squalo"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("stretch"):
		case joaat("stunt"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("suntrap"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("taco"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("tankercar"):
		case joaat("taxi"):
		case joaat("technical"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("tiptruck"):
		case joaat("tiptruck2"):
		case joaat("titan"):
		case joaat("toro"):
		case joaat("tourbus"):
		case joaat("tr2"):
		case joaat("tr3"):
		case joaat("tr4"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tractor3"):
		case joaat("trailerlogs"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("trailersmall"):
		case joaat("trash"):
		case joaat("trash2"):
		case joaat("trflat"):
		case joaat("tropic"):
		case joaat("tvtrailer"):
		case joaat("utillitruck"):
		case joaat("utillitruck2"):
		case joaat("utillitruck3"):
		case joaat("valkyrie"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("cargobob4"):
		case joaat("dinghy4"):
		case joaat("seashark3"):
		case joaat("speeder2"):
		case joaat("toro2"):
		case joaat("tropic2"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("valkyrie2"):
		case joaat("dune4"):
		case joaat("ruiner3"):
		case joaat("brickade"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("vetir"):
		case joaat("longfin"):
		case joaat("patrolboat"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("mule5"):
			return 0;
		
		default:
	}
	if (((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("conada"):
		case joaat("conada2"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("streamer216"):
		case joaat("raiju"):
			return 1;
		
		default:
	}
	return 0;
}

int func_374(int iParam0)
{
	if ((Global_22959 || Global_22958) || Global_22960)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 172)
	{
		if (Global_20500.f_1 == 10)
		{
			if (Global_7685 == iParam0)
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
	return 0;
}

void func_375()
{
	int iVar0;
	int iVar1;
	
	if (func_382(PLAYER::PLAYER_ID()))
	{
		if (!func_381())
		{
			if (func_380())
			{
				iVar0 = func_111("OFF_SEAT_RGSIT0");
				StringCopy(&(Global_44123[iVar0 /*32*/].f_8), "MPJAC_SIT", 16);
			}
		}
	}
	else if (func_378(PLAYER::PLAYER_ID()))
	{
		if (!func_377())
		{
			if (func_376())
			{
				iVar1 = func_111("CLB_SEAT_RGSIT0");
				StringCopy(&(Global_44123[iVar1 /*32*/].f_8), "MPJAC_SIT", 16);
			}
		}
	}
}

bool func_376()
{
	return func_111("CLB_SEAT_RGSIT0") != -1;
}

bool func_377()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!func_49(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	switch (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33)
	{
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1114.575f, -3161.203f, -37.87047f };
			Var3 = { 1117.76f, -3161.251f, -35.30797f };
			fVar6 = 2.9375f;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1008.052f, -3171.083f, -39.90714f };
			Var3 = { 1008.271f, -3168.189f, -37.34464f };
			fVar6 = 1.5625f;
			break;
		
		default:
			return 0;
			break;
	}
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, false, true, 0);
}

int func_378(int iParam0)
{
	if (func_379(Global_1853988[iParam0 /*867*/].f_267.f_33, -1))
	{
		return 1;
	}
	return 0;
}

int func_379(int iParam0, int iParam1)
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

bool func_380()
{
	return func_111("OFF_SEAT_RGSIT0") != -1;
}

bool func_381()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!func_49(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	switch (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33)
	{
		case 87:
			Var0 = { -1556.616f, -572.9843f, 107.5237f };
			Var3 = { -1554.045f, -576.6298f, 109.3354f };
			fVar6 = 2.1875f;
			break;
		
		case 88:
			Var0 = { -1370.352f, -463.2942f, 71.04904f };
			Var3 = { -1374.76f, -463.8354f, 72.86154f };
			fVar6 = 2.1875f;
			break;
		
		case 89:
			Var0 = { -125.7556f, -639.4572f, 167.8274f };
			Var3 = { -125.2504f, -643.829f, 169.6399f };
			fVar6 = 2.1875f;
			break;
		
		case 90:
			Var0 = { -81.66152f, -803.5988f, 242.3928f };
			Var3 = { -80.11616f, -799.4528f, 244.2053f };
			fVar6 = 2.1875f;
			break;
		
		default:
			return 0;
			break;
	}
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, false, true, 0);
}

int func_382(int iParam0)
{
	if (func_383(Global_1853988[iParam0 /*867*/].f_267.f_33))
	{
		return 1;
	}
	return 0;
}

int func_383(int iParam0)
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

void func_384()
{
	if (Global_2672524.f_947.f_6 >= 0)
	{
		if (Global_2766622 == 54 || Global_2766622 == 27)
		{
			if (Global_2766716.f_7729 == 0)
			{
				if (HUD::IS_PAUSE_MENU_ACTIVE() || !func_46(PLAYER::PLAYER_ID(), 1, 1))
				{
					Global_2766625 = 1;
					if (Global_1574582.f_1)
					{
						Global_1574582.f_1 = 0;
						Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_9 = 0;
						if (func_46(PLAYER::PLAYER_ID(), 1, 0))
						{
							PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
						}
						PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
						NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
						NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
						NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
					}
				}
			}
		}
	}
}

void func_385()
{
	if (func_317(PLAYER::PLAYER_ID()) && Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_10 == PLAYER::PLAYER_ID())
	{
		if ((!iLocal_66 && !func_87()) && ((((func_58() || func_390()) || func_90()) || func_389()) || func_388()))
		{
			if (Global_2694610)
			{
				func_69(&Local_67, 1, 0);
			}
			else
			{
				Global_2694610 = 1;
				iLocal_66 = 1;
				func_29(&Local_67, 1, 0);
			}
		}
		else if (iLocal_66 && ((func_87() || func_387(Local_67, 1500, 1)) || func_386()))
		{
			Global_2694610 = 0;
			iLocal_66 = 0;
			func_27(&Local_67);
		}
	}
	if ((iLocal_66 && Global_2694610) && !func_170(PLAYER::PLAYER_ID()))
	{
		Global_2694610 = 0;
		iLocal_66 = 0;
		func_27(&Local_67);
	}
}

int func_386()
{
	if (func_280())
	{
		return Global_1950844.f_530 == 0;
	}
	return 0;
}

int func_387(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_30(&iParam0))
	{
		return 0;
	}
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

var func_388()
{
	return BitTest(Global_1048576.f_10, 18);
}

var func_389()
{
	return Global_2672524.f_3575;
}

var func_390()
{
	return Global_1836768.f_78;
}

void func_391()
{
	int iVar0;
	
	if (iLocal_65)
	{
		return;
	}
	if (MISC::IS_PC_VERSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		iLocal_65 = 0;
		return;
	}
	if (func_4(Global_4718592.f_117591) != 4)
	{
		iLocal_65 = 0;
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 79)
	{
		if ((Global_4980736.f_110349[iVar0 /*1098*/].f_27 == joaat("a_m_y_carclub_01") || Global_4980736.f_110349[iVar0 /*1098*/].f_27 == joaat("a_m_y_studioparty_01")) || Global_4980736.f_110349[iVar0 /*1098*/].f_27 == joaat("a_f_y_clubcust_04"))
		{
			Global_4980736.f_110349[iVar0 /*1098*/].f_27 = 0;
		}
		iVar0++;
	}
	iLocal_65 = 1;
}

void func_392()
{
	bool bVar0;
	int iVar1;
	
	if (!func_399(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (((((func_46(PLAYER::PLAYER_ID(), 1, 1) && func_398(PLAYER::PLAYER_ID())) && func_397(PLAYER::PLAYER_ID())) && !func_396(PLAYER::PLAYER_ID())) && !func_395(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_IN())
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			bVar0 = true;
		}
		else
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (!VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("avenger3")))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			func_394(0);
			func_393(0, -1, 1);
		}
	}
}

void func_393(bool bParam0, int iParam1, bool bParam2)
{
	if ((!SCRIPT::IS_THREAD_ACTIVE(Global_2646835.f_1582) || Global_2646835.f_1582 == SCRIPT::GET_ID_OF_THIS_THREAD()) || bParam2)
	{
		if (bParam0)
		{
			Global_2646835.f_1582 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_2646835.f_1583 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_2646835.f_1582 = -1;
		}
		Global_2646835.f_1585 = iParam1;
		Global_2646835.f_1587 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_394(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_6, 21))
		{
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_6), 21);
		}
	}
	else if (BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_6, 21))
	{
		MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_6), 21);
	}
}

int func_395(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_57())
			{
				return func_108(Global_2657704[iParam0 /*463*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_396(int iParam0)
{
	if (iParam0 != func_57())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_307, 30);
	}
	return 0;
}

int func_397(int iParam0)
{
	if (iParam0 != func_57())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_6, 21);
	}
	return 0;
}

int func_398(int iParam0)
{
	if (iParam0 != func_57())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_307, 12);
	}
	return 0;
}

bool func_399(int iParam0)
{
	return func_400(iParam0);
}

int func_400(int iParam0)
{
	if (iParam0 != func_57())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_299, 1);
	}
	return 0;
}

void func_401()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iLocal_63 = 0;
		iLocal_64 = 0;
		return;
	}
	if (Global_4718592.f_117591 != Global_262145.f_33923[0])
	{
		iLocal_63 = 0;
		iLocal_64 = 0;
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		iLocal_63 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_64))
	{
		iLocal_64 = 0;
	}
	if (iLocal_63 == 0)
	{
		iLocal_63 = Global_2794162.f_310;
	}
	if (iLocal_64 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0]))
			{
			}
			else if (ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]) == joaat("draugur"))
			{
				iLocal_64 = Global_1058071.f_233[iVar0];
			}
			else
			{
				iVar0++;
			}
		}
	}
	if (iLocal_63 != 0 && iLocal_64 != 0)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iLocal_64, false) && SYSTEM::VDIST2(-876.92f, -2769.47f, -49.22f, ENTITY::GET_ENTITY_COORDS(iLocal_64, true)) < 25f) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_64) == 0)
		{
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_64, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-880f, -2770f, -49f, "M23_1_dlc_int_01_M23_1"));
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_64, false))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_64) != INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-880f, -2770f, -49f, "M23_1_dlc_int_01_M23_1"))
			{
				return;
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_64))
			{
				NETWORK::NETWORK_EXPLODE_VEHICLE(iLocal_64, true, false, -1);
			}
		}
	}
}

void func_402()
{
	int iVar0;
	
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0) || !Global_2683883.f_24)
	{
		iLocal_62 = 0;
		return;
	}
	if (iLocal_62)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_1750 - 1))
	{
		switch (Global_1978379.f_35)
		{
			case 1:
				Global_4718592.f_180959[iVar0 /*20*/] = 0;
				break;
			
			case 2:
				Global_4718592.f_180959[iVar0 /*20*/] = 1;
				break;
			
			case 3:
				Global_4718592.f_180959[iVar0 /*20*/] = 2;
				break;
			
			case 4:
				Global_4718592.f_180959[iVar0 /*20*/] = 3;
				break;
			
			case 5:
				Global_4718592.f_180959[iVar0 /*20*/] = 4;
				break;
		}
		iVar0++;
	}
	iLocal_62 = 1;
}

void func_403()
{
	if (func_261())
	{
		return;
	}
	if (!func_127())
	{
		return;
	}
	if (!func_88())
	{
		return;
	}
	if (!func_399(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if ((Global_1945123[190] - 1) != 190)
	{
		Global_1945123[190] = 191;
	}
}

void func_404()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (((!iLocal_61 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_SMPL_INTERIOR_EXT")) > 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", 81, false, 0)) && INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1103.562f, -3000f, -40f, "gr_grdlc_int_01") == 0)
	{
		if ((!func_406(PLAYER::PLAYER_ID(), 1, 1) && !func_280()) && !func_405(PLAYER::PLAYER_ID()))
		{
			iLocal_61 = 1;
			MISC::SET_BIT(&(Global_1950844.f_4601), 3);
		}
	}
	else if (((iLocal_61 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_SMPL_INTERIOR_EXT")) > 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", 81, false, 0)) && INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1103.562f, -3000f, -40f, "gr_grdlc_int_01") != 0)
	{
		iLocal_61 = 0;
		MISC::CLEAR_BIT(&(Global_1950844.f_4601), 3);
	}
}

int func_405(int iParam0)
{
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 11))
	{
		return 1;
	}
	return 0;
}

int func_406(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_407()
{
	if (!func_412())
	{
		func_411();
		return;
	}
	func_408(930, 1);
	iLocal_60 = 1;
}

void func_408(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0 || !func_409(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (bParam1)
		{
			if (Global_1956878.f_5713[iVar0] == iParam0)
			{
				return;
			}
			if (Global_1956878.f_5713[iVar0] == 0)
			{
				if (iVar1 == -1)
				{
					iVar1 = iVar0;
				}
			}
		}
		else if (Global_1956878.f_5713[iVar0] == iParam0)
		{
			Global_1956878.f_5713[iVar0] = 0;
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iVar1 > -1)
		{
			Global_1956878.f_5713[iVar1] = iParam0;
		}
	}
}

bool func_409(int iParam0)
{
	return func_410(iParam0, PLAYER::PLAYER_ID());
}

int func_410(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 != func_57() && func_46(iParam1, 0, 1))
	{
		if (Global_1956878.f_5818.f_3 != 0)
		{
			return 1;
		}
		if (iParam0 != 0)
		{
			iVar0 = iParam1;
			if (func_277(iParam1, 1))
			{
				iVar0 = func_140(iParam1);
			}
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (Global_2650208.f_199.f_962[iVar1 /*75*/] == iVar0)
				{
					iVar2 = 0;
					while (iVar2 < 18)
					{
						if (Global_2650208.f_199.f_962[iVar1 /*75*/].f_1[iVar2] == iParam0)
						{
							return 1;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

void func_411()
{
	if (iLocal_60)
	{
		func_408(930, 0);
		iLocal_60 = 0;
	}
}

int func_412()
{
	if (func_413(PLAYER::PLAYER_ID()) != 2)
	{
		return 0;
	}
	if (Global_2794162.f_6788 < 6)
	{
		return 0;
	}
	return 1;
}

int func_413(int iParam0)
{
	if (func_337(iParam0) == 317)
	{
		return func_414(iParam0, 317);
	}
	return -1;
}

int func_414(int iParam0, int iParam1)
{
	if (func_337(iParam0) == iParam1)
	{
		return func_365(iParam0);
	}
	return -1;
}

void func_415()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_413(PLAYER::PLAYER_ID()) != 2)
	{
		return;
	}
	if (!func_49(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!func_49(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (((iVar1 != joaat("cargobob") && iVar1 != joaat("cargobob2")) && iVar1 != joaat("cargobob3")) && iVar1 != joaat("cargobob4"))
	{
		return;
	}
	if (func_158(PLAYER::PLAYER_PED_ID(), 1) != -1)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 103) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 103))
	{
		iVar2 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iVar0);
		if (func_49(iVar2) && ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
		{
			VEHICLE::SET_CARGOBOB_FORCE_DONT_DETACH_VEHICLE(iVar0, false);
			VEHICLE::DETACH_ENTITY_FROM_CARGOBOB(iVar0, iVar2);
		}
	}
}

void func_416()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (func_413(PLAYER::PLAYER_ID()) != 0)
	{
		bVar0 = false;
	}
	if (Global_2794162.f_6788 != 9)
	{
		bVar0 = false;
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		bVar0 = false;
	}
	if (!func_49(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = false;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar0 = false;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!func_49(iVar1))
		{
			bVar0 = false;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iVar1) != joaat("toreador"))
		{
			bVar0 = false;
		}
		else if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (func_158(PLAYER::PLAYER_PED_ID(), 1) == -1)
	{
		bVar0 = false;
	}
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1115.654f, -2273.433f, 28.89841f, 1115.247f, -2278.109f, 30.92747f, 3f, false, true, 0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (!func_30(&uLocal_58))
		{
			func_29(&uLocal_58, 0, 0);
		}
		else if (func_112(&uLocal_58, 10000, 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
		}
	}
	else if (func_30(&uLocal_58))
	{
		func_27(&uLocal_58);
	}
}

void func_417()
{
	if (!iLocal_57)
	{
		if ((func_355(PLAYER::PLAYER_ID()) && BitTest(Global_1950844.f_8, 25)) && func_281() != PLAYER::PLAYER_ID())
		{
			iLocal_57 = 1;
		}
	}
	else
	{
		if (!func_355(PLAYER::PLAYER_ID()))
		{
			iLocal_57 = 0;
			MISC::CLEAR_BIT(&(Global_1950844.f_8), 25);
			return;
		}
		if (((func_418() && Global_1950837 != 3) && !MISC::ARE_STRINGS_EQUAL(&(Global_23390.f_1), "CMOD_MOD_E")) && !Global_1950844.f_3432)
		{
			if (BitTest(Global_1950844.f_8, 25))
			{
				MISC::CLEAR_BIT(&(Global_1950844.f_8), 25);
			}
		}
		else if (!BitTest(Global_1950844.f_8, 25))
		{
			MISC::SET_BIT(&(Global_1950844.f_8), 25);
		}
	}
}

var func_418()
{
	return BitTest(Global_78938, 8);
}

void func_419()
{
	struct<4> Var0;
	struct<4> Var4;
	struct<16> Var8;
	
	if (((Global_2766625 || ((func_46(PLAYER::PLAYER_ID(), 1, 1) && func_88()) && !iLocal_55)) || func_448(17)) || iLocal_56)
	{
		if (!iLocal_55)
		{
		}
		iLocal_55 = 1;
		StringCopy(&Var0, "&#166;", 16);
		StringCopy(&Var4, "&#8249;", 16);
		if (Global_2766625)
		{
		}
		else if (func_448(17))
		{
			iLocal_56 = 1;
		}
		if (func_273(PLAYER::PLAYER_ID()))
		{
			iLocal_56 = 0;
			Var8 = { func_444() };
			if (func_443(&Var8, Var0) || func_443(&Var8, Var4))
			{
				if (func_442(PLAYER::PLAYER_ID()))
				{
					func_429(&Var8, 0, 1);
				}
				else
				{
					func_429(&Var8, 1, 1);
				}
				func_428();
			}
		}
		if (func_427(PLAYER::PLAYER_ID()))
		{
			StringCopy(&Var8, func_423(PLAYER::PLAYER_ID()), 64);
			if (func_443(&Var8, Var0) || func_443(&Var8, Var4))
			{
				func_420(Var8);
			}
		}
	}
}

void func_420(char[64] cParam0)
{
	func_421(55, 56, &cParam0, -1, 1);
	Global_1914706[PLAYER::PLAYER_ID() /*299*/].f_283 = { cParam0 };
}

void func_421(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar10[32];
	int iVar18;
	int iVar19;
	
	iVar0 = func_422(iParam0, iParam3);
	iVar1 = func_422(iParam1, iParam3);
	if (iVar0 != 0 && iVar1 != 0)
	{
		StringCopy(&cVar2, "", 32);
		StringCopy(&cVar10, "", 32);
		iVar18 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
		if (iVar18 > 0)
		{
			iVar19 = 10;
			if (iVar18 < 10)
			{
				iVar19 = iVar18;
			}
			StringCopy(&cVar2, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 0, iVar19, 31), 32);
			if (iVar18 > 10)
			{
				StringCopy(&cVar10, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 10, iVar18, 31), 32);
			}
		}
		STATS::STAT_SET_STRING(iVar0, &cVar2, bParam4);
		STATS::STAT_SET_STRING(iVar1, &cVar10, bParam4);
	}
}

var func_422(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(3, uParam0, func_41(uParam1));
}

char* func_423(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("DEFAULT_LAB_N");
	if (iParam0 == func_57())
	{
		return sVar0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_426(&(Global_1914706[iParam0 /*299*/].f_283));
		return sVar0;
	}
	if (Global_1895156[iParam0 /*609*/].f_10.f_121 != Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121)
	{
		return sVar0;
	}
	if (func_336(iParam0, 28) || (func_336(PLAYER::PLAYER_ID(), 28) && !func_425(iParam0)))
	{
		return sVar0;
	}
	iVar1 = func_140(iParam0);
	if (iVar1 != func_57())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!func_424() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return sVar0;
			}
		}
	}
	if (iVar1 != func_57())
	{
		sVar0 = func_426(&(Global_1914706[iVar1 /*299*/].f_283));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return sVar0;
		}
		else
		{
			return sVar0;
		}
	}
	return sVar0;
}

bool func_424()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_425(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_143(iParam0) };
	if (func_424())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_426(var uParam0)
{
	return uParam0;
}

int func_427(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_479, 14);
}

void func_428()
{
	int iVar0;
	struct<2> Var1;
	
	Var1.f_0 = 2103624094;
	Var1.f_1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0] != func_57())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0]))
			{
				SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var1, 2, func_145(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_429(char* sParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_438(1) || iParam1 == 0)
		{
			func_421(47, 48, sParam0, -1, 1);
			if (func_437() && iParam1 == 0)
			{
				func_436(sParam0, bParam2);
			}
		}
		else
		{
			func_421(119, 121, sParam0, -1, 1);
			if (func_272() && iParam1 == 1)
			{
				func_434(sParam0, bParam2);
			}
		}
	}
	StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_105), sParam0, 64);
	Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121 = LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();
	if ((!func_424() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_432())
	{
		func_431(28);
	}
	else
	{
		func_430(28);
	}
}

void func_430(bool bParam0)
{
	MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}

void func_431(bool bParam0)
{
	MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}

int func_432()
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	if (func_433())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	else if (func_424())
	{
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_433()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_434(char* sParam0, bool bParam1)
{
	struct<16> Var0;
	
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_421(45, 46, sParam0, -1, 1);
			Var0 = { func_435(119, 121, -1) };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				func_421(119, 121, sParam0, -1, 1);
			}
		}
	}
	if ((!func_424() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_432())
	{
		func_431(28);
	}
	else
	{
		func_430(28);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_339), sParam0, 64);
	}
}

struct<16> func_435(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	char cVar18[32];
	
	iVar0 = func_422(iParam0, iParam2);
	iVar1 = func_422(iParam1, iParam2);
	StringCopy(&Var2, STATS::STAT_GET_STRING(iVar0, -1), 64);
	StringCopy(&cVar18, STATS::STAT_GET_STRING(iVar1, -1), 32);
	StringConCat(&Var2, &cVar18, 64);
	return Var2;
}

void func_436(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_421(49, 50, sParam0, -1, 1);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_355), sParam0, 64);
	}
	if ((!func_424() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_432())
	{
		func_431(28);
	}
	else
	{
		func_430(28);
	}
}

bool func_437()
{
	return func_442(PLAYER::PLAYER_ID());
}

bool func_438(bool bParam0)
{
	return func_439(PLAYER::PLAYER_ID(), bParam0);
}

bool func_439(int iParam0, bool bParam1)
{
	return func_440(iParam0, bParam1, 1);
}

int func_440(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_441(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1895156[iParam0 /*609*/].f_10;
	if (iVar0 != func_57() && Global_1895156[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_441(int iParam0, int iParam1)
{
	if (iParam0 != func_57())
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_57())
		{
			if (Global_1895156[iParam0 /*609*/].f_10 == iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_442(int iParam0)
{
	return func_441(iParam0, 1);
}

int func_443(char* sParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<16> Var7;
	
	iVar0 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		iVar3 = MISC::GET_HASH_KEY(&cParam1);
		iVar4 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
		iVar5 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam1);
		iVar6 = 0;
		while (iVar6 <= (iVar4 - 1))
		{
			if ((iVar6 + iVar5) > iVar4)
			{
				return 0;
			}
			else if (MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar6, (iVar6 + iVar5))) == iVar3)
			{
				iVar1 = iVar6;
				iVar2 = (iVar6 + iVar5);
				iVar0 = 1;
			}
			else
			{
				iVar6++;
			}
		}
		if (iVar6 != 0)
		{
			StringConCat(&Var7, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, iVar1), 64);
		}
		if (iVar6 != (iVar4 - iVar5))
		{
			StringConCat(&Var7, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar2, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0)), 64);
		}
		*sParam0 = { Var7 };
	}
	return iVar0;
}

struct<16> func_444()
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = func_140(PLAYER::PLAYER_ID());
	if (iVar0 != func_57())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_336(iVar0, 28) || func_336(PLAYER::PLAYER_ID(), 28)) || func_447(iVar0)) && !func_425(iVar0))
			{
				StringCopy(&Var1, func_445(iVar0, 0), 64);
				return Var1;
			}
			if (!func_424() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				StringCopy(&Var1, func_445(iVar0, 0), 64);
				return Var1;
			}
		}
		return Global_1895156[iVar0 /*609*/].f_10.f_105;
	}
	StringCopy(&Var1, "", 64);
	return Var1;
}

char* func_445(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_439(iParam0, 1))
		{
			return func_446();
		}
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC");
}

char* func_446()
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM");
}

int func_447(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_57())
	{
		Var0 = { func_143(iParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_424() || MISC::IS_PROSPERO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool func_448(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2794162.f_5231.f_7[iVar0], iVar1);
}

void func_449()
{
	if (((func_196() == 3 && func_450()) && func_58()) && func_12(Global_4718592.f_117591))
	{
		NETWORK::NETWORK_BAIL(51, 0, 0);
	}
}

var func_450()
{
	return BitTest(Global_2684820.f_1.f_2809, 5);
}

void func_451()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar49;
	float fVar50;
	struct<3> Var51;
	
	if (func_30(&uLocal_14))
	{
		MISC::SET_BIT(&Global_8371, 2);
		if (func_112(&uLocal_14, 60000, 0))
		{
			func_69(&uLocal_14, 0, 0);
			func_27(&uLocal_14);
		}
	}
	if (func_30(&uLocal_12) && func_112(&uLocal_12, 1000, 0))
	{
		if (iLocal_21 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_21 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_21, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_112(&uLocal_12, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_21))
			{
				AUDIO::STOP_SOUND(iLocal_21);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_21);
			iLocal_21 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_69(&uLocal_12, 0, 0);
			func_27(&uLocal_12);
		}
	}
	if (!iLocal_6 && !func_458())
	{
		return;
	}
	iLocal_6 = 1;
	MISC::SET_BIT(&Global_8371, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_5 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 360.8759f, 5623.427f, 780.1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_5, true);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_5, 8000);
			iVar1 = func_45(7869, -1);
			func_39(7869, iVar1 + 1, -1, 1);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&Var2);
			Local_16 = { ENTITY::GET_ENTITY_COORDS(iLocal_5, false) };
			iLocal_19 = 0;
		}
	}
	else
	{
		func_457();
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_20 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_20 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_20, "07", iLocal_5, "DLC_GR_CS2_Sounds", false, 0);
			}
			if (!iLocal_7)
			{
				if (func_112(&uLocal_8, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_5, false);
					func_69(&uLocal_8, 0, 0);
					func_27(&uLocal_8);
					func_29(&uLocal_10, 0, 0);
					iLocal_7 = 1;
				}
			}
			else
			{
				fVar49 = (SYSTEM::TO_FLOAT(func_456(&uLocal_10, 0, 0)) / SYSTEM::TO_FLOAT(func_455()));
				fVar50 = (SYSTEM::TO_FLOAT(func_456(&uLocal_8, 0, 0)) / SYSTEM::TO_FLOAT(func_454()));
				fVar50 = (fVar50 * fVar49);
				Var51 = { func_452(Local_16, func_453(), fVar50) };
				ENTITY::SET_ENTITY_COORDS(iLocal_5, Var51, true, false, false, true);
				if (fVar50 >= 1f)
				{
					iLocal_19++;
					Local_16 = { ENTITY::GET_ENTITY_COORDS(iLocal_5, false) };
					func_69(&uLocal_8, 0, 0);
					func_27(&uLocal_8);
					if (func_454() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_5);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_20))
						{
							AUDIO::STOP_SOUND(iLocal_20);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_20);
						iLocal_20 = -1;
						func_29(&uLocal_12, 0, 0);
						func_29(&uLocal_14, 0, 0);
						func_69(&uLocal_10, 0, 0);
						func_27(&uLocal_10);
						Local_16 = { 0f, 0f, 0f };
						iLocal_19 = 0;
						iLocal_6 = 0;
						iLocal_7 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_452(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_453()
{
	switch (iLocal_19)
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

int func_454()
{
	switch (iLocal_19)
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

int func_455()
{
	return 3150;
}

int func_456(var uParam0, bool bParam1, bool bParam2)
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

void func_457()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_5, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_5, Var0, 2, true);
}

int func_458()
{
	if (((((((func_16(22107, -1) && Global_2639889 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_461(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2684820.f_3076.f_178 >= 1) && Global_2684820.f_3076.f_178 < 4) && func_460()) && func_459())
	{
		return 1;
	}
	return 0;
}

int func_459()
{
	if (func_16(15476, -1) && func_45(5453, func_11()) > 577)
	{
		return 1;
	}
	return 0;
}

int func_460()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	MISC::GET_CURR_WEATHER_STATE(&iVar0, &iVar1, &fVar2);
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

bool func_461(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

void func_462()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		func_465();
	}
	else
	{
		func_463();
	}
}

void func_463()
{
	bool bVar0;
	
	if (iLocal_46 == 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < 26)
	{
		if (BitTest(iLocal_46, bVar0))
		{
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_464(bVar0), false);
			MISC::CLEAR_BIT(&iLocal_46, bVar0);
		}
		bVar0++;
	}
	iLocal_47 = 0;
	Global_2766715 = 0;
}

char* func_464(bool bParam0)
{
	switch (bParam0)
	{
		case 9:
			return "RADIO_01_CLASS_ROCK";
		
		case 10:
			return "RADIO_02_POP";
		
		case 12:
			return "RADIO_03_HIPHOP_NEW";
		
		case 18:
			return "RADIO_04_PUNK";
		
		case 17:
			return "RADIO_06_COUNTRY";
		
		case 15:
			return "RADIO_07_DANCE_01";
		
		case 16:
			return "RADIO_08_MEXICAN";
		
		case 11:
			return "RADIO_09_HIPHOP_OLD";
		
		case 23:
			return "RADIO_11_TALK_02";
		
		case 22:
			return "RADIO_12_REGGAE";
		
		case 5:
			return "RADIO_13_JAZZ";
		
		case 6:
			return "RADIO_14_DANCE_02";
		
		case 21:
			return "RADIO_15_MOTOWN";
		
		case 13:
			return "RADIO_20_THELAB";
		
		case 14:
			return "RADIO_16_SILVERLAKE";
		
		case 20:
			return "RADIO_17_FUNK";
		
		case 19:
			return "RADIO_18_90S_ROCK";
		
		case 8:
			return "RADIO_21_DLC_XM17";
		
		case 24:
			return "RADIO_05_TALK_01";
		
		case 2:
			return "RADIO_27_DLC_PRHEI4";
		
		case 4:
			return "RADIO_23_DLC_XM19_RADIO";
		
		case 7:
			return "RADIO_22_DLC_BATTLE_MIX1_RADIO";
		
		case 0:
			return "RADIO_36_AUDIOPLAYER";
		
		case 1:
			return "RADIO_35_DLC_HEI4_MLR";
		
		case 3:
			return "RADIO_34_DLC_HEI4_KULT";
		
		case 25:
			return "RADIO_37_MOTOMAMI";
		
		default:
	}
	return "OFF";
}

void func_465()
{
	int iVar0;
	bool bVar1;
	
	if (!func_466(Global_4718592.f_117591))
	{
		return;
	}
	iVar0 = func_45(9877, -1);
	if (iVar0 == 0)
	{
		return;
	}
	bVar1 = false;
	while (bVar1 < 26)
	{
		if (!BitTest(iLocal_47, bVar1))
		{
			if (BitTest(iVar0, bVar1))
			{
			}
			MISC::SET_BIT(&iLocal_47, bVar1);
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_464(bVar1), true);
		}
		if (BitTest(iVar0, bVar1) && !BitTest(iLocal_46, bVar1))
		{
			MISC::SET_BIT(&iLocal_46, bVar1);
			Global_2766715 = 1;
		}
		bVar1++;
	}
}

int func_466(int iParam0)
{
	if ((iParam0 == Global_262145.f_31929[0] || iParam0 == Global_262145.f_31929[1]) || iParam0 == Global_262145.f_31929[2])
	{
		return 1;
	}
	return 0;
}

void func_467()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0)
	{
		if (!iLocal_45)
		{
			iLocal_45 = 1;
		}
	}
	else if (iLocal_45)
	{
		MISC::CLEAR_OVERRIDE_WEATHER();
		iLocal_45 = 0;
	}
}

void func_468()
{
	int iVar0;
	
	if (func_58() && func_475(Global_4718592.f_171044))
	{
		if (func_474() == 26)
		{
			iVar0 = func_469();
			if (iVar0 != -1)
			{
				if (func_30(&(Global_1890739[iVar0 /*138*/].f_31)))
				{
					if (func_112(&(Global_1890739[iVar0 /*138*/].f_31), 37500, 0))
					{
						iLocal_44 = 1;
						Global_2684820.f_6341 = -1;
					}
				}
			}
		}
		else if (func_474() == 41)
		{
			if (iLocal_44)
			{
				iLocal_44 = 0;
				Global_2684820.f_6341 = -1;
			}
		}
	}
}

int func_469()
{
	return func_470();
}

int func_470()
{
	struct<13> Var0;
	
	Var0 = { func_472() };
	if (func_471(Var0))
	{
		return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
	}
	return func_57();
}

bool func_471(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> func_472()
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_473(iVar0))
		{
			return Global_2684820.f_1.f_845[iVar0 /*57*/];
		}
		iVar0++;
	}
	return Var1;
}

bool func_473(int iParam0)
{
	return BitTest(Global_2684820.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

int func_474()
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192;
}

bool func_475(int iParam0)
{
	return iParam0 == 88;
}

void func_476()
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_262145.f_33923[0] == Global_4718592.f_117591) && (Global_1058071.f_14[0] >= 4 || Global_1058071.f_14[0] <= 6))
	{
		Var0 = { func_479(101) };
		bVar3 = OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 2961.077f, 2743.28f, 40.7426f, 2957.497f, 2756.674f, 45.11757f, 15f, false, true);
		if (!func_478())
		{
			if (bVar3 || Global_1058071.f_14[0] == 5)
			{
				iVar5 = func_477(&iVar4);
				if (((iVar4 >= 0 && iVar4 < 4) && iVar5 >= 0) || iVar5 < 17)
				{
					MISC::SET_BIT(&(Global_4718592.f_1816[iVar4 /*24279*/].f_8212[iVar5]), 12);
				}
			}
		}
		else if ((!bVar3 && Global_1058071.f_14[0] < 5) || Global_1058071.f_14[0] > 5)
		{
			iVar7 = func_477(&iVar6);
			if (((iVar6 >= 0 && iVar6 < 4) && iVar7 >= 0) || iVar7 < 17)
			{
				MISC::CLEAR_BIT(&(Global_4718592.f_1816[iVar6 /*24279*/].f_8212[iVar7]), 12);
			}
		}
	}
}

var func_477(var uParam0)
{
	*uParam0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (*uParam0 < 4 && *uParam0 > -1)
	{
	}
	else
	{
		*uParam0 = 0;
	}
	return Global_1058071.f_14[*uParam0];
}

int func_478()
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	iVar1 = func_477(&iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return 0;
	}
	if (iVar1 < 0 || iVar1 >= 17)
	{
		return 0;
	}
	return BitTest(Global_4718592.f_1816[iVar0 /*24279*/].f_8212[iVar1], 12);
}

Vector3 func_479(int iParam0)
{
	switch (iParam0)
	{
		case 101:
			return func_480();
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_480()
{
	struct<3> Var0;
	int iVar3;
	var uVar4;
	
	Var0 = { 0f, 0f, 0f };
	iVar3 = func_481();
	if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar3, 0f, -8f, -0.6f) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar4, false, false) && !ENTITY::IS_ENTITY_IN_AIR(iVar3))
		{
			Var0 = { Var0.f_0, Var0.f_1, uVar4 };
		}
		else
		{
			Var0 = { Var0.f_0, Var0.f_1, (Var0.f_2 - 1.5f) };
		}
	}
	return Var0;
}

var func_481()
{
	int iVar0;
	var uVar1[25];
	int iVar27;
	int iVar28;
	var uVar29[25];
	int iVar55;
	
	if (func_277(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() != func_270())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310))
			{
				iVar27 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
				iVar0 = 0;
				while (iVar0 < iVar27)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar1[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar1[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uVar1[iVar0], false))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
							{
								if (VEHICLE::IS_VEHICLE_MODEL(uVar1[iVar0], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(uVar1[iVar0], func_275(1)))
								{
									if (func_482(uVar1[iVar0]) == func_270())
									{
										Global_2794162.f_310 = uVar1[iVar0];
										return uVar1[iVar0];
									}
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				return Global_2794162.f_310;
			}
		}
	}
	else if (PLAYER::PLAYER_ID() == func_270() && !ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310))
	{
		iVar55 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar29);
		iVar28 = 0;
		while (iVar28 < iVar55)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uVar29[iVar28]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar29[iVar28]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar29[iVar28], false))
				{
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(uVar29[iVar28], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(uVar29[iVar28], func_275(1)))
						{
							if (func_482(uVar29[iVar28]) == PLAYER::PLAYER_ID())
							{
								Global_2794162.f_310 = uVar29[iVar28];
								return uVar29[iVar28];
							}
						}
					}
				}
			}
			iVar28++;
		}
	}
	return Global_2794162.f_310;
}

int func_482(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, func_275(1)))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "Creator_Trailer"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Creator_Trailer");
					return func_149(iVar0, 0, 1, 0);
				}
			}
		}
	}
	return func_57();
}

void func_483()
{
	int iVar0;
	
	iLocal_43++;
	if (iLocal_43 == 30)
	{
		iLocal_43 = 0;
	}
	else
	{
		return;
	}
	if (((((((((!func_49(PLAYER::PLAYER_PED_ID()) || !func_46(PLAYER::PLAYER_ID(), 1, 1)) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) || !func_88()) || func_106(PLAYER::PLAYER_ID())) || func_405(PLAYER::PLAYER_ID())) || func_170(PLAYER::PLAYER_ID())) || Global_2672524.f_3542) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_49(iVar0))
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

void func_484()
{
	if (Global_2672524.f_62.f_57)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_299) && !ENTITY::IS_ENTITY_DEAD(Global_2794162.f_299, false))
		{
			if (!Global_2672524.f_62.f_21)
			{
				if (iLocal_27 == -1)
				{
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(Global_2794162.f_299, "PV_Slot"))
						{
							iLocal_27 = DECORATOR::DECOR_GET_INT(Global_2794162.f_299, "PV_Slot");
						}
					}
				}
				else if (Global_2359296[func_42() /*5568*/].f_681.f_2 != iLocal_27)
				{
					if (!func_30(&uLocal_25))
					{
						func_29(&uLocal_25, 1, 0);
					}
					else if (func_112(&uLocal_25, 10000, 1))
					{
						func_485(1, 0, 1, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_27(&uLocal_25);
				iLocal_27 = -1;
			}
		}
		else
		{
			func_27(&uLocal_25);
			iLocal_27 = -1;
		}
	}
	else
	{
		func_27(&uLocal_25);
		iLocal_27 = -1;
	}
}

void func_485(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_489() < 0 && Global_1963618)
	{
		return;
	}
	if (func_315(35))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2672524.f_62.f_60, 3))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2672524.f_62.f_64, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (BitTest(Global_2672524.f_62.f_68, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (bParam0)
	{
		func_488(2);
	}
	else
	{
		func_488(1);
	}
	if (bParam1)
	{
		func_488(11);
	}
	if (bParam2)
	{
		func_488(32);
		if (bParam3)
		{
			if (func_489() >= 0 && BitTest(Global_1586488[func_489() /*142*/].f_103, 0))
			{
				func_488(33);
			}
		}
		else
		{
			func_487(33);
		}
		if (func_489() >= 0)
		{
			if (func_486(Global_1586488[func_489() /*142*/].f_66))
			{
				func_488(40);
			}
		}
	}
	else if (bParam5)
	{
		func_488(37);
	}
	if (bParam4)
	{
		func_488(36);
	}
	if (func_315(36))
	{
		if (func_315(2))
		{
			func_487(36);
		}
	}
	if (bParam6)
	{
		func_488(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2794162.f_440 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_486(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_487(bool bParam0)
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_2672524.f_62.f_1, bParam0))
		{
			MISC::CLEAR_BIT(&(Global_2672524.f_62.f_1), bParam0);
		}
	}
	else if (BitTest(Global_2672524.f_62.f_2, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2672524.f_62.f_2), (bParam0 - 32));
	}
}

void func_488(bool bParam0)
{
	if (bParam0 < 32)
	{
		if (!BitTest(Global_2672524.f_62.f_1, bParam0))
		{
			MISC::SET_BIT(&(Global_2672524.f_62.f_1), bParam0);
		}
	}
	else if (!BitTest(Global_2672524.f_62.f_2, (bParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2672524.f_62.f_2), (bParam0 - 32));
	}
}

int func_489()
{
	if (Global_2359296[func_42() /*5568*/].f_681.f_2 >= 415)
	{
		Global_2359296[func_42() /*5568*/].f_681.f_2 = -1;
		return -1;
	}
	return Global_2359296[func_42() /*5568*/].f_681.f_2;
}

void func_490()
{
	if (func_185(PLAYER::PLAYER_ID()) && func_281() == PLAYER::PLAYER_ID())
	{
		if (((PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_WARNING_MESSAGE_ACTIVE()) || func_90()) || NETWORK::NETWORK_SESSION_IS_AWAITING_INVITE_RESPONSE())
		{
			func_69(&uLocal_22, 1, 0);
			Global_1950697 = 1;
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || NETWORK::NETWORK_SESSION_IS_AWAITING_INVITE_RESPONSE())
			{
				iLocal_24 = 30000;
			}
		}
	}
	if (func_30(&uLocal_22))
	{
		if (func_112(&uLocal_22, iLocal_24, 1))
		{
			func_27(&uLocal_22);
			Global_1950697 = 0;
			iLocal_24 = 10000;
		}
	}
}

void func_491()
{
	if (!func_493() && !func_492())
	{
		if (!STATS::STAT_IS_STATS_TRACKING_ENABLED())
		{
			if (((func_88() && func_46(PLAYER::PLAYER_ID(), 0, 1)) && CAM::IS_SCREEN_FADED_IN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				STATS::STAT_ENABLE_STATS_TRACKING();
			}
		}
	}
}

bool func_492()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("animal_controller")) > 0;
}

bool func_493()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0;
}

void func_494()
{
	if ((Global_112755 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0) && func_88())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_495()
{
	int iVar0;
	
	if (!iLocal_4)
	{
		if (Global_1836398)
		{
			iVar0 = func_496(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10765 = 1;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1836398)
	{
		iLocal_4 = 0;
	}
}

int func_496(int iParam0)
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

void func_497()
{
	if (!iLocal_3)
	{
		if (Global_1836398)
		{
			if (func_499() || func_498())
			{
				Global_262145.f_20349 = 1;
			}
			else
			{
				Global_262145.f_20349 = 0;
			}
			iLocal_3 = 1;
		}
	}
	else if (!Global_1836398)
	{
		iLocal_3 = 0;
	}
}

int func_498()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_496(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10874)
	{
		return 0;
	}
	uVar1[0] = func_496(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_496(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_496(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_496(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10870 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10874)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_499()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_496(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10873)
	{
		return 0;
	}
	uVar1[0] = func_496(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_496(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_496(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_496(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10869 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10873)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_500()
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			MISC::SET_BIT(&(Global_1853988[iVar0 /*867*/].f_801), true);
			iVar0++;
		}
	}
}

void func_501()
{
	if (Global_262145.f_10849 != 120)
	{
		Global_262145.f_10849 = 120;
	}
}

void func_502()
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
	
	if (!func_506())
	{
		return;
	}
	if (iLocal_726 && iLocal_727)
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32968) / SYSTEM::TO_FLOAT(Global_262145.f_32960)));
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32964) / SYSTEM::TO_FLOAT(Global_262145.f_32960)));
	iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32969) / SYSTEM::TO_FLOAT(Global_262145.f_32961)));
	iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32965) / SYSTEM::TO_FLOAT(Global_262145.f_32961)));
	iVar4 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32970) / SYSTEM::TO_FLOAT(Global_262145.f_32962)));
	iVar5 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32966) / SYSTEM::TO_FLOAT(Global_262145.f_32962)));
	iVar6 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32971) / SYSTEM::TO_FLOAT(Global_262145.f_32963)));
	iVar7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_32967) / SYSTEM::TO_FLOAT(Global_262145.f_32963)));
	if (!iLocal_726)
	{
		iVar8 = SYSTEM::ROUND((SYSTEM::TO_FLOAT((iVar1 + iVar0)) / 2f));
		iVar9 = SYSTEM::ROUND((SYSTEM::TO_FLOAT((iVar3 + iVar2)) / 2f));
		iVar10 = SYSTEM::ROUND((SYSTEM::TO_FLOAT((iVar5 + iVar4)) / 2f));
		iVar11 = SYSTEM::ROUND((SYSTEM::TO_FLOAT((iVar7 + iVar6)) / 2f));
		func_39(11831, iVar8, -1, 1);
		func_39(11832, iVar9, -1, 1);
		func_39(11833, iVar10, -1, 1);
		func_39(11834, iVar11, -1, 1);
		func_39(11835, iVar8, -1, 1);
		func_39(11836, iVar9, -1, 1);
		func_39(11837, iVar10, -1, 1);
		func_39(11838, iVar11, -1, 1);
		func_39(11839, iVar8, -1, 1);
		func_39(11840, iVar9, -1, 1);
		func_39(11841, iVar10, -1, 1);
		func_39(11842, iVar11, -1, 1);
		iLocal_726 = 1;
	}
	if (((((iLocal_726 && !iLocal_727) && Global_2794162.f_6751[0 /*10*/] != -1) && Global_2794162.f_6751[1 /*10*/] != -1) && Global_2794162.f_6751[2 /*10*/] != -1) && Global_2794162.f_6818.f_3 != -1)
	{
		NETWORK::NETWORK_SEED_RANDOM_NUMBER_GENERATOR(Global_2794162.f_6818.f_3);
		func_503(0);
		func_503(1);
		func_503(2);
		NETWORK::NETWORK_SEED_RANDOM_NUMBER_GENERATOR(NETWORK::GET_CLOUD_TIME_AS_INT());
		iLocal_727 = 1;
	}
}

void func_503(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	Global_2794162.f_6751[iParam0 /*10*/].f_2 = func_504(2, Global_2794162.f_6751[iParam0 /*10*/].f_1);
	Global_2794162.f_6751[iParam0 /*10*/].f_3 = func_504(3, Global_2794162.f_6751[iParam0 /*10*/].f_1);
	Global_2794162.f_6751[iParam0 /*10*/].f_4 = func_504(4, Global_2794162.f_6751[iParam0 /*10*/].f_1);
	Global_2794162.f_6751[iParam0 /*10*/].f_5 = func_504(7, Global_2794162.f_6751[iParam0 /*10*/].f_1);
	iVar0 = Global_2794162.f_6751[iParam0 /*10*/].f_2;
	iVar1 = Global_2794162.f_6751[iParam0 /*10*/].f_3;
	iVar2 = Global_2794162.f_6751[iParam0 /*10*/].f_4;
	iVar3 = Global_2794162.f_6751[iParam0 /*10*/].f_5;
	if (iParam0 == 0)
	{
		func_39(11831, iVar0, -1, 1);
		func_39(11832, iVar1, -1, 1);
		func_39(11833, iVar2, -1, 1);
		func_39(11834, iVar3, -1, 1);
	}
	else if (iParam0 == 1)
	{
		func_39(11835, iVar0, -1, 1);
		func_39(11836, iVar1, -1, 1);
		func_39(11837, iVar2, -1, 1);
		func_39(11838, iVar3, -1, 1);
	}
	else if (iParam0 == 2)
	{
		func_39(11839, iVar0, -1, 1);
		func_39(11840, iVar1, -1, 1);
		func_39(11841, iVar2, -1, 1);
		func_39(11842, iVar3, -1, 1);
	}
}

int func_504(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 2:
			iVar2 = (Global_262145.f_32968 - Global_262145.f_32964);
			iVar3 = func_505(iVar2);
			iVar1 = (Global_262145.f_32964 + iVar3);
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(Global_262145.f_32960)));
			break;
		
		case 3:
			iVar2 = (Global_262145.f_32969 - Global_262145.f_32965);
			iVar3 = func_505(iVar2);
			iVar1 = (Global_262145.f_32965 + iVar3);
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(Global_262145.f_32961)));
			break;
		
		case 4:
			iVar2 = (Global_262145.f_32970 - Global_262145.f_32966);
			iVar3 = func_505(iVar2);
			iVar1 = (Global_262145.f_32966 + iVar3);
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(Global_262145.f_32962)));
			break;
		
		case 7:
			iVar2 = (Global_262145.f_32971 - Global_262145.f_32967);
			iVar3 = func_505(iVar2);
			iVar1 = (Global_262145.f_32967 + iVar3);
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(Global_262145.f_32963)));
			break;
	}
	if (iParam0 == iParam1)
	{
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_32976));
	}
	return iVar0;
}

int func_505(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, iParam0 + 1);
	iVar1 = (iVar0 % 100);
	if (iVar1 < 50)
	{
		iVar0 = (iVar0 - iVar1);
	}
	else
	{
		iVar0 = (iVar0 + (100 - iVar1));
	}
	if (iVar0 > iParam0)
	{
		return iParam0;
	}
	return iVar0;
}

int func_506()
{
	if (func_508() && func_507(0))
	{
		return 1;
	}
	return 0;
}

var func_507(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_508()
{
	return func_507(func_11() + 1);
}

void func_509()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_510(0.69f, 0.06f, "STRING", sLocal_0);
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

void func_510(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_511()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_512()
{
	Global_112837 = 1;
}

void func_513()
{
	var uVar0;
	
	if (iLocal_29)
	{
		if ((((((func_123() == -1 && func_517() == 999) && func_88()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !CAM::IS_SCREEN_FADING_OUT())
		{
			Global_32561 = 0;
			iLocal_29 = 0;
			STATS::STAT_SET_BLOCK_SAVES(false);
			func_514();
		}
	}
	if (!iLocal_28)
	{
		NETWORK::NETWORK_GET_LOCAL_HANDLE(&Local_30, 13);
		if (func_471(Local_30))
		{
			iLocal_28 = 1;
		}
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692776.f_3)
	{
		NETWORK::NETWORK_GET_LOCAL_HANDLE(&uVar0, 13);
		if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&uVar0, &Local_30))
		{
			NETWORK::NETWORK_BAIL(0, 0, 0);
			STATS::STAT_SET_BLOCK_SAVES(true);
			if (!Global_32561)
			{
				Global_32561 = 1;
				iLocal_29 = 1;
			}
			iLocal_28 = 0;
		}
	}
}

void func_514()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_515(0, iVar0);
		STATS::STAT_CLEAR_SLOT_FOR_RELOAD(iVar0);
		iVar0++;
	}
	STATS::FORCE_CLOUD_MP_STATS_DOWNLOAD_AND_OVERWRITE_LOCAL_SAVE();
}

void func_515(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		func_516();
	}
	Global_1574538[iParam1] = iParam0;
}

void func_516()
{
	Global_2694561 = 0;
}

int func_517()
{
	return Global_32284;
}

