void main()
{
    l_U102 = 0;
    l_U103 = 1;
    l_U104 = 3;
    l_U106 = 0;
    l_U123 = -1;
    l_U127 = 0;
    l_U128 = 1;
    l_U129 = 1;
    l_U137 = 150.00000000;
    l_U227 = 0;
    l_U228 = 150.00000000;
    l_U278 = 0;
    l_U481 = {0.00000000, 0.00000000, 0.00000000};
    l_U599 = {1.00000000, 1.00000000, 1.00000000};
    l_U602 = {0.00000000, 1.00000000, 0.00000000};
    l_U605 = {0.00000000, -1.00000000, 0.00000000};
    l_U618 = 0;
    l_U619 = 0;
    l_U630 = 100.00000000;
    l_U631 = 10.50000000;
    l_U632 = 0.50000000;
    l_U633 = 2.85000000;
    l_U638 = 0;
    l_U639 = 0;
    l_U656 = 0;
    l_U657 = 0;
    l_U658 = 0;
    l_U659 = 0;
    l_U660 = 0;
    l_U661 = 0;
    l_U662 = 0;
    l_U663 = 0;
    l_U664 = 0;
    l_U665 = 0;
    l_U666 = 0;
    l_U667 = {1038.94300000, -572.60780000, 14.18650000};
    l_U670 = {2277.81900000, 174.46560000, 4.71870000};
    l_U673 = {774.78030000, 123.46440000, 4.85360000};
    l_U676 = 13.19760000;
    l_U677 = {1046.92000000, -578.79180000, 13.99650000};
    l_U680 = 187.35630000;
    l_U681 = {786.04680000, 125.42390000, 6.02500000};
    l_U684 = {775.58570000, 122.84580000, 4.89460000};
    l_U687 = 330.41460000;
    l_U688 = {777.03440000, 123.55710000, 4.89460000};
    l_U691 = 175.36830000;
    l_U694 = 0;
    l_U695 = 0;
    l_U696 = 0;
    l_U697 = 0;
    l_U698 = 1;
    l_U699 = 0;
    l_U700 = 1;
    l_U701 = 0;
    l_U704 = 0;
    l_U718 = 0;
    l_U719 = 0;
    l_U774 = 0;
    l_U775 = 0;
    l_U777 = 0;
    l_U784 = 30.00000000;
    l_U791 = "R14_ARR";
    l_U798 = "R14_MACH";
    l_U805 = "R14_FOOT";
    l_U812 = "R14_B2V2";
    l_U819 = "R14_B2V1";
    l_U826 = "R14_ARRB";
    l_U833 = "R14_PLEAD";
    l_U840 = "R14_DOIT";
    l_U847 = "R14_LEAVE";
    l_U854 = "R14_KILL";
    l_U861 = "R14_KILLS";
    l_U868 = "R14_B1V1";
    l_U875 = "R14_B1V2";
    l_U882 = "R14_SILENCE";
    l_U889 = "R14_2GO";
    l_U896 = "R14_SHOOT";
    l_U903 = "R14_SHOOT2";
    l_U904 = 0;
    l_U905 = 0;
    l_U906 = 18;
    l_U908 = 4;
    l_U909 = 386513184;
    l_U910 = 970598228;
    l_U911 = -810318068;
    l_U912 = -999506922;
    l_U913 = -999506922;
    l_U941 = 0;
    l_U942 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_972();
        sub_3082();
    }
    sub_3444();
    while (true)
    {
        WAIT( 0 );
        sub_4725();
        if (l_U694 == 1)
        {
            sub_5076();
        }
        if (l_U695 == 1)
        {
            sub_17494();
        }
        if (IS_PLAYER_PLAYING( sub_6868() ))
        {
            switch (l_U656)
            {
                case 0:
                sub_18107();
                l_U656 = 1;
                break;
                case 1:
                GET_GAME_TIMER( ref l_U769 );
                l_U656 = 2;
                break;
                case 2:
                sub_18183();
                break;
                case 3:
                sub_22521();
                break;
                case 4:
                sub_25467();
                GET_GAME_TIMER( ref l_U756 );
                l_U757 = l_U756 - l_U755;
                if (l_U757 > 1000)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        if (sub_28256())
                        {
                            l_U656 = 5;
                        }
                    }
                }
                break;
                case 5:
                CLEAR_PRINTS();
                if (NOT (IS_CHAR_DEAD( l_U917 )))
                {
                    SET_CHAR_RELATIONSHIP( l_U917, 1, 0 );
                    CLEAR_CHAR_TASKS( l_U917 );
                }
                if (DOES_BLIP_EXIST( l_U921 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U921, 0 );
                    SET_ROUTE( l_U921, 0 );
                    CHANGE_BLIP_COLOUR( l_U921, 3 );
                }
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3227(), 0 );
                ALLOW_EMERGENCY_SERVICES( 1 );
                if (DOES_BLIP_EXIST( l_U922 ))
                {
                    REMOVE_BLIP( l_U922 );
                }
                SET_EVERYONE_IGNORE_PLAYER( sub_6868(), 0 );
                if (NOT (DOES_BLIP_EXIST( l_U924 )))
                {
                    ADD_BLIP_FOR_COORD( l_U670._fU0, l_U670._fU4, l_U670._fU8, ref l_U924 );
                }
                if (DOES_BLIP_EXIST( l_U924 ))
                {
                    SET_ROUTE( l_U924, 1 );
                    CHANGE_BLIP_COLOUR( l_U924, 5 );
                    CHANGE_BLIP_DISPLAY( l_U924, 4 );
                }
                if (DOES_BLIP_EXIST( l_U921 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U921, 0 );
                }
                sub_28699( ref l_U924, 2237.32600000, 190.97090000, 4.92380000, 292.18120000 );
                if (NOT (IS_CHAR_DEAD( l_U917 )))
                {
                    if (NOT (IS_GROUP_MEMBER( l_U917, sub_27199() )))
                    {
                        SET_GROUP_MEMBER( sub_27199(), l_U917 );
                    }
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U917, 0 );
                }
                l_U656 = 6;
                break;
                case 6:
                sub_28837();
                break;
                case 7:
                sub_33527();
                GET_GAME_TIMER( ref l_U759 );
                l_U760 = l_U759 - l_U758;
                if (l_U760 > 1000)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        if (sub_28256())
                        {
                            l_U656 = 8;
                        }
                    }
                }
                break;
                case 8:
                sub_35849( ref l_U931 );
                l_U656 = 9;
                break;
                case 9:
                sub_35886();
                break;
                case 10:
                g_U8707 = 1;
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 3000 );
                }
                SET_PLAYER_CONTROL( sub_6868(), 1 );
                PRINT_HELP_FOREVER( "roman14_help" );
                REMOVE_CAR_RECORDING( 75 );
                if (DOES_BLIP_EXIST( l_U924 ))
                {
                    REMOVE_BLIP( l_U924 );
                }
                ADD_BLIP_FOR_COORD( l_U673._fU0, l_U673._fU4, l_U673._fU8, ref l_U925 );
                if (DOES_BLIP_EXIST( l_U925 ))
                {
                    CHANGE_BLIP_COLOUR( l_U925, 5 );
                    CHANGE_BLIP_DISPLAY( l_U925, 0 );
                }
                SET_EVERYONE_IGNORE_PLAYER( sub_6868(), 0 );
                GET_GAME_TIMER( ref l_U755 );
                ALLOW_EMERGENCY_SERVICES( 1 );
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    SET_PED_DIES_WHEN_INJURED( l_U918, 1 );
                }
                SET_WANTED_MULTIPLIER( 0.00000000 );
                if (NOT (IS_CHAR_INJURED( l_U918 )))
                {
                    TASK_LOOK_AT_CHAR( l_U918, sub_3227(), -2, 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U917 )))
                {
                    TASK_LOOK_AT_CHAR( l_U917, sub_3227(), 80000, 0 );
                }
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U926 );
                l_U656 = 11;
                break;
                case 11:
                g_U8707 = 1;
                sub_37736( l_U918, "plead", "missroman14" );
                if (l_U773 > 0)
                {
                    if (DOES_BLIP_EXIST( l_U923 ))
                    {
                        sub_37996( ref l_U923, ref l_U772 );
                    }
                }
                if (sub_38121( l_U918 ))
                {
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    l_U656 = 12;
                    break;
                }
                switch (l_U773)
                {
                    case 0:
                    GET_GAME_TIMER( ref l_U756 );
                    l_U757 = l_U756 - l_U755;
                    if (l_U757 < 7500)
                    {
                        if (sub_37996( ref l_U923, ref l_U772 ))
                        {
                            if (l_U718 == 0)
                            {
                                PRINT_NOW( "roman14_kill", 500, 1 );
                                l_U718 = 1;
                            }
                            else
                            {
                                PRINT_NOW( "roman14_kill1", 500, 1 );
                                l_U718 = 0;
                            }
                        }
                    }
                    else
                    {
                        while (NOT (sub_27453( l_U847, ref l_U841, 6, 1 )))
                        {
                            WAIT( 0 );
                        }
                        GET_GAME_TIMER( ref l_U755 );
                        l_U773++;
                    }
                    break;
                    case 1:
                    if (NOT (sub_25512( l_U841 )))
                    {
                        while (NOT (sub_27453( l_U833, ref l_U827, 6, 1 )))
                        {
                            WAIT( 0 );
                        }
                        l_U773++;
                    }
                    break;
                    case 2:
                    if (NOT (sub_25512( l_U827 )))
                    {
                        GET_GAME_TIMER( ref l_U755 );
                        l_U773++;
                    }
                    break;
                    case 3:
                    GET_GAME_TIMER( ref l_U756 );
                    l_U757 = l_U756 - l_U755;
                    if (l_U757 > 10000)
                    {
                        l_U773 = 1;
                    }
                    break;
                }
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U918 )))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3227(), l_U918, 17.00000000, 17.00000000, 20.00000000, 0 )))
                        {
                            if (sub_25512( l_U841 ))
                            {
                                sub_25684( ref l_U841, 0 );
                            }
                            if (sub_25512( l_U827 ))
                            {
                                sub_25684( ref l_U827, 0 );
                            }
                            if (DOES_BLIP_EXIST( l_U923 ))
                            {
                                REMOVE_BLIP( l_U923 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U917 )))
                            {
                                if (NOT (IS_GROUP_MEMBER( l_U917, sub_27199() )))
                                {
                                    SET_GROUP_MEMBER( sub_27199(), l_U917 );
                                }
                            }
                            TASK_SMART_FLEE_CHAR( l_U918, sub_3227(), 500.00000000, -1 );
                            l_U698 = 1;
                            CLEAR_HELP();
                            SET_WANTED_MULTIPLIER( 1.00000000 );
                            l_U656 = 14;
                        }
                    }
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3227(), l_U918, 5.00000000, 5.00000000, 5.00000000, 0 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U917 )))
                        {
                            if (NOT (IS_GROUP_MEMBER( l_U917, sub_27199() )))
                            {
                                SET_GROUP_MEMBER( sub_27199(), l_U917 );
                            }
                        }
                    }
                    if ((l_U698 == 0) || (IS_CHAR_INJURED( l_U918 )))
                    {
                        if (sub_25512( l_U827 ))
                        {
                            sub_25684( ref l_U827, 0 );
                        }
                        if (DOES_BLIP_EXIST( l_U923 ))
                        {
                            REMOVE_BLIP( l_U923 );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U918 )))
                        {
                            CLEAR_CHAR_TASKS( l_U918 );
                            SET_PED_DIES_WHEN_INJURED( l_U918, 1 );
                            SET_CHAR_HEALTH( l_U918, 70 );
                        }
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U918 );
                        CLEAR_HELP();
                        CLEAR_PRINTS();
                        while (NOT (sub_27453( l_U854, ref l_U848, 6, 1 )))
                        {
                            WAIT( 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U917 )))
                        {
                            if (NOT (IS_GROUP_MEMBER( l_U917, sub_27199() )))
                            {
                                SET_GROUP_MEMBER( sub_27199(), l_U917 );
                            }
                        }
                        CLEAR_HELP();
                        l_U698 = 0;
                        l_U656 = 13;
                    }
                }
                else if (DOES_BLIP_EXIST( l_U923 ))
                {
                    REMOVE_BLIP( l_U923 );
                }
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U918 );
                if (sub_25512( l_U827 ))
                {
                    sub_25684( ref l_U827, 0 );
                }
                CLEAR_HELP();
                CLEAR_PRINTS();
                l_U698 = 0;
                l_U656 = 13;;
                break;
                case 12:
                sub_39517();
                break;
                case 13:
                if (DOES_CHAR_EXIST( l_U918 ))
                {
                    SET_CHAR_READY_TO_BE_EXECUTED( l_U918, 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U917 )))
                {
                    if (IS_GROUP_MEMBER( l_U917, sub_27199() ))
                    {
                        if (NOT (sub_25512( l_U848 )))
                        {
                            while (NOT (sub_27453( l_U861, ref l_U855, 6, 1 )))
                            {
                                WAIT( 0 );
                            }
                            GET_GAME_TIMER( ref l_U766 );
                            SET_WANTED_MULTIPLIER( 1.00000000 );
                            CLEAR_HELP();
                            l_U656 = 14;
                        }
                    }
                    else
                    {
                        while (NOT (sub_26190( l_U861, 0, 1, ref l_U855, 6, 1 )))
                        {
                            WAIT( 0 );
                        }
                        SET_WANTED_MULTIPLIER( 1.00000000 );
                        GET_GAME_TIMER( ref l_U766 );
                        CLEAR_HELP();
                        l_U656 = 14;
                    }
                }
                break;
                case 14:
                if (NOT (IS_CHAR_INJURED( l_U917 )))
                {
                    sub_28892( l_U925, "roman14_07" );
                    if (l_U719 == 0)
                    {
                        if (l_U698 == 0)
                        {
                            STORE_WANTED_LEVEL( sub_6868(), ref l_U776 );
                            if (l_U776 == 0)
                            {
                                GET_GAME_TIMER( ref l_U767 );
                                l_U768 = l_U767 - l_U766;
                                SET_ROMANS_MOOD( 1 );
                                l_U719 = 1;
                            }
                        }
                    }
                    if (NOT (sub_25512( l_U848 )))
                    {
                        if (NOT (sub_25512( l_U855 )))
                        {
                            if (l_U698 == 1)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U918 )))
                                {
                                    GET_GAME_TIMER( ref l_U766 );
                                    sub_47244();
                                }
                                else
                                {
                                    switch (l_U777)
                                    {
                                        case 0:
                                        if (IS_GROUP_MEMBER( l_U917, sub_27199() ))
                                        {
                                            if (sub_25512( l_U813 ))
                                            {
                                                sub_25684( ref l_U813, 0 );
                                            }
                                            if (sub_25512( l_U806 ))
                                            {
                                                sub_25684( ref l_U806, 0 );
                                            }
                                            sub_3289( 0 );
                                            sub_47502( 0 );
                                            while (NOT (sub_27453( l_U861, ref l_U855, 6, 1 )))
                                            {
                                                WAIT( 0 );
                                            }
                                            l_U777++;
                                        }
                                        else if (sub_25512( l_U813 ))
                                        {
                                            sub_25684( ref l_U813, 0 );
                                        }
                                        if (sub_25512( l_U806 ))
                                        {
                                            sub_25684( ref l_U806, 0 );
                                        }
                                        sub_3289( 0 );
                                        sub_47502( 0 );
                                        while (NOT (sub_26190( l_U861, 0, 1, ref l_U855, 6, 1 )))
                                        {
                                            WAIT( 0 );
                                        }
                                        l_U777++;;
                                        break;
                                        case 1:
                                        if (NOT (sub_25512( l_U855 )))
                                        {
                                            if (IS_GROUP_MEMBER( l_U917, sub_27199() ))
                                            {
                                                PRINT_NOW( "roman14_07", 7500, 1 );
                                                l_U777 = 3;
                                            }
                                            else
                                            {
                                                PRINT_NOW( "roman14_08", 7500, 1 );
                                                l_U777++;
                                            }
                                        }
                                        break;
                                        case 2:
                                        if (IS_GROUP_MEMBER( l_U917, sub_27199() ))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3227(), l_U917, 12.00000000, 12.00000000, 12.00000000, 0 ))
                                            {
                                                PRINT_NOW( "roman14_07", 7500, 1 );
                                                l_U777++;
                                            }
                                        }
                                        break;
                                        case 3:
                                        l_U664 = 3;
                                        GET_GAME_TIMER( ref l_U755 );
                                        l_U698 = 0;
                                        l_U777++;
                                        break;
                                        case 4: break;
                                    }
                                }
                            }
                            if (NOT (sub_25512( l_U848 )))
                            {
                                if (NOT (sub_25512( l_U855 )))
                                {
                                    sub_48107();
                                }
                            }
                        }
                    }
                }
                break;
                case 15:
                sub_49938();
                GET_GAME_TIMER( ref l_U756 );
                l_U757 = l_U756 - l_U755;
                if (l_U757 > 1000)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        if (sub_28256())
                        {
                            sub_3289( 0 );
                            DELETE_CHAR( ref l_U917 );
                            SWITCH_ROADS_ON( l_U673._fU0 - 10, l_U673._fU4 - 10, l_U673._fU8 - 10, l_U673._fU0 + 10, l_U673._fU4 + 10, l_U673._fU8 + 10 );
                            SET_EVERYONE_IGNORE_PLAYER( sub_6868(), 0 );
                            sub_25809( 0 );
                            l_U694 = 1;
                        }
                    }
                }
                break;
            }
        }
    }
    return;
}

