void main()
{
    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U481 = 0;
    l_U482 = 0;
    l_U483 = 0;
    l_U484 = 0;
    l_U511 = 25000;
    l_U517 = 1;
    l_U518 = 0.00000000;
    l_U524 = {0.00000000, 1.13800000, -1.00000000};
    l_U527 = {0.00000000, 0.00000000, 0.00000000};
    l_U530 = {0.00000000, 0.00000000, 0.00000000};
    l_U538 = 0;
    l_U539 = 0;
    l_U540 = 0;
    l_U541 = 0;
    l_U542 = 0;
    l_U543 = 0;
    l_U544 = 0;
    l_U545 = 0;
    l_U546 = 1;
    l_U547 = 0;
    l_U548 = 1;
    l_U549 = 0;
    l_U550 = 0;
    l_U551 = 0;
    l_U552 = 0;
    l_U553 = 0;
    l_U554 = 0;
    l_U555 = 0;
    l_U556 = 0;
    l_U557 = 0;
    l_U558 = 0;
    l_U559 = 0;
    l_U560 = 0;
    l_U561 = 0;
    l_U562 = 0;
    l_U563 = 0;
    l_U564 = 0;
    l_U565 = 0;
    l_U566 = 0;
    l_U567 = 0;
    l_U568 = 0;
    l_U569 = 0;
    l_U570 = 0;
    l_U571 = 7;
    l_U572 = 9;
    l_U573 = -301223260;
    l_U588 = 0;
    l_U598 = 0;
    l_U599 = 0;
    l_U600 = 0;
    l_U601 = 0;
    l_U617 = 0;
    l_U637 = 1574850459;
    l_U638 = -1702036227;
    l_U670 = 0;
    sub_478( "PLAYBY4", 0 );
    sub_478( "PXDFAUD", 6 );
    sub_637();
    SET_MISSION_FLAG( 1 );
    sub_4018();
    l_U512 = 0;
    l_U565 = 1;
    WAIT( 6000 );
    while (l_U565)
    {
        if (l_U538 == 0)
        {
            sub_4718();
        }
        else if (l_U538 == 1)
        {
            if (l_U539 == 1)
            {
                switch (l_U512)
                {
                    case 0:
                    sub_5689();
                    break;
                    case 1:
                    sub_12152();
                    break;
                    case 2:
                    sub_24336();
                    break;
                    case -1: break;
                }
            }
            else if (l_U539 == 0)
            {
                switch (l_U512)
                {
                    case 0:
                    sub_26499();
                    break;
                    case 1:
                    sub_29907();
                    break;
                    case 2:
                    sub_40507();
                    break;
                    case -1: break;
                }
            }
        }
        WAIT( 0 );
        if (l_U567 == 1)
        {
            CLEAR_HELP();
            CLEAR_WANTED_LEVEL( l_U656 );
            sub_43032();
        }
        else if (l_U566 == 1)
        {
            CLEAR_HELP();
            sub_54356();
        }
    }
    sub_2780();
    return;
}

void sub_478(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_514())
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

int sub_514()
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

void sub_637()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_658();
        l_U566 = 1;
        l_U512 = -1;
        sub_2780();
    }
    return;
}

void sub_658()
{
    sub_667();
    return;
}

void sub_667()
{
    int iVar2;

    iVar2 = 9;
    sub_681( iVar2 );
    sub_1857( iVar2 );
    return;
}

void sub_681(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_725();
        sub_886();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_994();
            sub_1033();
        }
    }
    sub_1109();
    sub_1210();
    uVar5 = sub_1323( uParam0 );
    sub_1764( uVar5, 0 );
    return;
}

void sub_725()
{
    sub_739( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_839();
    }
    return;
}

void sub_739(int iParam0)
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

void sub_839()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_886()
{
    sub_895();
    return;
}

void sub_895()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_994()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1033()
{
    sub_1042();
    return;
}

void sub_1042()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1109()
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

void sub_1210()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1232();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1232()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1323(unknown uParam0)
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
    sub_1722( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1722(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1764(int iParam0, boolean bParam1)
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

void sub_1857(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1866();
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
        sub_2641();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1866()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1904( 5, g_U569[I] )) == 1))
        {
            if ((sub_1904( 1, g_U569[I] )) != 0)
            {
                sub_2190( I );
            }
        }
    }
    if (NOT sub_2356())
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

int sub_1904(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2190(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2275( g_U569 - 1 );
    return;
}

void sub_2275(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2356()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1904( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2641()
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

void sub_2780()
{
    int I;

    g_U2219 = 0;
    sub_2795();
    sub_2875();
    sub_2955();
    DESTROY_ALL_CAMS();
    ENABLE_SCENE_STREAMING( 1 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1033979537, 65409, 1501, 23, 0, 0.00000000 );
    SWITCH_PED_PATHS_ON( -427.93000000, 1465.26000000, 37.00000000, -424.36000000, 1468.20000000, 39.00000000 );
    REMOVE_COVER_POINT( l_U619[0] );
    REMOVE_COVER_POINT( l_U619[1] );
    REMOVE_COVER_POINT( l_U619[2] );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_ALL_RANDOM_PEDS_FLEE( l_U656, 0 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -465.49000000, 1348.09000000, 12.00000000, -441.81000000, 1413.72000000, 22.00000000 );
    if (DOES_BLIP_EXIST( l_U607 ))
    {
        REMOVE_BLIP( l_U607 );
    }
    if (DOES_BLIP_EXIST( l_U608 ))
    {
        REMOVE_BLIP( l_U608 );
    }
    if (DOES_BLIP_EXIST( l_U581 ))
    {
        REMOVE_BLIP( l_U581 );
    }
    if (DOES_BLIP_EXIST( l_U582 ))
    {
        REMOVE_BLIP( l_U582 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U574 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U575 );
    if (DOES_OBJECT_EXIST( l_U643[0] ))
    {
        DELETE_OBJECT( ref l_U643[0] );
    }
    if (DOES_OBJECT_EXIST( l_U646[0] ))
    {
        DELETE_OBJECT( ref l_U646[0] );
    }
    if (DOES_OBJECT_EXIST( l_U643[1] ))
    {
        DELETE_OBJECT( ref l_U643[1] );
    }
    if (DOES_OBJECT_EXIST( l_U646[1] ))
    {
        DELETE_OBJECT( ref l_U646[1] );
    }
    if (DOES_CHAR_EXIST( l_U574 ))
    {
        REMOVE_CHAR_ELEGANTLY( ref l_U574 );
    }
    for ( I = 0; I < l_U589; I++ )
    {
        if (DOES_CHAR_EXIST( l_U589[I] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U589[I] )))
            {
                SET_CHAR_KEEP_TASK( l_U589[I], 1 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U589[I] );
        }
    }
    I = 0;
    for ( I = 0; I < l_U593; I++ )
    {
        if (DOES_CHAR_EXIST( l_U593[I] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U593[I] )))
            {
                SET_CHAR_KEEP_TASK( l_U593[I], 1 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U593[I] );
        }
    }
    if (DOES_CHAR_EXIST( l_U575 ))
    {
        REMOVE_CHAR_ELEGANTLY( ref l_U575 );
    }
    for ( I = 0; I < l_U576; I++ )
    {
        if (DOES_BLIP_EXIST( l_U583[I] ))
        {
            REMOVE_BLIP( l_U583[I] );
        }
        if (DOES_CHAR_EXIST( l_U576[I] ))
        {
            REMOVE_CHAR_ELEGANTLY( ref l_U576[I] );
        }
    }
    REMOVE_DECISION_MAKER( l_U653 );
    REMOVE_DECISION_MAKER( l_U654 );
    REMOVE_DECISION_MAKER( l_U650 );
    REMOVE_DECISION_MAKER( l_U651 );
    REMOVE_DECISION_MAKER( l_U596 );
    REMOVE_DECISION_MAKER( l_U597 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2795()
{
    int I;

    if (l_U629 != 0)
    {
        for ( I = 0; I <= (l_U629 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U623[I] );
        }
    }
    l_U629 = 0;
    return;
}

void sub_2875()
{
    int I;

    if (l_U636 != 0)
    {
        for ( I = 0; I <= (l_U636 - 1); I++ )
        {
            REMOVE_ANIMS( l_U630[I] );
        }
    }
    l_U636 = 0;
    return;
}

void sub_2955()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U640[I] ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U640[I] );
        }
    }
    return;
}

void sub_4018()
{
    sub_4037( "PXDFAUD" );
    sub_4200( 0, sub_4151(), "Niko", 0 );
    l_U655 = sub_4151();
    l_U656 = sub_4359();
    while (NOT sub_4395())
    {
        WAIT( 0 );
    }
    sub_4510( "misspxdf" );
    while (NOT sub_4562())
    {
        WAIT( 0 );
    }
    return;
}

void sub_4037(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_4056();
    return;
}

void sub_4056()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

