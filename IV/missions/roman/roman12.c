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
    l_U659 = 1;
    l_U793 = 0;
    l_U794 = 0;
    l_U795 = 0;
    l_U797 = 250;
    l_U963 = {1.00000000, 0.00000000, 0.00000000};
    l_U966 = 0.30000000;
    l_U977 = {1189.90000000, 1451.27000000, 31.56000000};
    l_U980 = 90.00000000;
    l_U981 = {1190.13700000, 1456.17000000, 29.10400000};
    l_U984 = {0.00000000, 0.00000000, 90.00000000};
    l_U987 = 0.00000000;
    l_U995 = {1196.04600000, 1442.94900000, 29.28010000};
    l_U1035 = {0.00000000, 0.50000000, 0.00000000};
    l_U1038 = {0.00000000, -1.20000000, 0.00000000};
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_456();
        sub_2566();
    }
    else
    {
        sub_3179();
        l_U659 = 1;
    }
    while (l_U659)
    {
        sub_4909();
        switch (l_U656)
        {
            case 0:
            sub_5181();
            break;
            case 1:
            sub_12437();
            break;
            case 2:
            sub_22041();
            break;
            case 3:
            sub_25940();
            break;
            case 4:
            sub_27562();
            break;
            case 5:
            sub_30861();
            break;
            case 6:
            sub_34676();
            break;
            case 7:
            l_U656++;
            break;
            case 8:
            sub_36109();
            break;
            case 9:
            l_U656++;
            break;
            case 10:
            sub_39176();
            break;
            case 11:
            sub_40265();
            break;
            case 12:
            sub_41650();
            break;
            case 13:
            sub_52066();
            break;
            case 14:
            sub_53714();
            break;
            case -1: break;
        }
        WAIT( 0 );
        if (l_U657 == 1)
        {
            sub_56548();
        }
        else if (l_U658 == 1)
        {
            sub_26843();
        }
    }
    sub_2566();
    return;
}

void sub_456()
{
    sub_465();
    return;
}

void sub_465()
{
    int iVar2;

    iVar2 = 0;
    sub_479( iVar2 );
    sub_1655( iVar2 );
    return;
}

void sub_479(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_523();
        sub_684();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_792();
            sub_831();
        }
    }
    sub_907();
    sub_1008();
    uVar5 = sub_1121( uParam0 );
    sub_1562( uVar5, 0 );
    return;
}

void sub_523()
{
    sub_537( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_637();
    }
    return;
}

void sub_537(int iParam0)
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

void sub_637()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_684()
{
    sub_693();
    return;
}

void sub_693()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_792()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_831()
{
    sub_840();
    return;
}

void sub_840()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_907()
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

void sub_1008()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1030();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1030()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1121(unknown uParam0)
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
    sub_1520( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1520(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1562(int iParam0, boolean bParam1)
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

void sub_1655(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1664();
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
        sub_2439();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1664()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1702( 5, g_U569[I] )) == 1))
        {
            if ((sub_1702( 1, g_U569[I] )) != 0)
            {
                sub_1988( I );
            }
        }
    }
    if (NOT sub_2154())
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