void sub_972()
{
    sub_981();
    return;
}

void sub_981()
{
    int iVar2;

    iVar2 = 0;
    sub_995( iVar2 );
    sub_2171( iVar2 );
    return;
}

void sub_995(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_1039();
        sub_1200();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1308();
            sub_1347();
        }
    }
    sub_1423();
    sub_1524();
    uVar5 = sub_1637( uParam0 );
    sub_2078( uVar5, 0 );
    return;
}

void sub_1039()
{
    sub_1053( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1153();
    }
    return;
}

void sub_1053(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1153()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1200()
{
    sub_1209();
    return;
}

void sub_1209()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1308()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1347()
{
    sub_1356();
    return;
}

void sub_1356()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1423()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_1524()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1546();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1546()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1637(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_2036( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_2036(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2078(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_2171(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2180();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_2955();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2180()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2218( 5, g_U569[I] )) == 1))
        {
            if ((sub_2218( 1, g_U569[I] )) != 0)
            {
                sub_2504( I );
            }
        }
    }
    if (NOT sub_2670())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_2218(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_2504(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2589( g_U569 - 1 );
    return;
}

void sub_2589(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2670()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2218( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2955()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_3082()
{
    if (DOES_CHAR_EXIST( l_U917 ))
    {
        REMOVE_CHAR_ELEGANTLY( ref l_U917 );
    }
    if (DOES_CHAR_EXIST( l_U918 ))
    {
        REMOVE_CHAR_ELEGANTLY( ref l_U918 );
    }
    g_U8707 = 0;
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SWITCH_ROADS_ON( l_U670._fU0 - 10, l_U670._fU4 - 10, l_U670._fU8 - 10, l_U670._fU0 + 10, l_U670._fU4 + 10, l_U670._fU8 + 10 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3227(), 1 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    sub_3289( 0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3227()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3289(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 <= 8) AND (g_U8392 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_3444()
{
    REQUEST_MODEL( l_U909 );
    sub_3470( l_U905 );
    REQUEST_ANIMS( "missroman14" );
    REQUEST_ANIMS( "misspass" );
    REQUEST_ANIMS( "gestures@niko" );
    sub_4235();
    sub_4263( "ROMAN14", 0 );
    sub_4415( "R14AUD" );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U928 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U929 );
    sub_4558( 0, sub_3227(), "NIKO", 0 );
    return;
}

void sub_3470(unknown uParam0)
{
    REQUEST_MODEL( sub_3481( uParam0 ) );
    return;
}

int sub_3481(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64464[uParam0] == 2)
        {
            return 558221221;
        }
        return -1992728631;
        case 1: return 896408642;
        case 3:
        if (g_U64464[uParam0] == 1)
        {
            return -1275031987;
        }
        return 1487004273;
        case 4: return 57218969;
        case 5: return 1445589009;
        case 6: return 155063868;
        case 7: return -617264103;
        case 8: return -1729980128;
        case 9: return 1794146792;
        case 11: return 1710545037;
        case 12: return -1775659292;
        case 13: return 1690783035;
        case 14: return 954215094;
        case 15: return 809067472;
        case 16: return 1169442297;
        case 17: return 1872110126;
        case 18: return 1500493064;
        case 19: return -1826458934;
        case 22: return -366421228;
        case 20: return -379234846;
        case 24: return 237511807;
        case 25: return 237497537;
        case 26: return -1040287406;
        case 27: return -357652594;
        case 52: return 2129490787;
        case 53: return 386513184;
        case 2: return -1080659212;
        case 10: return -773750838;
        case 28: return -1788328884;
        case 29: return 1056837725;
        case 30: return -292713088;
        case 31:
        case 32: return -292713088;
    }
    sub_2036( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_4235()
{
    return;
}

void sub_4263(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_4299())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_4299()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_4415(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_4432();
    return;
}

void sub_4432()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U0._fU16[I]._fU0 = nil;
        StrCopy( ref l_U0._fU16[I]._fU4, "", 32 );
        l_U0._fU344[I] = 0;
    }
    return;
}

void sub_4558(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4638( "\n PED NUMBER ", uParam0 );
    sub_4678( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4638(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4678(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4725()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        l_U694 = 1;
    }
    if (IS_KEYBOARD_KEY_PRESSED( 33 ))
    {
        l_U695 = 1;
    }
    if (l_U656 < 4)
    {
        if (NOT (IS_CHAR_DEAD( l_U917 )))
        {
            if (IS_CHAR_INJURED( l_U917 ))
            {
                SET_PED_DIES_WHEN_INJURED( l_U917, 1 );
                SET_CHAR_HEALTH( l_U917, 5 );
                l_U699 = 1;
                l_U695 = 1;
            }
        }
    }
    sub_4859();
    if (l_U656 >= 6)
    {
        g_U8707 = 1;
    }
    else
    {
        g_U8707 = 0;
    }
    return;
}

void sub_4859()
{
    if (l_U917 != nil)
    {
        if (DOES_CHAR_EXIST( l_U917 ))
        {
            if (IS_CHAR_INJURED( l_U917 ))
            {
                GET_GAME_TIMER( ref l_U755 );
                GET_GAME_TIMER( ref l_U756 );
                l_U757 = l_U756 - l_U755;
                while (l_U757 < 2000)
                {
                    GET_GAME_TIMER( ref l_U756 );
                    l_U757 = l_U756 - l_U755;
                    WAIT( 0 );
                }
                l_U699 = 1;
                l_U695 = 1;
            }
        }
    }
    return;
}

void sub_5076()
{
    sub_5085();
    sub_4415( "MF1AUD" );
    TRIGGER_MISSION_COMPLETE_AUDIO( 56 );
    if (l_U698 == 1)
    {
        g_U15654[32] = 0;
        sub_16771( l_U906, "MF2_CBC7", "MF1AUD", 0 );
    }
    else
    {
        g_U15654[32] = 1;
        sub_16771( l_U906, "MF2_CBC6", "MF1AUD", 0 );
    }
    AWARD_ACHIEVEMENT( 37 );
    sub_17415();
    sub_3082();
    return;
}

void sub_5085()
{
    sub_5094();
    return;
}

void sub_5094()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_5112();
    sub_5171( iVar2, iVar3, iVar4 );
    return;
}

void sub_5112()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_5171(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_5202( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_5202(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_5298( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_5298( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_5298( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_5298( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_5298( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_5298( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_5875( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4) AND (NOT g_U10981[iParam0]._fU144._fU12))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_6272( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_6272( 0, 4 );
            }
        }
    }
    if (NOT (sub_6361( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_6868(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_6868() );
    }
    sub_2180();
    bVar27 = true;
    uVar28 = sub_5875( iParam0, iVar7 );
    uVar29 = sub_1637( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 6) || (iVar30 == 5))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_15763( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_16193();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_16278( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_16335( iParam0 );
                sub_16374( 0 );
                sub_2078( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_16482();
        }
    }
    if (bParam2)
    {
        sub_16193();
        sub_16570();
        sub_16374( 0 );
    }
    if (bParam3)
    {
        sub_16193();
        sub_16610();
        sub_16374( 0 );
        sub_2078( uVar29, 0 );
    }
    sub_1524();
    return;
}

void sub_5298(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_5875(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_2036( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_6272(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_6361(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_6569( uParam1 );
        break;
        case 1:
        bVar8 = sub_8673( uParam1 );
        break;
        case 2:
        bVar8 = sub_8899( uParam1 );
        break;
        case 3:
        bVar8 = sub_9049( uParam1 );
        break;
        case 4:
        bVar8 = sub_9327( uParam1 );
        break;
        case 5:
        bVar8 = sub_9630( uParam1 );
        break;
        case 6:
        bVar8 = sub_9829( uParam1 );
        break;
        case 7:
        bVar8 = sub_10055( uParam1 );
        break;
        case 8:
        bVar8 = sub_10290( uParam1 );
        break;
        case 9:
        bVar8 = sub_10665( uParam1 );
        break;
        case 10:
        bVar8 = sub_10912( uParam1 );
        break;
        case 11:
        bVar8 = sub_11051( uParam1 );
        break;
        case 12:
        bVar8 = sub_11350( uParam1 );
        break;
        case 13:
        bVar8 = sub_11578( uParam1 );
        break;
        case 14:
        bVar8 = sub_11865( uParam1 );
        break;
        case 15:
        bVar8 = sub_12147( uParam1 );
        break;
        case 16:
        bVar8 = sub_12429( uParam1 );
        break;
        case 17:
        bVar8 = sub_12630( uParam1 );
        break;
        case 18:
        bVar8 = sub_12703( uParam1 );
        break;
        case 19:
        bVar8 = sub_12917( uParam1 );
        break;
        case 20:
        bVar8 = sub_13170( uParam1 );
        break;
        case 21:
        bVar8 = sub_13417( uParam1 );
        break;
        case 22:
        bVar8 = sub_13618( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_8278( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_5875( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_13941( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_6569(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_6848( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_6848( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_6848( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_6848( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_6848( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_6848( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_6848( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_6848( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_6848( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_6848( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_6848( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_6848( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_6848( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_6848( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_6848( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_6848( iVar3, 0, sub_8156(), sub_8422(), 0, 0 );
        break;
        default:
        sub_8581( "Friend 1", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Friend 1", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_6848(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_6859( uParam1 );
    sub_7059( uParam0, 0, uParam2 );
    sub_7059( uParam0, 1, uParam3 );
    sub_7059( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_5112();
    return;
}

void sub_6859(unknown uParam0)
{
    ADD_SCORE( sub_6868(), uParam0 );
    sub_6910( uParam0 );
    return;
}

void sub_6868()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_6910(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2036( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_7059(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_7216( uParam0 );
    }
    return;
}

void sub_7216(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 )))))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

int sub_8156()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_8278( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_8278(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_8422()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_8278( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_8581(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_8673(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6848( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6848( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_8581( "Contact 2", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Contact 2", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8899(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_6848( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_8581( "Girl 3", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Girl 3", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9049(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_6848( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_6848( iVar3, 0, sub_8156(), sub_8422(), 0, 0 );
        break;
        default:
        sub_8581( "Friend 4", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Friend 4", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9327(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6848( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6848( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_6848( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_6848( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_6848( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_8581( "Contact 5", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Contact 5", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9630(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6848( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_8581( "Contact 7", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Contact 7", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9829(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6848( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6848( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_8581( "Contact 7b", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Contact 7b", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10055(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_6848( iVar3, 0, sub_8156(), sub_8422(), 0, 0 );
        break;
        default:
        sub_8581( "Friend 8", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Friend 8", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10290(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_6848( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_6848( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_6848( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_6848( iVar3, 0, sub_8156(), sub_8422(), 0, 0 );
        break;
        default:
        sub_8581( "Friend 9", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Friend 9", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10665(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_6848( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_6848( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_8581( "Contact 10", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_8581( "Contact 10", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10912(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_8581( "Girl 11", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Girl 11", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11051(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6848( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_6848( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_6848( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_6848( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_6848( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_8581( "Contact 12", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Contact 12", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11350(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6848( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6848( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_8581( "Contact 13", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Contact 13", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11578(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_6848( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_6848( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_6848( iVar3, 0, sub_8156(), sub_8422(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_8581( "Friend 15", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Friend 15", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11865(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6848( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6848( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_6848( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_6848( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_8581( "Contact 16", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Contact 16", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12147(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_6848( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_6848( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_6848( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_8581( "Contact 18", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Contact 18", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12429(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6848( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_8581( "Contact 19", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Contact 19", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12630(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_8581( "Girl 20", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12703(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6848( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_8581( "Contact 21", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Contact 21", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12917(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6848( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6848( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_6848( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_8581( "Contact 22", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Contact 22", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13170(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_6848( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6848( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_6848( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_6848( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_8581( "Contact 24", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Contact 24", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13417(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_6848( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_6848( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_8581( "Contact 25", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8581( "Contact 25", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13618(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_6848( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_8581( "Girl 26", 1 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_8581( "Girl 26", 0 );
        sub_6848( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_13941(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_13989( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_14720( iParam1 );
    }
    return;
}

int sub_13989(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_14129( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_14129(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_14311( 0 );
    return;
}

void sub_14311(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_14566();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_14566()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_14720(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_15053( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_15053( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_15053( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_15053( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_15053( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_15053( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_15053( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_15053( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_15053( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_15053( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_15053( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_15053( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_15053( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_15053( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_15053( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_15053( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_15053( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_15053( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_15053( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_15053(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_15763(unknown uParam0, unknown uParam1)
{
    sub_15782( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_15782(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_16193()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

int sub_16278(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_16335(unknown uParam0)
{
    sub_1423();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_16374(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_16482()
{
    sub_16491();
    return;
}

void sub_16491()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_16570()
{
    sub_16491();
    return;
}

void sub_16610()
{
    sub_16491();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_16771(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_16815( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_16815(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_17415()
{
    if (IS_PLAYER_PLAYING( sub_6868() ))
    {
        CLEAR_WANTED_LEVEL( sub_6868() );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    return;
}

void sub_17494()
{
    sub_17503();
    sub_17520();
    if (l_U699 == 1)
    {
        if (NOT (IS_CHAR_DEAD( l_U918 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3227(), l_U918, 40.00000000, 40.00000000, 0 ))
            {
                if (l_U702 == 0)
                {
                    if (l_U703 == 0)
                    {
                        DO_SCREEN_FADE_OUT( 2000 );
                        l_U703 = 1;
                    }
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    if (IS_SCREEN_FADED_OUT())
                    {
                        DELETE_CHAR( ref l_U918 );
                    }
                    DO_SCREEN_FADE_IN( 2000 );
                    l_U702 = 1;
                }
            }
        }
        sub_17808( 0, l_U917, 0 );
        CLEAR_PRINTS();
        PRINT_NOW( "roman14_killRo", 7000, 1 );
        sub_16771( l_U906, "R14_MFAIL", "R14AUD", 0 );
    }
    else
    {
        CLEAR_PRINTS();
    }
    sub_3082();
    return;
}

void sub_17503()
{
    return;
}

void sub_17520()
{
    sub_17529();
    return;
}

void sub_17529()
{
    int iVar2;

    iVar2 = 0;
    sub_17543( iVar2 );
    sub_2171( iVar2 );
    return;
}

void sub_17543(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_6868(), 150 );
    CLEAR_HELP();
    sub_995( uParam0 );
    return;
}

void sub_17808(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_18107()
{
    l_U733[0] = 270.00000000;
    l_U733[1] = 0.00000000;
    return;
}

void sub_18183()
{
    GET_GAME_TIMER( ref l_U770 );
    l_U771 = l_U770 - l_U769;
    if (l_U771 > 7000)
    {
        while (NOT (sub_18260( l_U905, "R14_INTRO2", "R14AUD" )))
        {
            WAIT( 0 );
        }
        while (NOT l_U696)
        {
            WAIT( 0 );
            switch (sub_22154())
            {
                case 2:
                l_U696 = 1;
                break;
                case 6:
                l_U696 = 1;
                break;
            }
        }
        if (l_U700 == 0)
        {
            ADD_BLIP_FOR_COORD( l_U667._fU0, l_U667._fU4, l_U667._fU8, ref l_U922 );
            if (DOES_BLIP_EXIST( l_U922 ))
            {
                SET_ROUTE( l_U922, 1 );
                CHANGE_BLIP_COLOUR( l_U922, 5 );
                CHANGE_BLIP_DISPLAY( l_U922, 0 );
            }
            if (DOES_BLIP_EXIST( l_U922 ))
            {
                CHANGE_BLIP_DISPLAY( l_U922, 4 );
            }
            PRINT_NOW( "roman14_03", 7500, 1 );
        }
        else if (DOES_BLIP_EXIST( l_U921 ))
        {
            CHANGE_BLIP_DISPLAY( l_U921, 4 );
            SET_ROUTE( l_U921, 1 );
        }
        PRINT_NOW( "roman14_04", 7500, 1 );;
        GET_GAME_TIMER( ref l_U765 );
        l_U656 = 3;
    }
    return;
}

void sub_18260(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam1, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    return sub_18318( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_18318(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_18388( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_18388( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_6868() )))
    {
        sub_18388( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3227() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3227() )))
    {
        sub_18388( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_18388( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_18845()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((NOT bParam8) || (g_U91._fU372))
            {
                sub_18388( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 4) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 5))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_18845()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_20217( uParam0, ref g_U91._fU176 );
    sub_21598( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_4678( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

void sub_18388(unknown uParam0)
{
    return;
}

int sub_18845()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_18902())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_18902()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_6868() )))
    {
        sub_18388( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_18388( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_18388( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_18388( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_6868() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3227() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3227(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_18388( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3227() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_18388( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_18388( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_6868() )))
    {
        sub_18388( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_20217(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_21598(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_22154()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

void sub_22521()
{
    switch (l_U657)
    {
        case 0:
        if (DOES_CHAR_EXIST( l_U917 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U917 )))
            {
                if (IS_CHAR_INJURED( l_U917 ))
                {
                    REVIVE_INJURED_PED( l_U917 );
                }
            }
        }
        if (sub_22627( l_U905 ))
        {
            if (l_U697 == 0)
            {
                sub_22710( l_U905, ref l_U917, l_U677._fU0, l_U677._fU4, l_U677._fU8, l_U680 );
                if (NOT (IS_CHAR_DEAD( l_U917 )))
                {
                    SET_PED_DIES_WHEN_INJURED( l_U917, 1 );
                    sub_4558( 1, l_U917, "ROMAN", 0 );
                    SET_CHAR_DROWNS_IN_WATER( l_U917, 1 );
                    SET_ROMANS_MOOD( 1 );
                    if (l_U700 == 0)
                    {
                        if (DOES_BLIP_EXIST( l_U922 ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U922, 4 );
                            SET_ROUTE( l_U922, 1 );
                        }
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U917 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U917, ref l_U921 );
                        if (DOES_BLIP_EXIST( l_U921 ))
                        {
                            CHANGE_BLIP_COLOUR( l_U921, 3 );
                            CHANGE_BLIP_DISPLAY( l_U921, 0 );
                            SET_ROUTE( l_U921, 1 );
                        }
                    }
                    if (DOES_BLIP_EXIST( l_U921 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U921, 4 );
                    }
                    SET_CHAR_PROOFS( l_U917, 0, 0, 1, 1, 1 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U917, 1 );
                    SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U917, 1 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U917, 1 );
                }
                l_U697 = 1;
            }
        }
        sub_24674();
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3227(), l_U667._fU0, l_U667._fU4, l_U667._fU8, 20.00000000, 20.00000000, 20.00000000, 0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U917 )))
            {
                SET_CHAR_PROOFS( l_U917, 0, 0, 0, 0, 0 );
            }
        }
        if (l_U700 == 0)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3227(), l_U667._fU0, l_U667._fU4, l_U667._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                GET_GAME_TIMER( ref l_U755 );
                l_U657 = 2;
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3227(), l_U677._fU0, l_U677._fU4 + 5, l_U677._fU8, 12.00000000, 6.00000000, 8.00000000, 0 ))
        {
            GET_GAME_TIMER( ref l_U755 );
            l_U657 = 2;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U917 )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U921 )))
            {
                ADD_BLIP_FOR_CHAR( l_U917, ref l_U921 );
                if (DOES_BLIP_EXIST( l_U921 ))
                {
                    CHANGE_BLIP_COLOUR( l_U921, 3 );
                    CHANGE_BLIP_DISPLAY( l_U921, 4 );
                }
            }
        }
        ALLOW_EMERGENCY_SERVICES( 0 );
        if (DOES_BLIP_EXIST( l_U922 ))
        {
            CHANGE_BLIP_DISPLAY( l_U922, 0 );
            SET_ROUTE( l_U922, 0 );
            CHANGE_BLIP_COLOUR( l_U922, 5 );
        }
        if (NOT (IS_CHAR_INJURED( l_U917 )))
        {
            SET_CHAR_PROOFS( l_U917, 0, 0, 0, 0, 0 );
        }
        l_U656 = 4;
        break;
    }
    return;
}

void sub_22627(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_3481( uParam0 ) );
}

void sub_22710(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_3481( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_22760( uParam0, (uParam1^) );
    return;
}

void sub_22760(unknown uParam0, unknown uParam1)
{
    sub_22772( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_22772(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_22866( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_23410( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_22866(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_23410(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_22866( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_22866( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_22866( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_22866( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_22866( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_22866( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_22866( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_22866( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_22866( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_22866( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_22866( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_22866( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_22866( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_24674()
{
    if (NOT (IS_CHAR_INJURED( l_U917 )))
    {
        switch (l_U774)
        {
            case 0:
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U917, "missRoman14", "roman_wait_idle" )))
            {
                l_U774++;
            }
            break;
            case 1:
            TASK_CHAR_SLIDE_TO_COORD( l_U917, l_U677._fU0, l_U677._fU4, l_U677._fU8, l_U680, 2.00000000 );
            l_U774++;
            break;
            case 2:
            GET_SCRIPT_TASK_STATUS( l_U917, 68, ref l_U720 );
            if (l_U720 == 7)
            {
                l_U774++;
            }
            break;
            case 3:
            TASK_PLAY_ANIM( l_U917, "roman_wait_idle", "missRoman14", 8.00000000, 1, 0, 0, 0, -2 );
            l_U774 = 0;
            break;
        }
    }
    return;
}

void sub_25467()
{
    if (l_U660 >= 4)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3227() )))
        {
            if (sub_25512( l_U792 ))
            {
                sub_25684( ref l_U792, 0 );
            }
            sub_25809( 0 );
            if (DOES_CAM_EXIST( l_U932 ))
            {
                SET_CAM_ACTIVE( l_U932, 0 );
                SET_CAM_PROPAGATE( l_U932, 0 );
                DESTROY_CAM( l_U932 );
            }
            l_U656 = 5;
        }
    }
    switch (l_U660)
    {
        case 0:
        CLEAR_CHAR_TASKS( l_U917 );
        GET_GAME_TIMER( ref l_U755 );
        if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
        {
            while (NOT (sub_26190( l_U805, 0, 1, ref l_U799, 6, 1 )))
            {
                WAIT( 0 );
            }
        }
        l_U660 = 2;
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U917 )))
        {
            if (NOT (IS_GROUP_MEMBER( l_U917, sub_27199() )))
            {
                SET_GROUP_MEMBER( sub_27199(), l_U917 );
            }
        }
        if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
        {
            if (sub_27292( l_U917 ))
            {
                while (NOT (sub_26190( l_U805, 1, 1, ref l_U799, 6, 1 )))
                {
                    WAIT( 0 );
                }
                l_U660 = 3;
            }
        }
        else
        {
            while (NOT (sub_27453( l_U805, ref l_U799, 6, 1 )))
            {
                WAIT( 0 );
            }
            l_U660 = 3;
        }
        break;
        case 3:
        if (NOT (DOES_BLIP_EXIST( l_U924 )))
        {
            ADD_BLIP_FOR_COORD( l_U670._fU0, l_U670._fU4, l_U670._fU8, ref l_U924 );
        }
        if (DOES_BLIP_EXIST( l_U924 ))
        {
            CHANGE_BLIP_COLOUR( l_U924, 5 );
            CHANGE_BLIP_DISPLAY( l_U924, 4 );
        }
        if (DOES_BLIP_EXIST( l_U921 ))
        {
            CHANGE_BLIP_DISPLAY( l_U921, 0 );
        }
        if (NOT (sub_25512( l_U799 )))
        {
            l_U656 = 5;
        }
        break;
        case 4:
        GET_GAME_TIMER( ref l_U756 );
        l_U757 = l_U756 - l_U755;
        if ((l_U704 == 0) AND (l_U757 > 2000))
        {
            l_U704 = 1;
        }
        if (l_U757 > 1500)
        {
            if (NOT (IS_CHAR_INJURED( l_U917 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U917 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_3227(), ref l_U926 );
                        GET_GAME_TIMER( ref l_U755 );
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        if (DOES_CAM_EXIST( l_U932 ))
                        {
                            SET_CAM_PROPAGATE( l_U932, 0 );
                        }
                        SET_CAM_INTERP_STYLE_CORE( l_U935, l_U932, l_U934, 4000, 0 );
                        if (DOES_CAM_EXIST( l_U935 ))
                        {
                            SET_CAM_PROPAGATE( l_U935, 1 );
                        }
                        TASK_ENTER_CAR_AS_PASSENGER( l_U917, l_U926, -1, 0 );
                        l_U660 = 5;
                    }
                }
            }
        }
        break;
        case 5:
        GET_GAME_TIMER( ref l_U756 );
        l_U757 = l_U756 - l_U755;
        if (l_U757 > 2000)
        {
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U917, "partial_wave_a", "misspass", 8.00000000, 0, 0, 0, 0, -2 );
            l_U660 = 6;
        }
        break;
        case 6:
        if (NOT (IS_CHAR_INJURED( l_U917 )))
        {
            if (IS_VEH_DRIVEABLE( l_U926 ))
            {
                if (IS_CHAR_IN_CAR( l_U917, l_U926 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U926 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    l_U656 = 5;
                }
            }
        }
        break;
    }
    return;
}

int sub_25512(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_18388( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_18388( "\n speech is not playing" );
    }
    return 0;
}

void sub_25684(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_25809(boolean bParam0)
{
    SET_USE_HIGHDOF( bParam0 );
    SET_WIDESCREEN_BORDERS( bParam0 );
    if (IS_PLAYER_PLAYING( sub_6868() ))
    {
        SET_PLAYER_CONTROL( sub_6868(), NOT bParam0 );
    }
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_6868(), bParam0 );
    ALLOW_EMERGENCY_SERVICES( NOT bParam0 );
    if (NOT (IS_CHAR_DEAD( sub_3227() )))
    {
        CLEAR_CHAR_TASKS( sub_3227() );
    }
    if (bParam0)
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3227(), 1 );
    }
    else
    {
        sub_25958();
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3227(), 0 );
    }
    return;
}

void sub_25958()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_26190(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_26215( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_26215(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_26273( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_26273(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_26295( iParam1 )))
    {
        return 0;
    }
    l_U0._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_26971( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_26295(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_18388( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_18388( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_18388( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_26971(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

void sub_27199()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_27292(unknown uParam0)
{
    unknown uVar3;

    if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
    {
        GET_CAR_CHAR_IS_USING( sub_3227(), ref uVar3 );
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (IS_CHAR_IN_CAR( uParam0, uVar3 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_27453(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_27474( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_27474(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_26273( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_28256()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_28699(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_28837()
{
    switch (l_U658)
    {
        case 0:
        sub_28892( l_U924, "roman14_06" );
        if (NOT (sub_25512( l_U799 )))
        {
            if (sub_30717())
            {
                sub_30861();
                switch (l_U663)
                {
                    case 0:
                    GET_GAME_TIMER( ref l_U755 );
                    CLEAR_PRINTS();
                    l_U663 = 3;
                    break;
                    case 3:
                    GET_GAME_TIMER( ref l_U756 );
                    l_U757 = l_U756 - l_U755;
                    if (l_U757 < 7500)
                    {
                        PRINT( "roman14_06", 1000, 1 );
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U755 );
                        CLEAR_PRINTS();
                        if (g_U64624 == 0)
                        {
                            while (NOT (sub_27453( l_U868, ref l_U862, 6, 1 )))
                            {
                                WAIT( 0 );
                            }
                        }
                        else if (g_U64624 == 1)
                        {
                            while (NOT (sub_27453( l_U875, ref l_U869, 6, 1 )))
                            {
                                WAIT( 0 );
                            }
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U917 )))
                        {
                            SAY_AMBIENT_SPEECH( l_U917, "LISTEN_TO_RADIO", 0, 0, 0 );
                        };;;
                        g_U64624++;
                        l_U663 = 4;
                    }
                    break;
                    case 4:
                    l_U663 = 5;
                    break;
                    case 5:
                    l_U663 = 6;
                    break;
                    case 6:
                    l_U663 = 7;
                    break;
                    case 7:
                    l_U663 = 8;
                    break;
                    case 8:
                    if (NOT (IS_CHAR_INJURED( l_U917 )))
                    {
                        STOP_PED_SPEAKING( l_U917, 1 );
                    }
                    if (NOT (sub_25512( l_U862 )))
                    {
                        if (NOT (sub_25512( l_U869 )))
                        {
                            l_U663 = 9;
                        }
                    }
                    break;
                    case 9:
                    if (NOT (IS_CHAR_INJURED( l_U917 )))
                    {
                        STOP_PED_SPEAKING( l_U917, 0 );
                    }
                    break;
                }
            }
        }
        if (l_U701 == 0)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3227(), l_U670._fU0, l_U670._fU4, l_U670._fU8, 100.00000000, 100.00000000, 100.00000000, 0 ))
            {
                ADD_SCENARIO_BLOCKING_AREA( l_U670._fU0 - 70, l_U670._fU4 - 70, l_U670._fU8 - 30, l_U670._fU0 + 150, l_U670._fU4 + 150, l_U670._fU8 + 30 );
                SWITCH_ROADS_OFF( l_U670._fU0 - 10, l_U670._fU4 - 10, l_U670._fU8 - 10, l_U670._fU0 + 10, l_U670._fU4 + 10, l_U670._fU8 + 10 );
                l_U701 = 1;
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U917 )))
        {
            if (IS_GROUP_MEMBER( l_U917, sub_27199() ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3227(), l_U670._fU0, l_U670._fU4, l_U670._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3227(), l_U917, 7.00000000, 7.00000000, 0 ))
                    {
                        if ((sub_32933( l_U917 )) AND (sub_32643( 1, 1 )))
                        {
                            SET_PLAYER_CONTROL( sub_6868(), 0 );
                            if (sub_25512( l_U862 ))
                            {
                                sub_25684( ref l_U862, 0 );
                            }
                            if (sub_25512( l_U869 ))
                            {
                                sub_25684( ref l_U869, 0 );
                            }
                            l_U658 = 2;
                        }
                    }
                }
            }
        }
        break;
        case 2:
        if (DOES_BLIP_EXIST( l_U924 ))
        {
            SET_ROUTE( l_U924, 0 );
            REMOVE_BLIP( l_U924 );
        }
        sub_33131( 2251.09500000, 166.03040000, 4.80810000, 90, ref l_U926 );
        if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
        {
            GET_CAR_CHAR_IS_USING( sub_3227(), ref l_U926 );
            if (NOT (IS_CAR_A_MISSION_CAR( l_U926 )))
            {
                SET_CAR_AS_MISSION_CAR( l_U926 );
            }
            CLEAR_AREA( l_U670._fU0, l_U670._fU4, l_U670._fU8, l_U784, 1 );
        }
        REQUEST_MODEL( l_U911 );
        REQUEST_MODEL( l_U912 );
        REQUEST_MODEL( l_U913 );
        REQUEST_CAR_RECORDING( 75 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        if (NOT (IS_GROUP_MEMBER( l_U917, sub_27199() )))
        {
            SET_GROUP_MEMBER( sub_27199(), l_U917 );
        }
        SET_PLAYER_GROUP_TO_FOLLOW_ALWAYS( sub_6868(), 1 );
        l_U656 = 7;
        break;
    }
    return;
}

void sub_28892(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;
    unknown uVar6;
    int iVar7;
    int iVar8;
    unknown uVar9;

    sub_28906( l_U917 );
    if (NOT (sub_28977( l_U917 )))
    {
        iVar7 = 1;
        if (l_U942 != 3)
        {
            l_U941 = 3;
        }
        l_U778 = 1;
    }
    else
    {
        iVar7 = 0;
    }
    if ((sub_28977( l_U917 )) AND (sub_29079( l_U917 )))
    {
        iVar8 = 1;
        if (l_U942 != 6)
        {
            l_U941 = 6;
        }
        l_U778 = 1;
    }
    else
    {
        iVar8 = 0;
    }
    if (iVar7 == 1)
    {
        iVar5 = 1;
    }
    else if (iVar8 == 0)
    {
        iVar5 = 0;
    }
    else
    {
        iVar5 = 1;
    }
    if (iVar5 == 1)
    {
        if (DOES_BLIP_EXIST( l_U921 ))
        {
            CHANGE_BLIP_DISPLAY( l_U921, 4 );
        }
        if (DOES_BLIP_EXIST( uParam0 ))
        {
            CHANGE_BLIP_DISPLAY( uParam0, 0 );
        }
    }
    else if (DOES_BLIP_EXIST( l_U921 ))
    {
        CHANGE_BLIP_DISPLAY( l_U921, 0 );
    }
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        CHANGE_BLIP_DISPLAY( uParam0, 4 );
    }
    if (iVar5 == 0)
    {
        if (l_U778 == 1)
        {
            if (l_U941 != 9)
            {
                if (l_U941 != 10)
                {
                    l_U941 = 9;
                }
            }
        }
    }
    if ((l_U778 == 1) || ((l_U941 == 10) || ((l_U941 == 9) || (l_U941 == 11))))
    {
        l_U779 = 1;
    }
    else
    {
        l_U779 = 0;
    }
    if (l_U941 != 11)
    {
        if (l_U941 != 0)
        {
            if (l_U941 != 9)
            {
                l_U942 = l_U941;
            }
        }
    }
    switch (l_U941)
    {
        case 0: break;
        case 3:
        sub_29600( 1 );
        CLEAR_PRINTS();
        PRINT_NOW( "roman14_08", 7500, 1 );
        GET_GAME_TIMER( ref l_U780 );
        l_U941 = 11;
        break;
        case 6:
        sub_29600( 1 );
        CLEAR_PRINTS();
        PRINT_NOW( "roman14_outcar", 7500, 1 );
        GET_GAME_TIMER( ref l_U780 );
        l_U941 = 11;
        break;
        case 9:
        sub_29600( 1 );
        CLEAR_PRINTS();
        PRINT_NOW( uParam1, 3000, 1 );
        GET_GAME_TIMER( ref l_U780 );
        l_U941 = 10;
        break;
        case 10:
        GET_GAME_TIMER( ref l_U781 );
        l_U782 = l_U781 - l_U780;
        if (l_U782 > 3000)
        {
            sub_29600( 0 );
            l_U778 = 0;
            l_U941 = 0;
        }
        break;
        case 11:
        GET_GAME_TIMER( ref l_U781 );
        l_U782 = l_U781 - l_U780;
        if (l_U782 > 7500)
        {
            l_U941 = 0;
        }
        break;
    }
    return;
}

void sub_28906(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_27199() )))
        {
            SET_GROUP_MEMBER( sub_27199(), uParam0 );
        }
    }
    return;
}

int sub_28977(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_GROUP_MEMBER( uParam0, sub_27199() ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_29079(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_GROUP_MEMBER( uParam0, sub_27199() ))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3227(), uParam0, 12.00000000, 12.00000000, 12.00000000, 0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_29600(int iParam0)
{
    if (iParam0 == 1)
    {
        if (sub_25512( l_U862 ))
        {
            sub_29638( ref l_U862 );
        }
        if (sub_25512( l_U869 ))
        {
            sub_29638( ref l_U869 );
        }
        if (sub_25512( l_U806 ))
        {
            sub_29638( ref l_U806 );
        }
        if (sub_25512( l_U813 ))
        {
            sub_29638( ref l_U813 );
        }
    }
    else if (sub_30157( l_U862 ))
    {
        sub_30194( l_U868, ref l_U862, 6, 1 );
    }
    if (sub_30157( l_U869 ))
    {
        sub_30194( l_U875, ref l_U869, 6, 1 );
    }
    if (sub_30157( l_U813 ))
    {
        sub_30194( l_U819, ref l_U813, 6, 1 );
    }
    if (sub_30157( l_U806 ))
    {
        sub_30194( l_U812, ref l_U806, 6, 1 );
    }
    return;
}

int sub_29638(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_18388( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_18388( "\n CONVERSATION PAUSED AT LINE " );
            sub_29794( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_18388( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_18388( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_18388( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_29794(unknown uParam0)
{
    return;
}

void sub_30157(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_30194(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_30215( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

int sub_30215(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_26273( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_30717()
{
    if (NOT (IS_CHAR_INJURED( l_U917 )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
        {
            GET_CAR_CHAR_IS_USING( sub_3227(), ref l_U926 );
            if (IS_CHAR_IN_CAR( l_U917, l_U926 ))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (IS_CHAR_IN_ANY_CAR( l_U917 ))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 1;
}

void sub_30861()
{
    int iVar2;
    unknown uVar3;

    STORE_WANTED_LEVEL( sub_6868(), ref iVar2 );
    if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
    {
        GET_CAR_CHAR_IS_USING( sub_3227(), ref uVar3 );
    }
    if (NOT (IS_CHAR_INJURED( l_U917 )))
    {
        if ((sub_30963( uVar3 )) || ((iVar2 > 1) || ((IS_CHAR_IN_MELEE_COMBAT( sub_3227() )) || (IS_CHAR_IN_MELEE_COMBAT( l_U917 )))))
        {
            if (sub_25512( l_U862 ))
            {
                sub_31058( ref l_U862 );
            }
            if (sub_25512( l_U869 ))
            {
                sub_31058( ref l_U869 );
            }
            if (sub_25512( l_U813 ))
            {
                sub_31058( ref l_U813 );
            }
            if (sub_25512( l_U806 ))
            {
                sub_31058( ref l_U806 );
            }
        }
        else if (l_U941 != 9)
        {
            if (l_U941 != 10)
            {
                if (l_U941 != 11)
                {
                    if (l_U778 == 0)
                    {
                        if (IS_GROUP_MEMBER( l_U917, sub_27199() ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3227(), l_U917, 12.00000000, 12.00000000, 12.00000000, 0 ))
                            {
                                if (sub_30157( l_U862 ))
                                {
                                    sub_30194( l_U868, ref l_U862, 6, 1 );
                                }
                                if (sub_30157( l_U869 ))
                                {
                                    sub_30194( l_U875, ref l_U869, 6, 1 );
                                }
                                if (sub_30157( l_U813 ))
                                {
                                    sub_30194( l_U819, ref l_U813, 6, 1 );
                                }
                                if (sub_30157( l_U806 ))
                                {
                                    sub_30194( l_U812, ref l_U806, 6, 1 );
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_30963(unknown uParam0)
{
    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (IS_CAR_UPSIDEDOWN( uParam0 ))
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
    return 0;
}

int sub_31058(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_18388( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_18388( "\n CONVERSATION PAUSED AT LINE " );
            sub_29794( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_18388( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_18388( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_18388( "\n reseting paused struct line" );
    }
    return 0;
}

int sub_32643(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3227(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 > 1.01100000) || (fVar6 < 0.95000000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3227(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3227()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3227() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_6868() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_6868() )))
    {
        return 0;
    }
    return 1;
}

int sub_32933(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_ON_FIRE( uParam0 ))
        {
            return 0;
        }
    }
    return 1;
}

void sub_33131(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    GET_PLAYERS_LAST_CAR_NO_SAVE( uParam4 );
    if (IS_VEH_DRIVEABLE( (uParam4^) ))
    {
        if (NOT (IS_CHAR_IN_CAR( sub_3227(), (uParam4^) )))
        {
            if (NOT (IS_CAR_A_MISSION_CAR( (uParam4^) )))
            {
                SET_CAR_AS_MISSION_CAR( (uParam4^) );
            }
            SET_LOAD_COLLISION_FOR_CAR_FLAG( (uParam4^), 0 );
            GET_CAR_MODEL( (uParam4^), ref uVar7 );
            if (IS_THIS_MODEL_A_CAR( uVar7 ))
            {
                CLOSE_ALL_CAR_DOORS( (uParam4^) );
            }
            SET_CAR_COORDINATES( (uParam4^), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
            SET_CAR_HEADING( (uParam4^), uParam3 );
        }
    }
    return;
}

void sub_33527()
{
    vector vVar2;
    float fVar5;
    vector vVar6;
    float fVar9;

    vVar2 = {2334.23600000, 153.39900000, 4.80780000};
    fVar5 = 0;
    vVar6 = {2305.19700000, 172.67040000, 4.80780000};
    fVar9 = 90;
    switch (l_U662)
    {
        case 0:
        if ((sub_32933( l_U917 )) AND (sub_32643( 1, 1 )))
        {
            SET_PLAYER_CONTROL( sub_6868(), 0 );
            if ((HAS_MODEL_LOADED( l_U913 )) AND ((HAS_MODEL_LOADED( l_U912 )) AND (HAS_MODEL_LOADED( l_U911 ))))
            {
                if (HAS_CAR_RECORDING_BEEN_LOADED( 75 ))
                {
                    sub_33773( ref l_U931 );
                    if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_3227(), ref l_U926 );
                        if (NOT (IS_CAR_A_MISSION_CAR( l_U926 )))
                        {
                            SET_CAR_AS_MISSION_CAR( l_U926 );
                        }
                        if (NOT (IS_CAR_ON_FIRE( l_U926 )))
                        {
                            RETUNE_RADIO_TO_STATION_NAME( "OFF" );
                            SET_EVERYONE_IGNORE_PLAYER( sub_6868(), 1 );
                            SET_PLAYER_CONTROL( sub_6868(), 0 );
                            GET_GAME_TIMER( ref l_U758 );
                            CREATE_CAM( 14, ref l_U936 );
                            if (DOES_CAM_EXIST( l_U936 ))
                            {
                                SET_CAM_POS( l_U936, 2288.96100000, 177.07720000, 6.88489000 );
                                if (IS_VEH_DRIVEABLE( l_U926 ))
                                {
                                    POINT_CAM_AT_VEHICLE( l_U936, l_U926 );
                                }
                                SET_CAM_ACTIVE( l_U936, 1 );
                                SET_CAM_NEAR_DOF( l_U936, 1 );
                                SET_CAM_FAR_DOF( l_U936, 20 );
                                SET_CAM_FOV( l_U936, 25 );
                                SET_CAM_PROPAGATE( l_U936, 1 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U917 )))
                            {
                                if (IS_GROUP_MEMBER( l_U917, sub_27199() ))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U917 );
                                }
                            }
                            CREATE_CAR( l_U911, vVar2.x, vVar2.y, vVar2.z, ref l_U927, 1 );
                            SET_CAR_HEADING( l_U927, fVar5 );
                            CREATE_CHAR_INSIDE_CAR( l_U927, 25, l_U912, ref l_U919 );
                            CREATE_CHAR_AS_PASSENGER( l_U927, 25, l_U913, 0, ref l_U920 );
                            sub_25809( 1 );
                            l_U662 = 1;
                        }
                    }
                    else
                    {
                        CREATE_CAR( l_U911, vVar2.x, vVar2.y, vVar2.z, ref l_U927, 1 );
                        SET_CAR_HEADING( l_U927, fVar5 );
                        CREATE_CHAR_INSIDE_CAR( l_U927, 25, l_U912, ref l_U919 );
                        CREATE_CHAR_AS_PASSENGER( l_U927, 25, l_U913, 0, ref l_U920 );
                        SET_CAR_COLOUR_COMBINATION( l_U927, 0 );
                        GET_GAME_TIMER( ref l_U758 );
                        SET_EVERYONE_IGNORE_PLAYER( sub_6868(), 1 );
                        SET_PLAYER_CONTROL( sub_6868(), 0 );
                        sub_34425( 2288.96100000, 177.07720000, 6.88489000, -7.88449100, -0.00000000, 105.48800000, 20, 1, 20, ref l_U936 );
                        sub_25809( 1 );
                        GET_GAME_TIMER( ref l_U755 );
                        CLEAR_PRINTS();
                        if (NOT (IS_CHAR_INJURED( l_U917 )))
                        {
                            if (IS_GROUP_MEMBER( l_U917, sub_27199() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U917 );
                            }
                        }
                        l_U662 = 1;
                    }
                }
            }
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U756 );
        l_U757 = l_U756 - l_U755;
        if (l_U757 > 1000)
        {
            if (sub_27453( l_U791, ref l_U785, 6, 1 ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
                {
                    TASK_LEAVE_ANY_CAR( sub_3227() );
                }
                GET_GAME_TIMER( ref l_U755 );
                if (IS_VEH_DRIVEABLE( l_U927 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U919 )))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U927, 75 );
                        SET_PLAYBACK_SPEED( l_U927, 1.00000000 );
                    }
                }
                l_U662 = 2;
            }
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U756 );
        l_U757 = l_U756 - l_U755;
        if (l_U757 > 1000)
        {
            if (IS_CHAR_IN_ANY_CAR( l_U917 ))
            {
                TASK_LEAVE_ANY_CAR( l_U917 );
            }
            l_U662 = 3;
        }
        break;
        case 3:
        GET_HEADING_FROM_VECTOR_2D( 2305.84000000 - 2306.70500000, 172 - 173.95230000, ref l_U692 );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3227() )))
        {
            TASK_GO_STRAIGHT_TO_COORD( sub_3227(), 2309.70500000, 173.95230000, 4.71870000, 2, 10000 );
            l_U662 = 4;
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U917 )))
        {
            GET_HEADING_FROM_VECTOR_2D( 2309.70000000 - 2305.84000000, 173.95000000 - 173.95230000, ref l_U783 );
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U917 )))
        {
            TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD( l_U917, 2309.70000000, 173.90000000, 4.70000000, 2, -2, 1.00000000, l_U783 - 180 );
            GET_GAME_TIMER( ref l_U755 );
            l_U662 = 5;
        }
        break;
        case 5:
        GET_GAME_TIMER( ref l_U756 );
        l_U757 = l_U756 - l_U755;
        if (l_U757 > 700)
        {
            l_U662 = 6;
        }
        break;
        case 6:
        CREATE_CAM( 14, ref l_U938 );
        SET_CAM_POS( l_U938, 2268.89500000, 174.98000000, 6.72071600 );
        SET_CAM_ROT( l_U938, -4.73190300, 0.00000000, -95.15455000 );
        SET_CAM_FOV( l_U938, 45 );
        SET_CAM_ACTIVE( l_U938, 1 );
        SET_CAM_PROPAGATE( l_U938, 1 );
        CREATE_CAM( 14, ref l_U939 );
        SET_CAM_POS( l_U939, 2269.04300000, 174.96670000, 8.51458100 );
        SET_CAM_ROT( l_U939, -4.73190300, 0.00000000, -95.15455000 );
        SET_CAM_FOV( l_U939, 45 );
        SET_CAM_ACTIVE( l_U939, 1 );
        SET_CAM_PROPAGATE( l_U939, 0 );
        CREATE_CAM( 3, ref l_U940 );
        SET_CAM_ACTIVE( l_U940, 1 );
        SET_CAM_PROPAGATE( l_U940, 0 );
        SET_CAM_PROPAGATE( l_U938, 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U940, l_U938, l_U939, 5000, 0 );
        SET_CAM_PROPAGATE( l_U940, 1 );
        l_U662 = 7;
        break;
        case 7:
        GET_GAME_TIMER( ref l_U755 );
        l_U662 = 8;
        break;
        case 8:
        GET_GAME_TIMER( ref l_U756 );
        l_U757 = l_U756 - l_U755;
        if (IS_VEH_DRIVEABLE( l_U927 ))
        {
            if ((l_U757 > 5000) || (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U927 ))))
            {
                GET_GAME_TIMER( ref l_U755 );
                l_U662 = 9;
            }
        }
        break;
        case 9:
        GET_GAME_TIMER( ref l_U756 );
        l_U757 = l_U756 - l_U755;
        if (NOT (sub_25512( l_U785 )))
        {
            if (l_U757 > 0)
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                l_U656 = 8;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U755 );
        }
        break;
    }
    return;
}

void sub_33773(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    return;
}

void sub_34425(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    SET_USE_HIGHDOF( 1 );
    CLEAR_PRINTS();
    if (DOES_CAM_EXIST( (uParam9^) ))
    {
        DESTROY_CAM( (uParam9^) );
    }
    CREATE_CAM( 14, uParam9 );
    SET_CAM_POS( (uParam9^), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    SET_CAM_ROT( (uParam9^), uParam3._fU0, uParam3._fU4, uParam3._fU8 );
    SET_CAM_FOV( (uParam9^), uParam6 );
    SET_CAM_NEAR_DOF( (uParam9^), uParam7 );
    SET_CAM_FAR_DOF( (uParam9^), uParam8 );
    SET_CAM_ACTIVE( (uParam9^), 1 );
    SET_CAM_PROPAGATE( (uParam9^), 1 );
    return;
}

void sub_35849(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_35886()
{
    switch (l_U661)
    {
        case 0:
        if ((sub_32933( l_U917 )) AND (sub_32643( 1, 1 )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
            {
                GET_CAR_CHAR_IS_USING( sub_3227(), ref l_U926 );
                if (NOT (IS_CAR_ON_FIRE( l_U926 )))
                {
                    l_U661 = 1;
                }
            }
            else
            {
                l_U661 = 1;
            }
        }
        break;
        case 1:
        LOAD_ADDITIONAL_TEXT( "R14AUD", 6 );
        CLEAR_PRINTS();
        START_CUTSCENE_NOW( "RP_14" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            CLEAR_PRINTS();
            WAIT( 0 );
        }
        if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_3227(), 2306.92300000, 174.25330000, 4.80780000 );
        }
        else
        {
            SET_CHAR_COORDINATES( sub_3227(), 2306.92300000, 174.25330000, 4.80780000 );
        }
        if (DOES_CHAR_EXIST( l_U919 ))
        {
            DELETE_CHAR( ref l_U919 );
        }
        if (DOES_CHAR_EXIST( l_U920 ))
        {
            DELETE_CHAR( ref l_U920 );
        }
        if (DOES_VEHICLE_EXIST( l_U927 ))
        {
            DELETE_CAR( ref l_U927 );
        }
        for ( l_U907 = 0; l_U907 <= 9; l_U907++ )
        {
            GET_CHAR_WEAPON_IN_SLOT( sub_3227(), l_U907, ref l_U914, ref l_U916, ref l_U915 );
            if (l_U914 == 7)
            {
                SET_CURRENT_CHAR_WEAPON( sub_3227(), 7, 0 );
            }
            if (l_U914 == 9)
            {
                SET_CURRENT_CHAR_WEAPON( sub_3227(), 9, 0 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U917 )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U917 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U917, 2309.70500000, 173.95230000, 4.71870000 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U917, 2309.70500000, 173.95230000, 4.71870000 );
            }
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        REQUEST_ANIMS( "move_m@h_cuffed" );
        while (NOT (HAVE_ANIMS_LOADED( "MOVE_M@H_CUFFED" )))
        {
            WAIT( 0 );
        }
        while (NOT (HAS_MODEL_LOADED( l_U909 )))
        {
            WAIT( 0 );
        }
        CREATE_CHAR( l_U908, l_U909, 2305.84000000, 172, 4.90000000, ref l_U918, 1 );
        if (NOT (IS_CHAR_INJURED( l_U918 )))
        {
            SET_CHAR_DECISION_MAKER( l_U918, l_U928 );
            sub_4558( 2, l_U918, "DARKO_BREVIC", 0 );
            SET_COMBAT_DECISION_MAKER( l_U918, l_U929 );
            SET_CHAR_MONEY( l_U918, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U918, 1, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U918, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U918, 2, 0, 0 );
            SET_CHAR_AS_ENEMY( l_U918, 1 );
            UNLOCK_RAGDOLL( l_U918, 0 );
            SET_PED_PATH_MAY_USE_LADDERS( l_U918, 0 );
            SET_ANIM_GROUP_FOR_CHAR( l_U918, "MOVE_M@H_CUFFED" );
            ADD_BLIP_FOR_CHAR( l_U918, ref l_U923 );
            SET_CHAR_HEALTH( l_U918, 350 );
        }
        if (DOES_BLIP_EXIST( l_U923 ))
        {
            CHANGE_BLIP_COLOUR( l_U923, 1 );
            CHANGE_BLIP_DISPLAY( l_U923, 4 );
        }
        GET_HEADING_FROM_VECTOR_2D( 2305.84000000 - 2306.70500000, 172 - 173.95230000, ref l_U692 );
        SET_CHAR_HEADING( sub_3227(), l_U692 );
        if (NOT (IS_CHAR_INJURED( l_U917 )))
        {
            GET_HEADING_FROM_VECTOR_2D( 2309.70000000 - 2305.84000000, 173.95000000 - 173.95230000, ref l_U783 );
            SET_CHAR_HEADING( l_U917, l_U783 - 180 );
        }
        if (NOT (IS_CHAR_DEAD( l_U918 )))
        {
            SET_CHAR_IS_TARGET_PRIORITY( l_U918, 1 );
            SET_CHAR_HEADING( l_U918, l_U692 - 180.00000000 );
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        GET_GAME_TIMER( ref l_U755 );
        if (NOT (IS_CHAR_INJURED( l_U918 )))
        {
            TASK_PLAY_ANIM( l_U918, "plead", "missroman14", 8.00000000, 1, 0, 0, 1, -2 );
            SET_CHAR_READY_TO_BE_EXECUTED( l_U918, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U918, 1 );
        }
        CLEAR_PRINTS();
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        sub_25809( 0 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 3000 );
        }
        l_U661 = 2;
        break;
        case 2:
        CLEAR_NAMED_CUTSCENE( "RP_14" );
        l_U661 = 3;
        break;
        case 3:
        if (IS_SCREEN_FADED_IN())
        {
            l_U656 = 10;
        }
        break;
    }
    return;
}

void sub_37736(unknown uParam0, unknown uParam1, unknown uParam2)
{
    string sVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;

    sVar5 = "Victim";
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                if (NOT (IS_CHAR_INJURED( sub_3227() )))
                {
                    GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar7 );
                    if (NOT (IS_CHAR_PLAYING_ANIM( uParam0, uParam2, uParam1 )))
                    {
                        if (NOT (iVar7 == 1))
                        {
                            if (NOT (IS_PED_RAGDOLL( uParam0 )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar8 );
                                TASK_LOOK_AT_CHAR( 0, sub_3227(), -2, 0 );
                                TASK_PLAY_ANIM( 0, uParam1, uParam2, 2.00000000, 1, 0, 0, 0, 0 );
                                CLOSE_SEQUENCE_TASK( uVar8 );
                                TASK_PERFORM_SEQUENCE( uParam0, uVar8 );
                                CLEAR_SEQUENCE_TASK( uVar8 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_37996(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    GET_GAME_TIMER( ref iVar4 );
    if ((iVar4 - (uParam1^)) > 500)
    {
        GET_BLIP_COLOUR( (uParam0^), ref iVar5 );
        if (iVar5 == 4)
        {
            CHANGE_BLIP_COLOUR( (uParam0^), 3 );
            GET_GAME_TIMER( uParam1 );
            return 1;
        }
        else
        {
            CHANGE_BLIP_COLOUR( (uParam0^), 1 );
            GET_GAME_TIMER( uParam1 );
            return 1;
        }
        break;
    }
    return 0;
}

int sub_38121(unknown uParam0)
{
    int iVar3;

    GET_CURRENT_CHAR_WEAPON( sub_3227(), ref iVar3 );
    if ((iVar3 != 7) AND (iVar3 != 9))
    {
        return 0;
    }
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_3227() )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                if (((IS_CONTROL_JUST_PRESSED( 0, 4 )) AND ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_6868(), uParam0 )) AND (NOT IS_USING_CONTROLLER()))) || (GET_CHAR_MELEE_ACTION_FLAG0( uParam0 )))
                {
                    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( sub_3227() ))))
                    {
                        SET_CHAR_READY_TO_BE_EXECUTED( uParam0, 0 );
                        SET_CHAR_MELEE_ACTION_FLAG0( uParam0, 0 );
                        CLEAR_HELP();
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_39517()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;

    switch (l_U666)
    {
        case 0:
        l_U666 = 1;
        break;
        case 1:
        sub_33773( ref l_U931 );
        if (NOT (IS_CHAR_DEAD( l_U918 )))
        {
            if (IS_CHAR_INJURED( l_U918 ))
            {
                REVIVE_INJURED_PED( l_U918 );
            }
        }
        FREEZE_CHAR_POSITION( sub_3227(), 1 );
        SET_PLAYER_CONTROL( sub_6868(), 0 );
        GET_CURRENT_CHAR_WEAPON( sub_3227(), ref l_U721 );
        if (l_U721 == 7)
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_3227(), 7, ref iVar11 );
        }
        if (l_U721 == 9)
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_3227(), 9, ref iVar11 );
        }
        if (iVar11 < 13)
        {
            if (l_U721 == 7)
            {
                SET_AMMO_IN_CLIP( sub_3227(), 7, 13 );
            }
            if (l_U721 == 9)
            {
                SET_AMMO_IN_CLIP( sub_3227(), 9, 13 );
            }
        }
        SET_CHAR_COORDINATES( sub_3227(), 2306.70500000, 173.95230000, 4.71870000 );
        SET_CHAR_HEADING( sub_3227(), l_U692 );
        FREEZE_CHAR_POSITION( sub_3227(), 0 );
        TASK_PLAY_ANIM( sub_3227(), "player_execute", "missroman14", 1000.00000000, 0, 1, 1, 0, -2 );
        if (NOT (IS_CHAR_INJURED( l_U917 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U918 )))
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U917, l_U918 );
                TASK_LOOK_AT_CHAR( l_U917, l_U918, 20000, 0 );
            }
        }
        DISPLAY_RADAR( 0 );
        DISPLAY_HUD( 0 );
        if (DOES_BLIP_EXIST( l_U923 ))
        {
            REMOVE_BLIP( l_U923 );
        }
        sub_3289( 0 );
        if (NOT (IS_CHAR_INJURED( l_U917 )))
        {
            if (IS_GROUP_MEMBER( l_U917, sub_27199() ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U917 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U917 )))
        {
            SET_CHAR_COORDINATES( l_U917, 2309.70500000, 173.95230000, 4.71870000 );
        }
        SET_TIME_SCALE( 0.75000000 );
        if (NOT (IS_CHAR_DEAD( l_U918 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3227(), 0, 5.24200000, -1.00010000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            SET_CHAR_COORDINATES( l_U918, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
            SET_CHAR_HEADING( l_U918, l_U692 + 175 );
            SET_CHAR_DESIRED_HEADING( l_U918, l_U692 + 175 );
            SET_CHAR_PROOFS( l_U918, 1, 0, 0, 0, 0 );
            UNLOCK_RAGDOLL( l_U918, 0 );
            if (NOT (IS_CHAR_INJURED( l_U918 )))
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U918, "plead", "missroman14", 8.00000000, 0, 0, 0, 1, -2 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U918 )))
        {
            TASK_PLAY_ANIM_WITH_FLAGS( l_U918, "victim", "missroman14", 1000.00000000, -2, 139 );
        }
        CREATE_CAM( 14, ref l_U937 );
        SET_CAM_POS( l_U937, 2306.52500000, 174.65440000, 6.45264100 );
        SET_CAM_ROT( l_U937, -4.82596100, -0.00000000, 174.29090000 );
        SET_CAM_FOV( l_U937, 35.70007000 );
        SET_CAM_ACTIVE( l_U937, 1 );
        SET_CAM_PROPAGATE( l_U937, 1 );
        GET_GAME_TIMER( ref l_U761 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        l_U666 = 2;
        break;
        case 2:
        GET_GAME_TIMER( ref l_U762 );
        GET_GAME_TIMER( ref l_U761 );
        sub_27453( l_U896, ref l_U890, 6, 1 );
        l_U666 = 3;
        break;
        case 3:
        if (IS_CHAR_PLAYING_ANIM( sub_3227(), "missroman14", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_3227(), "missroman14", "player_execute", ref l_U693 );
            if (l_U693 > 0.19000000)
            {
                sub_34425( 2304.01400000, 170.46540000, 4.84026500, 25.79650000, -0.00000000, -161.75960000, 45, 0.50000000, 10.00000000, ref l_U937 );
                l_U666 = 4;
            }
        }
        break;
        case 4:
        if (IS_CHAR_PLAYING_ANIM( sub_3227(), "missroman14", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_3227(), "missroman14", "player_execute", ref l_U693 );
            if (l_U693 > 0.28000000)
            {
                sub_34425( 2303.15600000, 168.09450000, 5.12184500, 6.54512000, 0.00000000, -39.37588000, 45, 0.50000000, 10.00000000, ref l_U937 );
                l_U666 = 5;
            }
        }
        break;
        case 5:
        if (IS_CHAR_PLAYING_ANIM( sub_3227(), "missroman14", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_3227(), "missroman14", "player_execute", ref l_U693 );
            if (l_U693 > 0.42200000)
            {
                while (NOT (sub_27453( l_U854, ref l_U848, 6, 1 )))
                {
                    WAIT( 0 );
                }
                GET_GAME_TIMER( ref l_U761 );
                l_U666 = 6;
            }
        }
        break;
        case 6:
        if (IS_CHAR_PLAYING_ANIM( sub_3227(), "missroman14", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_3227(), "missroman14", "player_execute", ref l_U693 );
            if (l_U693 > 0.52200000)
            {
                GET_GAME_TIMER( ref l_U761 );
                l_U666 = 7;
            }
        }
        break;
        case 7:
        if (IS_CHAR_PLAYING_ANIM( sub_3227(), "missroman14", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_3227(), "missroman14", "player_execute", ref l_U693 );
            if (NOT (IS_CHAR_DEAD( l_U918 )))
            {
                SET_CHAR_HEALTH( l_U918, 200 );
            }
            if (l_U693 > 0.62200000)
            {
                if (DOES_CAM_EXIST( l_U937 ))
                {
                    DESTROY_CAM( l_U937 );
                }
                CREATE_CAM( 14, ref l_U937 );
                ATTACH_CAM_TO_PED( l_U937, sub_3227() );
                SET_CAM_ATTACH_OFFSET( l_U937, 0.84260000, -0.82030000, 1.00000000 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U937, 1 );
                POINT_CAM_AT_PED( l_U937, sub_3227() );
                SET_CAM_POINT_OFFSET( l_U937, 0.00000000, 1.10000000, -0.40000000 );
                SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U937, 1 );
                SET_CAM_FOV( l_U937, 45 );
                SET_CAM_ACTIVE( l_U937, 1 );
                SET_CAM_PROPAGATE( l_U937, 1 );
                GET_GAME_TIMER( ref l_U761 );
                sub_27453( l_U903, ref l_U897, 6, 1 );
                l_U666 = 8;
            }
        }
        break;
        case 8:
        if (NOT (IS_CHAR_PLAYING_ANIM( sub_3227(), "missroman14", "player_execute" )))
        {
            if (NOT (IS_CHAR_INJURED( l_U917 )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U917, sub_27199() )))
                {
                    SET_GROUP_MEMBER( sub_27199(), l_U917 );
                }
            }
            sub_41799( l_U721, iVar11 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL( sub_6868(), 1 );
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            SET_TIME_SCALE( 1.00000000 );
            sub_35849( ref l_U931 );
            l_U698 = 0;
            l_U656 = 11;
        }
        break;
    }
    if (IS_CHAR_PLAYING_ANIM( sub_3227(), "missroman14", "player_execute" ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( sub_3227(), "missroman14", "player_execute", ref l_U693 );
        if (l_U693 >= 0.00600000)
        {
            if (NOT l_U705[0])
            {
                GET_PED_BONE_POSITION( sub_3227(), 1232, 0.20000000, 0.00000000, 0.00000000, ref uVar8 );
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    GET_PED_BONE_POSITION( l_U918, 1204, -0.12000000, 0.03800000, -0.07600000, ref uVar5 );
                }
                FIRE_SINGLE_BULLET( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 );
                FIRE_PED_WEAPON( sub_3227(), uVar5 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    if (NOT (IS_CHAR_DEAD( l_U918 )))
                    {
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_chest", l_U918, -0.12000000, 0.03800000, -0.07600000, 0, 0, 0, 1204, 1065353216 );
                    }
                }
                sub_42308();
                TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3227(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                PLAY_AUDIO_EVENT_FROM_PED( "SPECIAL_SOMEONE_BLOOD", l_U918 );
                l_U705[0] = 1;
            }
        }
        if (l_U693 >= 0.04300000)
        {
            if (NOT l_U705[1])
            {
                GET_PED_BONE_POSITION( sub_3227(), 1232, 0.20000000, 0.00000000, 0.00000000, ref uVar8 );
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    GET_PED_BONE_POSITION( l_U918, 1204, -0.14700000, 0.01600000, 0.09300000, ref uVar5 );
                }
                FIRE_SINGLE_BULLET( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 );
                FIRE_PED_WEAPON( sub_3227(), uVar5 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    if (NOT (IS_CHAR_DEAD( l_U918 )))
                    {
                        SET_CHAR_COMPONENT_VARIATION( l_U918, 2, 0, 1 );
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_chest", l_U918, -0.14700000, 0.01600000, 0.09300000, 0, 0, 0, 1204, 1065353216 );
                    }
                }
                sub_42308();
                TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3227(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                PLAY_AUDIO_EVENT_FROM_PED( "SPECIAL_SOMEONE_BLOOD", l_U918 );
                l_U705[1] = 1;
            }
        }
        if (l_U693 >= 0.08300000)
        {
            if (NOT l_U705[2])
            {
                GET_PED_BONE_POSITION( sub_3227(), 1232, 0.20000000, 0.00000000, 0.00000000, ref uVar8 );
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    GET_PED_BONE_POSITION( l_U918, 1204, -0.02800000, -0.02000000, 0.01200000, ref uVar5 );
                }
                FIRE_SINGLE_BULLET( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 );
                FIRE_PED_WEAPON( sub_3227(), uVar5 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    if (NOT (IS_CHAR_DEAD( l_U918 )))
                    {
                        SET_CHAR_COMPONENT_VARIATION( l_U918, 1, 0, 1 );
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_chest", l_U918, -0.02800000, -0.02000000, 0.01200000, 0, 0, 0, 1204, 1065353216 );
                    }
                }
                sub_42308();
                TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3227(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                PLAY_AUDIO_EVENT_FROM_PED( "SPECIAL_SOMEONE_BLOOD", l_U918 );
                l_U705[2] = 1;
            }
        }
        if (l_U693 >= 0.12000000)
        {
            if (NOT l_U705[3])
            {
                GET_PED_BONE_POSITION( sub_3227(), 1232, 0.20000000, 0.00000000, 0.00000000, ref uVar8 );
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    GET_PED_BONE_POSITION( l_U918, 1204, -0.06900000, 0.03600000, 0.10000000, ref uVar5 );
                }
                FIRE_SINGLE_BULLET( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 );
                FIRE_PED_WEAPON( sub_3227(), uVar5 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    if (NOT (IS_CHAR_DEAD( l_U918 )))
                    {
                        SET_CHAR_COMPONENT_VARIATION( l_U918, 0, 0, 1 );
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_chest", l_U918, -0.06900000, 0.03600000, 0.10000000, 0, 0, 0, 1204, 1065353216 );
                    }
                }
                sub_42308();
                TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3227(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                PLAY_AUDIO_EVENT_FROM_PED( "SPECIAL_SOMEONE_BLOOD", l_U918 );
                SET_CHAR_COMPONENT_VARIATION( l_U918, 1, 0, 1 );
                l_U705[3] = 1;
            }
        }
        if (l_U693 >= 0.29800000)
        {
            if (NOT l_U705[4])
            {
                GET_PED_BONE_POSITION( sub_3227(), 1232, 0.20000000, 0.00000000, 0.00000000, ref uVar8 );
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    GET_PED_BONE_POSITION( l_U918, 1204, -0.29400000, -0.05100000, -0.06000000, ref uVar5 );
                }
                FIRE_SINGLE_BULLET( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 );
                FIRE_PED_WEAPON( sub_3227(), uVar5 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    if (NOT (IS_CHAR_DEAD( l_U918 )))
                    {
                        SET_CHAR_COMPONENT_VARIATION( l_U918, 1, 0, 2 );
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_chest", l_U918, -0.29400000, -0.05100000, -0.06000000, 0, 0, 0, 1204, 1065353216 );
                    }
                }
                sub_42308();
                TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3227(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                l_U705[4] = 1;
            }
        }
        if (l_U693 >= 0.32800000)
        {
            if (NOT l_U705[5])
            {
                GET_PED_BONE_POSITION( sub_3227(), 1232, 0.20000000, 0.00000000, 0.00000000, ref uVar8 );
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    GET_PED_BONE_POSITION( l_U918, 1204, -0.09500000, -0.00200000, -0.00900000, ref uVar5 );
                }
                FIRE_SINGLE_BULLET( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 );
                FIRE_PED_WEAPON( sub_3227(), uVar5 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    if (NOT (IS_CHAR_DEAD( l_U918 )))
                    {
                        SET_CHAR_COMPONENT_VARIATION( l_U918, 1, 0, 3 );
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_chest", l_U918, -0.09500000, -0.00200000, -0.00900000, 0, 0, 0, 1204, 1065353216 );
                    }
                }
                sub_42308();
                TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3227(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                PLAY_AUDIO_EVENT_FROM_PED( "SPECIAL_SOMEONE_BLOOD", l_U918 );
                l_U705[5] = 1;
            }
        }
        if (l_U693 >= 0.36400000)
        {
            if (NOT l_U705[6])
            {
                GET_PED_BONE_POSITION( sub_3227(), 1232, 0.20000000, 0.00000000, 0.00000000, ref uVar8 );
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    GET_PED_BONE_POSITION( l_U918, 1204, -0.10100000, 0.02500000, 0.04700000, ref uVar5 );
                }
                FIRE_SINGLE_BULLET( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 );
                FIRE_PED_WEAPON( sub_3227(), uVar5 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    if (NOT (IS_CHAR_DEAD( l_U918 )))
                    {
                        SET_CHAR_COMPONENT_VARIATION( l_U918, 1, 0, 4 );
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_chest", l_U918, -0.10100000, 0.02500000, 0.04700000, 0, 0, 0, 1204, 1065353216 );
                    }
                }
                sub_42308();
                TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3227(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                PLAY_AUDIO_EVENT_FROM_PED( "SPECIAL_SOMEONE_BLOOD", l_U918 );
                l_U705[6] = 1;
            }
        }
        if (l_U693 >= 0.66700000)
        {
            if (NOT l_U705[7])
            {
                GET_PED_BONE_POSITION( sub_3227(), 1232, 0.20000000, 0.00000000, 0.00000000, ref uVar8 );
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    GET_PED_BONE_POSITION( l_U918, 1204, -0.24400000, 0.11600000, 0.06900000, ref uVar5 );
                }
                FIRE_SINGLE_BULLET( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 );
                FIRE_PED_WEAPON( sub_3227(), uVar5 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    if (NOT (IS_CHAR_DEAD( l_U918 )))
                    {
                        SET_CHAR_COMPONENT_VARIATION( l_U918, 1, 0, 5 );
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_chest", l_U918, -0.24400000, 0.11600000, 0.06900000, 0, 0, 0, 1204, 1065353216 );
                    }
                }
                sub_42308();
                TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3227(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                PLAY_AUDIO_EVENT_FROM_PED( "SPECIAL_SOMEONE_BLOOD", l_U918 );
                l_U705[7] = 1;
            }
        }
        if (l_U693 >= 0.70900000)
        {
            if (NOT l_U705[8])
            {
                GET_PED_BONE_POSITION( sub_3227(), 1232, 0.20000000, 0.00000000, 0.00000000, ref uVar8 );
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    GET_PED_BONE_POSITION( l_U918, 1204, -0.20200000, 0.07300000, -0.08800000, ref uVar5 );
                }
                FIRE_SINGLE_BULLET( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 );
                FIRE_PED_WEAPON( sub_3227(), uVar5 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    if (NOT (IS_CHAR_DEAD( l_U918 )))
                    {
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_chest", l_U918, -0.20200000, 0.07300000, -0.08800000, 0, 0, 0, 1204, 1065353216 );
                    }
                }
                sub_42308();
                TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3227(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                PLAY_AUDIO_EVENT_FROM_PED( "SPECIAL_SOMEONE_BLOOD", l_U918 );
                l_U705[8] = 1;
            }
        }
        if (l_U693 >= 0.74900000)
        {
            if (NOT l_U705[9])
            {
                GET_PED_BONE_POSITION( sub_3227(), 1232, 0.20000000, 0.00000000, 0.00000000, ref uVar8 );
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    GET_PED_BONE_POSITION( l_U918, 1204, -0.12300000, 0.01400000, 0.00800000, ref uVar5 );
                }
                FIRE_SINGLE_BULLET( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 );
                FIRE_PED_WEAPON( sub_3227(), uVar5 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    if (NOT (IS_CHAR_DEAD( l_U918 )))
                    {
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_chest", l_U918, -0.12300000, 0.01400000, 0.00800000, 0, 0, 0, 1204, 1065353216 );
                    }
                }
                sub_42308();
                TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3227(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                PLAY_AUDIO_EVENT_FROM_PED( "SPECIAL_SOMEONE_BLOOD", l_U918 );
                l_U705[9] = 1;
            }
        }
        if (l_U693 >= 0.78800000)
        {
            if (NOT l_U705[10])
            {
                GET_PED_BONE_POSITION( sub_3227(), 1232, 0.20000000, 0.00000000, 0.00000000, ref uVar8 );
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    GET_PED_BONE_POSITION( l_U918, 1204, -0.07000000, 0.05000000, -0.02300000, ref uVar5 );
                }
                FIRE_SINGLE_BULLET( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 );
                FIRE_PED_WEAPON( sub_3227(), uVar5 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    if (NOT (IS_CHAR_DEAD( l_U918 )))
                    {
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_chest", l_U918, -0.07000000, 0.05000000, -0.02300000, 0, 0, 0, 1204, 1065353216 );
                    }
                }
                sub_42308();
                TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3227(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                PLAY_AUDIO_EVENT_FROM_PED( "SPECIAL_SOMEONE_BLOOD", l_U918 );
                l_U705[10] = 1;
            }
        }
        if (l_U693 >= 0.82700000)
        {
            if (NOT l_U705[11])
            {
                GET_PED_BONE_POSITION( sub_3227(), 1232, 0.20000000, 0.00000000, 0.00000000, ref uVar8 );
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    GET_PED_BONE_POSITION( l_U918, 1204, -0.14400000, 0.04000000, -0.09700000, ref uVar5 );
                }
                FIRE_PED_WEAPON( sub_3227(), uVar5 );
                if (NOT (# -NULL-0xc27bca()))
                {
                    if (NOT (IS_CHAR_DEAD( l_U918 )))
                    {
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_chest", l_U918, -0.14400000, 0.04000000, -0.09700000, 0, 0, 0, 1204, 1065353216 );
                    }
                }
                sub_42308();
                FIRE_SINGLE_BULLET( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 );
                TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3227(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                PLAY_AUDIO_EVENT_FROM_PED( "SPECIAL_SOMEONE_BLOOD", l_U918 );
                if (NOT (IS_CHAR_DEAD( l_U918 )))
                {
                    UNLOCK_RAGDOLL( l_U918, 1 );
                    STOP_PED_SPEAKING( l_U918, 1 );
                    SET_CHAR_HEALTH( l_U918, 70 );
                }
                l_U705[11] = 1;
            }
        }
    }
    return;
}

void sub_41799(int iParam0, unknown uParam1)
{
    if (iParam0 == 9)
    {
        SET_AMMO_IN_CLIP( sub_3227(), 9, uParam1 );
    }
    if (iParam0 == 7)
    {
        SET_AMMO_IN_CLIP( sub_3227(), 7, uParam1 );
    }
    return;
}

void sub_42308()
{
    GET_CURRENT_CHAR_WEAPON( sub_3227(), ref l_U721 );
    if (l_U721 == 9)
    {
        SET_AMMO_IN_CLIP( sub_3227(), 9, 2 );
    }
    if (l_U721 == 7)
    {
        SET_AMMO_IN_CLIP( sub_3227(), 7, 2 );
    }
    return;
}

void sub_47244()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
    {
        GET_CAR_CHAR_IS_USING( sub_3227(), ref uVar2 );
    }
    if (NOT (IS_CHAR_INJURED( l_U918 )))
    {
        if (IS_VEH_DRIVEABLE( uVar2 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( l_U918, uVar2 ))
            {
                CLEAR_HELP();
                SET_CHAR_HEALTH( l_U918, 70 );
            }
        }
    }
    return;
}

void sub_47502(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 <= 3) AND (g_U8392 >= 1))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_48107()
{
    switch (l_U659)
    {
        case 0:
        sub_30861();
        if (IS_GROUP_MEMBER( l_U917, sub_27199() ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3227(), l_U917, 12.00000000, 12.00000000, 12.00000000, 0 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U917 )))
                {
                    STOP_PED_SPEAKING( l_U917, 1 );
                }
                switch (l_U664)
                {
                    case 0:
                    if (DOES_BLIP_EXIST( l_U925 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U925, 4 );
                    }
                    SET_ROUTE( l_U925, 1 );
                    if (DOES_BLIP_EXIST( l_U923 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U923, 0 );
                    }
                    GET_GAME_TIMER( ref l_U755 );
                    CLEAR_PRINTS();
                    while (NOT (sub_27453( l_U889, ref l_U883, 6, 1 )))
                    {
                        WAIT( 0 );
                    }
                    l_U664 = 1;
                    break;
                    case 1:
                    if (NOT (sub_25512( l_U883 )))
                    {
                        l_U664 = 2;
                    }
                    break;
                    case 2:
                    PRINT_NOW( "roman14_07", 7500, 1 );
                    l_U664 = 3;
                    break;
                    case 3:
                    GET_GAME_TIMER( ref l_U756 );
                    l_U757 = l_U756 - l_U755;
                    if (l_U757 < 7500)
                    {
                        if (sub_25512( l_U813 ))
                        {
                            sub_25684( ref l_U813, 0 );
                        }
                        if (sub_25512( l_U806 ))
                        {
                            sub_25684( ref l_U806, 0 );
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U755 );
                        CLEAR_PRINTS();
                        sub_48616();
                        if (((IS_CHAR_IN_ANY_CAR( l_U917 )) AND (IS_CHAR_IN_ANY_CAR( sub_3227() ))) || (l_U757 > 17500))
                        {
                            if (NOT (sub_25512( l_U876 )))
                            {
                                if (IS_GROUP_MEMBER( l_U917, sub_27199() ))
                                {
                                    if (l_U698 == 1)
                                    {
                                        while (NOT (sub_27453( l_U812, ref l_U806, 6, 1 )))
                                        {
                                            WAIT( 0 );
                                        }
                                    }
                                    else
                                    {
                                        while (NOT (sub_27453( l_U819, ref l_U813, 6, 1 )))
                                        {
                                            WAIT( 0 );
                                        }
                                    }
                                    l_U664 = 8;
                                }
                            }
                        }
                    }
                    break;
                    case 8:
                    sub_48616();
                    if (l_U698 == 1)
                    {
                        if (NOT (sub_25512( l_U806 )))
                        {
                            l_U664 = 9;
                        }
                    }
                    else if (NOT (sub_25512( l_U813 )))
                    {
                        l_U664 = 9;
                    }
                    break;
                    case 9:
                    sub_48616();
                    break;
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U917 )))
            {
                if (IS_GROUP_MEMBER( l_U917, sub_27199() ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3227(), l_U673._fU0, l_U673._fU4, l_U673._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                    {
                        if ((sub_32933( l_U917 )) AND (sub_32643( 1, 1 )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
                            {
                                GET_CAR_CHAR_IS_USING( sub_3227(), ref l_U926 );
                                if (NOT (IS_CAR_A_MISSION_CAR( l_U926 )))
                                {
                                    SET_CAR_AS_MISSION_CAR( l_U926 );
                                }
                            }
                            FLUSH_SCENARIO_BLOCKING_AREAS();
                            SWITCH_ROADS_ON( l_U670._fU0 - 10, l_U670._fU4 - 10, l_U670._fU8 - 10, l_U670._fU0 + 10, l_U670._fU4 + 10, l_U670._fU8 + 10 );
                            SWITCH_ROADS_OFF( l_U673._fU0 - 10, l_U673._fU4 - 10, l_U673._fU8 - 10, l_U673._fU0 + 10, l_U673._fU4 + 10, l_U673._fU8 + 10 );
                            l_U659 = 2;
                        }
                    }
                }
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U917 )))
        {
            STOP_PED_SPEAKING( l_U917, 0 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U918 );
        l_U918 = nil;
        if (DOES_BLIP_EXIST( l_U925 ))
        {
            SET_ROUTE( l_U925, 0 );
            CHANGE_BLIP_DISPLAY( l_U925, 0 );
            CHANGE_BLIP_COLOUR( l_U925, 5 );
        }
        SET_PLAYER_CONTROL( sub_6868(), 0 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        if (IS_GROUP_MEMBER( l_U917, sub_27199() ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U917 );
        }
        GET_GAME_TIMER( ref l_U756 );
        SET_PLAYER_GROUP_TO_FOLLOW_ALWAYS( sub_6868(), 0 );
        l_U656 = 15;
        break;
    }
    return;
}

void sub_48616()
{
    unknown uVar2;

    if (l_U904 == 0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
        {
            GET_CAR_CHAR_IS_USING( sub_3227(), ref uVar2 );
            if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_3227() )))
            {
                if (IS_VEH_DRIVEABLE( uVar2 ))
                {
                    if (IS_CHAR_IN_CAR( l_U917, uVar2 ))
                    {
                        if (sub_25512( l_U848 ))
                        {
                            sub_29638( ref l_U848 );
                        }
                        if (sub_25512( l_U855 ))
                        {
                            sub_29638( ref l_U855 );
                        }
                        if (sub_25512( l_U813 ))
                        {
                            sub_29638( ref l_U813 );
                        }
                        if (sub_25512( l_U806 ))
                        {
                            sub_29638( ref l_U806 );
                        }
                        if (sub_27453( l_U882, ref l_U876, 7, 1 ))
                        {
                            RETUNE_RADIO_TO_STATION_NAME( "OFF" );
                            l_U904 = 1;
                        }
                    }
                }
            }
        }
    }
    else if (IS_GROUP_MEMBER( l_U917, sub_27199() ))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3227(), l_U917, 12.00000000, 12.00000000, 12.00000000, 0 ))
        {
            if (l_U941 != 9)
            {
                if (l_U941 != 10)
                {
                    if (l_U941 != 11)
                    {
                        if (l_U778 == 0)
                        {
                            if (NOT (sub_25512( l_U876 )))
                            {
                                if (sub_30157( l_U848 ))
                                {
                                    sub_30194( l_U854, ref l_U848, 6, 1 );
                                }
                                if (sub_30157( l_U855 ))
                                {
                                    sub_30194( l_U861, ref l_U855, 6, 1 );
                                }
                                if (sub_30157( l_U813 ))
                                {
                                    sub_30194( l_U819, ref l_U813, 6, 1 );
                                }
                                if (sub_30157( l_U806 ))
                                {
                                    sub_30194( l_U812, ref l_U806, 6, 1 );
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_49938()
{
    vector vVar2;
    vector vVar5;

    vVar2 = {771.60360000, 127.82430000, 6.46070500};
    vVar5 = {776.25110000, 115.11320000, 6.44150800};
    if (NOT (IS_CHAR_INJURED( l_U917 )))
    {
        switch (l_U665)
        {
            case 0:
            if ((sub_32933( l_U917 )) AND (sub_32643( 1, 1 )))
            {
                sub_33773( ref l_U931 );
                sub_33131( 770.82620000, 100.07590000, 5.02270000, 193.11870000, ref l_U926 );
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_3227() )))
                {
                    SET_EVERYONE_IGNORE_PLAYER( sub_6868(), 1 );
                    if (sub_25512( l_U806 ))
                    {
                        sub_25684( ref l_U806, 0 );
                    }
                    if (sub_25512( l_U813 ))
                    {
                        sub_25684( ref l_U813, 0 );
                    }
                    l_U665 = 1;
                }
                else if (NOT (IS_CAR_ON_FIRE( l_U926 )))
                {
                    SET_EVERYONE_IGNORE_PLAYER( sub_6868(), 1 );
                    if (sub_25512( l_U806 ))
                    {
                        sub_25684( ref l_U806, 0 );
                    }
                    if (sub_25512( l_U813 ))
                    {
                        sub_25684( ref l_U813, 0 );
                    }
                    l_U665 = 1;
                }
            }
            break;
            case 1:
            CLEAR_AREA( l_U688._fU0, l_U688._fU4, l_U688._fU8, 30.00000000, 1 );
            CREATE_CAM( 14, ref l_U933 );
            if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
            {
                GET_CAR_CHAR_IS_USING( sub_3227(), ref l_U926 );
                if (sub_50404( l_U926, 0 ))
                {
                    SET_CAM_POS( l_U933, vVar2.x, vVar2.y, vVar2.z );
                    POINT_CAM_AT_PED( l_U933, sub_3227() );
                    SET_CAM_FOV( l_U933, 25 );
                    SET_CAM_NEAR_DOF( l_U933, 1.00000000 );
                    SET_CAM_FAR_DOF( l_U933, 10.00000000 );
                }
                else
                {
                    SET_CAM_POS( l_U933, vVar5.x, vVar5.y, vVar5.z );
                    POINT_CAM_AT_PED( l_U933, sub_3227() );
                    SET_CAM_FOV( l_U933, 25 );
                    SET_CAM_NEAR_DOF( l_U933, 1.00000000 );
                    SET_CAM_FAR_DOF( l_U933, 10.00000000 );
                }
                TASK_LOOK_AT_CHAR( sub_3227(), l_U917, 20000, 0 );
                TASK_LOOK_AT_CHAR( l_U917, sub_3227(), 18000, 0 );
            }
            else
            {
                SET_CAM_POS( l_U933, 778.09740000, 122.47500000, 5.80196200 );
                SET_CAM_ROT( l_U933, 11.80565000, 0.00000000, 62.71671000 );
                SET_CAM_FOV( l_U933, 45 );
            }
            SET_CAM_ACTIVE( l_U933, 1 );
            SET_CAM_PROPAGATE( l_U933, 1 );
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U917 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U917 );
                SET_CHAR_COORDINATES( l_U917, l_U688._fU0, l_U688._fU4, l_U688._fU8 );
                SET_CHAR_HEADING( l_U917, l_U691 );
            }
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3227() )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3227() );
                SET_CHAR_COORDINATES( sub_3227(), l_U684._fU0, l_U684._fU4, l_U684._fU8 );
                SET_CHAR_HEADING( sub_3227(), l_U687 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U917, sub_3227() );
                TASK_LOOK_AT_CHAR( l_U917, sub_3227(), 10000, 0 );
                TASK_LOOK_AT_CHAR( sub_3227(), l_U917, 10000, 0 );
            }
            sub_25809( 1 );
            SET_CAM_BEHIND_PED( sub_3227() );
            if (IS_CHAR_IN_ANY_CAR( l_U917 ))
            {
                TASK_LOOK_AT_CHAR( sub_3227(), l_U917, 10000, 0 );
            }
            while (NOT (sub_26190( l_U826, 0, 1, ref l_U820, 6, 1 )))
            {
                WAIT( 0 );
            }
            l_U665 = 2;
            break;
            case 2:
            if (NOT (sub_25512( l_U820 )))
            {
                while (NOT (sub_26190( l_U826, 1, 1, ref l_U820, 6, 1 )))
                {
                    WAIT( 0 );
                }
                l_U665 = 3;
            }
            break;
            case 3:
            if (NOT (sub_25512( l_U820 )))
            {
                TASK_LEAVE_ANY_CAR( l_U917 );
                l_U665 = 4;
            }
            break;
            case 4:
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U917 )))
            {
                SET_CAM_BEHIND_PED( sub_3227() );
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U917 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_3227() ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U930 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3227() );
                        TASK_PLAY_ANIM( 0, "wave_in_car", "misspass", 8.00000000, 0, 0, 0, 0, -2 );
                        TASK_FLUSH_ROUTE();
                        TASK_EXTEND_ROUTE( l_U681._fU0, l_U681._fU4, l_U681._fU8 );
                        TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                        CLOSE_SEQUENCE_TASK( l_U930 );
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref l_U930 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3227() );
                        TASK_PLAY_ANIM( 0, "bye", "misspass", 8.00000000, 0, 0, 0, 0, -2 );
                        TASK_FLUSH_ROUTE();
                        TASK_EXTEND_ROUTE( l_U681._fU0, l_U681._fU4, l_U681._fU8 );
                        TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                        CLOSE_SEQUENCE_TASK( l_U930 );
                    }
                    TASK_PERFORM_SEQUENCE( l_U917, l_U930 );
                    CLEAR_SEQUENCE_TASK( l_U930 );
                    while (NOT (sub_26190( l_U826, 2, 1, ref l_U820, 6, 1 )))
                    {
                        WAIT( 0 );
                    }
                    l_U665 = 5;
                }
            }
            break;
            case 5:
            SET_CAM_BEHIND_PED( sub_3227() );
            if (NOT (IS_CHAR_ON_SCREEN( l_U917 )))
            {
                if (NOT (sub_25512( l_U820 )))
                {
                    GET_GAME_TIMER( ref l_U766 );
                    l_U665 = 6;
                }
            }
            break;
            case 6:
            GET_GAME_TIMER( ref l_U767 );
            l_U768 = l_U767 - l_U766;
            if (l_U768 > 0)
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                DELETE_CHAR( ref l_U917 );
                SWITCH_ROADS_ON( l_U673._fU0 - 10, l_U673._fU4 - 10, l_U673._fU8 - 10, l_U673._fU0 + 10, l_U673._fU4 + 10, l_U673._fU8 + 10 );
                sub_25809( 0 );
                sub_35849( ref l_U931 );
                l_U694 = 1;
            }
            break;
        }
    }
    else if (l_U931 > 0)
    {
        sub_35849( ref l_U931 );
    }
    sub_25809( 0 );
    l_U694 = 1;;
    return;
}

int sub_50404(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_HEADING( uParam0, ref fVar4 );
        fVar5 = uParam1 - 90;
        fVar6 = uParam1 + 89;
        fVar8 = fVar6 - 360;
        fVar7 = fVar5 + 360;
        if ((fVar5 >= 0) AND (fVar6 <= 360))
        {
            if ((fVar4 < fVar6) AND (fVar4 > fVar5))
            {
                l_U638 = 1;
            }
            else
            {
                l_U638 = 0;
            }
        }
        else if (fVar6 > 360)
        {
            if (((fVar4 > fVar5) AND (fVar4 <= 360)) || ((fVar4 >= 0) AND (fVar4 < fVar8)))
            {
                l_U638 = 1;
            }
            else
            {
                l_U638 = 0;
            }
        }
        else if (fVar5 < 0)
        {
            if (((fVar4 < fVar6) AND (fVar4 >= 0)) || ((fVar4 <= 360) AND (fVar4 > fVar7)))
            {
                l_U638 = 1;
            }
            else
            {
                l_U638 = 0;
            }
        };;;
        if (l_U638)
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