void sub_4151()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4200(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4284( "\n PED NUMBER ", uParam0 );
    sub_4324( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4284(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4324(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4359()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_4395()
{
    int I;

    if (l_U629 != 0)
    {
        for ( I = 0; I <= (l_U629 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U623[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_4510(unknown uParam0)
{
    REQUEST_ANIMS( uParam0 );
    l_U630[l_U636] = uParam0;
    l_U636++;
    return;
}

int sub_4562()
{
    int I;

    if (l_U636 != 0)
    {
        for ( I = 0; I <= (l_U636 - 1); I++ )
        {
            if (NOT (HAVE_ANIMS_LOADED( l_U630[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_4718()
{
    if (l_U570 == 0)
    {
        g_U2219 = 1;
        if (NOT (DOES_BLIP_EXIST( l_U607 )))
        {
            ADD_BLIP_FOR_COORD( -421.84950000, 1483.59600000, 18.49900000, ref l_U607 );
            CHANGE_BLIP_SPRITE( l_U607, 55 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U608 )))
        {
            ADD_BLIP_FOR_COORD( -126.06160000, 1501.11500000, 22.77990000, ref l_U608 );
            CHANGE_BLIP_SPRITE( l_U608, 53 );
        }
        sub_4890( ref l_U608, -107.66930000, 1539.59200000, 17.31910000, 270.45260000 );
        PRINT_NOW( "PB3_CHOICE", 7500, 1 );
        l_U570 = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U655 )))
    {
        if ((sub_5046( 1, 1 )) AND (LOCATE_CHAR_ON_FOOT_3D( l_U655, -421.84950000, 1483.59600000, 18.49900000 + 1.60000000, 1.60000000, 1.60000000, 1.60000000, 1 )))
        {
            l_U539 = 1;
            l_U538 = 1;
        }
        GET_KEY_FOR_CHAR_IN_ROOM( l_U655, ref l_U516 );
        if ((sub_5046( 1, 1 )) AND ((NOT (IS_CHAR_IN_ANY_CAR( l_U655 ))) AND (l_U516 == -1180793541)))
        {
            l_U539 = 1;
            l_U538 = 1;
        }
        if ((sub_5046( 1, 1 )) AND (LOCATE_CHAR_ON_FOOT_3D( l_U655, -126.06160000, 1501.11500000, 22.77990000, 1.00000000, 1.00000000, 1.00000000, 1 )))
        {
            l_U539 = 0;
            l_U538 = 1;
        }
        if ((l_U553 == 0) AND (LOCATE_CHAR_ON_FOOT_3D( l_U655, -126.06160000, 1501.11500000, 22.77990000, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1033979537, 65409, 1501, 23, 1, 0.00000000 );
            l_U553 = 1;
        }
    }
    if (IS_CHAR_IN_ANY_CAR( l_U655 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U655, ref l_U639 );
    }
    return;
}

void sub_4890(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

int sub_5046(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_4151() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4151(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_4151() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4151(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_4151()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4151() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4151() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_4359() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_4359() )))
    {
        return 0;
    }
    return 1;
}

void sub_5689()
{
    unknown uVar2;

    DO_SCREEN_FADE_OUT( 1000 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U639 )))
    {
        if (LOCATE_CAR_3D( l_U639, -442.60000000, 1440, 15.30000000, 8.00000000, 8.00000000, 8.00000000, 0 ))
        {
            SET_CAR_HEADING( l_U639, 0.00000000 );
            SET_CAR_COORDINATES( l_U639, -447.96680000, 1450.81100000, 15.50320000 );
            if (NOT (IS_THIS_MODEL_A_BOAT( l_U537 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U639 );
            }
        }
        else if (LOCATE_CAR_3D( l_U639, -465.90000000, 1374.10000000, 16.50000000, 8.00000000, 8.00000000, 8.00000000, 0 ))
        {
            SET_CAR_HEADING( l_U639, 181.02070000 );
            SET_CAR_COORDINATES( l_U639, -458.65830000, 1368.51900000, 16.26740000 );
            if (NOT (IS_THIS_MODEL_A_BOAT( l_U537 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U639 );
            }
        }
    }
    if (DOES_BLIP_EXIST( l_U607 ))
    {
        REMOVE_BLIP( l_U607 );
    }
    if (DOES_BLIP_EXIST( l_U608 ))
    {
        REMOVE_BLIP( l_U608 );
    }
    sub_478( "PXDFAUD", 6 );
    ENABLE_SCENE_STREAMING( 0 );
    START_CUTSCENE_NOW( "imPX4" );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
    }
    CLEAR_NAMED_CUTSCENE( "imPX4" );
    ENABLE_SCENE_STREAMING( 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4151() );
    FREEZE_CHAR_POSITION( l_U655, 1 );
    SET_CHAR_COORDINATES( sub_4151(), -425.24030000, 1466.90200000, 37.93000000 );
    CLEAR_AREA_OF_CHARS( 961.99380000, -607.66200000, 13.01930000, 5.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( -420.70640000 - 15, 1457.70200000 - 15, 38.96640000 - 5, -420.70640000 + 15, 1457.70200000 + 15, 38.96640000 + 5 );
    ADD_COVER_BLOCKING_AREA( -426.38000000, 1464.90000000, 37.00000000, -428.90000000, 1465.90000000, 40.00000000, 1, 0, 1 );
    ADD_COVER_BLOCKING_AREA( -423.60000000, 1464.90000000, 37.00000000, -426.22000000, 1465.90000000, 40.00000000, 1, 0, 1 );
    ADD_COVER_POINT( -428.12780000, 1457.99300000, 37.96640000, 2, 351.76600000, 0, 0, ref l_U619[0] );
    ADD_COVER_POINT( -424.05710000, 1458.77200000, 37.96650000, 2, 10.92720000, 0, 0, ref l_U619[1] );
    ADD_COVER_POINT( -422.36510000, 1460.30600000, 37.96650000, 2, 108.56430000, 0, 0, ref l_U619[2] );
    SET_ALL_RANDOM_PEDS_FLEE( sub_4359(), 1 );
    TASK_SWAP_WEAPON( l_U655, 1 );
    LOAD_SCENE( -425.24030000, 1466.90200000, 37.93000000 );
    WAIT( 2000 );
    sub_6573();
    sub_7485();
    sub_9556();
    ALLOW_EMERGENCY_SERVICES( 0 );
    FREEZE_CHAR_POSITION( l_U655, 0 );
    if (NOT (IS_CHAR_ARMED( sub_4151(), 6 )))
    {
        if (HAS_CHAR_GOT_WEAPON( l_U655, 15 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U655, 15, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U655, 14 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U655, 14, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U655, 13 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U655, 13, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U655, 12 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U655, 12, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U655, 11 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U655, 11, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U655, 10 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U655, 10, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U655, 9 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U655, 9, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U655, 7 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U655, 7, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U655, 4 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U655, 4, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U655, 5 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U655, 5, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U655, 18 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U655, 18, 1 );
        }
        else
        {
            TASK_SWAP_WEAPON( l_U655, 1 );
        };;;;;;;;;;;
    }
    OPEN_SEQUENCE_TASK( ref l_U618 );
    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -425.24030000, 1466.90200000, 37.93000000, 60000 );
    CLOSE_SEQUENCE_TASK( l_U618 );
    TASK_PERFORM_SEQUENCE( sub_4151(), l_U618 );
    CLEAR_SEQUENCE_TASK( l_U618 );
    if (NOT (IS_CHAR_DEAD( l_U576[0] )))
    {
        SET_CHAR_COORDINATES( l_U576[0], -423.24540000, 1458.57000000, 37.96640000 );
        WAIT( 250 );
        if (NOT (IS_CHAR_DEAD( l_U576[0] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U618 );
            TASK_SEEK_COVER_TO_COORDS( 0, -423.24540000, 1458.57000000, 37.96640000, -425.24030000, 1466.90200000, 37.93000000, 3000 );
            TASK_SHOOT_AT_COORD( 0, -427.05000000, 1466.08000000, 38.59000000, 5000, 3 );
            TASK_COMBAT( 0, l_U655 );
            CLOSE_SEQUENCE_TASK( l_U618 );
            TASK_PERFORM_SEQUENCE( l_U576[0], l_U618 );
            CLEAR_SEQUENCE_TASK( l_U618 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U576[1] )))
    {
        SET_CHAR_COORDINATES( l_U576[1], -416.76790000, 1459.07200000, 37.96640000 );
        WAIT( 250 );
        if (NOT (IS_CHAR_DEAD( l_U576[1] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U618 );
            TASK_SEEK_COVER_TO_COORDS( 0, -416.76790000, 1459.07200000, 37.96640000, -425.24030000, 1466.90200000, 37.93000000, 2000 );
            TASK_SHOOT_AT_COORD( 0, -426.07000000, 1466.00000000, 40.40000000, 6000, 3 );
            TASK_COMBAT( 0, l_U655 );
            CLOSE_SEQUENCE_TASK( l_U618 );
            TASK_PERFORM_SEQUENCE( l_U576[1], l_U618 );
            CLEAR_SEQUENCE_TASK( l_U618 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U576[2] )))
    {
        SET_CHAR_COORDINATES( l_U576[2], -422.25640000, 1460.68700000, 37.96640000 );
        WAIT( 250 );
        if (NOT (IS_CHAR_DEAD( l_U576[2] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U618 );
            TASK_SEEK_COVER_TO_COORDS( 0, -422.25640000, 1460.68700000, 37.96640000, -425.24030000, 1466.90200000, 37.93000000, 3000 );
            TASK_SHOOT_AT_COORD( 0, -425.49000000, 1465.92000000, 39.49000000, 5000, 3 );
            TASK_COMBAT( 0, l_U655 );
            CLOSE_SEQUENCE_TASK( l_U618 );
            TASK_PERFORM_SEQUENCE( l_U576[2], l_U618 );
            CLEAR_SEQUENCE_TASK( l_U618 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U576[3] )))
    {
        SET_CHAR_COORDINATES( l_U576[3], -428.12780000, 1457.99300000, 37.96640000 );
        WAIT( 250 );
        if (NOT (IS_CHAR_DEAD( l_U576[3] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U618 );
            TASK_SEEK_COVER_TO_COORDS( 0, -428.12780000, 1457.99300000, 37.96640000, -425.24030000, 1466.90200000, 37.93000000, 2000 );
            TASK_SHOOT_AT_COORD( 0, -425.88000000, 1468.40000000, 39.12000000, 4000, 3 );
            TASK_COMBAT( 0, l_U655 );
            CLOSE_SEQUENCE_TASK( l_U618 );
            TASK_PERFORM_SEQUENCE( l_U576[3], l_U618 );
            CLEAR_SEQUENCE_TASK( l_U618 );
        }
    }
    WAIT( 500 );
    SWITCH_PED_PATHS_OFF( -427.93000000, 1465.26000000, 37.00000000, -424.36000000, 1468.20000000, 39.00000000 );
    SET_PLAYER_CONTROL_ADVANCED( sub_4359(), 1, 0, 1 );
    SET_CHAR_HEADING( sub_4151(), 180.00000000 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    DO_SCREEN_FADE_IN_UNHACKED( 100 );
    WAIT( 100 );
    SWITCH_ROADS_OFF( -465.49000000, 1348.09000000, 12.00000000, -441.81000000, 1413.72000000, 22.00000000 );
    STOP_PED_SPEAKING( sub_4151(), 0 );
    PRINT_NOW( "PB3_KILLPB", 7500, 1 );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    SET_CREATE_RANDOM_COPS( 0 );
    CLEAR_AREA_OF_COPS( -436.04910000, 1440.32900000, 15.08950000, 150.00000000 );
    l_U512++;
    return;
}

void sub_6573()
{
    sub_6587( l_U572 );
    REQUEST_MODEL( l_U573 );
    while (NOT (sub_7307( l_U572 )))
    {
        WAIT( 0 );
    }
    while (NOT (HAS_MODEL_LOADED( l_U573 )))
    {
        WAIT( 0 );
    }
    # -sub_C1FFC0-0xc214c8( 2, ref l_U653 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U654 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U650 );
    COPY_COMBAT_DECISION_MAKER( 65546, ref l_U649 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U651 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U652 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U651, 0 );
    return;
}

void sub_6587(unknown uParam0)
{
    REQUEST_MODEL( sub_6598( uParam0 ) );
    return;
}

int sub_6598(unknown uParam0)
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
    sub_1722( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_7307(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_6598( uParam0 ) );
}

void sub_7485()
{
    sub_7524( l_U572, ref l_U575, -420.70640000, 1457.70200000, 38.96640000, 36.81950000 );
    SET_CHAR_NEVER_TARGETTED( l_U575, 1 );
    GIVE_WEAPON_TO_CHAR( l_U575, 9, 30000, 0 );
    TASK_SWAP_WEAPON( l_U575, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U575, 1 );
    SET_CHAR_NAME_DEBUG( l_U575, "Playboy X" );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U575, "PlayXroom" );
    SET_CHAR_DECISION_MAKER( l_U575, l_U653 );
    SET_COMBAT_DECISION_MAKER( l_U575, l_U654 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U575, 24 );
    SET_CHAR_RELATIONSHIP( l_U575, 1, 24 );
    SET_CHAR_ACCURACY( l_U575, 75 );
    SET_CHAR_AS_ENEMY( l_U575, 1 );
    ALLOW_TARGET_WHEN_INJURED( l_U575, 1 );
    SET_PED_DONT_DO_EVASIVE_DIVES( l_U575, 1 );
    sub_4200( 2, l_U575, "PLAYBOY", 0 );
    WAIT( 0 );
    if (NOT (IS_CHAR_INJURED( l_U575 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U575 );
        SET_CHAR_COORDINATES( l_U575, -434.80040000, 1449.02900000, 39.10320000 - 1.00000000 );
        SET_CHAR_HEADING( l_U575, 270 );
        CLEAR_ROOM_FOR_CHAR( l_U575 );
        TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U575, -434.80040000, 1449.02900000, 39.10320000, 300000 );
    }
    return;
}

void sub_7524(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_6598( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_7574( uParam0, (uParam1^) );
    return;
}

void sub_7574(unknown uParam0, unknown uParam1)
{
    sub_7586( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_7586(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_7680( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_8224( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_7680(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_8224(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_7680( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7680( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_7680( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_7680( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_7680( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_7680( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7680( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_7680( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_7680( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7680( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_7680( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7680( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_7680( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_9556()
{
    int I;

    CREATE_CHAR( 26, l_U573, -416.06100000, 1457.97700000, 38.96640000, ref l_U576[0], 1 );
    SET_CHAR_HEADING( l_U576[0], 53.10720000 );
    GIVE_WEAPON_TO_CHAR( l_U576[0], 12, 30000, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U576[0], 0, 1, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U576[0], 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U576[0], 2, 0, 0 );
    sub_4200( 3, l_U576[0], "GOON_1", 0 );
    CREATE_CHAR( 26, l_U573, -416.31620000, 1462.29900000, 38.96640000, ref l_U576[1], 1 );
    SET_CHAR_HEADING( l_U576[1], 82.88620000 );
    GIVE_WEAPON_TO_CHAR( l_U576[1], 12, 30000, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U576[1], 0, 0, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U576[1], 1, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U576[1], 2, 1, 1 );
    CREATE_CHAR( 26, l_U573, -421.07210000, 1467.92800000, 38.96640000, ref l_U576[2], 1 );
    SET_CHAR_HEADING( l_U576[2], 189.48380000 );
    GIVE_WEAPON_TO_CHAR( l_U576[2], 7, 30000, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U576[2], 0, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U576[2], 1, 1, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U576[2], 2, 1, 2 );
    CREATE_CHAR( 26, l_U573, -429.88320000, 1464.32600000, 38.96640000, ref l_U576[3], 1 );
    SET_CHAR_HEADING( l_U576[3], 282.38790000 );
    GIVE_WEAPON_TO_CHAR( l_U576[3], 10, 30000, 0 );
    for ( I = 0; I < l_U576; I++ )
    {
        SET_ROOM_FOR_CHAR_BY_NAME( l_U576[I], "PlayXroom" );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U576[I] );
        SET_CHAR_DECISION_MAKER( l_U576[I], l_U650 );
        SET_COMBAT_DECISION_MAKER( l_U576[I], l_U651 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U576[I], 24 );
        SET_CHAR_RELATIONSHIP( l_U576[I], 5, 0 );
        SET_CHAR_RELATIONSHIP( l_U576[I], 1, 24 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U576[I], 1 );
        if ((I == 2) || (I == 1))
        {
            SET_CHAR_ACCURACY( l_U576[I], 65 );
        }
        SET_CHAR_IS_TARGET_PRIORITY( l_U576[I], 1 );
        SET_CHAR_AS_ENEMY( l_U576[I], 1 );
    }
    sub_10323( ref l_U576, "PX Gang" );
    sub_10422( l_U572 );
    return;
}

void sub_10323(unknown uParam0, unknown uParam1)
{
    int I;
    char[16] cVar5;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I] )))
        {
            StrCopy( ref cVar5, uParam1, 16 );
            ConcatString(ref cVar5, " ", 16);
            ConcatString(ref cVar5, I, 16);
            SET_CHAR_NAME_DEBUG( (uParam0^)[I], ref cVar5 );
        }
    }
    return;
}

void sub_10422(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_6598( uParam0 ) );
    return;
}

void sub_12152()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;
    unknown uVar5;

    if ((NOT (IS_CHAR_DEAD( l_U575 ))) AND (l_U540 == 0))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_4151(), ref l_U516 );
        if ((l_U516 == 0) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U575, 18 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U575, 4 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U575, l_U655, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_4151(), -429.01860000, 1455.54900000, 39.04730000, 2.00000000, 2.00000000, 2.00000000, 0 ))))))
        {
            SET_PED_IS_BLIND_RAGING( l_U655, 0 );
            if (NOT (IS_CHAR_INJURED( l_U575 )))
            {
                SET_CHAR_PROOFS( l_U575, 0, 1, 0, 0, 0 );
                if (IS_CHAR_ON_FIRE( l_U575 ))
                {
                    EXTINGUISH_CHAR_FIRE( l_U575 );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U575 );
                SET_CHAR_COORDINATES( l_U575, -434.80040000, 1449.02900000, 39.10320000 - 1.00000000 );
                SET_CHAR_HEADING( l_U575, 270 );
                UNLOCK_RAGDOLL( l_U575, 0 );
                SET_CHAR_HEADING( l_U575, 165.00000000 );
                OPEN_SEQUENCE_TASK( ref l_U618 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -435.05550000, 1444.19000000, 39.26730000, 3, 15000 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -434.83290000, 1446.23700000, 38.10290000, 3, 15000 );
                CLOSE_SEQUENCE_TASK( l_U618 );
                TASK_PERFORM_SEQUENCE( l_U575, l_U618 );
                CLEAR_SEQUENCE_TASK( l_U618 );
                WAIT( 500 );
            }
            if (NOT (IS_CHAR_INJURED( l_U575 )))
            {
                if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U655, l_U575, 4.00000000, 4.00000000, 4.00000000, 0 ))) AND (NOT (IS_PED_RAGDOLL( l_U575 ))))
                {
                    sub_12665();
                }
            }
            SET_CHAR_PROOFS( l_U575, 0, 0, 0, 0, 0 );
            SET_PED_DONT_DO_EVASIVE_DIVES( l_U575, 0 );
            if (NOT (sub_15518( l_U664 )))
            {
                sub_13587( "PXDF_CHASE", ref l_U664, 6, 1 );
            }
            l_U540 = 1;
        }
    }
    if (l_U542 == 0)
    {
        if (NOT (IS_CHAR_INJURED( l_U575 )))
        {
            GET_CHAR_COORDINATES( l_U655, ref l_U521._fU0, ref l_U521._fU4, ref l_U521._fU8 );
            if (l_U521._fU8 < 23.85000000)
            {
                if ((NOT (IS_CHAR_FATALLY_INJURED( l_U575 ))) AND (NOT (sub_15518( l_U664 ))))
                {
                    sub_13587( "PXDF_ATTCK", ref l_U664, 6, 1 );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U575 );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, -444.39000000, 1403.97000000, 14.47000000, 4, 30000, 0.75000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, -456.00000000, 1394.00000000, 14.47000000, 4, 30000, 0.75000000 );
                TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -462.90000000, 1391.09000000, 14.47000000, 4, 0.75000000, 0.75000000, l_U655, 0 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -463.51000000, 1373.63000000, 16.02000000, 4, 30000 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -474.08590000, 1373.50100000, 16.19750000, 4, 30000 );
                TASK_ACHIEVE_HEADING( 0, 275.81150000 );
                TASK_PLAY_ANIM( 0, "shoulder_door_Intro", "misspxdf", 4.00000000, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM( 0, "shoulder_door_loop", "misspxdf", 4.00000000, 1, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U575, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                SET_CHAR_NEVER_TARGETTED( l_U575, 0 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U575, 1 );
                l_U542 = 1;
            }
        }
    }
    if ((l_U558 == 0) AND (NOT (IS_CHAR_DEAD( l_U575 ))))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U575, -462.90000000, 1391.09000000, 14.47000000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            SET_CAR_DENSITY_MULTIPLIER( 1.50000000 );
            l_U558 = 1;
        }
    }
    iVar4 = 1;
    if (IS_CHAR_DEAD( l_U575 ))
    {
        if (DOES_BLIP_EXIST( l_U582 ))
        {
            REMOVE_BLIP( l_U582 );
        }
    }
    else if ((NOT (DOES_BLIP_EXIST( l_U582 ))) AND (NOT (IS_CHAR_INJURED( l_U575 ))))
    {
        ADD_BLIP_FOR_CHAR( l_U575, ref l_U582 );
    }
    iVar4 = 0;;
    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U655, -474.08590000, 1373.50100000, 16.19750000, 11, 9, 5, 0 )) || ((IS_CHAR_DEAD( l_U575 )) || (IS_CHAR_INJURED( l_U603[1] ))))
    {
        if ((NOT (IS_CAR_DEAD( l_U602 ))) AND (NOT (IS_CHAR_INJURED( l_U603[0] ))))
        {
            if (IS_CHAR_IN_CAR( l_U603[0], l_U602 ))
            {
                TASK_CAR_DRIVE_WANDER( l_U603[0], l_U602, 15.00000000, 2 );
            }
            else
            {
                TASK_SMART_FLEE_CHAR( l_U603[0], l_U655, 150.00000000, -1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U603[1] )))
            {
                if (IS_CHAR_IN_CAR( l_U603[1], l_U602 ))
                {
                    CLEAR_CHAR_TASKS( l_U603[1] );
                }
                else
                {
                    CLEAR_CHAR_TASKS( l_U603[1] );
                    TASK_SMART_FLEE_CHAR( l_U603[1], l_U655, 150.00000000, -1 );
                }
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U603[0] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U603[1] );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U602 );
        }
    }
    if ((NOT (IS_CHAR_DEAD( l_U575 ))) AND (l_U556 == 0))
    {
        GET_CHAR_HEALTH( l_U575, ref l_U513 );
        if (l_U513 < 101)
        {
            UNLOCK_RAGDOLL( l_U575, 1 );
            l_U556 = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U575 ))) AND (l_U559 == 0))
    {
        if (IS_CHAR_PLAYING_ANIM( l_U575, "misspxdf", "shoulder_door_loop" ))
        {
            l_U559 = 1;
        }
    }
    if ((l_U559 == 1) AND ((NOT (IS_CHAR_INJURED( l_U575 ))) AND (l_U543 == 0)))
    {
        if ((l_U556 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U575, -474.08590000, 1373.50100000, 16.19750000, 1.50000000, 1.50000000, 1.50000000, 0 )))
        {
            UNLOCK_RAGDOLL( l_U575, 1 );
            l_U556 = 1;
        }
        if (IS_CHAR_PLAYING_ANIM( l_U575, "misspxdf", "shoulder_door_loop" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( l_U575, "misspxdf", "shoulder_door_loop", ref l_U519 );
            if ((l_U519 > 0.95000000) AND ((NOT (IS_PED_RAGDOLL( l_U575 ))) AND ((IS_CHAR_ON_SCREEN( l_U575 )) AND ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U655, l_U575, 8.00000000, 8.00000000, 5.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U575, -474.08590000, 1373.50100000, 16.19750000, 1.50000000, 1.50000000, 1.50000000, 0 ))))))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U575, 1 );
                SET_CHAR_HEADING( l_U575, 275.81150000 );
                OPEN_SEQUENCE_TASK( ref uVar5 );
                TASK_PLAY_ANIM( 0, "out_of_ammo", "misspxdf", 4.00000000, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM( 0, "plead", "misspxdf", 4.00000000, 1, 0, 0, 0, -2 );
                CLOSE_SEQUENCE_TASK( uVar5 );
                TASK_PERFORM_SEQUENCE( l_U575, uVar5 );
                CLEAR_SEQUENCE_TASK( uVar5 );
                SET_CHAR_AMMO( l_U575, 9, 0 );
                WAIT( 250 );
                PLAY_AUDIO_EVENT_FROM_PED( "PLAYBOY_PISTOL_EMPTY", l_U575 );
                if ((NOT (IS_CAR_DEAD( l_U602 ))) AND (NOT (IS_CHAR_DEAD( l_U603[0] ))))
                {
                    if (IS_CHAR_IN_CAR( l_U603[0], l_U602 ))
                    {
                        TASK_CAR_DRIVE_WANDER( l_U603[0], l_U602, 15.00000000, 2 );
                    }
                    else
                    {
                        TASK_SMART_FLEE_CHAR( l_U603[0], l_U655, 150.00000000, -1 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U603[1] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U603[1], l_U602 ))
                        {
                            CLEAR_CHAR_TASKS( l_U603[1] );
                        }
                        else
                        {
                            CLEAR_CHAR_TASKS( l_U603[1] );
                            TASK_SMART_FLEE_CHAR( l_U603[1], l_U655, 150.00000000, -1 );
                        }
                    }
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U603[0] );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U603[1] );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U602 );
                }
                while (l_U562 == 0)
                {
                    PRINTSTRING( "\n ----> DropGun = FALSE <---- \n\n" );
                    if (NOT (IS_CHAR_INJURED( l_U575 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U575, "misspxdf", "out_of_ammo" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U575, "misspxdf", "out_of_ammo", ref l_U519 );
                            if ((l_U563 == 0) AND (l_U519 > 0.45000000))
                            {
                                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U575, "SHIT", "PLAYBOY", 1, 1, 0 );
                                l_U563 = 1;
                            }
                            if (l_U519 > 0.60000000)
                            {
                                SET_CHAR_AMMO( l_U575, 9, 0 );
                                FORCE_CHAR_TO_DROP_WEAPON( l_U575 );
                                l_U562 = 1;
                            }
                        }
                        else
                        {
                            SET_CHAR_AMMO( l_U575, 9, 0 );
                            FORCE_CHAR_TO_DROP_WEAPON( l_U575 );
                            l_U562 = 1;
                        }
                    }
                    else
                    {
                        l_U562 = 1;
                    }
                    WAIT( 0 );
                }
                while (l_U543 == 0)
                {
                    PRINTSTRING( "\n ----> PlayboyPlead = FALSE <---- \n\n" );
                    if (NOT (IS_CHAR_DEAD( l_U575 )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( l_U575, "misspxdf", "out_of_ammo" )))
                        {
                            l_U543 = 1;
                        }
                    }
                    else
                    {
                        l_U543 = 1;
                    }
                    WAIT( 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U575 )))
                {
                    SET_CHAR_READY_TO_BE_EXECUTED( l_U575, 1 );
                }
                PRINTSTRING( "\n ----> PlayboyPlead 1 <---- \n\n" );
            }
        }
        else
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U575, 1 );
            if (NOT (IS_CHAR_DEAD( l_U575 )))
            {
                SET_CHAR_READY_TO_BE_EXECUTED( l_U575, 1 );
            }
            if ((NOT (IS_CAR_DEAD( l_U602 ))) AND (NOT (IS_CHAR_DEAD( l_U603[0] ))))
            {
                TASK_CAR_DRIVE_WANDER( l_U603[0], l_U602, 15.00000000, 2 );
                if (NOT (IS_CHAR_DEAD( l_U603[1] )))
                {
                    CLEAR_CHAR_TASKS( l_U603[1] );
                }
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U603[0] );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U603[1] );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U602 );
            }
            PRINTSTRING( "\n ----> PlayboyPlead 2 <---- \n\n" );
            l_U543 = 1;
        }
    }
    if ((NOT (IS_CHAR_DEAD( l_U575 ))) AND ((l_U544 == 0) AND (l_U543 == 1)))
    {
        PRINTSTRING( "\n ----> MAINTAIN PLEADING 1 <---- \n\n" );
        if (NOT (IS_CHAR_PLAYING_ANIM( l_U575, "misspxdf", "out_of_ammo" )))
        {
            PRINTSTRING( "\n ----> MAINTAIN PLEADING 2<---- \n\n" );
            if (sub_18687( ref l_U575, "plead", "misspxdf", ref l_U664, "PXDF_ATTCK" ))
            {
                PRINTSTRING( "\n ----> MAINTAIN PlayboyPleadDeath = FALSE <---- \n\n" );
                l_U544 = 0;
            }
            else
            {
                PRINTSTRING( "\n ----> MAINTAIN PlayboyPleadDeath = TRUE <---- \n\n" );
                l_U544 = 1;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U575 )))
    {
        if (sub_20548( l_U575 ))
        {
            if (sub_15518( l_U664 ))
            {
                sub_13444( ref l_U664, 0 );
            }
            if (DOES_BLIP_EXIST( l_U607 ))
            {
                REMOVE_BLIP( l_U607 );
            }
            if (DOES_BLIP_EXIST( l_U582 ))
            {
                REMOVE_BLIP( l_U582 );
            }
            l_U512++;
        }
    }
    sub_20854();
    sub_22142();
    sub_22266();
    sub_22987();
    sub_23078();
    if ((l_U541 == 1) AND (l_U544 == 0))
    {
        sub_23537();
        sub_23673();
    }
    sub_23933();
    if ((l_U560 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U655, -435.63250000, 1439.02600000, 35.89360000, 8.00000000, 8.00000000, 8.00000000, 0 )))
    {
        SET_CHAR_PROOFS( l_U655, 0, 0, 0, 1, 0 );
        l_U560 = 1;
    }
    else if (l_U560 == 1)
    {
        SET_CHAR_PROOFS( l_U655, 0, 0, 0, 0, 0 );
        l_U560 = 0;
    }
    if (l_U555 == 0)
    {
        GET_CURRENT_CHAR_WEAPON( l_U655, ref l_U536 );
        l_U514 = l_U536;
        if ((l_U514 == 18) || (l_U514 == 4))
        {
            UNLOCK_RAGDOLL( l_U575, 1 );
            l_U555 = 1;
        }
    }
    else if (l_U555 == 1)
    {
        UNLOCK_RAGDOLL( l_U575, 0 );
        l_U555 = 0;
    }
    return;
}

