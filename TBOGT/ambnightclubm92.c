void main()
{
    boolean bVar2;
    int iVar3;
    unknown uVar4;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U105 = 0;
    l_U106 = 1;
    l_U107 = 3;
    l_U109 = 350;
    l_U110 = 1.00000000;
    l_U111 = 20.00000000;
    l_U112 = 0.00000000;
    l_U113 = 0.50000000;
    l_U114 = 0;
    l_U119 = 1;
    l_U121 = 0.20000000;
    l_U1599 = 0;
    l_U1628 = 0;
    l_U1639 = 0.30000000;
    l_U1652 = 15.00000000;
    l_U1653 = 20.00000000;
    l_U1654 = 8.00000000;
    l_U1656 = 1.20000000;
    l_U1662 = 0;
    l_U1663 = 85;
    l_U1664 = 8;
    l_U1675 = -1;
    l_U1683 = 9999999;
    l_U1684 = 9999999;
    l_U1685 = 9999999;
    l_U1686 = 9999999;
    l_U1687 = 9999999;
    l_U1688 = 9999999;
    l_U1689 = 99999999;
    l_U1690 = 9999999;
    l_U1695 = 1000;
    l_U1698 = -1;
    l_U1699 = -1;
    l_U1700 = -1;
    l_U1713 = 0;
    l_U1714 = 0;
    l_U1715 = 0;
    l_U1716 = 0;
    l_U1717 = 0;
    l_U1718 = 0;
    l_U1719 = 0;
    l_U1720 = 0;
    l_U1721 = 0;
    l_U1761 = {0.10300000, 0.04000000, -0.04800000};
    l_U1764 = {0.10300000, 0.03700000, 0.03500000};
    l_U1767 = {3.14000000, 0.00000000, 0.00000000};
    l_U1770 = {3.14000000, 3.14000000, 0.00000000};
    l_U1773 = {0.10900000, 0.04100000, -0.03700000};
    l_U1776 = {0.06800000, 0.04000000, 0.02500000};
    l_U1779 = {3.14000000, 0.00000000, 0.00000000};
    l_U1782 = {0.00000000, 0.00000000, 0.00000000};
    l_U1785 = {0.10300000, 0.04000000, -0.03000000};
    l_U1788 = {0.00000000, 0.00000000, 0.00000000};
    l_U1794 = {0.00000000, 0.12000000, 0.00000000};
    l_U1797 = {0.00000000, 0.00000000, 0.00000000};
    PRINTSTRING( "AmbNightClub - Maisonette 9 script started" );
    PRINTNL();
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Rocco1" )) > 0)
    {
        sub_715( 2, "START_CLUBSEC" );
        sub_1071();
    }
    if (sub_6653() > 2)
    {
        sub_715( 2, "START_CLUBSEC" );
        sub_1071();
    }
    l_U1758 = {l_U1800._fU4[0]};
    l_U1660 = sub_6855( l_U1758 );
    if (NOT (l_U1660 == 1))
    {
        sub_715( 2, "START_CLUBSEC" );
        sub_1071();
    }
    sub_7335();
    while (true)
    {
        sub_18114();
        if (IS_PLAYER_PLAYING( sub_985() ))
        {
            if ((NOT g_U12379) AND ((NOT g_U30153) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ClubSecurity" )) == 0)))
            {
                bVar2 = true;
                if (g_U30093[1])
                {
                    bVar2 = false;
                }
                if (NOT (IS_CHAR_IN_AREA_3D( sub_3822(), -474.97280000, 143.74440000, 8.86370000, -471.82280000, 150.54440000, 11.86370000, 0 )))
                {
                    bVar2 = false;
                }
                if (NOT (IS_CHAR_ON_FOOT( sub_3822() )))
                {
                    bVar2 = false;
                }
                if (IS_BIT_SET( g_U10938._fU0, 4 ))
                {
                    bVar2 = false;
                }
                if (NOT (g_U30198 == -1))
                {
                    if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30198]._fU12, sub_3822(), 0 )))
                        {
                            if (NOT (LOCATE_CHAR_ON_FOOT_3D( g_U29971[g_U30198]._fU12, g_U29971[g_U30198]._fU16._fU0, g_U29971[g_U30198]._fU16._fU4, g_U29971[g_U30198]._fU16._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
                            {
                                bVar2 = false;
                            }
                        }
                        else
                        {
                            bVar2 = false;
                        }
                    }
                    else
                    {
                        bVar2 = false;
                    }
                }
                else
                {
                    bVar2 = false;
                }
                GET_TIME_OF_DAY( ref iVar3, ref uVar4 );
                if ((iVar3 < 21) AND (iVar3 > 4))
                {
                    bVar2 = false;
                }
                if (NOT sub_84707())
                {
                    bVar2 = false;
                }
                if (NOT g_U15811[31])
                {
                    bVar2 = false;
                }
                if (IS_PLAYER_PLAYING( sub_985() ))
                {
                    if (IS_WANTED_LEVEL_GREATER( sub_985(), 0 ))
                    {
                        bVar2 = false;
                    }
                }
                if ((sub_38526( 2, 0 )) AND (bVar2))
                {
                    if (sub_39010( 2, "START_CLUBSEC", 0 ))
                    {
                        sub_85040();
                        SET_PLAYER_CONTROL( sub_985(), 0 );
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        REQUEST_SCRIPT( "ClubSecurity" );
                        while (NOT (HAS_SCRIPT_LOADED( "ClubSecurity" )))
                        {
                            WAIT( 0 );
                        }
                        sub_715( 2, "START_CLUBSEC" );
                        START_NEW_SCRIPT( "ClubSecurity", 1024 );
                    }
                }
                else
                {
                    sub_715( 2, "START_CLUBSEC" );
                }
                if (g_U15811[31])
                {
                    if (NOT bVar2)
                    {
                        if ((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_985() )) AND (IS_CHAR_IN_AREA_3D( sub_3822(), -474.97280000, 143.74440000, 8.86370000, -471.82280000, 150.54440000, 11.86370000, 0 )))
                        {
                            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                            {
                                PRINT_HELP_FOREVER( "CLOSED_CLUBSEC" );
                            }
                        }
                        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLOSED_CLUBSEC" ))
                        {
                            CLEAR_HELP();
                        }
                    }
                    else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLOSED_CLUBSEC" ))
                    {
                        CLEAR_HELP();
                    }
                }
                else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLOSED_CLUBSEC" ))
                {
                    CLEAR_HELP();
                }
            }
        }
        WAIT( 0 );
    }
    return;
}

void sub_715(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U10536 ))
        {
            if ((l_U5) AND (g_U10534 == iParam0))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_936();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_985(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_936()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_985()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1071()
{
    int I;

    if (l_U1660 == 1)
    {
        sub_1097( g_U30198 );
        sub_1097( g_U30199 );
        sub_1097( g_U30202 );
        g_U30198 = -1;
        g_U30199 = -1;
        g_U30202 = -1;
    }
    if (l_U1660 == 2)
    {
        sub_1097( g_U30201 );
        sub_1097( g_U30200 );
        sub_1097( g_U30203 );
        g_U30201 = -1;
        g_U30200 = -1;
        g_U30203 = -1;
    }
    if (l_U1660 == 1)
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLOSED_CLUBSEC" ))
        {
            CLEAR_HELP();
        }
    }
    if (l_U1595)
    {
        sub_2042();
    }
    for ( I = 0; I < l_U1385; I++ )
    {
        if (l_U1385[I]._fU0)
        {
            if (DOES_CHAR_EXIST( l_U1385[I]._fU24 ))
            {
                sub_2521( ref l_U1385[I], 0 );
            }
        }
    }
    for ( I = 0; I < l_U139; I++ )
    {
        if (l_U139[I]._fU0)
        {
            if (DOES_CHAR_EXIST( l_U139[I]._fU24 ))
            {
                sub_2521( ref l_U139[I], 0 );
            }
        }
    }
    for ( I = 0; I < l_U139; I++ )
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U139[I]._fU44 );
    }
    for ( I = 0; I < l_U1385; I++ )
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U1385[I]._fU44 );
    }
    if (DOES_OBJECT_EXIST( l_U1723 ))
    {
        DELETE_OBJECT( ref l_U1723 );
    }
    sub_5883();
    switch (l_U1660)
    {
        case 1:
        g_U30218 = 0;
        g_U30219 = 0;
        g_U30220 = 0;
        g_U30221 = 0;
        break;
        case 2:
        g_U30222 = 0;
        g_U30223 = 0;
        g_U30224 = 0;
        g_U30225 = 0;
        break;
    }
    if (g_U30110[l_U1660])
    {
        PRINTSTRING( "g_bWaitingForClubScriptToStreamIn - set to false in club cleanup" );
        PRINTNL();
        g_U30110[l_U1660] = 0;
    }
    if (l_U1606)
    {
        STOP_STREAM();
        l_U1606 = 0;
    }
    if (l_U1607)
    {
        STOP_STREAM();
        l_U1607 = 0;
    }
    if ((l_U1617) || (l_U1615))
    {
        if (IS_PLAYER_PLAYING( sub_985() ))
        {
            SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3822(), 3.00000000 );
        }
    }
    if (l_U1617)
    {
        if (IS_PLAYER_PLAYING( sub_985() ))
        {
            SET_ANIM_GROUP_FOR_CHAR( sub_3822(), "MOVE_PLAYER" );
        }
    }
    PRINTSTRING( "CLUB SCRIPT - " );
    switch (l_U1660)
    {
        case 0:
        PRINTSTRING( "BAHAMA MAMAS" );
        break;
        case 1:
        PRINTSTRING( "MAISONETTE 9" );
        break;
        case 2:
        PRINTSTRING( "HERCULES" );
        break;
    }
    PRINTNL();
    if (g_U30154[l_U1660])
    {
        g_U30154[l_U1660] = 0;
    }
    sub_6446();
    if (l_U1626)
    {
        STOP_STREAM();
        l_U1626 = 0;
    }
    if (l_U1627)
    {
        if (l_U1628)
        {
            MUTE_POSITIONED_RADIO( 0 );
            l_U1627 = 0;
        }
    }
    if (g_U30197 == l_U1660)
    {
        g_U30197 = -1;
    }
    if (l_U1630)
    {
        if (NOT (l_U1699 == -1))
        {
            MUTE_STATIC_EMITTER( l_U1699, 0 );
            l_U1630 = 0;
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1097(int iParam0)
{
    int iVar3;

    if (NOT (iParam0 == -1))
    {
        iVar3 = GET_ID_OF_THIS_THREAD();
        if (iVar3 == g_U30236[iParam0])
        {
            PRINTSTRING( "FREE_UP_GLOBAL_CLUBPED_SLOT() - called with slot number " );
            PRINTINT( iParam0 );
            PRINTNL();
            if (NOT (DOES_CHAR_EXIST( g_U29971[iParam0]._fU12 )))
            {
                PRINTSTRING( "FREE_UP_GLOBAL_CLUBPED_SLOT() - char does not exist " );
                PRINTINT( iParam0 );
                PRINTNL();
            }
            else if (IS_CHAR_INJURED( g_U29971[iParam0]._fU12 ))
            {
                PRINTSTRING( "FREE_UP_GLOBAL_CLUBPED_SLOT() - char is injured " );
                PRINTINT( iParam0 );
                PRINTNL();
            }
            g_U29971[iParam0]._fU0 = 0;
            g_U29971[iParam0]._fU4 = 0;
            g_U29971[iParam0]._fU12 = nil;
            g_U29971[iParam0]._fU16 = {0.00000000, 0.00000000, 0.00000000};
            g_U29971[iParam0]._fU28 = 0.00000000;
            g_U29971[iParam0]._fU32 = 0;
            g_U29971[iParam0]._fU36 = 0;
            g_U29971[iParam0]._fU40 = 0;
            g_U30236[iParam0] = nil;
            sub_1564( iParam0, 0 );
            sub_1699( g_U29971[iParam0]._fU8 );
            g_U29971[iParam0]._fU8 = 0;
            PRINTSTRING( "FREE_UP_GLOBAL_CLUBPED_SLOT() - slot number " );
            PRINTINT( iParam0 );
            PRINTNL();
        }
    }
    return;
}

void sub_1564(int iParam0, unknown uParam1)
{
    if (NOT (iParam0 == -1))
    {
        g_U30132[iParam0] = uParam1;
    }
    else
    {
        SCRIPT_ASSERT( "SET_GLOBAL_CLUBPED_SLOT_AS_SCRIPT_CONTROLLED - invalid slot number (-1)" );
    }
    return;
}

void sub_1699(unknown uParam0)
{
    PRINTSTRING( "RELOAD_GLOBAL_CLUBPED_ARRAY() - called with " );
    PRINTINT( uParam0 );
    PRINTNL();
    g_U30128[uParam0] = 1;
    return;
}

void sub_2042()
{
    PRINTSTRING( "RESTORE_DENSITIES() - called by " );
    switch (l_U1660)
    {
        case 0:
        PRINTSTRING( "BAHAMA MAMAS" );
        break;
        case 1:
        PRINTSTRING( "MAISONETTE 9" );
        break;
        case 2:
        PRINTSTRING( "HERCULES" );
        break;
    }
    PRINTNL();
    SWITCH_GARBAGE_TRUCKS( 1 );
    g_U43642 = 0;
    g_U10935 = 0;
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_REDUCE_VEHICLE_MODEL_BUDGET( 0 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SWITCH_RANDOM_TRAINS( 1 );
    SET_SCENARIO_PED_DENSITY_MULTIPLIER( 1.00000000, 1.00000000 );
    if (IS_PLAYER_PLAYING( sub_985() ))
    {
        SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( sub_985(), 1 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_985(), 0 );
    }
    l_U1595 = 0;
    if (NOT l_U1597)
    {
        g_U30102 = 0;
        g_U30103 = 1;
    }
    else
    {
        g_U30102 = 0;
        g_U30103 = 0;
    }
    PRINTSTRING( "SET_INTERIOR_DENSITIES - RESTORE_DENSITIES() called" );
    PRINTNL();
    return;
}

void sub_2521(int iParam0, boolean bParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (iParam0->_fU24 == g_U30208))
    {
        if (NOT (sub_2552( iParam0->_fU24 )))
        {
            l_U1667++;
            l_U1662--;
            g_U30188--;
            if (iParam0->_fU4 == 14)
            {
                if (DOES_CHAR_EXIST( iParam0->_fU24 ))
                {
                    if (IS_CHAR_INJURED( iParam0->_fU24 ))
                    {
                        l_U1636 = 1;
                    }
                }
                if (NOT (DOES_OBJECT_EXIST( l_U1723 )))
                {
                    sub_2922();
                }
            }
            if (((IS_CHAR_INJURED( iParam0->_fU24 )) AND (DOES_CHAR_EXIST( iParam0->_fU24 ))) || (iParam0->_fU12 == 99))
            {
                iParam0->_fU20 = 35536;
                iParam0->_fU16 = -1;
            }
            if (DOES_OBJECT_EXIST( iParam0->_fU44 ))
            {
                if (iParam0->_fU52 == 11)
                {
                    DELETE_OBJECT( iParam0 + 44 );
                }
                else
                {
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( iParam0 + 44 );
                }
            }
            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
            {
                if (HAS_CUTSCENE_FINISHED())
                {
                    SET_CHAR_IN_CUTSCENE( iParam0->_fU24, 0 );
                }
                SET_CHAR_COLLISION( iParam0->_fU24, 1 );
                if (sub_3221( iParam0->_fU56 ))
                {
                    FREEZE_CHAR_POSITION( iParam0->_fU24, 0 );
                }
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU24, 0 );
            }
            else if ((iParam0->_fU4 == 13) || ((iParam0->_fU4 == 12) || ((iParam0->_fU4 == 10) || ((iParam0->_fU4 == 7) || ((iParam0->_fU4 == 6) || ((iParam0->_fU4 == 4) || ((iParam0->_fU4 == 2) || (iParam0->_fU4 == 1))))))))
            {
                if (l_U1660 == 0)
                {
                    g_U30189++;
                }
            }
            if (l_U1597)
            {
                if ((iParam0->_fU4 == 13) || ((iParam0->_fU4 == 12) || ((iParam0->_fU4 == 10) || ((iParam0->_fU4 == 7) || ((iParam0->_fU4 == 6) || ((iParam0->_fU4 == 4) || ((iParam0->_fU4 == 2) || (iParam0->_fU4 == 1))))))))
                {
                    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                    {
                        CLEAR_CHAR_TASKS( iParam0->_fU24 );
                        if (NOT (IS_CHAR_INJURED( sub_3822() )))
                        {
                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "GUN_RUN", 1, 1, 2 );
                            TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3822(), 200.00000000, -1 );
                            SET_CHAR_KEEP_TASK( iParam0->_fU24, 1 );
                            l_U1665++;
                        }
                    }
                }
            }
            if (iParam0->_fU24 == g_U30212)
            {
                g_U30212 = nil;
            }
            if (iParam0->_fU24 == g_U30211)
            {
                g_U30211 = nil;
            }
            if (iParam0->_fU24 == g_U30213)
            {
                g_U30211 = nil;
            }
            if (NOT bParam1)
            {
                sub_4031( iParam0->_fU24 );
            }
            else if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
            {
                if (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))
                {
                    if (NOT (sub_4107( sub_3822(), l_U1660, 0 )))
                    {
                        if (sub_4107( iParam0->_fU24, l_U1660, 0 ))
                        {
                            DELETE_CHAR( iParam0 + 24 );
                        }
                        else
                        {
                            sub_4031( iParam0->_fU24 );
                        }
                    }
                    else
                    {
                        DELETE_CHAR( iParam0 + 24 );
                    }
                }
                else
                {
                    DELETE_CHAR( iParam0 + 24 );
                }
            }
            else
            {
                sub_4031( iParam0->_fU24 );
            }
            iParam0->_fU24 = nil;
            iParam0->_fU12 = 0;
            iParam0->_fU8 = 0;
            if ((g_U30114[l_U1660]) || (l_U1624))
            {
                iParam0->_fU20 = 0;
            }
            if (l_U1599)
            {
                if (l_U1608)
                {
                    PRINTSTRING( "GLOBAL CLUB PED REMOVED - " );
                }
                else
                {
                    PRINTSTRING( "CLUB PED REMOVED - " );
                }
                switch (iParam0->_fU4)
                {
                    case 1:
                    PRINTSTRING( "INTERIOR_CROWD" );
                    break;
                    case 2:
                    PRINTSTRING( "EXTERIOR_CROWD" );
                    break;
                    case 13:
                    PRINTSTRING( "REFUSED_ENTRY" );
                    break;
                    case 4:
                    PRINTSTRING( "INTERIOR_PATROL" );
                    break;
                    case 5:
                    PRINTSTRING( "INTERIOR_STAFF" );
                    break;
                    case 14:
                    PRINTSTRING( "JONI" );
                    break;
                    case 6:
                    PRINTSTRING( "BOTH_PATROL" );
                    break;
                    case 7:
                    PRINTSTRING( "STAIRWELL_PED" );
                    break;
                    case 8:
                    PRINTSTRING( "INTERIOR_BOUNCER" );
                    break;
                    case 9:
                    PRINTSTRING( "EXTERIOR_BOUNCER" );
                    break;
                    case 10:
                    PRINTSTRING( "INTERIOR_DANCER" );
                    break;
                    case 12:
                    PRINTSTRING( "SPECIFIC_DANCER" );
                    break;
                }
                PRINTSTRING( ", iClubPedBeingProcessed = " );
                PRINTINT( l_U1673 );
                PRINTSTRING( ", iTotalPeds = " );
                PRINTINT( l_U1662 );
                PRINTNL();
            }
        }
        else if (iParam0->_fU4 == 14)
        {
            if (DOES_OBJECT_EXIST( l_U1723 ))
            {
                DELETE_OBJECT( ref l_U1723 );
            }
        }
    }
    return;
}

int sub_2552(unknown uParam0)
{
    unknown uVar3;

    if (sub_2563( uParam0 ))
    {
        uVar3 = sub_2634( uParam0 );
        return g_U30132[uVar3];
    }
    return 0;
}