int sub_1702(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1988(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2073( g_U569 - 1 );
    return;
}

void sub_2073(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2154()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1702( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2439()
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

void sub_2566()
{
    sub_2579( ref l_U806 );
    sub_2579( ref l_U821 );
    sub_2579( ref l_U836 );
    sub_2579( ref l_U851 );
    sub_2579( ref l_U866 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    sub_3041( 0 );
    sub_3126();
    return;
}

void sub_2579(unknown uParam0)
{
    for ( l_U799 = 0; l_U799 <= 13; l_U799++ )
    {
        if (DOES_CHAR_EXIST( (uParam0^)[l_U799] ))
        {
            PRINTSTRING( "Marking char " );
            PRINTINT( l_U799 );
            PRINTSTRING( " as no longer needed: " );
            if (NOT (IS_CHAR_DEAD( (uParam0^)[l_U799] )))
            {
                if (IS_CHAR_ON_SCREEN( (uParam0^)[l_U799] ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[l_U799] );
                    PRINTSTRING( "No Longer Needed health at 0!" );
                    PRINTNL();
                }
                else
                {
                    DELETE_CHAR( ref (uParam0^)[l_U799] );
                    PRINTSTRING( "Char Deleted!" );
                    PRINTNL();
                }
            }
            else
            {
                PRINTSTRING( "Char Dead - No Longer Needed!" );
                PRINTNL();
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[l_U799] );
            }
        }
    }
    l_U798 = 0;
    PRINTSTRING( "Got through Goon Cleanup" );
    PRINTNL();
    return;
}

void sub_3041(unknown uParam0)
{
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1097912180, 1190.00000000, 1445.10000000, 21.90000000, uParam0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1097912180, 1190.00000000, 1445.10000000, 26.20000000, uParam0, 0.00000000 );
    return;
}

void sub_3126()
{
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3179()
{
    PRINTSTRING( "Factory initialising" );
    PRINTNL();
    sub_3236( "ROMAN12", 0 );
    sub_3236( "R12AUD", 6 );
    sub_3403( "R12AUD" );
    l_U628 = sub_3508();
    l_U629 = sub_3554();
    STOP_PED_SPEAKING( l_U628, 0 );
    sub_3617( 0, l_U628, "NIKO", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    if ((NOT (IS_CHAR_DEAD( l_U628 ))) AND (g_U9893._fU24 == 0))
    {
        LOAD_SCENE( 1252.69900000, 1488.80800000, 15.72340000 );
        SET_CHAR_COORDINATES( l_U628, 1252.69900000, 1488.80800000, 15.72340000 );
        SET_CHAR_HEADING( l_U628, 210.65460000 );
    }
    CLEAR_AREA( 1200.09000000, 1455.45200000, 16.73660000, 75.00000000, 1 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U1000 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U999 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U1002 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U1001 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U1003 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U1004 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U1002, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U1003, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_CAUTION( l_U1003, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1003, 2 );
    if (NOT (IS_CHAR_DEAD( l_U628 )))
    {
        OPEN_SEQUENCE_TASK( ref l_U1006 );
        TASK_SWAP_WEAPON( 0, 1 );
        TASK_SEEK_COVER_FROM_PED( 0, l_U628, 10000 );
        TASK_COMBAT( 0, l_U628 );
        CLOSE_SEQUENCE_TASK( l_U1006 );
        OPEN_SEQUENCE_TASK( ref l_U1008 );
        TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 1213.40000000, 1465.73600000, 25.98010000, 4, 5000, 0.50000000 );
        TASK_COMBAT( 0, l_U628 );
        CLOSE_SEQUENCE_TASK( l_U1008 );
        OPEN_SEQUENCE_TASK( ref l_U1005 );
        TASK_LOOK_AT_COORD( 0, 1200.09000000, 1455.45200000, 16.73660000, 10000, 0 );
        TASK_TOGGLE_DUCK( 0, 1 );
        TASK_GO_STRAIGHT_TO_COORD( 0, 1214.84500000, 1442.69600000, 16.71660000, 2, 5000 );
        CLOSE_SEQUENCE_TASK( l_U1005 );
        OPEN_SEQUENCE_TASK( ref l_U1007 );
        TASK_COMBAT( 0, l_U628 );
        CLOSE_SEQUENCE_TASK( l_U1007 );
    }
    OPEN_SEQUENCE_TASK( ref l_U1009 );
    TASK_TOGGLE_DUCK( 0, 1 );
    TASK_COMBAT( 0, l_U628 );
    TASK_SET_COMBAT_DECISION_MAKER( 0, l_U1004 );
    TASK_SET_CHAR_DECISION_MAKER( 0, l_U1000 );
    CLOSE_SEQUENCE_TASK( l_U1009 );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 1227.05500000, 1438.44000000, 26.24000000, 0.00000000, 0, 90, ref l_U1018[1] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1018[1], "Factory_room01" );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 1190.14800000, 1465.74000000, 26.28000000, 0.00000000, 0, 90, ref l_U1018[2] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1018[2], "Factory_room01" );
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 1196.46600000, 1444.69100000, 20.74800000, 270.98000000, 0, -20.16000000, ref l_U1018[4] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1018[4], "Factory_room01" );
    CREATE_PICKUP_ROTATE( sub_4602( 14 ), 22, 146, 1225.89200000, 1443.09200000, 15.77400000, 272.22000000, 0, 0, ref l_U1018[5] );
    CREATE_PICKUP_WITH_AMMO( 993473937, 22, 3, 1202.24700000, 1465.10200000, 14.72250000, ref l_U1018[6] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1018[6], "factory_room02" );
    CREATE_PICKUP_WITH_AMMO( 993473937, 22, 3, 1202.92200000, 1466.58400000, 14.72350000, ref l_U1018[7] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1018[7], "factory_room02" );
    CREATE_PICKUP_WITH_AMMO( 993473937, 22, 3, 1204.46400000, 1465.78700000, 14.72570000, ref l_U1018[8] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1018[8], "factory_room02" );
    SETTIMERA( 0 );
    return;
}

void sub_3236(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3272())
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

int sub_3272()
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

void sub_3403(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_3420();
    return;
}

void sub_3420()
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

void sub_3508()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3554()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3617(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3697( "\n PED NUMBER ", uParam0 );
    sub_3737( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3697(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3737(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4602(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

void sub_4909()
{
    if (LOCATE_CHAR_ANY_MEANS_2D( l_U628, 1208.05700000, 1452.84600000, 65.00000000, 65.00000000, 0 ))
    {
        if (l_U690 == 0)
        {
            SET_WANTED_MULTIPLIER( 0.00000000 );
            CLEAR_WANTED_LEVEL( l_U629 );
            l_U690 = 1;
        }
    }
    else if (l_U690 == 1)
    {
        SET_WANTED_MULTIPLIER( 0.50000000 );
        l_U690 = 0;
    }
    return;
}

void sub_5181()
{
    if (l_U660[l_U656] == 0)
    {
        REMOVE_BLIP( l_U1015 );
        ADD_BLIP_FOR_COORD( 1221.54700000, 1441.50900000, 16.73560000, ref l_U1015 );
        SET_ROUTE( l_U1015, 1 );
        PRINT_NOW( "FS_01", 7500, 1 );
        sub_5303( ref l_U1015, 1233.26200000, 1480.28500000, 15.66610000, 270.21500000 );
        sub_5359();
        SETTIMERA( 0 );
        l_U660[l_U656] = 1;
    }
    if ((TIMERA() > 25000) AND (l_U563[0] == 0))
    {
        sub_5469( 25, 2, 16383, 16383, ref l_U644 );
        sub_5816( ref l_U644, 1 );
        sub_5847( ref l_U644, 0 );
        sub_5880( ref l_U644, 32 );
        sub_5913( ref l_U644 );
        l_U563[0] = 1;
    }
    if (l_U563[0] == 1)
    {
        if ((sub_6713( ref l_U644 )) == 3)
        {
            if (l_U563[1] == 0)
            {
                SETTIMERB( 0 );
                PRINTSTRING( "text read" );
                PRINTNL();
                l_U563[1] = 1;
            }
        }
    }
    if ((l_U563[1] == 1) AND ((l_U688 == 0) AND (TIMERB() > 3000)))
    {
        sub_6945( "R12_TEXT", ref l_U638, 8, 1 );
        SET_PLAYER_MOOD_PISSED_OFF( l_U629, 30000 );
        PRINTSTRING( "Niko rages" );
        PRINTNL();
        l_U688 = 1;
    }
    if ((l_U563[2] == 0) AND ((l_U688 == 1) AND ((NOT (sub_8259( 25 ))) AND (sub_7956( 25, 1 )))))
    {
        sub_8389( "R12_TXT2", "R12AUD", 1 );
        l_U563[2] = 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_2D( l_U628, 1176.70300000, 1475.31600000, 150.00000000, 150.00000000, 0 ))
    {
        l_U656++;
    }
    return;
}

void sub_5303(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_5359()
{
    int I;

    for ( I = 0; I <= 31; I++ )
    {
        l_U563[I] = 0;
    }
    return;
}

void sub_5469(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_5491( uParam0, 0, iParam4 + 0 );
    sub_5491( uParam1, 1, iParam4 + 0 );
    sub_5491( uParam2, 2, iParam4 + 0 );
    sub_5491( uParam3, 3, iParam4 + 0 );
    sub_5491( 0, 4, iParam4 + 0 );
    sub_5491( 1, 5, iParam4 + 0 );
    sub_5491( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_5491(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_5816(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_5847(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_5880(int iParam0, unknown uParam1)
{
    sub_5491( uParam1, 6, iParam0 + 0 );
    return;
}

int sub_5913(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_5983())
        {
            sub_1988( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_6110( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_1988( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_1702( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_1702( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_5983()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1702( 1, g_U569[I] )) != 0))
        {
            sub_1988( I );
            return 1;
        }
    }
    return 0;
}

int sub_6110(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_6175( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_6175(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_1702( 0, uParam0 );
        if (iVar14 == (sub_1702( 0, uParam6 )))
        {
            iVar15 = sub_1702( 3, uParam0 );
            if (iVar15 == (sub_1702( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_6713(int iParam0)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_6175( iParam0->_fU0, g_U569[I] ))
            {
                iParam0->_fU24 = I;
                return sub_1702( 4, g_U569[I] );
            }
        }
        iParam0->_fU24 = -2;
    }
    return 6;
}

void sub_6945(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_6966( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_6966(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_7020( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_7020(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7042( iParam1 )))
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
    sub_7730( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_7042(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_7119( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_7119( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_7119( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_7119(unknown uParam0)
{
    return;
}

void sub_7730(int iParam0, int iParam1)
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

int sub_7956(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_7119( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_7119( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U91._fU60 == iParam0) AND (g_U91._fU0 == 1005))
    {
        if (bParam1)
        {
            if ((NOT g_U91._fU372) AND (g_U91._fU508 >= 4))
            {
                return 1;
            }
        }
        else if (NOT g_U91._fU368)
        {
            return 1;
        }
    }
    return 0;
}

void sub_8259(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = uParam0;
    iVar4 = iVar3 / 32;
    iVar5 = iVar3 mod 32;
    if (iVar4 > 2)
    {
        return 0;
    }
    if (iVar5 > 32)
    {
        return 0;
    }
    return IS_BIT_SET( g_U10975[iVar4], iVar5 );
}

int sub_8389(unknown uParam0, unknown uParam1, boolean bParam2)
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
    unknown uVar23;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam0, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    uVar23 = g_U91._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_8497( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U91._fU368) == 1)
        {
            StrCopy( ref g_U91._fU224[0], uParam1, 16 );
            StrCopy( ref g_U91._fU224[1], uParam0, 16 );
            sub_10384( uVar23, ref g_U91._fU176 );
            g_U91._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_8497(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_7119( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_7119( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3554() )))
    {
        sub_7119( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3508() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3508() )))
    {
        sub_7119( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_7119( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_9012()))
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
                sub_7119( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_9012()))
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
    sub_10384( uParam0, ref g_U91._fU176 );
    sub_11765( ref g_U91._fU160 );
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
        sub_3737( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_9012()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_9069())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_9069()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3554() )))
    {
        sub_7119( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_7119( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_7119( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_7119( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3554() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3508() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3508(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_7119( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3508() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_7119( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_7119( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3554() )))
    {
        sub_7119( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_10384(int iParam0, unknown uParam1)
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

void sub_11765(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_12437()
{
    unknown uVar2;

    if (l_U660[l_U656] == 0)
    {
        STOP_PED_SPEAKING( l_U628, 1 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1568036189, 1209.10000000, 1446.70000000, 31.80000000, 1, 0.00000000 );
        sub_12516( -268530289 );
        sub_12516( 1425662106 );
        sub_12516( 451384443 );
        sub_12516( -1180674815 );
        sub_12516( 1976502708 );
        sub_12516( -2088164056 );
        sub_12516( 1543404628 );
        sub_12642( "missRoman12" );
        sub_12733( 0 );
        while ((NOT (sub_13626( 0 ))) || ((NOT sub_13522()) || (NOT sub_13436())))
        {
            WAIT( 0 );
        }
        while (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION\BRONX_WAREHOUSE" )))
        {
            WAIT( 0 );
        }
        ADD_SCENARIO_BLOCKING_AREA( 1185.00000000, 1450.00000000, 11.00000000, 1196.00000000, 1460.00000000, 21.00000000 );
        CREATE_OBJECT( 451384443, 1191.00000000, 1456.00000000, 15.72000000, ref l_U906, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U906, "factory_room01" );
        CREATE_OBJECT_NO_OFFSET( 1425662106, l_U977._fU0, l_U977._fU4, l_U977._fU8, ref l_U976, 1 );
        SET_OBJECT_HEADING( l_U976, l_U980 );
        FREEZE_OBJECT_POSITION( l_U976, 1 );
        sub_13927( 0, ref l_U883, 1196.52000000, 1442.92000000, 29.28300000, 275.16160000 );
        SET_ROMANS_MOOD( 2 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U883, "factory_room04" );
        SET_CHAR_NEVER_TARGETTED( l_U883, 1 );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U883, 0.00000000, -1.00000000, 0.00000000, ref l_U801._fU0, ref l_U801._fU4, ref l_U801._fU8 );
        GET_CHAR_HEADING( l_U883, ref l_U804 );
        FREEZE_CHAR_POSITION( l_U883, 1 );
        SET_CHAR_COLLISION( l_U883, 0 );
        sub_3617( 1, l_U883, "ROMAN", 0 );
        CREATE_CHAR( 26, 1543404628, 1197.05100000, 1442.84500000, 29.28010000, ref l_U882, 1 );
        SET_CHAR_HEADING( l_U882, 89.43550000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U882, "factory_room04" );
        GIVE_WEAPON_TO_CHAR( l_U882, 7, 0, 0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U882 );
        FREEZE_CHAR_POSITION( l_U882, 1 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U882, 0 );
        SET_CHAR_KEEP_TASK( l_U882, 1 );
        sub_3617( 2, l_U882, "RUSSIAN_BOSS_M", 0 );
        CREATE_CHAR( 26, -1180674815, 1200.09000000, 1455.45200000, 16.73660000, ref l_U806[0], 1 );
        SET_CHAR_HEADING( l_U806[0], 210.94160000 );
        TASK_PLAY_ANIM( l_U806[0], "street_chat_a", "missRoman12", 1000.00000000, 1, 0, 0, 0, -1 );
        SET_CHAR_NAME_DEBUG( l_U806[0], "Chatter A" );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U806[0], "factory_room01" );
        CREATE_CHAR( 26, 1976502708, 1201.18500000, 1454.15100000, 16.72850000, ref l_U806[1], 1 );
        SET_CHAR_HEADING( l_U806[1], 32.08670000 );
        SET_CHAR_NAME_DEBUG( l_U806[1], "Chatter B" );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U806[1], "factory_room01" );
        CREATE_CHAR( 26, -2088164056, 1192.59600000, 1459.94000000, 16.71660000, ref l_U806[2], 1 );
        SET_CHAR_HEADING( l_U806[2], 170.28180000 );
        SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U806[2], 1193.20300000, 1459.67400000, 17.71660000, 1196.57800000, 1460.60100000, 15.21660000, 3.00000000 );
        SET_CHAR_NAME_DEBUG( l_U806[2], "Smoker" );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U806[2], "factory_room01" );
        CREATE_CHAR( 26, -1180674815, 1211.94100000, 1445.09700000, 16.71660000, ref l_U806[3], 1 );
        SET_CHAR_HEADING( l_U806[3], 1.45850000 );
        SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U806[3], 1204.74900000, 1447.83200000, 17.23510000, 1211.13300000, 1449.05800000, 15.23510000, 5.00000000 );
        SET_CHAR_NAME_DEBUG( l_U806[3], "Chatter A near Cabinet" );
        GIVE_WEAPON_TO_CHAR( l_U806[3], 7, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U806[3], 7, 1 );
        sub_3617( 3, l_U806[3], "RUSSIAN_1_M", 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U806[3], "factory_room01" );
        CREATE_CHAR( 26, -2088164056, 1211.66800000, 1447.70900000, 16.73050000, ref l_U806[4], 1 );
        SET_CHAR_HEADING( l_U806[4], 185.56140000 );
        SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U806[4], 1204.74900000, 1447.83200000, 17.23510000, 1211.13300000, 1449.05800000, 15.23510000, 5.00000000 );
        SET_CHAR_NAME_DEBUG( l_U806[4], "Chatter B near Cabinet" );
        GIVE_WEAPON_TO_CHAR( l_U806[4], 7, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U806[4], 7, 1 );
        sub_3617( 4, l_U806[4], "RUSSIAN_2_M", 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U806[4], "factory_room01" );
        CREATE_CHAR( 26, -1180674815, 1210.37800000, 1460.51500000, 16.71660000, ref l_U806[5], 1 );
        SET_CHAR_HEADING( l_U806[5], 121.58500000 );
        SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U806[5], 1204.83600000, 1459.11500000, 17.22150000, 1209.33300000, 1459.27800000, 15.22150000, 4.00000000 );
        SET_CHAR_NAME_DEBUG( l_U806[5], "Barrel Boy" );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U806[5], "factory_room01" );
        CREATE_CHAR( 26, -1180674815, 1203.62800000, 1445.23700000, 21.68320000, ref l_U806[6], 1 );
        SET_CHAR_HEADING( l_U806[6], 11.52280000 );
        SET_CHAR_NAME_DEBUG( l_U806[6], "Upstairs Ground floor guy" );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U806[6], "factory_room01" );
        SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U806[6], 0 );
        TASK_PLAY_ANIM( l_U806[6], "Lean_Balcony_LoopC", "missRoman12", 1000.00000000, 1, 0, 0, 0, -1 );
        CREATE_CHAR( 26, -1180674815, 1219.70100000, 1452.96000000, 21.68320000, ref l_U806[7], 1 );
        SET_CHAR_HEADING( l_U806[7], 106.71130000 );
        SET_CHAR_NAME_DEBUG( l_U806[7], "Leaning-over guy" );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U806[7], "factory_room01" );
        CREATE_CHAR( 26, 1976502708, 1220.35600000, 1461.79200000, 16.71660000, ref l_U806[8], 1 );
        SET_CHAR_HEADING( l_U806[8], 120.99250000 );
        SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U806[8], 1214.27100000, 1459.83000000, 17.71660000, 1217.72400000, 1460.40600000, 15.21660000, 3.00000000 );
        TASK_PLAY_ANIM( l_U806[8], "street_argue_b", "missRoman12", 1000.00000000, 1, 0, 0, 0, -1 );
        SET_CHAR_NAME_DEBUG( l_U806[8], "Argue guy B" );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U806[8], "factory_room01" );
        CREATE_CHAR( 26, -2088164056, 1224.49300000, 1451.24400000, 16.73440000, ref l_U806[10], 1 );
        SET_CHAR_HEADING( l_U806[10], 126.81270000 );
        SET_CHAR_NAME_DEBUG( l_U806[10], "Guy near Car" );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U806[10], "factory_room01" );
        for ( l_U799 = 0; l_U799 <= 13; l_U799++ )
        {
            if (DOES_CHAR_EXIST( l_U806[l_U799] ))
            {
                SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U806[l_U799], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U806[l_U799], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U806[l_U799] );
                SET_CHAR_RELATIONSHIP_GROUP( l_U806[l_U799], 24 );
            }
        }
        ALLOW_EMERGENCY_SERVICES( 0 );
        SET_PED_DENSITY_MULTIPLIER( 0.25000000 );
        if (IS_CHAR_IN_ANY_HELI( l_U628 ))
        {
            CREATE_CHAR( 26, 1976502708, 1191.75300000, 1433.67200000, 43.21660000, ref l_U900, 1 );
            SET_CHAR_HEADING( l_U900, 191.55750000 );
            SET_CHAR_NAME_DEBUG( l_U900, "Rocket Man 1" );
            GIVE_WEAPON_TO_CHAR( l_U900, 18, 30000, 0 );
            SET_CHAR_RELATIONSHIP( l_U900, 5, 0 );
            SET_SENSE_RANGE( l_U900, 400.00000000 );
            CREATE_CHAR( 26, -2088164056, 1194.93800000, 1445.13400000, 43.21050000, ref l_U901, 1 );
            SET_CHAR_HEADING( l_U901, 25.88580000 );
            SET_CHAR_NAME_DEBUG( l_U901, "Rocket Man 2" );
            GIVE_WEAPON_TO_CHAR( l_U901, 18, 30000, 0 );
            SET_CHAR_RELATIONSHIP( l_U901, 5, 0 );
            SET_SENSE_RANGE( l_U901, 400.00000000 );
            CREATE_CHAR( 26, 1976502708, 1225.62200000, 1444.29900000, 43.21660000, ref l_U902, 1 );
            SET_CHAR_HEADING( l_U902, 294.50920000 );
            SET_CHAR_NAME_DEBUG( l_U902, "Roof man 3" );
            GIVE_WEAPON_TO_CHAR( l_U902, 14, 30000, 0 );
            SET_COMBAT_DECISION_MAKER( l_U902, l_U1002 );
            SET_CHAR_RELATIONSHIP( l_U902, 5, 0 );
            SET_SENSE_RANGE( l_U902, 400.00000000 );
            sub_18249( ref l_U902 );
            CREATE_CHAR( 26, -2088164056, 1225.71900000, 1435.34300000, 43.21660000, ref l_U903, 1 );
            SET_CHAR_HEADING( l_U903, 268.44740000 );
            SET_CHAR_NAME_DEBUG( l_U903, "Roof man 4" );
            GIVE_WEAPON_TO_CHAR( l_U903, 14, 30000, 0 );
            SET_COMBAT_DECISION_MAKER( l_U903, l_U1002 );
            SET_CHAR_RELATIONSHIP( l_U903, 5, 0 );
            SET_SENSE_RANGE( l_U903, 400.00000000 );
            sub_18249( ref l_U903 );
            sub_18594();
        }
        l_U1031[0] = GET_SOUND_ID();
        l_U1031[1] = GET_SOUND_ID();
        l_U1031[2] = GET_SOUND_ID();
        PLAY_SOUND_FROM_POSITION( l_U1031[0], "DRIPS", 1215.90000000, 1441.68000000, 20.26000000 );
        PLAY_SOUND_FROM_POSITION( l_U1031[1], "DRIPS", 1196.52000000, 1441.48000000, 32.65000000 );
        PLAY_SOUND_FROM_POSITION( l_U1031[2], "DRIPS", 1209.46000000, 1462.13000000, 28.54000000 );
        GET_INTERIOR_AT_COORDS( 1200.09000000, 1455.45200000, 16.73660000, ref uVar2 );
        ACTIVATE_INTERIOR( uVar2, 1 );
        l_U660[l_U656] = 1;
    }
    sub_19205();
    if ((sub_6713( ref l_U644 )) == 3)
    {
        if (l_U701 == 0)
        {
            SETTIMERB( 0 );
            PRINTSTRING( "text read" );
            PRINTNL();
            l_U701 = 1;
        }
    }
    if ((l_U701 == 1) AND ((l_U688 == 0) AND (TIMERB() > 3000)))
    {
        sub_6945( "R12_TEXT", ref l_U638, 8, 1 );
        SET_PLAYER_MOOD_PISSED_OFF( l_U629, 30 );
        l_U688 = 1;
    }
    sub_20258( 1 );
    sub_3041( 1 );
    SET_PED_DENSITY_MULTIPLIER( 0.20000000 );
    SET_CAR_DENSITY_MULTIPLIER( 0.20000000 );
    if ((IS_SNIPER_BULLET_IN_AREA( 1182.02900000, 1432.30800000, 12.76710000, 1234.86000000, 1474.00000000, 52.00000000 )) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1191.47500000, 1458.68400000, 16.71670000, 1.00000000, 1.00000000, 4.00000000, 0 )) || (IS_CHAR_SHOOTING( l_U628 ))))
    {
        PRINTSTRING( "Should skip to shootout" );
        PRINTNL();
        l_U795 = 1;
    }
    if ((DOES_CHAR_EXIST( l_U901 )) AND (DOES_CHAR_EXIST( l_U900 )))
    {
        if ((l_U563[1] == 0) AND ((sub_20778( l_U900, l_U628, 1 )) < 80.00000000))
        {
            if (NOT (IS_CHAR_INJURED( l_U900 )))
            {
                TASK_SHOOT_AT_CHAR( l_U900, l_U628, 500000, 3 );
            }
            l_U563[1] = 1;
        }
        if ((l_U563[2] == 0) AND ((sub_20778( l_U901, l_U628, 1 )) < 80.00000000))
        {
            if (NOT (IS_CHAR_INJURED( l_U901 )))
            {
                TASK_SHOOT_AT_CHAR( l_U901, l_U628, 500000, 3 );
            }
            if ((NOT (IS_CHAR_DEAD( l_U903 ))) AND (NOT (IS_CHAR_DEAD( l_U902 ))))
            {
                TASK_COMBAT( l_U902, l_U628 );
                TASK_COMBAT( l_U903, l_U628 );
            }
            l_U563[2] = 1;
        }
    }
    LOCATE_CHAR_ON_FOOT_3D( l_U628, 1220.35000000, 1441.59800000, 16.71700000, 1.50000000, 1.50000000, 1.00000000, 1 );
    if (LOCATE_CHAR_ANY_MEANS_2D( l_U628, 1219.35000000, 1441.59800000, 40.50000000, 40.50000000, 0 ))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1204.90400000, 1458.93300000, 35.62150000, 30.00000000, 30.00000000, 11.00000000, 0 ))
        {
            l_U660[6] = 0;
            l_U660[7] = 0;
            l_U660[8] = 0;
            l_U660[9] = 0;
            l_U660[10] = 0;
            l_U660[11] = 0;
            l_U660[12] = 0;
            PRINTSTRING( "Should skip to shootout probably Heli entrance detected " );
            PRINTNL();
            REMOVE_BLIP( l_U1015 );
            PRINT( "FS_09", 8000, 1 );
            if (NOT (DOES_BLIP_EXIST( l_U1014 )))
            {
                ADD_BLIP_FOR_COORD( 1196.04600000, 1442.84900000, 29.28010000, ref l_U1014 );
            }
            DELETE_CHAR( ref l_U883 );
            DELETE_CHAR( ref l_U882 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1992728631 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1543404628 );
            l_U707 = 1;
            SET_BLIP_AS_FRIENDLY( l_U1014, 1 );
            l_U656 = 6;
        }
        if ((l_U795 == 1) || (IS_CHAR_SHOOTING( l_U628 )))
        {
            PRINTSTRING( "Should skip to shootout CHAR IS SHOOTING or he shot his gun early" );
            PRINTNL();
            REMOVE_BLIP( l_U1015 );
            PRINT( "FS_09", 8000, 1 );
            DELETE_CHAR( ref l_U883 );
            DELETE_CHAR( ref l_U882 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1992728631 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1543404628 );
            if (NOT (DOES_BLIP_EXIST( l_U1014 )))
            {
                ADD_BLIP_FOR_COORD( 1196.04600000, 1442.84900000, 29.28010000, ref l_U1014 );
            }
            SET_BLIP_AS_FRIENDLY( l_U1014, 1 );
            l_U795 = 1;
            l_U772 = 1;
            l_U656 = 3;
        }
    }
    if (l_U656 < 6)
    {
        if ((LOCATE_CHAR_IN_CAR_3D( l_U628, 1219.35000000, 1441.59800000, 16.71700000, 3.50000000, 3.50000000, 1.00000000, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( l_U628, 1220.35000000, 1441.59800000, 16.71700000, 1.50000000, 1.50000000, 1.00000000, 1 )))
        {
            SET_PLAYER_CONTROL( l_U629, 0 );
            sub_5359();
            if ((IS_CHAR_ON_ANY_BIKE( l_U628 )) || (IS_CHAR_IN_ANY_CAR( l_U628 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U628 ))
                {
                    TASK_LEAVE_ANY_CAR( l_U628 );
                }
                CLEAR_AREA( 1184.17500000, 1424.93500000, 14.00000000, 30.00000000, 1 );
            }
            l_U656 = 2;
        }
    }
    return;
}

void sub_12516(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U484[l_U517] = uParam0;
    l_U517++;
    return;
}

void sub_12642(unknown uParam0)
{
    PRINTSTRING( "Requesting :" );
    PRINTSTRING( uParam0 );
    PRINTNL();
    REQUEST_ANIMS( uParam0 );
    l_U518[l_U527] = uParam0;
    l_U527++;
    return;
}

void sub_12733(unknown uParam0)
{
    REQUEST_MODEL( sub_12744( uParam0 ) );
    return;
}

int sub_12744(unknown uParam0)
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
    sub_1520( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

int sub_13436()
{
    int I;

    if (l_U527 != 0)
    {
        for ( I = 0; I <= (l_U527 - 1); I++ )
        {
            if (NOT (HAVE_ANIMS_LOADED( l_U518[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_13522()
{
    int I;

    if (l_U517 != 0)
    {
        for ( I = 0; I <= (l_U517 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U484[I] )))
            {
                PRINTINT( I );
                PRINTNL();
                return 0;
            }
        }
    }
    return 1;
}

void sub_13626(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_12744( uParam0 ) );
}

void sub_13927(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_12744( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_13977( uParam0, (uParam1^) );
    return;
}

void sub_13977(unknown uParam0, unknown uParam1)
{
    sub_13989( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_13989(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_14083( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_14627( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_14083(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_14627(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_14083( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_14083( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_14083( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_14083( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_14083( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_14083( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_14083( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_14083( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_14083( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_14083( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_14083( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_14083( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_14083( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_18249(unknown uParam0)
{
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
    GIVE_WEAPON_TO_CHAR( (uParam0^), 14, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( (uParam0^), 14, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 24 );
    SET_CHAR_RELATIONSHIP( (uParam0^), 5, 0 );
    SET_CHAR_DECISION_MAKER( (uParam0^), l_U1000 );
    SET_COMBAT_DECISION_MAKER( (uParam0^), l_U1002 );
    SET_CHAR_ACCURACY( (uParam0^), 30 );
    PRINTSTRING( "SEtting up for Offensive char number: " );
    PRINTNL();
    SET_CHAR_AS_ENEMY( (uParam0^), 1 );
    SET_PED_PATH_MAY_DROP_FROM_HEIGHT( (uParam0^), 0 );
    return;
}

void sub_18594()
{
    CREATE_CHAR( 26, -1180674815, 1210.49000000, 1436.85100000, 26.04680000, ref l_U836[3], 1 );
    CREATE_CHAR( 26, 1976502708, 1217.14500000, 1434.35000000, 25.98010000, ref l_U836[4], 1 );
    CREATE_CHAR( 26, -2088164056, 1219.04000000, 1436.99200000, 25.98010000, ref l_U836[5], 1 );
    CREATE_CHAR( 26, -1180674815, 1221.43600000, 1447.43700000, 24.98050000, ref l_U836[0], 1 );
    CREATE_CHAR( 26, 1976502708, 1229.57800000, 1450.76700000, 25.44190000, ref l_U836[1], 1 );
    for ( l_U799 = 0; l_U799 <= 5; l_U799++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U836[l_U799] )))
        {
            SET_ROOM_FOR_CHAR_BY_NAME( l_U836[l_U799], "factory_room01" );
            sub_18249( ref l_U836[l_U799] );
            StrCopy( ref l_U777, "ExtraHeligoons", 64 );
            ConcatString(ref l_U777, l_U799, 64);
            SET_CHAR_NAME_DEBUG( l_U836[l_U799], ref l_U777 );
            SET_CHAR_AS_ENEMY( l_U836[l_U799], 1 );
            SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U836[l_U799], 0 );
        }
    }
    return;
}

void sub_19205()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (DOES_CHAR_EXIST( l_U710 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U710 )))
        {
            if (IS_AMBIENT_SPEECH_PLAYING( l_U710 ))
            {
                iVar2 = 1;
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U710 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U710 )))
        {
            if (IS_AMBIENT_SPEECH_PLAYING( l_U710 ))
            {
                iVar3 = 1;
            }
        }
    }
    GET_GAME_TIMER( ref l_U679 );
    if ((iVar3 == 0) AND ((iVar2 == 0) AND ((l_U679 - l_U680) > l_U681)))
    {
        uVar4 = {sub_19372( l_U628 )};
        GET_CLOSEST_CHAR( uVar4._fU0, uVar4._fU4, uVar4._fU8, 40.00000000, 0, 1, ref l_U710 );
        if (DOES_CHAR_EXIST( l_U710 ))
        {
            PRINTSTRING( "Whatline?: " );
            PRINTINT( l_U682 );
            PRINTNL();
            switch (l_U682)
            {
                case 0:
                SAY_AMBIENT_SPEECH( l_U710, "CONV_GANG_STATE", 1, 0, 0 );
                l_U682 = 2;
                l_U681 = 3500;
                break;
                case 1:
                SAY_AMBIENT_SPEECH( l_U710, "CONV_SMOKE_STATE", 1, 0, 0 );
                l_U682 = 3;
                l_U681 = 3500;
                break;
                case 2:
                if (NOT (IS_CHAR_DEAD( l_U710 )))
                {
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U710, 0.00000000, 2.00000000, 0.00000000, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                    GET_CLOSEST_CHAR( uVar7._fU0, uVar7._fU4, uVar7._fU8, 5.00000000, 0, 1, ref l_U711 );
                    if (DOES_CHAR_EXIST( l_U711 ))
                    {
                        SAY_AMBIENT_SPEECH( l_U711, "CONV_GANG_RESP", 1, 0, 0 );
                    }
                }
                l_U682 = 1;
                l_U681 = 10500;
                break;
                case 3:
                if (NOT (IS_CHAR_DEAD( l_U710 )))
                {
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U710, 0.00000000, 2.00000000, 0.00000000, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                    GET_CLOSEST_CHAR( uVar7._fU0, uVar7._fU4, uVar7._fU8, 5.00000000, 0, 1, ref l_U711 );
                    if (DOES_CHAR_EXIST( l_U711 ))
                    {
                        SAY_AMBIENT_SPEECH( l_U711, "CONV_SMOKE_RESP", 1, 0, 0 );
                    }
                }
                l_U682 = 0;
                l_U681 = 10500;
                break;
            }
            if (l_U681 == 10500)
            {
                if (NOT (IS_CHAR_DEAD( l_U806[5] )))
                {
                    TASK_PLAY_ANIM( l_U806[5], "look_watch", "missRoman12", 8.00000000, 0, 0, 0, 0, -1 );
                }
            }
            GET_GAME_TIMER( ref l_U680 );
        }
    }
    return;
}

void sub_19372(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_CHAR_EXIST( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    return Result;
}

int sub_20258(unknown uParam0)
{
    if ((NOT (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 1190.59000000, 1451.44000000, 30.62000000, 5.00000000, -1953528903 ))) || ((NOT (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 1190.59000000, 1451.44000000, 30.62000000, 5.00000000, -1926297576 ))) || ((NOT (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 1190.59000000, 1451.44000000, 30.62000000, 5.00000000, -1624818688 ))) || (NOT (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 1190.59000000, 1451.44000000, 30.62000000, 5.00000000, -9766626 ))))))
    {
        return 0;
        break;
    }
    FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE( 1190.59000000, 1451.44000000, 30.62000000, 5.00000000, -9766626, uParam0 );
    FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE( 1190.59000000, 1451.44000000, 30.62000000, 5.00000000, -1624818688, uParam0 );
    FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE( 1190.59000000, 1451.44000000, 30.62000000, 5.00000000, -1926297576, uParam0 );
    FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE( 1190.59000000, 1451.44000000, 30.62000000, 5.00000000, -1953528903, uParam0 );
    return 1;
}

void sub_20778(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if ((NOT (IS_CHAR_DEAD( uParam1 ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        GET_CHAR_COORDINATES( uParam1, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
        if (iParam2 == 0)
        {
            uVar5._fU8 = 0.00000000;
            uVar8._fU8 = 0.00000000;
        }
    }
    else
    {
        return -1.00000000;
    }
    return VDIST( uVar5, uVar8 );
}

void sub_22041()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (l_U660[l_U656] == 0)
    {
        if ((((IS_CHAR_IN_ANY_CAR( l_U628 )) || (IS_CHAR_ON_ANY_BIKE( l_U628 ))) AND (LOCATE_CHAR_IN_CAR_3D( l_U628, 1219.35000000, 1441.59800000, 16.71700000, 4.50000000, 4.50000000, 1.00000000, 0 ))) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1212.19800000, 1441.61400000, 16.71660000, 6.00000000, 1.50000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1220.35000000, 1441.59800000, 16.71700000, 1.50000000, 1.50000000, 1.00000000, 1 ))))
        {
            if (l_U660[l_U656] == 0)
            {
                UNLOCK_RAGDOLL( l_U628, 0 );
                DO_SCREEN_FADE_OUT( 500 );
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
                while ((IS_CHAR_ON_ANY_BIKE( l_U628 )) || (IS_CHAR_IN_ANY_CAR( l_U628 )))
                {
                    PRINTSTRING( "are we waiting here or what" );
                    WAIT( 0 );
                }
                REMOVE_PLAYER_HELMET( l_U629, 1 );
                REMOVE_BLIP( l_U1015 );
                SET_CHAR_COORDINATES( l_U628, 1219.35000000, 1441.59800000, 15.71700000 );
                SET_CHAR_HEADING( l_U628, 125.64760000 );
                for ( l_U799 = 0; l_U799 <= 13; l_U799++ )
                {
                    if (DOES_CHAR_EXIST( l_U806[l_U799] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U806[l_U799] )))
                        {
                            sub_22525( ref l_U806[l_U799] );
                        }
                    }
                }
                CLEAR_AREA_OF_COPS( 1219.35000000, 1441.59800000, 15.71700000, 300.00000000 );
                DO_SCREEN_FADE_IN( 500 );
                if ((NOT (IS_CHAR_DEAD( l_U883 ))) AND (NOT (IS_CHAR_DEAD( l_U882 ))))
                {
                    uVar2 = {sub_19372( l_U883 )};
                    uVar2._fU8 -= 1.25000000;
                    TASK_LOOK_AT_COORD( l_U882, uVar2._fU0, uVar2._fU4, uVar2._fU8, 60000, 0 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U883, "Hostage_tied2chair", "missRoman12", 1000.00000000, 1, 0, 0, 0, -1 );
                }
                if (NOT (IS_CHAR_DEAD( l_U806[2] )))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U806[2], 0, 0 );
                    TASK_PLAY_ANIM( l_U806[2], "smoke_stand_b", "missRoman12", 1000.00000000, 1, 0, 0, 0, -1 );
                }
                TASK_PERFORM_SEQUENCE( l_U628, l_U1005 );
                CREATE_CAM( 14, ref l_U626 );
                CREATE_CAM( 14, ref l_U621 );
                SET_CAM_POS( l_U621, 1216.39000000, 1441.72200000, 16.52308000 );
                SET_CAM_ROT( l_U621, -3.07324100, -0.00000000, -70.75601000 );
                SET_CAM_FOV( l_U621, 33.40000000 );
                SET_CAM_NEAR_DOF( l_U621, 1.00000000 );
                SET_CAM_FAR_DOF( l_U621, 10.00000000 );
                CREATE_CAM( 14, ref l_U623 );
                SET_CAM_POS( l_U623, 1214.77700000, 1441.04300000, 17.14377000 );
                SET_CAM_ROT( l_U623, -3.68878000, -0.00000000, 27.38024000 );
                SET_CAM_FOV( l_U623, 35.00000000 );
                SET_CAM_NEAR_DOF( l_U623, 1.00000000 );
                SET_CAM_FAR_DOF( l_U623, 10.00000000 );
                CREATE_CAM( 3, ref l_U624 );
                SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 5000, 0 );
                sub_23294( ref l_U624, 1 );
                sub_23351( 1 );
                GET_GAME_VIEWPORT_ID( ref l_U654 );
                WAIT( 0 );
                SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U654, "Factory_room03" );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U628, "Factory_room03" );
                CLEAR_PRINTS();
                PRINTSTRING( "Factory Cutscene Initialised:" );
                PRINTNL();
                SETTIMERA( 0 );
                l_U660[l_U656] = 1;
            }
        }
    }
    if ((l_U660[l_U656] == 1) AND ((l_U563[4] == 0) AND (TIMERA() > 2000)))
    {
        if (NOT (IS_CHAR_DEAD( l_U806[0] )))
        {
            SAY_AMBIENT_SPEECH( l_U806[0], "CONV_GANG_RESP", 1, 0, 0 );
        }
        l_U563[4] = 1;
    }
    if ((l_U660[l_U656] == 1) AND ((l_U563[0] == 0) AND (TIMERA() > 5000)))
    {
        sub_23294( ref l_U624, 0 );
        sub_23294( ref l_U626, 1 );
        SET_CAM_POS( l_U626, 1195.72600000, 1455.23300000, 15.97836000 );
        SET_CAM_ROT( l_U626, 12.45948000, -0.00000100, 47.19764000 );
        SET_CAM_FOV( l_U626, 45.00000000 );
        SET_CAM_NEAR_DOF( l_U626, 2.00000000 );
        SET_CAM_FAR_DOF( l_U626, 10.00000000 );
        TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U628, 1214.30700000, 1442.79100000, 15.71660000, 5000 );
        l_U563[0] = 1;
    }
    if ((l_U660[l_U656] == 1) AND ((l_U563[1] == 0) AND (TIMERA() > 6500)))
    {
        SET_CAM_POS( l_U621, 1219.19300000, 1452.05800000, 16.95999000 );
        SET_CAM_ROT( l_U621, -1.88063500, 0.00000000, 120.53450000 );
        l_U563[1] = 1;
    }
    if ((l_U660[l_U656] == 1) AND ((l_U563[2] == 0) AND (TIMERA() > 9500)))
    {
        if (NOT (IS_CHAR_DEAD( l_U806[3] )))
        {
            SAY_AMBIENT_SPEECH( l_U806[3], "CONV_GANG_STATE", 1, 0, 0 );
        }
        SET_CAM_POS( l_U621, 1212.87900000, 1462.46600000, 15.88452000 );
        SET_CAM_ROT( l_U621, 15.37225000, 0.00000000, 148.71850000 );
        SET_CAM_FOV( l_U621, 50.99998000 );
        SET_CAM_NEAR_DOF( l_U621, 3.00000000 );
        SET_CAM_FAR_DOF( l_U621, 25.00000000 );
        SET_CAM_POS( l_U623, 1205.68900000, 1452.37400000, 31.34040000 );
        SET_CAM_ROT( l_U623, -4.92343900, -0.00000000, 145.07890000 );
        SET_CAM_FOV( l_U623, 30.00000000 );
        SET_CAM_NEAR_DOF( l_U623, 3.00000000 );
        SET_CAM_FAR_DOF( l_U623, 25.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 10000, 0 );
        sub_23294( ref l_U626, 0 );
        sub_23294( ref l_U624, 1 );
        l_U563[2] = 1;
    }
    if ((l_U678 == 0) AND (TIMERA() > 13500))
    {
        if (NOT (IS_CHAR_DEAD( l_U806[6] )))
        {
            SAY_AMBIENT_SPEECH( l_U806[6], "CONV_GANG_RESP", 1, 0, 0 );
        }
        l_U678 = 1;
    }
    if ((l_U660[l_U656] == 1) AND ((l_U563[3] == 0) AND (TIMERA() > 15500)))
    {
        PRINTSTRING( "Trying to play speech" );
        PRINTNL();
        sub_24557( ref l_U638, 0 );
        sub_6945( "R12_INTRGT", ref l_U638, 8, 1 );
        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        l_U563[3] = 1;
    }
    if ((l_U563[3] == 1) AND ((sub_24732( l_U638 )) > 0))
    {
        SET_CHAR_COORDINATES( l_U628, 1214.30700000, 1442.79100000, 15.71660000 );
        sub_23294( ref l_U624, 0 );
        sub_23294( ref l_U626, 1 );
        SET_CAM_POS( l_U626, 1194.79800000, 1444.49800000, 30.34273000 );
        SET_CAM_ROT( l_U626, 4.54335800, 0.00000000, -139.03750000 );
        SET_CAM_FOV( l_U626, 30.00000000 );
        SET_CAM_NEAR_DOF( l_U626, 1.50000000 );
        SET_CAM_FAR_DOF( l_U626, 5.00000000 );
    }
    if ((l_U563[3] == 1) AND ((sub_24732( l_U638 )) > 1))
    {
        SET_CAM_POS( l_U626, 1197.84700000, 1444.60000000, 31.20639000 );
        SET_CAM_ROT( l_U626, -14.69898000, -0.00000000, 140.64360000 );
        SET_CAM_NEAR_DOF( l_U626, 1.50000000 );
        SET_CAM_FAR_DOF( l_U626, 5.00000000 );
    }
    if ((l_U563[3] == 1) AND (NOT (sub_24748( l_U638 ))))
    {
        l_U563[5] = 1;
    }
    if ((TIMERA() > 1000) AND ((IS_SCREEN_FADED_IN()) AND (sub_25284())))
    {
        l_U700 = 1;
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
    }
    if (((l_U563[5] == 1) AND ((l_U660[l_U656] == 1) AND (TIMERA() > 25000))) || ((l_U563[4] == 1) AND (l_U700)))
    {
        if (l_U700)
        {
            sub_24557( ref l_U638, 0 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
        }
        CLEAR_AREA_OF_CHARS( 1214.30700000, 1442.79100000, 15.71660000, 60.00000000 );
        GET_GAME_VIEWPORT_ID( ref l_U654 );
        WAIT( 0 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U654, "Factory_room03" );
        SET_CHAR_COORDINATES( l_U628, 1214.30700000, 1442.79100000, 15.71660000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U628, "Factory_room03" );
        TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U628, 1214.30700000, 1442.79100000, 15.71660000, 5000 );
        UNLOCK_RAGDOLL( l_U628, 1 );
        sub_5359();
        sub_23351( 0 );
        sub_23294( ref l_U624, 0 );
        sub_23294( ref l_U626, 0 );
        SET_CAM_FOV( l_U626, 55.00000000 );
        if (l_U700)
        {
            WAIT( 1000 );
            DO_SCREEN_FADE_IN( 500 );
        }
        PRINT( "FS_09", 7500, 1 );
        DELETE_CHAR( ref l_U883 );
        DELETE_CHAR( ref l_U882 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1992728631 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1543404628 );
        ADD_BLIP_FOR_COORD( 1196.04600000, 1442.84900000, 29.28010000, ref l_U1014 );
        SET_BLIP_AS_FRIENDLY( l_U1014, 1 );
        l_U656++;
        SETTIMERA( 0 );
    }
    return;
}

void sub_22525(unknown uParam0)
{
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^) );
    if (NOT (HAS_CHAR_GOT_WEAPON( (uParam0^), 7 )))
    {
        if ((sub_22574( 0, 10 )) > 5)
        {
            GIVE_WEAPON_TO_CHAR( (uParam0^), 12, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( (uParam0^), 12, 0 );
        }
        else
        {
            GIVE_WEAPON_TO_CHAR( (uParam0^), 14, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( (uParam0^), 14, 0 );
        }
    }
    SET_CHAR_AS_ENEMY( (uParam0^), 1 );
    return;
}

void sub_22574(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_23294(unknown uParam0, unknown uParam1)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_ACTIVE( (uParam0^), uParam1 );
        SET_CAM_PROPAGATE( (uParam0^), uParam1 );
    }
    return;
}

void sub_23351(boolean bParam0)
{
    if (bParam0)
    {
        BEGIN_CAM_COMMANDS( ref l_U620 );
    }
    SET_USE_HIGHDOF( bParam0 );
    SET_WIDESCREEN_BORDERS( bParam0 );
    SET_PLAYER_CONTROL( l_U629, NOT bParam0 );
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    if (NOT bParam0)
    {
        END_CAM_COMMANDS( ref l_U620 );
    }
    return;
}

void sub_24557(int iParam0, unknown uParam1)
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

void sub_24732(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_24748( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

int sub_24748(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_7119( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_7119( "\n speech is not playing" );
    }
    return 0;
}

int sub_25284()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_25940()
{
    if ((IS_CHAR_SHOOTING( l_U628 )) || ((l_U795 == 1) || (((NOT (IS_CHAR_DUCKING( l_U628 ))) AND ((TIMERA() > 1500) AND (NOT (IS_PED_IN_COVER( l_U628 ))))) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1208.50200000, 1445.13700000, 16.71660000, 10.00000000, 1.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1193.87500000, 1443.40600000, 16.71660000, 4.00000000, 4.00000000, 1.00000000, 0 ))))))
    {
        if (l_U771 == 0)
        {
            SETTIMERA( 0 );
            sub_6945( "R12_GANG2", ref l_U638, 8, 1 );
            SET_PED_IS_BLIND_RAGING( l_U628, 1 );
            for ( l_U799 = 0; l_U799 <= 13; l_U799++ )
            {
                if (DOES_CHAR_EXIST( l_U806[l_U799] ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U806[l_U799] )))
                    {
                        sub_26237( ref l_U806[l_U799] );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U806[l_U799] )))
                    {
                        CLEAR_CHAR_TASKS( l_U806[l_U799] );
                        SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U806[l_U799], 0 );
                        TASK_PERFORM_SEQUENCE( l_U806[l_U799], l_U1006 );
                        SET_CHAR_RELATIONSHIP( l_U806[l_U799], 5, 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U806[l_U799], 0 );
                        WAIT( 250 );
                    }
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U806[0] )))
            {
                SAY_AMBIENT_SPEECH( l_U806[0], "PLAYER_OVER_THERE", 1, 1, 0 );
            }
            if (DOES_CHAR_EXIST( l_U883 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U883 )))
                {
                    SET_CHAR_COLLISION( l_U883, 1 );
                }
            }
            l_U771 = 1;
        }
    }
    sub_26775();
    if ((l_U772 == 1) || (IS_CHAR_SHOOTING( l_U628 )))
    {
        if (l_U660[l_U656] == 0)
        {
            l_U660[l_U656] = 1;
        }
    }
    if (l_U660[l_U656] == 1)
    {
        l_U798 = sub_27150( ref l_U806 );
    }
    else
    {
        sub_19205();
    }
    GET_GAME_TIMER( ref l_U1028 );
    if ((l_U660[l_U656] == 1) AND ((NOT (sub_24748( l_U638 ))) AND ((NOT (IS_AMBIENT_SPEECH_PLAYING( l_U628 ))) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U1028 - l_U704) > 30000)))))
    {
        sub_6945( "R12_GOON", ref l_U638, 8, 1 );
        GET_GAME_TIMER( ref l_U704 );
    }
    if ((l_U798 > 4) || (((sub_27433( l_U628 )) > 19.00000000) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1215.98900000, 1455.97800000, 18.21660000, 2.00000000, 2.00000000, 1.00000000, 0 ))))
    {
        CLEAR_PRINTS();
        l_U656++;
    }
    return;
}

void sub_26237(unknown uParam0)
{
    int iVar3;

    if (NOT (HAS_CHAR_GOT_WEAPON( (uParam0^), 7 )))
    {
        if (iVar3 < 175)
        {
            if (NOT (HAS_CHAR_GOT_WEAPON( (uParam0^), 12 )))
            {
                GIVE_WEAPON_TO_CHAR( (uParam0^), 12, 30000, 0 );
            }
        }
        else if (NOT (HAS_CHAR_GOT_WEAPON( (uParam0^), 14 )))
        {
            GIVE_WEAPON_TO_CHAR( (uParam0^), 14, 30000, 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        TASK_SWAP_WEAPON( (uParam0^), 1 );
    }
    SET_CHAR_AS_ENEMY( (uParam0^), 1 );
    SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 24 );
    SET_CHAR_RELATIONSHIP( (uParam0^), 5, 0 );
    SET_COMBAT_DECISION_MAKER( (uParam0^), l_U1004 );
    SET_CHAR_ACCURACY( (uParam0^), 30 );
    SET_PED_PATH_MAY_DROP_FROM_HEIGHT( (uParam0^), 0 );
    PRINTSTRING( "Settting up Prof Defensive char number: " );
    PRINTNL();
    return;
}

void sub_26775()
{
    if (NOT (LOCATE_CHAR_ANY_MEANS_2D( l_U628, 1219.35000000, 1441.59800000, 80.00000000, 80.00000000, 0 )))
    {
        PRINT_NOW( "BYEROM", 7500, 1 );
        sub_26843();
    }
    return;
}

void sub_26843()
{
    sub_24557( ref l_U638, 0 );
    REMOVE_CHAR_ELEGANTLY( ref l_U883 );
    SET_PLAYER_MOOD_PISSED_OFF( sub_3554(), 150 );
    SAY_AMBIENT_SPEECH( l_U628, "MISSION_FAIL_RAGE", 0, 0, 0 );
    CLEAR_HELP();
    l_U659 = 0;
    sub_26936();
    sub_2566();
    return;
}

void sub_26936()
{
    sub_26945();
    return;
}

void sub_26945()
{
    int iVar2;

    iVar2 = 0;
    sub_26959( iVar2 );
    sub_1655( iVar2 );
    return;
}

void sub_26959(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3554(), 150 );
    CLEAR_HELP();
    sub_479( uParam0 );
    return;
}

void sub_27150(unknown uParam0)
{
    int Result;

    for ( l_U799 = 0; l_U799 <= 13; l_U799++ )
    {
        if (DOES_CHAR_EXIST( (uParam0^)[l_U799] ))
        {
            if (IS_CHAR_INJURED( (uParam0^)[l_U799] ))
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_27433(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar3, ref uVar4, ref Result );
    }
    else if (DOES_CHAR_EXIST( uParam0 ))
    {
        N_1363505769( uParam0, ref uVar3, ref uVar4, ref Result );
    }
    return Result;
}

void sub_27562()
{
    int I;

    if (l_U660[l_U656] == 0)
    {
        CREATE_CHAR( 26, -1180674815, 1226.45200000, 1460.45000000, 20.68340000, ref l_U821[0], 1 );
        CREATE_CHAR( 26, -2088164056, 1225.98100000, 1458.46500000, 20.68320000, ref l_U821[1], 1 );
        CREATE_CHAR( 26, 1976502708, 1226.10300000, 1449.66000000, 20.84820000, ref l_U821[2], 1 );
        CREATE_CHAR( 26, -1180674815, 1224.57300000, 1445.52400000, 20.78540000, ref l_U821[3], 1 );
        CREATE_CHAR( 26, -1180674815, 1214.90600000, 1442.01900000, 20.68340000, ref l_U821[4], 1 );
        CREATE_CHAR( 26, -2088164056, 1206.20000000, 1444.79200000, 20.68320000, ref l_U821[5], 1 );
        CREATE_CHAR( 26, 1976502708, 1194.32200000, 1444.14300000, 20.68320000, ref l_U821[6], 1 );
        for ( l_U799 = 0; l_U799 <= 3; l_U799++ )
        {
            if (DOES_CHAR_EXIST( l_U821[l_U799] ))
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U821[l_U799], "factory_room01" );
                sub_27931( ref l_U821[l_U799] );
                StrCopy( ref l_U777, "Floor1GoonA1", 64 );
                ConcatString(ref l_U777, l_U799, 64);
                SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U821[l_U799], 0 );
                SET_CHAR_NAME_DEBUG( l_U821[l_U799], ref l_U777 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U821[l_U799] );
                SET_CHAR_HEALTH( l_U821[l_U799], 250 );
                if ((l_U799 == 1) || (l_U799 == 0))
                {
                    REMOVE_ALL_CHAR_WEAPONS( l_U821[l_U799] );
                    GIVE_WEAPON_TO_CHAR( l_U821[l_U799], 7, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U821[l_U799], 7, 1 );
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U821[0] )))
        {
            SAY_AMBIENT_SPEECH( l_U821[0], "PLAYER_OVER_THERE", 1, 1, 0 );
        }
        for ( l_U799 = 3; l_U799 <= 6; l_U799++ )
        {
            if (DOES_CHAR_EXIST( l_U821[l_U799] ))
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U821[l_U799], "factory_room01" );
                sub_26237( ref l_U821[l_U799] );
                StrCopy( ref l_U777, "Floor1GoonA2", 64 );
                ConcatString(ref l_U777, l_U799, 64);
                SET_CHAR_NAME_DEBUG( l_U821[l_U799], ref l_U777 );
                if (l_U799 != 4)
                {
                    SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U821[l_U799], 1194.23100000, 1443.15000000, 22.18320000, 1215.72900000, 1442.89800000, 20.18320000, 6.00000000 );
                }
                else
                {
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U821[l_U799], 1215.16000000, 1441.95700000, 20.68340000, 2.00000000 );
                }
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U821[l_U799] );
                if ((l_U799 == 5) || (l_U799 == 3))
                {
                    REMOVE_ALL_CHAR_WEAPONS( l_U821[l_U799] );
                    GIVE_WEAPON_TO_CHAR( l_U821[l_U799], 7, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U821[l_U799], 7, 1 );
                    SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U821[l_U799], 0 );
                }
            }
        }
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U821[0], 1224.09300000, 1458.60500000, 21.77060000, 2.00000000 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U821[1], 1225.98100000, 1458.46500000, 21.68320000, 2.00000000 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U821[2], 1226.10300000, 1449.66000000, 21.84820000, 2.00000000 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U821[3], 1224.57300000, 1445.52400000, 21.78540000, 2.00000000 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U821[4], 1213.90600000, 1442.01900000, 20.68340000, 2.00000000 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U821[5], 1206.95100000, 1444.88100000, 21.68840000, 2.00000000 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U821[6], 1194.32200000, 1444.14300000, 21.68320000, 2.00000000 );
        if (DOES_CHAR_EXIST( l_U821[9] ))
        {
            StrCopy( ref l_U777, "Floor1GoonA2", 64 );
            l_U799 = 9;
            ConcatString(ref l_U777, l_U799, 64);
            SET_CHAR_NAME_DEBUG( l_U821[9], ref l_U777 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U821[9], 1189.56100000, 1443.11800000, 21.68320000, 4.50000000 );
        }
        l_U660[l_U656] = 1;
    }
    GET_GAME_TIMER( ref l_U1028 );
    if ((l_U660[l_U656] == 1) AND ((NOT (sub_24748( l_U638 ))) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U1028 - l_U704) > 15000))))
    {
        sub_6945( "R12_GOON", ref l_U638, 8, 1 );
        GET_GAME_TIMER( ref l_U704 );
    }
    if ((l_U691 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1215.98900000, 1455.97800000, 18.21660000, 2.00000000, 2.00000000, 1.00000000, 0 )))
    {
        if (IS_CHAR_INJURED( l_U821[2] ))
        {
            CREATE_CHAR( 26, 1976502708, 1229.33400000, 1456.91700000, 20.68340000, ref l_U821[2], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U821[2], "factory_room01" );
            sub_26237( ref l_U821[2] );
            StrCopy( ref l_U777, "Floor1Respwan", 64 );
            ConcatString(ref l_U777, l_U799, 64);
            SET_CHAR_NAME_DEBUG( l_U821[2], ref l_U777 );
            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U821[2], 1194.23100000, 1443.15000000, 22.18320000, 1215.72900000, 1442.89800000, 20.18320000, 6.00000000 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U821[2] );
            GIVE_WEAPON_TO_CHAR( l_U821[2], 7, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U821[2], 7, 1 );
            SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U821[2], 0 );
        }
        if (IS_CHAR_INJURED( l_U821[3] ))
        {
            CREATE_CHAR( 26, -1180674815, 1229.33400000, 1452.91700000, 20.68340000, ref l_U821[3], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U821[3], "factory_room01" );
            sub_26237( ref l_U821[3] );
            StrCopy( ref l_U777, "Floor1Respwan", 64 );
            ConcatString(ref l_U777, l_U799, 64);
            SET_CHAR_NAME_DEBUG( l_U821[3], ref l_U777 );
            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U821[3], 1194.23100000, 1443.15000000, 22.18320000, 1215.72900000, 1442.89800000, 20.18320000, 6.00000000 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U821[3] );
            GIVE_WEAPON_TO_CHAR( l_U821[3], 7, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U821[3], 7, 1 );
            SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U821[3], 0 );
        }
        if (IS_CHAR_INJURED( l_U821[4] ))
        {
            CREATE_CHAR( 26, -1180674815, 1213.96000000, 1441.95700000, 20.68340000, ref l_U821[4], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U821[4], "factory_room01" );
            sub_26237( ref l_U821[4] );
            StrCopy( ref l_U777, "Floor1Respwan", 64 );
            ConcatString(ref l_U777, l_U799, 64);
            SET_CHAR_NAME_DEBUG( l_U821[4], ref l_U777 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U821[4], 1213.96000000, 1441.95700000, 20.68340000, 2.00000000 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U821[4] );
            GIVE_WEAPON_TO_CHAR( l_U821[4], 7, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U821[4], 7, 1 );
            SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U821[4], 0 );
        }
        if (IS_CHAR_INJURED( l_U821[6] ))
        {
            CREATE_CHAR( 26, -1180674815, 1194.32200000, 1444.14300000, 20.68320000, ref l_U821[6], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U821[6], "factory_room01" );
            sub_26237( ref l_U821[6] );
            StrCopy( ref l_U777, "Floor1Respwan", 64 );
            ConcatString(ref l_U777, l_U799, 64);
            SET_CHAR_NAME_DEBUG( l_U821[6], ref l_U777 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U821[6], 1194.32200000, 1444.14300000, 20.68320000, 2.00000000 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U821[6] );
            GIVE_WEAPON_TO_CHAR( l_U821[6], 7, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U821[6], 7, 1 );
            SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U821[6], 0 );
        }
        l_U691 = 1;
    }
    sub_26775();
    if ((l_U660[l_U656] == 1) AND (l_U563[0] == 0))
    {
        for ( I = 0; I <= 13; I++ )
        {
            if (DOES_CHAR_EXIST( l_U821[I] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U821[I] )))
                {
                    TASK_PERFORM_SEQUENCE( l_U821[I], l_U1006 );
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U821[0] )))
        {
            SAY_AMBIENT_SPEECH( l_U821[0], "PLAYER_OVER_THERE", 1, 1, 0 );
        }
        l_U563[0] = 1;
    }
    l_U798 = sub_27150( ref l_U821 );
    if (((sub_27433( l_U628 )) > 24.50000000) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1193.92300000, 1442.72400000, 21.68820000, 3.00000000, 2.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1198.12000000, 1442.79200000, 24.18320000, 2.00000000, 2.00000000, 1.00000000, 0 ))))
    {
        sub_30774();
        sub_5359();
        CLEAR_PRINTS();
        l_U656++;
    }
    return;
}

