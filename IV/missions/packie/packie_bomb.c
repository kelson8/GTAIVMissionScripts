void main()
{
    float fVar2;
    boolean bVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    l_U0 = 150.00000000;
    l_U50 = 0;
    l_U59 = 0;
    l_U60 = 0;
    l_U61 = 0;
    l_U62 = 0;
    l_U63 = 0;
    l_U69 = {0.18400000, 0.08100000, -0.05300000};
    l_U72 = {1.41200000, 0.08500000, -0.21000000};
    l_U78 = {0.00000000, 0.00000000, 0.00000000};
    PRINTSTRING( "PACKIE BOMB - SCRIPT STARTED \n" );
    THIS_SCRIPT_SHOULD_BE_SAVED();
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "PACKIE BOMB - CLEANUP 1 \n" );
        sub_212();
    }
    g_U9179 = 0;
    l_U56 = {sub_897( g_U64919 )};
    if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
    {
        l_U85 = CREATE_WIDGET_GROUP( "Packie Bomb" );
        CREATE_WIDGET_GROUP( "For testing" );
        ADD_WIDGET_TOGGLE( "Recreate from current position", ref l_U59 );
        ADD_WIDGET_SLIDER( "Bomb Location", ref g_U64919, -1, 16, 1 );
        ADD_WIDGET_TOGGLE( "Recreate at preset location", ref l_U60 );
        ADD_WIDGET_FLOAT_SLIDER( "x", ref l_U56._fU0._fU0, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "y", ref l_U56._fU0._fU4, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "z", ref l_U56._fU0._fU8, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_TOGGLE( "Recreate at above coords", ref l_U61 );
        ADD_WIDGET_TOGGLE( "Warp player near bomb", ref l_U62 );
        END_WIDGET_GROUP();
        CREATE_WIDGET_GROUP( "Debug" );
        START_NEW_WIDGET_COMBO();
        ADD_TO_WIDGET_COMBO( "CREATION" );
        ADD_TO_WIDGET_COMBO( "FIRST_WAIT_TO_PICKUP" );
        ADD_TO_WIDGET_COMBO( "BOMB_PICKUP" );
        ADD_TO_WIDGET_COMBO( "WAIT_TO_DROP" );
        ADD_TO_WIDGET_COMBO( "WAIT_TO_DETONATE" );
        ADD_TO_WIDGET_COMBO( "DETONATION_CALL" );
        FINISH_WIDGET_COMBO( "iTaxiTriggerState", ref l_U65 );
        ADD_WIDGET_SLIDER( "iProgress", ref l_U66, 0, 99, 1 );
        ADD_WIDGET_FLOAT_SLIDER( "vAttachOffset.x", ref l_U69._fU0, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "vAttachOffset.y", ref l_U69._fU4, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "vAttachOffset.z", ref l_U69._fU8, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "vAttachRotation.x", ref l_U72._fU0, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "vAttachRotation.y", ref l_U72._fU4, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "vAttachRotation.z", ref l_U72._fU8, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "vCarAttachOffset.x", ref l_U75._fU0, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "vCarAttachOffset.y", ref l_U75._fU4, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "vCarAttachOffset.z", ref l_U75._fU8, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "vCarAttachRotation.x", ref l_U78._fU0, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "vCarAttachRotation.y", ref l_U78._fU4, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "vCarAttachRotation.z", ref l_U78._fU8, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_TOGGLE( "bBombAttachedToCar", ref l_U63 );
        END_WIDGET_GROUP();
        END_WIDGET_GROUP();
    }
    while (IS_PLAYER_PLAYING( sub_559() ))
    {
        if (l_U59)
        {
            sub_744();
            if (sub_1347())
            {
                l_U56 = {sub_897( -1 )};
            }
            sub_3400( 0 );
            l_U59 = 0;
        }
        if (l_U60)
        {
            sub_744();
            l_U56 = {sub_897( g_U64919 )};
            sub_3400( 0 );
            l_U60 = 0;
        }
        if (l_U61)
        {
            sub_744();
            sub_3400( 0 );
            l_U61 = 0;
        }
        if ((IS_KEYBOARD_KEY_JUST_PRESSED( 36 )) || (l_U62))
        {
            SET_CHAR_COORDINATES( sub_1398(), l_U56._fU0._fU0, l_U56._fU0._fU4, l_U56._fU0._fU8 );
            LOAD_SCENE( l_U56._fU0._fU0, l_U56._fU0._fU4, l_U56._fU0._fU8 );
            l_U62 = 0;
        }
        switch (l_U65)
        {
            case 0:
            switch (l_U66)
            {
                case 0:
                sub_744();
                CREATE_OBJECT( -1352125276, l_U56._fU0._fU0, l_U56._fU0._fU4, l_U56._fU0._fU8, ref l_U68, 1 );
                SET_OBJECT_HEALTH( l_U68, 1000.00000000 );
                SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U68, 1 );
                GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 360.00000000, ref fVar2 );
                SET_OBJECT_HEADING( l_U68, fVar2 );
                ADD_BLIP_FOR_OBJECT( l_U68, ref l_U55 );
                CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U55, "PK_BMB" );
                PRINT_NOW( "PK_M01", 7500, 1 );
                sub_3400( 1 );
                break;
                default:
            }
            break;
            case 1:
            switch (l_U66)
            {
                case 0:
                if (DOES_OBJECT_EXIST( l_U68 ))
                {
                    GET_OBJECT_COORDINATES( l_U68, ref l_U56._fU0._fU0, ref l_U56._fU0._fU4, ref l_U56._fU0._fU8 );
                    GET_OBJECT_HEALTH( l_U68, ref fVar2 );
                    if (fVar2 < 900.00000000)
                    {
                        ADD_EXPLOSION( l_U56._fU0._fU0, l_U56._fU0._fU4, l_U56._fU0._fU8, 0, 1056964608, 1, 0, 1065353216 );
                        REMOVE_BLIP( l_U55 );
                        DELETE_OBJECT( ref l_U68 );
                    }
                    bVar3 = false;
                    if (sub_4036())
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_1398(), l_U56._fU0._fU0, l_U56._fU0._fU4, l_U56._fU0._fU8, 0.70000000, 0.70000000, 2.00000000, 0 ))
                        {
                            bVar3 = true;
                        }
                    }
                    if (bVar3)
                    {
                        SHAKE_PAD( 0, 120, 100 );
                        if (DOES_OBJECT_EXIST( l_U68 ))
                        {
                            DELETE_OBJECT( ref l_U68 );
                        }
                        PRINT_HELP( "PK_H04" );
                        g_U9179 = 1;
                        REQUEST_MODEL( -1352125276 );
                        sub_3400( 3 );
                        break;
                    }
                    else
                    {
                        sub_279( 2, "PK_H01" );
                    }
                }
                else
                {
                    PRINTSTRING( "PACKIE BOMB - CLEANUP 2 \n" );
                    sub_212();
                }
                break;
                default:
            }
            break;
            case 3:
            if (l_U64)
            {
                if (DOES_OBJECT_EXIST( l_U68 ))
                {
                    if (sub_4379())
                    {
                        SET_OBJECT_VISIBLE( l_U68, 0 );
                    }
                    else
                    {
                        SET_OBJECT_VISIBLE( l_U68, 1 );
                    }
                }
            }
            switch (l_U66)
            {
                case 0:
                bVar3 = false;
                if (IS_PLAYER_PLAYING( sub_559() ))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_1398() )))
                    {
                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1398(), 0.00000000, 2.50000000, 0.00000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                        GET_RANDOM_CAR_BACK_BUMPER_IN_SPHERE( uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 0, 127, ref l_U84 );
                        if (DOES_VEHICLE_EXIST( l_U84 ))
                        {
                            if (sub_4641( l_U84 ))
                            {
                                GET_CAR_MODEL( l_U84, ref l_U67 );
                                if (IS_THIS_MODEL_A_CAR( l_U67 ))
                                {
                                    if (sub_4752( l_U84 ))
                                    {
                                        if (sub_4864( l_U84 ))
                                        {
                                            if (sub_5237( 2, 0 ))
                                            {
                                                GET_CAR_COORDINATES( l_U84, ref l_U81._fU0, ref l_U81._fU4, ref l_U81._fU8 );
                                                bVar3 = true;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((sub_5237( 2, 0 )) AND (bVar3))
                {
                    if (sub_5505( 2, "PK_H05", 0 ))
                    {
                        REQUEST_MODEL( -1352125276 );
                        TASK_SWAP_WEAPON( sub_1398(), 0 );
                        GET_PLAYER_TO_PLACE_BOMB_IN_CAR( l_U84 );
                        SETTIMERA( 0 );
                        l_U66++;
                    }
                }
                else
                {
                    sub_279( 2, "PK_H05" );
                }
                break;
                case 1:
                if (GET_IS_DEPOSIT_ANIM_RUNNING())
                {
                    if (NOT l_U64)
                    {
                        if (IS_PLAYER_PLAYING( sub_559() ))
                        {
                            GET_CHAR_COORDINATES( sub_1398(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            CREATE_OBJECT( -1352125276, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref l_U68, 1 );
                            SET_OBJECT_HEALTH( l_U68, 1000.00000000 );
                            SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U68, 1 );
                            SET_OBJECT_COLLISION( l_U68, 0 );
                            ATTACH_OBJECT_TO_PED( l_U68, sub_1398(), 1232, l_U69, l_U72, 0 );
                        }
                    }
                    if (DOES_VEHICLE_EXIST( l_U84 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U84 )))
                        {
                            FREEZE_CAR_POSITION( l_U84, 1 );
                        }
                    }
                    SETTIMERA( 0 );
                    l_U63 = 0;
                    l_U66++;
                }
                else if (TIMERA() > 10000)
                {
                    if (IS_PLAYER_PLAYING( sub_559() ))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1398() );
                    }
                    l_U66 = 0;
                }
                if (NOT (IS_CAR_DEAD( l_U84 )))
                {
                    if (NOT (LOCATE_CAR_3D( l_U84, l_U81._fU0, l_U81._fU4, l_U81._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
                    {
                        if (IS_PLAYER_PLAYING( sub_559() ))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1398() );
                        }
                        l_U66 = 0;
                    }
                }
                else if (IS_PLAYER_PLAYING( sub_559() ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1398() );
                }
                l_U66 = 0;;
                if (sub_6655())
                {
                    if (IS_PLAYER_PLAYING( sub_559() ))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1398() );
                    }
                    l_U66 = 0;
                }
                break;
                case 2:
                if (NOT GET_IS_DEPOSIT_ANIM_RUNNING())
                {
                    if ((l_U63) AND (NOT GET_TASK_PLACE_CAR_BOMB_UNSUCCESSFUL()))
                    {
                        if (NOT (IS_CAR_DEAD( l_U84 )))
                        {
                            FREEZE_CAR_POSITION( l_U84, 0 );
                        }
                        g_U15946[13]._fU8[0]._fU0[1] = 1;
                        sub_7486( 13 );
                        PRINT_HELP( "PK_H02" );
                        sub_279( 2, "PK_H05" );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -1352125276 );
                        sub_3400( 4 );
                        l_U66++;
                    }
                    else if (DOES_OBJECT_EXIST( l_U68 ))
                    {
                        DELETE_OBJECT( ref l_U68 );
                    }
                    if (DOES_VEHICLE_EXIST( l_U84 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U84 )))
                        {
                            FREEZE_CAR_POSITION( l_U84, 0 );
                        }
                    }
                    l_U66 = 0;;
                }
                else if (NOT (DOES_OBJECT_EXIST( l_U68 )))
                {
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1398(), 0.00000000, 0.00000000, 10.00000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                    CREATE_OBJECT( -1352125276, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref l_U68, 1 );
                    SET_OBJECT_COLLISION( l_U68, 0 );
                    SET_OBJECT_VISIBLE( l_U68, 1 );
                    SET_OBJECT_ALPHA( l_U68, 255 );
                    ATTACH_OBJECT_TO_PED( l_U68, sub_1398(), 1232, l_U69, l_U72, 0 );
                }
                SET_OBJECT_VISIBLE( l_U68, 1 );
                if (NOT l_U63)
                {
                    bVar3 = false;
                    if (IS_CHAR_PLAYING_ANIM( sub_1398(), "car_bomb", "car_set_bomb" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_1398(), "car_bomb", "car_set_bomb", ref fVar2 );
                        if (fVar2 > 0.57000000)
                        {
                            bVar3 = true;
                        }
                    }
                    if (bVar3)
                    {
                        DETACH_OBJECT( l_U68, 1 );
                        sub_8019( l_U84, ref l_U75, ref l_U78 );
                        ATTACH_OBJECT_TO_CAR( l_U68, l_U84, 0, l_U75, l_U78 );
                        SET_OBJECT_VISIBLE( l_U68, 1 );
                        SET_OBJECT_COLLISION( l_U68, 1 );
                        l_U63 = 1;
                    }
                }
                break;
            }
            break;
            case 4:
            if (NOT sub_13581())
            {
                if (DOES_VEHICLE_EXIST( l_U84 ))
                {
                    if (IS_CAR_DEAD( l_U84 ))
                    {
                        PRINTSTRING( "PACKIE BOMB - CLEANUP 3 \n" );
                        sub_212();
                    }
                }
                if (g_U15946[13]._fU4)
                {
                    if (g_U15946[13]._fU8[1]._fU0[1])
                    {
                        if (sub_13857( "PHONE_DEAD", "", 1 ))
                        {
                            SETTIMERA( 0 );
                            sub_3400( 5 );
                        }
                    }
                }
                if (DOES_OBJECT_EXIST( l_U68 ))
                {
                    GET_OBJECT_HEALTH( l_U68, ref fVar2 );
                    if (fVar2 < 900.00000000)
                    {
                        sub_3400( 5 );
                    }
                }
            }
            break;
            case 5:
            if ((IS_PLAYER_CONTROL_ON( sub_559() )) AND (NOT sub_13581()))
            {
                bVar3 = false;
                if (DOES_OBJECT_EXIST( l_U68 ))
                {
                    GET_OBJECT_HEALTH( l_U68, ref fVar2 );
                    if (fVar2 < 1000.00000000)
                    {
                        bVar3 = true;
                    }
                }
                if ((TIMERA() > 10000) || (sub_18002() == 3))
                {
                    bVar3 = true;
                }
                if (bVar3)
                {
                    if (NOT g_U64929)
                    {
                        if (NOT (IS_CAR_DEAD( l_U84 )))
                        {
                            if (DOES_OBJECT_EXIST( l_U68 ))
                            {
                                GET_OBJECT_COORDINATES( l_U68, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                                DELETE_OBJECT( ref l_U68 );
                            }
                            APPLY_FORCE_TO_CAR( l_U84, 1, 0.00000000, 0.00000000, 7.50000000, l_U75, 0, 1, 1, 1 );
                            EXPLODE_CAR( l_U84, 1, 0 );
                        }
                    }
                    g_U9179 = 0;
                    g_U64928 = l_U84;
                    g_U15946[13]._fU4 = 0;
                    g_U15946[13]._fU8[1]._fU0[1] = 0;
                    PRINTSTRING( "PACKIE BOMB - CLEANUP 4 \n" );
                    sub_212();
                }
            }
            else
            {
                g_U15946[13]._fU8[0]._fU0[1] = 1;
                sub_7486( 13 );
                sub_3400( 4 );
            }
            break;
        }
        if (g_U64924)
        {
            PRINTSTRING( "PACKIE BOMB - CLEANUP 5 \n" );
            sub_212();
        }
        WAIT( 0 );
    }
    PRINTSTRING( "PACKIE BOMB - CLEANUP 6 \n" );
    sub_212();
    return;
}