int sub_2563(int iParam0)
{
    int I;

    for ( I = 0; I < 11; I++ )
    {
        if (g_U29971[I]._fU12 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2634(int iParam0)
{
    int Result;

    if (sub_2563( iParam0 ))
    {
        for ( Result = 0; Result < 11; Result++ )
        {
            if (g_U29971[Result]._fU12 == iParam0)
            {
                return Result;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "GET_CLUBPED_GLOBAL_SLOT_NUMBER - ped is not a global clubped!" );
    }
    return -1;
}

void sub_2922()
{
    CREATE_OBJECT( 159317168, -473.08840000, 145.66880000, 8.85860000, ref l_U1723, 1 );
    SET_OBJECT_HEADING( l_U1723, 294.49840000 - 180 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1723, "E2_MaisonsecurRoom" );
    FREEZE_OBJECT_POSITION( l_U1723, 1 );
    return;
}

int sub_3221(unknown uParam0)
{
    switch (uParam0)
    {
        case 2:
        return 1;
        break;
        default:
    }
    switch (l_U1660)
    {
        case 2:
        switch (uParam0)
        {
            case 71:
            case 72:
            case 81:
            case 82:
            case 41:
            case 42:
            return 1;
            break;
        }
        break;
        case 1:
        switch (uParam0)
        {
            case 34:
            case 35:
            case 43:
            case 44:
            case 45:
            case 46:
            case 52:
            case 53:
            case 56:
            return 1;
            break;
        }
        break;
        case 0:
        switch (uParam0)
        {
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            return 1;
            break;
        }
        break;
    }
    return 0;
}

void sub_3822()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4031(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_4107(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_4135( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_4135(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_3822(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_5883()
{
    g_U30093[l_U1660] = 0;
    g_U30145[l_U1660] = 0;
    return;
}

void sub_6446()
{
    if (NOT (HAS_SOUND_FINISHED( l_U1698 )))
    {
        STOP_SOUND( l_U1698 );
    }
    RELEASE_SOUND_ID( l_U1698 );
    l_U1698 = -1;
    l_U1693 = 0;
    return;
}

void sub_6653()
{
    int Result;

    Result = 0;
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubM92" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM2" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM_min" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubHC2" );
    return Result;
}

int sub_6855(vector vParam0)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    uVar5 = {(vector( -393.78000000, 425.76000000, 5.10000000)) - vParam0};
    if ((VMAG( uVar5 )) < 20.00000000)
    {
        PRINTSTRING( "GET_NEAREST_NIGHTCLUB_FROM_COORDS = CLUB_BAHAMA_MAMAS" );
        PRINTNL();
        return 0;
    }
    uVar5 = {(vector( -483.90180000, 149.43310000, 7.56070000)) - vParam0};
    if ((VMAG( uVar5 )) < 20.00000000)
    {
        PRINTSTRING( "GET_NEAREST_NIGHTCLUB_FROM_COORDS = CLUB_MAISONETTE_9" );
        PRINTNL();
        return 1;
    }
    uVar5 = {(vector( -431.82560000, 351.76230000, 11.71660000)) - vParam0};
    if ((VMAG( uVar5 )) < 20.00000000)
    {
        PRINTSTRING( "GET_NEAREST_NIGHTCLUB_FROM_COORDS = CLUB_HERCULES" );
        PRINTNL();
        return 2;
    }
    PRINTSTRING( "GET_NEAREST_NIGHTCLUB_FROM_COORDS = not recognised" );
    PRINTNL();
    return -1;
}

void sub_7335()
{
    unknown uVar2;

    l_U1476[18]._fU0 = "BATH_ATT_ACTION";
    l_U1476[19]._fU0 = "BATH_ATT_IDLE";
    l_U1476[20]._fU0 = "GIRL_COKE";
    l_U1476[21]._fU0 = "GIRL_MAKEUP";
    l_U1476[22]._fU0 = "GUY_COKE";
    l_U1476[23]._fU0 = "WASH_HANDS";
    l_U1476[24]._fU0 = "CHAT_CHATA";
    l_U1476[25]._fU0 = "F_DANCE_A";
    l_U1476[26]._fU0 = "F_DANCE_B";
    l_U1476[27]._fU0 = "F_FLIRTY_DANCE_A";
    l_U1476[28]._fU0 = "F_FLIRTY_DANCE_B";
    l_U1476[29]._fU0 = "F_FLIRTY_DANCE_C";
    l_U1476[30]._fU0 = "F_FRIENDS_DANCE_A";
    l_U1476[31]._fU0 = "F_FRIENDS_DANCE_B";
    l_U1476[32]._fU0 = "F_STAND_A";
    l_U1476[33]._fU0 = "F_STAND_C";
    l_U1476[34]._fU0 = "FEMALE_COUCH_RIGHT";
    l_U1476[35]._fU0 = "FEMALE_SITTING_FLIRT";
    l_U1476[36]._fU0 = "M_BAR_LEAN_A";
    l_U1476[37]._fU0 = "M_BAR_LEAN_B";
    l_U1476[38]._fU0 = "M_FLIRTY_DANCE_A";
    l_U1476[39]._fU0 = "M_FLIRTY_DANCE_B";
    l_U1476[40]._fU0 = "M_FLIRTY_DANCE_C";
    l_U1476[41]._fU0 = "M_FRIENDS_DANCE_A";
    l_U1476[42]._fU0 = "M_FRIENDS_DANCE_B";
    l_U1476[43]._fU0 = "MALE_COUCH_LEFT";
    l_U1476[44]._fU0 = "MALE_COUCH_RIGHT";
    l_U1476[45]._fU0 = "MALE_SITTING_FLIRT";
    l_U1476[46]._fU0 = "MALE_SITTING_FRIENDS";
    l_U1476[47]._fU0 = "FEMALE_FIX_HAIR";
    l_U1476[48]._fU0 = "MALE_DANCE_LOOP_A";
    l_U1476[49]._fU0 = "MALE_DANCE_LOOP_B";
    l_U1476[50]._fU0 = "FEMALE_DANCE_LOOP_A";
    l_U1476[51]._fU0 = "FEMALE_DANCE_LOOP_B";
    l_U1476[52]._fU0 = "MALE_CHAIR_CHAT";
    l_U1476[53]._fU0 = "FEMALE_CHAIR_CHAT";
    l_U1476[54]._fU0 = "F_STAND_B";
    l_U1476[55]._fU0 = "F_STAND_D";
    l_U1476[56]._fU0 = "FEMALE_SITTING_FRIENDS";
    GET_WEAPONTYPE_MODEL( 12, ref l_U1710[0] );
    GET_WEAPONTYPE_MODEL( 7, ref l_U1710[1] );
    l_U1713 = 1756785265;
    l_U1719 = -1696530209;
    l_U1720 = 1429700748;
    l_U1721 = -1446884113;
    if (g_U30218 == 0)
    {
        g_U30218 = 698554670;
    }
    if (g_U30219 == 0)
    {
        g_U30219 = -747359056;
    }
    if (g_U30220 == 0)
    {
        g_U30220 = 930552533;
    }
    if (g_U30221 == 0)
    {
        g_U30221 = -297585214;
    }
    if (g_U30144)
    {
        if (NOT g_U12379)
        {
            g_U30144 = 0;
        }
    }
    if (NOT g_U30144)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref uVar2 );
        switch (uVar2)
        {
            case 0:
            l_U1714 = 698554670;
            l_U1715 = -747359056;
            break;
            case 1:
            l_U1714 = 698554670;
            l_U1715 = -11396610;
            break;
            case 2:
            l_U1714 = 698554670;
            l_U1715 = 627205662;
            break;
            case 3:
            l_U1714 = -747359056;
            l_U1715 = -11396610;
            break;
            case 4:
            l_U1714 = -747359056;
            l_U1715 = 627205662;
            break;
            case 5:
            l_U1714 = -11396610;
            l_U1715 = 627205662;
            break;
        }
        GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref uVar2 );
        switch (uVar2)
        {
            case 0:
            l_U1717 = 930552533;
            l_U1718 = -297585214;
            break;
            case 1:
            l_U1717 = 930552533;
            l_U1718 = -1814822707;
            break;
            case 2:
            l_U1717 = 930552533;
            l_U1718 = 314506937;
            break;
            case 3:
            l_U1717 = 930552533;
            l_U1718 = 763838720;
            break;
            case 4:
            l_U1717 = -297585214;
            l_U1718 = -1814822707;
            break;
            case 5:
            l_U1717 = -297585214;
            l_U1718 = 314506937;
            break;
            case 6:
            l_U1717 = -297585214;
            l_U1718 = 763838720;
            break;
            case 7:
            l_U1717 = -1814822707;
            l_U1718 = 314506937;
            break;
            case 8:
            l_U1717 = -1814822707;
            l_U1718 = 763838720;
            break;
            case 9:
            l_U1717 = 314506937;
            l_U1718 = 763838720;
            break;
        }
        g_U30218 = l_U1714;
        g_U30219 = l_U1715;
        g_U30220 = l_U1717;
        g_U30221 = l_U1718;
    }
    else
    {
        l_U1714 = g_U30218;
        l_U1715 = g_U30219;
        l_U1717 = g_U30220;
        l_U1718 = g_U30221;
    }
    l_U126._fU4 = {-486.43200000, 147.58100000, 6.57500000};
    l_U126._fU16 = {-484.23200000, 149.51800000, 9.75830000};
    l_U126._fU28 = {-488.40980000, 144.19000000, 6.00000000};
    l_U126._fU40 = {-481.52000000, 151.05000000, 9.75830000};
    l_U126._fU0 = 1;
    l_U139[0]._fU0 = 1;
    l_U139[0]._fU52 = 1;
    l_U139[0]._fU4 = 4;
    l_U139[0]._fU56 = 0;
    l_U139[0]._fU28 = {-485.91050000, 163.64570000, 10.62040000};
    l_U139[0]._fU40 = 150.85630000;
    l_U139[1]._fU0 = 1;
    l_U139[1]._fU52 = 1;
    l_U139[1]._fU4 = 4;
    l_U139[1]._fU56 = 0;
    l_U139[1]._fU28 = {-478.88060000, 165.22260000, 10.61800000};
    l_U139[1]._fU40 = 169.86630000;
    l_U139[2]._fU0 = 1;
    l_U139[2]._fU52 = 2;
    l_U139[2]._fU4 = 6;
    l_U139[2]._fU56 = 0;
    l_U139[2]._fU28 = {-482.34050000, 155.74920000, 6.54870000};
    l_U139[2]._fU40 = 183.62450000;
    l_U139[3]._fU0 = 1;
    l_U139[3]._fU52 = 1;
    l_U139[3]._fU4 = 4;
    l_U139[3]._fU56 = 0;
    l_U139[3]._fU28 = {-482.38570000, 142.37820000, 6.55090000};
    l_U139[3]._fU40 = 270.46590000;
    l_U139[4]._fU0 = 1;
    l_U139[4]._fU52 = 1;
    l_U139[4]._fU4 = 4;
    l_U139[4]._fU56 = 0;
    l_U139[4]._fU28 = {-485.59780000, 164.43890000, 10.61830000};
    l_U139[4]._fU40 = 214.27770000;
    l_U139[5]._fU0 = 1;
    l_U139[5]._fU52 = 1;
    l_U139[5]._fU4 = 10;
    l_U139[5]._fU56 = 26;
    l_U139[5]._fU28 = {-487.33430000, 148.35250000, 6.75330000};
    l_U139[5]._fU40 = 333.72000000;
    l_U139[6]._fU0 = 1;
    l_U139[6]._fU52 = 2;
    l_U139[6]._fU4 = 10;
    l_U139[6]._fU56 = 48;
    l_U139[6]._fU28 = {-486.69900000, 149.38840000, 6.75330000};
    l_U139[6]._fU40 = 138.24000000;
    l_U139[7]._fU0 = 1;
    l_U139[7]._fU52 = 1;
    l_U139[7]._fU4 = 12;
    l_U139[7]._fU56 = 0;
    l_U139[7]._fU28 = {-486.03750000, 148.25520000, 6.75330000};
    l_U139[7]._fU40 = 338.04000000;
    l_U139[8]._fU0 = 1;
    l_U139[8]._fU52 = 2;
    l_U139[8]._fU4 = 1;
    l_U139[8]._fU56 = 45;
    l_U139[8]._fU28 = {-486.57500000, 151.32400000, 6.60900000};
    l_U139[8]._fU40 = 0.00000000;
    l_U139[9]._fU0 = 1;
    l_U139[9]._fU52 = 1;
    l_U139[9]._fU4 = 1;
    l_U139[9]._fU56 = 24;
    l_U139[9]._fU28 = {-486.25800000, 153.16700000, 6.64900000};
    l_U139[9]._fU40 = 133.92000000;
    l_U139[10]._fU0 = 1;
    l_U139[10]._fU52 = 1;
    l_U139[10]._fU4 = 1;
    l_U139[10]._fU56 = 35;
    l_U139[10]._fU28 = {-487.37500000, 151.38400000, 6.61900000};
    l_U139[10]._fU40 = 331.56000000;
    l_U139[11]._fU0 = 1;
    l_U139[11]._fU52 = 2;
    l_U139[11]._fU4 = 1;
    l_U139[11]._fU56 = 46;
    l_U139[11]._fU28 = {-487.93500000, 153.99400000, 6.54900000};
    l_U139[11]._fU40 = 239.25000000;
    l_U139[12]._fU0 = 1;
    l_U139[12]._fU52 = 2;
    l_U139[12]._fU4 = 1;
    l_U139[12]._fU56 = 36;
    l_U139[12]._fU28 = {-487.27500000, 153.11900000, 6.54900000};
    l_U139[12]._fU40 = 276.48000000;
    l_U139[13]._fU0 = 1;
    l_U139[13]._fU52 = 1;
    l_U139[13]._fU4 = 1;
    l_U139[13]._fU56 = 53;
    l_U139[13]._fU28 = {-477.86200000, 152.11800000, 7.00200000};
    l_U139[13]._fU40 = 171.00000000;
    l_U139[14]._fU0 = 1;
    l_U139[14]._fU52 = 1;
    l_U139[14]._fU4 = 1;
    l_U139[14]._fU56 = 56;
    l_U139[14]._fU28 = {-477.57700000, 151.48100000, 7.01200000};
    l_U139[14]._fU40 = 99.72000000;
    l_U139[15]._fU0 = 1;
    l_U139[15]._fU52 = 2;
    l_U139[15]._fU4 = 1;
    l_U139[15]._fU56 = 46;
    l_U139[15]._fU28 = {-478.78900000, 150.47800000, 6.95200000};
    l_U139[15]._fU40 = 326.16000000;
    l_U139[16]._fU0 = 1;
    l_U139[16]._fU52 = 1;
    l_U139[16]._fU4 = 1;
    l_U139[16]._fU56 = 56;
    l_U139[16]._fU28 = {-478.06900000, 149.04800000, 6.98300000};
    l_U139[16]._fU40 = 122.04000000;
    l_U139[17]._fU0 = 1;
    l_U139[17]._fU52 = 2;
    l_U139[17]._fU4 = 1;
    l_U139[17]._fU56 = 45;
    l_U139[17]._fU28 = {-477.91700000, 147.74800000, 6.96300000};
    l_U139[17]._fU40 = 101.52000000;
    l_U139[18]._fU0 = 1;
    l_U139[18]._fU52 = 1;
    l_U139[18]._fU4 = 1;
    l_U139[18]._fU56 = 35;
    l_U139[18]._fU28 = {-477.95700000, 146.96800000, 7.03300000};
    l_U139[18]._fU40 = 75.24000000;
    l_U139[19]._fU0 = 1;
    l_U139[19]._fU52 = 2;
    l_U139[19]._fU4 = 1;
    l_U139[19]._fU56 = 46;
    l_U139[19]._fU28 = {-486.99100000, 145.07500000, 6.65000000};
    l_U139[19]._fU40 = 0.25000000;
    l_U139[20]._fU0 = 1;
    l_U139[20]._fU52 = 1;
    l_U139[20]._fU4 = 1;
    l_U139[20]._fU56 = 53;
    l_U139[20]._fU28 = {-486.14800000, 145.14500000, 6.55000000};
    l_U139[20]._fU40 = 11.25000000;
    l_U139[21]._fU0 = 1;
    l_U139[21]._fU52 = 1;
    l_U139[21]._fU4 = 1;
    l_U139[21]._fU56 = 31;
    l_U139[21]._fU28 = {-483.80600000, 146.52700000, 6.64000000};
    l_U139[21]._fU40 = 207.36000000;
    l_U139[22]._fU0 = 1;
    l_U139[22]._fU52 = 2;
    l_U139[22]._fU4 = 1;
    l_U139[22]._fU56 = 42;
    l_U139[22]._fU28 = {-483.36100000, 145.79700000, 6.54100000};
    l_U139[22]._fU40 = 48.96000000;
    l_U139[23]._fU0 = 1;
    l_U139[23]._fU52 = 2;
    l_U139[23]._fU4 = 1;
    l_U139[23]._fU56 = 46;
    l_U139[23]._fU28 = {-487.31900000, 143.52900000, 6.60100000};
    l_U139[23]._fU40 = 187.20000000;
    l_U139[24]._fU0 = 1;
    l_U139[24]._fU52 = 1;
    l_U139[24]._fU4 = 1;
    l_U139[24]._fU56 = 35;
    l_U139[24]._fU28 = {-487.41100000, 140.02200000, 6.68100000};
    l_U139[24]._fU40 = 319.32000000;
    l_U139[25]._fU0 = 1;
    l_U139[25]._fU52 = 2;
    l_U139[25]._fU4 = 1;
    l_U139[25]._fU56 = 45;
    l_U139[25]._fU28 = {-486.65900000, 139.98900000, 6.55100000};
    l_U139[25]._fU40 = 40.68000000;
    l_U139[26]._fU0 = 1;
    l_U139[26]._fU52 = 1;
    l_U139[26]._fU4 = 1;
    l_U139[26]._fU56 = 53;
    l_U139[26]._fU28 = {-479.15300000, 145.37900000, 6.93400000};
    l_U139[26]._fU40 = 194.76700000;
    l_U139[27]._fU0 = 1;
    l_U139[27]._fU52 = 2;
    l_U139[27]._fU4 = 1;
    l_U139[27]._fU56 = 44;
    l_U139[27]._fU28 = {-477.56800000, 143.64900000, 6.93400000};
    l_U139[27]._fU40 = 83.52000000;
    l_U139[28]._fU0 = 1;
    l_U139[28]._fU52 = 1;
    l_U139[28]._fU4 = 1;
    l_U139[28]._fU56 = 34;
    l_U139[28]._fU28 = {-477.52000000, 144.13900000, 7.05400000};
    l_U139[28]._fU40 = 56.88000000;
    l_U139[29]._fU0 = 1;
    l_U139[29]._fU52 = 1;
    l_U139[29]._fU4 = 1;
    l_U139[29]._fU56 = 56;
    l_U139[29]._fU28 = {-481.72400000, 139.56800000, 6.64100000};
    l_U139[29]._fU40 = 8.30000000;
    l_U139[30]._fU0 = 1;
    l_U139[30]._fU52 = 2;
    l_U139[30]._fU4 = 1;
    l_U139[30]._fU56 = 7;
    l_U139[30]._fU28 = {-487.30400000, 141.95000000, 6.55100000};
    l_U139[30]._fU40 = 262.08000000;
    l_U139[31]._fU0 = 1;
    l_U139[31]._fU52 = 1;
    l_U139[31]._fU4 = 1;
    l_U139[31]._fU56 = 35;
    l_U139[31]._fU28 = {-483.71900000, 139.94000000, 6.65100000};
    l_U139[31]._fU40 = 311.04000000;
    l_U139[32]._fU0 = 1;
    l_U139[32]._fU52 = 1;
    l_U139[32]._fU4 = 1;
    l_U139[32]._fU56 = 56;
    l_U139[32]._fU28 = {-484.30100000, 141.19000000, 6.55100000};
    l_U139[32]._fU40 = 258.48000000;
    l_U139[33]._fU0 = 1;
    l_U139[33]._fU52 = 2;
    l_U139[33]._fU4 = 1;
    l_U139[33]._fU56 = 45;
    l_U139[33]._fU28 = {-482.76400000, 139.77500000, 6.58100000};
    l_U139[33]._fU40 = 30.60000000;
    l_U139[34]._fU0 = 1;
    l_U139[34]._fU52 = 1;
    l_U139[34]._fU4 = 1;
    l_U139[34]._fU56 = 56;
    l_U139[34]._fU28 = {-482.10000000, 159.71100000, 10.67000000};
    l_U139[34]._fU40 = 28.44000000;
    l_U139[35]._fU0 = 1;
    l_U139[35]._fU52 = 1;
    l_U139[35]._fU4 = 1;
    l_U139[35]._fU56 = 53;
    l_U139[35]._fU28 = {-482.92500000, 159.63100000, 10.62000000};
    l_U139[35]._fU40 = 351.00000000;
    l_U139[36]._fU0 = 1;
    l_U139[36]._fU52 = 2;
    l_U139[36]._fU4 = 1;
    l_U139[36]._fU56 = 46;
    l_U139[36]._fU28 = {-482.26800000, 162.20900000, 10.66000000};
    l_U139[36]._fU40 = 158.76000000;
    l_U139[37]._fU0 = 1;
    l_U139[37]._fU52 = 1;
    l_U139[37]._fU4 = 1;
    l_U139[37]._fU56 = 35;
    l_U139[37]._fU28 = {-487.17000000, 162.43400000, 10.69000000};
    l_U139[37]._fU40 = 169.92000000;
    l_U139[38]._fU0 = 1;
    l_U139[38]._fU52 = 2;
    l_U139[38]._fU4 = 1;
    l_U139[38]._fU56 = 45;
    l_U139[38]._fU28 = {-487.98000000, 162.29400000, 10.62000000};
    l_U139[38]._fU40 = 201.60000000;
    l_U139[39]._fU0 = 1;
    l_U139[39]._fU52 = 1;
    l_U139[39]._fU4 = 1;
    l_U139[39]._fU56 = 35;
    l_U139[39]._fU28 = {-487.86800000, 159.91900000, 10.72000000};
    l_U139[39]._fU40 = 326.16000000;
    l_U139[40]._fU0 = 1;
    l_U139[40]._fU52 = 1;
    l_U139[40]._fU4 = 1;
    l_U139[40]._fU56 = 56;
    l_U139[40]._fU28 = {-486.96800000, 159.88100000, 10.62000000};
    l_U139[40]._fU40 = 14.40000000;
    l_U139[41]._fU0 = 1;
    l_U139[41]._fU52 = 2;
    l_U139[41]._fU4 = 1;
    l_U139[41]._fU56 = 38;
    l_U139[41]._fU28 = {-481.51390000, 153.80870000, 6.55020000};
    l_U139[41]._fU40 = 304.92000000;
    l_U139[42]._fU0 = 1;
    l_U139[42]._fU52 = 1;
    l_U139[42]._fU4 = 1;
    l_U139[42]._fU56 = 27;
    l_U139[42]._fU28 = {-480.84020000, 154.29130000, 6.55070000};
    l_U139[42]._fU40 = 124.20000000;
    l_U139[43]._fU0 = 1;
    l_U139[43]._fU52 = 2;
    l_U139[43]._fU4 = 1;
    l_U139[43]._fU56 = 39;
    l_U139[43]._fU28 = {-484.24350000, 154.94280000, 6.55070000};
    l_U139[43]._fU40 = 203.40000000;
    l_U139[44]._fU0 = 1;
    l_U139[44]._fU52 = 1;
    l_U139[44]._fU4 = 1;
    l_U139[44]._fU56 = 28;
    l_U139[44]._fU28 = {-484.07980000, 154.20210000, 6.54940000};
    l_U139[44]._fU40 = 6.12000000;
    l_U139[45]._fU0 = 1;
    l_U139[45]._fU52 = 2;
    l_U139[45]._fU4 = 1;
    l_U139[45]._fU56 = 48;
    l_U139[45]._fU28 = {-485.68350000, 146.71080000, 6.55060000};
    l_U139[45]._fU40 = 316.24820000;
    l_U139[46]._fU0 = 1;
    l_U139[46]._fU52 = 1;
    l_U139[46]._fU4 = 1;
    l_U139[46]._fU56 = 50;
    l_U139[46]._fU28 = {-485.01690000, 147.63630000, 6.55050000};
    l_U139[46]._fU40 = 175.32000000;
    l_U139[47]._fU0 = 1;
    l_U139[47]._fU52 = 1;
    l_U139[47]._fU4 = 1;
    l_U139[47]._fU56 = 32;
    l_U139[47]._fU28 = {-479.62800000, 151.19180000, 6.93250000};
    l_U139[47]._fU40 = 290.78050000;
    l_U139[48]._fU0 = 1;
    l_U139[48]._fU52 = 2;
    l_U139[48]._fU4 = 1;
    l_U139[48]._fU56 = 39;
    l_U139[48]._fU28 = {-480.03570000, 148.87640000, 6.93280000};
    l_U139[48]._fU40 = 262.44000000;
    l_U139[49]._fU0 = 1;
    l_U139[49]._fU52 = 1;
    l_U139[49]._fU4 = 1;
    l_U139[49]._fU56 = 33;
    l_U139[49]._fU28 = {-485.85030000, 141.61480000, 6.55130000};
    l_U139[49]._fU40 = 147.96000000;
    l_U139[50]._fU0 = 1;
    l_U139[50]._fU52 = 1;
    l_U139[50]._fU4 = 1;
    l_U139[50]._fU56 = 55;
    l_U139[50]._fU28 = {-486.21290000, 142.46660000, 6.55110000};
    l_U139[50]._fU40 = 225.72000000;
    l_U139[51]._fU0 = 1;
    l_U139[51]._fU52 = 2;
    l_U139[51]._fU4 = 1;
    l_U139[51]._fU56 = 40;
    l_U139[51]._fU28 = {-479.65530000, 140.99500000, 6.55120000};
    l_U139[51]._fU40 = 130.32000000;
    l_U139[52]._fU0 = 1;
    l_U139[52]._fU52 = 1;
    l_U139[52]._fU4 = 1;
    l_U139[52]._fU56 = 29;
    l_U139[52]._fU28 = {-479.93160000, 140.41320000, 6.55160000};
    l_U139[52]._fU40 = 317.16000000;
    l_U139[53]._fU0 = 1;
    l_U139[53]._fU52 = 1;
    l_U139[53]._fU4 = 1;
    l_U139[53]._fU56 = 30;
    l_U139[53]._fU28 = {-483.80500000, 151.17800000, 6.55070000};
    l_U139[53]._fU40 = 341.64000000;
    l_U139[54]._fU0 = 1;
    l_U139[54]._fU52 = 2;
    l_U139[54]._fU4 = 1;
    l_U139[54]._fU56 = 41;
    l_U139[54]._fU28 = {-483.88790000, 152.08470000, 6.55070000};
    l_U139[54]._fU40 = 178.97220000;
    l_U139[55]._fU0 = 1;
    l_U139[55]._fU52 = 1;
    l_U139[55]._fU4 = 7;
    l_U139[55]._fU56 = 13;
    l_U139[55]._fU28 = {-470.16920000, 144.11960000, 8.85890000};
    l_U139[55]._fU40 = 189.00000000;
    l_U139[56]._fU0 = 1;
    l_U139[56]._fU52 = 2;
    l_U139[56]._fU4 = 7;
    l_U139[56]._fU56 = 7;
    l_U139[56]._fU28 = {-470.29570000, 143.31960000, 8.85890000};
    l_U139[56]._fU40 = 6.00850000;
    l_U139[57]._fU0 = 1;
    l_U139[57]._fU52 = 1;
    l_U139[57]._fU4 = 1;
    l_U139[57]._fU56 = 27;
    l_U139[57]._fU28 = {-485.34900000, 157.00890000, 6.55070000};
    l_U139[57]._fU40 = 252.36000000;
    l_U139[58]._fU0 = 1;
    l_U139[58]._fU52 = 2;
    l_U139[58]._fU4 = 1;
    l_U139[58]._fU56 = 38;
    l_U139[58]._fU28 = {-484.46150000, 156.68290000, 6.55050000};
    l_U139[58]._fU40 = 48.96000000;
    l_U139[59]._fU0 = 1;
    l_U139[59]._fU52 = 2;
    l_U139[59]._fU4 = 2;
    l_U139[59]._fU56 = 15;
    l_U139[59]._fU28 = {-467.16280000, 148.08510000, 8.86880000};
    l_U139[59]._fU40 = 263.24770000;
    l_U139[60]._fU0 = 1;
    l_U139[60]._fU52 = 1;
    l_U139[60]._fU4 = 2;
    l_U139[60]._fU56 = 15;
    l_U139[60]._fU28 = {-466.49080000, 146.39110000, 8.85860000};
    l_U139[60]._fU40 = 45.08360000;
    l_U139[61]._fU0 = 1;
    l_U139[61]._fU52 = 2;
    l_U139[61]._fU4 = 2;
    l_U139[61]._fU56 = 15;
    l_U139[61]._fU28 = {-465.77870000, 147.38190000, 8.85860000};
    l_U139[61]._fU40 = 81.12420000;
    l_U139[62]._fU0 = 1;
    l_U139[62]._fU52 = 1;
    l_U139[62]._fU4 = 2;
    l_U139[62]._fU56 = 15;
    l_U139[62]._fU28 = {-467.64680000, 150.00730000, 8.85860000};
    l_U139[62]._fU40 = 281.39930000;
    l_U139[63]._fU0 = 1;
    l_U139[63]._fU52 = 2;
    l_U139[63]._fU4 = 2;
    l_U139[63]._fU56 = 15;
    l_U139[63]._fU28 = {-467.43110000, 156.32350000, 8.86880000};
    l_U139[63]._fU40 = 315.34980000;
    l_U139[64]._fU0 = 1;
    l_U139[64]._fU52 = 1;
    l_U139[64]._fU4 = 2;
    l_U139[64]._fU56 = 15;
    l_U139[64]._fU28 = {-466.44110000, 157.74660000, 8.86880000};
    l_U139[64]._fU40 = 168.60080000;
    l_U139[65]._fU0 = 1;
    l_U139[65]._fU52 = 8;
    l_U139[65]._fU4 = 8;
    l_U139[65]._fU56 = 0;
    l_U139[65]._fU28 = {-477.63630000, 142.48510000, 6.55250000};
    l_U139[65]._fU40 = 90.00000000;
    l_U139[66]._fU0 = 1;
    l_U139[66]._fU52 = 8;
    l_U139[66]._fU4 = 8;
    l_U139[66]._fU56 = 0;
    l_U139[66]._fU28 = {-477.55690000, 156.85340000, 6.55100000};
    l_U139[66]._fU40 = 90.00000000;
    l_U139[67]._fU0 = 1;
    l_U139[67]._fU52 = 8;
    l_U139[67]._fU4 = 8;
    l_U139[67]._fU56 = 0;
    l_U139[67]._fU28 = {-477.82590000, 164.98470000, 10.61790000};
    l_U139[67]._fU40 = 169.45360000;
    l_U139[68]._fU0 = 1;
    l_U139[68]._fU52 = 11;
    l_U139[68]._fU4 = 5;
    l_U139[68]._fU56 = 19;
    l_U139[68]._fU28 = {-470.35470000, 163.18980000, 8.65990000};
    l_U139[68]._fU40 = 228.82030000;
    l_U139[69]._fU0 = 1;
    l_U139[69]._fU52 = 1;
    l_U139[69]._fU4 = 1;
    l_U139[69]._fU56 = 55;
    l_U139[69]._fU28 = {-485.24990000, 158.35240000, 10.62000000};
    l_U139[69]._fU40 = 339.48000000;
    l_U139[70]._fU0 = 1;
    l_U139[70]._fU52 = 1;
    l_U139[70]._fU4 = 1;
    l_U139[70]._fU56 = 24;
    l_U139[70]._fU28 = {-484.36990000, 158.39290000, 10.62040000};
    l_U139[70]._fU40 = 128.16000000;
    l_U139[71]._fU0 = 1;
    l_U139[71]._fU52 = 1;
    l_U139[71]._fU4 = 1;
    l_U139[71]._fU56 = 50;
    l_U139[71]._fU28 = {-485.20300000, 164.07590000, 10.62000000};
    l_U139[71]._fU40 = 0.00000000;
    l_U139[72]._fU0 = 1;
    l_U139[72]._fU52 = 1;
    l_U139[72]._fU4 = 1;
    l_U139[72]._fU56 = 25;
    l_U139[72]._fU28 = {-484.48340000, 164.68680000, 10.61870000};
    l_U139[72]._fU40 = 97.20000000;
    l_U139[73]._fU0 = 1;
    l_U139[73]._fU52 = 1;
    l_U139[73]._fU4 = 1;
    l_U139[73]._fU56 = 28;
    l_U139[73]._fU28 = {-480.73820000, 159.53730000, 10.61830000};
    l_U139[73]._fU40 = 163.08000000;
    l_U139[74]._fU0 = 1;
    l_U139[74]._fU52 = 1;
    l_U139[74]._fU4 = 1;
    l_U139[74]._fU56 = 29;
    l_U139[74]._fU28 = {-481.15540000, 158.87380000, 10.61850000};
    l_U139[74]._fU40 = 347.76000000;
    l_U139[75]._fU0 = 1;
    l_U139[75]._fU52 = 2;
    l_U139[75]._fU4 = 2;
    l_U139[75]._fU56 = 10;
    l_U139[75]._fU28 = {-464.78010000, 146.78800000, 8.81380000};
    l_U139[75]._fU40 = 235.03830000;
    l_U139[76]._fU0 = 1;
    l_U139[76]._fU52 = 1;
    l_U139[76]._fU4 = 2;
    l_U139[76]._fU56 = 4;
    l_U139[76]._fU28 = {-465.61760000, 149.21360000, 8.83430000};
    l_U139[76]._fU40 = 311.57120000;
    l_U139[77]._fU0 = 1;
    l_U139[77]._fU52 = 1;
    l_U139[77]._fU4 = 2;
    l_U139[77]._fU56 = 9;
    l_U139[77]._fU28 = {-465.38810000, 154.67630000, 8.85240000};
    l_U139[77]._fU40 = 28.62760000;
    l_U139[78]._fU0 = 1;
    l_U139[78]._fU52 = 2;
    l_U139[78]._fU4 = 2;
    l_U139[78]._fU56 = 12;
    l_U139[78]._fU28 = {-465.10760000, 156.54750000, 8.85890000};
    l_U139[78]._fU40 = 235.56970000;
    l_U139[79]._fU0 = 1;
    l_U139[79]._fU52 = 2;
    l_U139[79]._fU4 = 1;
    l_U139[79]._fU56 = 22;
    l_U139[79]._fU28 = {-470.36750000, 159.35130000, 8.66889900};
    l_U139[79]._fU40 = 90.00000000;
    l_U139[80]._fU0 = 1;
    l_U139[80]._fU52 = 2;
    l_U139[80]._fU4 = 2;
    l_U139[80]._fU56 = 11;
    l_U139[80]._fU28 = {-472.47180000, 164.79710000, 8.66889900};
    l_U139[80]._fU40 = 270.00000000;
    l_U139[81]._fU0 = 1;
    l_U139[81]._fU52 = 1;
    l_U139[81]._fU4 = 1;
    l_U139[81]._fU56 = 20;
    l_U139[81]._fU28 = {-472.47180000, 162.44210000, 8.66800000};
    l_U139[81]._fU40 = 270.00000000;
    l_U1534[0]._fU0 = {-485.96470000, 163.67350000, 10.62040000};
    l_U1534[0]._fU12 = 177.80160000;
    l_U1534[0]._fU24 = 17;
    l_U1534[0]._fU16 = 0;
    l_U1534[1]._fU0 = {-480.93750000, 161.63980000, 10.61880000};
    l_U1534[1]._fU12 = 166.20000000;
    l_U1534[1]._fU24 = 17;
    l_U1534[1]._fU16 = 0;
    l_U1534[2]._fU0 = {-479.25220000, 152.40620000, 6.93240000};
    l_U1534[2]._fU12 = 199.27600000;
    l_U1534[2]._fU24 = 17;
    l_U1534[2]._fU16 = 0;
    l_U1534[3]._fU0 = {-483.80580000, 147.42840000, 6.55090000};
    l_U1534[3]._fU12 = 171.96760000;
    l_U1534[3]._fU24 = 17;
    l_U1534[3]._fU16 = 0;
    l_U1534[4]._fU0 = {-482.69890000, 141.98230000, 6.55090000};
    l_U1534[4]._fU12 = 188.73740000;
    l_U1534[4]._fU24 = 17;
    l_U1534[4]._fU16 = 0;
    l_U1534[5]._fU0 = {-472.37180000, 160.60590000, 8.66950000};
    l_U1534[5]._fU12 = 270.00000000;
    l_U1534[5]._fU24 = 21;
    l_U1534[5]._fU16 = 1;
    l_U1534[6]._fU0 = {-469.51790000, 144.44890000, 8.85890000};
    l_U1534[6]._fU12 = 9.06780000;
    l_U1534[6]._fU24 = 0;
    l_U1534[6]._fU16 = 0;
    return;
}

void sub_18114()
{
    int I;
    int J;
    int iVar4;
    int iVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    boolean bVar9;
    boolean bVar10;
    int iVar11;

    l_U1667 = 0;
    l_U1668 = 0;
    l_U1665 = 0;
    l_U1666 = 0;
    GET_FRAME_TIME( ref uVar6 );
    l_U1670 = ROUND( uVar6 * 1000.00000000 );
    l_U1671++;
    if (l_U1671 > 9)
    {
        l_U1671 = 0;
    }
    if (l_U1660 == 1)
    {
        if (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "rocco1" )) == 0))
        {
            g_U30120[l_U1660] = 1;
        }
    }
    if (NOT l_U1625)
    {
        if ((l_U1660 == 0) AND (g_U30181))
        {
            PRINTSTRING( "club locked due to g_bBahamaMamasIsShutDown = TRUE" );
            PRINTNL();
            if (NOT (sub_4107( sub_3822(), 0, 0 )))
            {
                g_U30149[l_U1660] = 1;
                l_U1625 = 1;
            }
        }
        else if (NOT g_U15811[35])
        {
            if ((NOT g_U30153) AND (NOT g_U12379))
            {
                if (NOT (l_U1660 == 2))
                {
                    if (NOT (IS_THREAD_ACTIVE( g_U30226[l_U1660] )))
                    {
                        if ((g_U30110[l_U1660]) || (((NOT (sub_4107( sub_3822(), l_U1660, 0 ))) AND (l_U1632)) || (NOT (sub_18479( sub_3822(), l_U1660, 1094713344 )))))
                        {
                            GET_TIME_OF_DAY( ref iVar7, ref uVar8 );
                            if ((iVar7 < 21) AND (iVar7 >= 6))
                            {
                                PRINTSTRING( "club locked due to time of day" );
                                PRINTNL();
                                g_U30149[l_U1660] = 1;
                                l_U1625 = 1;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            PRINTSTRING( "club locked due to g_flagMissionFlowFlags[MFF_CLUBS_SHUTDOWN] = TRUE" );
            PRINTNL();
            g_U30149[l_U1660] = 1;
            l_U1625 = 1;
        }
    }
    else
    {
        GET_TIME_OF_DAY( ref iVar7, ref uVar8 );
        if (NOT ((l_U1660 == 0) AND (g_U30181)))
        {
            if (NOT g_U15811[35])
            {
                if ((sub_4107( sub_3822(), l_U1660, 0 )) || ((g_U30153) || (((iVar7 < 6) || (iVar7 >= 21)) || ((IS_THREAD_ACTIVE( g_U30226[l_U1660] )) || (g_U12379)))))
                {
                    PRINTSTRING( "club opened due to something" );
                    PRINTNL();
                    g_U30149[l_U1660] = 0;
                    l_U1625 = 0;
                    l_U1636 = 0;
                }
            }
        }
    }
    if ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "rocco1" )) > 0)) AND ((IS_PLAYER_PLAYING( sub_985() )) AND (sub_19182( sub_3822(), l_U1660 ))))
    {
        sub_20162();
        if (g_U30154[l_U1660])
        {
            if (l_U1616)
            {
                if (HAS_CUTSCENE_FINISHED())
                {
                    PRINTSTRING( "nightclub header - thinks mocap has finished, setting g_bShowClubPedsInCutscene = FALSE for club " );
                    switch (l_U1660)
                    {
                        case 2:
                        PRINTSTRING( "HERCULES" );
                        break;
                        case 0:
                        PRINTSTRING( "BAHAMA_MAMAS" );
                        break;
                        case 1:
                        PRINTSTRING( "MAISONETTE 9" );
                        break;
                    }
                    PRINTNL();
                    g_U30154[l_U1660] = 0;
                }
            }
            else if (HAS_CUTSCENE_LOADED())
            {
                if (NOT HAS_CUTSCENE_FINISHED())
                {
                    l_U1616 = 1;
                }
            }
        }
        else if (l_U1619)
        {
            if (sub_18479( sub_3822(), l_U1660, 20.00000000 ))
            {
                sub_20848( l_U1660, 0 );
                l_U1619 = 0;
            }
        }
        else if (NOT (sub_18479( sub_3822(), l_U1660, 20.00000000 )))
        {
            sub_20848( l_U1660, 1 );
            l_U1619 = 1;
        };;;
        sub_25013();
        sub_25442();
        sub_26308();
        sub_27688();
        sub_27863();
        switch (l_U1659)
        {
            case 0:
            if (sub_4107( sub_3822(), l_U1660, 0 ))
            {
                if ((NOT g_U30093[l_U1660]) AND (sub_28713( sub_3822(), l_U1660 )))
                {
                    if (NOT (sub_28780( sub_3822(), l_U1660 )))
                    {
                        sub_29574();
                        l_U1659 = 1;
                    }
                }
            }
            break;
            case 1:
            if ((NOT (sub_28713( sub_3822(), l_U1660 ))) || (NOT (sub_4107( sub_3822(), l_U1660, 0 ))))
            {
                sub_2042();
                l_U1659 = 0;
            }
            break;
        }
        if ((sub_29498()) || (NOT g_U30149[l_U1660]))
        {
            if ((sub_29498()) || (NOT g_U30120[l_U1660]))
            {
                if (g_U30128[l_U1660])
                {
                    PRINTSTRING( "g_ReloadGlobalClubpeds[] = TRUE" );
                    PRINTNL();
                    for ( I = 0; I < l_U1385; I++ )
                    {
                        if (l_U1385[I]._fU0)
                        {
                            iVar4 = sub_30848( l_U1385[I]._fU24, ref g_U29971 );
                            bVar9 = false;
                            if (NOT (iVar4 == -1))
                            {
                                if (NOT g_U29971[iVar4]._fU0)
                                {
                                    bVar9 = true;
                                }
                            }
                            if (iVar4 == -1)
                            {
                                bVar9 = true;
                            }
                            if (bVar9)
                            {
                                if (DOES_CHAR_EXIST( l_U1385[I]._fU24 ))
                                {
                                    sub_2521( ref l_U1385[I], 0 );
                                }
                                l_U1385[I]._fU24 = nil;
                                l_U1385[I]._fU0 = 0;
                                l_U1385[I]._fU4 = 0;
                                l_U1385[I]._fU28 = {0.00000000, 0.00000000, 0.00000000};
                                l_U1385[I]._fU40 = 0.00000000;
                                l_U1385[I]._fU48 = 0;
                                l_U1385[I]._fU52 = 0;
                                l_U1385[I]._fU56 = 0;
                                l_U1385[I]._fU8 = 0;
                                l_U1385[I]._fU12 = 0;
                                l_U1385[I]._fU16 = 0;
                                l_U1385[I]._fU20 = 0;
                                l_U1385[I]._fU44 = nil;
                            }
                        }
                    }
                    for ( I = 0; I < g_U29971; I++ )
                    {
                        if (g_U29971[I]._fU0)
                        {
                            if (g_U29971[I]._fU8 == l_U1660)
                            {
                                bVar10 = false;
                                for ( J = 0; J < l_U1385; J++ )
                                {
                                    if (DOES_CHAR_EXIST( l_U1385[J]._fU24 ))
                                    {
                                        if (g_U29971[I]._fU12 == l_U1385[J]._fU24)
                                        {
                                            bVar10 = true;
                                        }
                                    }
                                }
                                iVar11 = -1;
                                if (NOT bVar10)
                                {
                                    for ( J = 0; J < l_U1385; J++ )
                                    {
                                        if (l_U1385[J]._fU0 == 0)
                                        {
                                            iVar11 = J;
                                            J = l_U1385;
                                        }
                                    }
                                    if (NOT (iVar11 == -1))
                                    {
                                        l_U1385[iVar11]._fU8 = 0;
                                        l_U1385[iVar11]._fU12 = 0;
                                        l_U1385[iVar11]._fU16 = 0;
                                        l_U1385[iVar11]._fU20 = 0;
                                        l_U1385[iVar11]._fU24 = nil;
                                        l_U1385[iVar11]._fU44 = nil;
                                        l_U1385[iVar11]._fU0 = g_U29971[I]._fU0;
                                        l_U1385[iVar11]._fU4 = g_U29971[I]._fU4;
                                        l_U1385[iVar11]._fU28 = {g_U29971[I]._fU16};
                                        l_U1385[iVar11]._fU40 = g_U29971[I]._fU28;
                                        l_U1385[iVar11]._fU52 = g_U29971[I]._fU36;
                                        l_U1385[iVar11]._fU56 = g_U29971[I]._fU40;
                                        l_U1385[iVar11]._fU48 = g_U29971[I]._fU32;
                                        l_U1676[iVar11] = I;
                                    }
                                    else
                                    {
                                        PRINTSTRING( "g_ClubPEd slot = " );
                                        PRINTINT( I );
                                        PRINTNL();
                                        SCRIPT_ASSERT( "could not find free slot in clubpedsfromglobal" );
                                    }
                                }
                            }
                        }
                    }
                    g_U30128[l_U1660] = 0;
                }
                if (l_U1605)
                {
                    l_U1605 = 0;
                }
                if (NOT l_U1631)
                {
                    if (l_U1595)
                    {
                        STORE_WANTED_LEVEL( sub_985(), ref iVar5 );
                        if (NOT (l_U1669 == iVar5))
                        {
                            DONT_DISPATCH_COPS_FOR_PLAYER( sub_985(), 1 );
                            CLEAR_AREA_OF_COPS( l_U1758._fU0, l_U1758._fU4, l_U1758._fU8, 1000.00000000 );
                            l_U1631 = 1;
                            PRINTSTRING( "CLEAR_AREA_OF_COPS - called 2" );
                            PRINTNL();
                        }
                        l_U1669 = iVar5;
                    }
                }
                else if (NOT l_U1595)
                {
                    l_U1631 = 0;
                }
                if (g_U30104)
                {
                    sub_32038();
                    g_U30104 = 0;
                }
                if (l_U1671 == 0)
                {
                    sub_32589();
                }
                sub_32928();
                sub_33597();
                sub_34269();
                sub_35286();
                sub_37007();
                if (g_U30158[l_U1660])
                {
                    if (IS_THREAD_ACTIVE( g_U30230[l_U1660] ))
                    {
                        for ( I = 0; I < l_U1385; I++ )
                        {
                            sub_40951( ref l_U1385[I] );
                        }
                        for ( I = 0; I < l_U139; I++ )
                        {
                            sub_40951( ref l_U139[I] );
                        }
                        l_U1618 = 1;
                    }
                    g_U30158[l_U1660] = 0;
                }
                else if (l_U1618)
                {
                    if (NOT (IS_THREAD_ACTIVE( g_U30230[l_U1660] )))
                    {
                        g_U30251 = {0.00000000, 0.00000000, 0.00000000};
                        g_U30254 = {0.00000000, 0.00000000, 0.00000000};
                    }
                }
                if (g_U30114[l_U1660])
                {
                    PRINTSTRING( "g_bForceReloadOfClubPeds = TRUE - removing peds" );
                    PRINTNL();
                    for ( I = 0; I < l_U1385; I++ )
                    {
                        sub_41068( ref l_U1385[I], 1 );
                    }
                    for ( I = 0; I < l_U139; I++ )
                    {
                        sub_41068( ref l_U139[I], 1 );
                    }
                    if ((sub_4107( sub_3822(), l_U1660, 0 )) || (IS_SCREEN_FADED_OUT()))
                    {
                        sub_29874( l_U1758, 50.00000000, 0 );
                    }
                    sub_42096();
                }
                if (NOT g_U30119)
                {
                    l_U1608 = 1;
                    l_U1599 = 1;
                    for ( l_U1673 = 0; l_U1673 < l_U1385; l_U1673++ )
                    {
                        sub_42341( ref l_U1385[l_U1673] );
                    }
                    l_U1599 = 0;
                    l_U1608 = 0;
                    for ( l_U1673 = 0; l_U1673 < l_U139; l_U1673++ )
                    {
                        sub_42341( ref l_U139[l_U1673] );
                    }
                    sub_69927();
                }
                else if (NOT g_U12379)
                {
                    g_U30119 = 0;
                }
                if (g_U30114[l_U1660])
                {
                    g_U30114[l_U1660] = 0;
                }
                if (g_U30097[l_U1660])
                {
                    if (NOT l_U1610)
                    {
                        PRINTSTRING( "CLUB SCRIPT - g_bReduceClubPeds = TRUE" );
                        PRINTNL();
                        switch (l_U1660)
                        {
                            case 0:
                            sub_70834( ref l_U1385 );
                            sub_70834( ref l_U139 );
                            l_U1663 = 75;
                            break;
                            case 1:
                            for ( I = 0; I < l_U139; I++ )
                            {
                                if (l_U139[I]._fU4 == 8)
                                {
                                    l_U139[I]._fU0 = 0;
                                }
                            }
                            l_U1663 = 75;
                            break;
                            case 2:
                            l_U1663 = 75;
                            break;
                        }
                        l_U1610 = 1;
                    }
                }
                else if (l_U1610)
                {
                    l_U1663 = 85;
                    l_U1610 = 0;
                }
                if (g_U30109)
                {
                    for ( I = 0; I < l_U1385; I++ )
                    {
                        if ((l_U1385[I]._fU4 == 12) || (l_U1385[I]._fU4 == 10))
                        {
                            l_U1385[I]._fU16 = 0;
                        }
                    }
                    for ( I = 0; I < l_U139; I++ )
                    {
                        if ((l_U139[I]._fU4 == 12) || (l_U139[I]._fU4 == 10))
                        {
                            l_U139[I]._fU16 = 0;
                        }
                    }
                    g_U30109 = 0;
                }
                if (NOT (g_U30209 == nil))
                {
                    PRINTSTRING( "g_PedToDelete not NULL" );
                    PRINTNL();
                    for ( I = 0; I < l_U1385; I++ )
                    {
                        if (l_U1385[I]._fU24 == g_U30209)
                        {
                            sub_41068( ref l_U1385[I], 1 );
                            if (NOT (l_U1385[I]._fU4 == 14))
                            {
                                l_U1385[I]._fU20 = 35536;
                            }
                            else
                            {
                                l_U1385[I]._fU20 = 99999;
                                l_U1636 = 0;
                            }
                        }
                    }
                    for ( I = 0; I < l_U139; I++ )
                    {
                        if (l_U139[I]._fU24 == g_U30209)
                        {
                            sub_41068( ref l_U139[I], 1 );
                            if (NOT (l_U139[I]._fU4 == 14))
                            {
                                l_U139[I]._fU20 = 35536;
                            }
                            else
                            {
                                l_U139[I]._fU20 = 99999;
                            }
                        }
                    }
                    g_U30209 = nil;
                }
                if (g_U30110[l_U1660])
                {
                    PRINTSTRING( "g_bWaitingForClubScriptToStreamIn[iThisClub] - calling have_assets_for_Club_loaded..." );
                    PRINTNL();
                    if (l_U1619)
                    {
                        PRINTSTRING( "bClubIsUsingReducedMemory = TRUE" );
                        PRINTNL();
                    }
                    if (sub_71848( l_U1660, l_U1619 ))
                    {
                        if ((l_U1638) AND (l_U1668 == 0))
                        {
                            g_U30110[l_U1660] = 0;
                            l_U1638 = 0;
                        }
                    }
                    if (g_U30110[l_U1660])
                    {
                        if (NOT l_U1638)
                        {
                            for ( I = 0; I < l_U1385; I++ )
                            {
                                l_U1385[I]._fU20 = 99999;
                            }
                            for ( I = 0; I < l_U139; I++ )
                            {
                                l_U139[I]._fU20 = 99999;
                            }
                            l_U1638 = 1;
                        }
                    }
                }
                if (g_U30166)
                {
                    if (NOT (IS_THREAD_ACTIVE( g_U30234 )))
                    {
                        PRINTSTRING( "g_bHideMovingClubPeds - script that was hiding peds is no longer active" );
                        PRINTNL();
                        g_U30166 = 0;
                    }
                }
            }
            else if (g_U12379)
            {
                sub_74127();
            }
            else
            {
                g_U30120[l_U1660] = 0;
            }
        }
        else if ((l_U1625) || (IS_THREAD_ACTIVE( g_U30226[l_U1660] )))
        {
            sub_74127();
            if (g_U30110[l_U1660])
            {
                g_U30110[l_U1660] = 0;
            }
        }
        else
        {
            l_U1636 = 0;
            g_U30149[l_U1660] = 0;
            l_U1625 = 0;
        }
    }
    else
    {
        sub_1071();
    }
    if (g_U30179)
    {
        if (NOT (IS_THREAD_ACTIVE( g_U30250 )))
        {
            PRINTSTRING( "g_bDontDoDanceWalk - script that was hiding peds is no longer active" );
            PRINTNL();
            g_U30179 = 0;
        }
    }
    if (l_U1623)
    {
        sub_74734();
        l_U1623 = 0;
    }
    sub_78197();
    if (g_U30197 == l_U1660)
    {
        if ((l_U1692 > 1) AND (l_U1626))
        {
            sub_82001( l_U1660 );
        }
    }
    if (NOT l_U1634)
    {
        if (l_U1660 == 2)
        {
            if (IS_PLAYER_CONTROL_ON( sub_985() ))
            {
                GET_TIME_OF_DAY( ref iVar7, ref uVar8 );
                if ((iVar7 < 18) AND (iVar7 > 7))
                {
                    if (sub_4107( sub_3822(), l_U1660, 0 ))
                    {
                        if (sub_82715( "E2MF1_GAY", ref l_U1727, 3 ))
                        {
                            l_U1634 = 1;
                        }
                    }
                }
            }
        }
    }
    if (l_U1624)
    {
        if (NOT l_U1637)
        {
            for ( I = 0; I < l_U1385; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U1385[I]._fU24 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1385[I]._fU24 );
                }
            }
            for ( I = 0; I < l_U139; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U139[I]._fU24 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U139[I]._fU24 );
                }
            }
            l_U1637 = 1;
        }
    }
    else
    {
        l_U1637 = 0;
    }
    if (g_U30124[l_U1660])
    {
        sub_21042( l_U1660 );
        g_U30124[l_U1660] = 0;
    }
    return;
}