void sub_12665()
{
    int I;
    unknown uVar3;

    SET_PLAYER_CONTROL_ADVANCED( l_U656, 0, 0, 1 );
    CLEAR_AREA_OF_COPS( -436.04910000, 1440.32900000, 15.08950000, 150.00000000 );
    for ( I = 0; I < l_U576; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U576[I] )))
        {
            FREEZE_CHAR_POSITION( l_U576[I], 1 );
        }
    }
    SET_WIDESCREEN_BORDERS( 1 );
    BEGIN_CAM_COMMANDS( ref l_U616 );
    CREATE_CAM( 14, ref l_U612 );
    CREATE_CAM( 14, ref l_U613 );
    CREATE_CAM( 14, ref l_U614 );
    CREATE_CAM( 14, ref l_U615 );
    CREATE_CAM( 3, ref l_U611 );
    SET_CAM_POS( l_U612, -441.37950000, 1439.74100000, 39.07721000 );
    SET_CAM_ROT( l_U612, -1.17919300, -0.00000000, -42.08312000 );
    SET_CAM_FOV( l_U612, 35.00000000 );
    SET_CAM_POS( l_U613, -441.27210000, 1445.50300000, 40.52340000 );
    SET_CAM_ROT( l_U613, -15.79100000, -0.00000000, -117.82820000 );
    SET_CAM_FOV( l_U613, 35.00000000 );
    SET_CAM_POS( l_U614, -436.85550000, 1434.66600000, 36.10863000 );
    SET_CAM_ROT( l_U614, 8.69319300, -0.00000000, -22.58091000 );
    SET_CAM_FOV( l_U614, 35.00000000 );
    SET_CAM_POS( l_U614, -436.42210000, 1434.02500000, 36.16464000 );
    SET_CAM_ROT( l_U614, 13.84981000, 0.00000000, -19.37235000 );
    SET_CAM_FOV( l_U614, 30.00000000 );
    SET_CAM_POS( l_U615, -442.29430000, 1431.33000000, 39.32572000 );
    SET_CAM_ROT( l_U615, -9.85887600, -0.00000000, -53.05002000 );
    SET_CAM_FOV( l_U615, 35.00000000 );
    SET_CHAR_COORDINATES( l_U655, -429.32240000, 1453.82000000, 38.10330000 );
    SET_CHAR_HEADING( l_U655, 165.00000000 );
    WAIT( 0 );
    SET_CAM_ACTIVE( l_U612, 1 );
    SET_CAM_PROPAGATE( l_U612, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_PROPAGATE( l_U612, 0 );
    SET_CAM_INTERP_STYLE_CORE( l_U611, l_U612, l_U613, 3000, 0 );
    SET_CAM_ACTIVE( l_U611, 1 );
    SET_CAM_PROPAGATE( l_U611, 1 );
    if (NOT (IS_CHAR_DEAD( l_U575 )))
    {
        POINT_CAM_AT_PED( l_U612, l_U575 );
        POINT_CAM_AT_PED( l_U613, l_U575 );
    }
    sub_13444( ref l_U664, 0 );
    sub_13587( "PXDF_ATTCK", ref l_U664, 6, 1 );
    while (l_U541 == 0)
    {
        if (NOT (IS_CHAR_INJURED( l_U575 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U575, -435.05550000, 1444.18000000, 39.26730000, 1.75000000, 1.75000000, 1.75000000, 0 ))
            {
                l_U555 = 0;
                OPEN_SEQUENCE_TASK( ref uVar3 );
                TASK_JUMP( 0, 1 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -424.95960000, 1438.09500000, 35.89530000, 3, 60000 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -426.10530000, 1440.67700000, 35.89080000, 3, 60000 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -425.67790000, 1440.23100000, 35.89210000, 3, 60000 );
                CLOSE_SEQUENCE_TASK( uVar3 );
                TASK_PERFORM_SEQUENCE( l_U575, uVar3 );
                CLEAR_SEQUENCE_TASK( uVar3 );
                SET_PED_DENSITY_MULTIPLIER( 2.00000000 );
                l_U541 = 1;
            }
        }
        SETTIMERA( 0 );
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U575 )))
    {
        TASK_AIM_GUN_AT_CHAR( l_U655, l_U575, 3000 );
    }
    while (TIMERA() < 1000)
    {
        WAIT( 0 );
    }
    SETTIMERA( 0 );
    SET_CAM_ACTIVE( l_U611, 0 );
    SET_CAM_PROPAGATE( l_U611, 0 );
    SET_CAM_ACTIVE( l_U614, 1 );
    SET_CAM_PROPAGATE( l_U614, 1 );
    while (TIMERA() < 2000)
    {
        WAIT( 0 );
    }
    SETTIMERA( 0 );
    TASK_GO_STRAIGHT_TO_COORD( l_U655, -432.59200000, 1448.89100000, 38.04770000, 3, 5000 );
    SET_CAM_ACTIVE( l_U614, 0 );
    SET_CAM_PROPAGATE( l_U614, 0 );
    SET_CAM_ACTIVE( l_U615, 1 );
    SET_CAM_PROPAGATE( l_U615, 1 );
    while (TIMERA() < 3000)
    {
        WAIT( 0 );
    }
    SETTIMERA( 0 );
    SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 0 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_CAM_ACTIVE( l_U615, 0 );
    SET_CAM_PROPAGATE( l_U615, 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    DESTROY_CAM( l_U612 );
    DESTROY_CAM( l_U613 );
    DESTROY_CAM( l_U614 );
    DESTROY_CAM( l_U615 );
    DESTROY_CAM( l_U611 );
    END_CAM_COMMANDS( ref l_U616 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (NOT (IS_CHAR_DEAD( l_U575 )))
    {
        CLEAR_AREA( -436.04910000, 1440.32900000, 15.08950000, 10, 1 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U575 );
        SET_CHAR_COORDINATES( l_U575, -436.04910000, 1440.32900000, 15.08950000 );
        SET_CHAR_HEADING( l_U575, 96.70670000 );
        SET_PED_DONT_DO_EVASIVE_DIVES( l_U575, 0 );
        TASK_STAND_STILL( l_U575, 300000 );
    }
    for ( I = 0; I < l_U576; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U576[I] )))
        {
            FREEZE_CHAR_POSITION( l_U576[I], 0 );
        }
    }
    SET_PED_IS_BLIND_RAGING( l_U655, 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U655 );
    SET_PLAYER_CONTROL_ADVANCED( l_U656, 1, 1, 1 );
    return;
}