void sub_27931(unknown uParam0)
{
    unknown uVar3;

    if (NOT (HAS_CHAR_GOT_WEAPON( (uParam0^), 7 )))
    {
        if (NOT (HAS_CHAR_GOT_WEAPON( (uParam0^), 14 )))
        {
            GIVE_WEAPON_TO_CHAR( (uParam0^), 14, 30000, 0 );
        }
    }
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
    SET_CURRENT_CHAR_WEAPON( (uParam0^), 14, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 24 );
    SET_CHAR_RELATIONSHIP( (uParam0^), 5, 0 );
    SET_CHAR_DECISION_MAKER( (uParam0^), l_U1000 );
    SET_COMBAT_DECISION_MAKER( (uParam0^), l_U1003 );
    l_U653++;
    if ((l_U653 mod 3) == 0)
    {
        SET_CHAR_ACCURACY( (uParam0^), 30 );
    }
    else
    {
        SET_CHAR_ACCURACY( (uParam0^), 33 );
    }
    SET_CHAR_HEALTH( (uParam0^), uVar3 );
    SET_CHAR_AS_ENEMY( (uParam0^), 1 );
    SET_PED_PATH_MAY_DROP_FROM_HEIGHT( (uParam0^), 0 );
    PRINTSTRING( "Setting up Fixed Goon: " );
    PRINTNL();
    return;
}