int sub_18479(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_18490( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_4107( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_18490(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( -399.10690000, 397.67000000, 14.17720000);
        break;
        case 1:
        return vector( -468.03000000, 153.41000000, 9.80000000);
        break;
        case 2:
        return vector( -440.28000000, 356.98000000, 11.54000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

int sub_19182(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = false;
    if (IS_PLAYER_PLAYING( sub_985() ))
    {
        if (sub_19216( sub_3822() ))
        {
            if (((sub_19456( sub_3822() )) == 3) || ((sub_19456( sub_3822() )) == 5))
            {
                bVar4 = true;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT bVar4)
        {
            switch (uParam1)
            {
                case 0:
                if ((NOT (IS_CHAR_INJURED( g_U30208 ))) || (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.02980000, 396.49390000, 13.40960000, 150.00000000, 150.00000000, 50.00000000, 0 )))
                {
                    return 1;
                }
                break;
                case 1:
                if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -483.56000000, 153.63000000, 7.55000000, 150.00000000, 150.00000000, 50.00000000, 0 ))
                {
                    return 1;
                }
                break;
                case 2:
                if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -438.87000000, 355.55000000, 11.93000000, 150.00000000, 150.00000000, 50.00000000, 0 ))
                {
                    return 1;
                }
                break;
            }
        }
        else
        {
            switch (uParam1)
            {
                case 0:
                if ((NOT (IS_CHAR_INJURED( g_U30208 ))) || (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.02980000, 396.49390000, 13.40960000, 150.00000000, 150.00000000, 150.00000000, 0 )))
                {
                    return 1;
                }
                break;
                case 1:
                if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -483.56000000, 153.63000000, 7.55000000, 150.00000000, 150.00000000, 150.00000000, 0 ))
                {
                    return 1;
                }
                break;
                case 2:
                if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -438.87000000, 355.55000000, 11.93000000, 150.00000000, 150.00000000, 150.00000000, 0 ))
                {
                    return 1;
                }
                break;
            }
        }
    }
    PRINTSTRING( "CLUB NO LONGER WITHIN ACTIVATION RANGE" );
    PRINTNL();
    return 0;
}

int sub_19216(unknown uParam0)
{
    int iVar3;

    if (sub_19225())
    {
        iVar3 = sub_19291( uParam0 );
        if (iVar3 < 0)
        {
            return 0;
        }
        else if (g_U2692[iVar3]._fU60)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

int sub_19225()
{
    if ((HAVE_ANIMS_LOADED( "PARACHUTE" )) AND (HAS_MODEL_LOADED( 1490460832 )))
    {
        return 1;
    }
    return 0;
}

int sub_19291(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < g_U2692; Result++ )
    {
        if (g_U2692[Result]._fU0 == iParam0)
        {
            if (g_U2692[Result]._fU56)
            {
                return Result;
            }
        }
    }
    return -1;
}

int sub_19456(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_19291( uParam0 );
    if (iVar3 >= 0)
    {
        return g_U2692[iVar3]._fU4;
        break;
    }
    SCRIPT_ASSERT( "GET_PARACHUTE_PED_STATE: Ped does not have a parachute equipped." );
    return 0;
}

void sub_20162()
{
    if (NOT l_U1594)
    {
        PRINTSTRING( "INITIALISE_CLUB() - start" );
        PRINTNL();
        sub_20224();
        PRINTSTRING( "INITIALISE_CLUB() - 1" );
        PRINTNL();
        COPY_SHARED_CHAR_DECISION_MAKER( 65539, ref g_U30182 );
        COPY_SHARED_CHAR_DECISION_MAKER( 65539, ref g_U30183 );
        COPY_SHARED_COMBAT_DECISION_MAKER( 65560, ref g_U30184 );
        COPY_SHARED_COMBAT_DECISION_MAKER( 65568, ref g_U30185 );
        sub_5883();
        if (NOT (sub_18479( sub_3822(), l_U1660, 20.00000000 )))
        {
            sub_20848( l_U1660, 1 );
            l_U1619 = 1;
        }
        if (l_U1660 == 1)
        {
            l_U1733[0]._fU0 = {-473.94560000, 159.98590000, 9.67320000};
            l_U1733[1]._fU0 = {-473.93990000, 162.85640000, 9.67420000};
            l_U1733[2]._fU0 = {-473.94610000, 165.78630000, 9.67380000};
            l_U1733[3]._fU0 = {-468.53060000, 158.77260000, 9.67420000};
            l_U1733[4]._fU0 = {-468.53060000, 160.82300000, 9.67420000};
            l_U1733[5]._fU0 = {-469.03140000, 164.52770000, 9.66570000};
        }
        if (l_U1660 == 0)
        {
            g_U30189 = 0;
        }
        sub_1699( l_U1660 );
        if (l_U1660 == 1)
        {
            g_U30198 = sub_22260();
            if (NOT (g_U30198 == -1))
            {
                g_U29971[g_U30198]._fU0 = 1;
                g_U29971[g_U30198]._fU4 = 14;
                g_U29971[g_U30198]._fU8 = 1;
                g_U29971[g_U30198]._fU16 = {-473.14230000, 145.59760000, 8.95000000};
                g_U29971[g_U30198]._fU28 = 324.01530000;
                g_U29971[g_U30198]._fU40 = 2;
                g_U29971[g_U30198]._fU36 = 0;
                g_U29971[g_U30198]._fU32 = -882058861;
            }
            g_U30199 = sub_22260();
            if (NOT (g_U30199 == -1))
            {
                g_U29971[g_U30199]._fU0 = 1;
                g_U29971[g_U30199]._fU8 = 1;
                g_U29971[g_U30199]._fU36 = 9;
                g_U29971[g_U30199]._fU32 = sub_23071( 9 );
                g_U29971[g_U30199]._fU4 = 9;
                g_U29971[g_U30199]._fU16 = {-467.43100000, 152.37370000, 8.86880000};
                g_U29971[g_U30199]._fU28 = 270.00000000;
            }
            g_U30202 = sub_22260();
            if (NOT (g_U30202 == -1))
            {
                g_U29971[g_U30202]._fU0 = 1;
                g_U29971[g_U30202]._fU8 = 1;
                g_U29971[g_U30202]._fU36 = 7;
                g_U29971[g_U30202]._fU32 = sub_23071( 7 );
                g_U29971[g_U30202]._fU4 = 5;
                g_U29971[g_U30202]._fU16 = {-481.30330000, 158.76740000, 6.68390000};
                g_U29971[g_U30202]._fU28 = 157.70500000;
                g_U29971[g_U30202]._fU40 = 17;
            }
            sub_1699( 1 );
        }
        if (l_U1660 == 2)
        {
            g_U30201 = sub_22260();
            if (NOT (g_U30201 == -1))
            {
                g_U29971[g_U30201]._fU0 = 1;
                g_U29971[g_U30201]._fU4 = 5;
                g_U29971[g_U30201]._fU8 = 2;
                g_U29971[g_U30201]._fU16 = {-434.46780000, 354.59100000, 10.71170000};
                g_U29971[g_U30201]._fU28 = 180.00000000;
                g_U29971[g_U30201]._fU40 = 44;
                g_U29971[g_U30201]._fU36 = 0;
                g_U29971[g_U30201]._fU32 = 284474691;
            }
            g_U30200 = sub_22260();
            if (NOT (g_U30200 == -1))
            {
                g_U29971[g_U30200]._fU0 = 1;
                g_U29971[g_U30200]._fU4 = 9;
                g_U29971[g_U30200]._fU8 = 2;
                g_U29971[g_U30200]._fU16 = {-442.04090000, 358.27740000, 10.04620000};
                g_U29971[g_U30200]._fU28 = 106.88260000;
                g_U29971[g_U30200]._fU40 = 0;
                g_U29971[g_U30200]._fU36 = 10;
                g_U29971[g_U30200]._fU32 = sub_23071( 10 );
            }
            g_U30203 = sub_22260();
            if (NOT (g_U30203 == -1))
            {
                g_U29971[g_U30203]._fU0 = 1;
                g_U29971[g_U30203]._fU4 = 10;
                g_U29971[g_U30203]._fU8 = 2;
                g_U29971[g_U30203]._fU16 = {-426.79110000, 351.86660000, 10.90920000};
                g_U29971[g_U30203]._fU28 = 90.00000000;
                g_U29971[g_U30203]._fU40 = 59;
                g_U29971[g_U30203]._fU36 = 2;
            }
            sub_1699( 2 );
        }
        sub_24535();
        l_U1594 = 1;
        l_U1632 = 1;
    }
    else if (l_U1632)
    {
        l_U1632 = 0;
    }
    return;
}

void sub_20224()
{
    l_U1476[0]._fU0 = "null";
    l_U1476[1]._fU0 = "BOUNCER_GREETING";
    l_U1476[2]._fU0 = "FEMALE_CHAIR_ALONE";
    l_U1476[3]._fU0 = "FEMALE_IDLE";
    l_U1476[4]._fU0 = "FEMALE_PUKE";
    l_U1476[5]._fU0 = "FEMALE_SHOCKED";
    l_U1476[6]._fU0 = "FEMALE_STAND_CHAT";
    l_U1476[7]._fU0 = "MALE_STAND_CHAT";
    l_U1476[8]._fU0 = "GIRL_A_ARGUE";
    l_U1476[9]._fU0 = "GIRL_B_ARGUE";
    l_U1476[10]._fU0 = "MALE_PUKE";
    l_U1476[11]._fU0 = "M_DRUNK_A";
    l_U1476[12]._fU0 = "M_DRUNK_B";
    l_U1476[13]._fU0 = "F_STAND_B";
    l_U1476[14]._fU0 = "F_STAND_D";
    l_U1476[15]._fU0 = "Scenario_SmokingOutsideOffice";
    l_U1476[16]._fU0 = "Scenario_Bouncer";
    l_U1476[17]._fU0 = "HangOut_Street";
    return;
}

void sub_20848(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        PRINTSTRING( "SET_CLUB_USES_REDUCED_MEMORY - called TRUE - for " );
        switch (uParam0)
        {
            case 2:
            PRINTSTRING( "HERCULES" );
            break;
            case 0:
            PRINTSTRING( "BAHAMA_MAMAS" );
            break;
            case 1:
            PRINTSTRING( "MAISONETTE 9" );
            break;
        }
        PRINTNL();
        sub_21042( uParam0 );
    }
    else
    {
        PRINTSTRING( "SET_CLUB_USES_REDUCED_MEMORY - called FALSE - for " );
        switch (uParam0)
        {
            case 2:
            PRINTSTRING( "HERCULES" );
            break;
            case 0:
            PRINTSTRING( "BAHAMA_MAMAS" );
            break;
            case 1:
            PRINTSTRING( "MAISONETTE 9" );
            break;
        }
        PRINTNL();
    }
    g_U30162[uParam0] = bParam1;
    return;
}

void sub_21042(unknown uParam0)
{
    REMOVE_ANIMS( "missnightclub" );
    REMOVE_ANIMS( "AMB@SMOKING_F" );
    REMOVE_ANIMS( "AMB@SMOKING" );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2037134882 );
    switch (uParam0)
    {
        case 0:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1756785265 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 982077731 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1758965191 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -844218756 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1684055465 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubBM2" );
        REMOVE_ANIMS( "missamb_bama" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "BAHAMA MAMAS" );
        PRINTNL();
        break;
        case 1:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1756785265 );
        sub_21392( g_U30218 );
        sub_21392( g_U30219 );
        sub_21392( g_U30220 );
        sub_21392( g_U30221 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1429700748 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1446884113 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubM92" );
        REMOVE_ANIMS( "missamb_m9" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "MAISONETTE_9" );
        PRINTNL();
        break;
        case 2:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        sub_21392( g_U30222 );
        sub_21392( g_U30223 );
        sub_21392( g_U30224 );
        sub_21392( g_U30225 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1662473323 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubHC2" );
        REMOVE_ANIMS( "missamb_herc_female" );
        REMOVE_ANIMS( "missamb_herc_male" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "HERCULES" );
        PRINTNL();
        break;
    }
    if (NOT g_U30124[uParam0])
    {
        g_U30124[uParam0] = 1;
    }
    return;
}

void sub_21392(int iParam0)
{
    if (NOT (iParam0 == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( iParam0 );
    }
    return;
}

int sub_22260()
{
    int Result;

    PRINTSTRING( "GET_FREE_GLOBAL_CLUBPED_SLOT() - called " );
    PRINTNL();
    for ( Result = 0; Result < 11; Result++ )
    {
        if (g_U29971[Result]._fU0)
        {
            if (NOT (IS_THREAD_ACTIVE( g_U30236[Result] )))
            {
                PRINTSTRING( "GET_FREE_GLOBAL_CLUBPED_SLOT() - calling FREE_UP_GLOBAL_CLUBPED_SLOT because script no longer active, slot = " );
                PRINTINT( Result );
                PRINTNL();
                sub_1097( Result );
            }
        }
        if (NOT g_U29971[Result]._fU0)
        {
            g_U29971[Result]._fU4 = 0;
            g_U29971[Result]._fU8 = 0;
            g_U29971[Result]._fU12 = nil;
            g_U29971[Result]._fU16 = {0.00000000, 0.00000000, 0.00000000};
            g_U29971[Result]._fU28 = 0.00000000;
            g_U29971[Result]._fU32 = 0;
            g_U29971[Result]._fU36 = 0;
            g_U29971[Result]._fU40 = 0;
            g_U30236[Result] = GET_ID_OF_THIS_THREAD();
            PRINTSTRING( "GET_FREE_GLOBAL_CLUBPED_SLOT() - returned " );
            PRINTINT( Result );
            PRINTNL();
            return Result;
        }
    }
    SCRIPT_ASSERT( "GET_FREE_GLOBAL_CLUBPED_SLOT() - couldn't find free slot" );
    return -1;
}

int sub_23071(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        return sub_23200( l_U1660, 1 );
        break;
        case 3:
        return l_U1717;
        break;
        case 4:
        return l_U1718;
        break;
        case 2:
        return sub_23200( l_U1660, 0 );
        break;
        case 5:
        return l_U1714;
        break;
        case 6:
        return l_U1715;
        break;
        case 7:
        return l_U1719;
        break;
        case 8:
        return l_U1713;
        break;
        case 9:
        return -1446884113;
        break;
        case 10:
        return 1662473323;
        break;
        case 11:
        return l_U1720;
        break;
    }
    SCRIPT_ASSERT( "GET_MODEL_NAME - unrecognised input" );
    return 0;
}

int sub_23200(unknown uParam0, boolean bParam1)
{
    int iVar4;

    if (bParam1)
    {
        switch (uParam0)
        {
            case 2:
            return g_U30224;
            break;
            case 0:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            if (iVar4 == 0)
            {
                return g_U30216;
            }
            else
            {
                return g_U30217;
            }
            break;
            case 1:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            if (iVar4 == 0)
            {
                return g_U30220;
            }
            else
            {
                return g_U30221;
            }
            break;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 2:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            switch (iVar4)
            {
                case 0:
                return g_U30222;
                break;
                case 1:
                return g_U30223;
                break;
            }
            break;
            case 0:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            if (iVar4 == 0)
            {
                return g_U30214;
            }
            else
            {
                return g_U30215;
            }
            break;
            case 1:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            if (iVar4 == 0)
            {
                return g_U30218;
            }
            else
            {
                return g_U30219;
            }
            break;
        }
    }
    return 0;
}

void sub_24535()
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
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    return;
}

void sub_25013()
{
    float fVar2;

    GET_FRAME_TIME( ref fVar2 );
    fVar2 *= 1000.00000000;
    l_U1655 += fVar2;
    if (NOT (IS_CONTROL_PRESSED( 2, 1 )))
    {
        l_U1655 = 0.00000000;
    }
    if (IS_PLAYER_PLAYING( sub_985() ))
    {
        if ((NOT g_U30179) AND (NOT g_U30153))
        {
            if (NOT l_U1615)
            {
                if ((NOT l_U1617) AND (NOT g_U30093[l_U1660]))
                {
                    if (sub_4135( sub_3822(), l_U1660 ))
                    {
                        SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3822(), 1.00000000 );
                        l_U1615 = 1;
                    }
                }
            }
            else if ((g_U30093[l_U1660]) || (NOT (sub_4135( sub_3822(), l_U1660 ))))
            {
                SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3822(), 3.00000000 );
                l_U1615 = 0;
            }
            else if (l_U1655 > 500.00000000)
            {
                SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3822(), l_U1656 );
            }
            else
            {
                SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3822(), 1.00000000 );
            }
            if (l_U1617)
            {
                SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3822(), 3.00000000 );
                l_U1615 = 0;
            }
        }
        else if (l_U1615)
        {
            SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3822(), 3.00000000 );
            l_U1615 = 0;
        }
    }
    if (IS_PLAYER_PLAYING( sub_985() ))
    {
        if ((l_U1617) || (l_U1615))
        {
            ;
        }
        else if (NOT g_U30153)
        {
            ;
        }
    }
    return;
}

void sub_25442()
{
    string sVar2;
    boolean bVar3;

    switch (l_U1660)
    {
        case 0:
        case 1:
        case 2:
        sVar2 = "MOVE_PLAYER_CLUB";
        break;
    }
    bVar3 = false;
    switch (l_U1660)
    {
        case 0:
        if (l_U1691 == 3)
        {
            bVar3 = true;
        }
        break;
        case 2:
        if (l_U1691 == 0)
        {
            bVar3 = true;
        }
        break;
        case 1:
        if ((l_U1691 == 7) || (l_U1691 == 5))
        {
            bVar3 = true;
        }
        break;
    }
    if (bVar3)
    {
        if (l_U1655 > 500.00000000)
        {
            bVar3 = false;
        }
    }
    if (IS_PLAYER_PLAYING( sub_985() ))
    {
        if ((NOT g_U30179) AND (NOT g_U30153))
        {
            if (NOT l_U1617)
            {
                if ((NOT g_U30153) AND (NOT g_U30093[l_U1660]))
                {
                    if (sub_4135( sub_3822(), l_U1660 ))
                    {
                        if (NOT (sub_25742( sub_3822() )))
                        {
                            if (bVar3)
                            {
                                if (sub_25903( sVar2 ))
                                {
                                    BLOCK_CHAR_AMBIENT_ANIMS( sub_3822(), 1 );
                                    SET_ANIM_GROUP_FOR_CHAR( sub_3822(), sVar2 );
                                    l_U1617 = 1;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_3822(), 1 );
                SET_DISABLE_PLAYER_SHOVE_ANIMATION( sub_3822(), 1 );
                if ((sub_25742( sub_3822() )) || ((NOT bVar3) || ((g_U30153) || ((g_U30093[l_U1660]) || (NOT (sub_4135( sub_3822(), l_U1660 )))))))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( sub_3822(), 0 );
                    SET_DISABLE_PLAYER_SHOVE_ANIMATION( sub_3822(), 0 );
                    SET_ANIM_GROUP_FOR_CHAR( sub_3822(), "MOVE_PLAYER" );
                    REMOVE_ANIMS( sVar2 );
                    l_U1617 = 0;
                }
            }
        }
        else if (l_U1617)
        {
            BLOCK_CHAR_AMBIENT_ANIMS( sub_3822(), 0 );
            SET_DISABLE_PLAYER_SHOVE_ANIMATION( sub_3822(), 0 );
            SET_ANIM_GROUP_FOR_CHAR( sub_3822(), "MOVE_PLAYER" );
            REMOVE_ANIMS( sVar2 );
            l_U1617 = 0;
        }
    }
    return;
}

int sub_25742(int iParam0)
{
    if (iParam0 == nil)
    {
        return 0;
    }
    if ((sub_25767( iParam0 )) == -1)
    {
        return 0;
    }
    return 1;
}

int sub_25767(int iParam0)
{
    int Result;

    if (iParam0 == nil)
    {
        return -1;
    }
    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (NOT (g_U9105[Result]._fU0 == -1))
        {
            if (iParam0 == g_U9105[Result]._fU4)
            {
                return Result;
            }
        }
    }
    return -1;
}

int sub_25903(unknown uParam0)
{
    if (NOT (sub_25914( uParam0 )))
    {
        REQUEST_ANIMS( uParam0 );
        if (HAVE_ANIMS_LOADED( uParam0 ))
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_25914(unknown uParam0)
{
    if (IS_STRING_NULL( uParam0 ))
    {
        return 1;
    }
    else if (COMPARE_STRING( uParam0, "" ))
    {
        return 1;
    }
    return 0;
}

void sub_26308()
{
    int iVar2;
    vector vVar3;
    boolean bVar6;
    int iVar7;
    float fVar8;
    unknown uVar9;

    switch (l_U1660)
    {
        case 0:
        iVar2 = 725112888;
        vVar3 = {-398.00000000, 398.00000000, 15.00000000};
        break;
        case 2:
        iVar2 = 1316667213;
        vVar3 = {-440.00000000, 358.00000000, 12.00000000};
        break;
        case 1:
        iVar2 = -175426899;
        vVar3 = {-468.00000000, 153.00000000, 10.00000000};
        break;
    }
    if (l_U1660 == 1)
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -397503281, -474.00000000, 162.00000000, 10.00000000, 1, 0.00000000 );
    }
    if (NOT g_U30167)
    {
        if (((l_U1660 == 0) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0)) || ((IS_PLAYER_CONTROL_ON( sub_985() )) AND (HAS_CUTSCENE_FINISHED())))
        {
            if (IS_PLAYER_PLAYING( sub_985() ))
            {
                if (g_U30153)
                {
                    sub_26587( l_U1660, 0 );
                }
                else if (((l_U1660 == 0) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "E2EndCredits" )) > 0)) || ((l_U1660 == 0) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0)))
                {
                    if ((NOT (sub_4107( sub_3822(), l_U1660, 0 ))) AND (IS_WANTED_LEVEL_GREATER( sub_985(), 0 )))
                    {
                        sub_26587( l_U1660, 2 );
                    }
                    else
                    {
                        sub_26587( l_U1660, 1 );
                    }
                }
                else if ((g_U30149[l_U1660]) || ((g_U30093[l_U1660]) || (IS_WANTED_LEVEL_GREATER( sub_985(), 0 ))))
                {
                    sub_26587( l_U1660, 2 );
                }
                else if (l_U1660 == 0)
                {
                    sub_26587( l_U1660, 2 );
                }
                else
                {
                    sub_26587( l_U1660, 0 );
                };;;;
            }
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( vVar3.x, vVar3.y, vVar3.z, 1.50000000, iVar2 ))
            {
                switch (g_U30192[l_U1660])
                {
                    case 0:
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, 0, fVar8 );
                    l_U1611 = 0;
                    break;
                    case 1:
                    l_U1611 = 0;
                    GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, ref bVar6, ref fVar8 );
                    if (fVar8 > -1.00000000)
                    {
                        GET_FRAME_TIME( ref uVar9 );
                        fVar8 += uVar9 * -1.00000000;
                    }
                    else
                    {
                        fVar8 = -1.00000000;
                    }
                    if ((NOT (sub_27042( vVar3, 2.00000000 ))) || (IS_SCREEN_FADED_OUT()))
                    {
                        fVar8 = -1.00000000;
                    }
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, 1, fVar8 );
                    break;
                    case 2:
                    iVar7 = 0;
                    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0)
                    {
                        if (NOT (sub_4107( sub_3822(), l_U1660, 0 )))
                        {
                            iVar7 = 1;
                        }
                    }
                    else if (NOT (sub_4107( sub_3822(), l_U1660, 1 )))
                    {
                        iVar7 = 1;
                    }
                    if (sub_27217())
                    {
                        iVar7 = 0;
                    }
                    if ((iVar7) || (l_U1611))
                    {
                        GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, ref bVar6, ref fVar8 );
                        if (fVar8 > 0.00000000)
                        {
                            if (fVar8 < 0.05000000)
                            {
                                fVar8 = 0.00000000;
                            }
                            else
                            {
                                GET_FRAME_TIME( ref uVar9 );
                                fVar8 += uVar9 * -1.00000000;
                            }
                        }
                        else if (fVar8 > -0.05000000)
                        {
                            fVar8 = 0.00000000;
                        }
                        else
                        {
                            GET_FRAME_TIME( ref uVar9 );
                            fVar8 += uVar9;
                        }
                        if ((NOT (sub_27042( vVar3, 2.00000000 ))) || (IS_SCREEN_FADED_OUT()))
                        {
                            fVar8 = 0.00000000;
                        }
                        if (fVar8 == 0.00000000)
                        {
                            l_U1611 = 1;
                        }
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, 1, fVar8 );
                    }
                    else
                    {
                        GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, ref bVar6, ref fVar8 );
                        if (bVar6)
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, 0, fVar8 );
                        }
                    }
                    break;
                }
            }
        }
    }
    else if (NOT (IS_THREAD_ACTIVE( g_U30235 )))
    {
        g_U30167 = 0;
    }
    if (l_U1611)
    {
        ;
    }
    return;
}