void sub_212()
{
    if (DOES_VEHICLE_EXIST( l_U84 ))
    {
        if (NOT (IS_CAR_DEAD( l_U84 )))
        {
            FREEZE_CAR_POSITION( l_U84, 0 );
        }
    }
    sub_279( 2, "PK_H01" );
    sub_279( 2, "PK_H05" );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1352125276 );
    g_U15946[13]._fU8[0]._fU0[1] = 0;
    sub_700( 13 );
    sub_744();
    g_U64924 = 0;
    g_U9179 = 0;
    g_U64919 = -1;
    if (DOES_WIDGET_GROUP_EXIST( l_U85 ))
    {
        DELETE_WIDGET_GROUP( l_U85 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_279(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((l_U54) AND (g_U9172 == iParam0))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U54 = 0;
                if (l_U52)
                {
                    sub_506();
                    l_U52 = 0;
                }
            }
            if (l_U53)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_559(), 1 );
                l_U53 = 0;
            }
            if (l_U51)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U51 = 0;
            }
        }
    }
    return;
}

void sub_506()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_559()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_700(int iParam0)
{
    if (g_U91._fU72 == iParam0)
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_744()
{
    if (DOES_BLIP_EXIST( l_U55 ))
    {
        REMOVE_BLIP( l_U55 );
    }
    if (DOES_OBJECT_EXIST( l_U68 ))
    {
        DELETE_OBJECT( ref l_U68 );
    }
    return;
}

void sub_897(int iParam0)
{
    if (NOT l_U50)
    {
        sub_917();
    }
    if (iParam0 == -1)
    {
        if (NOT sub_1347())
        {
            g_U64919 = 0;
        }
    }
    else
    {
        g_U64919 = iParam0;
    }
    if ((g_U64919 >= 16) || (g_U64919 < 0))
    {
        g_U64919 = 0;
    }
    return l_U1[g_U64919];
}

void sub_917()
{
    l_U1[0]._fU0 = {1220.64900000, 37.39700000, 34.55670000};
    l_U1[1]._fU0 = {1082.27800000, -231.10910000, 21.69380000};
    l_U1[2]._fU0 = {1086.80000000, 855.95480000, 31.68420000};
    l_U1[3]._fU0 = {1852.95700000, 528.88980000, 27.71360000};
    l_U1[4]._fU0 = {1313.92400000, 1733.78000000, 14.41560000};
    l_U1[5]._fU0 = {454.76400000, 1815.95900000, 21.62930000};
    l_U1[6]._fU0 = {-99.35060000, 1580.10600000, 17.53020000};
    l_U1[7]._fU0 = {-269.67870000, 1091.81300000, 7.59000000};
    l_U1[8]._fU0 = {-257.55070000, 603.82620000, 13.81520000};
    l_U1[9]._fU0 = {-490.96090000, -90.38910000, 6.84240000};
    l_U1[10]._fU0 = {112.68110000, -207.09040000, 13.91790000};
    l_U1[11]._fU0 = {-16.27910000, -907.56730000, 4.16440000};
    l_U1[12]._fU0 = {-1453.93800000, -250.30910000, 1.86880000};
    l_U1[13]._fU0 = {-1733.62400000, 361.21480000, 24.44370000};
    l_U1[14]._fU0 = {-1276.92300000, 826.39620000, 18.56500000};
    l_U1[15]._fU0 = {-1034.85300000, 1420.33700000, 24.66210000};
    l_U50 = 1;
    return;
}

int sub_1347()
{
    int I;
    int iVar3;
    int J;
    int iVar5;
    int[5] iVar6;
    float[5] fVar12;
    int iVar18;
    float fVar19;
    vector vVar20;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    int iVar26;

    if (NOT l_U50)
    {
        sub_917();
    }
    array(ref iVar6, 5);
    array(ref fVar12, 5);
    if (IS_PLAYER_PLAYING( sub_559() ))
    {
        GET_CHAR_COORDINATES( sub_1398(), ref vVar20.x, ref vVar20.y, ref vVar20.z );
        iVar26 = GET_MAP_AREA_FROM_COORDS( vVar20 );
    }
    else
    {
        return 0;
    }
    for ( I = 0; I < 5; I++ )
    {
        iVar6[I] = -1;
        fVar12[I] = 1E8;
    }
    iVar18 = -1;
    fVar19 = 1E8;
    for ( I = 0; I < 16; I++ )
    {
        if ((GET_MAP_AREA_FROM_COORDS( l_U1[I]._fU0 )) == iVar26)
        {
            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( l_U1[I]._fU0._fU0, l_U1[I]._fU0._fU4, l_U1[I]._fU0._fU8, 5.00000000, 5.00000000, 5.00000000 )))
            {
                uVar23 = {l_U1[I]._fU0 - vVar20};
                for ( iVar3 = 0; iVar3 < 5; iVar3++ )
                {
                    if ((VMAG( uVar23 )) < fVar12[iVar3])
                    {
                        for ( J = 0; J < 5; J++ )
                        {
                            iVar5 = 5 - (J + 1);
                            if ((iVar5 > 0) AND (iVar5 > iVar3))
                            {
                                iVar6[iVar5] = iVar6[iVar5 - 1];
                                fVar12[iVar5] = fVar12[iVar5 - 1];
                            }
                        }
                        iVar6[iVar3] = I;
                        fVar12[iVar3] = VMAG( uVar23 );
                        iVar3 = 5;
                    }
                }
            }
        }
    }
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (iVar6[I] == -1))
        {
            if (fVar12[I] > l_U0)
            {
                if (fVar12[I] < fVar19)
                {
                    iVar18 = iVar6[I];
                    fVar19 = fVar12[I];
                }
            }
        }
    }
    if (iVar18 == -1)
    {
        for ( I = 0; I < 5; I++ )
        {
            if (NOT (iVar6[I] == -1))
            {
                iVar18 = iVar6[I];
                fVar19 = fVar12[I];
            }
        }
    }
    if (NOT (iVar18 == -1))
    {
        g_U64919 = iVar18;
        return 1;
        break;
    }
    return 0;
}