void sub_13444(int iParam0, unknown uParam1)
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

void sub_13587(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13610( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_13610(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_13664( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_13664(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_13686( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
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
    sub_14378( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_13686(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_13763( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_13763( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_13763( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_13763(unknown uParam0)
{
    return;
}

void sub_14378(int iParam0, int iParam1)
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

int sub_15518(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_13763( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_13763( "\n speech is not playing" );
    }
    return 0;
}

int sub_18687(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    int iVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    vector vVar14;
    vector vVar17;
    float fVar20;
    int iVar21;
    int iVar22;
    int iVar23;
    float fVar24;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_DEAD( (uParam0^) )))
        {
            if (NOT (IS_CHAR_INJURED( (uParam0^) )))
            {
                if (NOT (IS_CHAR_INJURED( sub_4151() )))
                {
                    GET_SCRIPT_TASK_STATUS( (uParam0^), 29, ref iVar9 );
                    if (NOT (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 )))
                    {
                        if (NOT (iVar9 == 1))
                        {
                            if (NOT (IS_PED_RAGDOLL( (uParam0^) )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar10 );
                                TASK_LOOK_AT_CHAR( 0, sub_4151(), -2, 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_4151() );
                                TASK_PLAY_ANIM( 0, uParam1, uParam2, 2.00000000, 1, 0, 0, 0, 0 );
                                CLOSE_SEQUENCE_TASK( uVar10 );
                                TASK_PERFORM_SEQUENCE( (uParam0^), uVar10 );
                                CLEAR_SEQUENCE_TASK( uVar10 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                        {
                            if (GET_CHAR_READY_TO_BE_EXECUTED( (uParam0^) ))
                            {
                                SET_CHAR_READY_TO_BE_EXECUTED( (uParam0^), 0 );
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                    {
                        if (NOT (GET_CHAR_READY_TO_BE_EXECUTED( (uParam0^) )))
                        {
                            SET_CHAR_READY_TO_BE_EXECUTED( (uParam0^), 1 );
                        }
                    }
                    if (sub_15518( (uParam3^) ))
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                        {
                            GET_CHAR_HEALTH( (uParam0^), ref iVar8 );
                            if (iVar8 < l_U487)
                            {
                                sub_19061( uParam3 );
                                GET_GAME_TIMER( ref l_U485 );
                                l_U485 += 3000;
                            }
                            l_U487 = iVar8;
                        }
                    }
                    GET_GAME_TIMER( ref iVar7 );
                    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 ))
                        {
                            if ((iVar7 > l_U485) AND (sub_19571( (uParam3^) )))
                            {
                                sub_19612( uParam4, uParam3, 8, 1 );
                            }
                        }
                    }
                    if (NOT (IS_CHAR_FACING_CHAR( (uParam0^), sub_4151(), 70.00000000 )))
                    {
                        if ((l_U489) AND (iVar7 > l_U486))
                        {
                            l_U489 = 0;
                        }
                    }
                    if (NOT l_U489)
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 ))
                            {
                                switch (l_U499)
                                {
                                    case 0:
                                    if ((NOT (IS_CHAR_INJURED( (uParam0^) ))) AND (NOT (IS_CHAR_INJURED( sub_4151() ))))
                                    {
                                        GET_CHAR_COORDINATES( sub_4151(), ref vVar17.x, ref vVar17.y, ref vVar17.z );
                                        GET_CHAR_COORDINATES( (uParam0^), ref vVar14.x, ref vVar14.y, ref vVar14.z );
                                        uVar11 = {vVar14 - vVar17};
                                        GET_HEADING_FROM_VECTOR_2D( uVar11._fU0, uVar11._fU4, ref l_U491 );
                                        GET_CHAR_HEADING( (uParam0^), ref fVar20 );
                                        iVar21 = FLOOR( l_U491 );
                                        iVar23 = FLOOR( fVar20 );
                                        iVar22 = iVar23 + 180;
                                        if (iVar22 > 360)
                                        {
                                            if ((iVar21 >= iVar23) || (iVar21 < (iVar22 - 360)))
                                            {
                                                l_U490 = 1;
                                            }
                                            else
                                            {
                                                l_U490 = 0;
                                            }
                                        }
                                        else if ((iVar21 > iVar23) AND (iVar21 <= iVar22))
                                        {
                                            l_U490 = 1;
                                        }
                                        else
                                        {
                                            l_U490 = 0;
                                        }
                                        l_U499 = 1;
                                    }
                                    break;
                                    case 1:
                                    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                                    {
                                        GET_CHAR_HEADING( (uParam0^), ref fVar20 );
                                        if (IS_CHAR_FACING_CHAR( (uParam0^), sub_4151(), 30.00000000 ))
                                        {
                                            if (IS_CHAR_FACING_CHAR( (uParam0^), sub_4151(), 20.00000000 ))
                                            {
                                                fVar24 = 2;
                                            }
                                            else
                                            {
                                                fVar24 = 3;
                                            }
                                        }
                                        else
                                        {
                                            fVar24 = 4;
                                        }
                                        if (l_U490)
                                        {
                                            fVar20 -= fVar24;
                                        }
                                        else
                                        {
                                            fVar20 += fVar24;
                                        }
                                        if (NOT (IS_PED_RAGDOLL( (uParam0^) )))
                                        {
                                            SET_CHAR_HEADING( (uParam0^), fVar20 );
                                        }
                                        if (IS_CHAR_FACING_CHAR( (uParam0^), sub_4151(), 10.00000000 ))
                                        {
                                            l_U499 = 2;
                                        }
                                    }
                                    break;
                                    case 2:
                                    l_U489 = 1;
                                    l_U486 = iVar7 + 2500;
                                    l_U499 = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
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

int sub_19061(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_13763( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_13763( "\n CONVERSATION PAUSED AT LINE " );
            sub_19217( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_13763( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_13763( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_13763( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_19217(unknown uParam0)
{
    return;
}

void sub_19571(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_19612(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_19635( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_19635(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_13664( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_20548(unknown uParam0)
{
    int iVar3;

    GET_CURRENT_CHAR_WEAPON( sub_4151(), ref iVar3 );
    if ((iVar3 != 7) AND (iVar3 != 9))
    {
        return 0;
    }
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_4151() )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                if (((IS_CONTROL_JUST_PRESSED( 0, 4 )) AND ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4359(), uParam0 )) AND (NOT IS_USING_CONTROLLER()))) || (GET_CHAR_MELEE_ACTION_FLAG0( uParam0 )))
                {
                    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( sub_4151() ))))
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

void sub_20854()
{
    if ((l_U543 == 0) AND ((l_U598 == 0) AND (NOT (IS_CHAR_DEAD( l_U575 )))))
    {
        GET_CHAR_COORDINATES( l_U655, ref l_U530._fU0, ref l_U530._fU4, ref l_U530._fU8 );
        if ((l_U530._fU4 < 1425) AND (l_U561 == 0))
        {
            REQUEST_MODEL( -808457413 );
            while (NOT (HAS_MODEL_LOADED( -808457413 )))
            {
                WAIT( 0 );
            }
            CREATE_CAR( -808457413, -433.13220000, 1381.21100000, 15.65930000, ref l_U602, 1 );
            SET_CAR_HEADING( l_U602, 358.72730000 );
            SET_VEHICLE_QUATERNION( l_U602, -0.00470000, 0.03000000, 0.69720000, 0.71630000 );
            SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U602, 1 );
            l_U561 = 1;
        }
        if (NOT (IS_CHAR_DEAD( l_U575 )))
        {
            if ((l_U600 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U575, -456.00000000, 1394.00000000, 14.47000000, 17.00000000, 17.00000000, 17.00000000, 0 )))
            {
                PRINTSTRING( "\n ----> GOONCAR - PX POS OKAY <---- \n\n" );
                l_U600 = 1;
            }
        }
        if ((l_U601 == 0) AND (l_U530._fU8 < 16.50000000))
        {
            PRINTSTRING( "\n ----> GOONCAR - PLYR POS OKAY <---- \n\n" );
            l_U601 = 1;
        }
        if ((l_U600 == 1) AND (l_U601 == 1))
        {
            PRINTSTRING( "\n ----> Create Goon Car <---- \n\n" );
            if (l_U561 == 0)
            {
                REQUEST_MODEL( -808457413 );
                while (NOT (HAS_MODEL_LOADED( -808457413 )))
                {
                    WAIT( 0 );
                }
                CREATE_CAR( -808457413, -433.13220000, 1381.21100000, 15.65930000, ref l_U602, 1 );
                SET_CAR_HEADING( l_U602, 358.72730000 );
                SET_VEHICLE_QUATERNION( l_U602, -0.00470000, 0.03000000, 0.69720000, 0.71630000 );
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U602, 1 );
                l_U561 = 1;
            }
            REQUEST_CAR_RECORDING( 634 );
            while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 634 )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U602 )))
            {
                CREATE_CHAR_INSIDE_CAR( l_U602, 26, l_U573, ref l_U603[0] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U603[0] );
                GIVE_WEAPON_TO_CHAR( l_U603[0], 12, 30000, 0 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U603[0], 0 );
                SET_CHAR_ACCURACY( l_U603[0], 35 );
                SET_CHAR_DECISION_MAKER( l_U603[0], l_U650 );
                SET_COMBAT_DECISION_MAKER( l_U603[0], l_U649 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U603[0], 24 );
                SET_CHAR_RELATIONSHIP( l_U603[0], 5, 0 );
                SET_CHAR_RELATIONSHIP( l_U603[0], 1, 24 );
                ALWAYS_USE_HEAD_ON_HORN_ANIM_WHEN_DEAD_IN_CAR( l_U603[0], 1 );
                CREATE_CHAR_AS_PASSENGER( l_U602, 26, l_U573, 0, ref l_U603[1] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U603[1] );
                GIVE_WEAPON_TO_CHAR( l_U603[1], 12, 30000, 0 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U603[1], 0 );
                SET_CHAR_ACCURACY( l_U603[1], 35 );
                SET_CHAR_DECISION_MAKER( l_U603[1], l_U650 );
                SET_COMBAT_DECISION_MAKER( l_U603[1], l_U649 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U603[1], 24 );
                SET_CHAR_RELATIONSHIP( l_U603[1], 5, 0 );
                SET_CHAR_RELATIONSHIP( l_U603[1], 1, 24 );
                TASK_DRIVE_BY( l_U603[1], l_U655, 0, 0, 0, 0, 150, 8, 1, 50 );
            }
            WAIT( 100 );
            if (NOT (IS_CAR_DEAD( l_U602 )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U602, 634 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( -808457413 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U573 );
            if ((NOT (sub_15518( l_U664 ))) AND (NOT (IS_CHAR_INJURED( l_U575 ))))
            {
                sub_13587( "PXDF_GOONS", ref l_U664, 6, 1 );
            }
            l_U598 = 1;
        }
    }
    return;
}

void sub_22142()
{
    if ((l_U598 == 1) AND (l_U599 == 0))
    {
        if (NOT (IS_CAR_DEAD( l_U602 )))
        {
            GET_CAR_HEALTH( l_U602, ref l_U606 );
            if ((NOT (IS_CHAR_IN_CAR( l_U655, l_U602 ))) AND (l_U606 < 600))
            {
                EXPLODE_CAR( l_U602, 1, 0 );
                l_U599 = 1;
            }
        }
    }
    return;
}

void sub_22266()
{
    if (NOT (IS_CHAR_DEAD( l_U575 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U575, sub_4151(), 150.00000000, 150.00000000, 150.00000000, 0 )))
        {
            PRINT_NOW( "PB3_FAIL_01", 7000, 0 );
            sub_22381( 9, "PXDF_FAIL", "PXDFAUD", 0 );
            l_U512 = -1;
            l_U566 = 1;
        }
    }
    return;
}

void sub_22381(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_22425( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_22425(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_22987()
{
    if (IS_CHAR_DEAD( l_U575 ))
    {
        sub_22381( l_U571, "PXDF_CALL4", "PXDFAUD", 0 );
        g_U15654[39] = 1;
        l_U512 = -1;
        l_U567 = 1;
    }
    return;
}

void sub_23078()
{
    GET_CHAR_COORDINATES( l_U655, ref l_U530._fU0, ref l_U530._fU4, ref l_U530._fU8 );
    if ((l_U530._fU8 < 20.00000000) AND (LOCATE_CHAR_ON_FOOT_3D( l_U655, -421.84950000, 1483.59600000, 18.49900000 + 1.60000000, 1.60000000, 1.60000000, 1.60000000, 1 )))
    {
        DO_SCREEN_FADE_OUT( 1000 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4151() );
        FREEZE_CHAR_POSITION( l_U655, 1 );
        SET_CHAR_PROOFS( l_U655, 1, 1, 1, 1, 1 );
        SET_CHAR_COORDINATES( sub_4151(), -425.24030000, 1466.90200000, 37.93000000 );
        LOAD_SCENE( -425.24030000, 1466.90200000, 37.93000000 );
        WAIT( 3000 );
        FREEZE_CHAR_POSITION( l_U655, 0 );
        OPEN_SEQUENCE_TASK( ref l_U618 );
        TASK_SWAP_WEAPON( 0, 1 );
        TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -425.24030000, 1466.90200000, 37.93000000, 60000 );
        CLOSE_SEQUENCE_TASK( l_U618 );
        TASK_PERFORM_SEQUENCE( sub_4151(), l_U618 );
        CLEAR_SEQUENCE_TASK( l_U618 );
        SET_CHAR_PROOFS( l_U655, 0, 0, 0, 0, 0 );
        SET_PLAYER_CONTROL_ADVANCED( sub_4359(), 1, 0, 1 );
        SET_CHAR_HEADING( sub_4151(), 180.00000000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        DO_SCREEN_FADE_IN( 1000 );
        WAIT( 1000 );
    }
    return;
}

void sub_23537()
{
    if (NOT (IS_CHAR_FATALLY_INJURED( l_U575 )))
    {
        if ((l_U542 == 1) AND ((NOT (sub_15518( l_U664 ))) AND (TIMERB() > ((l_U515 * 2) + 4000))))
        {
            sub_13587( "PXDF_CHASE", ref l_U664, 6, 1 );
            GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U515 );
            l_U564 = 1;
            SETTIMERB( 0 );
        }
    }
    return;
}

void sub_23673()
{
    if (NOT (IS_CHAR_FATALLY_INJURED( l_U575 )))
    {
        if ((NOT (sub_15518( l_U664 ))) AND ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U655, l_U575, 6.00000000, 6.00000000, 1.00000000, 0 )) AND ((l_U564 == 1) || (TIMERB() > l_U515))))
        {
            if (l_U543 == 0)
            {
                sub_13587( "PXDF_ATTCK", ref l_U664, 6, 1 );
                l_U564 = 0;
            }
            else if (l_U564 == 0)
            {
                sub_13587( "PXDF_CHASE", ref l_U664, 6, 1 );
                l_U564 = 1;
            }
            else
            {
                sub_13587( "PXDF_ATTCK", ref l_U664, 6, 1 );
                l_U564 = 0;
            }
            GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U515 );
            SETTIMERB( 0 );
        }
    }
    return;
}

void sub_23933()
{
    if (NOT (IS_CHAR_INJURED( l_U576[0] )))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref l_U515 );
        if ((NOT (sub_15518( l_U664 ))) AND ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U655, l_U576[0], 7.50000000, 7.50000000, 7.50000000, 0 )) AND (TIMERB() > l_U515)))
        {
            sub_13587( "PXDF_G1ATT", ref l_U664, 6, 1 );
            SETTIMERB( 0 );
        }
    }
    return;
}

void sub_24336()
{
    if (sub_24371( -469.59080000, 1373.59600000, 16.17650000, 95.14950000, l_U575 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U575 )))
        {
            SET_CHAR_HEALTH( l_U575, 1 );
        }
        sub_22381( l_U571, "PXDF_CALL4", "PXDFAUD", 0 );
        g_U15654[39] = 1;
        l_U512 = -1;
        l_U567 = 1;
    }
    return;
}

int sub_24371(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    fVar11 = 0.00000000;
    fVar12 = 0.30000000;
    fVar13 = 0.50000000;
    switch (l_U671)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_4359(), 0 );
        DISPLAY_RADAR( 0 );
        if (DOES_BLIP_EXIST( l_U607 ))
        {
            REMOVE_BLIP( l_U607 );
        }
        CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 20.00000000, 1 );
        SET_CHAR_COORDINATES( sub_4151(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
        SET_CHAR_HEADING( sub_4151(), uParam3 );
        if (NOT (IS_CHAR_DEAD( uParam4 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4151(), (0.18000000 + 0.06500000) - 0.04500000, (3.49000000 - 0.04000000) + 0.15000000, -1.00010000, ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
            SET_CHAR_COORDINATES( uParam4, uVar17._fU0, uVar17._fU4, uVar17._fU8 );
            GET_CHAR_HEADING( sub_4151(), ref uVar10 );
            SET_CHAR_HEADING( uParam4, uVar10 + 180.00000000 );
            SET_CHAR_PROOFS( uParam4, 1, 0, 0, 0, 0 );
            UNLOCK_RAGDOLL( uParam4, 0 );
            FREEZE_CHAR_POSITION( uParam4, 1 );
        }
        TASK_PLAY_ANIM( sub_4151(), "player_execute", "misspxdf", 1000.00000000, 0, 1, 1, 0, 0 );
        if (NOT (IS_CHAR_INJURED( uParam4 )))
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam4, "victim", "misspxdf", 1000.00000000, 0, 0, 0, 0, 0 );
        }
        WAIT( 0 );
        WAIT( 0 );
        CREATE_CAM( 14, ref l_U675[0] );
        SET_CAM_POS( l_U675[0], -474.04630000, 1372.48000000, 17.55617000 );
        SET_CAM_ROT( l_U675[0], 0.68356600, 0.00000000, -68.09952000 );
        SET_CAM_FOV( l_U675[0], 35.00000000 );
        SET_CAM_ACTIVE( l_U675[0], 1 );
        SET_CAM_PROPAGATE( l_U675[0], 1 );
        CREATE_CAM( 14, ref l_U675[1] );
        SET_CAM_POS( l_U675[1], -471.43990000, 1373.84600000, 17.77926000 );
        SET_CAM_ROT( l_U675[1], 1.25650100, 0.00000000, 105.28680000 );
        SET_CAM_FOV( l_U675[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U675[1], 0 );
        SET_CAM_PROPAGATE( l_U675[1], 0 );
        CREATE_CAM( 14, ref l_U675[3] );
        SET_CAM_POS( l_U675[3], -475.12570000, 1372.53000000, 16.38248000 );
        SET_CAM_ROT( l_U675[3], 12.43447000, 0.00000000, -52.93310000 );
        SET_CAM_FOV( l_U675[3], 55.00000000 );
        SET_CAM_ACTIVE( l_U675[3], 0 );
        SET_CAM_PROPAGATE( l_U675[3], 0 );
        GET_GAME_TIMER( ref l_U672 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        l_U671 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U673 );
        if (l_U617 == 0)
        {
            l_U617 = 1;
            sub_13587( "PXDF_PXDIES", ref l_U664, 8, 1 );
        }
        if ((NOT (sub_15518( l_U664 ))) AND (l_U617 == 1))
        {
            l_U617 = 2;
            sub_13587( "PXDF_FINISH", ref l_U664, 8, 1 );
        }
        if (l_U670 == 0)
        {
            l_U670 = 1;
            WAIT( 4000 );
            SET_CAM_ACTIVE( l_U675[1], 1 );
            SET_CAM_PROPAGATE( l_U675[1], 1 );
            SET_CAM_ACTIVE( l_U675[0], 0 );
            SET_CAM_PROPAGATE( l_U675[0], 0 );
            if (NOT (IS_CHAR_DEAD( uParam4 )))
            {
                FREEZE_CHAR_POSITION( uParam4, 0 );
            }
        }
        if ((l_U670 == 1) AND ((l_U673 - l_U672) > 9500))
        {
            l_U670 = 2;
            if (IS_CHAR_PLAYING_ANIM( sub_4151(), "misspxdf", "player_execute" ))
            {
                SET_TIME_SCALE( 0.50000000 );
                if (NOT (IS_CHAR_DEAD( uParam4 )))
                {
                    GET_PED_BONE_POSITION( uParam4, 1205, -0.05000000, 0.10000000, 0.00000000, ref l_U533 );
                    FIRE_PED_WEAPON( l_U655, l_U533 );
                    if (NOT (# -NULL-0xc27bca()))
                    {
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_chin", uParam4, -0.05000000 + l_U658._fU0, 0.10000000 + l_U658._fU4, 0.00000000 + l_U658._fU8, -40.00000000 + l_U661._fU0, 0.00000000 + l_U661._fU4, 35.00000000 + l_U661._fU8, 1205, 1 );
                    }
                }
                if (NOT (IS_CHAR_DEAD( uParam4 )))
                {
                    CLEAR_CHAR_TASKS( uParam4 );
                    UNLOCK_RAGDOLL( uParam4, 1 );
                    SET_CHAR_PROOFS( uParam4, 0, 0, 0, 0, 0 );
                    if (NOT (IS_CHAR_DEAD( uParam4 )))
                    {
                        STOP_PED_SPEAKING( uParam4, 1 );
                        DAMAGE_CHAR( uParam4, 2000, 0 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam4 );
                    }
                }
                WAIT( 500 );
                PLAY_AUDIO_EVENT_FROM_PED( "PXDF_PLAYBOY_FALL", l_U575 );
                SET_CAM_ACTIVE( l_U675[3], 1 );
                SET_CAM_PROPAGATE( l_U675[3], 1 );
                SET_CAM_ACTIVE( l_U675[1], 0 );
                SET_CAM_PROPAGATE( l_U675[1], 0 );
                GET_GAME_TIMER( ref l_U672 );
                l_U671 = 2;
            }
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U672 );
        l_U671 = 3;
        break;
        case 3:
        GET_GAME_TIMER( ref l_U673 );
        if ((l_U673 - l_U672) > 1500)
        {
            SET_TIME_SCALE( 1.00000000 );
            SET_CAM_ACTIVE( l_U675[0], 0 );
            SET_CAM_PROPAGATE( l_U675[0], 0 );
            SET_CAM_ACTIVE( l_U675[1], 0 );
            SET_CAM_PROPAGATE( l_U675[1], 0 );
            SET_CAM_ACTIVE( l_U675[3], 0 );
            SET_CAM_PROPAGATE( l_U675[3], 0 );
            DESTROY_CAM( l_U675[0] );
            DESTROY_CAM( l_U675[1] );
            DESTROY_CAM( l_U675[3] );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL( sub_4359(), 1 );
            DISPLAY_RADAR( 1 );
            SET_TIME_SCALE( 1.00000000 );
            l_U671 = 4;
        }
        break;
        case 4:
        if (NOT (IS_CHAR_DEAD( uParam4 )))
        {
            DAMAGE_CHAR( uParam4, 2000, 0 );
        }
        return 1;
        break;
    }
    return 0;
}

void sub_26499()
{
    unknown uVar2;
    int I;
    int iVar4;
    unknown[7] uVar5;
    vector[5] vVar13;
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
    vector[5] vVar29;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    float[5] fVar45;
    unknown[5] uVar51;
    boolean bVar57;

    if (DOES_BLIP_EXIST( l_U607 ))
    {
        REMOVE_BLIP( l_U607 );
    }
    if (DOES_BLIP_EXIST( l_U608 ))
    {
        REMOVE_BLIP( l_U608 );
    }
    array(ref uVar5, 7);
    SET_PLAYER_CONTROL_ADVANCED( sub_4359(), 0, 1, 1 );
    DO_SCREEN_FADE_OUT( 750 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    array(ref vVar13, 5);
    array(ref vVar29, 5);
    array(ref fVar45, 5);
    array(ref uVar51, 5);
    CREATE_CAM( 3, ref l_U611 );
    vVar13[0] = {-124.44440000, 1500.20500000, 23.41205000};
    vVar29[0] = {-9.35806400, -0.00000000, 77.69769000};
    vVar13[1] = {-125.21660000, 1501.78400000, 24.05388000};
    vVar29[1] = {-16.04277000, -0.00000100, 134.08820000};
    vVar13[0] = {-125.25880000, 1505.04200000, 22.21345000};
    vVar29[0] = {9.32036500, -0.00000000, 163.29750000};
    fVar45[0] = 48;
    vVar13[1] = {-125.25880000, 1505.04200000, 22.21345000};
    vVar29[1] = {9.32036500, -0.00000000, 163.29750000};
    fVar45[1] = 43;
    vVar13[2] = {-127.77820000, 1502.73900000, 23.44228000};
    vVar29[2] = {-6.60786700, 0.00000000, -141.30820000};
    fVar45[2] = 30;
    vVar13[3] = {-126.61620000, 1500.68400000, 23.32228000};
    vVar29[3] = {-0.00397600, 0.00000000, -40.13702000};
    fVar45[3] = 50;
    vVar13[4] = {-125.60710000, 1503.38300000, 21.93005000};
    vVar29[4] = {20.62250000, -0.00000000, 159.94280000};
    fVar45[4] = 40;
    sub_27041();
    sub_27244();
    sub_27614();
    SET_WIDESCREEN_BORDERS( 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U655 );
    SET_CHAR_COORDINATES( l_U655, -128.50000000, 1498.50000000, 21.77990000 );
    SET_CHAR_HEADING( l_U655, 138.46020000 );
    WAIT( 1000 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U655 );
    SET_CHAR_COORDINATES( l_U655, -126.02000000, 1501.29000000, 21.78000000 );
    SET_CHAR_HEADING( l_U655, 135.59150000 );
    WAIT( 1000 );
    OPEN_SEQUENCE_TASK( ref l_U618 );
    TASK_SWAP_WEAPON( 0, 0 );
    TASK_STAND_STILL( 0, 1000 );
    TASK_PLAY_ANIM( 0, "door_knock", "misspxdf", 2.00000000, 0, 0, 0, 0, 0 );
    TASK_STAND_STILL( 0, 2000 );
    TASK_PLAY_ANIM( 0, "door_knock", "misspxdf", 2.00000000, 0, 0, 0, 0, 0 );
    TASK_STAND_STILL( 0, 3000 );
    TASK_PLAY_ANIM( 0, "plyr_shldropen", "misspxdf", 2.00000000, 0, 1, 1, 0, 0 );
    CLOSE_SEQUENCE_TASK( l_U618 );
    TASK_PERFORM_SEQUENCE( sub_4151(), l_U618 );
    CLEAR_SEQUENCE_TASK( l_U618 );
    WAIT( 1500 );
    BEGIN_CAM_COMMANDS( ref uVar2 );
    for ( I = 0; I < vVar13; I++ )
    {
        CREATE_CAM( 14, ref uVar51[I] );
        SET_CAM_POS( uVar51[I], vVar13[I]._fU0, vVar13[I]._fU4, vVar13[I]._fU8 );
        SET_CAM_ROT( uVar51[I], vVar29[I]._fU0, vVar29[I]._fU4, vVar29[I]._fU8 );
        SET_CAM_FOV( uVar51[I], fVar45[I] );
        SET_CAM_ACTIVE( uVar51[I], 1 );
    }
    SET_CAM_PROPAGATE( uVar51[0], 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    DO_SCREEN_FADE_IN( 1000 );
    I = 0;
    bVar57 = false;
    SETTIMERB( 0 );
    SETTIMERA( 0 );
    while ((NOT sub_28606()) AND (NOT bVar57))
    {
        if (iVar4 == 0)
        {
            I = 1;
            iVar4 = 1;
            SET_CAM_PROPAGATE( uVar51[0], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U611, uVar51[0], uVar51[1], 5000, 0 );
            SET_CAM_ACTIVE( l_U611, 1 );
            SET_CAM_PROPAGATE( l_U611, 1 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1033979537, 65409, 1501, 23, 1, 0.00000000 );
            sub_28848( "PXDF_APPTC", 0, 1, ref l_U664, 6, 1 );
        }
        if ((NOT (sub_15518( l_U664 ))) AND (iVar4 == 1))
        {
            iVar4 = 2;
            SET_CAM_PROPAGATE( l_U611, 0 );
            SET_CAM_ACTIVE( uVar51[2], 1 );
            SET_CAM_PROPAGATE( uVar51[2], 1 );
            sub_28848( "PXDF_APPTC", 1, 1, ref l_U664, 6, 1 );
        }
        if ((NOT (sub_15518( l_U664 ))) AND (iVar4 == 2))
        {
            iVar4 = 3;
            SET_CAM_PROPAGATE( uVar51[2], 0 );
            SET_CAM_ACTIVE( uVar51[3], 1 );
            SET_CAM_PROPAGATE( uVar51[3], 1 );
            sub_28848( "PXDF_APPTC", 2, 1, ref l_U664, 6, 1 );
        }
        if ((NOT (sub_15518( l_U664 ))) AND (iVar4 == 3))
        {
            iVar4 = 4;
            SET_CAM_PROPAGATE( uVar51[3], 0 );
            SET_CAM_ACTIVE( uVar51[4], 1 );
            SET_CAM_PROPAGATE( uVar51[4], 1 );
            sub_28848( "PXDF_APPTC", 3, 1, ref l_U664, 6, 1 );
        }
        if ((IS_CHAR_PLAYING_ANIM( sub_4151(), "misspxdf", "plyr_shldropen" )) AND (I == 1))
        {
            I = 2;
            SETTIMERB( 0 );
        }
        if ((TIMERB() > 4750) AND (I == 2))
        {
            I = 3;
            while (l_U518 > -1.20000000)
            {
                GET_FRAME_TIME( ref l_U520 );
                l_U518 -= l_U520 + 0.75000000;
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1033979537, 65409, 1501, 23, 1, l_U518 );
                WAIT( 0 );
            }
        }
        if ((NOT (sub_15518( l_U664 ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( sub_4151(), "misspxdf", "plyr_shldropen" ))) AND (I == 3)))
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            bVar57 = true;
        }
        if ((NOT (sub_15518( l_U664 ))) AND (sub_29515( sub_4151(), 29 )))
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            bVar57 = true;
        }
        WAIT( 0 );
    }
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1033979537, 65409, 1501, 23, 1, -1.00000000 );
    sub_13444( ref l_U664, 0 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4151() );
    for ( I = 0; I < vVar13; I++ )
    {
        SET_CAM_PROPAGATE( uVar51[I], 0 );
        SET_CAM_ACTIVE( uVar51[I], 0 );
        DESTROY_CAM( uVar51[I] );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    END_CAM_COMMANDS( ref uVar2 );
    SET_WIDESCREEN_BORDERS( 0 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_PLAYER_CONTROL_ADVANCED( sub_4359(), 1, 1, 1 );
    CLEAR_CHAR_TASKS( sub_4151() );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    PRINT_NOW( "PB3_EXECUTE_D", 7500, 1 );
    if (NOT (DOES_BLIP_EXIST( l_U581 )))
    {
        ADD_BLIP_FOR_CHAR( l_U574, ref l_U581 );
        SET_BLIP_AS_FRIENDLY( l_U581, 0 );
    }
    l_U512++;
    return;
}

void sub_27041()
{
    sub_6587( l_U571 );
    while (NOT (sub_7307( l_U571 )))
    {
        WAIT( 0 );
    }
    REQUEST_MODEL( -1220737489 );
    while (NOT (HAS_MODEL_LOADED( -1220737489 )))
    {
        WAIT( 0 );
    }
    REQUEST_MODEL( -1827421800 );
    while (NOT (HAS_MODEL_LOADED( -1827421800 )))
    {
        WAIT( 0 );
    }
    # -sub_C1FFC0-0xc214c8( 2, ref l_U653 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U654 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U596 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U597 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U597, 0 );
    return;
}

void sub_27244()
{
    sub_7524( l_U571, ref l_U574, -131.90640000, 1490.59400000, 21.77730000, 15.04940000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U574, "Room_Dwayne" );
    SET_CHAR_DECISION_MAKER( l_U574, l_U653 );
    SET_COMBAT_DECISION_MAKER( l_U574, l_U654 );
    SET_CHAR_NAME_DEBUG( l_U574, "Dwayne" );
    sub_10422( l_U571 );
    GIVE_WEAPON_TO_CHAR( l_U574, 7, 30000, 0 );
    TASK_SWAP_WEAPON( l_U574, 1 );
    SET_CHAR_NEVER_TARGETTED( l_U574, 0 );
    ALLOW_TARGET_WHEN_INJURED( l_U574, 1 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U574, 1 );
    SET_CHAR_AS_ENEMY( l_U574, 1 );
    STOP_PED_SPEAKING( l_U574, 1 );
    sub_4200( 1, l_U574, "DWAYNE", 0 );
    SET_CHAR_COORDINATES( l_U574, -131.90640000, 1490.59400000, 21.77730000 );
    SET_CHAR_HEADING( l_U574, 15.04940000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U574, "Room_Dwayne" );
    TASK_STAND_GUARD( l_U574, -131.90640000, 1490.59400000, 21.77730000, 15.04940000, 1.00000000, 0, -1 );
    return;
}

void sub_27614()
{
    int I;

    CREATE_CHAR( 8, -1827421800, -132.60330000, 1499.41000000, 22.77970000, ref l_U589[1], 1 );
    SET_CHAR_HEADING( l_U589[1], 234.02060000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U589[1], "bedroom2" );
    SET_CHAR_NAME_DEBUG( l_U589[1], "Junkie2" );
    SET_CHAR_KEEP_TASK( l_U589[1], 1 );
    for ( I = 0; I < l_U589; I++ )
    {
        if (DOES_CHAR_EXIST( l_U589[I] ))
        {
            SET_CHAR_DECISION_MAKER( l_U589[I], l_U596 );
            SET_COMBAT_DECISION_MAKER( l_U589[I], l_U597 );
            GIVE_WEAPON_TO_CHAR( l_U589[I], 1, 1, 0 );
            if (NOT (IS_CHAR_INJURED( l_U589[I] )))
            {
                TASK_SWAP_WEAPON( l_U589[I], 1 );
            }
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U589[I] );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U589[I], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U589[I], 1 );
            SET_CHAR_AS_ENEMY( l_U589[I], 1 );
            SET_CHAR_KEEP_TASK( l_U589[I], 1 );
        }
    }
    return;
}

int sub_28606()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_28848(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_28875( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_28875(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_13664( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_29515(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_29907()
{
    unknown uVar2;
    unknown uVar3;
    int I;

    if (l_U588 == 0)
    {
        for ( I = 0; I < l_U589; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U589[I] )))
            {
                TASK_COMBAT( l_U589[I], sub_4151() );
            }
        }
        l_U588 = 1;
    }
    sub_30004();
    if ((NOT (IS_CHAR_INJURED( l_U574 ))) AND (l_U551 == 0))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U574, 1 );
        SET_CHAR_READY_TO_BE_EXECUTED( l_U574, 1 );
        OPEN_SEQUENCE_TASK( ref l_U618 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_4151() );
        TASK_PLAY_ANIM( 0, "plead_dwayne", "misspxdf", 4.00000000, 1, 0, 0, 0, -2 );
        CLOSE_SEQUENCE_TASK( l_U618 );
        TASK_PERFORM_SEQUENCE( l_U574, l_U618 );
        CLEAR_SEQUENCE_TASK( l_U618 );
        l_U551 = 1;
    }
    if ((l_U552 == 0) AND (l_U551 == 1))
    {
        if (NOT (IS_CHAR_INJURED( l_U574 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U574, -131.90640000, 1490.59400000, 21.77730000, 0.80000000, 0.80000000, 1.50000000, 0 ))
            {
                PRINTSTRING( "/n/n ----> Dwayne in Execution Area /n/n/n" );
                if (sub_18687( ref l_U574, "plead_dwayne", "misspxdf", ref l_U664, "PXDF_SHOT" ))
                {
                    l_U552 = 0;
                }
                else
                {
                    l_U552 = 1;
                }
                l_U557 = 0;
            }
            else
            {
                PRINTSTRING( "/n/n ----> Dwayne out of Execution Area /n/n/n" );
                if (l_U557 == 0)
                {
                    TASK_PLAY_ANIM( l_U574, "plead", "misspxdf", 4.00000000, 1, 0, 0, 0, -2 );
                    l_U557 = 1;
                }
            }
        }
    }
    sub_30658();
    if (l_U557 == 1)
    {
        sub_30898( ref l_U574, "plead", "misspxdf", ref l_U664, "PXDF_SHOT" );
    }
    if (NOT (IS_CHAR_INJURED( l_U574 )))
    {
        if ((l_U557 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U574, -131.90640000, 1490.59400000, 21.77730000, 0.80000000 + 0.70000000, 0.80000000 + 0.70000000, 1.50000000, 0 )))
        {
            if (sub_20548( l_U574 ))
            {
                if (sub_15518( l_U664 ))
                {
                    sub_13444( ref l_U664, 0 );
                }
                if (DOES_BLIP_EXIST( l_U608 ))
                {
                    REMOVE_BLIP( l_U608 );
                }
                l_U512++;
            }
        }
    }
    sub_32106();
    sub_32247();
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        ;
    }
    return;
}

void sub_30004()
{
    if (NOT (IS_CHAR_FATALLY_INJURED( l_U574 )))
    {
        if ((NOT (sub_15518( l_U664 ))) AND ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U655, l_U574, 4.00000000, 4.00000000, 2.00000000, 0 )) AND (TIMERB() > l_U515)))
        {
            sub_13587( "PXDF_SHOT", ref l_U664, 6, 1 );
            GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U515 );
            SETTIMERB( 0 );
        }
    }
    return;
}