void sub_26587(unknown uParam0, unknown uParam1)
{
    g_U30192[uParam0] = uParam1;
    return;
}

int sub_27042(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 ))
    {
        return 1;
    }
    return 0;
}

int sub_27217()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_GROUP_EXIST( sub_27226() ))
    {
        for ( I = 0; I < 7; I++ )
        {
            GET_GROUP_MEMBER( sub_27226(), I, ref uVar5 );
            if (NOT (IS_CHAR_INJURED( uVar5 )))
            {
                if (sub_18479( uVar5, l_U1660, 1094713344 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_27226()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_27688()
{
    float fVar2;

    GET_FRAME_TIME( ref fVar2 );
    fVar2 *= 1000.00000000;
    l_U1683 += ROUND( fVar2 );
    l_U1684 += ROUND( fVar2 );
    l_U1685 += ROUND( fVar2 );
    l_U1686 += ROUND( fVar2 );
    l_U1689 += ROUND( fVar2 );
    l_U1687 += ROUND( fVar2 );
    l_U1690 += ROUND( fVar2 );
    return;
}

void sub_27863()
{
    if (NOT l_U1614)
    {
        if (IS_PLAYER_PLAYING( sub_985() ))
        {
            if (g_U30149[l_U1660])
            {
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3822() )))
                {
                    if ((NOT g_U12379) AND ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (NOT sub_27935())))
                    {
                        switch (l_U1660)
                        {
                            case 0:
                            if (IS_CHAR_IN_AREA_3D( sub_3822(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 ))
                            {
                                PRINT_HELP( "CLUB_CLOSED" );
                                l_U1614 = 1;
                            }
                            break;
                            case 1:
                            if (IS_CHAR_IN_AREA_3D( sub_3822(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 ))
                            {
                                PRINT_HELP( "CLUB_CLOSED" );
                                l_U1614 = 1;
                            }
                            break;
                            case 2:
                            if (IS_CHAR_IN_AREA_3D( sub_3822(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 ))
                            {
                                PRINT_HELP( "CLUB_CLOSED" );
                                l_U1614 = 1;
                            }
                            break;
                        }
                    }
                }
            }
        }
    }
    else
    {
        switch (l_U1660)
        {
            case 0:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3822(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 )))
            {
                l_U1614 = 0;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3822(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 )))
            {
                l_U1614 = 0;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3822(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 )))
            {
                l_U1614 = 0;
            }
            break;
        }
        if (NOT l_U1614)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLUB_CLOSED" ))
            {
                CLEAR_HELP();
            }
        }
    }
    return;
}

int sub_27935()
{
    if ((sub_28002()) || ((sub_27951()) || (IS_MESSAGE_BEING_DISPLAYED())))
    {
        return 1;
    }
    return 0;
}

int sub_27951()
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        return 1;
    }
    return 0;
}

int sub_28002()
{
    if ((g_U95._fU0 == 1008) || (g_U95._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_28713(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            if (NOT (sub_28780( sub_3822(), l_U1660 )))
            {
                if (sub_4135( uParam0, uParam1 ))
                {
                    if ((IS_CHAR_IN_AREA_3D( uParam0, -398.11870000, 396.36870000, 4.70370000, -395.56870000, 402.74370000, 12.52870000, 0 )) || ((IS_CHAR_IN_AREA_3D( uParam0, -380.04610000, 428.22680000, 4.52430000, -376.77110000, 432.22680000, 9.84930000, 0 )) || ((IS_CHAR_IN_AREA_3D( uParam0, -379.40620000, 417.46790000, 3.72430000, -377.38120000, 421.04290000, 9.87430000, 0 )) || ((IS_CHAR_IN_AREA_3D( uParam0, -384.02620000, 431.87570000, 4.64940000, -368.82620000, 442.87570000, 8.74940000, 0 )) || (IS_CHAR_IN_AREA_3D( uParam0, -398.50490000, 401.49280000, 3.67440000, -378.30490000, 440.81780000, 8.50000000, 0 ))))))
                    {
                        return 1;
                    }
                }
                if (IS_CHAR_IN_AREA_3D( uParam0, -397.47520000, 394.72470000, 4.22000000, -390.12520000, 401.97470000, 10.47000000, 0 ))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (sub_4135( uParam0, uParam1 ))
            {
                if (NOT (sub_28780( sub_3822(), l_U1660 )))
                {
                    if (IS_CHAR_IN_AREA_3D( uParam0, -490.11110000, 138.91470000, 6.40490000, -468.06110000, 166.93970000, 14.45490000, 0 ))
                    {
                        return 1;
                    }
                }
            }
            break;
            case 2:
            if (NOT (sub_28780( sub_3822(), l_U1660 )))
            {
                if (sub_4135( uParam0, uParam1 ))
                {
                    if (IS_CHAR_IN_AREA_3D( uParam0, -439.82380000, 347.38690000, 9.49160000, -424.74880000, 355.93690000, 14.94170000, 0 ))
                    {
                        return 1;
                    }
                }
            }
            break;
        }
    }
    if (sub_29498())
    {
        return 1;
    }
    return 0;
}

int sub_28780(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            if (IS_CHAR_IN_AREA_3D( uParam0, -400.75690000, 397.53590000, 13.41520000, -396.75690000, 401.28590000, 16.41520000, 0 ))
            {
                return 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_AREA_3D( sub_3822(), -468.92590000, 152.57140000, 7.86410000, -467.90090000, 154.02140000, 11.86410000, 0 ))
            {
                return 1;
            }
            break;
            case 2:
            if (IS_CHAR_IN_AREA_3D( uParam0, -440.23210000, 355.07540000, 10.71670000, -436.60710000, 359.22540000, 13.71670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

int sub_29498()
{
    return 0;
}

void sub_29574()
{
    unknown uVar2;

    PRINTSTRING( "SET_INTERIOR_DENSITIES() - called by " );
    switch (l_U1660)
    {
        case 0:
        PRINTSTRING( "BAHAMA MAMAS" );
        break;
        case 1:
        PRINTSTRING( "MAISONETTE 9" );
        break;
        case 2:
        PRINTSTRING( "HERCULES" );
        break;
    }
    PRINTNL();
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    SET_REDUCE_VEHICLE_MODEL_BUDGET( 1 );
    SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    SWITCH_RANDOM_TRAINS( 0 );
    g_U43642 = 1;
    g_U10935 = 1;
    SET_SCENARIO_PED_DENSITY_MULTIPLIER( 0.00000000, 0.00000000 );
    CLEAR_AREA_OF_CHARS( l_U1758._fU0, l_U1758._fU4, l_U1758._fU8, 1000.00000000 );
    sub_29874( l_U1758, 1000.00000000, 0 );
    CLEAR_AREA_OF_COPS( l_U1758._fU0, l_U1758._fU4, l_U1758._fU8, 1000.00000000 );
    if (IS_PLAYER_PLAYING( sub_985() ))
    {
        SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( sub_985(), 0 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_985(), 1 );
    }
    GET_INTERIOR_AT_COORDS( l_U1758._fU0, l_U1758._fU4, l_U1758._fU8, ref uVar2 );
    ACTIVATE_INTERIOR( uVar2, 1 );
    l_U1595 = 1;
    if (NOT l_U1597)
    {
        g_U30102 = 1;
        g_U30103 = 0;
    }
    else
    {
        g_U30102 = 0;
        g_U30103 = 0;
    }
    if (l_U1660 == 1)
    {
        l_U1699 = FIND_STATIC_EMITTER_INDEX( "EP2_MAISONETTE9_TOILET_AMBIENCE" );
    }
    PRINTSTRING( "SET_INTERIOR_DENSITIES - SET_INTERIOR_DENSITIES() called" );
    PRINTNL();
    return;
}

void sub_29874(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar7 );
    if (DOES_VEHICLE_EXIST( uVar7 ))
    {
        if (NOT (IS_CAR_DEAD( uVar7 )))
        {
            GET_CAR_COORDINATES( uVar7, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            GET_CAR_HEADING( uVar7, ref uVar11 );
            sub_29966( uParam0, uParam3, uVar8, uVar11, uParam4 );
        }
    }
    return;
}

void sub_29966(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8)
{
    unknown uVar11;
    boolean bVar12;

    bVar12 = false;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar11 );
    if (DOES_VEHICLE_EXIST( uVar11 ))
    {
        if (NOT (IS_CAR_DEAD( uVar11 )))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3822(), uVar11 )))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( uVar11 )))
                {
                    SET_CAR_AS_MISSION_CAR( uVar11 );
                    bVar12 = true;
                }
            }
            else
            {
                uVar11 = nil;
            }
        }
    }
    CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
    if (bParam8)
    {
        CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, 1 );
    }
    if (DOES_VEHICLE_EXIST( uVar11 ))
    {
        if (NOT (IS_CAR_DEAD( uVar11 )))
        {
            if (LOCATE_CAR_3D( uVar11, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, uParam3, uParam3, 0 ))
            {
                CLEAR_AREA( uParam4._fU0, uParam4._fU4, uParam4._fU8, 5.00000000, 0 );
                SET_CAR_HEADING( uVar11, uParam7 );
                SET_CAR_COORDINATES( uVar11, uParam4._fU0, uParam4._fU4, uParam4._fU8 );
            }
        }
    }
    if (bVar12)
    {
        if (DOES_VEHICLE_EXIST( uVar11 ))
        {
            sub_30281( uVar11 );
        }
    }
    return;
}

void sub_30281(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_30848(int iParam0, unknown uParam1)
{
    int Result;

    for ( Result = 0; Result < (uParam1^); Result++ )
    {
        if (NOT (iParam0 == nil))
        {
            if ((uParam1^)[Result]._fU12 == iParam0)
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_32038()
{
    float fVar2;

    fVar2 = 99999.90000000;
    if (NOT (g_U30206 == nil))
    {
        l_U1705 = g_U30206;
        g_U30206 = nil;
    }
    if (NOT (IS_CHAR_INJURED( g_U30208 )))
    {
        g_U30206 = g_U30208;
        fVar2 = 0.00000000;
        PRINTSTRING( "GET_NEAREST_DANCER() - mission dance ped" );
        PRINTNL();
    }
    sub_32182( ref l_U1385, ref fVar2 );
    sub_32182( ref l_U139, ref fVar2 );
    if (g_U30206 == nil)
    {
        PRINTSTRING( "GET_NEAREST_DANCER() - none found" );
        PRINTNL();
        g_U30109 = 1;
    }
    return;
}

void sub_32182(unknown uParam0, unknown uParam1)
{
    int I;
    float fVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    if (IS_PLAYER_PLAYING( sub_985() ))
    {
        GET_CHAR_COORDINATES( sub_3822(), ref vVar6.x, ref vVar6.y, ref vVar6.z );
    }
    for ( I = 0; I < (uParam0^); I++ )
    {
        if ((uParam0^)[I]._fU0)
        {
            if (((uParam0^)[I]._fU4 == 12) || ((uParam0^)[I]._fU4 == 10))
            {
                if (sub_32296( (uParam0^)[I]._fU52 ))
                {
                    if ((uParam0^)[I]._fU16 == 0)
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU24 )))
                        {
                            GET_CHAR_COORDINATES( (uParam0^)[I]._fU24, ref vVar9.x, ref vVar9.y, ref vVar9.z );
                            uVar12 = {vVar9 - vVar6};
                            fVar5 = VMAG( uVar12 );
                            if (fVar5 < (uParam1^))
                            {
                                g_U30206 = l_U139[I]._fU24;
                                (uParam1^) = fVar5;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_32296(int iParam0)
{
    if ((iParam0 == 4) || ((iParam0 == 3) || (iParam0 == 1)))
    {
        return 1;
    }
    return 0;
}

void sub_32589()
{
    int I;
    vector vVar3;
    vector vVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;
    float fVar14;

    fVar12 = 1E7;
    fVar13 = 999999.80000000;
    l_U1703 = nil;
    l_U1704 = nil;
    if (IS_PLAYER_PLAYING( sub_985() ))
    {
        GET_CHAR_COORDINATES( sub_3822(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        if (sub_4107( sub_3822(), l_U1660, 0 ))
        {
            for ( I = 0; I < l_U139; I++ )
            {
                if (l_U139[I]._fU4 == 8)
                {
                    if (NOT (IS_CHAR_INJURED( l_U139[I]._fU24 )))
                    {
                        GET_CHAR_COORDINATES( l_U139[I]._fU24, ref vVar6.x, ref vVar6.y, ref vVar6.z );
                        uVar9 = {vVar6 - vVar3};
                        if ((ABSF( uVar9._fU8 )) < 4.00000000)
                        {
                            fVar14 = VMAG( uVar9 );
                            if (fVar14 < fVar12)
                            {
                                fVar13 = fVar12;
                                l_U1704 = l_U1703;
                                l_U1703 = l_U139[I]._fU24;
                                fVar12 = fVar14;
                            }
                            else if (fVar14 < fVar13)
                            {
                                fVar13 = fVar14;
                                l_U1704 = l_U139[I]._fU24;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_32928()
{
    if (NOT l_U1613)
    {
        if (IS_PLAYER_PLAYING( sub_985() ))
        {
            if ((NOT (g_U30192[l_U1660] == 1)) AND (g_U30093[l_U1660]))
            {
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3822() )))
                {
                    if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (NOT sub_27935()))
                    {
                        switch (l_U1660)
                        {
                            case 0:
                            if (IS_CHAR_IN_AREA_3D( sub_3822(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 ))
                            {
                                PRINT_HELP( "CLUB_KICKED" );
                                l_U1613 = 1;
                            }
                            break;
                            case 1:
                            if (IS_CHAR_IN_AREA_3D( sub_3822(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 ))
                            {
                                PRINT_HELP( "CLUB_KICKED" );
                                l_U1613 = 1;
                            }
                            break;
                            case 2:
                            if (IS_CHAR_IN_AREA_3D( sub_3822(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 ))
                            {
                                PRINT_HELP( "CLUB_KICKED" );
                                l_U1613 = 1;
                            }
                            break;
                        }
                    }
                }
            }
        }
    }
    else
    {
        switch (l_U1660)
        {
            case 0:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3822(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 )))
            {
                l_U1613 = 0;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3822(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 )))
            {
                l_U1613 = 0;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3822(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 )))
            {
                l_U1613 = 0;
            }
            break;
        }
        if (NOT l_U1613)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLUB_KICKED" ))
            {
                CLEAR_HELP();
            }
        }
    }
    return;
}

void sub_33597()
{
    if (NOT l_U1612)
    {
        if (IS_PLAYER_PLAYING( sub_985() ))
        {
            if (NOT g_U30093[l_U1660])
            {
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3822() )))
                {
                    if (IS_WANTED_LEVEL_GREATER( sub_985(), 0 ))
                    {
                        if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (NOT sub_27935()))
                        {
                            switch (l_U1660)
                            {
                                case 0:
                                if (IS_CHAR_IN_AREA_3D( sub_3822(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 ))
                                {
                                    PRINT_HELP( "CLUB_WANTED" );
                                    l_U1612 = 1;
                                }
                                break;
                                case 1:
                                if (IS_CHAR_IN_AREA_3D( sub_3822(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 ))
                                {
                                    PRINT_HELP( "CLUB_WANTED" );
                                    l_U1612 = 1;
                                }
                                break;
                                case 2:
                                if (IS_CHAR_IN_AREA_3D( sub_3822(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 ))
                                {
                                    PRINT_HELP( "CLUB_WANTED" );
                                    l_U1612 = 1;
                                }
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        switch (l_U1660)
        {
            case 0:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3822(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 )))
            {
                l_U1612 = 0;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3822(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 )))
            {
                l_U1612 = 0;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3822(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 )))
            {
                l_U1612 = 0;
            }
            break;
        }
        if (NOT l_U1612)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLUB_WANTED" ))
            {
                CLEAR_HELP();
            }
        }
    }
    return;
}

void sub_34269()
{
    boolean bVar2;

    if ((NOT g_U30093[l_U1660]) AND (IS_PLAYER_PLAYING( sub_985() )))
    {
        if ((NOT g_U43025) AND ((NOT (IS_WANTED_LEVEL_GREATER( sub_985(), 0 ))) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3822() )))))
        {
            if (NOT l_U1609)
            {
                if (NOT l_U1596)
                {
                    if (NOT (sub_4135( sub_3822(), l_U1660 )))
                    {
                        if (sub_34399( sub_3822() ))
                        {
                            switch (l_U1660)
                            {
                                case 0:
                                if (IS_CHAR_IN_AREA_3D( sub_3822(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 ))
                                {
                                    bVar2 = true;
                                }
                                break;
                                case 1:
                                if (IS_CHAR_IN_AREA_3D( sub_3822(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 ))
                                {
                                    bVar2 = true;
                                }
                                break;
                                case 2:
                                if (IS_CHAR_IN_AREA_3D( sub_3822(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 ))
                                {
                                    bVar2 = true;
                                }
                                break;
                            }
                        }
                    }
                    if (bVar2)
                    {
                        if (NOT sub_34851())
                        {
                            TASK_SWAP_WEAPON( sub_3822(), 0 );
                            l_U1665++;
                            PRINT_HELP( "STR_WEA" );
                            l_U1596 = 1;
                            l_U1609 = 1;
                        }
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( sub_3822(), 127, ref l_U1725 );
                    if (l_U1725 == 7)
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_3822(), 0, 0 );
                        l_U1596 = 0;
                    }
                }
            }
            else
            {
                switch (l_U1660)
                {
                    case 0:
                    if (NOT (IS_CHAR_IN_AREA_3D( sub_3822(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 )))
                    {
                        l_U1609 = 0;
                    }
                    break;
                    case 1:
                    if (NOT (IS_CHAR_IN_AREA_3D( sub_3822(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 )))
                    {
                        l_U1609 = 0;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_IN_AREA_3D( sub_3822(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 )))
                    {
                        l_U1609 = 0;
                    }
                    break;
                }
            }
        }
    }
    return;
}

int sub_34399(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    vVar3 = {sub_18490( l_U1660 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam0, 0.00000000, 1.00000000, 0.00000000, ref vVar9.x, ref vVar9.y, ref vVar9.z );
        uVar12 = {vVar3 - vVar6};
        uVar12._fU8 = 0.00000000;
        uVar15 = {vVar9 - vVar6};
        uVar15._fU8 = 0.00000000;
        if (((VMAG2( uVar12 )) > 0.50000000) AND ((sub_34541( uVar12, uVar15 )) > 0.00000000))
        {
            return 1;
        }
    }
    return 0;
}

float sub_34541(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return ((uParam0._fU0 * uParam3._fU0) + (uParam0._fU4 * uParam3._fU4)) + (uParam0._fU8 * uParam3._fU8);
}

int sub_34851()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_3822() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_3822(), ref iVar2 );
        if ((iVar2 == 41) || ((iVar2 == 46) || ((iVar2 == 45) || (iVar2 == 0))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_35286()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT g_U30101)
    {
        if (NOT l_U1597)
        {
            if (sub_18479( sub_3822(), l_U1660, 1094713344 ))
            {
                if ((sub_35354()) || (IS_CHAR_SHOOTING( sub_3822() )))
                {
                    g_U30093[l_U1660] = 1;
                    PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - shots fired inside club" );
                    PRINTNL();
                    GET_GAME_TIMER( ref l_U1702 );
                    l_U1597 = 1;
                }
            }
        }
    }
    if (NOT g_U30093[l_U1660])
    {
        if (IS_PLAYER_PLAYING( sub_985() ))
        {
            if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0) || (sub_18479( sub_3822(), l_U1660, 1094713344 )))
            {
                sub_35858( ref l_U1385 );
                sub_35858( ref l_U139 );
            }
            if (sub_4107( sub_3822(), l_U1660, 0 ))
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3822() ))
                {
                    PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - player is in a car inside the club" );
                    PRINTNL();
                    g_U30093[l_U1660] = 1;
                }
            }
        }
    }
    else if (NOT l_U1601)
    {
        sub_35858( ref l_U1385 );
        sub_35858( ref l_U139 );
    }
    return;
}

int sub_35354()
{
    switch (l_U1660)
    {
        case 0:
        if ((IS_BULLET_IN_BOX( -398.38180000, 411.76870000, 4.22430000, -383.38180000, 434.24370000, 8.17430000, 0 )) || ((IS_BULLET_IN_BOX( -384.02620000, 431.87570000, 4.64940000, -368.82620000, 442.87570000, 8.74940000, 0 )) || (IS_BULLET_IN_BOX( -398.50490000, 401.49280000, 3.67440000, -378.30490000, 440.81780000, 7.67440000, 0 ))))
        {
            return 1;
        }
        break;
        case 1:
        if (IS_BULLET_IN_BOX( -490.11110000, 138.91470000, 6.40490000, -468.06110000, 166.93970000, 14.45490000, 0 ))
        {
            return 1;
        }
        break;
        case 2:
        if (IS_BULLET_IN_BOX( -439.94970000, 347.42230000, 9.81670000, -423.12470000, 356.29730000, 15.11670000, 0 ))
        {
            return 1;
        }
        break;
    }
    return 0;
}

void sub_35858(unknown uParam0)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if ((uParam0^)[I]._fU0)
        {
            if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU24 )))
            {
                if (NOT g_U30153)
                {
                    if (NOT sub_34851())
                    {
                        if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_985(), (uParam0^)[I]._fU24 )) || (IS_PLAYER_TARGETTING_CHAR( sub_985(), (uParam0^)[I]._fU24 )))
                        {
                            g_U30093[l_U1660] = 1;
                            PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - targetting ped" );
                            PRINTNL();
                            l_U1601 = 1;
                            if (((uParam0^)[I]._fU4 == 9) || ((uParam0^)[I]._fU4 == 8))
                            {
                                g_U30145[l_U1660] = 1;
                                l_U1601 = 1;
                            }
                        }
                    }
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^)[I]._fU24, sub_3822(), 0 ))
                    {
                        if ((((uParam0^)[I]._fU4 == 9) || ((uParam0^)[I]._fU4 == 8)) || (l_U1660 == 0))
                        {
                            PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - player damaged a club ped" );
                            PRINTNL();
                            g_U30093[l_U1660] = 1;
                            if (((uParam0^)[I]._fU4 == 9) || ((uParam0^)[I]._fU4 == 8))
                            {
                                g_U30145[l_U1660] = 1;
                                l_U1601 = 1;
                            }
                        }
                    }
                    if (((uParam0^)[I]._fU4 == 9) || ((uParam0^)[I]._fU4 == 8))
                    {
                        if (IS_PED_IN_COMBAT( (uParam0^)[I]._fU24 ))
                        {
                            PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - bouncers are in combat" );
                            PRINTNL();
                            g_U30093[l_U1660] = 1;
                            l_U1601 = 1;
                            g_U30145[l_U1660] = 1;
                        }
                    }
                }
            }
            else if (((uParam0^)[I]._fU4 == 9) || ((uParam0^)[I]._fU4 == 8))
            {
                g_U30145[l_U1660] = 1;
                l_U1601 = 1;
            }
        }
    }
    if (l_U1601)
    {
        if (NOT l_U1602)
        {
            sub_36597();
            l_U1602 = 1;
        }
    }
    return;
}

void sub_36597()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < l_U139; I++ )
    {
        if ((l_U139[I]._fU4 == 9) || (l_U139[I]._fU4 == 8))
        {
            if (NOT (IS_CHAR_INJURED( l_U139[I]._fU24 )))
            {
                if ((l_U139[I]._fU48 == 1662473323) || (l_U139[I]._fU48 == -1446884113))
                {
                    GIVE_WEAPON_TO_CHAR( l_U139[I]._fU24, 12, 999, 0 );
                }
                else
                {
                    GIVE_WEAPON_TO_CHAR( l_U139[I]._fU24, 7, 999, 0 );
                }
            }
        }
    }
    return;
}

void sub_37007()
{
    unknown uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    boolean bVar7;
    int iVar8;
    int I;

    bVar7 = false;
    if (sub_4107( sub_3822(), l_U1660, 0 ))
    {
        if (sub_37040())
        {
            if ((NOT l_U1604) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dancing" )) == 0))
            {
                if (NOT g_U30093[l_U1660])
                {
                    if (sub_37497( sub_3822() ))
                    {
                        if (NOT (IS_PED_IN_COMBAT( sub_3822() )))
                        {
                            if (NOT (IS_CHAR_DUCKING( sub_3822() )))
                            {
                                if (sub_34851())
                                {
                                    if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_985() ))
                                    {
                                        bVar7 = true;
                                    }
                                }
                            }
                        }
                    }
                }
                GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref iVar5, ref iVar6 );
                if (iVar5 < 0)
                {
                    iVar5 *= -1;
                }
                if (iVar6 < 0)
                {
                    iVar6 *= -1;
                }
                if (bVar7)
                {
                    if ((iVar4 < 10) AND (iVar3 < 10))
                    {
                        ;
                    }
                }
                iVar8 = 1;
                if (g_U12379)
                {
                    if ((NOT g_U30105) AND (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony1" )) > 0)))
                    {
                        iVar8 = 0;
                    }
                }
                if ((g_U10953._fU4) || (IS_AUTO_SAVE_IN_PROGRESS()))
                {
                    iVar8 = 0;
                }
                if (IS_CHAR_DEAD( sub_3822() ))
                {
                    iVar8 = 0;
                }
                if (NOT (IS_PLAYER_PLAYING( sub_985() )))
                {
                    iVar8 = 0;
                }
                if (g_U12381)
                {
                    iVar8 = 0;
                }
                if ((sub_37871()) || (sub_28002()))
                {
                    iVar8 = 0;
                }
                if (NOT g_U22957)
                {
                    iVar8 = 0;
                }
                if (NOT (CAN_PLAYER_START_MISSION( sub_985() )))
                {
                    iVar8 = 0;
                }
                if (NOT (sub_37954( 1, 1 )))
                {
                    iVar8 = 0;
                }
                if (IS_BIT_SET( g_U10938._fU0, 4 ))
                {
                    iVar8 = 0;
                }
                if (NOT sub_38273())
                {
                    iVar8 = 0;
                }
                if (NOT (IS_CHAR_INJURED( g_U30208 )))
                {
                    l_U1709 = g_U30208;
                }
                if (NOT (IS_CHAR_INJURED( l_U1709 )))
                {
                    if (LOCATE_CHAR_ON_FOOT_3D( l_U1709, l_U1791._fU0, l_U1791._fU4, l_U1791._fU8, 0.70000000, 0.70000000, 2.50000000, 0 ))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1709, sub_3822(), 0 ))
                        {
                            iVar8 = 0;
                        }
                    }
                    else
                    {
                        iVar8 = 0;
                    }
                }
                else
                {
                    iVar8 = 0;
                }
                if (g_U30105)
                {
                    SET_PLAYER_CONTROL( sub_985(), 1 );
                }
                if (sub_25742( sub_3822() ))
                {
                    iVar8 = 0;
                }
                if ((iVar8) AND ((sub_38526( 2, 0 )) AND ((g_U30105) || (bVar7))))
                {
                    l_U1724 = "DANC_H01";
                    if ((g_U30105) || ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT l_U1598)))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1709 )))
                        {
                            if (l_U1689 > 30000)
                            {
                                SAY_AMBIENT_SPEECH( l_U1709, "DANCING_GAME_ASK", 1, 1, 2 );
                                TASK_LOOK_AT_CHAR( l_U1709, sub_3822(), 5000, 0 );
                                PRINTSTRING( "SAY_AMBIENT_SPEECH - DANCING_GAME_ASK" );
                                PRINTNL();
                                l_U1689 = 0;
                            }
                        }
                        if ((g_U30105) || (sub_39010( 2, l_U1724, 0 )))
                        {
                            g_U30206 = l_U1709;
                            g_U30190 = l_U1660;
                            l_U1633 = 0;
                            START_NEW_SCRIPT( "dancing", 1024 );
                            l_U1598 = 1;
                            l_U1604 = 1;
                            sub_715( 2, l_U1724 );
                            SET_PLAYER_CONTROL( sub_985(), 0 );
                        }
                    }
                    else if (NOT (IS_CONTROL_PRESSED( 2, 23 )))
                    {
                        l_U1598 = 0;
                    }
                }
                else if (NOT (sub_25914( l_U1724 )))
                {
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U1724 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1709 )))
                        {
                            SAY_AMBIENT_SPEECH( l_U1709, "DANCING_REJECTED", 1, 1, 2 );
                            PRINTSTRING( "SAY_AMBIENT_SPEECH - DANCING_GAME_ASK" );
                            PRINTNL();
                        }
                    }
                }
                sub_715( 2, l_U1724 );;
            }
            else if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dancing" )) == 0)
            {
                if (g_U30106)
                {
                    if (NOT l_U1633)
                    {
                        switch (l_U1660)
                        {
                            case 1:
                            switch (l_U1672)
                            {
                                case 0:
                                if (IS_PLAYER_PLAYING( sub_985() ))
                                {
                                    SET_PLAYER_CONTROL( sub_985(), 1 );
                                }
                                REQUEST_SCRIPT( "toilet_activity" );
                                if (NOT IS_SCREEN_FADED_OUT())
                                {
                                    if (NOT IS_SCREEN_FADING())
                                    {
                                        DO_SCREEN_FADE_OUT( 1000 );
                                    }
                                }
                                else if (HAS_SCRIPT_LOADED( "toilet_activity" ))
                                {
                                    g_U30205 = g_U30206;
                                    g_U30191 = 0;
                                    START_NEW_SCRIPT( "toilet_activity", 512 );
                                    l_U1672++;
                                }
                                break;
                                case 1:
                                if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "toilet_activity" )) == 0)
                                {
                                    if (IS_PLAYER_PLAYING( sub_985() ))
                                    {
                                        SET_PLAYER_CONTROL( sub_985(), 1 );
                                    }
                                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "toilet_activity" );
                                    PRINTSTRING( "Reset Dancing Globals after toilet activity" );
                                    PRINTNL();
                                    sub_40338();
                                    l_U1604 = 0;
                                    l_U1672 = 0;
                                }
                                break;
                            }
                            break;
                            case 0:
                            l_U1604 = 0;
                            l_U1672 = 0;
                            break;
                            case 2:
                            PRINTSTRING( "Reset Dancing Globals - passed, hercules" );
                            PRINTNL();
                            l_U1604 = 0;
                            l_U1672 = 0;
                            sub_40338();
                            break;
                        }
                    }
                    else
                    {
                        l_U1604 = 0;
                        l_U1672 = 0;
                        sub_40338();
                    }
                }
                else if (g_U30107)
                {
                    switch (l_U1660)
                    {
                        case 1:
                        sub_40338();
                        l_U1604 = 0;
                        break;
                        case 0:
                        l_U1604 = 0;
                        break;
                        case 2:
                        sub_40338();
                        l_U1604 = 0;
                        break;
                    }
                    for ( I = 0; I < l_U1385; I++ )
                    {
                        if (l_U1385[I]._fU0)
                        {
                            if (l_U1385[I]._fU4 == 12)
                            {
                                sub_2521( ref l_U1385[I], 1 );
                            }
                        }
                    }
                    for ( I = 0; I < l_U139; I++ )
                    {
                        if (l_U139[I]._fU0)
                        {
                            if (l_U139[I]._fU4 == 12)
                            {
                                sub_2521( ref l_U139[I], 1 );
                            }
                        }
                    }
                }
                else
                {
                    sub_40338();
                    l_U1604 = 0;
                }
            }
            else if (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "busstop" )) == 0))
            {
                l_U1633 = 1;
            };;;
        }
    }
    return;
}