void sub_1398()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3400(unknown uParam0)
{
    l_U66 = 0;
    l_U65 = uParam0;
    return;
}

void sub_4036()
{
    return sub_4047( 0, 0 );
}

int sub_4047(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((g_U555 != 9) AND (uParam1))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

int sub_4379()
{
    int iVar2;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 1;
    }
    GET_CURRENT_CHAR_WEAPON( sub_1398(), ref iVar2 );
    if (NOT (iVar2 == 0))
    {
        return 1;
    }
    return 0;
}

int sub_4641(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 < 0.30000000)
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

int sub_4752(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_ROLL( uParam0, ref fVar3 );
        if ((fVar3 > -45.00000000) AND (fVar3 < 45.00000000))
        {
            GET_CAR_PITCH( uParam0, ref fVar3 );
            if ((fVar3 > -45.00000000) AND (fVar3 < 45.00000000))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_4864(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    unknown uVar5;
    float fVar6;
    float fVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_COORDINATES( uParam0, ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
        if (GET_GROUND_Z_FOR_3D_COORD( uVar14._fU0, uVar14._fU4, uVar14._fU8, ref uVar5 ))
        {
            fVar6 = uVar14._fU8 - uVar5;
        }
        else
        {
            fVar6 = 0.50000000;
        }
        GET_CAR_MODEL( uParam0, ref uVar3 );
        GET_MODEL_DIMENSIONS( uVar3, ref uVar8, ref uVar11 );
        fVar4 = uVar11._fU4 - uVar8._fU4;
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, (fVar4 * 0.50000000) * -1.00000000, 0.00000000, ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, ((fVar4 * 0.50000000) * -1.00000000) - 0.75000000, 0.00000000, ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
        if (GET_GROUND_Z_FOR_3D_COORD( uVar14._fU0, uVar14._fU4, uVar14._fU8, ref uVar5 ))
        {
            fVar7 = uVar14._fU8 - uVar5;
            if (fVar7 < 0.00000000)
            {
                fVar7 *= -1.00000000;
            }
            fVar7 -= fVar6;
            if (fVar7 < 0.00000000)
            {
                fVar7 *= -1.00000000;
            }
            if (fVar7 > 0.50000000)
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

int sub_5237(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_559() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_559() )))
            {
                if (((g_U9202) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_559() )))))
                {
                    if (NOT sub_5333())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1398() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_4036())
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

int sub_5333()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_5505(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_5237( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U53)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_559(), 0 );
                l_U53 = 1;
            }
            g_U9172 = uParam0;
            l_U54 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_5786();
                l_U52 = 1;
                g_U9173 = 6;
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
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U51 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U51)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U51 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_5786()
{
    return sub_4047( 1, 1 );
}