void sub_30658()
{
    string sVar2;
    string sVar3;

    if (NOT (IS_CHAR_INJURED( l_U574 )))
    {
        sVar2 = "misspxdf";
        sVar3 = "plead_dwayne";
        if (NOT (IS_CHAR_PLAYING_ANIM( l_U574, sVar2, sVar3 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U574 )))
            {
                if (GET_CHAR_READY_TO_BE_EXECUTED( l_U574 ))
                {
                    SET_CHAR_READY_TO_BE_EXECUTED( l_U574, 0 );
                }
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U574 )))
        {
            if (NOT (GET_CHAR_READY_TO_BE_EXECUTED( l_U574 )))
            {
                SET_CHAR_READY_TO_BE_EXECUTED( l_U574, 1 );
            }
        }
    }
    return;
}

void sub_30898(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    int iVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    vector vVar14;
    vector vVar17;
    float fVar20;
    int iVar21;
    int iVar22;
    int iVar23;
    float fVar24;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_DEAD( (uParam0^) )))
        {
            if (NOT (IS_CHAR_INJURED( (uParam0^) )))
            {
                if (NOT (IS_CHAR_INJURED( sub_4151() )))
                {
                    GET_SCRIPT_TASK_STATUS( (uParam0^), 29, ref iVar9 );
                    if (NOT (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 )))
                    {
                        if (NOT (iVar9 == 1))
                        {
                            if (NOT (IS_PED_RAGDOLL( (uParam0^) )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar10 );
                                TASK_LOOK_AT_CHAR( 0, sub_4151(), -2, 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_4151() );
                                TASK_PLAY_ANIM( 0, uParam1, uParam2, 2.00000000, 1, 0, 0, 0, 0 );
                                CLOSE_SEQUENCE_TASK( uVar10 );
                                TASK_PERFORM_SEQUENCE( (uParam0^), uVar10 );
                                CLEAR_SEQUENCE_TASK( uVar10 );
                            }
                        }
                    }
                    if (sub_15518( (uParam3^) ))
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                        {
                            GET_CHAR_HEALTH( (uParam0^), ref iVar8 );
                            if (iVar8 < l_U487)
                            {
                                sub_19061( uParam3 );
                                GET_GAME_TIMER( ref l_U485 );
                                l_U485 += 3000;
                            }
                            l_U487 = iVar8;
                        }
                    }
                    GET_GAME_TIMER( ref iVar7 );
                    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 ))
                        {
                            if ((iVar7 > l_U485) AND (sub_19571( (uParam3^) )))
                            {
                                sub_19612( uParam4, uParam3, 8, 1 );
                            }
                        }
                    }
                    if (NOT (IS_CHAR_FACING_CHAR( (uParam0^), sub_4151(), 70.00000000 )))
                    {
                        if ((l_U489) AND (iVar7 > l_U486))
                        {
                            l_U489 = 0;
                        }
                    }
                    if (NOT l_U489)
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 ))
                            {
                                switch (l_U499)
                                {
                                    case 0:
                                    if ((NOT (IS_CHAR_INJURED( (uParam0^) ))) AND (NOT (IS_CHAR_INJURED( sub_4151() ))))
                                    {
                                        GET_CHAR_COORDINATES( sub_4151(), ref vVar17.x, ref vVar17.y, ref vVar17.z );
                                        GET_CHAR_COORDINATES( (uParam0^), ref vVar14.x, ref vVar14.y, ref vVar14.z );
                                        uVar11 = {vVar14 - vVar17};
                                        GET_HEADING_FROM_VECTOR_2D( uVar11._fU0, uVar11._fU4, ref l_U491 );
                                        GET_CHAR_HEADING( (uParam0^), ref fVar20 );
                                        iVar21 = FLOOR( l_U491 );
                                        iVar23 = FLOOR( fVar20 );
                                        iVar22 = iVar23 + 180;
                                        if (iVar22 > 360)
                                        {
                                            if ((iVar21 >= iVar23) || (iVar21 < (iVar22 - 360)))
                                            {
                                                l_U490 = 1;
                                            }
                                            else
                                            {
                                                l_U490 = 0;
                                            }
                                        }
                                        else if ((iVar21 > iVar23) AND (iVar21 <= iVar22))
                                        {
                                            l_U490 = 1;
                                        }
                                        else
                                        {
                                            l_U490 = 0;
                                        }
                                        l_U499 = 1;
                                    }
                                    break;
                                    case 1:
                                    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                                    {
                                        GET_CHAR_HEADING( (uParam0^), ref fVar20 );
                                        if (IS_CHAR_FACING_CHAR( (uParam0^), sub_4151(), 30.00000000 ))
                                        {
                                            if (IS_CHAR_FACING_CHAR( (uParam0^), sub_4151(), 20.00000000 ))
                                            {
                                                fVar24 = 2;
                                            }
                                            else
                                            {
                                                fVar24 = 3;
                                            }
                                        }
                                        else
                                        {
                                            fVar24 = 4;
                                        }
                                        if (l_U490)
                                        {
                                            fVar20 -= fVar24;
                                        }
                                        else
                                        {
                                            fVar20 += fVar24;
                                        }
                                        if (NOT (IS_PED_RAGDOLL( (uParam0^) )))
                                        {
                                            SET_CHAR_HEADING( (uParam0^), fVar20 );
                                        }
                                        if (IS_CHAR_FACING_CHAR( (uParam0^), sub_4151(), 10.00000000 ))
                                        {
                                            l_U499 = 2;
                                        }
                                    }
                                    break;
                                    case 2:
                                    l_U489 = 1;
                                    l_U486 = iVar7 + 2500;
                                    l_U499 = 0;
                                    break;
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

void sub_32106()
{
    if (NOT (IS_CHAR_DEAD( l_U574 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U574, sub_4151(), 150.00000000, 150.00000000, 150.00000000, 0 )))
        {
            PRINT_NOW( "PB3_FAIL_02", 7000, 0 );
            sub_22381( 9, "PXDF_CALL3", "PXDFAUD", 0 );
            l_U512 = -1;
            l_U566 = 1;
        }
    }
    return;
}

void sub_32247()
{
    if (IS_CHAR_DEAD( l_U574 ))
    {
        sub_22381( 9, "PXDF_DDEAD", "PXDFAUD", 0 );
        sub_32308( l_U511 );
        sub_32481( 1015, 3 );
        sub_32562( "PD_DWAYNE", "PD_FORGE" );
        sub_32764( 35, 1, 16383, 16383, ref l_U500 );
        sub_33443( ref l_U500, 1 );
        sub_33476( ref l_U500, 0 );
        sub_34489();
        l_U512 = -1;
        l_U567 = 1;
    }
    return;
}

void sub_32308(unknown uParam0)
{
    ADD_SCORE( sub_4359(), uParam0 );
    sub_32333( uParam0 );
    return;
}

void sub_32333(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1722( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_32481(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_32562(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_32575( uParam0, uParam1 );
    if (iVar4 != -1)
    {
        g_U2273[iVar4]._fU180 = 1;
        g_U2273[iVar4]._fU212 = 1;
    }
    return;
}

int sub_32575(unknown uParam0, unknown uParam1)
{
    int Result;

    if ((DOES_TEXT_LABEL_EXIST( uParam1 )) AND (DOES_TEXT_LABEL_EXIST( uParam0 )))
    {
        for ( Result = 0; Result <= 99; Result++ )
        {
            if (COMPARE_STRING( ref g_U2273[Result]._fU16, uParam0 ))
            {
                if (COMPARE_STRING( ref g_U2273[Result]._fU0, uParam1 ))
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

void sub_32764(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_32788( uParam0, 0, iParam4 + 0 );
    sub_32788( uParam1, 1, iParam4 + 0 );
    sub_32788( uParam2, 2, iParam4 + 0 );
    sub_32788( uParam3, 3, iParam4 + 0 );
    sub_32788( 0, 4, iParam4 + 0 );
    sub_32788( 1, 5, iParam4 + 0 );
    sub_32788( 65535, 6, iParam4 + 0 );
    sub_32788( 0, 12, iParam4 + 0 );
    sub_32788( 0, 11, iParam4 + 0 );
    sub_32788( 0, 14, iParam4 + 0 );
    sub_32788( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_32788( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_32788( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_32788(unknown uParam0, unknown uParam1, int iParam2)
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
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, uParam0 );
        break;
        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, uParam0 );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, uParam0 );
        break;
        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, uParam0 );
        break;
        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, uParam0 );
        break;
        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, uParam0 );
        break;
        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, uParam0 );
        break;
    }
    return;
}

void sub_33443(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU36 = uParam1;
    return;
}

int sub_33476(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_33516())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_34203( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_34002( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] == -1)
        {
            g_U968[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U967 = 1;
    return 1;
}

int sub_33516()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_33550( 5, g_U968[I] )) == 7)
        {
            sub_34002( I );
            return 1;
        }
    }
    return 0;
}