void sub_30774()
{
    int I;

    for ( I = 0; I <= 13; I++ )
    {
        l_U885[I] = 0;
    }
    return;
}

void sub_30861()
{
    int I;

    if (l_U660[l_U656] == 0)
    {
        CREATE_CHAR( 26, -1180674815, 1208.55800000, 1438.05400000, 32.50040000, ref l_U908[0], 1 );
        CREATE_CHAR( 26, -1180674815, 1208.57100000, 1439.23100000, 32.36380000, ref l_U908[1], 1 );
        CREATE_CHAR( 26, -1180674815, 1208.31700000, 1443.67000000, 31.86550000, ref l_U908[2], 1 );
        for ( I = 0; I <= 2; I++ )
        {
            SET_CHAR_HEADING( l_U908[I], 9.36320100 );
            SET_CHAR_WILL_USE_COVER( l_U908[I], 0 );
            GIVE_WEAPON_TO_CHAR( l_U908[I], 12, 30000, 0 );
            SET_COMBAT_DECISION_MAKER( l_U908[I], l_U1004 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U908[I] );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[I], 1 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U908[I], 24 );
            SET_CHAR_RELATIONSHIP( l_U908[I], 5, 0 );
            SET_CHAR_ACCURACY( l_U908[I], 24 );
            if ((I == 3) || (I == 2))
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U908[I], "Factory_Room04" );
            }
            else
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U908[I], "Factory_Room05" );
            }
            SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U908[I], 0 );
        }
        CREATE_CHAR( 26, -1180674815, 1210.49000000, 1436.85100000, 26.04680000, ref l_U836[3], 1 );
        CREATE_CHAR( 26, 1976502708, 1217.14500000, 1434.35000000, 25.98010000, ref l_U836[4], 1 );
        CREATE_CHAR( 26, -2088164056, 1219.04000000, 1436.99200000, 25.98010000, ref l_U836[5], 1 );
        CREATE_CHAR( 26, -1180674815, 1221.43600000, 1447.43700000, 24.98050000, ref l_U836[0], 1 );
        CREATE_CHAR( 26, 1976502708, 1229.57800000, 1450.76700000, 25.44190000, ref l_U836[1], 1 );
        CREATE_CHAR( 26, -2088164056, 1224.26000000, 1436.90000000, 24.98050000, ref l_U836[2], 1 );
        for ( l_U799 = 0; l_U799 <= 5; l_U799++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U836[l_U799] )))
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U836[l_U799], "factory_room01" );
                sub_26237( ref l_U836[l_U799] );
                StrCopy( ref l_U777, "floor2Goon", 64 );
                ConcatString(ref l_U777, l_U799, 64);
                SET_CHAR_NAME_DEBUG( l_U836[l_U799], ref l_U777 );
                SET_CHAR_AS_ENEMY( l_U836[l_U799], 1 );
                SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U836[l_U799], 0 );
            }
        }
        for ( l_U799 = 3; l_U799 <= 5; l_U799++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U836[l_U799] )))
            {
                TASK_PERFORM_SEQUENCE( l_U836[l_U799], l_U1006 );
                StrCopy( ref l_U777, "floor2GoonSC", 64 );
                ConcatString(ref l_U777, l_U799, 64);
                SET_CHAR_NAME_DEBUG( l_U836[l_U799], ref l_U777 );
                SET_CHAR_AS_ENEMY( l_U836[l_U799], 1 );
                SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U836[l_U799], 0 );
            }
        }
        for ( l_U799 = 0; l_U799 <= 1; l_U799++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U836[l_U799] )))
            {
                SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U836[l_U799], 1225.16600000, 1464.21500000, 26.10200000, 1227.77300000, 1447.92200000, 24.10200000, 8.50000000 );
                TASK_PERFORM_SEQUENCE( l_U836[l_U799], l_U1006 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U836[2] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U836[2] )))
            {
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U836[2], 1224.26000000, 1436.90000000, 24.98050000, 3.50000000 );
                SET_CHAR_ACCURACY( l_U836[2], 30 );
                SET_SENSE_RANGE( l_U836[2], 50.00000000 );
                GIVE_WEAPON_TO_CHAR( l_U836[2], 11, 30000, 1 );
                TASK_PERFORM_SEQUENCE( l_U836[2], l_U1006 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U836[0] )))
        {
            SAY_AMBIENT_SPEECH( l_U836[0], "PLAYER_OVER_THERE", 1, 1, 0 );
        }
        if ((NOT (IS_CHAR_DEAD( l_U882 ))) AND (NOT (IS_CHAR_DEAD( l_U883 ))))
        {
            SET_CHAR_VISIBLE( l_U883, 0 );
            SET_CHAR_VISIBLE( l_U882, 0 );
        }
        CREATE_CHAR( 26, 1976502708, 1208.25000000, 1465.39900000, 25.98010000, ref l_U881, 1 );
        SET_CHAR_HEADING( l_U881, 267.00000000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U881, "factory_room01" );
        SET_CHAR_AS_ENEMY( l_U881, 1 );
        sub_27931( ref l_U881 );
        l_U660[l_U656] = 1;
    }
    sub_26775();
    if ((l_U563[0] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1226.33700000, 1456.17700000, 25.98010000, 8.00000000, 1.00000000, 1.00000000, 0 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U881 )))
        {
            TASK_PERFORM_SEQUENCE( l_U881, l_U1008 );
        }
        l_U563[0] = 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1220.06200000, 1437.12400000, 25.98010000, 2.50000000, 2.50000000, 2.50000000, 0 ))
    {
        if (l_U563[1] == 0)
        {
            l_U563[1] = 1;
        }
    }
    if (l_U563[2] == 0)
    {
        if (((sub_27433( l_U628 )) > 29.78010000) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1223.80300000, 1447.68500000, 26.41670000, 4.00000000, 1.00000000, 1.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1228.34800000, 1453.87800000, 25.98010000, 8.00000000, 3.00000000, 1.50000000, 0 ))))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1568036189, 1209.10000000, 1446.70000000, 31.80000000, 0, 0.00000000 );
            if (NOT (IS_CHAR_DEAD( l_U908[0] )))
            {
                SET_CHAR_WILL_USE_COVER( l_U908[0], 0 );
                SET_CHAR_ACCURACY( l_U908[0], 15 );
                SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U908[0], 0 );
                sub_32840( l_U908[0], 1208.09400000, 1451.57700000, 30.96990000, 0, 0 );
                SET_CHAR_AS_ENEMY( l_U908[0], 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U908[1] )))
            {
                SET_CHAR_WILL_USE_COVER( l_U908[1], 0 );
                SET_CHAR_ACCURACY( l_U908[1], 15 );
                SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U908[1], 0 );
                sub_32840( l_U908[1], 1208.07600000, 1454.56900000, 30.62930000, 0, 1 );
                SET_CHAR_AS_ENEMY( l_U908[1], 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U908[2] )))
            {
                SET_CHAR_WILL_USE_COVER( l_U908[2], 0 );
                SET_CHAR_ACCURACY( l_U908[2], 15 );
                SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U908[2], 0 );
                sub_32840( l_U908[2], 1208.07700000, 1459.29000000, 30.08710000, 0, 0 );
                SET_CHAR_AS_ENEMY( l_U908[2], 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U908[0] )))
            {
                SAY_AMBIENT_SPEECH( l_U908[0], "PLAYER_OVER_THERE", 1, 1, 0 );
            }
            GET_GAME_TIMER( ref l_U1029 );
            REQUEST_MODEL( -1992728631 );
            l_U563[2] = 1;
        }
    }
    GET_GAME_TIMER( ref l_U1028 );
    if ((l_U655 == 0) AND ((l_U660[l_U656] == 1) AND ((NOT (sub_24748( l_U638 ))) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U1028 - l_U704) > 15000)))))
    {
        sub_6945( "R12_GOON", ref l_U638, 8, 1 );
        GET_GAME_TIMER( ref l_U704 );
    }
    if ((l_U655 == 0) AND ((HAS_MODEL_LOADED( -1992728631 )) AND (l_U563[2] == 1)))
    {
        sub_13927( 0, ref l_U883, 1203.70600000, 1435.35900000, 29.24520000, 275.16160000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U883, "factory_room04" );
        sub_3617( 1, l_U883, "ROMAN", 0 );
        sub_6945( "R12_HELP", ref l_U638, 8, 0 );
        SET_ROMANS_MOOD( 2 );
        l_U655 = 1;
    }
    if ((NOT (sub_24748( l_U638 ))) AND (l_U655 == 1))
    {
        if (DOES_CHAR_EXIST( l_U883 ))
        {
            DELETE_CHAR( ref l_U883 );
        }
        sub_33741();
    }
    GET_GAME_TIMER( ref l_U1030 );
    if (l_U563[2] == 1)
    {
        if ((l_U1030 - l_U1029) > 10000)
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1568036189, 1209.10000000, 1446.70000000, 31.80000000, 1, 0.00000000 );
        }
    }
    if (l_U563[2] == 1)
    {
        sub_34194( 0 );
        sub_34194( 1 );
        sub_34194( 2 );
    }
    l_U798 = sub_27150( ref l_U836 );
    if (((sub_27433( l_U628 )) > 29.50000000) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1220.69500000, 1467.52600000, 25.98550000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1219.77000000, 1470.96400000, 28.73310000, 2.40000000, 2.80000000, 4.00000000, 0 ))))
    {
        CLEAR_PRINTS();
        l_U656++;
    }
    return;
}

void sub_32840(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, int iParam5)
{
    int iVar8;
    unknown uVar9;

    if (iParam4 == 1)
    {
        iVar8 = 4;
    }
    else
    {
        iVar8 = 3;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uParam0, 1 );
        SET_CHAR_HEALTH( uParam0, 200 );
        SET_CHAR_SHOOT_RATE( uParam0, 50 );
        if (iParam5 == 0)
        {
            OPEN_SEQUENCE_TASK( ref uVar9 );
            TASK_GO_STRAIGHT_TO_COORD( 0, uParam1._fU0, uParam1._fU4, uParam1._fU8, iVar8, 10000 );
            TASK_COMBAT( 0, l_U628 );
            CLOSE_SEQUENCE_TASK( uVar9 );
        }
        else
        {
            OPEN_SEQUENCE_TASK( ref uVar9 );
            TASK_GO_STRAIGHT_TO_COORD( 0, uParam1._fU0, uParam1._fU4, uParam1._fU8, iVar8, 10000 );
            TASK_COMBAT( 0, l_U628 );
            TASK_TOGGLE_DUCK( 0, 1 );
            CLOSE_SEQUENCE_TASK( uVar9 );
        }
        TASK_PERFORM_SEQUENCE( uParam0, uVar9 );
        CLEAR_SEQUENCE_TASK( uVar9 );
    }
    return;
}