int sub_6655()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;
    int iVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    vector vVar14;
    unknown uVar17;
    vector vVar18;
    unknown uVar21;
    float fVar22;

    GET_GAME_CAM( ref uVar5 );
    GET_CAM_ROT( uVar5, ref uVar2._fU0, ref uVar2._fU4, ref uVar6 );
    vVar7 = {0.00000000, 1.00000000, 0.00000000};
    vVar7 = {sub_6721( vVar7, 0.00000000, 0.00000000, uVar6 )};
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar10, ref iVar11, ref uVar12, ref uVar13 );
    if ((iVar11 == 0) AND (iVar10 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar10, ref iVar11 );
    }
    uVar2._fU0 = iVar10 / 128.00000000;
    uVar2._fU4 = iVar11 / -128.00000000;
    uVar2._fU8 = 0.00000000;
    if ((VMAG( uVar2 )) < 0.50000000)
    {
        return 0;
    }
    GET_HEADING_FROM_VECTOR_2D( uVar2._fU0, uVar2._fU4, ref uVar17 );
    vVar14 = {0.00000000, 1.00000000, 0.00000000};
    vVar14 = {sub_6721( vVar14, 0.00000000, 0.00000000, uVar6 )};
    vVar14 = {sub_6721( vVar14, 0.00000000, 0.00000000, uVar17 )};
    if (IS_PLAYER_PLAYING( sub_559() ))
    {
        GET_CHAR_HEADING( sub_1398(), ref uVar21 );
        vVar18 = {0.00000000, 1.00000000, 0.00000000};
        vVar18 = {sub_6721( vVar18, 0.00000000, 0.00000000, uVar21 )};
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( vVar18.x, vVar18.y, vVar14.x, vVar14.y, ref fVar22 );
    if (fVar22 > 60.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_6721(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown Result;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    Result = {uParam0};
    uVar8 = COS( uParam3._fU0 );
    uVar9 = SIN( uParam3._fU0 );
    uVar13._fU0 = uParam0._fU0;
    uVar13._fU4 = (uVar8 * Result._fU4) - (uVar9 * Result._fU8);
    uVar13._fU8 = (uVar9 * Result._fU4) + (uVar8 * Result._fU8);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU4 );
    uVar9 = SIN( uParam3._fU4 );
    uVar13._fU0 = (uVar8 * Result._fU0) + (uVar9 * Result._fU8);
    uVar13._fU4 = uParam0._fU4;
    uVar13._fU8 = (uVar8 * Result._fU8) - (uVar9 * Result._fU0);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU8 );
    uVar9 = SIN( uParam3._fU8 );
    uVar13._fU0 = (uVar8 * Result._fU0) - (uVar9 * Result._fU4);
    uVar13._fU4 = (uVar9 * Result._fU0) + (uVar8 * Result._fU4);
    uVar13._fU8 = uParam0._fU8;
    Result = {uVar13};
    return Result;
}