int sub_33550(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_34002(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_34075( 39 );
    return;
}

void sub_34075(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_34203(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_34264( uParam0, g_U968[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = 40;
        }
    }
    return -1;
}

int sub_34264(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_34489()
{
    sub_34498();
    return;
}

void sub_34498()
{
    int iVar2;
    int iVar3;

    iVar2 = 7;
    sub_34512( iVar2 );
    iVar3 = 7;
    sub_40221( iVar3 );
    return;
}

void sub_34512(unknown uParam0)
{
    unknown uVar3;

    g_U10981[uParam0]._fU4 = 1;
    uVar3 = sub_1323( uParam0 );
    sub_34546( uVar3 );
    sub_34649( "****** STRAND DEACTIVATING *******\n" );
    sub_34668( uParam0 );
    g_U15946[uVar3]._fU132._fU0 = 0;
    return;
}

void sub_34546(unknown uParam0)
{
    if (NOT g_U22274[uParam0]._fU0)
    {
        return;
    }
    g_U22274[uParam0]._fU0 = 0;
    g_U26439--;
    return;
}

void sub_34649(unknown uParam0)
{
    return;
}

void sub_34668(unknown uParam0)
{
    boolean bVar3;
    unknown uVar4;

    if (NOT g_U10981[uParam0]._fU8)
    {
        return;
    }
    if (NOT g_U10981[uParam0]._fU4)
    {
        return;
    }
    bVar3 = false;
    uVar4 = sub_1323( uParam0 );
    if ((g_U13391[uParam0]._fU80._fU0 == 1) || (g_U13391[uParam0]._fU80._fU0 == 0))
    {
        sub_34779( uParam0 );
        g_U22274[uVar4]._fU0 = 0;
    }
    else
    {
        bVar3 = true;
    }
    g_U10981[uParam0]._fU144._fU0 = 0;
    if (g_U13391[uParam0]._fU160._fU0)
    {
        if (g_U13391[uParam0]._fU160._fU80)
        {
            if (NOT g_U13391[uParam0]._fU160._fU96)
            {
                sub_39209( uParam0 );
            }
            else
            {
                bVar3 = true;
            }
        }
        else
        {
            bVar3 = true;
        }
    }
    if ((g_U13391[uParam0]._fU0._fU0 == 1) || (g_U13391[uParam0]._fU0._fU0 == 0))
    {
        sub_39847( uParam0 );
    }
    else
    {
        bVar3 = true;
    }
    if (bVar3)
    {
        return;
    }
    g_U10981[uParam0]._fU8 = 0;
    return;
}

void sub_34779(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU80._fU0 = 0;
        sub_34900( uParam0 );
        sub_37281( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_37569( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU80._fU0 = 6;
        sub_37569( uParam0, iVar4 );
        break;
        case 6:
        sub_37569( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_38018( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_1722( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_34900(unknown uParam0)
{
    if ((NOT (g_U13391[uParam0]._fU80._fU0 == 1)) AND (NOT (g_U13391[uParam0]._fU80._fU0 == 0)))
    {
        sub_34957( uParam0 );
        sub_35103( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 1)
    {
        sub_34957( uParam0 );
        sub_35293( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 0)
    {
        sub_35103( uParam0 );
    }
    if ((NOT (g_U13391[uParam0]._fU0._fU0 == 1)) AND (NOT (g_U13391[uParam0]._fU0._fU0 == 0)))
    {
        sub_34957( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 1)
    {
        sub_36523( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        sub_34957( uParam0 );
    }
    return;
}

void sub_34957(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
    g_U13391[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU0._fU68;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_35103(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
    g_U13391[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU80._fU68;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_35293(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_35103( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU80._fU4;
        iVar8 = sub_35476( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU80._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_1722( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U5 );
        if ((NOT g_U13391[uParam0]._fU80._fU72) || (NOT g_U32896._fU4))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U13391[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U6 );
        sub_36129( g_U13391[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

int sub_35476(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1722( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_36129(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 1:
        sub_4890( ref uParam0, 827.41800000, -288.99640000, 14.75330000, 179.76500000 );
        break;
        case 17:
        sub_4890( ref uParam0, -150.38910000, -795.66570000, 4.20110000, 271.69380000 );
        break;
        case 18:
        sub_4890( ref uParam0, -160.31520000, -796.40800000, 5.20610000, 270.00000000 );
        break;
        case 24:
        sub_4890( ref uParam0, -126.75380000, -263.66190000, 11.56380000, 0.00000000 );
        break;
        case 29:
        sub_4890( ref uParam0, -905.43880000, 908.73140000, 12.59760000, 0.74970000 );
        break;
        case 32:
        sub_4890( ref uParam0, 341.41760000, -454.50700000, 3.60780000, 0.74970000 );
        break;
    }
    return;
}

void sub_36523(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_34957( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU0._fU4;
        iVar8 = sub_35476( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU0._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_1722( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U5 );
        if ((NOT g_U13391[uParam0]._fU0._fU72) || (NOT g_U32896._fU4))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U6 );
        if (l_U31)
        {
            FLASH_BLIP( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U31 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U31 = 1;
        }
        sub_36129( g_U13391[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_37281(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
        }
    }
    g_U13391[uParam0]._fU80._fU0 = 0;
    g_U13391[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU80._fU24, "", 32 );
    g_U13391[uParam0]._fU80._fU56 = 10;
    g_U13391[uParam0]._fU80._fU60 = nil;
    g_U13391[uParam0]._fU80._fU64 = nil;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U13391[uParam0]._fU80._fU72 = 1;
    g_U13391[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_37569(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU80._fU24 );
        sub_37281( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU0._fU24 );
    sub_37707( uParam0, 0 );;
    sub_34900( uParam0 );
    return;
}

void sub_37707(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
        }
    }
    g_U13391[uParam0]._fU0._fU0 = 0;
    g_U13391[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU0._fU24, "", 32 );
    g_U13391[uParam0]._fU0._fU56 = 10;
    g_U13391[uParam0]._fU0._fU60 = nil;
    g_U13391[uParam0]._fU0._fU64 = nil;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U13391[uParam0]._fU0._fU72 = 1;
    g_U13391[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_38018(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U13391[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U13391[iParam0]._fU80._fU60 );
        }
        sub_37281( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U13391[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U13391[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U13391[iParam0]._fU0._fU56;
    if ((iVar5 == 6) || (iVar5 == 5))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U10981[iParam0]._fU28 = 1;
    }
    sub_37707( iParam0, 0 );
    if (bVar4)
    {
        sub_38227();
    }
    g_U10981[iParam0]._fU12 = 0;;
    if (iParam0 == 23)
    {
        sub_38283();
        return;
    }
    sub_34900( iParam0 );
    if (bVar4)
    {
        g_U10978 = 0;
    }
    if (bVar4)
    {
        sub_38918( iParam0 );
    }
    if (g_U2)
    {
        if (g_U3)
        {
            WAIT( 1500 );
            g_U4 = 1;
        }
    }
    return;
}

void sub_38227()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_38283()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_4359() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4151() ))
        {
            if (NOT (g_U15936._fU24 == -1))
            {
                uVar3 = g_U32697[g_U15936._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_4151(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15936._fU24;
    sub_38395();
    if (bVar2)
    {
        g_U15936._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4151(), ref g_U15936._fU32 );
        g_U15936._fU24 = uVar4;
    }
    l_U30 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_4359(), 0 );
    sub_38548();
    if (IS_PLAYER_PLAYING( sub_4359() ))
    {
        SET_PLAYER_CONTROL( sub_4359(), 1 );
    }
    return;
}

void sub_38395()
{
    g_U15936._fU0 = 0;
    g_U15936._fU4 = 0;
    g_U15936._fU8 = 0;
    g_U15936._fU12 = 0;
    g_U15936._fU16 = 0;
    g_U15936._fU20 = 0;
    g_U15936._fU24 = -1;
    g_U15936._fU32 = nil;
    g_U15936._fU28 = 0;
    return;
}

void sub_38548()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_4359() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_4151() ))
    {
        l_U30 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_4359(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_4151() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4151(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_4151(), -488123221 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_4151(), 837858166 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15936._fU20)
                {
                    bVar4 = true;
                }
                else
                {
                    bVar4 = false;
                }
            }
            else
            {
                bVar4 = true;
            }
        }
        else
        {
            bVar4 = true;
        }
    }
    else
    {
        bVar4 = true;
    }
    if (bVar4)
    {
        if (l_U30)
        {
            return;
        }
        l_U30 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_4359(), 1 );
    }
    else if (NOT l_U30)
    {
        return;
    }
    l_U30 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_4359(), 0 );;
    return;
}

void sub_38918(int iParam0)
{
    if (NOT (g_U26746 == iParam0))
    {
        return;
    }
    g_U26745 = 1;
    return;
}

void sub_39209(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U13391[uParam0]._fU160._fU0)
    {
        return;
    }
    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        g_U13391[uParam0]._fU160._fU0 = 0;
        return;
    }
    uVar3 = sub_1323( uParam0 );
    DESTROY_THREAD( g_U13391[uParam0]._fU160._fU104 );
    g_U13391[uParam0]._fU160._fU108._fU0 = 0;
    sub_39349( uParam0 );
    if (g_U13391[uParam0]._fU160._fU8)
    {
        g_U15946[uVar3]._fU8[0]._fU0[3] = 0;
    }
    return;
}

void sub_39349(unknown uParam0)
{
    g_U13391[uParam0]._fU160._fU0 = 0;
    g_U13391[uParam0]._fU160._fU4 = 0;
    g_U13391[uParam0]._fU160._fU8 = 0;
    StrCopy( ref g_U13391[uParam0]._fU160._fU12, "", 32 );
    StrCopy( ref g_U13391[uParam0]._fU160._fU44, "", 32 );
    g_U13391[uParam0]._fU160._fU76 = -1;
    g_U13391[uParam0]._fU160._fU80 = 0;
    g_U13391[uParam0]._fU160._fU84 = 0;
    g_U13391[uParam0]._fU160._fU88 = 0;
    g_U13391[uParam0]._fU160._fU92 = 0;
    g_U13391[uParam0]._fU160._fU96 = 0;
    g_U13391[uParam0]._fU160._fU100 = 0;
    g_U13391[uParam0]._fU160._fU104 = nil;
    g_U13391[uParam0]._fU160._fU108._fU0 = 0;
    g_U13391[uParam0]._fU160._fU108._fU4 = 59;
    g_U13391[uParam0]._fU160._fU108._fU12 = 0;
    g_U13391[uParam0]._fU160._fU108._fU16 = 0;
    g_U13391[uParam0]._fU160._fU108._fU20 = 0;
    return;
}

void sub_39847(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU0._fU0 = 0;
        sub_34900( uParam0 );
        sub_37707( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_37569( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_37569( uParam0, iVar4 );
        break;
        case 6:
        sub_37569( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_38018( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_1722( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_40221(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 1 );
        return;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 2 );
        return;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 3 );
        return;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 4 );
        return;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 5 );
        return;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    return;
}

void sub_40507()
{
    if (sub_40542( -133.01100000, 1494.87700000, 21.80150000, 180.00000000, l_U574 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U574 )))
        {
            SET_CHAR_HEALTH( l_U574, 1 );
        }
        sub_22381( 9, "PXDF_DDEAD", "PXDFAUD", 0 );
        sub_32308( l_U511 );
        sub_34489();
        l_U512 = -1;
        l_U567 = 1;
    }
    return;
}

int sub_40542(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    fVar11 = 0.00000000;
    fVar12 = 0.30000000;
    fVar13 = 0.50000000;
    switch (l_U671)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_4359(), 0 );
        DISPLAY_RADAR( 0 );
        if (DOES_BLIP_EXIST( l_U608 ))
        {
            REMOVE_BLIP( l_U608 );
        }
        if (DOES_BLIP_EXIST( l_U581 ))
        {
            REMOVE_BLIP( l_U581 );
        }
        CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 20.00000000, 1 );
        SET_CHAR_COORDINATES( sub_4151(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
        SET_CHAR_HEADING( sub_4151(), uParam3 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -249081380, 65404, 1494, 23, 1, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( uParam4 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4151(), -0.48000000 + 0.08000000, (3.20000000 - 0.32000000) + 0.37000000, -1.00010000, ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( uParam4 );
            SET_CHAR_COORDINATES( uParam4, uVar17._fU0, uVar17._fU4, uVar17._fU8 );
            GET_CHAR_HEADING( sub_4151(), ref uVar10 );
            SET_CHAR_HEADING( uParam4, uVar10 + 180.00000000 );
            SET_CHAR_PROOFS( uParam4, 1, 0, 0, 0, 0 );
            UNLOCK_RAGDOLL( uParam4, 0 );
        }
        TASK_PLAY_ANIM( sub_4151(), "player_execute_dwayne", "misspxdf", 1000.00000000, 0, 1, 1, 0, 0 );
        if (NOT (IS_CHAR_INJURED( uParam4 )))
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam4, "victim_dwayne", "misspxdf", 1000.00000000, 0, 0, 0, 1, 0 );
        }
        WAIT( 0 );
        WAIT( 0 );
        if (NOT (IS_CHAR_DEAD( l_U589[1] )))
        {
            SET_CHAR_COORDINATES( l_U589[1], -132.60330000, 1499.41000000, 22.77970000 );
            FREEZE_CHAR_POSITION( l_U589[1], 1 );
        }
        CREATE_CAM( 14, ref l_U675[0] );
        SET_CAM_POS( l_U675[0], -132.47040000, 1495.08300000, 23.73188000 );
        SET_CAM_ROT( l_U675[0], -13.75498000, 0.00000100, 159.43290000 );
        SET_CAM_FOV( l_U675[0], 30 );
        SET_CAM_ACTIVE( l_U675[0], 1 );
        SET_CAM_PROPAGATE( l_U675[0], 1 );
        CREATE_CAM( 14, ref l_U675[1] );
        SET_CAM_POS( l_U675[1], -134.69050000, 1492.68900000, 23.15046000 );
        SET_CAM_ROT( l_U675[1], 4.59900700, -5.25433300, -107.02420000 );
        SET_CAM_FOV( l_U675[1], 39.90000000 );
        SET_CAM_ACTIVE( l_U675[1], 0 );
        SET_CAM_PROPAGATE( l_U675[1], 0 );
        CREATE_CAM( 14, ref l_U675[2] );
        SET_CAM_POS( l_U675[2], -132.31670000, 1491.11800000, 23.40070000 );
        SET_CAM_ROT( l_U675[2], -0.23317000, 0.00000000, 39.18151000 );
        SET_CAM_FOV( l_U675[2], 33.00000000 );
        SET_CAM_ACTIVE( l_U675[2], 0 );
        SET_CAM_PROPAGATE( l_U675[2], 0 );
        CREATE_CAM( 14, ref l_U675[3] );
        SET_CAM_POS( l_U675[3], -131.32780000, 1490.20200000, 21.90854000 );
        SET_CAM_ROT( l_U675[3], 12.14273000, 0.00000000, 54.30762000 );
        SET_CAM_FOV( l_U675[3], 45 );
        SET_CAM_ACTIVE( l_U675[3], 0 );
        SET_CAM_PROPAGATE( l_U675[3], 0 );
        GET_GAME_TIMER( ref l_U672 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        l_U671 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U673 );
        if (l_U670 == 0)
        {
            l_U670 = 1;
            WAIT( 7000 );
            SET_CAM_ACTIVE( l_U675[1], 1 );
            SET_CAM_PROPAGATE( l_U675[1], 1 );
            SET_CAM_ACTIVE( l_U675[0], 0 );
            SET_CAM_PROPAGATE( l_U675[0], 0 );
            sub_28848( "PXDF_APPTMC", 3, 1, ref l_U664, 7, 0 );
        }
        if ((l_U670 == 1) AND ((l_U673 - l_U672) > 12500))
        {
            l_U670 = 2;
        }
        if ((l_U670 == 2) AND ((l_U673 - l_U672) > 17000))
        {
            l_U670 = 3;
            if (IS_CHAR_PLAYING_ANIM( sub_4151(), "misspxdf", "player_execute_dwayne" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_4151(), "misspxdf", "player_execute_dwayne", ref uVar7 );
                SET_CAM_ACTIVE( l_U675[2], 1 );
                SET_CAM_PROPAGATE( l_U675[2], 1 );
                SET_CAM_ACTIVE( l_U675[1], 0 );
                SET_CAM_PROPAGATE( l_U675[1], 0 );
                WAIT( 750 );
                if (NOT (IS_CHAR_DEAD( uParam4 )))
                {
                    GET_PED_BONE_POSITION( uParam4, 1205, 0.05000000, -0.10000000, 0.05000000, ref l_U533 );
                    FIRE_PED_WEAPON( l_U655, l_U533 );
                    if (NOT (# -NULL-0xc27bca()))
                    {
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_back_head", uParam4, 0.05000000 + l_U658._fU0, -0.10000000 + l_U658._fU4, 0.05000000 + l_U658._fU8, 140.00000000 + l_U661._fU0, 0.00000000 + l_U661._fU4, 0.00000000 + l_U661._fU8, 1205, 1 );
                    }
                }
                if (NOT (IS_CHAR_DEAD( uParam4 )))
                {
                    CLEAR_CHAR_TASKS( uParam4 );
                    UNLOCK_RAGDOLL( uParam4, 1 );
                    SET_CHAR_PROOFS( uParam4, 0, 0, 0, 0, 0 );
                    if (NOT (IS_CHAR_DEAD( uParam4 )))
                    {
                        STOP_PED_SPEAKING( uParam4, 1 );
                        DAMAGE_CHAR( uParam4, 2000, 0 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam4 );
                    }
                }
            }
        }
        if ((l_U670 == 3) AND ((l_U673 - l_U672) > 18500))
        {
            l_U670 = 4;
            SET_CAM_ACTIVE( l_U675[3], 1 );
            SET_CAM_PROPAGATE( l_U675[3], 1 );
            SET_CAM_ACTIVE( l_U675[2], 0 );
            SET_CAM_PROPAGATE( l_U675[2], 0 );
            GET_GAME_TIMER( ref l_U672 );
            l_U671 = 2;
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U672 );
        l_U671 = 3;
        break;
        case 3:
        GET_GAME_TIMER( ref l_U673 );
        if ((l_U673 - l_U672) > 3250)
        {
            SET_CAM_ACTIVE( l_U675[0], 0 );
            SET_CAM_PROPAGATE( l_U675[0], 0 );
            SET_CAM_ACTIVE( l_U675[3], 0 );
            SET_CAM_PROPAGATE( l_U675[3], 0 );
            DESTROY_CAM( l_U675[0] );
            DESTROY_CAM( l_U675[3] );
            if (NOT (IS_CHAR_DEAD( uParam4 )))
            {
                SET_CHAR_PROOFS( uParam4, 0, 0, 0, 0, 0 );
            }
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U655 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL( sub_4359(), 1 );
            DISPLAY_RADAR( 1 );
            SET_TIME_SCALE( 1.00000000 );
            l_U671 = 4;
        }
        break;
        case 4:
        if (NOT (IS_CHAR_DEAD( uParam4 )))
        {
            DAMAGE_CHAR( uParam4, 2000, 0 );
        }
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -249081380, 65404, 1494, 23, 0, 0.00000000 );
        if (NOT (IS_CHAR_INJURED( l_U589[1] )))
        {
            FREEZE_CHAR_POSITION( l_U589[1], 0 );
            TASK_COMBAT( l_U589[1], l_U655 );
        }
        return 1;
        break;
    }
    return 0;
}

void sub_43032()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 59 );
    l_U565 = 0;
    sub_43057();
    return;
}

void sub_43057()
{
    sub_43066();
    return;
}

void sub_43066()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_43084();
    sub_43143( iVar2, iVar3, iVar4 );
    return;
}

void sub_43084()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_43143(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 9;
    sub_43176( iVar5, uParam0, uParam1, uParam2, "Contact_10" );
    return;
}

void sub_43176(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_43272( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_43272( ref cVar9 );
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
            sub_43272( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_43272( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_43272( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_43272( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_35476( iParam0, iVar7 );;;
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
                sub_44088( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_44088( 0, 4 );
            }
        }
    }
    if (NOT (sub_44177( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_4359(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_4359() );
    }
    sub_1866();
    bVar27 = true;
    uVar28 = sub_35476( iParam0, iVar7 );
    uVar29 = sub_1323( iParam0 );
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
                sub_53389( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_53819();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_53904( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_53961( iParam0 );
                sub_54000( 0 );
                sub_1764( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_54108();
        }
    }
    if (bParam2)
    {
        sub_53819();
        sub_54196();
        sub_54000( 0 );
    }
    if (bParam3)
    {
        sub_53819();
        sub_54236();
        sub_54000( 0 );
        sub_1764( uVar29, 0 );
    }
    sub_1210();
    return;
}

void sub_43272(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

void sub_44088(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_44177(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_44385( uParam1 );
        break;
        case 1:
        bVar8 = sub_46299( uParam1 );
        break;
        case 2:
        bVar8 = sub_46525( uParam1 );
        break;
        case 3:
        bVar8 = sub_46675( uParam1 );
        break;
        case 4:
        bVar8 = sub_46953( uParam1 );
        break;
        case 5:
        bVar8 = sub_47256( uParam1 );
        break;
        case 6:
        bVar8 = sub_47455( uParam1 );
        break;
        case 7:
        bVar8 = sub_47681( uParam1 );
        break;
        case 8:
        bVar8 = sub_47916( uParam1 );
        break;
        case 9:
        bVar8 = sub_48291( uParam1 );
        break;
        case 10:
        bVar8 = sub_48538( uParam1 );
        break;
        case 11:
        bVar8 = sub_48677( uParam1 );
        break;
        case 12:
        bVar8 = sub_48976( uParam1 );
        break;
        case 13:
        bVar8 = sub_49204( uParam1 );
        break;
        case 14:
        bVar8 = sub_49491( uParam1 );
        break;
        case 15:
        bVar8 = sub_49773( uParam1 );
        break;
        case 16:
        bVar8 = sub_50055( uParam1 );
        break;
        case 17:
        bVar8 = sub_50256( uParam1 );
        break;
        case 18:
        bVar8 = sub_50329( uParam1 );
        break;
        case 19:
        bVar8 = sub_50543( uParam1 );
        break;
        case 20:
        bVar8 = sub_50796( uParam1 );
        break;
        case 21:
        bVar8 = sub_51043( uParam1 );
        break;
        case 22:
        bVar8 = sub_51244( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_45904( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_35476( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_51567( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_44385(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_44664( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_44664( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_44664( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_44664( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_44664( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_44664( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_44664( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_44664( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_44664( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_44664( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_44664( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_44664( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_44664( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_44664( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_44664( iVar3, 0, 3, 1, 0, 0 );
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
        sub_44664( iVar3, 0, sub_45782(), sub_46048(), 0, 0 );
        break;
        default:
        sub_46207( "Friend 1", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Friend 1", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_44664(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_32308( uParam1 );
    sub_44685( uParam0, 0, uParam2 );
    sub_44685( uParam0, 1, uParam3 );
    sub_44685( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_43084();
    return;
}

void sub_44685(unknown uParam0, int iParam1, int iParam2)
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
        sub_44842( uParam0 );
    }
    return;
}

void sub_44842(unknown uParam0)
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

int sub_45782()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_45904( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_45904(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_46048()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_45904( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_46207(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_46299(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44664( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44664( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_46207( "Contact 2", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Contact 2", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46525(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_44664( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_46207( "Girl 3", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Girl 3", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46675(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_44664( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_44664( iVar3, 0, sub_45782(), sub_46048(), 0, 0 );
        break;
        default:
        sub_46207( "Friend 4", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Friend 4", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46953(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44664( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44664( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_44664( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_44664( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_44664( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_46207( "Contact 5", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Contact 5", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47256(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44664( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_46207( "Contact 7", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Contact 7", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47455(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44664( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44664( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_46207( "Contact 7b", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Contact 7b", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47681(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_44664( iVar3, 0, sub_45782(), sub_46048(), 0, 0 );
        break;
        default:
        sub_46207( "Friend 8", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Friend 8", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47916(unknown uParam0)
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
        sub_44664( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_44664( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_44664( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_44664( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_44664( iVar3, 0, sub_45782(), sub_46048(), 0, 0 );
        break;
        default:
        sub_46207( "Friend 9", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Friend 9", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48291(unknown uParam0)
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
        sub_44664( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_44664( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_44664( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_46207( "Contact 10", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_46207( "Contact 10", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48538(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_46207( "Girl 11", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Girl 11", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48677(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44664( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_44664( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_44664( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_44664( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_44664( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_46207( "Contact 12", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Contact 12", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48976(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44664( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44664( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_46207( "Contact 13", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Contact 13", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49204(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_44664( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_44664( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_44664( iVar3, 0, sub_45782(), sub_46048(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_46207( "Friend 15", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Friend 15", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49491(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44664( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44664( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_44664( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_44664( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_46207( "Contact 16", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Contact 16", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49773(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_44664( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_44664( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_44664( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_46207( "Contact 18", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Contact 18", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50055(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44664( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_46207( "Contact 19", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Contact 19", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50256(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_46207( "Girl 20", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50329(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44664( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_46207( "Contact 21", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Contact 21", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50543(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44664( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44664( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_44664( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_46207( "Contact 22", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Contact 22", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50796(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_44664( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44664( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_44664( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_44664( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_46207( "Contact 24", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Contact 24", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51043(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_44664( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_44664( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_44664( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_46207( "Contact 25", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_46207( "Contact 25", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51244(unknown uParam0)
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
        sub_44664( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_46207( "Girl 26", 1 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_46207( "Girl 26", 0 );
        sub_44664( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_51567(int iParam0, int iParam1)
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
    if (sub_51615( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_52346( iParam1 );
    }
    return;
}

int sub_51615(int iParam0, int iParam1)
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
            sub_51755( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_51755(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_51937( 0 );
    return;
}

void sub_51937(boolean bParam0)
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
        sub_52192();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_52192()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_52346(int iParam0)
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
        sub_52679( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_52679( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_52679( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_52679( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_52679( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_52679( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_52679( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_52679( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_52679( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_52679( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_52679( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_52679( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_52679( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_52679( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_52679( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_52679( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_52679( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_52679( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_52679( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_52679(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_53389(unknown uParam0, unknown uParam1)
{
    sub_53408( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_53408(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_53819()
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

int sub_53904(int iParam0, int iParam1)
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

void sub_53961(unknown uParam0)
{
    sub_1109();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_54000(unknown uParam0)
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

void sub_54108()
{
    sub_54117();
    return;
}

void sub_54117()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_54196()
{
    sub_54117();
    return;
}

void sub_54236()
{
    sub_54117();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_54356()
{
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_4359(), 150 );
        SAY_AMBIENT_SPEECH( l_U655, "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    l_U565 = 0;
    sub_54433();
    return;
}

void sub_54433()
{
    sub_54442();
    return;
}

void sub_54442()
{
    int iVar2;

    iVar2 = 9;
    sub_54456( iVar2 );
    sub_1857( iVar2 );
    return;
}

void sub_54456(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_4359(), 150 );
    CLEAR_HELP();
    sub_681( uParam0 );
    return;
}