void sub_33741()
{
    int iVar2;

    GET_GAME_TIMER( ref l_U703 );
    if ((l_U703 - l_U702) > 5000)
    {
        if ((NOT (IS_AMBIENT_SPEECH_PLAYING( l_U628 ))) AND (NOT (sub_24748( l_U638 ))))
        {
            iVar2 = sub_22574( 0, 16 );
            if ((iVar2 < 3) AND (iVar2 > 0))
            {
                if (DOES_CHAR_EXIST( l_U883 ))
                {
                    sub_6945( "R12_HELP", ref l_U638, 8, 0 );
                }
            }
            else if ((iVar2 < 6) AND (iVar2 > 3))
            {
                if (DOES_CHAR_EXIST( l_U883 ))
                {
                    sub_6945( "R12_NSHOUTS", ref l_U638, 8, 0 );
                }
            }
            else if (iVar2 > 6)
            {
                if (DOES_CHAR_EXIST( l_U851[0] ))
                {
                    sub_3617( 5, l_U851[0], "HENCHMAN", 0 );
                    sub_6945( "R12_HENCH", ref l_U638, 8, 0 );
                }
                else if ((sub_22574( 0, 16 )) < 4)
                {
                    if (DOES_CHAR_EXIST( l_U883 ))
                    {
                        sub_6945( "R12_HELP", ref l_U638, 8, 0 );
                    }
                }
            };;;
            GET_GAME_TIMER( ref l_U702 );
        }
    }
    return;
}

void sub_34194(unknown uParam0)
{
    vector vVar3;
    float fVar6;

    if (NOT (IS_CHAR_DEAD( l_U908[uParam0] )))
    {
        if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U908[uParam0], l_U628, 1 )) AND (l_U913[uParam0][3] == 0))
        {
            if (NOT (IS_CHAR_INJURED( l_U908[uParam0] )))
            {
                if ((sub_22574( 0, 10 )) < 5)
                {
                    fVar6 = -1.00000000;
                    l_U967 = {1206.84000000, 1462.28000000, 28.46000000};
                    l_U970 = {1206.83000000, 1447.53000000, 30.12000000};
                    vVar3 = {-1.00000000, 0.00000000, 0.00000000};
                }
                else
                {
                    fVar6 = 1.00000000;
                    vVar3 = {1.00000000, 0.00000000, 0.00000000};
                    l_U970 = {1209.35000000, 1462.25000000, 28.46000000};
                    l_U967 = {1209.36000000, 1447.35000000, 30.14000000};
                }
                SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U908[uParam0], 10000, 10000, 4, vVar3, 15.00000000, l_U967, l_U970 );
            }
            l_U913[uParam0][3] = 1;
        }
    }
    return;
}

void sub_34676()
{
    if (l_U660[l_U656] == 0)
    {
        if (l_U707 == 1)
        {
            for ( l_U799 = 0; l_U799 <= 13; l_U799++ )
            {
                if (DOES_CHAR_EXIST( l_U806[l_U799] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U806[l_U799] )))
                    {
                        CLEAR_CHAR_TASKS( l_U806[l_U799] );
                        sub_18249( ref l_U806[l_U799] );
                        TASK_PERFORM_SEQUENCE( l_U806[l_U799], l_U1006 );
                        SET_CHAR_RELATIONSHIP( l_U806[l_U799], 5, 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U806[l_U799], 0 );
                    }
                }
            }
        }
        else
        {
            CREATE_CHAR( 26, -1180674815, 1203.06500000, 1453.94100000, 37.93810000, ref l_U908[2], 1 );
            SET_CHAR_HEADING( l_U908[2], 341.87940000 );
            GIVE_WEAPON_TO_CHAR( l_U908[2], 12, 30000, 0 );
            SET_COMBAT_DECISION_MAKER( l_U908[2], l_U1002 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U908[2] );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U908[2], 1 );
            SET_CHAR_ACCURACY( l_U908[2], 15 );
            SET_CHAR_AS_ENEMY( l_U908[2], 1 );
            SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U908[2], 0 );
            TASK_TOGGLE_DUCK( l_U908[2], 1 );
            CREATE_CHAR( 26, -1180674815, 1200.75100000, 1455.57900000, 36.72050000, ref l_U908[3], 1 );
            SET_CHAR_HEADING( l_U908[3], 352.60710000 );
            GIVE_WEAPON_TO_CHAR( l_U908[3], 12, 30000, 0 );
            SET_COMBAT_DECISION_MAKER( l_U908[3], l_U1002 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U908[3] );
            SET_CHAR_ACCURACY( l_U908[3], 15 );
            SET_COMBAT_DECISION_MAKER( l_U908[3], l_U1001 );
            SET_CHAR_DECISION_MAKER( l_U908[3], l_U999 );
            SET_CHAR_AS_ENEMY( l_U908[3], 1 );
            SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U908[3], 0 );
            TASK_TOGGLE_DUCK( l_U908[3], 1 );
        }
        CREATE_CHAR( 26, -1180674815, 1190.30500000, 1445.88900000, 30.28010000, ref l_U851[0], 1 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U851[0], 1190.30500000, 1445.88900000, 30.28010000, 4.00000000 );
        ADD_ARMOUR_TO_CHAR( l_U851[0], 50 );
        CREATE_CHAR( 26, -1180674815, 1192.14900000, 1467.77700000, 30.28010000, ref l_U851[1], 1 );
        CREATE_CHAR( 26, -1180674815, 1192.14900000, 1468.77700000, 30.28010000, ref l_U851[2], 1 );
        for ( l_U799 = 0; l_U799 <= 4; l_U799++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U851[l_U799] )))
            {
                SET_CHAR_ACCURACY( l_U851[l_U799], 20 );
                if (l_U799 > 0)
                {
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U851[l_U799], "factory_room01" );
                }
                else
                {
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U851[l_U799], "factory_room04" );
                }
                sub_26237( ref l_U851[l_U799] );
                TASK_PERFORM_SEQUENCE( l_U851[l_U799], l_U1006 );
                StrCopy( ref l_U777, "floor4Goon", 64 );
                ConcatString(ref l_U777, l_U799, 64);
                SET_CHAR_NAME_DEBUG( l_U851[l_U799], ref l_U777 );
            }
        }
        sub_5359();
        l_U660[l_U656] = 1;
    }
    sub_26775();
    l_U798 = sub_27150( ref l_U851 );
    sub_34194( 0 );
    sub_34194( 1 );
    sub_34194( 2 );
    sub_34194( 3 );
    if ((l_U563[2] == 0) AND (IS_CHAR_INJURED( l_U908[2] )))
    {
        if (NOT (IS_CHAR_INJURED( l_U908[3] )))
        {
            SET_CHAR_ACCURACY( l_U908[3], 17 );
            TASK_PERFORM_SEQUENCE( l_U908[3], l_U1009 );
            l_U563[2] = 1;
        }
    }
    if ((l_U563[3] == 0) AND (IS_CHAR_INJURED( l_U908[3] )))
    {
        if (NOT (IS_CHAR_INJURED( l_U908[2] )))
        {
            SET_CHAR_ACCURACY( l_U908[2], 17 );
            TASK_PERFORM_SEQUENCE( l_U908[2], l_U1009 );
            l_U563[3] = 1;
        }
    }
    if ((l_U707 == 1) || (((sub_27433( l_U628 )) > 29.00000000) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1209.85400000, 1469.25900000, 30.28010000, 6.00000000, 6.00000000, 3.00000000, 0 ))))
    {
        sub_5359();
        l_U656++;
    }
    return;
}

void sub_36109()
{
    if (l_U660[l_U656] == 0)
    {
        REQUEST_MODEL( -1992728631 );
        REQUEST_MODEL( 1543404628 );
        while ((NOT (HAS_MODEL_LOADED( 1543404628 ))) || ((NOT (HAS_MODEL_LOADED( -1992728631 ))) || (NOT (HAVE_ANIMS_LOADED( "reaction@male_flee" )))))
        {
            WAIT( 0 );
        }
        sub_13927( 0, ref l_U883, 1203.70600000, 1435.35900000, 29.24520000, 275.16160000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U883, "factory_room04" );
        SET_CHAR_NEVER_TARGETTED( l_U883, 1 );
        REMOVE_BLIP( l_U1014 );
        ADD_BLIP_FOR_CHAR( l_U883, ref l_U1014 );
        SET_BLIP_AS_FRIENDLY( l_U1014, 1 );
        SET_CHAR_VISIBLE( l_U883, 0 );
        CHANGE_BLIP_DISPLAY( l_U1014, 2 );
        SET_CHAR_PROOFS( l_U883, 1, 1, 1, 1, 1 );
        SET_ROMANS_MOOD( 2 );
        sub_3617( 1, l_U883, "ROMAN", 0 );
        CREATE_CHAR( 26, 1543404628, 1204.70600000, 1435.35900000, 29.24520000, ref l_U882, 1 );
        SET_CHAR_HEADING( l_U882, 89.43550000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U882, "factory_room04" );
        GIVE_WEAPON_TO_CHAR( l_U882, 7, 0, 0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U882 );
        FREEZE_CHAR_POSITION( l_U882, 1 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U882, 0 );
        SET_CHAR_KEEP_TASK( l_U882, 1 );
        sub_3617( 2, l_U882, "RUSSIAN_BOSS_M", 0 );
        SET_CHAR_VISIBLE( l_U882, 0 );
        SET_CHAR_PROOFS( l_U882, 1, 1, 1, 1, 1 );
        if (NOT (IS_CHAR_DEAD( l_U882 )))
        {
            SET_CHAR_HEALTH( l_U882, 250 );
            FREEZE_CHAR_POSITION( l_U882, 0 );
            SET_CHAR_COORDINATES( l_U882, 1205.46600000, 1438.48000000, 29.28010000 );
            SET_CHAR_HEADING( l_U882, 85.09820000 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U882, 0.00000000, 0.00000000, -0.50000000, ref l_U801._fU0, ref l_U801._fU4, ref l_U801._fU8 );
            SET_CHAR_NEVER_TARGETTED( l_U882, 1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U882, "Hostage_taker_hide_loop", "missRoman12", 8.00000000, 1, 0, 0, 0, -1 );
        }
        WAIT( 0 );
        if (NOT (IS_CHAR_DEAD( l_U882 )))
        {
            FREEZE_CHAR_POSITION( l_U882, 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U883 )))
        {
            FREEZE_CHAR_POSITION( l_U883, 1 );
            SET_CHAR_HEALTH( l_U883, 250 );
            SET_CHAR_COORDINATES( l_U883, l_U801._fU0, l_U801._fU4, l_U801._fU8 );
            SET_CHAR_HEADING( l_U883, 98.09820000 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U883, "Hostage_hide_loop", "missRoman12", 8.00000000, 1, 0, 0, 0, -1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U908[2] )))
        {
            SET_CHAR_ACCURACY( l_U908[2], 17 );
            TASK_PERFORM_SEQUENCE( l_U908[2], l_U1009 );
        }
        if (NOT (IS_CHAR_INJURED( l_U908[3] )))
        {
            SET_CHAR_ACCURACY( l_U908[3], 20 );
            TASK_PERFORM_SEQUENCE( l_U908[3], l_U1009 );
        }
        l_U660[l_U656] = 1;
    }
    sub_26775();
    sub_33741();
    sub_27150( ref l_U851 );
    sub_37174( 2 );
    sub_37174( 3 );
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1191.24700000, 1450.24900000, 30.23670000, 1.00000000, 3.10000000, 1.20000000, 0 )))
    {
        if (((IS_CHAR_DEAD( l_U851[1] )) AND (IS_CHAR_DEAD( l_U851[2] ))) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1194.87100000, 1469.95600000, 30.28010000, 2.00000000, 3.00000000, 1.00000000, 0 )))
        {
            l_U656++;
        }
    }
    else
    {
        l_U656 = 10;
    }
    return;
}

void sub_37174(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    GET_GAME_TIMER( ref l_U1028 );
    if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U908[uParam0], l_U628, 0 )) AND (l_U714[uParam0][1] == 0))
    {
        if (l_U714[uParam0][8] == 0)
        {
            GET_GAME_TIMER( ref l_U759[uParam0] );
            FORCE_CHAR_TO_DROP_WEAPON( l_U908[uParam0] );
            l_U714[uParam0][8] = 1;
        }
        if (NOT (IS_CHAR_DEAD( l_U908[uParam0] )))
        {
            GET_CHAR_COORDINATES( l_U908[uParam0], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            GET_CHAR_VELOCITY( l_U908[uParam0], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
            if (l_U714[uParam0][2] == 0)
            {
                if (NOT (IS_CHAR_INJURED( l_U908[uParam0] )))
                {
                    SWITCH_PED_TO_RAGDOLL( l_U908[uParam0], 0, 60000, 1, 0, 1, 0 );
                }
                if ((IS_PED_RAGDOLL( l_U908[uParam0] )) AND (NOT (IS_CHAR_INJURED( l_U908[uParam0] ))))
                {
                    CREATE_NM_MESSAGE( 1, 79 );
                    PRINTSTRING( "Sending natural motion message NM_BALANCE_MSG!" );
                    PRINTNL();
                    SEND_NM_MESSAGE( l_U908[uParam0] );
                }
                GET_GAME_TIMER( ref l_U759[uParam0] );
                l_U714[uParam0][2] = 1;
            }
            if ((l_U714[uParam0][2] == 1) AND ((l_U714[uParam0][3] == 0) AND ((l_U1028 - l_U759[uParam0]) > 0)))
            {
                if ((NOT (IS_CHAR_INJURED( l_U908[uParam0] ))) AND (IS_PED_RAGDOLL( l_U908[uParam0] )))
                {
                    CREATE_NM_MESSAGE( 1, 114 );
                    SET_NM_MESSAGE_VEC3( 116, 0.60000000, -0.10000000, 0.00000000 );
                    SET_NM_MESSAGE_FLOAT( 117, 0.10000000 );
                    PRINTSTRING( "Sending natural motion message NM_BALANCE_LEAN_MSG!" );
                    PRINTNL();
                    SEND_NM_MESSAGE( l_U908[uParam0] );
                    APPLY_FORCE_TO_PED( l_U908[uParam0], 1, 0.00000000, 0.10000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 11, 0, 1, 1 );
                }
                GET_GAME_TIMER( ref l_U759[uParam0] );
                l_U714[uParam0][3] = 1;
            }
            if ((l_U714[uParam0][3] == 1) AND ((l_U714[uParam0][4] == 0) AND ((l_U1028 - l_U759[uParam0]) > 100)))
            {
                GET_GAME_TIMER( ref l_U759[uParam0] );
                l_U714[uParam0][4] = 1;
            }
            if ((l_U714[uParam0][4] == 1) AND ((l_U714[uParam0][5] == 0) AND ((l_U1028 - l_U759[uParam0]) > 500)))
            {
                if ((NOT (IS_CHAR_INJURED( l_U908[uParam0] ))) AND (IS_PED_RAGDOLL( l_U908[uParam0] )))
                {
                    CREATE_NM_MESSAGE( 1, 270 );
                    SET_NM_MESSAGE_FLOAT( 274, 0.30000000 );
                    SET_NM_MESSAGE_FLOAT( 276, -0.50000000 );
                    SET_NM_MESSAGE_FLOAT( 273, 1.90000000 );
                    SET_NM_MESSAGE_FLOAT( 275, 0.21000000 );
                    SET_NM_MESSAGE_FLOAT( 287, 0.70999990 );
                    SEND_NM_MESSAGE( l_U908[uParam0] );
                    PRINTSTRING( "Sending natural motion message NM_ROLLDOWN_STAIRS_MSG!" );
                    PRINTNL();
                    CREATE_NM_MESSAGE( 0, 114 );
                    SEND_NM_MESSAGE( l_U908[uParam0] );
                }
                GET_GAME_TIMER( ref l_U759[uParam0] );
                l_U714[uParam0][5] = 1;
            }
            if ((l_U714[uParam0][5] == 1) AND (l_U714[uParam0][6] == 0))
            {
                if (NOT (IS_CHAR_INJURED( l_U908[uParam0] )))
                {
                    if (IS_PED_RAGDOLL( l_U908[uParam0] ))
                    {
                        ;
                    }
                }
                LINE( 1206.12000000, 1460.14200000, 33.79272000, 1199.38100000, 1460.08100000, 33.76239000 );
                GET_GAME_TIMER( ref l_U759[uParam0] );
                l_U714[uParam0][6] = 1;
            }
            if ((l_U714[uParam0][6] == 1) AND ((l_U714[uParam0][7] == 0) AND ((l_U1028 - l_U759[uParam0]) > 1000)))
            {
                if ((IS_PED_RAGDOLL( l_U908[uParam0] )) AND (NOT (IS_CHAR_INJURED( l_U908[uParam0] ))))
                {
                    PRINTSTRING( "Sending Stop NM" );
                    PRINTNL();
                    CREATE_NM_MESSAGE( 0, 33 );
                    SEND_NM_MESSAGE( l_U908[uParam0] );
                    CREATE_NM_MESSAGE( 0, 270 );
                    SEND_NM_MESSAGE( l_U908[uParam0] );
                    CREATE_NM_MESSAGE( 1, 67 );
                    SEND_NM_MESSAGE( l_U908[uParam0] );
                }
                l_U714[uParam0][1] = 1;
                l_U714[uParam0][7] = 1;
            }
            if (IS_PED_RAGDOLL( l_U908[uParam0] ))
            {
                if ((CHECK_NM_FEEDBACK( l_U908[uParam0], 162, 0 )) || (CHECK_NM_FEEDBACK( l_U908[uParam0], 188, 0 )))
                {
                    PRINTSTRING( "grab success" );
                    CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U908[uParam0] );
                    if (sub_38802( l_U908[uParam0], ref l_U764[uParam0] ))
                    {
                        PRINTSTRING( "ouch letting go!" );
                        CREATE_NM_MESSAGE( 1, 0 );
                        SEND_NM_MESSAGE( l_U908[uParam0] );
                        CREATE_NM_MESSAGE( 1, 246 );
                        SEND_NM_MESSAGE( l_U908[uParam0] );
                    }
                }
            }
        }
    }
    return;
}

int sub_38802(unknown uParam0, unknown uParam1)
{
    if ((sub_38813( uParam0 )) < (uParam1^))
    {
        (uParam1^) = sub_38813( uParam0 );
        return 1;
    }
    return 0;
}

void sub_38813(unknown uParam0)
{
    int Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEALTH( uParam0, ref Result );
    }
    else
    {
        Result = 0;
    }
    return Result;
}