int sub_37040()
{
    switch (l_U1660)
    {
        case 2:
        REQUEST_SCRIPT( "dancing" );
        REQUEST_ANIMS( "missamb_herc_female" );
        REQUEST_ANIMS( "missamb_herc_male" );
        if ((HAVE_ANIMS_LOADED( "missamb_herc_male" )) AND ((HAVE_ANIMS_LOADED( "missamb_herc_female" )) AND (HAS_SCRIPT_LOADED( "dancing" ))))
        {
            return 1;
        }
        break;
        case 1:
        REQUEST_SCRIPT( "dancing" );
        REQUEST_ANIMS( "missamb_m9" );
        if ((HAVE_ANIMS_LOADED( "missamb_m9" )) AND (HAS_SCRIPT_LOADED( "dancing" )))
        {
            return 1;
        }
        break;
        case 0:
        REQUEST_SCRIPT( "dancing" );
        REQUEST_ANIMS( "missamb_bama" );
        if ((HAVE_ANIMS_LOADED( "missamb_bama" )) AND (HAS_SCRIPT_LOADED( "dancing" )))
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_37497(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_AREA_3D( uParam0, l_U126._fU4._fU0, l_U126._fU4._fU4, l_U126._fU4._fU8, l_U126._fU16._fU0, l_U126._fU16._fU4, l_U126._fU16._fU8, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_37871()
{
    if (g_U560 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_37954(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3822() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3822(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3822() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3822(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3822()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3822() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3822() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_985() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_985() )))
    {
        return 0;
    }
    return 1;
}

int sub_38273()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

int sub_38526(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_985() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_985() )))
            {
                if (((g_U9200) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_985() )))))
                {
                    if (NOT sub_38622())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_3822() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_38707())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_38622()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_38707()
{
    return sub_38718( 0, 0 );
}

int sub_38718(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((g_U560 != 9) AND (uParam1))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

int sub_39010(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_38526( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_985(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_39285();
                l_U3 = 1;
                g_U10535 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U10535 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U2 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U2)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U2 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_39285()
{
    return sub_38718( 1, 1 );
}

void sub_40338()
{
    g_U30105 = 0;
    g_U30106 = 0;
    g_U30107 = 0;
    g_U30108 = 0;
    PRINTSTRING( "RESET_DANCING_GLOBALS() - Called" );
    PRINTNL();
    return;
}

void sub_40951(int iParam0)
{
    if (iParam0->_fU0)
    {
        if (NOT (iParam0->_fU24 == g_U30207))
        {
            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
            {
                if (IS_CHAR_IN_AREA_3D( iParam0->_fU24, g_U30251._fU0, g_U30251._fU4, g_U30251._fU8, g_U30254._fU0, g_U30254._fU4, g_U30254._fU8, 0 ))
                {
                    sub_41068( iParam0, 1 );
                }
            }
        }
    }
    return;
}

void sub_41068(int iParam0, boolean bParam1)
{
    int iVar4;

    iVar4 = 1;
    if ((bParam1) AND (iParam0->_fU24 == g_U30208))
    {
        if (DOES_CHAR_EXIST( iParam0->_fU24 ))
        {
            PRINTSTRING( "Deleting g_MissionDancePedID" );
            PRINTNL();
            DELETE_CHAR( iParam0 + 24 );
        }
    }
    if ((iParam0->_fU24 == nil) || (NOT (iParam0->_fU24 == g_U30208)))
    {
        if (NOT (sub_2552( iParam0->_fU24 )))
        {
            if (DOES_CHAR_EXIST( iParam0->_fU24 ))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                {
                    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 26, ref l_U1725 );
                    if (NOT (l_U1725 == 7))
                    {
                        if (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))
                        {
                            iVar4 = 0;
                        }
                    }
                    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 91, ref l_U1725 );
                    if (NOT (l_U1725 == 7))
                    {
                        iVar4 = 0;
                    }
                    if (IS_PLAYER_PLAYING( sub_985() ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3822(), iParam0->_fU24, 5.00000000, 5.00000000, 2.00000000, 0 ))
                        {
                            if (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))
                            {
                                iVar4 = 0;
                            }
                        }
                    }
                }
                if (l_U1611)
                {
                    if (NOT (sub_4135( sub_3822(), l_U1660 )))
                    {
                        bParam1 = true;
                    }
                }
                if ((bParam1) || (iVar4))
                {
                    iParam0->_fU8 = 0;
                    iParam0->_fU12 = 0;
                    if (l_U1599)
                    {
                        PRINTSTRING( "CLUB_PED_REMOVED - called from REMOVE_CLUB_PED" );
                        PRINTNL();
                    }
                    sub_2521( iParam0, 1 );
                    sub_41548( iParam0 );
                }
            }
            else if (bParam1)
            {
                iParam0->_fU8 = 0;
                iParam0->_fU12 = 0;
                iParam0->_fU16 = 0;
            }
        }
    }
    return;
}

void sub_41548(int iParam0)
{
    if (NOT (iParam0->_fU48 == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( iParam0->_fU48 );
    }
    switch (iParam0->_fU4)
    {
        case 10:
        case 12:
        sub_41614();
        break;
        default:
        REMOVE_ANIMS( "missnightclub" );
        break;
    }
    return;
}

void sub_41614()
{
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "dancing" );
    return;
}

void sub_42096()
{
    PRINTSTRING( "RESET_CLUB_VARIABLES() - called" );
    PRINTNL();
    l_U1596 = 0;
    l_U1597 = 0;
    l_U1598 = 0;
    l_U1600 = 0;
    l_U1601 = 0;
    l_U1602 = 0;
    l_U1603 = 0;
    l_U1604 = 0;
    l_U1605 = 0;
    sub_2042();
    g_U30102 = 0;
    g_U30103 = 0;
    l_U1659 = 0;
    l_U1657 = 0;
    l_U1658 = 0;
    l_U1661 = 0;
    l_U1665 = 0;
    l_U1667 = 0;
    l_U1668 = 0;
    l_U1669 = 0;
    sub_5883();
    return;
}

void sub_42341(int iParam0)
{
    if (iParam0->_fU0)
    {
        iParam0->_fU20 += l_U1670;
        if (iParam0->_fU8 == 0)
        {
            if (DOES_CHAR_EXIST( iParam0->_fU24 ))
            {
                sub_41068( iParam0, 0 );
            }
            else if (NOT l_U1597)
            {
                if (iParam0->_fU20 > 0)
                {
                    switch (iParam0->_fU4)
                    {
                        case 1:
                        case 4:
                        case 5:
                        case 8:
                        case 10:
                        case 12:
                        if (((sub_29498()) || (NOT g_U30103)) AND ((sub_28713( sub_3822(), l_U1660 )) || (sub_4107( sub_3822(), l_U1660, 1 ))))
                        {
                            iParam0->_fU8 = 1;
                        }
                        break;
                        case 14:
                        if ((NOT g_U30180) AND (NOT l_U1636))
                        {
                            if ((NOT l_U1619) AND (NOT g_U30102))
                            {
                                if (NOT (sub_42656( sub_3822(), l_U1660 )))
                                {
                                    iParam0->_fU8 = 1;
                                }
                            }
                        }
                        else if (g_U30180)
                        {
                            if ((NOT g_U12379) AND (NOT g_U30153))
                            {
                                g_U30180 = 0;
                            }
                        }
                        break;
                        case 2:
                        case 9:
                        case 13:
                        if (sub_42789( (iParam0^) ))
                        {
                            iParam0->_fU8 = 1;
                        }
                        else if (NOT g_U30102)
                        {
                            if (NOT (sub_42656( sub_3822(), l_U1660 )))
                            {
                                iParam0->_fU8 = 1;
                            }
                        }
                        break;
                        case 6:
                        case 7:
                        if ((NOT l_U1619) AND (NOT g_U30102))
                        {
                            if (NOT (sub_42656( sub_3822(), l_U1660 )))
                            {
                                iParam0->_fU8 = 1;
                            }
                        }
                        break;
                    }
                }
            }
        }
        if (iParam0->_fU8 == 1)
        {
            if ((sub_42962( iParam0 )) AND (NOT l_U1597))
            {
                switch (iParam0->_fU4)
                {
                    case 1:
                    case 5:
                    case 8:
                    case 10:
                    case 12:
                    if (sub_4107( sub_3822(), l_U1660, 1 ))
                    {
                        if (((sub_29498()) || (NOT g_U30103)) AND ((sub_28713( sub_3822(), l_U1660 )) AND (sub_43117( iParam0 ))))
                        {
                            sub_43936( iParam0 );
                        }
                    }
                    else
                    {
                        sub_41068( iParam0, 0 );
                    }
                    break;
                    case 14:
                    if (sub_51387( sub_3822(), l_U1660 ))
                    {
                        if (sub_43117( iParam0 ))
                        {
                            sub_43936( iParam0 );
                        }
                    }
                    break;
                    case 2:
                    case 13:
                    if (sub_43117( iParam0 ))
                    {
                        if (sub_51474( sub_3822(), l_U1660 ))
                        {
                            if (NOT g_U30102)
                            {
                                if (NOT l_U1597)
                                {
                                    sub_43936( iParam0 );
                                }
                            }
                        }
                    }
                    break;
                    case 9:
                    if (sub_43117( iParam0 ))
                    {
                        if ((sub_42789( (iParam0^) )) || (sub_51474( sub_3822(), l_U1660 )))
                        {
                            if ((sub_42789( (iParam0^) )) || (NOT g_U30102))
                            {
                                sub_43936( iParam0 );
                            }
                        }
                    }
                    break;
                    case 6:
                    if ((sub_4135( sub_3822(), l_U1660 )) || (sub_51474( sub_3822(), l_U1660 )))
                    {
                        if (sub_43117( iParam0 ))
                        {
                            sub_43936( iParam0 );
                        }
                    }
                    break;
                    case 4:
                    if (sub_4107( sub_3822(), l_U1660, 1 ))
                    {
                        if ((NOT g_U30103) AND ((sub_28713( sub_3822(), l_U1660 )) AND (sub_43117( iParam0 ))))
                        {
                            sub_43936( iParam0 );
                        }
                    }
                    else
                    {
                        sub_41068( iParam0, 0 );
                    }
                    break;
                    case 7:
                    if (sub_51387( sub_3822(), l_U1660 ))
                    {
                        if (sub_43117( iParam0 ))
                        {
                            sub_43936( iParam0 );
                        }
                    }
                    break;
                }
            }
        }
        if (iParam0->_fU8 == 2)
        {
            if (l_U1597)
            {
                sub_52092( iParam0 );
            }
            else
            {
                switch (iParam0->_fU4)
                {
                    case 1:
                    case 5:
                    case 8:
                    case 10:
                    case 12:
                    if (((sub_29498()) || (NOT g_U30103)) AND (sub_28713( sub_3822(), l_U1660 )))
                    {
                        sub_52092( iParam0 );
                    }
                    else
                    {
                        sub_41068( iParam0, 0 );
                    }
                    break;
                    case 14:
                    sub_52092( iParam0 );
                    break;
                    case 6:
                    if (NOT (sub_42656( sub_3822(), l_U1660 )))
                    {
                        sub_52092( iParam0 );
                    }
                    else
                    {
                        sub_41068( iParam0, 0 );
                    }
                    break;
                    case 4:
                    if ((NOT g_U30103) AND (sub_28713( sub_3822(), l_U1660 )))
                    {
                        sub_52092( iParam0 );
                    }
                    else
                    {
                        sub_41068( iParam0, 0 );
                    }
                    break;
                    case 2:
                    case 9:
                    case 13:
                    if (sub_42789( (iParam0^) ))
                    {
                        sub_52092( iParam0 );
                    }
                    else if ((NOT g_U30102) AND (sub_51474( sub_3822(), l_U1660 )))
                    {
                        sub_52092( iParam0 );
                    }
                    else
                    {
                        sub_41068( iParam0, 0 );
                    }
                    break;
                    case 7:
                    if (sub_51387( sub_3822(), l_U1660 ))
                    {
                        sub_52092( iParam0 );
                    }
                    else
                    {
                        sub_41068( iParam0, 0 );
                    }
                    break;
                }
            }
        }
    }
    else if (DOES_CHAR_EXIST( iParam0->_fU24 ))
    {
        sub_41068( iParam0, 0 );
    }
    else if (NOT g_U30097[l_U1660])
    {
        if (NOT (iParam0->_fU4 == 0))
        {
            if (IS_SCREEN_FADED_OUT())
            {
                iParam0->_fU0 = 1;
            }
            else if ((NOT (iParam0->_fU4 == 9)) AND ((NOT (iParam0->_fU4 == 13)) AND ((NOT (iParam0->_fU4 == 2)) AND (NOT (sub_4107( sub_3822(), l_U1660, 0 ))))))
            {
                iParam0->_fU0 = 1;
            }
            else if (NOT (sub_27042( iParam0->_fU28, 1.50000000 )))
            {
                iParam0->_fU0 = 1;
            };;;
        }
    };;;
    return;
}

int sub_42656(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (sub_4135( uParam0, uParam1 )))
        {
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar4 );
            if (NOT (iVar4 == nil))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_42789(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14)
{
    if ((uParam0._fU52 == 10) || (uParam0._fU52 == 9))
    {
        return 1;
    }
    return 0;
}

int sub_42962(unknown uParam0)
{
    return 1;
}

int sub_43117(int iParam0)
{
    int iVar3;

    if (iParam0->_fU0)
    {
        iVar3 = sub_43138( iParam0 );
        if (NOT (iVar3 == 0))
        {
            REQUEST_MODEL( iVar3 );
            REQUEST_ANIMS( "missnightclub" );
            if (HAS_MODEL_LOADED( iVar3 ))
            {
                return 1;
            }
            else if (IS_SCREEN_FADED_OUT())
            {
                if (NOT g_U30176)
                {
                    LOAD_ALL_OBJECTS_NOW();
                }
            }
        }
        else
        {
            PRINTSTRING( "ARE_ASSETS_LOADED_FOR_CREATING_CLUB_PED - " );
            if (l_U1608)
            {
                PRINTSTRING( "global club ped " );
                PRINTINT( l_U1673 );
            }
            else
            {
                PRINTSTRING( "club ped " );
                PRINTINT( l_U1673 );
            }
            PRINTNL();
            SCRIPT_ASSERT( "ARE_ASSETS_LOADED_FOR_CREATING_CLUB_PED - trying to load DUMMY_MODEL_FOR_SCRIPT" );
        }
    }
    return 0;
}

void sub_43138(int iParam0)
{
    if ((iParam0->_fU4 == 7) || ((iParam0->_fU4 == 6) || ((iParam0->_fU4 == 13) || ((iParam0->_fU4 == 2) || (g_U30162[l_U1660])))))
    {
        if ((iParam0->_fU52 == 6) || ((iParam0->_fU52 == 5) || (iParam0->_fU52 == 2)))
        {
            iParam0->_fU48 = l_U1714;
            return iParam0->_fU48;
        }
        if ((iParam0->_fU52 == 4) || ((iParam0->_fU52 == 3) || (iParam0->_fU52 == 1)))
        {
            iParam0->_fU48 = l_U1717;
            return iParam0->_fU48;
        }
    }
    if (NOT (iParam0->_fU52 == 0))
    {
        iParam0->_fU48 = sub_23071( iParam0->_fU52 );
    }
    if (iParam0->_fU48 == 0)
    {
        if (l_U1599)
        {
            PRINTSTRING( "inPed.iModel = " );
            PRINTINT( iParam0->_fU52 );
            PRINTNL();
            if (l_U1608)
            {
                PRINTSTRING( "Global iClubPedBeingProcessed = " );
                PRINTINT( l_U1673 );
                PRINTNL();
            }
            else
            {
                PRINTSTRING( "iClubPedBeingProcessed = " );
                PRINTINT( l_U1673 );
                PRINTNL();
            }
        }
    }
    return iParam0->_fU48;
}

void sub_43936(int iParam0)
{
    unknown uVar3;
    string sVar4;
    unknown uVar5;
    char[16] cVar6;

    if (iParam0->_fU0)
    {
        if ((l_U1624) || (sub_43957( iParam0 )))
        {
            if ((l_U1624) || ((g_U30114[l_U1660]) || (sub_44028( iParam0 ))))
            {
                if ((l_U1624) || (NOT (sub_44859( iParam0->_fU28, g_U30251, g_U30254 ))))
                {
                    if ((l_U1624) || (sub_44959( iParam0 )))
                    {
                        if (HAS_MODEL_LOADED( iParam0->_fU48 ))
                        {
                            if (NOT (DOES_CHAR_EXIST( iParam0->_fU24 )))
                            {
                                if ((l_U1624) || ((sub_4107( sub_3822(), l_U1660, 0 )) || (NOT g_U30093[l_U1660])))
                                {
                                    if (sub_45601( iParam0->_fU56 ))
                                    {
                                        sVar4 = l_U1476[iParam0->_fU56]._fU0;
                                    }
                                    else
                                    {
                                        sVar4 = "";
                                    }
                                    if (NOT (DOES_CHAR_EXIST( iParam0->_fU24 )))
                                    {
                                        CLEAR_AREA( ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.20000000, 0 );
                                        if (NOT (sub_32296( iParam0->_fU52 )))
                                        {
                                            CREATE_CHAR( 4, iParam0->_fU48, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 24, 1 );
                                        }
                                        else
                                        {
                                            CREATE_CHAR( 5, iParam0->_fU48, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 24, 1 );
                                        }
                                        if (DOES_CHAR_EXIST( iParam0->_fU24 ))
                                        {
                                            sub_45851( iParam0 );
                                            if (sub_3221( iParam0->_fU56 ))
                                            {
                                                SET_CHAR_COLLISION( iParam0->_fU24, 0 );
                                                FREEZE_CHAR_POSITION( iParam0->_fU24, 1 );
                                            }
                                            SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam0->_fU24 );
                                            SET_CHAR_HEADING( iParam0->_fU24, iParam0->_fU40 );
                                            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( iParam0->_fU24, 1 );
                                            if ((NOT (iParam0->_fU4 == 13)) AND ((NOT (iParam0->_fU4 == 7)) AND (NOT (iParam0->_fU4 == 2))))
                                            {
                                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU24, 1 );
                                            }
                                            if (sub_3221( iParam0->_fU56 ))
                                            {
                                                SET_CHAR_SUFFERS_CRITICAL_HITS( iParam0->_fU24, 0 );
                                            }
                                            uVar5 = sub_46694( iParam0->_fU28 );
                                            if (NOT (sub_25914( uVar5 )))
                                            {
                                                SET_ROOM_FOR_CHAR_BY_NAME( iParam0->_fU24, uVar5 );
                                            }
                                            SET_PED_ALPHA( iParam0->_fU24, 255 );
                                            if (l_U1608)
                                            {
                                                StrCopy( ref cVar6, "Global Ped ", 16 );
                                            }
                                            else
                                            {
                                                StrCopy( ref cVar6, "Club Ped ", 16 );
                                            }
                                            ConcatString(ref cVar6, l_U1673, 16);
                                            SET_CHAR_NAME_DEBUG( iParam0->_fU24, ref cVar6 );
                                            if (sub_48066( iParam0 ))
                                            {
                                                SET_CHAR_IN_CUTSCENE( iParam0->_fU24, 1 );
                                            }
                                            sub_48116( iParam0->_fU56, iParam0 + 56, -1 );
                                            if (iParam0->_fU52 == 10)
                                            {
                                                SET_CHAR_PROP_INDEX( iParam0->_fU24, 1, 0 );
                                                SET_CHAR_PROP_INDEX( iParam0->_fU24, 0, 0 );
                                            }
                                            if ((iParam0->_fU4 == 12) || (iParam0->_fU4 == 10))
                                            {
                                                SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( iParam0->_fU24, 1 );
                                            }
                                            if (l_U1608)
                                            {
                                                PRINTSTRING( "**** copying ped id back to g_clubped ****" );
                                                PRINTNL();
                                                uVar3 = sub_48828( iParam0->_fU24, ref l_U1385 );
                                                PRINTSTRING( "i = " );
                                                PRINTINT( uVar3 );
                                                PRINTNL();
                                                PRINTSTRING( "iClubPedsFromGlobalSlotNumber[i] = " );
                                                PRINTINT( l_U1676[uVar3] );
                                                PRINTNL();
                                                uVar3 = l_U1676[uVar3];
                                                g_U29971[uVar3]._fU12 = iParam0->_fU24;
                                                PRINTSTRING( "inPed.iModel = " );
                                                PRINTINT( iParam0->_fU52 );
                                                PRINTNL();
                                                PRINTSTRING( "inPed.iType = " );
                                                PRINTINT( iParam0->_fU4 );
                                                PRINTNL();
                                            }
                                            else if ((iParam0->_fU4 == 10) || ((iParam0->_fU4 == 7) || ((iParam0->_fU4 == 6) || ((iParam0->_fU4 == 4) || ((iParam0->_fU4 == 3) || ((iParam0->_fU4 == 2) || (iParam0->_fU4 == 1)))))))
                                            {
                                                ALWAYS_USE_HEAD_ON_HORN_ANIM_WHEN_DEAD_IN_CAR( iParam0->_fU24, 1 );
                                            }
                                            if (l_U1660 == 1)
                                            {
                                                if (NOT (g_U30198 == -1))
                                                {
                                                    if (g_U29971[g_U30198]._fU12 == iParam0->_fU24)
                                                    {
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 1, 0, 0 );
                                                        CLEAR_AREA( ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.00000000, 0 );
                                                        if (DOES_OBJECT_EXIST( l_U1723 ))
                                                        {
                                                            DELETE_OBJECT( ref l_U1723 );
                                                        }
                                                        sub_2922();
                                                    }
                                                }
                                            }
                                            if (iParam0->_fU4 == 12)
                                            {
                                                l_U1709 = iParam0->_fU24;
                                                l_U1791 = {iParam0->_fU28};
                                            }
                                            if (iParam0->_fU4 == 9)
                                            {
                                                switch (l_U1660)
                                                {
                                                    case 2:
                                                    g_U30211 = iParam0->_fU24;
                                                    break;
                                                    case 0:
                                                    if (NOT (DOES_CHAR_EXIST( g_U30213 )))
                                                    {
                                                        g_U30213 = iParam0->_fU24;
                                                    }
                                                    break;
                                                    case 1:
                                                    g_U30212 = iParam0->_fU24;
                                                    break;
                                                }
                                            }
                                            if (l_U1660 == 2)
                                            {
                                                if (NOT (g_U30201 == -1))
                                                {
                                                    if (g_U29971[g_U30201]._fU12 == iParam0->_fU24)
                                                    {
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 0, 0, 1 );
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 1, 0, 1 );
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 2, 0, 0 );
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 3, 1, 0 );
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 7, 0, 1 );
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                                    {
                                        if ((iParam0->_fU4 == 9) || (iParam0->_fU4 == 8))
                                        {
                                            SET_CHAR_DECISION_MAKER( iParam0->_fU24, g_U30183 );
                                            SET_COMBAT_DECISION_MAKER( iParam0->_fU24, g_U30184 );
                                            SET_CHAR_WILL_USE_COVER( iParam0->_fU24, 1 );
                                            SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU24, iParam0->_fU28, 10.00000000 );
                                            SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU24, 23 );
                                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU24, 0 );
                                        }
                                        else
                                        {
                                            SET_CHAR_DECISION_MAKER( iParam0->_fU24, g_U30182 );
                                        }
                                        if (g_U12379)
                                        {
                                            if ((NOT (iParam0->_fU4 == 14)) AND ((NOT (iParam0->_fU4 == 9)) AND ((NOT (iParam0->_fU4 == 5)) AND (NOT (iParam0->_fU4 == 8)))))
                                            {
                                                SET_CHAR_NEVER_TARGETTED( iParam0->_fU24, 1 );
                                            }
                                        }
                                        if (iParam0->_fU4 == 2)
                                        {
                                            if (NOT (sub_25914( sVar4 )))
                                            {
                                                if (COMPARE_STRING( sVar4, "Scenario_SmokingOutsideOffice" ))
                                                {
                                                    if (sub_32296( iParam0->_fU52 ))
                                                    {
                                                        GIVE_PED_AMBIENT_OBJECT( iParam0->_fU24, -2037134882 );
                                                    }
                                                    else
                                                    {
                                                        GIVE_PED_AMBIENT_OBJECT( iParam0->_fU24, -268530289 );
                                                    }
                                                }
                                            }
                                        }
                                        sub_49949( iParam0, 0 );
                                        iParam0->_fU8 = 2;
                                    }
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

int sub_43957(unknown uParam0)
{
    if (g_U30188 >= l_U1663)
    {
        return 0;
    }
    if (l_U1668 > l_U1664)
    {
        return 0;
    }
    return 1;
}

int sub_44028(int iParam0)
{
    int iVar3;
    unknown uVar4;

    if ((IS_PLAYER_CONTROL_ON( sub_985() )) AND ((NOT g_U30114[l_U1660]) AND (NOT IS_SCREEN_FADED_OUT())))
    {
        if ((iParam0->_fU4 == 13) || ((iParam0->_fU4 == 9) || (iParam0->_fU4 == 2)))
        {
            GET_INTERIOR_FROM_CHAR( sub_3822(), ref iVar3 );
            if (iVar3 == nil)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3822(), ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 40.00000000, 40.00000000, 40.00000000, 0 ))
                {
                    GET_GAME_VIEWPORT_ID( ref uVar4 );
                    if (NOT (iParam0->_fU4 == 9))
                    {
                        if (CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2.00000000 ))
                        {
                            return 0;
                        }
                    }
                    else if (CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.20000000 ))
                    {
                        return 0;
                    }
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3822(), ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
            {
                GET_GAME_VIEWPORT_ID( ref uVar4 );
                if (NOT (iParam0->_fU4 == 9))
                {
                    if (CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2.00000000 ))
                    {
                        return 0;
                    }
                }
                else if (CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.20000000 ))
                {
                    return 0;
                }
            }
        }
        if ((iParam0->_fU20 > 0) AND (iParam0->_fU16 == -1))
        {
            if (sub_4107( sub_3822(), l_U1660, 0 ))
            {
                GET_GAME_VIEWPORT_ID( ref uVar4 );
                if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3822(), ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 5.00000000, 5.00000000, 5.00000000, 0 )) || (CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2.00000000 )))
                {
                    return 0;
                }
            }
        }
        if (iParam0->_fU4 == 12)
        {
            GET_GAME_VIEWPORT_ID( ref uVar4 );
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3822(), ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 7.00000000, 7.00000000, 5.00000000, 0 )) AND (CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.50000000 )))
            {
                return 0;
            }
        }
        if (iParam0->_fU20 < 0)
        {
            if (NOT (sub_2552( iParam0->_fU24 )))
            {
                return 0;
            }
        }
    }
    if (NOT (iParam0->_fU4 == 12))
    {
        if ((NOT IS_SCREEN_FADED_OUT()) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dancing" )) > 0))
        {
            return 0;
        }
    }
    return 1;
}

int sub_44859(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if ((uParam0._fU8 < uParam6._fU8) AND ((uParam0._fU4 < uParam6._fU4) AND ((uParam0._fU0 < uParam6._fU0) AND ((uParam0._fU8 > uParam3._fU8) AND ((uParam0._fU4 > uParam3._fU4) AND (uParam0._fU0 > uParam3._fU0))))))
    {
        return 1;
    }
    return 0;
}

int sub_44959(int iParam0)
{
    switch (iParam0->_fU4)
    {
        case 8:
        case 9:
        case 5:
        return 1;
        break;
        case 14:
        if (g_U15811[31])
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 7:
        if (l_U1660 == 2)
        {
            return 1;
        }
        else if (sub_45104( iParam0->_fU56 ))
        {
            return 1;
        }
        break;
        case 2:
        if (iParam0->_fU56 == 2)
        {
            if (sub_45104( 3 ))
            {
                return 1;
            }
        }
        else if (sub_45104( iParam0->_fU56 ))
        {
            return 1;
        }
        break;
        case 13:
        return 1;
        break;
        default:
        if (sub_45104( iParam0->_fU56 ))
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_45104(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    unknown uVar6;

    switch (uParam0)
    {
        case 4:
        case 10:
        case 8:
        case 9:
        case 11:
        case 12:
        iVar3 = 4;
        iVar4 = 6;
        break;
        case 15:
        if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0) AND (l_U1660 == 0))
        {
            return 1;
        }
        else
        {
            iVar3 = 23;
            iVar4 = 4;
        }
        break;
        case 3:
        case 17:
        if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0) AND (l_U1660 == 0))
        {
            return 1;
        }
        else
        {
            iVar3 = 22;
            iVar4 = 6;
        }
        break;
        default:
        return 1;
        break;
    }
    GET_TIME_OF_DAY( ref iVar5, ref uVar6 );
    if (iVar4 < iVar3)
    {
        if ((iVar5 < iVar4) || (iVar5 >= iVar3))
        {
            return 1;
        }
    }
    else if ((iVar5 < iVar4) AND (iVar5 >= iVar3))
    {
        return 1;
    }
    return 0;
}

int sub_45601(int iParam0)
{
    if ((iParam0 == 17) || ((iParam0 == 16) || (iParam0 == 15)))
    {
        return 1;
    }
    return 0;
}

void sub_45851(int iParam0)
{
    l_U1662++;
    g_U30188++;
    l_U1668++;
    if (l_U1599)
    {
        PRINTSTRING( "CLUB PED CREATED - " );
        switch (iParam0->_fU4)
        {
            case 1:
            PRINTSTRING( "INTERIOR_CROWD" );
            break;
            case 2:
            PRINTSTRING( "EXTERIOR_CROWD" );
            break;
            case 13:
            PRINTSTRING( "REFUSED_ENTRY" );
            break;
            case 4:
            PRINTSTRING( "INTERIOR_PATROL" );
            break;
            case 5:
            PRINTSTRING( "INTERIOR_STAFF" );
            break;
            case 14:
            PRINTSTRING( "JONI" );
            break;
            case 6:
            PRINTSTRING( "BOTH_PATROL" );
            break;
            case 7:
            PRINTSTRING( "STAIRWELL_PED" );
            break;
            case 8:
            PRINTSTRING( "INTERIOR_BOUNCER" );
            break;
            case 9:
            PRINTSTRING( "EXTERIOR_BOUNCER" );
            break;
            case 10:
            PRINTSTRING( "INTERIOR_DANCER" );
            break;
            case 12:
            PRINTSTRING( "SPECIFIC_DANCER" );
            break;
        }
        PRINTSTRING( ", iTotalPeds = " );
        PRINTINT( l_U1662 );
        if (l_U1608)
        {
            PRINTSTRING( ", global club ped - " );
            PRINTINT( l_U1673 );
        }
        else
        {
            PRINTSTRING( ", club ped - " );
            PRINTINT( l_U1673 );
        }
        PRINTNL();
    }
    return;
}