void sub_7486(unknown uParam0)
{
    if (g_U15946[uParam0]._fU132._fU0)
    {
        g_U91._fU72 = uParam0;
    }
    else
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_8019(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            GET_CAR_MODEL( uParam0, ref uVar5 );
            switch (uVar5)
            {
                case 1264341792:
                (uParam1^) = {0.13250000, -2.68750000, -0.37000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1560980623:
                (uParam1^) = {0.13250000, -1.26500000, -0.25000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1171614426:
                (uParam1^) = {0.13250000, -4.02000000, -0.42000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -1041692462:
                (uParam1^) = {0.13250000, -2.25000000, -0.26500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 2053223216:
                (uParam1^) = {0.13250000, -5.25000000, -0.65000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 850991848:
                (uParam1^) = {0.13250000, -3.67000000, -0.68000000};
                (uParam2^) = {-1.55250000, 3.14000000, 0.00000000};
                break;
                case -344943009:
                (uParam1^) = {0.13250000, -1.90250000, -0.17250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1075851868:
                (uParam1^) = {0.13250000, -2.37250000, -0.35750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -1987130134:
                (uParam1^) = {0.13250000, -3.62750000, -0.60500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -682211828:
                (uParam1^) = {0.25500000, -2.67750000, -0.43500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -1346687836:
                (uParam1^) = {0.13250000, -2.67750000, -0.46250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -907477130:
                (uParam1^) = {0.13250000, -2.67750000, -0.46250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -713569950:
                (uParam1^) = {0.13250000, -6.27500000, -0.68750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1884962369:
                (uParam1^) = {0.13250000, -2.35250000, -0.47500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 2006918058:
                (uParam1^) = {0.13250000, -2.56750000, -0.33250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -67282078:
                (uParam1^) = {0.13250000, -2.02250000, -0.08000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -2030171296:
                (uParam1^) = {0.13250000, -2.99500000, -0.28000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1063483177:
                (uParam1^) = {0.13250000, -1.95750000, -0.28750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 108773431:
                (uParam1^) = {0.13250000, -1.91750000, -0.13500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 162883121:
                (uParam1^) = {0.13250000, -2.33000000, -0.17250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -1130810103:
                (uParam1^) = {0.13250000, -1.94000000, -0.21000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 723973206:
                (uParam1^) = {0.13250000, -2.70500000, -0.12250000};
                (uParam2^) = {0.22000000, 3.14000000, 0.00000000};
                break;
                case -1971955454:
                (uParam1^) = {0.13250000, -2.65750000, -0.27250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -685276541:
                case -1883002148:
                (uParam1^) = {0.13250000, -2.65750000, -0.22500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -276900515:
                (uParam1^) = {0.13250000, -2.36000000, -0.17500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -2119578145:
                (uParam1^) = {0.13250000, -2.43000000, -0.08000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1127131465:
                (uParam1^) = {0.13250000, -2.31500000, -0.29000000};
                (uParam2^) = {0.13000000, 3.14000000, 0.00000000};
                break;
                case -1097828879:
                (uParam1^) = {0.13250000, -2.08250000, -0.29750000};
                (uParam2^) = {0.03500000, 3.14000000, 0.00000000};
                break;
                case 974744810:
                (uParam1^) = {0.13250000, -2.38250000, -0.05500000};
                (uParam2^) = {0.13500000, 3.14000000, 0.00000000};
                break;
                case 1938952078:
                (uParam1^) = {0.13250000, -3.84750000, -0.59000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1353720154:
                (uParam1^) = {0.13250000, -4.59000000, 0.01250000};
                (uParam2^) = {-1.50500000, 3.14000000, 0.00000000};
                break;
                case 627033353:
                (uParam1^) = {0.13250000, -2.10000000, -0.36750000};
                (uParam2^) = {0.19750000, 3.14000000, 0.00000000};
                break;
                case 1491375716:
                (uParam1^) = {0.13250000, -1.04000000, -0.30500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 2016857647:
                (uParam1^) = {0.08500000, -1.78250000, -0.23800000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 675415136:
                (uParam1^) = {0.13500000, -2.92000000, -0.36000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 884422927:
                (uParam1^) = {0.13500000, -2.14500000, -0.36250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -341892653:
                (uParam1^) = {0.13500000, -2.21250000, -0.08500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 486987393:
                (uParam1^) = {0.13500000, -2.23000000, -0.21750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 418536135:
                (uParam1^) = {0.13500000, -1.85250000, -0.13500000};
                (uParam2^) = {0.47500000, 3.14000000, 0.00000000};
                break;
                case -1289722222:
                (uParam1^) = {0.13500000, -2.15250000, -0.36000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 886934177:
                (uParam1^) = {0.13500000, -2.15250000, -0.24250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1269098716:
                (uParam1^) = {0.13500000, -2.65000000, -0.11500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -37030056:
                (uParam1^) = {0.13500000, -2.12250000, -0.11500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -2124201592:
                (uParam1^) = {0.13500000, -2.50500000, -0.22000000};
                (uParam2^) = {0.06000000, 3.14000000, 0.00000000};
                break;
                case 1304597482:
                (uParam1^) = {0.13500000, -2.53250000, -0.15000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -1260881538:
                (uParam1^) = {0.13500000, -2.26250000, -0.32500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -310465116:
                (uParam1^) = {0.13500000, -2.27500000, -0.46500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 525509695:
                (uParam1^) = {0.13500000, -2.33250000, -0.26000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 583100975:
                (uParam1^) = {0.13500000, -2.78500000, -0.23250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 904750859:
                (uParam1^) = {0.13500000, -3.68750000, -0.86500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 148777611:
                (uParam1^) = {0.13500000, -2.62750000, -0.28250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1911513875:
                (uParam1^) = {0.13500000, -3.69750000, -0.22250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1348744438:
                (uParam1^) = {0.13500000, -2.34250000, -0.48500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 569305213:
                (uParam1^) = {0.13500000, -3.73250000, -0.65250000};
                (uParam2^) = {-1.58750000, 3.14000000, 0.00000000};
                break;
                case -808457413:
                (uParam1^) = {0.13500000, -2.22750000, -0.12500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -2077743597:
                (uParam1^) = {0.13500000, -2.30750000, -0.20500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -1590284256:
                (uParam1^) = {0.13500000, -2.30750000, -0.20500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1830407356:
                (uParam1^) = {0.13500000, -2.53750000, -0.10750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -2137348917:
                (uParam1^) = {0.13500000, -4.43250000, -0.45000000};
                (uParam2^) = {-1.57250000, 3.14000000, 0.00000000};
                break;
                case 131140572:
                (uParam1^) = {0.13500000, -2.20000000, -0.27000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1376298265:
                (uParam1^) = {0.13500000, -2.20000000, -0.23750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 2046537925:
                (uParam1^) = {0.13500000, -2.58250000, -0.28750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -1627000575:
                (uParam1^) = {0.13500000, -2.29750000, -0.30750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -350085182:
                (uParam1^) = {0.13500000, -2.29750000, -0.13250000};
                (uParam2^) = {0.44000000, 3.14000000, 0.00000000};
                break;
                case -119658072:
                (uParam1^) = {0.13500000, -2.45000000, -0.43250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -1883869285:
                (uParam1^) = {0.13500000, -2.01500000, -0.17250000};
                (uParam2^) = {0.17750000, 3.14000000, 0.00000000};
                break;
                case -1962071130:
                (uParam1^) = {0.13500000, -2.25250000, -0.26500000};
                (uParam2^) = {0.13750000, 3.14000000, 0.00000000};
                break;
                case -1150599089:
                (uParam1^) = {0.13500000, -2.25250000, -0.26500000};
                (uParam2^) = {0.13750000, 3.14000000, 0.00000000};
                break;
                case -1900572838:
                (uParam1^) = {0.13500000, -3.71000000, -0.22250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1390084576:
                (uParam1^) = {0.13500000, -2.12750000, -0.07000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 83136452:
                (uParam1^) = {0.13500000, -2.01500000, -0.29000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -845979911:
                (uParam1^) = {0.13500000, -3.65750000, -0.76000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 627094268:
                (uParam1^) = {-0.03500000, -2.73500000, -0.24750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -1932515764:
                (uParam1^) = {0.13500000, -2.21250000, -0.22000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -227741703:
                (uParam1^) = {0.13500000, -2.18750000, -0.37500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -449022887:
                case 1264386590:
                (uParam1^) = {0.13500000, -2.28250000, -0.10500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -1685021548:
                (uParam1^) = {0.13500000, -2.28250000, -0.06750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -322343873:
                (uParam1^) = {0.13500000, -2.40750000, -0.15750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1349725314:
                (uParam1^) = {0.13500000, -1.87750000, -0.41000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1344573448:
                (uParam1^) = {0.13500000, -2.21500000, -0.04250000};
                (uParam2^) = {0.14250000, 3.14000000, 0.00000000};
                break;
                case -810318068:
                (uParam1^) = {0.13500000, -2.47750000, -0.33250000};
                (uParam2^) = {0.09750000, 3.14000000, 0.00000000};
                break;
                case 1923400478:
                (uParam1^) = {0.13500000, -2.34500000, -0.10750000};
                (uParam2^) = {0.09750000, 3.14000000, 0.00000000};
                break;
                case 1677715180:
                (uParam1^) = {0.13500000, -3.91500000, -0.10750000};
                (uParam2^) = {-1.54250000, 3.14000000, 0.00000000};
                break;
                case 1747439474:
                (uParam1^) = {0.13500000, -3.65750000, -0.22250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1723137093:
                (uParam1^) = {0.13500000, -2.34000000, -0.10000000};
                (uParam2^) = {-0.10250000, 3.14000000, 0.00000000};
                break;
                case -1961627517:
                (uParam1^) = {0.13500000, -3.92500000, -0.24000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 970598228:
                (uParam1^) = {0.13500000, -2.08750000, -0.06750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -295689028:
                (uParam1^) = {0.21750000, -2.08750000, -0.06750000};
                (uParam2^) = {0.19250000, 3.14000000, 0.00000000};
                break;
                case 1821991593:
                (uParam1^) = {0.13500000, -1.97250000, -0.24750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -956048545:
                (uParam1^) = {0.13500000, -2.59000000, -0.28500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1208856469:
                (uParam1^) = {0.13500000, -2.29000000, -0.30750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1917016601:
                (uParam1^) = {0.13500000, -4.77500000, -0.41250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -1896659641:
                (uParam1^) = {0.13500000, -1.62250000, -0.30500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1534326199:
                (uParam1^) = {0.13500000, -2.05250000, -0.11500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -825837129:
                case -1758379524:
                (uParam1^) = {0.13500000, -1.81250000, -0.36750000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -583281407:
                (uParam1^) = {0.13500000, -2.15000000, -0.40000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -498054846:
                (uParam1^) = {0.13500000, -2.44750000, 0.04000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 2006667053:
                (uParam1^) = {0.13500000, -2.61000000, -0.28250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1777363799:
                (uParam1^) = {0.13500000, -2.48500000, -0.27500000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case 1937616578:
                (uParam1^) = {0.13500000, -2.31750000, -0.05250000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                case -1099960214:
                (uParam1^) = {0.13500000, -4.53000000, -0.52000000};
                (uParam2^) = {0.00000000, 3.14000000, 0.00000000};
                break;
                default:
                (uParam1^) = {0.00000000, 0.00000000, 0.00000000};
                (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
                break;
            }
        }
    }
    return;
}

int sub_13581()
{
    if (NOT (IS_PLAYER_CONTROL_ON( sub_559() )))
    {
        if ((sub_13615()) AND (ARE_WIDESCREEN_BORDERS_ACTIVE()))
        {
            return 1;
        }
        if (HAS_CUTSCENE_LOADED())
        {
            if (NOT HAS_CUTSCENE_FINISHED())
            {
                return 1;
            }
        }
        if (IS_SCREEN_FADED_OUT())
        {
            return 1;
        }
    }
    return 0;
}

int sub_13615()
{
    if ((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( 6, 1, 1 )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_13857(unknown uParam0, unknown uParam1, boolean bParam2)
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
            return sub_13965( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U91._fU368) == 1)
        {
            StrCopy( ref g_U91._fU224[0], uParam1, 16 );
            StrCopy( ref g_U91._fU224[1], uParam0, 16 );
            sub_15864( uVar23, ref g_U91._fU176 );
            g_U91._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_13965(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_14035( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_14035( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_559() )))
    {
        sub_14035( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1398() ))) AND (IS_CHAR_IN_ANY_CAR( sub_1398() )))
    {
        sub_14035( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_14035( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_14492()))
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
                sub_14035( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_14492()))
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
    sub_15864( uParam0, ref g_U91._fU176 );
    sub_17245( ref g_U91._fU160 );
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
        sub_17485( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_14035(unknown uParam0)
{
    return;
}

int sub_14492()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_14549())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_14549()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_559() )))
    {
        sub_14035( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_14035( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_14035( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_14035( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_559() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1398() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_1398(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_14035( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_1398() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_14035( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_14035( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_559() )))
    {
        sub_14035( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_15864(int iParam0, unknown uParam1)
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

void sub_17245(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_17485(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_18002()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