void sub_39176()
{
    int I;

    if (l_U660[l_U656] == 0)
    {
        sub_5359();
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U908[I] )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U908[I] )))
                {
                    DELETE_CHAR( ref l_U908[I] );
                }
                else
                {
                    TASK_COMBAT( l_U908[I], l_U628 );
                    SET_CHAR_KEEP_TASK( l_U908[I], 1 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U908[I] );
                }
            }
        }
        l_U660[l_U656] = 1;
    }
    sub_33741();
    sub_26775();
    if ((l_U563[0] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1190.26100000, 1464.05700000, 30.28010000, 2.50000000, 1.50000000, 1.00000000, 0 )))
    {
        SETTIMERA( 0 );
        l_U563[0] = 1;
    }
    if (l_U563[0] == 1)
    {
        if (((GET_PED_CLIMB_STATE( l_U628 )) == 4) || (((GET_PED_CLIMB_STATE( l_U628 )) == 3) || ((GET_PED_CLIMB_STATE( l_U628 )) == 2)))
        {
            if (l_U563[1] == 0)
            {
                CLEAR_HELP();
                SETTIMERA( 0 );
                l_U563[1] = 1;
            }
        }
    }
    if ((l_U563[2] == 0) AND (LOCATE_CHAR_ANY_MEANS_2D( l_U628, 1191.40200000, 1451.54100000, 2.50000000, 1.50000000, 0 )))
    {
        CLEAR_HELP();
        if (((GET_PED_CLIMB_STATE( l_U628 )) == 4) || (((GET_PED_CLIMB_STATE( l_U628 )) == 3) || ((GET_PED_CLIMB_STATE( l_U628 )) == 2)))
        {
            ;
        }
        SETTIMERA( 0 );
        l_U563[2] = 1;
    }
    sub_33741();
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1198.07700000, 1439.93300000, 30.28010000, 5.50000000, 6.75000000, 2.20000000, 0 ))
    {
        sub_39731( ref l_U904, 0 );
        sub_39731( ref l_U905, 0 );
        sub_5359();
        l_U656++;
    }
    return;
}

void sub_39731(unknown uParam0, int iParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (iParam1 == 1)
        {
            if (NOT (IS_CHAR_INJURED( (uParam0^) )))
            {
                SWITCH_PED_TO_RAGDOLL( (uParam0^), 0, 30000, 1, 0, 1, 0 );
            }
            WAIT( 0 );
            if (NOT (IS_CHAR_INJURED( (uParam0^) )))
            {
                if (IS_PED_RAGDOLL( (uParam0^) ))
                {
                    CREATE_NM_MESSAGE( 1, 79 );
                    PRINTSTRING( "Sending natural motion message NM_BALANCE_MSG!" );
                    PRINTNL();
                    SEND_NM_MESSAGE( (uParam0^) );
                    CREATE_NM_MESSAGE( 1, 119 );
                    PRINTSTRING( "Sending natural motion message NM_BALANCE_MSG!" );
                    PRINTNL();
                    SET_NM_MESSAGE_VEC3( 121, -1.00000000, 0.00000000, 0.00000000 );
                    SEND_NM_MESSAGE( (uParam0^) );
                    APPLY_FORCE_TO_PED( (uParam0^), 1, -1.00000000, 1.00000000, 0.00000000, 0.50000000, 0.00000000, 1.00000000, 7, 1, 1, 1 );
                    PRINTSTRING( "Ped given NM stuff" );
                    PRINTNL();
                    CREATE_NM_MESSAGE( 1, 161 );
                    SET_NM_MESSAGE_BOOL( 171, 1 );
                    SET_NM_MESSAGE_VEC3( 165, 1191.78300000, 1453.15300000, 27.64696000 );
                    SET_NM_MESSAGE_VEC3( 166, 1191.73300000, 1459.32800000, 27.64194000 );
                    SET_NM_MESSAGE_BOOL( 175, 1 );
                    SET_NM_MESSAGE_BOOL( 176, 1 );
                    SEND_NM_MESSAGE( (uParam0^) );
                }
            }
        }
    }
    return;
}

void sub_40265()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (l_U660[l_U656] == 0)
    {
        if (DOES_BLIP_EXIST( l_U1014 ))
        {
            CHANGE_BLIP_DISPLAY( l_U1014, 4 );
        }
        if ((NOT (IS_CHAR_DEAD( l_U882 ))) AND (NOT (IS_CHAR_DEAD( l_U883 ))))
        {
            SET_CHAR_VISIBLE( l_U882, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U883, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U882, 1 );
            SET_CHAR_PROOFS( l_U882, 0, 0, 0, 0, 0 );
            SET_CHAR_PROOFS( l_U883, 0, 0, 0, 0, 0 );
            sub_3617( 1, l_U883, "ROMAN", 0 );
            GIVE_WEAPON_TO_CHAR( l_U882, 7, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U882, 7, 1 );
        }
        if (NOT (DOES_CAM_EXIST( l_U621 )))
        {
            CREATE_CAM( 14, ref l_U621 );
        }
        if (NOT (DOES_CAM_EXIST( l_U623 )))
        {
            CREATE_CAM( 14, ref l_U623 );
        }
        if (NOT (DOES_CAM_EXIST( l_U624 )))
        {
            CREATE_CAM( 3, ref l_U624 );
        }
        if (NOT (DOES_CAM_EXIST( l_U626 )))
        {
            CREATE_CAM( 14, ref l_U626 );
        }
        SET_CAM_POS( l_U626, 1201.35000000, 1439.75400000, 30.68862000 );
        SET_CAM_ROT( l_U626, 1.30280500, -0.00000000, -105.04650000 );
        SET_CAM_FOV( l_U626, 45.00000000 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1976502708 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -2088164056 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1180674815 );
        GET_GAME_VIEWPORT_ID( ref uVar2 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar2, "factory_room04" );
        sub_23294( ref l_U626, 1 );
        sub_23351( 1 );
        if (NOT (IS_CHAR_ON_ANY_BIKE( l_U628 )))
        {
            ;
        }
        CLEAR_AREA( 1196.52000000, 1442.92000000, 29.28300000, 5.00000000, 1 );
        SETTIMERA( 0 );
        sub_3617( 1, l_U883, "ROMAN", 0 );
        l_U660[l_U656] = 1;
    }
    if ((NOT (IS_CHAR_DEAD( l_U883 ))) AND (NOT (IS_CHAR_DEAD( l_U882 ))))
    {
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U882, l_U1035._fU0, l_U1035._fU4, l_U1035._fU8, ref l_U801._fU0, ref l_U801._fU4, ref l_U801._fU8 );
        SET_CHAR_COORDINATES_NO_OFFSET( l_U883, l_U801._fU0, l_U801._fU4, l_U801._fU8 );
    }
    if ((l_U563[1] == 0) AND (TIMERA() > 500))
    {
        SET_CAM_FOV( l_U626, 35.00000000 );
        if ((NOT (IS_CHAR_DEAD( l_U883 ))) AND (NOT (IS_CHAR_DEAD( l_U882 ))))
        {
            OPEN_SEQUENCE_TASK( ref uVar4 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker_intro", "missRoman12", 1000.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker", "missRoman12", 1000.00000000, 1, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( uVar4 );
            OPEN_SEQUENCE_TASK( ref uVar3 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_intro", "missRoman12", 1000.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage", "missRoman12", 1000.00000000, 1, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( uVar3 );
            TASK_PERFORM_SEQUENCE( l_U882, uVar4 );
            TASK_PERFORM_SEQUENCE( l_U883, uVar3 );
            SET_CHAR_VISIBLE( l_U883, 1 );
        }
        l_U563[1] = 1;
    }
    if ((l_U563[2] == 0) AND (TIMERA() > 1000))
    {
        SET_CAM_FOV( l_U626, 21.00000000 );
        sub_6945( "R12_BEGLIF", ref l_U638, 8, 1 );
        l_U563[2] = 1;
    }
    if ((l_U563[3] == 0) AND (TIMERA() > 1500))
    {
        SET_CAM_FOV( l_U626, 11.71000000 );
        l_U563[3] = 1;
    }
    if ((l_U563[4] == 0) AND (TIMERA() > 2000))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        l_U563[4] = 1;
    }
    if ((l_U660[l_U656] == 1) AND (TIMERA() > 3500))
    {
        sub_23294( ref l_U626, 0 );
        sub_23351( 0 );
        sub_5359();
        if (NOT (IS_CHAR_DEAD( l_U851[0] )))
        {
            DAMAGE_CHAR( l_U851[0], 100, 1 );
        }
        SAY_AMBIENT_SPEECH( l_U883, "WHIMPER", 1, 1, 0 );
        SET_CAM_FOV( l_U626, 55.00000000 );
        l_U656++;
    }
    return;
}