string sub_46694(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_44859( uParam0, -489.24960000, 137.39240000, 10.33000000, -476.42460000, 167.81740000, 13.62370000 ))
    {
        return "E2_MaisonRoomTop";
    }
    if (sub_44859( uParam0, -489.53600000, 138.46910000, 5.00000000, -476.73600000, 165.44410000, 10.60640000 ))
    {
        if (NOT (sub_44859( uParam0, -489.38310000, 158.32430000, 5.00000000, -479.73310000, 161.82430000, 9.68890000 )))
        {
            return "E2_MaisonRoommain";
        }
    }
    if (sub_44859( uParam0, -489.38310000, 158.32430000, 5.00000000, -479.73310000, 161.82430000, 9.68890000 ))
    {
        return "E2_Maisonbar";
    }
    if (sub_44859( uParam0, -476.68000000, 154.01000000, 5.00000000, -471.46310000, 156.21000000, 11.86410000 ))
    {
        return "E2_MaisonRoomsteps1";
    }
    if (sub_44859( uParam0, -476.23730000, 156.22570000, 5.00000000, -471.66230000, 166.60070000, 11.67420000 ))
    {
        return "E2_MaisonRoomt2";
    }
    if (sub_44859( uParam0, -471.24200000, 156.18820000, 5.00000000, -468.24200000, 166.56320000, 11.67410000 ))
    {
        return "E2_MaisonRoomt03";
    }
    if (sub_44859( uParam0, -474.83110000, 144.02730000, 5.00000000, -470.93110000, 150.60230000, 11.86380000 ))
    {
        return "E2_MaisonsecurRoom";
    }
    if ((sub_44859( uParam0, -473.07430000, 139.93400000, 5.00000000, -467.99930000, 142.23400000, 11.86410000 )) || (sub_44859( uParam0, -471.45100000, 139.90120000, 5.00000000, -468.07600000, 156.20120000, 11.86410000 )))
    {
        return "E2_MaisonRoomfront";
    }
    if (sub_44859( uParam0, -476.64990000, 139.87450000, 5.00000000, -473.07490000, 142.12450000, 11.33070000 ))
    {
        return "E2_MaisonRoomsteps2";
    }
    if (sub_44859( uParam0, -440.38200000, 354.95600000, 9.00000000, -437.18200000, 358.75600000, 13.71660000 ))
    {
        return "Room_Entrance";
    }
    if (sub_44859( uParam0, -440.03200000, 347.35350000, 9.00000000, -437.43200000, 354.97850000, 13.71670000 ))
    {
        return "Room_lobby";
    }
    if (sub_44859( uParam0, -437.35140000, 347.40860000, 9.00000000, -424.87640000, 356.00860000, 13.71670000 ))
    {
        return "Room_Bar";
    }
    if (sub_44859( uParam0, -403.71630000, 397.53020000, 12.00000000, -396.67000000, 401.95520000, 16.41520000 ))
    {
        return "gayclubvestibule";
    }
    if (sub_44859( uParam0, -397.62090000, 393.82890000, 4.00000000, -389.79590000, 401.52890000, 13.29600000 ))
    {
        return "gayclubstrs";
    }
    if (sub_44859( uParam0, -400.69110000, 401.43300000, 1.00000000, -379.14110000, 417.88300000, 7.67430000 ))
    {
        return "gayclubroom";
    }
    if ((sub_44859( uParam0, -397.59980000, 431.71720000, 4.00000000, -383.42480000, 441.21720000, 12.05160000 )) || (sub_44859( uParam0, -398.37480000, 417.79220000, 4.00000000, -377.19980000, 431.96720000, 12.05160000 )))
    {
        return "gaydanceflr";
    }
    if (sub_44859( uParam0, -383.11910000, 432.43100000, 4.00000000, -369.26910000, 442.85600000, 8.17430000 ))
    {
        return "gaybackoffice";
    }
    return "";
}

int sub_48066(unknown uParam0)
{
    return 0;
}

int sub_48116(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    int iVar6;

    iVar6 = -1;
    switch (uParam0)
    {
        case 8:
        case 9:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar5 );
        switch (uVar5)
        {
            case 0:
            iVar6 = 8;
            break;
            case 1:
            iVar6 = 9;
            break;
        }
        break;
        case 11:
        case 12:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar5 );
        switch (uVar5)
        {
            case 0:
            iVar6 = 11;
            break;
            case 1:
            iVar6 = 12;
            break;
        }
        break;
    }
    if (l_U1660 == 1)
    {
        switch (uParam0)
        {
            case 47:
            case 20:
            case 21:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                iVar6 = 47;
                break;
                case 1:
                iVar6 = 20;
                break;
                case 2:
                iVar6 = 21;
                break;
            }
            break;
            case 22:
            case 23:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                iVar6 = 22;
                break;
                case 1:
                iVar6 = 23;
                break;
            }
            break;
        }
    }
    if (l_U1660 == 2)
    {
        switch (uParam0)
        {
            case 44:
            case 48:
            case 49:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                iVar6 = 44;
                break;
                case 1:
                iVar6 = 48;
                break;
                case 2:
                iVar6 = 49;
                break;
            }
            break;
        }
    }
    if (iVar6 == -1)
    {
        (uParam1^) = uParam0;
        return 1;
        break;
    }
    if (iParam2 == -1)
    {
        (uParam1^) = iVar6;
        return 1;
        break;
    }
    if (iVar6 == iParam2)
    {
        return 0;
        break;
    }
    (uParam1^) = iVar6;
    return 1;
}

int sub_48828(int iParam0, unknown uParam1)
{
    int Result;

    for ( Result = 0; Result < (uParam1^); Result++ )
    {
        if (NOT (iParam0 == nil))
        {
            if ((uParam1^)[Result]._fU24 == iParam0)
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_49949(int iParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (iParam0->_fU12 == 99))
        {
            if ((iParam0->_fU4 == 7) || (iParam0->_fU4 == 1))
            {
                if (sub_50008( iParam0->_fU56 ))
                {
                    if (NOT (DOES_OBJECT_EXIST( iParam0->_fU44 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3822(), iParam0->_fU24, l_U1654, l_U1654, l_U1654, 0 ))
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 1 );
                            if (NOT (sub_32296( iParam0->_fU52 )))
                            {
                                CREATE_OBJECT( 568449139, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 44, 1 );
                                if (NOT (sub_50482( iParam0->_fU56 )))
                                {
                                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1219, l_U1761, l_U1767, 0 );
                                }
                                else
                                {
                                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1232, l_U1764, l_U1770, 0 );
                                }
                            }
                            else
                            {
                                CREATE_OBJECT( -937089801, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 44, 1 );
                                if (NOT (sub_50482( iParam0->_fU56 )))
                                {
                                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1219, l_U1773, l_U1779, 0 );
                                }
                                else
                                {
                                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1232, l_U1776, l_U1782, 0 );
                                }
                            }
                        }
                    }
                    else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3822(), iParam0->_fU24, l_U1654, l_U1654, l_U1654, 0 )))
                    {
                        DELETE_OBJECT( iParam0 + 44 );
                    }
                }
            }
            if (iParam0->_fU52 == 11)
            {
                BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 1 );
                if (NOT (DOES_OBJECT_EXIST( iParam0->_fU44 )))
                {
                    CREATE_OBJECT( -433173805, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 44, 1 );
                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1232, l_U1785, l_U1788, 0 );
                }
            }
        }
        else
        {
            BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 0 );
            if (l_U1666 < 5)
            {
                if (DOES_OBJECT_EXIST( iParam0->_fU44 ))
                {
                    if (IS_OBJECT_ATTACHED( iParam0->_fU44 ))
                    {
                        DETACH_OBJECT( iParam0->_fU44, 1 );
                    }
                    if (iParam0->_fU52 == 11)
                    {
                        DELETE_OBJECT( iParam0 + 44 );
                    }
                    l_U1666++;
                }
            }
        }
    }
    else
    {
        BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 0 );
        if (DOES_OBJECT_EXIST( iParam0->_fU44 ))
        {
            DELETE_OBJECT( iParam0 + 44 );
        }
    }
    return;
}

int sub_50008(unknown uParam0)
{
    switch (uParam0)
    {
        case 6:
        case 7:
        case 13:
        case 14:
        return 1;
        break;
    }
    switch (l_U1660)
    {
        case 1:
        switch (uParam0)
        {
            case 32:
            case 33:
            case 55:
            case 37:
            case 27:
            case 28:
            case 29:
            case 38:
            case 39:
            case 40:
            case 30:
            case 56:
            case 35:
            return 1;
            break;
        }
        break;
        case 2:
        switch (uParam0)
        {
            case 72:
            case 77:
            return 1;
            break;
        }
        break;
        case 0:
        switch (uParam0)
        {
            case 30:
            case 44:
            case 36:
            case 33:
            case 32:
            return 1;
            break;
        }
        break;
    }
    return 0;
}

int sub_50482(unknown uParam0)
{
    switch (uParam0)
    {
        case 6:
        case 13:
        case 14:
        return 1;
        break;
    }
    switch (l_U1660)
    {
        case 1:
        switch (uParam0)
        {
            case 32:
            case 33:
            case 55:
            case 39:
            case 38:
            case 36:
            case 37:
            case 40:
            case 56:
            case 30:
            return 1;
            break;
        }
        break;
        case 2:
        switch (uParam0)
        {
            case 77:
            return 1;
            break;
            default:
        }
        break;
        case 0:
        switch (uParam0)
        {
            case 30:
            case 44:
            case 36:
            case 33:
            return 1;
            break;
        }
        break;
    }
    return 0;
}

int sub_51387(unknown uParam0, unknown uParam1)
{
    if (sub_42656( uParam0, uParam1 ))
    {
        return 0;
    }
    return 1;
}

int sub_51474(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_INTERIOR_FROM_CHAR( uParam0, ref iVar4 );
        if (iVar4 == nil)
        {
            return 1;
        }
        else if (sub_42656( uParam0, uParam1 ))
        {
            return 0;
        }
        switch (uParam1)
        {
            case 0:
            if (IS_CHAR_IN_AREA_3D( uParam0, -403.27530000, 397.40990000, 11.52820000, -390.00030000, 402.20990000, 16.40320000, 0 ))
            {
                return 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_AREA_3D( uParam0, -471.63720000, 141.73170000, 7.86390000, -467.71220000, 164.73170000, 11.86390000, 0 ))
            {
                return 1;
            }
            break;
            case 2:
            if (IS_CHAR_IN_AREA_3D( uParam0, -440.63380000, 353.59830000, 10.66670000, -437.50880000, 358.02330000, 13.71670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    if (sub_29498())
    {
        return 1;
    }
    return 0;
}

void sub_52092(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    boolean bVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
    unknown uVar13;
    unknown uVar14;
    string sVar15;

    if (DOES_CHAR_EXIST( iParam0->_fU24 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
        {
            if (NOT (sub_2552( iParam0->_fU24 )))
            {
                if (iParam0->_fU4 == 14)
                {
                    if (NOT (DOES_OBJECT_EXIST( l_U1723 )))
                    {
                        sub_2922();
                    }
                }
                sub_49949( iParam0, 0 );
                uVar13 = l_U1476[iParam0->_fU56]._fU0;
                uVar14 = sub_52221( iParam0->_fU56 );
                if (sub_45601( iParam0->_fU56 ))
                {
                    sVar15 = l_U1476[iParam0->_fU56]._fU0;
                }
                else
                {
                    sVar15 = "";
                }
                if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                {
                    if (g_U30166)
                    {
                        if (sub_53737( iParam0 ))
                        {
                            SET_CHAR_VISIBLE( iParam0->_fU24, 0 );
                            SET_CHAR_COLLISION( iParam0->_fU24, 0 );
                            SET_CHAR_COORDINATES( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8 );
                        }
                    }
                    else if (NOT (sub_3221( iParam0->_fU56 )))
                    {
                        SET_CHAR_COLLISION( iParam0->_fU24, 1 );
                    }
                    SET_CHAR_VISIBLE( iParam0->_fU24, 1 );;
                }
                if (sub_48066( iParam0 ))
                {
                    SET_CHAR_IN_CUTSCENE( iParam0->_fU24, 1 );
                }
                else
                {
                    SET_CHAR_IN_CUTSCENE( iParam0->_fU24, 0 );
                }
                if (NOT (iParam0->_fU12 == 99))
                {
                    if ((sub_50008( iParam0->_fU56 )) || (sub_3221( iParam0->_fU56 )))
                    {
                        BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 1 );
                    }
                }
                if (NOT l_U1597)
                {
                    if (sub_54207( iParam0 ))
                    {
                        if (l_U1624)
                        {
                            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                            {
                                SET_CHAR_COORDINATES( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8 );
                                SET_CHAR_HEADING( iParam0->_fU24, iParam0->_fU40 );
                            }
                            else
                            {
                                DELETE_CHAR( iParam0 + 24 );
                            }
                            iParam0->_fU12 = 0;
                        }
                        else if (iParam0->_fU12 == 99)
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 0 );
                            if (sub_3221( iParam0->_fU56 ))
                            {
                                SET_CHAR_COLLISION( iParam0->_fU24, 1 );
                                FREEZE_CHAR_POSITION( iParam0->_fU24, 0 );
                            }
                            if (NOT (sub_25742( iParam0->_fU24 )))
                            {
                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 25, ref l_U1725 );
                                if (l_U1725 == 7)
                                {
                                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam0->_fU24, sub_3822(), 0 ))
                                    {
                                        if (IS_CHAR_MALE( iParam0->_fU24 ))
                                        {
                                            GET_CHAR_HEALTH( iParam0->_fU24, ref iVar12 );
                                            if ((iVar12 < 180) || (NOT sub_34851()))
                                            {
                                                TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3822(), 200.00000000, -1 );
                                                SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                            }
                                            else if (NOT (IS_PED_IN_COMBAT( iParam0->_fU24 )))
                                            {
                                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1725 );
                                                if (l_U1725 == 7)
                                                {
                                                    OPEN_SEQUENCE_TASK( ref l_U1726 );
                                                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3822() );
                                                    TASK_LOOK_AT_CHAR( 0, sub_3822(), 20000, 0 );
                                                    TASK_STAND_STILL( 0, 20000 );
                                                    CLOSE_SEQUENCE_TASK( l_U1726 );
                                                    TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1726 );
                                                    CLEAR_SEQUENCE_TASK( l_U1726 );
                                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "BUMP", 1, 1, 2 );
                                                }
                                            }
                                            else if (NOT (IS_PLAYER_CONTROL_ON( sub_985() )))
                                            {
                                                CLEAR_CHAR_LAST_DAMAGE_ENTITY( iParam0->_fU24 );
                                            };;;
                                        }
                                        else if (iParam0->_fU4 == 14)
                                        {
                                            l_U1636 = 1;
                                            GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 17, ref l_U1725 );
                                            if (l_U1725 == 7)
                                            {
                                                TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3822(), 200.00000000, -1 );
                                                SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                            }
                                        }
                                        else
                                        {
                                            TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3822(), 200.00000000, -1 );
                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                        }
                                    }
                                    else
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 26, ref l_U1725 );
                                        if (l_U1725 == 7)
                                        {
                                            TASK_WANDER_STANDARD( iParam0->_fU24 );
                                            if (NOT (iParam0->_fU4 == 12))
                                            {
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "BUMP", 1, 1, 2 );
                                            }
                                            else
                                            {
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "DANCING_GAME_FAIL", 1, 1, 2 );
                                            }
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3822(), 5000, 0 );
                                        }
                                    }
                                }
                                else if (iParam0->_fU4 == 14)
                                {
                                    GET_CHAR_COORDINATES( iParam0->_fU24, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                                    if (uVar4._fU8 > 10.50000000)
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 17, ref l_U1725 );
                                        if (l_U1725 == 7)
                                        {
                                            TASK_GO_STRAIGHT_TO_COORD( iParam0->_fU24, -472.13280000, 149.16770000, 9.86390000, 3, -2 );
                                        }
                                    }
                                }
                            }
                            if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3822(), iParam0->_fU24, 15.00000000, 15.00000000, 5.00000000, 0 ))) AND (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))))
                            {
                                if (l_U1599)
                                {
                                    PRINTSTRING( "CLUB_PED_REMOVED - called from UPDATE_CLUB_PED progress = 99" );
                                    PRINTNL();
                                }
                                sub_2521( iParam0, 1 );
                            }
                        }
                        else if (iParam0->_fU12 == -1)
                        {
                            CLEAR_CHAR_TASKS( iParam0->_fU24 );
                            iParam0->_fU12++;
                        }
                        switch (iParam0->_fU4)
                        {
                            case 8:
                            case 9:
                            if (iParam0->_fU4 == 9)
                            {
                                if (NOT (iParam0->_fU24 == g_U30210))
                                {
                                    if (IS_PLAYER_PLAYING( sub_985() ))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3822(), iParam0->_fU24, 40.00000000, 40.00000000, 40.00000000, 0 ))
                                        {
                                            g_U30210 = iParam0->_fU24;
                                        }
                                    }
                                }
                            }
                            if (NOT g_U30118)
                            {
                                switch (iParam0->_fU12)
                                {
                                    case 0:
                                    if (NOT g_U30093[l_U1660])
                                    {
                                        if (NOT (IS_PED_IN_COMBAT( iParam0->_fU24 )))
                                        {
                                            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 0.50000000, 0.50000000, 2.00000000, 0 )))
                                            {
                                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1725 );
                                                if (l_U1725 == 7)
                                                {
                                                    OPEN_SEQUENCE_TASK( ref l_U1726 );
                                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2, -1, 0.50000000 );
                                                    TASK_ACHIEVE_HEADING( 0, iParam0->_fU40 );
                                                    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Bouncer", -1082130432 );
                                                    CLOSE_SEQUENCE_TASK( l_U1726 );
                                                    TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1726 );
                                                    l_U1665 += 3;
                                                    CLEAR_SEQUENCE_TASK( l_U1726 );
                                                    SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU24, iParam0->_fU28, 10.00000000 );
                                                }
                                            }
                                            else if (HAVE_ANIMS_LOADED( "misstony06" ))
                                            {
                                                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0->_fU24, "misstony06", "bouncer_greeting" )))
                                                {
                                                    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1725 );
                                                    if (l_U1725 == 7)
                                                    {
                                                        OPEN_SEQUENCE_TASK( ref l_U1726 );
                                                        TASK_ACHIEVE_HEADING( 0, iParam0->_fU40 );
                                                        TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Bouncer", -1082130432 );
                                                        CLOSE_SEQUENCE_TASK( l_U1726 );
                                                        TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1726 );
                                                        l_U1665 += 2;
                                                        CLEAR_SEQUENCE_TASK( l_U1726 );
                                                        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU24, iParam0->_fU28, 10.00000000 );
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1725 );
                                                if (l_U1725 == 7)
                                                {
                                                    OPEN_SEQUENCE_TASK( ref l_U1726 );
                                                    TASK_ACHIEVE_HEADING( 0, iParam0->_fU40 );
                                                    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Bouncer", -1082130432 );
                                                    CLOSE_SEQUENCE_TASK( l_U1726 );
                                                    TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1726 );
                                                    l_U1665 += 2;
                                                    CLEAR_SEQUENCE_TASK( l_U1726 );
                                                    SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU24, iParam0->_fU28, 10.00000000 );
                                                }
                                            }
                                        }
                                        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( iParam0->_fU24, sub_3822(), 2.00000000, 2.00000000, 2.00000000, 0 ))
                                        {
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3822(), 2000, 0 );
                                        }
                                        else
                                        {
                                            TASK_CLEAR_LOOK_AT( iParam0->_fU24 );
                                        }
                                        if (NOT sub_34851())
                                        {
                                            if ((iParam0->_fU24 == l_U1704) || (iParam0->_fU24 == l_U1703))
                                            {
                                                CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                                iParam0->_fU20 = 0;
                                                iParam0->_fU12 = 1;
                                            }
                                        }
                                    }
                                    else if ((iParam0->_fU24 == l_U1704) || (iParam0->_fU24 == l_U1703))
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 91, ref l_U1725 );
                                        if (l_U1725 == 7)
                                        {
                                            SET_CHAR_RELATIONSHIP( iParam0->_fU24, 5, 0 );
                                            TASK_COMBAT( iParam0->_fU24, sub_3822() );
                                        }
                                    }
                                    else if (iParam0->_fU4 == 9)
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 91, ref l_U1725 );
                                        if (l_U1725 == 7)
                                        {
                                            SET_CHAR_RELATIONSHIP( iParam0->_fU24, 5, 0 );
                                            TASK_COMBAT( iParam0->_fU24, sub_3822() );
                                        }
                                    };;;
                                    break;
                                    case 1:
                                    if (NOT sub_34851())
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1725 );
                                        if (l_U1725 == 7)
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U1726 );
                                            TASK_GOTO_CHAR_OFFSET( 0, sub_3822(), 60000, 1.50000000, 0 );
                                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3822() );
                                            CLOSE_SEQUENCE_TASK( l_U1726 );
                                            TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1726 );
                                            CLEAR_SEQUENCE_TASK( l_U1726 );
                                        }
                                        else
                                        {
                                            bVar7 = true;
                                        }
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( iParam0->_fU24, sub_3822(), 2.00000000, 2.00000000, 2.00000000, 0 ))
                                        {
                                            bVar7 = true;
                                        }
                                        if (bVar7)
                                        {
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_POLITE_WARNING", 1, 1, 2 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_POLITE_WARNING" );
                                            PRINTNL();
                                            iParam0->_fU20 = 0;
                                            iParam0->_fU12++;
                                        }
                                    }
                                    else
                                    {
                                        CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                        iParam0->_fU12 = 0;
                                    }
                                    break;
                                    case 2:
                                    if ((sub_4107( sub_3822(), l_U1660, 0 )) AND (NOT sub_34851()))
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1725 );
                                        if (l_U1725 == 7)
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U1726 );
                                            TASK_GOTO_CHAR_OFFSET( 0, sub_3822(), 60000, 1.50000000, 0 );
                                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3822() );
                                            CLOSE_SEQUENCE_TASK( l_U1726 );
                                            TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1726 );
                                            CLEAR_SEQUENCE_TASK( l_U1726 );
                                        }
                                        if (iParam0->_fU20 > 7000)
                                        {
                                            g_U30093[l_U1660] = 1;
                                            PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - not put away weapon!" );
                                            PRINTNL();
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_ARMED_EJECTION", 1, 1, 2 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_ARMED_EJECTION" );
                                            PRINTNL();
                                            iParam0->_fU12 = 0;
                                        }
                                    }
                                    else
                                    {
                                        CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                        iParam0->_fU12 = 0;
                                    }
                                    break;
                                }
                            }
                            break;
                            case 4:
                            case 6:
                            if (sub_57830( iParam0 ))
                            {
                                CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                iParam0->_fU12 = 99;
                            }
                            else
                            {
                                switch (iParam0->_fU12)
                                {
                                    case 0:
                                    if (sub_54425())
                                    {
                                        sub_57976( iParam0 );
                                        if (NOT (iParam0->_fU16 == -1))
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U1726 );
                                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U1534[iParam0->_fU16]._fU0._fU0, l_U1534[iParam0->_fU16]._fU0._fU4, l_U1534[iParam0->_fU16]._fU0._fU8, 2, -2, 0.30000000 );
                                            if (NOT (sub_58299( iParam0->_fU16 )))
                                            {
                                                TASK_ACHIEVE_HEADING( 0, l_U1534[iParam0->_fU16]._fU12 );
                                            }
                                            if (sub_45601( l_U1534[iParam0->_fU16]._fU24 ))
                                            {
                                                if (IS_CHAR_MALE( iParam0->_fU24 ))
                                                {
                                                    TASK_START_SCENARIO_IN_PLACE( 0, l_U1476[l_U1534[iParam0->_fU16]._fU24]._fU0, -1082130432 );
                                                }
                                                else
                                                {
                                                    TASK_PLAY_ANIM( 0, "female_idle", "missnightclub", 2.00000000, 0, 0, 0, 0, -1 );
                                                }
                                            }
                                            else if (NOT (sub_58299( iParam0->_fU16 )))
                                            {
                                                if (l_U1599)
                                                {
                                                    PRINTSTRING( "TASK_PLAY_ANIM - patrol" );
                                                    PRINTNL();
                                                }
                                                TASK_PLAY_ANIM( 0, l_U1476[l_U1534[iParam0->_fU16]._fU24]._fU0, sub_52221( l_U1534[iParam0->_fU16]._fU24 ), 8.00000000, 0, 0, 0, 0, -1 );
                                            }
                                            CLOSE_SEQUENCE_TASK( l_U1726 );
                                            TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1726 );
                                            l_U1665 += 4;
                                            CLEAR_SEQUENCE_TASK( l_U1726 );
                                            iParam0->_fU20 = 0;
                                            iParam0->_fU12++;
                                        }
                                        else
                                        {
                                            PRINTSTRING( "Nightclub script - Patrol ped could not find free patrol point!" );
                                            PRINTNL();
                                        }
                                    }
                                    break;
                                    case 1:
                                    if (sub_54425())
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1725 );
                                        if ((iParam0->_fU20 > 30000) || (l_U1725 == 7))
                                        {
                                            if (NOT (iParam0->_fU16 == -1))
                                            {
                                                l_U1534[iParam0->_fU16]._fU20 = nil;
                                            }
                                            iParam0->_fU12 = 0;
                                        }
                                        else if (NOT (LOCATE_CHAR_ON_FOOT_3D( iParam0->_fU24, l_U1534[iParam0->_fU16]._fU0._fU0, l_U1534[iParam0->_fU16]._fU0._fU4, l_U1534[iParam0->_fU16]._fU0._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
                                        {
                                            iParam0->_fU20 = 0;
                                        }
                                    }
                                    else
                                    {
                                        CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                        iParam0->_fU12 = 99;
                                    }
                                    break;
                                }
                            }
                            break;
                            case 10:
                            case 12:
                            if (sub_57830( iParam0 ))
                            {
                                iParam0->_fU12 = 99;
                            }
                            else if ((NOT (g_U30205 == iParam0->_fU24)) AND (NOT (g_U30207 == iParam0->_fU24)))
                            {
                                if (NOT (sub_59114( iParam0 )))
                                {
                                    sub_59325( iParam0 );
                                }
                                else
                                {
                                    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 131, ref l_U1725 );
                                    if (l_U1725 == 7)
                                    {
                                        if (l_U1725 == 7)
                                        {
                                            if (iParam0->_fU56 == 0)
                                            {
                                                sub_59586( iParam0 );
                                            }
                                            else if (NOT (sub_25914( uVar14 )))
                                            {
                                                if (NOT (sub_25914( uVar13 )))
                                                {
                                                    if (sub_25903( uVar14 ))
                                                    {
                                                        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 1.00000000, ref uVar3 );
                                                        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 16, uVar3 );
                                                    }
                                                }
                                                else
                                                {
                                                    sub_59586( iParam0 );
                                                }
                                            }
                                            else
                                            {
                                                sub_59586( iParam0 );
                                            }
                                        }
                                    }
                                }
                            }
                            break;
                            default:
                            if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))) || (sub_57830( iParam0 )))
                            {
                                iParam0->_fU12 = 99;
                            }
                            else
                            {
                                switch (iParam0->_fU12)
                                {
                                    case 0:
                                    if (l_U1665 < 30)
                                    {
                                        if (NOT (sub_59114( iParam0 )))
                                        {
                                            sub_59325( iParam0 );
                                        }
                                        else if (sub_45601( iParam0->_fU56 ))
                                        {
                                            if (NOT (sub_25914( sVar15 )))
                                            {
                                                if (l_U1599)
                                                {
                                                    PRINTSTRING( "UPDATE_CLUB_PED - " );
                                                    if (l_U1608)
                                                    {
                                                        PRINTSTRING( "global club ped " );
                                                        PRINTINT( l_U1673 );
                                                    }
                                                    else
                                                    {
                                                        PRINTSTRING( "club ped " );
                                                        PRINTINT( l_U1673 );
                                                    }
                                                    PRINTSTRING( "given scenario " );
                                                    PRINTSTRING( sVar15 );
                                                    PRINTNL();
                                                }
                                                TASK_START_SCENARIO_IN_PLACE( iParam0->_fU24, sVar15, -1082130432 );
                                                l_U1665++;
                                                iParam0->_fU12++;
                                            }
                                        }
                                        else if (sub_53795( iParam0->_fU56 ))
                                        {
                                            if (sub_60433( (iParam0^) ))
                                            {
                                                if (NOT (sub_25914( uVar14 )))
                                                {
                                                    if (NOT (sub_25914( uVar13 )))
                                                    {
                                                        if (sub_25903( uVar14 ))
                                                        {
                                                            TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 192, 0.00000000 );
                                                            if (sub_60761( iParam0->_fU56 ))
                                                            {
                                                                sub_60823( iParam0->_fU24 );
                                                            }
                                                            l_U1665++;
                                                            iParam0->_fU12++;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else if (sub_60990( iParam0->_fU56 ))
                                        {
                                            if (NOT (IS_CHAR_PLAYING_ANIM( iParam0->_fU24, uVar14, uVar13 )))
                                            {
                                                if (sub_48116( iParam0->_fU56, iParam0 + 56, iParam0->_fU56 ))
                                                {
                                                    uVar13 = l_U1476[iParam0->_fU56]._fU0;
                                                    uVar14 = sub_52221( iParam0->_fU56 );
                                                    if (NOT (sub_25914( uVar14 )))
                                                    {
                                                        if (NOT (sub_25914( uVar13 )))
                                                        {
                                                            if (sub_25903( uVar14 ))
                                                            {
                                                                if (iParam0->_fU4 == 2)
                                                                {
                                                                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 144, 0.00000000 );
                                                                }
                                                                else
                                                                {
                                                                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 16, 0.00000000 );
                                                                }
                                                                l_U1665++;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else if (NOT (sub_25914( uVar14 )))
                                        {
                                            if (NOT (sub_25914( uVar13 )))
                                            {
                                                if (sub_25903( uVar14 ))
                                                {
                                                    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 1.00000000, ref uVar3 );
                                                    if (iParam0->_fU4 == 2)
                                                    {
                                                        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 144, uVar3 );
                                                    }
                                                    else
                                                    {
                                                        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 16, uVar3 );
                                                    }
                                                    l_U1665++;
                                                    iParam0->_fU12++;
                                                    if (l_U1599)
                                                    {
                                                        PRINTSTRING( "UPDATE_CLUB_PED - " );
                                                        if (l_U1608)
                                                        {
                                                            PRINTSTRING( "global club ped " );
                                                            PRINTINT( l_U1673 );
                                                        }
                                                        else
                                                        {
                                                            PRINTSTRING( "club ped " );
                                                            PRINTINT( l_U1673 );
                                                        }
                                                        PRINTSTRING( "given TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE " );
                                                        PRINTSTRING( uVar13 );
                                                        PRINTSTRING( ", " );
                                                        PRINTSTRING( uVar14 );
                                                        PRINTSTRING( ", fTemp = " );
                                                        PRINTFLOAT( uVar3 );
                                                        PRINTNL();
                                                    }
                                                }
                                            }
                                        };;;;;
                                    }
                                    break;
                                    case 1:
                                    if (NOT (sub_25914( sVar15 )))
                                    {
                                        iParam0->_fU12++;
                                    }
                                    else if ((NOT (sub_25914( uVar14 ))) AND (NOT (sub_25914( uVar13 ))))
                                    {
                                        if (sub_53795( iParam0->_fU56 ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 131, ref l_U1725 );
                                            if (l_U1725 == 7)
                                            {
                                                if (sub_61811( iParam0->_fU56 ))
                                                {
                                                    sub_61894( iParam0->_fU24, 90000 );
                                                }
                                                iParam0->_fU12 = 99;
                                            }
                                        }
                                        else if (IS_CHAR_PLAYING_ANIM( iParam0->_fU24, uVar14, uVar13 ))
                                        {
                                            iParam0->_fU12++;
                                        }
                                    }
                                    break;
                                    case 2:
                                    bVar7 = false;
                                    GET_CHAR_COORDINATES( iParam0->_fU24, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                                    if (IS_PLAYER_PLAYING( sub_985() ))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3822(), uVar4._fU0, uVar4._fU4, uVar4._fU8, l_U1639, l_U1639, 2.00000000, 0 ))
                                        {
                                            PRINTSTRING( "UPDATE_CLUB_PED - player collides with club ped - " );
                                            if (l_U1608)
                                            {
                                                PRINTSTRING( "global club ped " );
                                                PRINTINT( l_U1673 );
                                            }
                                            else
                                            {
                                                PRINTSTRING( "club ped " );
                                                PRINTINT( l_U1673 );
                                            }
                                            PRINTNL();
                                            bVar7 = true;
                                        }
                                    }
                                    if (sub_25914( sVar15 ))
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 71, ref l_U1725 );
                                        if (l_U1725 == 7)
                                        {
                                            GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 131, ref l_U1725 );
                                            if (l_U1725 == 7)
                                            {
                                                PRINTSTRING( "UPDATE_CLUB_PED - club ped finished playing anim task - " );
                                                if (l_U1608)
                                                {
                                                    PRINTSTRING( "global club ped " );
                                                    PRINTINT( l_U1673 );
                                                }
                                                else
                                                {
                                                    PRINTSTRING( "club ped " );
                                                    PRINTINT( l_U1673 );
                                                }
                                                PRINTNL();
                                                bVar7 = true;
                                            }
                                            if ((NOT (sub_25914( uVar14 ))) AND (NOT (sub_25914( uVar13 ))))
                                            {
                                                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0->_fU24, uVar14, uVar13 )))
                                                {
                                                    PRINTSTRING( "UPDATE_CLUB_PED - ped is not playing anim - " );
                                                    if (l_U1608)
                                                    {
                                                        PRINTSTRING( "global club ped " );
                                                        PRINTINT( l_U1673 );
                                                    }
                                                    else
                                                    {
                                                        PRINTSTRING( "club ped " );
                                                        PRINTINT( l_U1673 );
                                                    }
                                                    PRINTNL();
                                                    bVar7 = true;
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 114, ref l_U1725 );
                                        if (l_U1725 == 7)
                                        {
                                            if ((NOT (iParam0->_fU4 == 5)) AND (NOT (iParam0->_fU4 == 5)))
                                            {
                                                PRINTSTRING( "UPDATE_CLUB_PED - club ped finished playing scenario task" );
                                                if (l_U1608)
                                                {
                                                    PRINTSTRING( "global club ped " );
                                                    PRINTINT( l_U1673 );
                                                }
                                                else
                                                {
                                                    PRINTSTRING( "club ped " );
                                                    PRINTINT( l_U1673 );
                                                }
                                                PRINTNL();
                                                bVar7 = true;
                                            }
                                            else
                                            {
                                                TASK_START_SCENARIO_IN_PLACE( iParam0->_fU24, sVar15, -1082130432 );
                                            }
                                        }
                                    }
                                    if (bVar7)
                                    {
                                        if (NOT (iParam0->_fU24 == g_U30208))
                                        {
                                            iParam0->_fU12 = 99;
                                        }
                                    }
                                    else if (sub_25914( sVar15 ))
                                    {
                                        if (NOT (sub_25914( uVar13 )))
                                        {
                                            if (NOT (LOCATE_CHAR_ON_FOOT_3D( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 0.20000000, 0.20000000, 2.00000000, 0 )))
                                            {
                                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 71, ref l_U1725 );
                                                if (l_U1725 == 7)
                                                {
                                                    TASK_CHAR_SLIDE_TO_COORD_AND_PLAY_ANIM( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0->_fU40, 0.10000000, uVar13, uVar14, 4.00000000, 1, 0, 0, 0, -1 );
                                                }
                                            }
                                        }
                                    }
                                    break;
                                }
                            }
                            break;
                        };;;
                    }
                }
                else if (l_U1611)
                {
                    if (sub_4107( iParam0->_fU24, l_U1660, 0 ))
                    {
                        sub_41068( iParam0, 1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                {
                    switch (iParam0->_fU4)
                    {
                        case 8:
                        case 9:
                        switch (iParam0->_fU12)
                        {
                            case 0:
                            if (g_U30093[l_U1660])
                            {
                                if (l_U1665 < 30)
                                {
                                    SET_CHAR_RELATIONSHIP( iParam0->_fU24, 5, 0 );
                                    TASK_COMBAT( iParam0->_fU24, sub_3822() );
                                    l_U1665++;
                                    SET_CHAR_KEEP_TASK( iParam0->_fU24, 1 );
                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_ARMED_EJECTION", 1, 1, 2 );
                                    PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_ARMED_EJECTION" );
                                    PRINTNL();
                                    iParam0->_fU12++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                            {
                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 91, ref l_U1725 );
                                if ((l_U1665 < 30) AND (l_U1725 == 7))
                                {
                                    SET_CHAR_RELATIONSHIP( iParam0->_fU24, 5, 0 );
                                    TASK_COMBAT( iParam0->_fU24, sub_3822() );
                                    l_U1665++;
                                    SET_CHAR_KEEP_TASK( iParam0->_fU24, 1 );
                                }
                            }
                            break;
                        }
                        break;
                        default:
                        switch (iParam0->_fU12)
                        {
                            case 99:
                            BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 0 );
                            if (sub_3221( iParam0->_fU56 ))
                            {
                                SET_CHAR_COLLISION( iParam0->_fU24, 1 );
                                FREEZE_CHAR_POSITION( iParam0->_fU24, 0 );
                            }
                            if (sub_4107( iParam0->_fU24, l_U1660, 0 ))
                            {
                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 25, ref l_U1725 );
                                if (l_U1725 == 7)
                                {
                                    if (l_U1665 < 30)
                                    {
                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar8 );
                                        switch (uVar8)
                                        {
                                            case 0:
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "GUN_RUN", 1, 1, 2 );
                                            break;
                                            case 1:
                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                            break;
                                            case 2:
                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "HIGH_FALL", "PAIN_VOICE", 1, 1, 2 );
                                            break;
                                            case 3:
                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC_SHORT", "PAIN_VOICE", 1, 1, 2 );
                                            break;
                                        }
                                        TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3822(), 200.00000000, -1 );
                                        SET_CHAR_KEEP_TASK( iParam0->_fU24, 1 );
                                        l_U1665++;
                                    }
                                }
                            }
                            else
                            {
                                sub_2521( iParam0, 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                            {
                                if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3822(), iParam0->_fU24, 15.00000000, 15.00000000, 5.00000000, 0 ))) AND (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))))
                                {
                                    if (l_U1599)
                                    {
                                        PRINTSTRING( "CLUB_PED_REMOVED - called from UPDATE_CLUB_PED progress (shooting)  = 99" );
                                        PRINTNL();
                                    }
                                    sub_2521( iParam0, 0 );
                                }
                            }
                            break;
                            default:
                            iParam0->_fU12 = 99;
                            break;
                        }
                        break;
                    }
                }
            }
            else if (iParam0->_fU4 == 14)
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam0->_fU24, sub_3822(), 0 ))
                {
                    l_U1636 = 1;
                }
            }
            if (iParam0->_fU4 == 14)
            {
                if (DOES_OBJECT_EXIST( l_U1723 ))
                {
                    DELETE_OBJECT( ref l_U1723 );
                }
            }
            sub_49949( iParam0, 1 );
            iParam0->_fU12 = -1;;
        }
        else if (iParam0->_fU4 == 14)
        {
            l_U1636 = 1;
        }
        if (l_U1599)
        {
            PRINTSTRING( "CLUB_PED_REMOVED - called from UPDATE_CLUB_PED 3" );
            PRINTNL();
        }
        sub_2521( iParam0, 0 );;
    }
    sub_64983( iParam0 );
    return;
}

string sub_52221(unknown uParam0)
{
    switch (uParam0)
    {
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
        return "missnightclub";
        break;
        case 15:
        case 16:
        case 17:
        return "";
        break;
    }
    switch (l_U1660)
    {
        case 1:
        switch (uParam0)
        {
            case 18:
            case 19:
            case 20:
            case 21:
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
            case 52:
            case 53:
            case 54:
            case 55:
            case 56:
            return "missamb_m9";
            break;
        }
        break;
        case 0:
        switch (uParam0)
        {
            case 18:
            case 19:
            case 20:
            case 21:
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
            case 42:
            case 43:
            case 44:
            case 45:
            return "missamb_bama";
            break;
        }
        break;
        case 2:
        switch (uParam0)
        {
            case 18:
            case 19:
            case 20:
            case 21:
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
            case 42:
            return "missamb_herc_female";
            break;
            case 43:
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
            case 81:
            case 82:
            return "missamb_herc_male";
            break;
        }
        break;
    }
    return "";
}

int sub_53737(int iParam0)
{
    if (iParam0->_fU12 == 99)
    {
        return 1;
    }
    if ((iParam0->_fU4 == 6) || (iParam0->_fU4 == 4))
    {
        return 1;
    }
    if (sub_53795( iParam0->_fU56 ))
    {
        return 1;
    }
    return 0;
}

int sub_53795(unknown uParam0)
{
    switch (uParam0)
    {
        case 4:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        return 1;
        break;
    }
    switch (l_U1660)
    {
        case 1:
        switch (uParam0)
        {
            case 20:
            case 21:
            case 22:
            case 23:
            case 47:
            return 1;
            break;
        }
        break;
        default:
    }
    return 0;
}

int sub_54207(int iParam0)
{
    if (iParam0->_fU0)
    {
        if (sub_43117( iParam0 ))
        {
            REQUEST_ANIMS( "missnightclub" );
            switch (iParam0->_fU4)
            {
                case 4:
                case 6:
                if (sub_54339( iParam0 ))
                {
                    if (sub_54425())
                    {
                        return 1;
                    }
                }
                break;
                case 10:
                case 12:
                if (sub_54339( iParam0 ))
                {
                    if (sub_37040())
                    {
                        return 1;
                    }
                }
                break;
                case 1:
                case 3:
                case 5:
                case 14:
                if (sub_54339( iParam0 ))
                {
                    return 1;
                }
                break;
                default:
                if (HAVE_ANIMS_LOADED( "missnightclub" ))
                {
                    return 1;
                }
                break;
            }
        }
    }
    return 0;
}

int sub_54339(int iParam0)
{
    unknown uVar3;

    uVar3 = sub_52221( iParam0->_fU56 );
    if (NOT (sub_25914( uVar3 )))
    {
        REQUEST_ANIMS( uVar3 );
        if (HAVE_ANIMS_LOADED( uVar3 ))
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_54425()
{
    int I;
    int Result;
    unknown uVar4;

    Result = 1;
    for ( I = 0; I < l_U1534; I++ )
    {
        uVar4 = sub_52221( l_U1534[I]._fU24 );
        if (NOT (sub_25914( uVar4 )))
        {
            REQUEST_ANIMS( uVar4 );
            if (NOT (HAVE_ANIMS_LOADED( uVar4 )))
            {
                Result = 0;
            }
        }
        if (NOT (HAVE_ANIMS_LOADED( "missnightclub" )))
        {
            REQUEST_ANIMS( "missnightclub" );
            Result = 0;
        }
    }
    return Result;
}

int sub_57830(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
    {
        if ((IS_PED_RAGDOLL( iParam0->_fU24 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam0->_fU24, sub_3822(), 0 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_57976(int iParam0)
{
    int I;
    boolean bVar4;

    for ( I = 0; I < l_U1534; I++ )
    {
        if ((NOT (l_U1534[I]._fU20 == iParam0->_fU24)) AND (NOT (I == iParam0->_fU16)))
        {
            if (IS_CHAR_INJURED( l_U1534[I]._fU20 ))
            {
                l_U1534[I]._fU20 = nil;
            }
            if (l_U1534[I]._fU20 == nil)
            {
                bVar4 = true;
                if (l_U1534[I]._fU16 == 1)
                {
                    if (NOT (sub_32296( iParam0->_fU52 )))
                    {
                        bVar4 = false;
                    }
                }
                if (bVar4)
                {
                    l_U1534[I]._fU20 = iParam0->_fU24;
                    iParam0->_fU16 = I;
                    return;
                }
            }
        }
        else
        {
            iParam0->_fU16 = -1;
            l_U1534[I]._fU20 = nil;
        }
    }
    return;
}

int sub_58299(unknown uParam0)
{
    if (NOT (sub_45601( l_U1534[uParam0]._fU24 )))
    {
        if ((sub_25914( sub_52221( l_U1534[uParam0]._fU24 ) )) || (sub_25914( l_U1476[l_U1534[uParam0]._fU24]._fU0 )))
        {
            return 1;
        }
    }
    return 0;
}

int sub_59114(int iParam0)
{
    unknown uVar3;
    float fVar4;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 0.50000000, 0.50000000, 2.00000000, 0 ))
        {
            GET_CHAR_HEADING( iParam0->_fU24, ref uVar3 );
            fVar4 = iParam0->_fU40 - uVar3;
            if (fVar4 < -180.00000000)
            {
                fVar4 += 360.00000000;
            }
            if (fVar4 > 180.00000000)
            {
                fVar4 -= 360.00000000;
            }
            if (fVar4 < 0.00000000)
            {
                fVar4 *= -1.00000000;
            }
            if (fVar4 < 15.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_59325(int iParam0)
{
    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1725 );
    if (l_U1725 == 7)
    {
        OPEN_SEQUENCE_TASK( ref l_U1726 );
        TASK_GO_STRAIGHT_TO_COORD( 0, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2, -2 );
        TASK_CHAR_SLIDE_TO_COORD( 0, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0->_fU40, 1061158912 );
        TASK_ACHIEVE_HEADING( 0, iParam0->_fU40 );
        CLOSE_SEQUENCE_TASK( l_U1726 );
        TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1726 );
        l_U1665 += 3;
        CLEAR_SEQUENCE_TASK( l_U1726 );
    }
    return;
}

void sub_59586(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    switch (l_U1660)
    {
        case 1:
        if (sub_32296( iParam0->_fU52 ))
        {
            sub_48116( 25, ref uVar4, -1 );
        }
        else
        {
            sub_48116( 48, ref uVar4, -1 );
        }
        break;
        case 0:
        if (sub_32296( iParam0->_fU52 ))
        {
            sub_48116( 20, ref uVar4, -1 );
        }
        else
        {
            sub_48116( 21, ref uVar4, -1 );
        }
        break;
        case 2:
        if (sub_32296( iParam0->_fU52 ))
        {
            sub_48116( 18, ref uVar4, -1 );
        }
        else
        {
            sub_48116( 53, ref uVar4, -1 );
        }
        break;
    }
    uVar5 = sub_52221( uVar4 );
    uVar6 = l_U1476[uVar4]._fU0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
    {
        if (NOT (sub_25914( uVar5 )))
        {
            if (NOT (sub_25914( uVar6 )))
            {
                if (sub_25903( uVar5 ))
                {
                    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 1.00000000, ref uVar7 );
                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar6, uVar5, 4.00000000, -1, 16, uVar7 );
                }
            }
        }
    }
    return;
}

int sub_60433(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14)
{
    if (NOT (IS_CHAR_INJURED( uParam0._fU24 )))
    {
        if (NOT (sub_4107( uParam0._fU24, l_U1660, 0 )))
        {
            if (IS_CHAR_ON_SCREEN( uParam0._fU24 ))
            {
                if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_985(), uParam0._fU24 )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3822(), uParam0._fU24, 60.00000000, 60.00000000, 60.00000000, 0 )))
                {
                    return 1;
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3822(), uParam0._fU24, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                return 1;
            }
        }
        else if (sub_4107( sub_3822(), l_U1660, 0 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3822(), uParam0._fU24, 5.00000000, 5.00000000, 5.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_60761(unknown uParam0)
{
    switch (uParam0)
    {
        case 4:
        case 10:
        return 1;
        break;
    }
    return 0;
}

void sub_60823(unknown uParam0)
{
    int I;
    boolean bVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        for ( I = 0; I < l_U1584; I++ )
        {
            if (NOT bVar4)
            {
                if (NOT (DOES_CHAR_EXIST( l_U1584[I]._fU0 )))
                {
                    l_U1584[I]._fU0 = uParam0;
                    l_U1584[I]._fU4 = -1;
                    l_U1584[I]._fU8 = 0;
                    bVar4 = true;
                }
            }
        }
    }
    return;
}

int sub_60990(unknown uParam0)
{
    if (l_U1660 == 2)
    {
        switch (uParam0)
        {
            case 44:
            case 48:
            case 49:
            return 1;
            break;
        }
    }
    return 0;
}

int sub_61811(unknown uParam0)
{
    switch (uParam0)
    {
        case 4:
        case 10:
        case 11:
        case 12:
        return 1;
        break;
    }
    return 0;
}

int sub_61894(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    if (iParam0 == nil)
    {
        return 0;
    }
    if (NOT (DOES_CHAR_EXIST( iParam0 )))
    {
        return 0;
    }
    iVar4 = sub_61938( iParam0 );
    if (NOT (iVar4 == -1))
    {
        return 1;
    }
    iVar5 = sub_62047( iParam0 );
    if (NOT (iVar5 == -1))
    {
        return 1;
    }
    if ((iParam1 < 0) || (iParam1 == 0))
    {
        SCRIPT_ASSERT( "Attempt to Make_Ped_Drunk but ragdoll msec requested is NOT_DRUNK or a negative value" );
        return 0;
    }
    iVar6 = sub_62244();
    if (iVar6 == -1)
    {
        PRINTSTRING( "\n\n\nAll drunk request slots are full - Need to increase MAX_NUMBER_OF_DRUNK_REQUESTS\n\n" );
        return 0;
    }
    g_U9074[iVar6]._fU0 = 0;
    g_U9074[iVar6]._fU4 = iParam0;
    g_U9074[iVar6]._fU8 = iParam1;
    g_U9074[iVar6]._fU12 = iParam1;
    g_U9074[iVar6]._fU16 = nil;
    g_U9074[iVar6]._fU20 = nil;
    if (iParam0 == sub_3822())
    {
        g_U9199 = 1;
    }
    return 1;
}

int sub_61938(int iParam0)
{
    int I;

    if (iParam0 == nil)
    {
        return -1;
    }
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (iParam0 == g_U9105[I]._fU4)
        {
            return g_U9105[I]._fU0;
        }
    }
    return -1;
}

int sub_62047(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (g_U9074[Result]._fU4 == iParam0)
        {
            return Result;
        }
    }
    return -1;
}

int sub_62244()
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (g_U9074[Result]._fU0 == 16)
        {
            return Result;
        }
    }
    return -1;
}

void sub_64983(int iParam0)
{
    boolean bVar3;
    boolean bVar4;
    int iVar5;
    unknown uVar6;

    if (DOES_CHAR_EXIST( iParam0->_fU24 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
        {
            if (sub_50008( iParam0->_fU56 ))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 1 );
            }
            if (NOT (IS_AMBIENT_SPEECH_PLAYING( iParam0->_fU24 )))
            {
                if (NOT (sub_2552( iParam0->_fU24 )))
                {
                    if (sub_25914( sub_52221( iParam0->_fU56 ) ))
                    {
                        uVar6 = l_U1476[iParam0->_fU56]._fU0;
                    }
                    if (NOT l_U1597)
                    {
                        if (iParam0->_fU20 > 10000)
                        {
                            switch (iParam0->_fU4)
                            {
                                case 9:
                                if (NOT (g_U30192[l_U1660] == 2))
                                {
                                    if (l_U1683 > 30000)
                                    {
                                        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( iParam0->_fU24, sub_3822(), 1.50000000, 1.50000000, 2.00000000, 0 ))
                                        {
                                            if (NOT sub_27935())
                                            {
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "GREET_LUIS", 1, 1, 0 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - GREET_LUIS" );
                                                PRINTNL();
                                                l_U1683 = 0;
                                                iParam0->_fU20 = 0;
                                            }
                                        }
                                    }
                                }
                                else if (l_U1683 > 30000)
                                {
                                    if (LOCATE_CHAR_ON_FOOT_CHAR_3D( iParam0->_fU24, sub_3822(), 1.50000000, 1.50000000, 2.00000000, 0 ))
                                    {
                                        if (NOT sub_27935())
                                        {
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "NIGHTCLUB_REFUSE_ENTRY", 1, 0, 0 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - NIGHTCLUB_REFUSE_ENTRY 1" );
                                            PRINTNL();
                                            l_U1683 = 0;
                                            iParam0->_fU20 = 0;
                                        }
                                    }
                                }
                                if (l_U1621)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1708 )))
                                    {
                                        if ((NOT (IS_AMBIENT_SPEECH_PLAYING( iParam0->_fU24 ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U1708 ))))
                                        {
                                            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar5 );
                                            switch (iVar5)
                                            {
                                                case 0:
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "NIGHTCLUB_REFUSE_ENTRY", 1, 0, 0 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - NIGHTCLUB_REFUSE_ENTRY 2" );
                                                PRINTNL();
                                                break;
                                                case 1:
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_AGGRESSIVE_NO", 1, 0, 0 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_AGGRESSIVE_NO" );
                                                PRINTNL();
                                                break;
                                                case 2:
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_DISMISSIVE_NO", 1, 0, 0 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_DISMISSIVE_NO" );
                                                PRINTNL();
                                                break;
                                            }
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, l_U1708, 3000, 0 );
                                            l_U1621 = 0;
                                        }
                                    }
                                }
                                break;
                                case 1:
                                case 7:
                                case 3:
                                case 4:
                                case 6:
                                bVar3 = true;
                                if (DOES_CHAR_EXIST( l_U1706 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1706 )))
                                    {
                                        if ((l_U1706 == iParam0->_fU24) || (IS_AMBIENT_SPEECH_PLAYING( l_U1706 )))
                                        {
                                            bVar3 = false;
                                        }
                                    }
                                }
                                if (l_U1660 == 2)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU24, -438.89600000, 349.11720000, 10.71170000, 0.50000000, 0.50000000, 2.00000000, 0 ))
                                    {
                                        bVar4 = true;
                                    }
                                }
                                if (l_U1660 == 0)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU24, -438.89600000, 349.11720000, 10.71170000, 0.50000000, 0.50000000, 2.00000000, 0 ))
                                    {
                                        bVar4 = true;
                                    }
                                }
                                if (NOT bVar4)
                                {
                                    if (bVar3)
                                    {
                                        if (NOT l_U1622)
                                        {
                                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3822(), iParam0->_fU24, 2.00000000, 2.00000000, 2.00000000, 0 )) AND ((iParam0->_fU20 > 20000) AND (l_U1685 > 6000)))
                                            {
                                                GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref iVar5 );
                                                if (iVar5 < 2)
                                                {
                                                    if ((l_U1660 == 0) || (sub_66355( iParam0->_fU24 )))
                                                    {
                                                        l_U1706 = iParam0->_fU24;
                                                        SAY_AMBIENT_SPEECH( iParam0->_fU24, "NOT_BEING_SERVED", 1, 1, 2 );
                                                        PRINTSTRING( "SAY_AMBIENT_SPEECH - NOT_BEING_SERVED" );
                                                        PRINTNL();
                                                        iParam0->_fU20 = 0;
                                                        l_U1685 = 0;
                                                    }
                                                    else if (sub_32296( iParam0->_fU52 ))
                                                    {
                                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar5 );
                                                        switch (iVar5)
                                                        {
                                                            case 0:
                                                            l_U1706 = iParam0->_fU24;
                                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "COMMENT_ON_LUIS", 1, 1, 2 );
                                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - COMMENT_ON_LUIS" );
                                                            PRINTNL();
                                                            iParam0->_fU20 = 0;
                                                            l_U1685 = 0;
                                                            break;
                                                            case 1:
                                                            l_U1706 = iParam0->_fU24;
                                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "GIGGLE", "PAIN_VOICE", 1, 1, 2 );
                                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - GIGGLE" );
                                                            PRINTNL();
                                                            iParam0->_fU20 = 0;
                                                            l_U1685 = 0;
                                                            break;
                                                        }
                                                        TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3822(), 5000, 0 );
                                                    }
                                                    else
                                                    {
                                                        l_U1706 = iParam0->_fU24;
                                                        SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_DANCEFLOOR_STATE", 1, 1, 2 );
                                                        PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_DANCEFLOOR_STATE" );
                                                        PRINTNL();
                                                        iParam0->_fU20 = 0;
                                                        l_U1685 = 0;
                                                        l_U1622 = 1;
                                                    }
                                                }
                                                else if ((l_U1690 > 20000) AND (sub_67198( iParam0->_fU24 )))
                                                {
                                                    l_U1706 = iParam0->_fU24;
                                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "EXCITED_CHEER", 1, 1, 2 );
                                                    PRINTSTRING( "SAY_AMBIENT_SPEECH - EXCITED_CHEER" );
                                                    PRINTNL();
                                                    l_U1690 = 0;
                                                    l_U1685 = 0;
                                                }
                                                else
                                                {
                                                    l_U1706 = iParam0->_fU24;
                                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_DANCEFLOOR_STATE", 1, 1, 2 );
                                                    PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_DANCEFLOOR_STATE" );
                                                    PRINTNL();
                                                    iParam0->_fU20 = 0;
                                                    l_U1685 = 0;
                                                    l_U1622 = 1;
                                                }
                                            }
                                        }
                                        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3822(), iParam0->_fU24, 3.00000000, 3.00000000, 2.00000000, 0 ))
                                        {
                                            l_U1706 = iParam0->_fU24;
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_DANCEFLOOR_RESP", 1, 1, 2 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_DANCEFLOOR_RESP" );
                                            PRINTNL();
                                            iParam0->_fU20 = 0;
                                            l_U1622 = 0;
                                        }
                                    }
                                }
                                else if ((iParam0->_fU20 > 5000) AND (l_U1685 > 5000))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3822(), iParam0->_fU24, 2.00000000, 2.00000000, 2.00000000, 0 ))
                                    {
                                        l_U1706 = iParam0->_fU24;
                                        SAY_AMBIENT_SPEECH( iParam0->_fU24, "ATTENDANT_NO_TICKET", 1, 1, 2 );
                                        PRINTSTRING( "SAY_AMBIENT_SPEECH - ATTENDANT_NO_TICKET" );
                                        PRINTNL();
                                        iParam0->_fU20 = 0;
                                    }
                                }
                                break;
                                case 5:
                                if (iParam0->_fU48 == l_U1720)
                                {
                                    if (l_U1687 > 300000)
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3822(), iParam0->_fU24, 1.50000000, 1.50000000, 2.00000000, 0 ))
                                        {
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "OFFER_COLOGNE", 1, 1, 2 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - OFFER_COLOGNE" );
                                            PRINTNL();
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3822(), 10000, 0 );
                                            l_U1687 = 0;
                                        }
                                    }
                                }
                                break;
                                case 14:
                                if (iParam0->_fU48 == -882058861)
                                {
                                    if (l_U1687 > 300000)
                                    {
                                        if (IS_CHAR_IN_AREA_3D( sub_3822(), -474.83110000, 144.02730000, 5.00000000, -470.93110000, 150.60230000, 11.86380000, 0 ))
                                        {
                                            if (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))
                                            {
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "GENERIC_HI", 1, 1, 2 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - joni says hi" );
                                                PRINTNL();
                                                TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3822(), 25000, 0 );
                                                l_U1687 = 0;
                                            }
                                        }
                                    }
                                }
                                break;
                                case 2:
                                bVar3 = true;
                                if (DOES_CHAR_EXIST( l_U1707 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1707 )))
                                    {
                                        if ((l_U1707 == iParam0->_fU24) || (IS_AMBIENT_SPEECH_PLAYING( l_U1707 )))
                                        {
                                            bVar3 = false;
                                        }
                                    }
                                }
                                if (bVar3)
                                {
                                    if (NOT (sub_25914( uVar6 )))
                                    {
                                        if (COMPARE_STRING( uVar6, "Scenario_SmokingOutsideOffice" ))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3822(), iParam0->_fU24, 4.00000000, 4.00000000, 2.00000000, 0 ))
                                            {
                                                if (NOT l_U1620)
                                                {
                                                    if (l_U1686 > 300000)
                                                    {
                                                        l_U1707 = iParam0->_fU24;
                                                        SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_SMOKE_STATE", 1, 0, 0 );
                                                        PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_SMOKE_STATE" );
                                                        PRINTNL();
                                                        iParam0->_fU20 = 0;
                                                        l_U1620 = 1;
                                                        l_U1686 = 0;
                                                    }
                                                }
                                                else
                                                {
                                                    l_U1707 = iParam0->_fU24;
                                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_SMOKE_RESP", 1, 0, 0 );
                                                    PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_SMOKE_RESP" );
                                                    PRINTNL();
                                                    iParam0->_fU20 = 0;
                                                    l_U1620 = 0;
                                                }
                                            }
                                        }
                                    }
                                }
                                break;
                                case 13:
                                if (iParam0->_fU20 > 20000)
                                {
                                    if (NOT l_U1621)
                                    {
                                        if (NOT (IS_CHAR_INJURED( g_U30210 )))
                                        {
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, g_U30210, 3000, 0 );
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "NIGHTCLUB_REFUSE_PLEAD", 1, 0, 0 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - NIGHTCLUB_REFUSE_PLEAD" );
                                            PRINTNL();
                                            l_U1708 = iParam0->_fU24;
                                            l_U1621 = 1;
                                            iParam0->_fU20 = 0;
                                        }
                                    }
                                }
                                break;
                            }
                        }
                    }
                    else
                    {
                        switch (iParam0->_fU4)
                        {
                            case 1:
                            case 7:
                            case 3:
                            case 4:
                            case 6:
                            case 10:
                            case 12:
                            if (iParam0->_fU20 > 3000)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iVar5 );
                                switch (iVar5)
                                {
                                    case 0:
                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "GUN_RUN", 1, 1, 2 );
                                    break;
                                    case 1:
                                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                    break;
                                    case 2:
                                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "HIGH_FALL", "PAIN_VOICE", 1, 1, 2 );
                                    break;
                                    case 3:
                                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC_SHORT", "PAIN_VOICE", 1, 1, 2 );
                                    break;
                                }
                                iParam0->_fU20 = 0;
                            }
                            break;
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_66355(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (l_U1660)
        {
            case 0:
            if ((IS_CHAR_IN_AREA_3D( uParam0, -398.35210000, 436.67440000, 4.69930000, -386.22710000, 438.67440000, 8.17430000, 0 )) || (IS_CHAR_IN_AREA_3D( uParam0, -399.23300000, 404.80890000, 3.59930000, -391.15800000, 411.48390000, 7.67430000, 0 )))
            {
                return 1;
            }
            break;
            case 2:
            if (IS_CHAR_IN_AREA_3D( uParam0, -437.19730000, 352.37860000, 10.19170000, -430.17230000, 355.72860000, 13.71660000, 0 ))
            {
                return 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_AREA_3D( uParam0, -486.86260000, 156.69480000, 6.05520000, -480.53760000, 158.54480000, 9.55519900, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

int sub_67198(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_AREA_3D( uParam0, l_U126._fU28._fU0, l_U126._fU28._fU4, l_U126._fU28._fU8, l_U126._fU40._fU0, l_U126._fU40._fU4, l_U126._fU40._fU8, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_69927()
{
    int I;

    for ( I = 0; I < l_U1584; I++ )
    {
        sub_69960( ref l_U1584[I] );
    }
    return;
}

void sub_69960(int iParam0)
{
    int iVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        iVar3 = 0;
        if (IS_CHAR_PLAYING_ANIM( iParam0->_fU0, "missnightclub", "MALE_puke" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( iParam0->_fU0, "missnightclub", "MALE_puke", ref uVar4 );
            iVar3 = 1;
        }
        else if (IS_CHAR_PLAYING_ANIM( iParam0->_fU0, "missnightclub", "female_puke" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( iParam0->_fU0, "missnightclub", "female_puke", ref uVar4 );
            iVar3 = 2;
        }
        if (iVar3 > 0)
        {
            if (sub_70190( iVar3, uVar4 ))
            {
                if (NOT iParam0->_fU8)
                {
                    iParam0->_fU4 = START_PTFX_ON_PED_BONE( "drink_champagne_vomit", iParam0->_fU0, l_U1794, l_U1797, 1205, 1.00000000 );
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU0, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                    iParam0->_fU8 = 1;
                }
            }
            else if (iParam0->_fU8)
            {
                STOP_PTFX( iParam0->_fU4 );
                iParam0->_fU8 = 0;
            }
        }
        else if (iParam0->_fU8)
        {
            STOP_PTFX( iParam0->_fU4 );
            iParam0->_fU8 = 0;
        }
    }
    else if (iParam0->_fU0 != nil)
    {
        if (iParam0->_fU8)
        {
            STOP_PTFX( iParam0->_fU4 );
        }
        iParam0->_fU0 = nil;
        iParam0->_fU8 = 0;
        iParam0->_fU4 = -1;
    }
    return;
}

int sub_70190(int iParam0, float fParam1)
{
    if (NOT g_U30166)
    {
        if (iParam0 == 1)
        {
            if (((fParam1 <= 0.87000000) AND (fParam1 >= 0.85000000)) || (((fParam1 <= 0.81000000) AND (fParam1 >= 0.77000000)) || (((fParam1 <= 0.44000000) AND (fParam1 >= 0.41000000)) || ((fParam1 <= 0.30000000) AND (fParam1 >= 0.24000000)))))
            {
                return 1;
            }
            return 0;
        }
        else if (iParam0 == 2)
        {
            if (((fParam1 <= 0.74000000) AND (fParam1 >= 0.70999990)) || (((fParam1 <= 0.56000000) AND (fParam1 >= 0.54000000)) || ((fParam1 <= 0.26000000) AND (fParam1 >= 0.25000000))))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_70834(unknown uParam0)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if (((uParam0^)[I]._fU4 == 14) || (((uParam0^)[I]._fU4 == 5) || (((uParam0^)[I]._fU4 == 7) || (((uParam0^)[I]._fU4 == 6) || (((uParam0^)[I]._fU4 == 13) || (((uParam0^)[I]._fU4 == 2) || (((uParam0^)[I]._fU4 == 9) || ((uParam0^)[I]._fU4 == 8))))))))
        {
            (uParam0^)[I]._fU0 = 0;
        }
        if (NOT (l_U139[I]._fU24 == g_U30208))
        {
            if (DOES_CHAR_EXIST( (uParam0^)[I]._fU24 ))
            {
                sub_2521( ref (uParam0^)[I], 1 );
                (uParam0^)[I]._fU8 = 0;
                (uParam0^)[I]._fU12 = 0;
            }
        }
    }
    return;
}

int sub_71848(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        sub_71868( uParam0, 0 );
        if ((HAS_MODEL_LOADED( -2037134882 )) AND ((HAS_MODEL_LOADED( -268530289 )) AND ((HAVE_ANIMS_LOADED( "AMB@SMOKING" )) AND ((HAVE_ANIMS_LOADED( "AMB@SMOKING_F" )) AND (HAVE_ANIMS_LOADED( "missnightclub" ))))))
        {
            switch (uParam0)
            {
                case 0:
                if ((HAVE_ANIMS_LOADED( "missamb_bama" )) AND ((HAS_SCRIPT_LOADED( "ambNightclubBM2" )) AND ((HAS_MODEL_LOADED( -1684055465 )) AND ((HAS_MODEL_LOADED( -844218756 )) AND ((HAS_MODEL_LOADED( 1758965191 )) AND ((HAS_MODEL_LOADED( 982077731 )) AND ((HAS_MODEL_LOADED( 1756785265 )) AND (HAS_MODEL_LOADED( -1696530209 )))))))))
                {
                    return 1;
                }
                break;
                case 1:
                if ((HAVE_ANIMS_LOADED( "missamb_m9" )) AND ((HAS_SCRIPT_LOADED( "ambNightclubM92" )) AND ((HAS_MODEL_LOADED( -1446884113 )) AND ((HAS_MODEL_LOADED( 1429700748 )) AND ((HAS_MODEL_LOADED( g_U30221 )) AND ((HAS_MODEL_LOADED( g_U30220 )) AND ((HAS_MODEL_LOADED( g_U30219 )) AND ((HAS_MODEL_LOADED( g_U30218 )) AND ((HAS_MODEL_LOADED( 1756785265 )) AND (HAS_MODEL_LOADED( -1696530209 )))))))))))
                {
                    return 1;
                }
                break;
                case 2:
                if ((HAVE_ANIMS_LOADED( "missamb_herc_male" )) AND ((HAVE_ANIMS_LOADED( "missamb_herc_female" )) AND ((HAS_SCRIPT_LOADED( "ambNightclubHC2" )) AND ((HAS_MODEL_LOADED( 1662473323 )) AND ((HAS_MODEL_LOADED( g_U30225 )) AND ((HAS_MODEL_LOADED( g_U30224 )) AND ((HAS_MODEL_LOADED( g_U30223 )) AND (HAS_MODEL_LOADED( g_U30222 )))))))))
                {
                    return 1;
                }
                break;
            }
        }
    }
    else
    {
        switch (uParam0)
        {
            case 0:
            if ((HAS_MODEL_LOADED( -844218756 )) AND ((HAS_MODEL_LOADED( 982077731 )) AND (HAS_MODEL_LOADED( 1756785265 ))))
            {
                return 1;
            }
            break;
            case 1:
            if ((HAS_MODEL_LOADED( -1446884113 )) AND ((HAS_MODEL_LOADED( g_U30220 )) AND (HAS_MODEL_LOADED( g_U30218 ))))
            {
                return 1;
            }
            break;
            case 2:
            if ((HAS_MODEL_LOADED( 1662473323 )) AND ((HAS_MODEL_LOADED( g_U30224 )) AND (HAS_MODEL_LOADED( g_U30222 ))))
            {
                return 1;
            }
            break;
        }
        return 0;
    }
    PRINTSTRING( "HAVE_ASSETS_FOR_CLUB_LOADED - " );
    switch (uParam0)
    {
        case 0:
        PRINTSTRING( "BAHAMA MAMAS" );
        break;
        case 1:
        PRINTSTRING( "MAISONETTE 9" );
        break;
        case 2:
        PRINTSTRING( "HERCULES" );
        break;
    }
    PRINTSTRING( " - loading..." );
    PRINTNL();
    return 0;
}

void sub_71868(unknown uParam0, boolean bParam1)
{
    sub_71879( uParam0 );
    if (bParam1)
    {
        switch (uParam0)
        {
            case 0:
            REQUEST_MODEL( 1756785265 );
            REQUEST_MODEL( 982077731 );
            REQUEST_MODEL( -844218756 );
            break;
            case 1:
            REQUEST_MODEL( g_U30218 );
            REQUEST_MODEL( g_U30220 );
            REQUEST_MODEL( -1446884113 );
            break;
            case 2:
            REQUEST_MODEL( g_U30222 );
            REQUEST_MODEL( g_U30224 );
            REQUEST_MODEL( 1662473323 );
            break;
        }
    }
    else
    {
        REQUEST_ANIMS( "missnightclub" );
        REQUEST_ANIMS( "AMB@SMOKING_F" );
        REQUEST_ANIMS( "AMB@SMOKING" );
        REQUEST_MODEL( -268530289 );
        REQUEST_MODEL( -2037134882 );
        switch (uParam0)
        {
            case 0:
            REQUEST_MODEL( -1696530209 );
            REQUEST_MODEL( 1756785265 );
            REQUEST_MODEL( 982077731 );
            REQUEST_MODEL( 1758965191 );
            REQUEST_MODEL( -844218756 );
            REQUEST_MODEL( -1684055465 );
            REQUEST_SCRIPT( "ambNightclubBM2" );
            REQUEST_ANIMS( "missamb_bama" );
            break;
            case 1:
            REQUEST_MODEL( -1696530209 );
            REQUEST_MODEL( 1756785265 );
            REQUEST_MODEL( g_U30218 );
            REQUEST_MODEL( g_U30219 );
            REQUEST_MODEL( g_U30220 );
            REQUEST_MODEL( g_U30221 );
            REQUEST_MODEL( 1429700748 );
            REQUEST_MODEL( -1446884113 );
            REQUEST_SCRIPT( "ambNightclubM92" );
            REQUEST_ANIMS( "missamb_m9" );
            break;
            case 2:
            REQUEST_MODEL( g_U30222 );
            REQUEST_MODEL( g_U30223 );
            REQUEST_MODEL( g_U30224 );
            REQUEST_MODEL( g_U30225 );
            REQUEST_MODEL( 1662473323 );
            REQUEST_SCRIPT( "ambNightclubHC2" );
            REQUEST_ANIMS( "missamb_herc_female" );
            REQUEST_ANIMS( "missamb_herc_male" );
            break;
        }
    }
    g_U30144 = 1;
    return;
}

void sub_71879(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: break;
        case 1:
        if (g_U30218 == 0)
        {
            g_U30218 = 698554670;
        }
        if (g_U30219 == 0)
        {
            g_U30219 = -747359056;
        }
        if (g_U30220 == 0)
        {
            g_U30220 = 930552533;
        }
        if (g_U30221 == 0)
        {
            g_U30221 = -297585214;
        }
        break;
        case 2:
        if (g_U30222 == 0)
        {
            g_U30222 = 284474691;
        }
        if (g_U30223 == 0)
        {
            g_U30223 = 563038535;
        }
        if (g_U30224 == 0)
        {
            g_U30224 = -1064645793;
        }
        if (g_U30225 == 0)
        {
            g_U30225 = -808865642;
        }
        break;
    }
    return;
}

void sub_74127()
{
    unknown uVar2;

    if (NOT l_U1605)
    {
        sub_74151( ref l_U1385 );
        sub_74151( ref l_U139 );
        sub_74379();
        l_U1605 = 1;
    }
    return;
}

void sub_74151(unknown uParam0)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if ((uParam0^)[I]._fU0)
        {
            if (NOT ((uParam0^)[I]._fU48 == 0))
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( (uParam0^)[I]._fU48 );
            }
        }
        if (l_U1599)
        {
            PRINTSTRING( "REMOVE_CLUB_PED - called from REMOVE_ALL_CLUB_PEDS_AND_UNLOAD_ASSETS_FROM_CLUBPED_ARRAY" );
            PRINTNL();
        }
        sub_41068( ref (uParam0^)[I], 1 );
    }
    return;
}

void sub_74379()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < l_U1534; I++ )
    {
        uVar3 = sub_52221( l_U1534[I]._fU24 );
        if (NOT (sub_25914( uVar3 )))
        {
            REMOVE_ANIMS( uVar3 );
        }
    }
    return;
}

void sub_74734()
{
    int I;
    int iVar3;

    OPEN_DEBUG_FILE();
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "// *********************************************************************************************" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    switch (l_U1660)
    {
        case 0:
        SAVE_STRING_TO_DEBUG_FILE( "//    BAHAMA MAMAS CLUB DETAILS" );
        break;
        case 2:
        SAVE_STRING_TO_DEBUG_FILE( "//    HERCULES CLUB DETAILS" );
        break;
        case 1:
        SAVE_STRING_TO_DEBUG_FILE( "//    MAISONETTE 9 CLUB DETAILS" );
        break;
    }
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "// *********************************************************************************************" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "// club peds " );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    for ( I = 0; I < l_U139; I++ )
    {
        if (l_U139[I]._fU0)
        {
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].bIsActive = TRUE" );
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].iModel = " );
            switch (l_U139[I]._fU52)
            {
                case 0:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_CUSTOM" );
                SAVE_NEWLINE_TO_DEBUG_FILE();
                SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
                SAVE_INT_TO_DEBUG_FILE( iVar3 );
                SAVE_STRING_TO_DEBUG_FILE( "].ModelName = //  this needs to be filled out manually " );
                break;
                case 1:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_RANDOM_FEMALE" );
                break;
                case 2:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_RANDOM_MALE" );
                break;
                case 3:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_FEMALE_1" );
                break;
                case 4:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_FEMALE_2" );
                break;
                case 5:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_MALE_1" );
                break;
                case 6:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_MALE_2" );
                break;
                case 7:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_BAR_STAFF" );
                break;
                case 8:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_BOUNCER" );
                break;
                case 9:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_DESSIE" );
                break;
                case 10:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_TROY" );
                break;
                case 11:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_BATHROOM_ATTENDANT" );
                break;
            }
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].iType = " );
            switch (l_U139[I]._fU4)
            {
                case 1:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_CROWD" );
                break;
                case 2:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_EXTERIOR_CROWD" );
                break;
                case 13:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_REFUSED_ENTRY" );
                break;
                case 3:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_BOTH_CROWD" );
                break;
                case 4:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_PATROL" );
                break;
                case 5:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_STAFF" );
                break;
                case 14:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_JONI" );
                break;
                case 6:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_BOTH_PATROL" );
                break;
                case 7:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_STAIRWELL_PED" );
                break;
                case 8:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_BOUNCER" );
                break;
                case 9:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_EXTERIOR_BOUNCER" );
                break;
                case 10:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_DANCER" );
                break;
                case 11:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_EXTERIOR_ONLOOKER" );
                break;
                case 12:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_SPECIFIC_DANCER" );
                break;
            }
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].iClubAnim = CLUB_ANIM_" );
            if (l_U139[I]._fU56 > 17)
            {
                switch (l_U1660)
                {
                    case 0:
                    SAVE_STRING_TO_DEBUG_FILE( "BM_" );
                    break;
                    case 2:
                    if (l_U139[I]._fU56 < 43)
                    {
                        SAVE_STRING_TO_DEBUG_FILE( "HERC_FEMALE_" );
                    }
                    else
                    {
                        SAVE_STRING_TO_DEBUG_FILE( "HERC_MALE_" );
                    }
                    break;
                    case 1:
                    SAVE_STRING_TO_DEBUG_FILE( "M9_" );
                    break;
                }
            }
            if (NOT (sub_25914( l_U1476[l_U139[I]._fU56]._fU0 )))
            {
                SAVE_STRING_TO_DEBUG_FILE( l_U1476[l_U139[I]._fU56]._fU0 );
            }
            else
            {
                PRINTSTRING( "iClubAnim = " );
                PRINTINT( l_U139[I]._fU56 );
                PRINTNL();
                SCRIPT_ASSERT( "club anim strname is null!" );
            }
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].pos = <<" );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U139[I]._fU28._fU0 );
            SAVE_STRING_TO_DEBUG_FILE( ", " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U139[I]._fU28._fU4 );
            SAVE_STRING_TO_DEBUG_FILE( ", " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U139[I]._fU28._fU8 );
            SAVE_STRING_TO_DEBUG_FILE( ">>" );
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].fHeading = " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U139[I]._fU40 );
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_NEWLINE_TO_DEBUG_FILE();
            iVar3++;
        }
    }
    SAVE_NEWLINE_TO_DEBUG_FILE();
    iVar3 = 0;
    SAVE_STRING_TO_DEBUG_FILE( "// patrol points" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    for ( I = 0; I < l_U1534; I++ )
    {
        SAVE_STRING_TO_DEBUG_FILE( "PatrolPoints[" );
        SAVE_INT_TO_DEBUG_FILE( iVar3 );
        SAVE_STRING_TO_DEBUG_FILE( "].pos = <<" );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U1534[I]._fU0._fU0 );
        SAVE_STRING_TO_DEBUG_FILE( ", " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U1534[I]._fU0._fU4 );
        SAVE_STRING_TO_DEBUG_FILE( ", " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U1534[I]._fU0._fU8 );
        SAVE_STRING_TO_DEBUG_FILE( ">>" );
        SAVE_NEWLINE_TO_DEBUG_FILE();
        SAVE_STRING_TO_DEBUG_FILE( "PatrolPoints[" );
        SAVE_INT_TO_DEBUG_FILE( iVar3 );
        SAVE_STRING_TO_DEBUG_FILE( "].heading = " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U1534[I]._fU12 );
        SAVE_NEWLINE_TO_DEBUG_FILE();
        SAVE_STRING_TO_DEBUG_FILE( "PatrolPoints[" );
        SAVE_INT_TO_DEBUG_FILE( iVar3 );
        SAVE_STRING_TO_DEBUG_FILE( "].iClubAnim = CLUB_ANIM_" );
        if (l_U1534[I]._fU24 > 17)
        {
            if ((l_U1660 == 1) || (l_U1660 == 0))
            {
                SAVE_STRING_TO_DEBUG_FILE( "M9_" );
            }
            else if (l_U1534[I]._fU24 < 43)
            {
                SAVE_STRING_TO_DEBUG_FILE( "HERC_FEMALE_" );
            }
            else
            {
                SAVE_STRING_TO_DEBUG_FILE( "HERC_MALE_" );
            }
        }
        SAVE_STRING_TO_DEBUG_FILE( l_U1476[l_U1534[I]._fU24]._fU0 );
        SAVE_NEWLINE_TO_DEBUG_FILE();
        SAVE_STRING_TO_DEBUG_FILE( "PatrolPoints[" );
        SAVE_INT_TO_DEBUG_FILE( iVar3 );
        SAVE_STRING_TO_DEBUG_FILE( "].iType = " );
        switch (l_U1534[I]._fU16)
        {
            case 0:
            SAVE_STRING_TO_DEBUG_FILE( "PATROL_POINT_TYPE_DEFAULT" );
            break;
            case 1:
            SAVE_STRING_TO_DEBUG_FILE( "PATROL_POINT_TYPE_FEMALE_ONLY" );
            break;
        }
        SAVE_NEWLINE_TO_DEBUG_FILE();
        SAVE_NEWLINE_TO_DEBUG_FILE();
        iVar3++;
    }
    SAVE_NEWLINE_TO_DEBUG_FILE();
    CLOSE_DEBUG_FILE();
    WAIT( 0 );
    return;
}