void sub_41650()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (l_U660[l_U656] == 0)
    {
        if (DOES_OBJECT_EXIST( l_U976 ))
        {
            DELETE_OBJECT( ref l_U976 );
        }
        if ((NOT (IS_CHAR_DEAD( l_U883 ))) AND (NOT (IS_CHAR_DEAD( l_U882 ))))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U882, l_U1035._fU0, l_U1035._fU4, l_U1035._fU8, ref l_U801._fU0, ref l_U801._fU4, ref l_U801._fU8 );
            SET_CHAR_COORDINATES_NO_OFFSET( l_U883, l_U801._fU0, l_U801._fU4, l_U801._fU8 );
        }
        OPEN_SEQUENCE_TASK( ref l_U1012 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker_peek", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker_struggle", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker_fire", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker_peek", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker_struggle", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker_fire", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker_peek", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker_struggle", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker_fire", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker_peek", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker_struggle", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker_fire", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_taker", "missRoman12", 9.00000000, 1, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U1012 );
        OPEN_SEQUENCE_TASK( ref l_U1013 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_peek", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_struggle", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_peek", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_peek", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_struggle", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_peek", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_peek", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_struggle", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_peek", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_peek", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_struggle", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage_peek", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage", "missRoman12", 9.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Hostage", "missRoman12", 9.00000000, 1, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U1013 );
        for ( l_U799 = 0; l_U799 <= 13; l_U799++ )
        {
            if (DOES_CHAR_EXIST( l_U866[l_U799] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U866[l_U799] )))
                {
                    sub_26237( ref l_U866[l_U799] );
                    TASK_PERFORM_SEQUENCE( l_U866[l_U799], l_U1006 );
                }
            }
        }
        if ((NOT (IS_CHAR_DEAD( l_U883 ))) AND (NOT (IS_CHAR_DEAD( l_U882 ))))
        {
            TASK_PERFORM_SEQUENCE( l_U883, l_U1013 );
            TASK_PERFORM_SEQUENCE( l_U882, l_U1012 );
            SET_CHAR_PROOFS( l_U882, 0, 0, 0, 0, 0 );
            SET_CHAR_PROOFS( l_U883, 0, 0, 0, 0, 0 );
            sub_3617( 1, l_U883, "ROMAN", 0 );
        }
        GET_PLAYER_GROUP( l_U629, ref l_U627 );
        fVar2 = 99.99000000;
        SETTIMERA( 6000 );
        GET_GAME_TIMER( ref l_U800 );
        sub_6945( "R12_GUNHED", ref l_U638, 8, 1 );
        l_U660[l_U656] = 1;
    }
    if ((IS_SNIPER_BULLET_IN_AREA( 1199.74100000, 1434.84800000, 29.28510000, 1206.71000000, 1445.95000000, 33.28510000 )) || (IS_BULLET_IN_AREA( 1205.46600000, 1438.48000000, 29.28010000, 3.00000000, 1 )))
    {
        if (l_U677 == 0)
        {
            l_U712++;
            PRINTINT( l_U712 );
            PRINTNL();
            l_U677 = 1;
        }
    }
    else
    {
        l_U677 = 0;
    }
    if (NOT (IS_CHAR_DEAD( l_U882 )))
    {
        if (IS_CHAR_PLAYING_ANIM( l_U882, "missRoman12", "Hostage_taker_fire" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( l_U882, "missRoman12", "Hostage_taker_fire", ref fVar6 );
            if ((fVar6 < 0.43000000) AND (fVar6 >= 0.41000000))
            {
                sub_44062( l_U882 );
            }
            if ((fVar6 < 0.57000000) AND (fVar6 >= 0.55000000))
            {
                sub_44062( l_U882 );
            }
            if ((fVar6 < 0.70000000) AND (fVar6 >= 0.68000000))
            {
                sub_44062( l_U882 );
            }
            if ((NOT (sub_24748( l_U638 ))) AND (l_U698 == 0))
            {
                if (l_U697 == 0)
                {
                    sub_6945( "R12_ABUSE", ref l_U638, 8, 1 );
                    l_U697 = 1;
                }
                else
                {
                    sub_6945( "R12_ABUSE", ref l_U638, 7, 1 );
                    l_U697 = 0;
                }
                l_U698 = 1;
            }
        }
        else
        {
            l_U698 = 0;
        }
        sub_44418( l_U882, l_U628 );
        if ((NOT (IS_CHAR_DEAD( l_U883 ))) AND (NOT (IS_CHAR_DEAD( l_U882 ))))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U882, l_U1035._fU0, l_U1035._fU4, l_U1035._fU8, ref l_U801._fU0, ref l_U801._fU4, ref l_U801._fU8 );
            GET_CHAR_HEADING( l_U882, ref uVar7 );
            SET_CHAR_COORDINATES_NO_OFFSET( l_U883, l_U801._fU0, l_U801._fU4, l_U801._fU8 );
            SET_CHAR_HEADING( l_U883, uVar7 );
        }
    }
    GET_GAME_TIMER( ref l_U769 );
    if (((l_U769 - l_U770) > 5000) AND (NOT (sub_24748( l_U638 ))))
    {
        sub_6945( "R12_BEGLIF", ref l_U638, 6, 1 );
        GET_GAME_TIMER( ref l_U770 );
    }
    if ((l_U805 == 0) AND ((l_U793 == 0) AND ((IS_CHAR_ON_FIRE( l_U883 )) || ((sub_38813( l_U883 )) < 250))))
    {
        if (l_U706 == 0)
        {
            if (IS_CHAR_ON_FIRE( l_U882 ))
            {
                sub_24557( ref l_U638, 0 );
                FREEZE_CHAR_POSITION( l_U882, 0 );
                SWITCH_PED_TO_RAGDOLL( l_U882, 10000, 12000, 1, 0, 0, 1 );
                SET_CHAR_HEALTH( l_U882, 5 );
            }
            PRINTSTRING( "Shuldn't shootAfterFlag!" );
            PRINTNL();
            if (((sub_44978( l_U628 )) == 18) || (((sub_44978( l_U628 )) == 11) || ((sub_44978( l_U628 )) == 10)))
            {
                if (NOT (IS_CHAR_INJURED( l_U882 )))
                {
                    sub_24557( ref l_U638, 0 );
                    SWITCH_PED_TO_RAGDOLL( l_U882, 10000, 12000, 1, 0, 0, 1 );
                    SET_CHAR_HEALTH( l_U882, 5 );
                    SET_CHAR_HEALTH( l_U883, 5 );
                }
            }
            else if ((sub_22574( 0, 10 )) > 5)
            {
                sub_6945( "R12_SHOOT1", ref l_U638, 8, 1 );
            }
            else
            {
                sub_6945( "R12_SHOOT2", ref l_U638, 8, 1 );
            }
            sub_45207();
            l_U706 = 1;
            l_U805 = 1;
        }
    }
    fVar2 = sub_20778( l_U628, l_U883, 1 );
    if ((l_U805 == 0) AND ((l_U793 == 0) AND (fVar2 < 10.00000000)))
    {
        PRINTSTRING( "TooClose!" );
        PRINTNL();
        if (l_U563[0] == 0)
        {
            PRINTSTRING( "TooCloseAfterFlag!" );
            PRINTNL();
            if ((sub_22574( 0, 10 )) > 5)
            {
                sub_6945( "R12_CLOSE1", ref l_U638, 8, 1 );
            }
            else
            {
                sub_6945( "R12_CLOSE2", ref l_U638, 8, 1 );
            }
            l_U563[0] = 1;
        }
        if (fVar2 < 6.00000000)
        {
            if ((sub_22574( 0, 10 )) > 5)
            {
                sub_6945( "R12_KILLR1", ref l_U638, 8, 1 );
            }
            else
            {
                sub_6945( "R12_KILLR2", ref l_U638, 8, 1 );
            }
            sub_45207();
        }
    }
    GET_GAME_TIMER( ref l_U1028 );
    if ((l_U805 == 0) AND ((l_U793 == 0) AND ((l_U1028 - l_U800) > 30000)))
    {
        PRINTSTRING( "TooLong!" );
        PRINTNL();
        if (l_U563[1] == 0)
        {
            PRINTSTRING( "TooAfterFlag!" );
            PRINTNL();
            if ((sub_22574( 0, 10 )) > 5)
            {
                sub_6945( "R12_2LONG1", ref l_U638, 8, 1 );
            }
            else
            {
                sub_6945( "R12_2LONG2", ref l_U638, 8, 1 );
            }
            l_U563[1] = 1;
        }
        if ((l_U1028 - l_U800) > 60000)
        {
            if ((sub_22574( 0, 10 )) > 5)
            {
                sub_6945( "R12_KILLR4", ref l_U638, 8, 1 );
            }
            else
            {
                sub_6945( "R12_KILLR3", ref l_U638, 8, 1 );
            }
            sub_45207();
        }
    }
    if (l_U793 == 0)
    {
        sub_26775();
    }
    if (l_U805)
    {
        sub_46355( 26, "R12_CALL4", "R12AUD", 7500, 0 );
        if (NOT (IS_CHAR_INJURED( l_U882 )))
        {
            TASK_COMBAT( l_U882, l_U628 );
            SET_CHAR_KEEP_TASK( l_U882, 1 );
        }
        WAIT( 2000 );
        if (l_U706 == 0)
        {
            PRINT_NOW( "FS_F_01", 4000, 1 );
        }
        else
        {
            PRINT_NOW( "FS_ROMD", 4000, 1 );
        }
        sub_26843();
    }
    else
    {
        sub_47067();
    }
    if (l_U805 == 0)
    {
        if (l_U794 == 0)
        {
            if ((NOT (IS_CHAR_DEAD( l_U883 ))) AND (NOT (IS_CHAR_DEAD( l_U882 ))))
            {
                TASK_PERFORM_SEQUENCE( l_U883, l_U1013 );
                TASK_PERFORM_SEQUENCE( l_U882, l_U1012 );
            }
            PRINT_HELP_FOREVER( "FS_24" );
            SETTIMERB( 0 );
            l_U794 = 1;
        }
        if ((l_U796 == 0) AND ((TIMERB() > 6000) AND (l_U794 == 1)))
        {
            PRINT_HELP_FOREVER( "ZOOM1" );
            SETTIMERB( 0 );
            l_U796 = 1;
        }
        if ((l_U687 == 0) AND ((l_U796 == 1) AND (TIMERB() > 6000)))
        {
            if (USING_STANDARD_CONTROLS())
            {
                PRINT_HELP_FOREVER( "ACCUR" );
                SETTIMERB( 0 );
                l_U687 = 1;
            }
            else
            {
                CLEAR_HELP();
            }
        }
        if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ACCUR" )) AND ((TIMERB() > 6000) AND (l_U687 == 0)))
        {
            CLEAR_HELP();
        }
        if (((sub_38813( l_U882 )) >= 250) AND ((NOT (IS_CHAR_DEAD( l_U883 ))) AND (NOT (IS_CHAR_DEAD( l_U882 )))))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U882, l_U1035._fU0, l_U1035._fU4, l_U1035._fU8, ref l_U801._fU0, ref l_U801._fU4, ref l_U801._fU8 );
            SET_CHAR_COORDINATES_NO_OFFSET( l_U883, l_U801._fU0, l_U801._fU4, l_U801._fU8 );
        }
        if (((sub_44978( l_U628 )) != 18) AND (((sub_44978( l_U628 )) != 11) AND (((sub_44978( l_U628 )) != 10) AND ((l_U793 == 0) AND ((sub_38813( l_U882 )) < 250)))))
        {
            if ((NOT (IS_CHAR_DEAD( l_U883 ))) AND (NOT (IS_CHAR_DEAD( l_U882 ))))
            {
                sub_24557( ref l_U638, 0 );
                STOP_PED_SPEAKING( l_U882, 1 );
                SET_PED_IS_BLIND_RAGING( l_U628, 0 );
                CLEAR_HELP();
                SET_CAM_POS( l_U626, 1207.02900000, 1442.36900000, 33.40976000 );
                SET_CAM_ROT( l_U626, -36.26632000, -9.93881900, 136.72870000 );
                SET_CAM_FOV( l_U626, 53.09998000 );
                sub_23294( ref l_U626, 1 );
                GET_GAME_VIEWPORT_ID( ref l_U654 );
                WAIT( 0 );
                SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U654, "Factory_Room04" );
                sub_23351( 1 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U628, 1 );
                SETTIMERB( 0 );
                SET_TIME_SCALE( 0.25000000 );
                if ((NOT (IS_CHAR_DEAD( l_U883 ))) AND (NOT (IS_CHAR_DEAD( l_U882 ))))
                {
                    SET_CHAR_HEALTH( l_U882, 200 );
                    SET_CHAR_HEALTH( l_U883, 200 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U882, "Hostage_taker_shot", "missRoman12", 8.00000000, 0, 0, 0, 1, -1 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U883, "Hostage_let_go", "missRoman12", 8.00000000, 0, 0, 0, 1, -1 );
                }
                SET_CHAR_COORDINATES( l_U628, 1193.87500000, 1441.00100000, 29.28010000 );
                if (IS_CHAR_ON_ANY_BIKE( l_U628 ))
                {
                    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar8 );
                    if (DOES_VEHICLE_EXIST( uVar8 ))
                    {
                        if (NOT (IS_CAR_DEAD( uVar8 )))
                        {
                            SET_CAR_COORDINATES( uVar8, 1191.47400000, 1440.59700000, 29.76200000 );
                            SET_CAR_HEADING( uVar8, 134.00000000 );
                        }
                    }
                    TASK_LEAVE_ANY_CAR( l_U628 );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar8 );
                }
                while ((l_U683 == 0) AND (l_U686 < 0.12000000))
                {
                    if (NOT (IS_CHAR_DEAD( l_U883 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U883, "missRoman12", "Hostage_let_go" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U883, "missRoman12", "Hostage_let_go", ref l_U686 );
                        }
                    }
                    if (sub_48351())
                    {
                        if ((NOT IS_SCREEN_FADED_OUT()) || (NOT IS_SCREEN_FADING_OUT()))
                        {
                            DO_SCREEN_FADE_OUT( 500 );
                            while (IS_SCREEN_FADING_OUT())
                            {
                                WAIT( 0 );
                            }
                        }
                        l_U683 = 1;
                    }
                    WAIT( 0 );
                }
                SET_CAM_POS( l_U626, 1207.81100000, 1440.31800000, 29.35907000 );
                SET_CAM_ROT( l_U626, 12.26129000, 0.00000000, 131.00160000 );
                SET_CAM_FOV( l_U626, 36.70002000 );
                while ((l_U683 == 0) AND (l_U686 < 0.82000000))
                {
                    if (l_U686 > 0.40000000)
                    {
                        SET_CAM_POS( l_U626, 1207.12200000, 1438.15100000, 29.43604000 );
                        SET_CAM_ROT( l_U626, 16.04280000, -0.00000000, 66.02818000 );
                        SET_CAM_FOV( l_U626, 45.00000000 );
                        SET_TIME_SCALE( 0.60000000 );
                    }
                    if ((l_U699 == 0) AND (l_U686 > 0.55000000))
                    {
                        SET_CAM_POS( l_U621, 1207.12200000, 1438.15100000, 29.43604000 );
                        SET_CAM_ROT( l_U621, 16.04280000, -0.00000000, 66.02818000 );
                        SET_CAM_FOV( l_U621, 45.00000000 );
                        SET_CAM_NEAR_DOF( l_U621, 0.25000000 );
                        SET_CAM_FAR_DOF( l_U621, 4.50000000 );
                        SET_CAM_POS( l_U623, 1207.12200000, 1438.15100000, 29.43604000 );
                        SET_CAM_ROT( l_U623, 31.16889000, -0.00000000, 66.02818000 );
                        SET_CAM_FOV( l_U623, 45.00000000 );
                        SET_CAM_NEAR_DOF( l_U623, 0.25000000 );
                        SET_CAM_FAR_DOF( l_U623, 4.50000000 );
                        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 4000, 0 );
                        sub_23294( ref l_U626, 0 );
                        sub_23294( ref l_U624, 1 );
                        l_U699 = 1;
                    }
                    if (NOT (IS_CHAR_DEAD( l_U883 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U883, "missRoman12", "Hostage_let_go" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U883, "missRoman12", "Hostage_let_go", ref l_U686 );
                        }
                    }
                    if (sub_48351())
                    {
                        if ((NOT IS_SCREEN_FADED_OUT()) || (NOT IS_SCREEN_FADING_OUT()))
                        {
                            DO_SCREEN_FADE_OUT( 500 );
                            while (IS_SCREEN_FADING_OUT())
                            {
                                WAIT( 0 );
                            }
                        }
                        l_U683 = 1;
                    }
                    WAIT( 0 );
                }
                if (l_U683 == 0)
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (IS_SCREEN_FADING_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                SET_TIME_SCALE( 1.00000000 );
                SETTIMERA( 0 );
                while ((l_U683 == 0) AND (TIMERA() < 1500))
                {
                    if (l_U684 == 0)
                    {
                        if (NOT (IS_CHAR_DEAD( l_U883 )))
                        {
                            SET_CHAR_COORDINATES( l_U883, 1197.22000000, 1439.44000000, 29.28000000 );
                            SET_CHAR_HEADING( l_U883, 280.00000000 );
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U883, l_U1038._fU0, l_U1038._fU4, l_U1038._fU8, ref l_U1041._fU0, ref l_U1041._fU4, ref l_U1041._fU8 );
                            GET_CHAR_HEADING( l_U883, ref uVar9 );
                            if (l_U683 == 0)
                            {
                                DO_SCREEN_FADE_IN( 500 );
                            }
                        }
                        CLEAR_AREA( l_U1041._fU0, l_U1041._fU4, l_U1041._fU8, 10.00000000, 1 );
                        SET_CHAR_COORDINATES_NO_OFFSET( l_U628, l_U1041._fU0, l_U1041._fU4, l_U1041._fU8 );
                        SET_CHAR_HEADING( l_U628, uVar9 );
                        FREEZE_CHAR_POSITION( l_U628, 0 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U628, "hug_niko", "missRoman12", 1000.00000000, 0, 0, 0, 0, -1 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U883, "hug_roman", "missRoman12", 1000.00000000, 0, 0, 0, 0, -1 );
                        sub_3617( 1, l_U883, "ROMAN", 0 );
                        l_U684 = 1;
                    }
                    SET_CAM_POS( l_U626, 1195.60600000, 1438.78400000, 30.36619000 );
                    SET_CAM_ROT( l_U626, 8.77905700, 0.00000000, -52.46658000 );
                    SET_CAM_FOV( l_U626, 40.30002000 );
                    SET_CAM_NEAR_DOF( l_U626, 0.50000000 );
                    SET_CAM_FAR_DOF( l_U626, 4.00000000 );
                    sub_23294( ref l_U624, 0 );
                    sub_23294( ref l_U626, 1 );
                    if ((l_U683 == 0) AND (sub_48351()))
                    {
                        if ((NOT IS_SCREEN_FADED_OUT()) || (NOT IS_SCREEN_FADING_OUT()))
                        {
                            DO_SCREEN_FADE_OUT( 500 );
                            while (IS_SCREEN_FADING_OUT())
                            {
                                WAIT( 0 );
                            }
                        }
                        l_U683 = 1;
                    }
                    WAIT( 0 );
                }
                if (IS_CHAR_PLAYING_ANIM( l_U628, "missRoman12", "hug_niko" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U628, "missRoman12", "hug_niko", ref l_U685 );
                }
                while ((l_U683 == 0) AND (l_U685 < 0.98000000))
                {
                    if (sub_48351())
                    {
                        if ((NOT IS_SCREEN_FADED_OUT()) || (NOT IS_SCREEN_FADING_OUT()))
                        {
                            DO_SCREEN_FADE_OUT( 500 );
                            while (IS_SCREEN_FADING_OUT())
                            {
                                WAIT( 0 );
                            }
                        }
                        l_U683 = 1;
                    }
                    if ((l_U692 == 0) AND (l_U685 > 0.32000000))
                    {
                        sub_6945( "R12_SAVED", ref l_U638, 8, 1 );
                        l_U692 = 1;
                    }
                    if (IS_CHAR_PLAYING_ANIM( l_U628, "missRoman12", "hug_niko" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U628, "missRoman12", "hug_niko", ref l_U685 );
                    }
                    if ((sub_24732( l_U638 )) == 0)
                    {
                        SET_CAM_POS( l_U626, 1196.98300000, 1438.72600000, 30.84416000 );
                        SET_CAM_ROT( l_U626, -3.83516800, -0.00000000, -25.17015000 );
                        SET_CAM_FOV( l_U626, 41.30002000 );
                        SET_CAM_NEAR_DOF( l_U626, 1.00000000 );
                        SET_CAM_FAR_DOF( l_U626, 5.00000000 );
                    }
                    if ((sub_24732( l_U638 )) == 1)
                    {
                        SET_CAM_POS( l_U626, 1197.81000000, 1438.76400000, 30.82007000 );
                        SET_CAM_ROT( l_U626, -3.83516800, 0.00000000, 42.04577000 );
                        SET_CAM_FOV( l_U626, 43.30002000 );
                        SET_CAM_POS( l_U626, 1197.69300000, 1438.65800000, 30.81494000 );
                        SET_CAM_ROT( l_U626, -3.03302700, -0.00000000, 26.69053000 );
                        SET_CAM_FOV( l_U626, 44.00000000 );
                        SET_CAM_NEAR_DOF( l_U626, 1.00000000 );
                        SET_CAM_FAR_DOF( l_U626, 5.00000000 );
                    }
                    WAIT( 0 );
                }
                sub_24557( ref l_U638, 0 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U628 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U628, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U628, 0, 1 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                if (NOT (IS_CHAR_DEAD( l_U883 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U883 );
                }
                CLEAR_HELP();
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                REMOVE_BLIP( l_U1014 );
                if (NOT (IS_CHAR_DEAD( l_U883 )))
                {
                    FREEZE_CHAR_POSITION( l_U883, 0 );
                }
            }
            l_U793 = 1;
        }
        if (((sub_38813( l_U883 )) == 250) AND ((l_U805 == 0) AND ((l_U793 == 0) AND (l_U712 != l_U713))))
        {
            l_U713 = l_U712;
            PRINTSTRING( "shouldn't shoot!!" );
            PRINTNL();
            if (l_U563[0] == 0)
            {
                PRINTSTRING( "Shuldn't shootAfterFlag!" );
                PRINTNL();
                sub_6945( "R12_MISS1", ref l_U638, 8, 1 );
                l_U563[0] = 1;
            }
            l_U775 = sub_50900( l_U883, l_U1013 );
            l_U776 = sub_50900( l_U882, l_U1012 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U883, "Hostage_duck", "missRoman12", 8.00000000, 0, 0, 0, 1, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U882, "Hostage_taker_duck", "missRoman12", 8.00000000, 0, 0, 0, 1, -1 );
            l_U705 = 1;
            GET_GAME_TIMER( ref l_U652 );
            if (l_U712 > 2)
            {
                sub_6945( "R12_MISS2", ref l_U638, 8, 1 );
                sub_45207();
            }
        }
        GET_GAME_TIMER( ref l_U651 );
        if ((NOT (IS_CHAR_DEAD( l_U882 ))) AND (NOT (IS_CHAR_DEAD( l_U883 ))))
        {
            if (l_U705 == 1)
            {
                if ((sub_51244( l_U883, "missRoman12", "Hostage_duck" )) >= 1.00000000)
                {
                    TASK_PERFORM_SEQUENCE_FROM_PROGRESS( l_U883, l_U1013, l_U775, 0 );
                    TASK_PERFORM_SEQUENCE_FROM_PROGRESS( l_U882, l_U1012, l_U776, 0 );
                    l_U705 = 0;
                }
            }
        }
    }
    if ((l_U563[2] == 0) AND ((TIMERB() > 1750) AND (l_U793 == 1)))
    {
        SET_TIME_SCALE( 1.00000000 );
        SET_PLAYER_CONTROL( l_U629, 1 );
        sub_23294( ref l_U626, 0 );
        sub_23351( 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (l_U683 == 1)
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U563[2] = 1;
    }
    if (DOES_CHAR_EXIST( l_U883 ))
    {
        if ((TIMERB() > 2000) AND ((l_U793 == 1) AND (NOT (IS_GROUP_MEMBER( l_U883, l_U627 )))))
        {
            if (NOT (IS_CHAR_DEAD( l_U882 )))
            {
                SET_CHAR_COLLISION( l_U882, 0 );
                FREEZE_CHAR_POSITION( l_U882, 1 );
            }
            if ((l_U774 == 0) AND (NOT (IS_CHAR_DEAD( l_U883 ))))
            {
                SET_CHAR_COLLISION( l_U883, 1 );
                sub_3617( 1, l_U883, "ROMAN", 0 );
                OPEN_SEQUENCE_TASK( ref uVar10 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1190.54400000, 1444.72000000, 29.28010000, 3, 30000, 0.50000000 );
                TASK_ACHIEVE_HEADING( 0, 357.79520000 );
                TASK_PLAY_ANIM( 0, "indicate_listener", "missRoman12", 8.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( uVar10 );
                if (NOT (IS_CHAR_DEAD( l_U883 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U883, 0 );
                    TASK_PERFORM_SEQUENCE( l_U883, uVar10 );
                }
                l_U656++;
                l_U774 = 1;
            }
        }
        else
        {
            GET_CHAR_COORDINATES( l_U628, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            if (NOT (IS_CHAR_DEAD( l_U883 )))
            {
                GET_CHAR_COORDINATES( l_U883, ref l_U801._fU0, ref l_U801._fU4, ref l_U801._fU8 );
            }
            fVar2 = VDIST( l_U801, uVar3 );
            if (NOT (IS_CHAR_DEAD( l_U882 )))
            {
                GET_CHAR_HEALTH( l_U882, ref l_U797 );
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1188.97000000, 1451.26700000, 30.25580000, 1.00000000, 1.00000000, 1.00000000, 1 ))
        {
            REMOVE_BLIP( l_U1017 );
            CLEAR_PRINTS();
        }
    }
    return;
}

void sub_44062(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( l_U628, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        uVar3._fU0 += sub_44121( 0.00000000, 0.25000000 );
        uVar3._fU4 += sub_44121( 0.00000000, 0.25000000 );
        uVar3._fU8 += sub_44121( 0.00000000, 0.25000000 );
        FIRE_PED_WEAPON( uParam0, uVar3 );
    }
    return;
}

void sub_44121(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_44418(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    GET_HEADING_FROM_VECTOR_2D( uVar10._fU0, uVar10._fU4, ref uVar13 );
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_PED_RAGDOLL( uParam0 )))
        {
            SET_CHAR_HEADING( uParam0, uVar13 );
        }
    }
    return;
}

void sub_44978(unknown uParam0)
{
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CURRENT_CHAR_WEAPON( uParam0, ref Result );
    }
    return Result;
}

void sub_45207()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    PRINTSTRING( "Roman get shot sequence" );
    PRINTNL();
    if (NOT (IS_CHAR_DEAD( l_U883 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U883 );
        FREEZE_CHAR_POSITION( l_U883, 0 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U883, 1 );
        SET_CHAR_PROOFS( l_U883, 0, 0, 0, 0, 0 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U882 ))) AND (NOT (IS_CHAR_INJURED( l_U883 ))))
    {
        TASK_PLAY_ANIM( l_U882, "execute_perp", "missroman12", 1000.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM( l_U883, "execute_rom", "missroman12", 1000.00000000, 0, 0, 0, 0, -1 );
        GET_PED_BONE_POSITION( l_U883, 1205, l_U481, ref uVar2 );
        FIRE_PED_WEAPON( l_U882, uVar2 );
    }
    WAIT( 1500 );
    if (NOT (IS_CHAR_INJURED( l_U883 )))
    {
        SWITCH_PED_TO_RAGDOLL( l_U883, 0, 20000, 1, 0, 0, 1 );
        CREATE_NM_MESSAGE( 1, 8 );
        SEND_NM_MESSAGE( l_U883 );
        DAMAGE_CHAR( l_U883, 2000, 1 );
    }
    if (NOT (IS_CHAR_DEAD( l_U882 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U882 );
        FREEZE_CHAR_POSITION( l_U882, 0 );
        SET_CHAR_NEVER_TARGETTED( l_U882, 0 );
        if (NOT (IS_CHAR_INJURED( l_U882 )))
        {
            TASK_SHOOT_AT_CHAR( l_U882, l_U628, -1, 5 );
        }
    }
    REMOVE_BLIP( l_U1014 );
    CLEAR_HELP();
    l_U805 = 1;
    return;
}

void sub_46355(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    sub_46398( uParam0, ref cVar7, uParam2, uParam3, uParam4, 0 );
    return;
}

void sub_46398(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_47067()
{
    if (DOES_CHAR_EXIST( l_U883 ))
    {
        if ((IS_CHAR_DEAD( l_U628 )) || (IS_CHAR_DEAD( l_U883 )))
        {
            l_U658 = 1;
            l_U656 = -1;
        }
    }
    return;
}

int sub_48351()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_50900(unknown uParam0, unknown uParam1)
{
    int iVar4;
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar4 );
    }
    if (iVar4 == 1)
    {
        GET_SEQUENCE_PROGRESS( uParam0, ref Result );
    }
    return Result;
}

float sub_51244(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_PLAYING_ANIM( uParam0, uParam1, uParam2 ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( uParam0, uParam1, uParam2, ref Result );
            return Result;
        }
        else
        {
            return -1.00000000;
        }
        break;
    }
    return -1.00000000;
}

void sub_52066()
{
    unknown uVar2;

    if (l_U660[l_U656] == 0)
    {
        CLEAR_AREA( 1176.58500000, 1424.72700000, 16.57290000, 25.00000000, 1 );
        REQUEST_MODEL( 1075851868 );
        while (NOT (HAS_MODEL_LOADED( 1075851868 )))
        {
            WAIT( 0 );
        }
        CREATE_CAR( 1075851868, 1174.32600000, 1424.72500000, 15.48170000, ref l_U973, 1 );
        SET_CAR_HEADING( l_U973, 271.00130000 );
        SET_CAR_PROOFS( l_U973, 1, 1, 1, 1, 1 );
        SUPPRESS_CAR_MODEL( 1075851868 );
        if (NOT (IS_CHAR_DEAD( l_U883 )))
        {
            OPEN_SEQUENCE_TASK( ref uVar2 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1191.75800000, 1451.47200000, 30.22480000, 2, 10000, 0.50000000 );
            TASK_ACHIEVE_HEADING( 0, 92.00000000 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( l_U883, uVar2 );
            PRINT_NOW( "FOLROM", 7500, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U883, 1 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U1014 )))
        {
            ADD_BLIP_FOR_CHAR( l_U883, ref l_U1014 );
            SET_BLIP_AS_FRIENDLY( l_U1014, 1 );
        }
        CHANGE_BLIP_DISPLAY( l_U1014, 4 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1180674815 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1976502708 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -2088164056 );
        if (NOT (IS_CHAR_DEAD( l_U883 )))
        {
            REMOVE_CHAR_FROM_GROUP( l_U883 );
        }
        ALLOW_EMERGENCY_SERVICES( 1 );
        sub_52520( 1221.54700000, 1441.50900000, 16.73560000, 1 );
        SETTIMERA( 0 );
        sub_5359();
        l_U660[l_U656] = 1;
    }
    if ((l_U563[3] == 0) AND ((l_U689 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1191.75800000, 1451.47200000, 30.22480000, 2.00000000, 2.00000000, 2.00000000, 0 ))))
    {
        if ((NOT (IS_CAR_DEAD( l_U973 ))) AND (NOT (IS_CHAR_DEAD( l_U883 ))))
        {
            TASK_LOOK_AT_CHAR( l_U883, l_U628, 60000, 0 );
            TASK_ENTER_CAR_AS_PASSENGER( l_U883, l_U973, 45000, 0 );
            l_U689 = 1;
        }
    }
    if ((l_U563[0] == 0) AND (TIMERA() > 7500))
    {
        sub_6945( "R12_GETCAR", ref l_U638, 8, 1 );
        l_U563[0] = 1;
    }
    if (DOES_CHAR_EXIST( l_U883 ))
    {
        if (IS_CHAR_DEAD( l_U883 ))
        {
            PRINT_NOW( "FS_ROMD", 7500, 1 );
            REMOVE_BLIP( l_U1014 );
            WAIT( 7500 );
            sub_52940( 0, l_U883, 0 );
            l_U656 = -1;
            l_U659 = 0;
            l_U658 = 1;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U883 )))
    {
        if ((l_U563[3] == 0) AND ((NOT (IS_GROUP_MEMBER( l_U883, l_U627 ))) AND (IS_CHAR_IN_ANY_CAR( l_U628 ))))
        {
            CLEAR_CHAR_TASKS( l_U883 );
            GET_PLAYER_GROUP( l_U629, ref l_U627 );
            SET_GROUP_MEMBER( l_U627, l_U883 );
            PRINTSTRING( "Added roman to group" );
            l_U563[3] = 1;
        }
    }
    if (l_U563[3] == 1)
    {
        if (NOT (IS_CHAR_DEAD( l_U883 )))
        {
            if ((sub_20778( l_U883, l_U628, 1 )) > 30.00000000)
            {
                PRINT_NOW( "FS_36", 1, 0 );
                CHANGE_BLIP_DISPLAY( l_U1014, 4 );
                if ((sub_20778( l_U883, l_U628, 1 )) > (30.00000000 * 2))
                {
                    PRINT_NOW( "BYEROM", 7500, 0 );
                    sub_26843();
                }
            }
            else if ((sub_20778( l_U883, l_U628, 1 )) < 12.00000000)
            {
                if (NOT (IS_GROUP_MEMBER( l_U883, l_U627 )))
                {
                    SET_GROUP_MEMBER( l_U627, l_U883 );
                    CHANGE_BLIP_DISPLAY( l_U1014, 0 );
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( l_U883 ))
    {
        if (NOT (IS_CAR_DEAD( l_U973 )))
        {
            SET_CAR_PROOFS( l_U973, 0, 0, 0, 0, 0 );
        }
    }
    if ((NOT (IS_CHAR_DEAD( l_U883 ))) AND (NOT (IS_CAR_DEAD( l_U973 ))))
    {
        if ((sub_53516( l_U883, l_U628 )) || ((IS_CHAR_IN_CAR( l_U883, l_U973 )) AND (IS_CHAR_IN_CAR( l_U628, l_U973 ))))
        {
            if (DOES_BLIP_EXIST( l_U1014 ))
            {
                REMOVE_BLIP( l_U1014 );
            }
            l_U656++;
        }
    }
    return;
}

void sub_52520(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    unknown uVar6;

    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref uVar6 );
    REQUEST_MODEL( uVar6 );
    if (bParam3)
    {
        if (CREATE_EMERGENCY_SERVICES_CAR_THEN_WALK( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
        {
            ;
        }
    }
    else if (CREATE_EMERGENCY_SERVICES_CAR( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
    {
        ;
    }
    return;
}

void sub_52940(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

int sub_53516(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if ((NOT (IS_CHAR_DEAD( uParam1 ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
        }
        else
        {
            return 0;
        }
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))
        {
            GET_CAR_CHAR_IS_USING( uParam1, ref iVar5 );
        }
        else
        {
            return 0;
        }
        if (iVar4 == iVar5)
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

void sub_53714()
{
    if (l_U660[l_U656] == 0)
    {
        sub_5359();
        sub_2579( ref l_U806 );
        sub_2579( ref l_U821 );
        sub_2579( ref l_U836 );
        sub_2579( ref l_U851 );
        sub_2579( ref l_U866 );
        DELETE_OBJECT( ref l_U906 );
        REMOVE_BLIP( l_U1017 );
        ADD_BLIP_FOR_COORD( 589.73650000, 1385.77400000, 10.65320000, ref l_U1016 );
        sub_5303( ref l_U1016, 580.74870000, 1387.61500000, 10.55250000, 179.25740000 );
        SET_ROUTE( l_U1016, 1 );
        STOP_SOUND( l_U1031[0] );
        STOP_SOUND( l_U1031[1] );
        STOP_SOUND( l_U1031[2] );
        if (NOT (IS_CHAR_DEAD( l_U883 )))
        {
            if (NOT (IS_GROUP_MEMBER( l_U883, l_U627 )))
            {
                SET_GROUP_MEMBER( l_U627, l_U883 );
            }
            UNLOCK_RAGDOLL( l_U883, 1 );
        }
        ADD_BLIP_FOR_CHAR( l_U883, ref l_U1014 );
        SET_BLIP_AS_FRIENDLY( l_U1014, 1 );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_R12" );
        l_U660[l_U656] = 1;
    }
    if ((l_U563[2] == 1) AND ((l_U563[0] == 0) AND (TIMERA() > 7500)))
    {
        PRINTSTRING( "Should have started speech" );
        PRINTNL();
        switch (g_U64964)
        {
            case 0:
            sub_6945( "R12_BANTER", ref l_U638, 8, 1 );
            g_U64964++;
            break;
            case 1:
            sub_6945( "R12_B1V2", ref l_U638, 8, 1 );
            g_U64964++;
            break;
            case 2:
            SAY_AMBIENT_SPEECH( l_U883, "Listen_to_radio", 0, 0, 0 );
            break;
        }
        l_U563[0] = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U883 )))
    {
        if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U628 ))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U883 ))))
        {
            if ((sub_20778( l_U883, l_U628, 1 )) > 30.00000000)
            {
                PRINT_NOW( "FS_36", 1, 0 );
                CHANGE_BLIP_DISPLAY( l_U1014, 4 );
                CHANGE_BLIP_DISPLAY( l_U1016, 0 );
            }
            else if ((sub_20778( l_U883, l_U628, 1 )) < 12.00000000)
            {
                if (NOT (IS_GROUP_MEMBER( l_U883, l_U627 )))
                {
                    SET_GROUP_MEMBER( l_U627, l_U883 );
                    CHANGE_BLIP_DISPLAY( l_U1014, 0 );
                    CHANGE_BLIP_DISPLAY( l_U1016, 4 );
                }
            }
            sub_54573( ref l_U638 );
        }
        else if ((sub_20778( l_U883, l_U628, 1 )) > 30.00000000)
        {
            PRINT_NOW( "FS_36", 1, 0 );
            CHANGE_BLIP_DISPLAY( l_U1014, 4 );
            CHANGE_BLIP_DISPLAY( l_U1016, 0 );
        }
        else if ((sub_20778( l_U883, l_U628, 1 )) < 12.00000000)
        {
            if (NOT (IS_GROUP_MEMBER( l_U883, l_U627 )))
            {
                SET_GROUP_MEMBER( l_U627, l_U883 );
                CHANGE_BLIP_DISPLAY( l_U1014, 0 );
                CHANGE_BLIP_DISPLAY( l_U1016, 4 );
            }
        }
        if (sub_53516( l_U628, l_U883 ))
        {
            CHANGE_BLIP_DISPLAY( l_U1014, 0 );
            CHANGE_BLIP_DISPLAY( l_U1016, 4 );
            switch (g_U64964)
            {
                case 1:
                sub_55271( "R12_BANTER", ref l_U638, 8, 1 );
                break;
                case 2:
                sub_55271( "R12_B1V2", ref l_U638, 8, 1 );
                break;
            }
        }
        if (l_U563[2] == 0)
        {
            PRINT_NOW( "FS_21", 7500, 1 );
            SETTIMERA( 0 );
            l_U563[2] = 1;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U883 )))
    {
        if ((NOT (IS_GROUP_MEMBER( l_U883, l_U627 ))) AND (IS_CHAR_IN_ANY_CAR( l_U628 )))
        {
            CLEAR_CHAR_TASKS( l_U883 );
            GET_PLAYER_GROUP( l_U629, ref l_U627 );
            SET_GROUP_MEMBER( l_U627, l_U883 );
            PRINTSTRING( "Added roman to group" );
        }
    }
    if (l_U773 == 0)
    {
        if (NOT (IS_CHAR_DEAD( l_U883 )))
        {
            if ((IS_GROUP_MEMBER( l_U883, l_U627 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 589.73650000, 1385.77400000, 11.65320000, 2.50000000, 2.50000000, 2.50000000, 1 )))
            {
                SET_PLAYER_CONTROL( l_U629, 0 );
                REMOVE_BLIP( l_U1016 );
                DO_SCREEN_FADE_OUT( 1000 );
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
                sub_3236( "ROMAN12", 0 );
                LOAD_ADDITIONAL_TEXT( "R12AUD", 6 );
                CLEAR_AREA_OF_CARS( 594.61820000, 1392.93000000, 9.97299900, 2.60000000 );
                CLEAR_AREA_OF_CARS( 594.58640000, 1399.28800000, 9.95409900, 2.60000000 );
                CLEAR_AREA_OF_CARS( 594.63070000, 1404.31300000, 9.96660000, 2.60000000 );
                CLEAR_AREA_OF_CHARS( 594.76000000, 1398.55000000, 11.35000000, 25.00000000 );
                SWITCH_PED_PATHS_OFF( 590.00000000, 1391.00000000, 7.50000000, 597.00000000, 1405.00000000, 13.00000000 );
                SET_PED_NON_CREATION_AREA( 590.00000000, 1391.00000000, 7.50000000, 597.00000000, 1405.00000000, 13.00000000 );
                SET_PLAYER_CONTROL( l_U629, 0 );
                if (IS_CHAR_IN_ANY_CAR( l_U628 ))
                {
                    TASK_LEAVE_ANY_CAR( l_U628 );
                }
                if (NOT (IS_CHAR_DEAD( l_U883 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U883 ))
                    {
                        TASK_LEAVE_ANY_CAR( l_U883 );
                    }
                }
                while (IS_CHAR_IN_ANY_CAR( l_U628 ))
                {
                    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U693 );
                    WAIT( 0 );
                }
                if (DOES_VEHICLE_EXIST( l_U693 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U693 )))
                    {
                        SET_CAR_AS_MISSION_CAR( l_U693 );
                        SET_CAR_COORDINATES( l_U693, 589.73650000, 1385.77400000, 10.65320000 );
                        SET_CAR_HEADING( l_U693, 359.63670000 );
                        SET_CAR_IN_CUTSCENE( l_U693, 1 );
                    }
                }
                START_CUTSCENE_NOW( "RP12" );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    WAIT( 0 );
                }
                SET_CHAR_COORDINATES( l_U628, 593.89960000, 1395.78100000, 9.94520000 );
                SET_CHAR_HEADING( l_U628, 356.33270000 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                DELETE_CHAR( ref l_U883 );
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                }
                CLEAR_NAMED_CUTSCENE( "RP12" );
                DO_SCREEN_FADE_IN( 1000 );
                l_U656 = -1;
                l_U659 = 0;
                l_U657 = 1;
                SETTIMERA( 0 );
                l_U773 = 1;
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U883 ))
    {
        if (((IS_CHAR_INJURED( l_U883 )) AND (IS_CHAR_IN_WATER( l_U883 ))) || (IS_CHAR_DEAD( l_U883 )))
        {
            PRINT_NOW( "FS_ROMD", 7500, 1 );
            WAIT( 7500 );
            sub_52940( 0, l_U883, 0 );
            l_U656 = -1;
            l_U659 = 0;
            l_U658 = 1;
        }
    }
    return;
}

int sub_54573(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_7119( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_7119( "\n CONVERSATION PAUSED AT LINE " );
            sub_54729( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_7119( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_7119( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_7119( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_54729(unknown uParam0)
{
    return;
}

void sub_55271(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_55292( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

int sub_55292(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_7020( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_56548()
{
    CLEAR_HELP();
    CLEAR_WANTED_LEVEL( l_U629 );
    l_U659 = 0;
    TRIGGER_MISSION_COMPLETE_AUDIO( 66 );
    sub_56592();
    sub_2566();
    return;
}

void sub_56592()
{
    sub_56601();
    return;
}

void sub_56601()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_56619();
    sub_56678( iVar2, iVar3, iVar4 );
    return;
}

void sub_56619()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_56678(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_56709( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_56709(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_56805( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_56805( ref cVar9 );
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
            sub_56805( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_56805( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_56805( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_56805( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_57382( iParam0, iVar7 );;;
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
                sub_57779( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_57779( 0, 4 );
            }
        }
    }
    if (NOT (sub_57868( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3554(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3554() );
    }
    sub_1664();
    bVar27 = true;
    uVar28 = sub_57382( iParam0, iVar7 );
    uVar29 = sub_1121( iParam0 );
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
                sub_67244( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_67674();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_67759( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_67816( iParam0 );
                sub_67855( 0 );
                sub_1562( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_67963();
        }
    }
    if (bParam2)
    {
        sub_67674();
        sub_68051();
        sub_67855( 0 );
    }
    if (bParam3)
    {
        sub_67674();
        sub_68091();
        sub_67855( 0 );
        sub_1562( uVar29, 0 );
    }
    sub_1008();
    return;
}

void sub_56805(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_57382(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1520( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_57779(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_57868(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_58076( uParam1 );
        break;
        case 1:
        bVar8 = sub_60154( uParam1 );
        break;
        case 2:
        bVar8 = sub_60380( uParam1 );
        break;
        case 3:
        bVar8 = sub_60530( uParam1 );
        break;
        case 4:
        bVar8 = sub_60808( uParam1 );
        break;
        case 5:
        bVar8 = sub_61111( uParam1 );
        break;
        case 6:
        bVar8 = sub_61310( uParam1 );
        break;
        case 7:
        bVar8 = sub_61536( uParam1 );
        break;
        case 8:
        bVar8 = sub_61771( uParam1 );
        break;
        case 9:
        bVar8 = sub_62146( uParam1 );
        break;
        case 10:
        bVar8 = sub_62393( uParam1 );
        break;
        case 11:
        bVar8 = sub_62532( uParam1 );
        break;
        case 12:
        bVar8 = sub_62831( uParam1 );
        break;
        case 13:
        bVar8 = sub_63059( uParam1 );
        break;
        case 14:
        bVar8 = sub_63346( uParam1 );
        break;
        case 15:
        bVar8 = sub_63628( uParam1 );
        break;
        case 16:
        bVar8 = sub_63910( uParam1 );
        break;
        case 17:
        bVar8 = sub_64111( uParam1 );
        break;
        case 18:
        bVar8 = sub_64184( uParam1 );
        break;
        case 19:
        bVar8 = sub_64398( uParam1 );
        break;
        case 20:
        bVar8 = sub_64651( uParam1 );
        break;
        case 21:
        bVar8 = sub_64898( uParam1 );
        break;
        case 22:
        bVar8 = sub_65099( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_59759( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_57382( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_65422( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_58076(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_58355( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_58355( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_58355( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_58355( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_58355( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_58355( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_58355( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_58355( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_58355( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_58355( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_58355( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_58355( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_58355( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_58355( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_58355( iVar3, 0, 3, 1, 0, 0 );
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
        sub_58355( iVar3, 0, sub_59637(), sub_59903(), 0, 0 );
        break;
        default:
        sub_60062( "Friend 1", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Friend 1", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_58355(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_58366( uParam1 );
    sub_58540( uParam0, 0, uParam2 );
    sub_58540( uParam0, 1, uParam3 );
    sub_58540( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_56619();
    return;
}

void sub_58366(unknown uParam0)
{
    ADD_SCORE( sub_3554(), uParam0 );
    sub_58391( uParam0 );
    return;
}

void sub_58391(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1520( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_58540(unknown uParam0, int iParam1, int iParam2)
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
        sub_58697( uParam0 );
    }
    return;
}

void sub_58697(unknown uParam0)
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

int sub_59637()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_59759( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_59759(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_59903()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_59759( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_60062(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_60154(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_58355( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_58355( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_60062( "Contact 2", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Contact 2", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60380(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_58355( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_60062( "Girl 3", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Girl 3", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60530(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_58355( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_58355( iVar3, 0, sub_59637(), sub_59903(), 0, 0 );
        break;
        default:
        sub_60062( "Friend 4", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Friend 4", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60808(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_58355( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_58355( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_58355( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_58355( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_58355( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_60062( "Contact 5", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Contact 5", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61111(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_58355( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_60062( "Contact 7", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Contact 7", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61310(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_58355( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_58355( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_60062( "Contact 7b", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Contact 7b", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61536(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_58355( iVar3, 0, sub_59637(), sub_59903(), 0, 0 );
        break;
        default:
        sub_60062( "Friend 8", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Friend 8", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61771(unknown uParam0)
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
        sub_58355( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_58355( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_58355( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_58355( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_58355( iVar3, 0, sub_59637(), sub_59903(), 0, 0 );
        break;
        default:
        sub_60062( "Friend 9", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Friend 9", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62146(unknown uParam0)
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
        sub_58355( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_58355( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_58355( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_60062( "Contact 10", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_60062( "Contact 10", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62393(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_60062( "Girl 11", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Girl 11", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62532(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_58355( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_58355( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_58355( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_58355( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_58355( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_60062( "Contact 12", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Contact 12", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62831(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_58355( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_58355( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_60062( "Contact 13", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Contact 13", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63059(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_58355( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_58355( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_58355( iVar3, 0, sub_59637(), sub_59903(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_60062( "Friend 15", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Friend 15", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63346(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_58355( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_58355( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_58355( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_58355( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_60062( "Contact 16", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Contact 16", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63628(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_58355( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_58355( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_58355( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_60062( "Contact 18", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Contact 18", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63910(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_58355( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_60062( "Contact 19", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Contact 19", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64111(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_60062( "Girl 20", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64184(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_58355( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_60062( "Contact 21", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Contact 21", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64398(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_58355( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_58355( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_58355( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_60062( "Contact 22", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Contact 22", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64651(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_58355( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_58355( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_58355( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_58355( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_60062( "Contact 24", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Contact 24", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64898(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_58355( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_58355( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_58355( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_60062( "Contact 25", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_60062( "Contact 25", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_65099(unknown uParam0)
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
        sub_58355( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_60062( "Girl 26", 1 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_60062( "Girl 26", 0 );
        sub_58355( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_65422(int iParam0, int iParam1)
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
    if (sub_65470( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_66201( iParam1 );
    }
    return;
}

int sub_65470(int iParam0, int iParam1)
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
            sub_65610( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_65610(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_65792( 0 );
    return;
}

void sub_65792(boolean bParam0)
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
        sub_66047();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_66047()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_66201(int iParam0)
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
        sub_66534( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_66534( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_66534( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_66534( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_66534( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_66534( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_66534( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_66534( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_66534( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_66534( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_66534( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_66534( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_66534( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_66534( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_66534( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_66534( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_66534( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_66534( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_66534( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_66534(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_67244(unknown uParam0, unknown uParam1)
{
    sub_67263( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_67263(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_67674()
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

int sub_67759(int iParam0, int iParam1)
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

void sub_67816(unknown uParam0)
{
    sub_907();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_67855(unknown uParam0)
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

void sub_67963()
{
    sub_67972();
    return;
}

void sub_67972()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_68051()
{
    sub_67972();
    return;
}

void sub_68091()
{
    sub_67972();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