void sub_78197()
{
    float fVar2;
    float fVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;

    l_U1691 = GET_AUDIO_ROOM_ID();
    if (l_U1597)
    {
        if (NOT l_U1635)
        {
            GET_GAME_TIMER( ref iVar4 );
            iVar5 = iVar4 - l_U1702;
            if (iVar5 > 10000)
            {
                TRIGGER_POLICE_REPORT( "E2_GENERIC_CLUB_REPORT" );
                l_U1635 = 1;
            }
        }
    }
    if ((g_U30178) || (l_U1597))
    {
        if ((NOT l_U1630) AND (NOT (l_U1699 == -1)))
        {
            MUTE_STATIC_EMITTER( l_U1699, 1 );
            l_U1630 = 1;
        }
    }
    else if (NOT g_U30178)
    {
        if (l_U1630)
        {
            if (NOT (l_U1699 == -1))
            {
                MUTE_STATIC_EMITTER( l_U1699, 0 );
                l_U1630 = 0;
            }
        }
    }
    if (NOT (l_U1696 == l_U1691))
    {
        switch (l_U1660)
        {
            case 0:
            switch (l_U1691)
            {
                case 0:
                l_U1646 = 2.50000000;
                l_U1647 = 2500.00000000;
                l_U1648 = 0.50000000;
                break;
                case 1:
                l_U1646 = 2.50000000;
                l_U1647 = 5000.00000000;
                l_U1648 = 0.60000000;
                break;
                case 2:
                l_U1646 = 2.50000000;
                l_U1647 = 10000.00000000;
                l_U1648 = 0.80000000;
                break;
                case 3:
                l_U1646 = 2.00000000;
                l_U1647 = 15000.00000000;
                l_U1648 = 0.90000000;
                break;
                case 4:
                l_U1646 = 2.50000000;
                l_U1647 = 1500.00000000;
                l_U1648 = 0.20000000;
                break;
                case -1:
                l_U1646 = 5.00000000;
                l_U1647 = 1000.00000000;
                l_U1648 = 0.10000000;
                break;
            }
            break;
            case 1:
            switch (l_U1691)
            {
                case 0:
                l_U1646 = 2.50000000;
                l_U1647 = 5000.00000000;
                l_U1648 = 0.40000000;
                break;
                case 1:
                l_U1646 = 2.50000000;
                l_U1647 = 9000.00000000;
                l_U1648 = 0.60000000;
                break;
                case 2:
                l_U1646 = 2.50000000;
                l_U1647 = 9000.00000000;
                l_U1648 = 0.60000000;
                break;
                case 3:
                l_U1646 = 2.50000000;
                l_U1647 = 2000.00000000;
                l_U1648 = 0.30000000;
                break;
                case 4:
                l_U1646 = 2.50000000;
                l_U1647 = 2000.00000000;
                l_U1648 = 0.30000000;
                break;
                case 5:
                l_U1646 = 2.50000000;
                l_U1647 = 15000.00000000;
                l_U1648 = 0.90000000;
                break;
                case 6:
                l_U1646 = 2.50000000;
                l_U1647 = 13000.00000000;
                l_U1648 = 0.70000000;
                break;
                case 7:
                l_U1646 = 2.50000000;
                l_U1647 = 12000.00000000;
                l_U1648 = 0.80000000;
                break;
                case 8:
                l_U1646 = 2.50000000;
                l_U1647 = 12000.00000000;
                l_U1648 = 0.70000000;
                break;
                case 9:
                l_U1646 = 2.50000000;
                l_U1647 = 900.00000000;
                l_U1648 = 0.10000000;
                break;
                case 10:
                l_U1646 = 2.50000000;
                l_U1647 = 1500.00000000;
                l_U1648 = 0.20000000;
                break;
                case -1:
                l_U1646 = 3.50000000;
                l_U1647 = 1000.00000000;
                l_U1648 = 0.10000000;
                break;
            }
            break;
            case 2:
            switch (l_U1691)
            {
                case 0:
                l_U1646 = 3.00000000;
                l_U1647 = 15000.00000000;
                l_U1648 = 0.80000000;
                break;
                case 1:
                l_U1646 = 5.00000000;
                l_U1647 = 2000.00000000;
                l_U1648 = 0.50000000;
                break;
                case 2:
                l_U1646 = 5.00000000;
                l_U1647 = 2000.00000000;
                l_U1648 = 0.50000000;
                break;
                case -1:
                l_U1646 = 6.00000000;
                l_U1647 = 1000.00000000;
                l_U1648 = 0.10000000;
                break;
            }
            break;
        }
        l_U1640 = l_U1643;
        l_U1641 = l_U1644;
        l_U1642 = l_U1645;
        GET_GAME_TIMER( ref l_U1697 );
    }
    else if (IS_THREAD_ACTIVE( g_U30249 ))
    {
        l_U1648 = g_U30187;
    }
    GET_GAME_TIMER( ref iVar6 );
    iVar7 = iVar6 - l_U1697;
    if (iVar7 < l_U1695)
    {
        fVar8 = (TO_FLOAT( iVar7 )) / (TO_FLOAT( l_U1695 ));
    }
    else
    {
        fVar8 = 1.00000000;
    }
    if (NOT (l_U1691 == -1))
    {
        fVar9 = l_U1646 - l_U1640;
        fVar9 *= fVar8;
        l_U1643 = l_U1640 + fVar9;
        fVar9 = l_U1647 - l_U1641;
        fVar9 *= fVar8;
        l_U1644 = l_U1641 + fVar9;
        fVar9 = l_U1648 - l_U1642;
        fVar9 *= fVar8;
        l_U1645 = l_U1642 + fVar9;
    }
    else
    {
        fVar2 = sub_79748( l_U1660 );
        fVar3 = fVar2;
        if (fVar3 > l_U1652)
        {
            fVar3 = l_U1652;
        }
        fVar3 /= l_U1652;
        l_U1649 = (1.00000000 - fVar3) * l_U1646;
        l_U1650 = l_U1647;
        l_U1651 = l_U1648;
        fVar9 = l_U1649 - l_U1640;
        fVar9 *= fVar8;
        l_U1643 = l_U1640 + fVar9;
        fVar9 = l_U1650 - l_U1641;
        fVar9 *= fVar8;
        l_U1644 = l_U1641 + fVar9;
        fVar9 = l_U1651 - l_U1642;
        fVar9 *= fVar8;
        l_U1645 = l_U1642 + fVar9;
    }
    l_U1696 = l_U1691;
    if (g_U30177)
    {
        if (NOT (IS_THREAD_ACTIVE( g_U30248 )))
        {
            g_U30177 = 0;
            g_U30248 = nil;
        }
    }
    if (NOT (g_U30197 == -1))
    {
        if (NOT (g_U30197 == l_U1660))
        {
            l_U1692 = 0;
        }
        else if (((NOT g_U30154[l_U1660]) AND (g_U30149[l_U1660])) || ((g_U30177) || (NOT (sub_18479( sub_3822(), g_U30197, l_U1653 )))))
        {
            if (l_U1626)
            {
                if (g_U30177)
                {
                    l_U1700 = GET_STREAM_PLAYTIME();
                    GET_GAME_TIMER( ref l_U1701 );
                }
                else
                {
                    l_U1700 = -1;
                }
            }
            else
            {
                l_U1700 = -1;
            }
            l_U1692 = 0;
            if (NOT (GET_STREAM_PLAYTIME() == -1))
            {
                STOP_STREAM();
            }
            if (l_U1626)
            {
                STOP_STREAM();
                l_U1626 = 0;
            }
            sub_6446();
            if (NOT g_U30177)
            {
                if (l_U1627)
                {
                    if (l_U1628)
                    {
                        MUTE_POSITIONED_RADIO( 0 );
                        l_U1627 = 0;
                    }
                }
            }
            g_U30197 = -1;
        }
    }
    switch (l_U1692)
    {
        case 0:
        if (fVar2 < l_U1652)
        {
            if (g_U30197 == -1)
            {
                if ((g_U30154[l_U1660]) || ((NOT ((NOT g_U30154[l_U1660]) AND (g_U30149[l_U1660]))) AND ((NOT g_U30177) AND (sub_18479( sub_3822(), l_U1660, l_U1653 )))))
                {
                    if (GET_STREAM_PLAYTIME() == -1)
                    {
                        l_U1692++;
                        if (NOT l_U1629)
                        {
                            REGISTER_SCRIPT_WITH_AUDIO( 0 );
                            l_U1629 = 1;
                        }
                        if (l_U1628)
                        {
                            MUTE_POSITIONED_RADIO( 1 );
                            l_U1627 = 1;
                        }
                        if (l_U1700 == -1)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 600000, ref l_U1694 );
                            g_U30197 = l_U1660;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref iVar6 );
                            iVar5 = iVar6 - l_U1701;
                            l_U1694 = l_U1700 + iVar5;
                            g_U30197 = l_U1660;
                            PRINTSTRING( "CLUB AUDIO - restarting stream from new position - iStreamOffset = " );
                            PRINTINT( l_U1694 );
                            PRINTNL();
                        }
                    }
                    else
                    {
                        PRINTSTRING( "Club " );
                        switch (l_U1660)
                        {
                            case 0:
                            PRINTSTRING( "BAHAMA MAMAS" );
                            break;
                            case 1:
                            PRINTSTRING( "MAISONETTE 9" );
                            break;
                            case 2:
                            PRINTSTRING( "HERCULES" );
                            break;
                        }
                        PRINTSTRING( " is trying to start audio but NOT GET_STREAM_PLAYTIME() = -1" );
                        PRINTNL();
                        STOP_STREAM();
                    }
                }
            }
        }
        break;
        case 1:
        switch (l_U1660)
        {
            case 2:
            if (PRELOAD_STREAM_WITH_START_OFFSET( "DANCING_HERCULES_MIX", l_U1694 ))
            {
                PLAY_STREAM_FRONTEND();
                PRINTSTRING( "PLAY_STREAM_FRONTEND - called with DANCING_HERCULES_MIX" );
                PRINTNL();
                l_U1626 = 1;
                l_U1692++;
            }
            break;
            case 1:
            if (PRELOAD_STREAM_WITH_START_OFFSET( "DANCING_MAISONETTE_MIX", l_U1694 ))
            {
                PLAY_STREAM_FRONTEND();
                PRINTSTRING( "PLAY_STREAM_FRONTEND - called with DANCING_MAISONETTE_MIX" );
                PRINTNL();
                l_U1626 = 1;
                l_U1692++;
            }
            break;
            case 0:
            if (PRELOAD_STREAM_WITH_START_OFFSET( "DANCING_BAHAMAMAMMAS_MIX", l_U1694 ))
            {
                PLAY_STREAM_FRONTEND();
                PRINTSTRING( "PLAY_STREAM_FRONTEND - called with DANCING_BAHAMAMAMMAS_MIX" );
                PRINTNL();
                l_U1626 = 1;
                l_U1692++;
            }
            break;
        }
        break;
        case 2:
        if (l_U1626)
        {
            SET_STREAM_PARAMS( l_U1643, ROUND( l_U1644 ) );
        }
        break;
    }
    switch (l_U1693)
    {
        case 0:
        if (g_U30197 == l_U1660)
        {
            if ((NOT l_U1597) AND (l_U1692 > 0))
            {
                l_U1693++;
            }
        }
        break;
        case 1:
        if (REQUEST_AMBIENT_AUDIO_BANK( "EP2_SFX\CLUB_WALLA" ))
        {
            l_U1698 = GET_SOUND_ID();
            PLAY_SOUND_FRONTEND( l_U1698, "CLUB_WALLA" );
            l_U1693++;
        }
        break;
        case 2:
        if (NOT (l_U1698 == -1))
        {
            if (NOT (HAS_SOUND_FINISHED( l_U1698 )))
            {
                if (NOT l_U1597)
                {
                    SET_VARIABLE_ON_SOUND( l_U1698, "Loudness", l_U1645 );
                }
                else if (sub_4107( sub_3822(), l_U1660, 0 ))
                {
                    switch (l_U1660)
                    {
                        case 1:
                        PLAY_SOUND_FROM_POSITION( -1, "CLUB_WALLA_PANIC", 65053, 150, 9 );
                        break;
                        case 2:
                        PLAY_SOUND_FROM_POSITION( -1, "CLUB_WALLA_PANIC", 65101, 352, 12 );
                        break;
                        case 0:
                        PLAY_SOUND_FROM_POSITION( -1, "CLUB_WALLA_PANIC", 65146, 427, 6 );
                        break;
                    }
                }
                sub_6446();;
            }
            else
            {
                sub_6446();
            }
        }
        else
        {
            sub_6446();
        }
        break;
    }
    return;
}

float sub_79748(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    vVar3 = {sub_18490( uParam0 )};
    GET_GAME_CAM( ref uVar12 );
    if (DOES_CAM_EXIST( uVar12 ))
    {
        GET_CAM_POS( uVar12, ref vVar6.x, ref vVar6.y, ref vVar6.z );
        uVar9 = {vVar6 - vVar3};
        return VMAG( uVar9 );
    }
    return -1.00000000;
}

void sub_82001(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;

    if (NOT l_U125)
    {
        l_U125 = 1;
    }
    if ((IS_PLAYER_CONTROL_ON( sub_985() )) || (g_U10597))
    {
        if (NOT (sub_82052( iParam0 )))
        {
            if (g_U30197 == iParam0)
            {
                if (GET_STREAM_PLAYTIME() > 0)
                {
                    GET_STREAM_BEAT_INFO( ref l_U115, ref l_U116, ref l_U117 );
                    GET_ROOT_CAM( ref uVar3 );
                    if (DOES_CAM_EXIST( uVar3 ))
                    {
                        GET_CAM_POS( uVar3, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                        switch (iParam0)
                        {
                            case 0:
                            vVar7 = {-390.60390000, 424.73400000, 6.20160000};
                            break;
                            case 1:
                            vVar7 = {-485.47840000, 147.79830000, 6.55100000};
                            break;
                            case 2:
                            vVar7 = {-428.55470000, 351.42450000, 11.72620000};
                            break;
                        }
                        GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, vVar7.x, vVar7.y, vVar7.z, ref l_U120 );
                        l_U123 = l_U110 / (l_U120 * l_U121);
                        if (l_U123 > 1.00000000)
                        {
                            l_U123 = 1.00000000;
                        }
                        else if (l_U123 < 0.00000000)
                        {
                            l_U123 = 0.00000000;
                        }
                        SET_DANCE_SHAKE_ACTIVE_THIS_UPDATE( l_U123 );
                    }
                }
            }
        }
    }
    return;
}

int sub_82052(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        if ((IS_CHAR_IN_AREA_3D( sub_3822(), -468.32000000, 156.33000000, 11.46000000, -476.07000000, 166.44000000, 8.74000000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_3822(), -474.97280000, 143.74440000, 8.86370000, -471.82280000, 150.54440000, 11.86370000, 0 )))
        {
            return 1;
        }
        break;
        case 0:
        if (IS_CHAR_IN_AREA_3D( sub_3822(), -382.97280000, 441.74440000, 8.86370000, -368.82280000, 430.54440000, 5.86370000, 0 ))
        {
            return 1;
        }
        break;
    }
    if (NOT (sub_4107( sub_3822(), uParam0, 0 )))
    {
        return 1;
    }
    return 0;
}

int sub_82715(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_82735( "E2MF2AU", 7 ))
    {
        if (sub_83100( uParam0, uParam1, uParam2, 1 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_82735(unknown uParam0, unknown uParam1)
{
    if (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 ))
    {
        sub_82762( uParam0 );
        if (NOT (IS_CHAR_INJURED( sub_3822() )))
        {
            sub_82899( 0, sub_3822(), "LUIS", 0 );
        }
        return 1;
    }
    else if (NOT (IS_STREAMING_ADDITIONAL_TEXT( uParam1 )))
    {
        REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
    }
    return 0;
}

void sub_82762(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_82779();
    return;
}

void sub_82779()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U6._fU16[I]._fU0 = nil;
        StrCopy( ref l_U6._fU16[I]._fU4, "", 32 );
        l_U6._fU344[I] = 0;
    }
    return;
}

void sub_82899(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_82979( "\n PED NUMBER ", uParam0 );
    sub_83019( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_82979(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_83019(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_83100(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_83121( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_83121(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_83175( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_83175(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_83197( iParam1 )))
    {
        return 0;
    }
    l_U6._fU384 = 0;
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_83885( ref g_U8868, ref l_U6 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_83197(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_83274( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_83274( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_83274( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_83274(unknown uParam0)
{
    return;
}

void sub_83885(int iParam0, int iParam1)
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

int sub_84707()
{
    if ((g_U10953._fU4) || (IS_AUTO_SAVE_IN_PROGRESS()))
    {
        return 0;
    }
    if (IS_CHAR_DEAD( sub_3822() ))
    {
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_985() )))
    {
        return 0;
    }
    if (g_U12379)
    {
        return 0;
    }
    if (g_U12381)
    {
        return 0;
    }
    if ((sub_37871()) || (sub_28002()))
    {
        return 0;
    }
    if (NOT g_U22957)
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_985() )))
    {
        return 0;
    }
    if (NOT (sub_37954( 1, 1 )))
    {
        return 0;
    }
    if (IS_BIT_SET( g_U10938._fU0, 4 ))
    {
        return 0;
    }
    if (NOT sub_38273())
    {
        return 0;
    }
    return 1;
}

void sub_85040()
{
    int iVar2;

    iVar2 = 0;
    sub_85052();
    CLEAR_BRIEF();
    g_U12379 = 1;
    g_U30153 = 1;
    g_U10965 = 148;
    sub_85902();
    return;
}

void sub_85052()
{
    sub_85061();
    sub_85206( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_85280();
    return;
}

void sub_85061()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_85206(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_85280()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_85318( 1, g_U575[I] )) == 0)
        {
            sub_85569( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_85747())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_85318(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_85569(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_85654( g_U575 - 1 );
    return;
}

void sub_85654(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_85747()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_85318( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_85902()
{
    unknown uVar2;

    uVar2 = g_U10965;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

