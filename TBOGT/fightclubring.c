void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U105 = 0;
    l_U115 = {-385.75950000, 1492.44800000, 9.71039900};
    l_U151 = {-388.25960000, 1492.73400000, 9.71030100};
    l_U314 = {-386.34000000, 1481.91000000, 10.39330000};
    l_U317 = {-386.19000000, 1480.45000000, 12.25000000};
    l_U320 = {-387.79000000, 1481.24000000, 11.63000000};
    l_U323 = {-394.05000000, 1483.98000000, 9.69999900};
    l_U332 = {0.20000000, 0.20000000, 0.00000000};
    l_U335 = 270;
    l_U339 = 297.99950000;
    l_U340 = 340;
    l_U341 = 60;
    l_U342 = 150;
    l_U343 = "mini_fight";
    l_U344 = 52357603;
    l_U345 = -301223260;
    l_U346 = 1117105909;
    l_U347 = -1169721927;
    l_U348 = 648140560;
    l_U349 = -2065581610;
    l_U350 = "E2fightchamber";
    l_U351 = "amb@watch_melee";
    l_U352 = "missbrian_3";
    l_U412 = 0;
    l_U413 = 0;
    l_U414 = 0;
    l_U469 = 0;
    l_U635 = 0;
    l_U636 = 0;
    l_U637 = 2;
    l_U638 = 0;
    l_U639 = 2;
    l_U640 = 0;
    l_U641 = 2;
    l_U642 = 0;
    l_U646 = 0;
    l_U650 = 0;
    l_U652 = 0;
    l_U653 = 5;
    l_U657 = 0;
    l_U658 = 0;
    l_U659 = 5;
    l_U668 = 0;
    l_U669 = 0.00000000;
    l_U673 = 0.00000000;
    l_U674 = 0;
    l_U675 = 0;
    l_U676 = 0;
    l_U679 = 0;
    l_U680 = 1;
    l_U681 = 3;
    l_U683 = 0;
    l_U684 = 0;
    l_U685 = 0;
    l_U686 = 0;
    l_U687 = 1;
    l_U753 = 6;
    l_U791 = nil;
    l_U804 = nil;
    l_U822 = 1;
    l_U857 = nil;
    l_U877 = 1;
    l_U953 = 6;
    l_U962 = 0;
    l_U963 = 0;
    l_U964 = 0;
    l_U965 = 0;
    l_U966 = 0;
    l_U967 = 0;
    l_U968 = 0;
    l_U969 = 0;
    l_U970 = 0;
    l_U971 = 0;
    l_U972 = 1;
    l_U973 = 1;
    l_U974 = 0;
    l_U976 = {-394.19710000, 1482.38100000, 9.69050000};
    l_U979 = {-397.44160000, 1474.17100000, 9.96750000};
    l_U982 = {-384.35000000, 1480.52000000, 9.71030100};
    l_U986 = 0;
    l_U987 = 0;
    l_U988 = 0;
    l_U989 = 0;
    l_U990 = 0;
    l_U1006 = 0;
    l_U1007 = 178.92430000;
    l_U1008 = 326;
    l_U1009 = 0;
    l_U1012 = 0;
    l_U1013 = 0;
    l_U1014 = 0;
    l_U1015 = 1;
    l_U1016 = 0;
    l_U1017 = 0;
    l_U1019 = 0;
    l_U1020 = 0;
    l_U1089 = "E2fightstrs";
    l_U1112 = -1080673049;
    l_U1128 = {-396.53480000, 1461.72800000, 15.51680000};
    l_U1131 = 20.00510000;
    l_U1132 = 0;
    l_U1133 = 0;
    l_U1134 = 1;
    l_U1135 = 0;
    l_U1136 = 0;
    l_U1137 = 0;
    l_U1174 = 4000;
    l_U1175 = 0;
    l_U1176 = 0;
    l_U1215 = 15;
    l_U1216 = 7;
    l_U1217 = 0;
    l_U1218 = 0;
    l_U1219 = 0;
    l_U1222 = 0;
    l_U1223 = 0;
    l_U1224 = 0;
    l_U1225 = 0;
    l_U1226 = 0;
    l_U1227 = 2;
    l_U1364 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1082();
        g_U10484 = 1;
        sub_1192( 1 );
    }
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
    }
    if (IS_PLAYER_PLAYING( sub_1261() ))
    {
        SET_PLAYER_CONTROL( sub_1261(), 1 );
    }
    while (true)
    {
        WAIT( 0 );
        sub_2874();
        if (NOT (IS_CHAR_INJURED( sub_1354() )))
        {
            switch (l_U963)
            {
                case 0:
                if (GET_MISSION_FLAG() == 1)
                {
                    sub_1192( 0 );
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_1354(), l_U323._fU0, l_U323._fU4, l_U323._fU8, 50, 50, 50, 0 ))
                {
                    sub_3610( 1 );
                    g_U10484 = 0;
                    sub_3715();
                    if (sub_3822() == 1)
                    {
                        sub_5830();
                        sub_6117();
                        LOAD_ADDITIONAL_TEXT( "FIGHTC", 2 );
                        l_U963 = 1;
                    }
                }
                break;
                case 1:
                sub_6968();
                if (l_U1136 == 6)
                {
                    l_U963 = 2;
                }
                break;
                case 2:
                if (IS_SCREEN_FADED_OUT())
                {
                    SET_WANTED_MULTIPLIER( 0.00000000 );
                    if (sub_8662())
                    {
                        if (sub_9309())
                        {
                            sub_9113();
                            if (l_U1013 == 1)
                            {
                                sub_9371();
                                sub_9423( 0, 1 );
                                sub_17017( 1 );
                                BLOCK_PED_WEAPON_SWITCHING( sub_1354(), 1 );
                                if (l_U1017 == 0)
                                {
                                    sub_17266();
                                    l_U1017 = 1;
                                }
                                SET_CHAR_COMPONENT_VARIATION( sub_1354(), 1, 1, 0 );
                                l_U963 = 3;
                            }
                            else
                            {
                                sub_9423( 0, 0 );
                                sub_17017( 1 );
                                l_U963 = 5;
                            }
                        }
                    }
                }
                break;
                case 3:
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 3000 );
                }
                SET_CHAR_HEALTH( sub_1354(), 200 );
                sub_19514();
                sub_19678();
                SET_FREE_HEALTH_CARE( sub_1261(), 1 );
                l_U963 = 4;
                break;
                case 4:
                sub_17153();
                sub_19906();
                break;
                case 5:
                sub_41741();
                sub_19678();
                sub_46483();
                sub_26981();
                if (l_U1137 == 9)
                {
                    l_U963 = 6;
                }
                break;
                case 6:
                sub_19678();
                sub_46630();
                if ((l_U966 == 8) || (l_U965 == 8))
                {
                    l_U963 = 7;
                }
                break;
                case 7:
                sub_19678();
                sub_54162();
                break;
                case 8:
                sub_54850();
                break;
                case 9: break;
            }
        }
    }
    return;
}

void sub_1082()
{
    int I;

    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U532[I] )))
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U532[I], "celeb_a", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
        }
    }
    return;
}

void sub_1192(int iParam0)
{
    if ((l_U963 == 6) || (l_U963 == 5))
    {
        sub_1222( 0 );
        END_CAM_COMMANDS( ref l_U985 );
    }
    else
    {
        sub_1519();
    }
    CLEAR_ADDITIONAL_TEXT( 2, 1 );
    sub_1619();
    if (iParam0 == 0)
    {
        sub_2046();
        sub_2127();
    }
    if (l_U1019)
    {
        g_U12379 = 0;
        l_U1019 = 0;
    }
    sub_2229( 0 );
    sub_2330( 0 );
    sub_2497();
    sub_2555();
    sub_2662();
    DISPLAY_FRONTEND_MAP_BLIPS( 1 );
    l_U974 = 0;
    l_U972 = 1;
    SET_DEAD_PEDS_DROP_WEAPONS( 1 );
    sub_1445();
    l_U963 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1222(boolean bParam0)
{
    if (l_U962 != bParam0)
    {
        l_U962 = bParam0;
        DISPLAY_RADAR( NOT bParam0 );
        if (IS_PLAYER_PLAYING( sub_1261() ))
        {
            SET_PLAYER_CONTROL( sub_1261(), NOT bParam0 );
        }
        ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
        SET_EVERYONE_IGNORE_PLAYER( sub_1261(), bParam0 );
        ALLOW_EMERGENCY_SERVICES( NOT bParam0 );
        if (NOT (IS_CHAR_DEAD( sub_1354() )))
        {
            CLEAR_CHAR_TASKS( sub_1354() );
        }
        if (bParam0)
        {
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1354(), 1 );
        }
        else
        {
            sub_1445();
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1354(), 0 );
        }
    }
    return;
}

void sub_1261()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1354()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1445()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_1519()
{
    int I;

    I = 0;
    for ( I = 0; I <= 9; I++ )
    {
        if (DOES_CHAR_EXIST( sub_1354() ))
        {
            GIVE_WEAPON_TO_CHAR( sub_1354(), l_U573[I], l_U584[I], 0 );
        }
    }
    return;
}

void sub_1619()
{
    int I;

    sub_1628();
    for ( I = 0; I <= 20; I++ )
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1090[I] );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1112 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U344 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U345 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U346 );
    REMOVE_ANIMS( l_U351 );
    REMOVE_ANIMS( l_U352 );
    return;
}

void sub_1628()
{
    l_U1090[0] = 188553127;
    l_U1090[1] = -1477127916;
    l_U1090[2] = -828072333;
    l_U1090[3] = -563986962;
    l_U1090[4] = 1394419558;
    l_U1090[5] = 1691568850;
    l_U1090[6] = 1971776569;
    l_U1090[7] = -11396610;
    l_U1090[8] = 738125806;
    l_U1090[9] = 247648794;
    l_U1090[10] = 982077731;
    l_U1090[11] = 1259063802;
    l_U1090[12] = -1159156463;
    l_U1090[13] = 1737188996;
    l_U1090[14] = -1461281345;
    l_U1090[15] = 1346668127;
    l_U1090[16] = 221246143;
    l_U1090[17] = -1015957728;
    l_U1090[18] = -714220780;
    l_U1090[19] = -1283406538;
    l_U1090[20] = 575808580;
    return;
}

void sub_2046()
{
    int I;

    I = 0;
    for ( I = 0; I <= 52; I++ )
    {
        if (DOES_CHAR_EXIST( l_U477[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U477[I] );
        }
    }
    return;
}

void sub_2127()
{
    int I;

    I = 0;
    for ( I = 0; I <= 14; I++ )
    {
        if (DOES_CHAR_EXIST( l_U532[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U532[I] );
        }
    }
    return;
}

void sub_2229(int iParam0)
{
    if (iParam0 == 1)
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1567908220, -378.44220000, 1493.45400000, 10.87924000, 1, 0.00000000 );
    }
    else
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1567908220, -378.44220000, 1493.45400000, 10.87924000, 0, -1.00000000 );
    }
    return;
}

void sub_2330(int iParam0)
{
    if (iParam0 == 1)
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2140720422, -390.20000000, 1487.70000000, 10.80000000, 1, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2140720422, -387.50300000, 1486.44500000, 10.84700000, 1, 0.00000000 );
    }
    else
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2140720422, -390.20000000, 1487.70000000, 10.80000000, 0, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2140720422, -387.50300000, 1486.44500000, 10.84700000, 0, 0.00000000 );
    }
    return;
}

void sub_2497()
{
    if (g_U43644 == 1)
    {
        GIVE_WEAPON_TO_CHAR( sub_1354(), 41, 200, 0 );
        g_U43644 = 0;
    }
    return;
}

void sub_2555()
{
    l_U965 = 0;
    l_U1134 = 0;
    l_U966 = 0;
    l_U964 = 0;
    l_U968 = 0;
    l_U971 = 0;
    l_U1135 = 0;
    l_U1136 = 0;
    l_U967 = 0;
    l_U969 = 0;
    l_U1137 = 0;
    l_U1132 = 0;
    l_U668 = 0;
    l_U970 = 0;
    l_U1012 = 0;
    return;
}

void sub_2662()
{
    if (l_U412 == 1)
    {
        STOP_STREAM();
        l_U412 = 0;
    }
    if (l_U413 == 1)
    {
        STOP_STREAM();
        l_U413 = 0;
    }
    if (l_U414 == 1)
    {
        STOP_STREAM();
        l_U414 = 0;
    }
    return;
}

void sub_2874()
{
    if (l_U963 == 4)
    {
        if (sub_2895())
        {
            sub_3027();
            l_U1015 = 0;
            PRINT_NOW( "FCDisqual", 7500, 1 );
            l_U1133 = 0;
            GET_GAME_TIMER( ref l_U1000 );
            sub_1082();
            CLEAR_HELP();
            l_U963 = 8;
            PRINTNL();
            PRINTSTRING( "current_game_state = " );
            PRINTINT( l_U1133 );
            PRINTNL();
            PRINTSTRING( "Current_match_progress = " );
            PRINTINT( l_U974 );
            PRINTNL();
            PRINTSTRING( "Current_round_state = " );
            PRINTINT( l_U972 );
            PRINTNL();
        }
    }
    return;
}

int sub_2895()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_1354(), -377.56560000, 1492.28100000, 9.71050000, 0.75000000, 2.00000000, 10.00000000, 0 ))
    {
        return 1;
    }
    if (IS_CHAR_IN_ANGLED_AREA_3D( sub_1354(), -391.32000000, 1486.60000000, 10.81000000, -386.50000000, 1484.00000000, 8.78000000, 1, 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_3027()
{
    int I;

    for ( I = 0; I <= 14; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U532[I] )))
        {
            SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U474, 1 );
            SET_CHAR_MELEE_MOVEMENT_CONSTAINT_BOX( l_U532[I], l_U115._fU0 - 5, l_U115._fU4 - 5, l_U115._fU8 - 5, l_U115._fU0 + 5, l_U115._fU4 + 5, l_U115._fU8 + 5 );
            CLEAR_CHAR_TASKS( l_U532[I] );
        }
    }
    return;
}

void sub_3610(int iParam0)
{
    if (iParam0 == 1)
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -249203650, -395.00000000, 1483.50000000, 10.90000000, 1, 0.00000000 );
    }
    else
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -249203650, -395.00000000, 1483.50000000, 10.90000000, 0, 0.00000000 );
    }
    return;
}

void sub_3715()
{
    sub_3725( 1 );
    return;
}

void sub_3725(int iParam0)
{
    if (iParam0 == 1)
    {
        if (l_U635 == 0)
        {
            SET_PED_NON_CREATION_AREA( 65134, 1470, 0, 65154, 1490, 20 );
            l_U635 = 1;
        }
    }
    else
    {
        CLEAR_PED_NON_CREATION_AREA();
        l_U635 = 0;
    }
    return;
}

int sub_3822()
{
    switch (l_U1135)
    {
        case 0:
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        SET_PLAYER_CONTROL( sub_1261(), 1 );
        l_U1135 = 1;
        break;
        case 1:
        if (IS_SCREEN_FADED_IN())
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1261(), 0 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1354() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_1354(), l_U976._fU0, l_U976._fU4, l_U976._fU8 + 1, 1.00000000, 1.00000000, 1.00000000, 1 ))
                    {
                        if (NOT sub_4027())
                        {
                            PRINT_HELP_FOREVER( "FClubInitial" );
                            REQUEST_ANIMS( l_U343 );
                            l_U1135 = 2;
                        }
                    }
                }
            }
        }
        break;
        case 2:
        if (NOT sub_4112())
        {
            sub_4739();
            TERMINATE_THIS_SCRIPT();
        }
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1354(), l_U976._fU0, l_U976._fU4, l_U976._fU8 + 1, 1.00000000, 1.00000000, 1.00000000, 1 )))
        {
            CLEAR_HELP();
            REMOVE_ANIMS( l_U343 );
            l_U1135 = 1;
        }
        if (NOT sub_4027())
        {
            if (IS_SCREEN_FADED_IN())
            {
                if (HAVE_ANIMS_LOADED( l_U343 ))
                {
                    if (sub_5489())
                    {
                        l_U1135 = 3;
                        while (IS_CONTROL_PRESSED( 2, 23 ))
                        {
                            WAIT( 0 );
                            if (NOT (IS_CHAR_INJURED( sub_1354() )))
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1354(), l_U976._fU0, l_U976._fU4, l_U976._fU8 + 1, 1.00000000, 1.00000000, 1.00000000, 0 )))
                                {
                                    CLEAR_HELP();
                                    l_U1135 = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            CLEAR_HELP();
            l_U1135 = 1;
        }
        break;
        case 3:
        return 1;
        break;
    }
    return 0;
}

int sub_4027()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_4112()
{
    if ((g_U10953._fU4) || (IS_AUTO_SAVE_IN_PROGRESS()))
    {
        return 0;
    }
    if (IS_CHAR_DEAD( sub_1354() ))
    {
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_1261() )))
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
    if ((sub_4266()) || (sub_4216()))
    {
        return 0;
    }
    if (NOT g_U22957)
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1261() )))
    {
        return 0;
    }
    if (NOT (sub_4349( 1, 1 )))
    {
        return 0;
    }
    if (IS_BIT_SET( g_U10938._fU0, 4 ))
    {
        return 0;
    }
    if (NOT sub_4668())
    {
        return 0;
    }
    return 1;
}

int sub_4216()
{
    if ((g_U95._fU0 == 1008) || (g_U95._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_4266()
{
    if (g_U560 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_4349(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1354() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1354(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1354() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1354(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1354()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1354() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1354() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1261() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1261() )))
    {
        return 0;
    }
    return 1;
}

int sub_4668()
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

void sub_4739()
{
    while (IS_CONTROL_PRESSED( 2, 23 ))
    {
        WAIT( 0 );
    }
    sub_1222( 0 );
    if (l_U985 > 0)
    {
        END_CAM_COMMANDS( ref l_U985 );
    }
    if (GET_MISSION_FLAG() == 1)
    {
        if (l_U1018 == 1)
        {
            SET_MISSION_FLAG( 0 );
        }
    }
    CLEAR_HELP();
    CLEAR_PRINTS();
    SET_SCENARIO_PED_DENSITY_MULTIPLIER( 1.00000000, 1.00000000 );
    sub_4869();
    BLOCK_PED_WEAPON_SWITCHING( sub_1354(), 0 );
    if (l_U469 == 1)
    {
        AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
        l_U469 = 0;
    }
    sub_2497();
    sub_5190();
    sub_1445();
    l_U1136 = 0;
    l_U1135 = 1;
    l_U963 = 0;
    return;
}

void sub_4869()
{
    int I;

    I = 0;
    for ( I = 0; I <= 52; I++ )
    {
        if (DOES_CHAR_EXIST( l_U477[I] ))
        {
            DELETE_CHAR( ref l_U477[I] );
        }
    }
    if (DOES_CHAR_EXIST( l_U531 ))
    {
        DELETE_CHAR( ref l_U531 );
    }
    sub_2662();
    sub_3725( 0 );
    sub_1445();
    if (l_U469 == 1)
    {
        AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
        l_U469 = 0;
    }
    if (DOES_OBJECT_EXIST( l_U555 ))
    {
        DELETE_OBJECT( ref l_U555 );
    }
    if (DOES_OBJECT_EXIST( l_U556 ))
    {
        DELETE_OBJECT( ref l_U556 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U344 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U345 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U346 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U347 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U349 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U348 );
    return;
}

void sub_5190()
{
    int I;

    I = 0;
    for ( I = 0; I <= 14; I++ )
    {
        if (DOES_CHAR_EXIST( l_U532[I] ))
        {
            DELETE_CHAR( ref l_U532[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U550[I] ))
        {
            DELETE_CHAR( ref l_U550[I] );
        }
    }
    return;
}

int sub_5489()
{
    unknown uVar2;
    int iVar3;

    if (IS_PLAYER_PLAYING( sub_1261() ))
    {
        if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_1261() ))
        {
            if (NOT (IS_PED_RAGDOLL( sub_1354() )))
            {
                if (NOT (IS_CHAR_GETTING_UP( sub_1354() )))
                {
                    if (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_1354() )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1354() )))
                        {
                            iVar3 = GET_OBJECT_PED_IS_HOLDING( sub_1354() );
                            if (iVar3 == nil)
                            {
                                if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
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
    return 0;
}

void sub_5830()
{
    if ((sub_5859( sub_1354() )) || (HAS_CHAR_GOT_WEAPON( sub_1354(), 41 )))
    {
        g_U2799 = 1;
        g_U43644 = 1;
    }
    return;
}

int sub_5859(unknown uParam0)
{
    int iVar3;

    if (sub_5868())
    {
        iVar3 = sub_5934( uParam0 );
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

int sub_5868()
{
    if ((HAVE_ANIMS_LOADED( "PARACHUTE" )) AND (HAS_MODEL_LOADED( 1490460832 )))
    {
        return 1;
    }
    return 0;
}

int sub_5934(int iParam0)
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

void sub_6117()
{
    sub_6126();
    sub_6271( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_6345();
    return;
}

void sub_6126()
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

void sub_6271(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_6345()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_6383( 1, g_U575[I] )) == 0)
        {
            sub_6634( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_6812())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_6383(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_6634(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_6719( g_U575 - 1 );
    return;
}

void sub_6719(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_6812()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_6383( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_6968()
{
    switch (l_U1136)
    {
        case 0:
        l_U1177._fU0 = {-396.21810000, 1481.76000000, 11.41749000};
        l_U1177._fU12 = {-2.45373600, 0.00000000, -40.43935000};
        l_U1177._fU96 = {-396.64580000, 1481.25800000, 11.44575000};
        l_U1177._fU108 = {-2.45373600, 0.00000000, -40.43935000};
        l_U1177._fU120 = 39;
        l_U1177._fU124 = 5000;
        sub_1222( 1 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1354() );
        SET_CHAR_COORDINATES( sub_1354(), l_U323._fU0, l_U323._fU4 - 0.95000000, l_U323._fU8 );
        SET_CHAR_HEADING( sub_1354(), l_U1006 );
        TASK_PLAY_ANIM( sub_1354(), "Bang_Door", l_U343, 8.00000000, 0, 1, 1, 0, -2 );
        BEGIN_CAM_COMMANDS( ref l_U985 );
        sub_7305( l_U1177, 0 );
        CLEAR_HELP();
        GET_GAME_TIMER( ref l_U1211 );
        GET_GAME_TIMER( ref l_U997 );
        l_U1136 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U1212 );
        l_U1213 = l_U1212 - l_U1211;
        if (l_U1213 > 2000)
        {
            GET_GAME_TIMER( ref l_U1211 );
            DISPLAY_CASH( 1 );
            PRINT_HELP_FOREVER( "FClubOptions" );
            l_U1136 = 2;
        }
        break;
        case 2:
        if (l_U1214 == 0)
        {
            GET_GAME_TIMER( ref l_U1212 );
            l_U1213 = l_U1212 - l_U1211;
            if (l_U1213 > 2000)
            {
                PLAY_SOUND_FROM_POSITION( -1, "FIGHT_CLUB_DOOR_SLOT_OPEN", l_U323 );
                l_U1214 = 1;
            }
        }
        if (sub_8090())
        {
            if (IS_SCORE_GREATER( sub_1261(), 49 ))
            {
                CLEAR_PRINTS();
                CLEAR_HELP();
                ADD_SCORE( sub_1261(), 65486 );
                INCREMENT_INT_STAT( 236, 50 );
                if (l_U1214 == 1)
                {
                    PLAY_SOUND_FROM_POSITION( -1, "FIGHT_CLUB_DOOR_SLOT_CLOSE", l_U323 );
                }
                l_U1012 = 0;
                l_U1013 = 0;
                l_U1136 = 3;
            }
            else
            {
                PRINT_NOW( "NoCashFC", 7500, 1 );
            }
        }
        else if (sub_8300())
        {
            if (IS_SCORE_GREATER( sub_1261(), 99 ))
            {
                ADD_SCORE( sub_1261(), 65436 );
                INCREMENT_INT_STAT( 236, 100 );
                CLEAR_PRINTS();
                CLEAR_HELP();
                if (l_U1214 == 1)
                {
                    PLAY_SOUND_FROM_POSITION( -1, "FIGHT_CLUB_DOOR_SLOT_CLOSE", l_U323 );
                }
                l_U1013 = 1;
                l_U1136 = 3;
            }
            else
            {
                PRINT_NOW( "NoCashFC", 7500, 1 );
            }
        }
        else if (sub_8504())
        {
            sub_4739();
        };;;
        break;
        case 3:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (GET_MISSION_FLAG() == 0)
            {
                SET_MISSION_FLAG( 1 );
            }
            g_U12379 = 1;
            l_U1019 = 1;
            DISPLAY_CASH( 0 );
            PLAY_SOUND_FROM_PED( -1, "FIGHT_CLUB_DOOR", sub_1354() );
            DO_SCREEN_FADE_OUT( 3000 );
            l_U1136 = 5;
        }
        break;
        case 5:
        if (sub_8662())
        {
            sub_9113();
            l_U1136 = 4;
        }
        break;
        case 4:
        if (IS_SCREEN_FADED_OUT())
        {
            CLEAR_HELP();
            CLEAR_AREA_OF_CHARS( l_U115._fU0, l_U115._fU4, l_U115._fU8, 25.00000000 );
            sub_1222( 0 );
            END_CAM_COMMANDS( ref l_U985 );
            l_U1136 = 6;
        }
        break;
        case 6: break;
    }
    return;
}

void sub_7305(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, int iParam34)
{
    if (DOES_CAM_EXIST( l_U103 ))
    {
        DESTROY_CAM( l_U103 );
    }
    if (DOES_CAM_EXIST( l_U100[0] ))
    {
        DESTROY_CAM( l_U100[0] );
    }
    CREATE_CAM( 14, ref l_U100[0] );
    SET_CAM_POS( l_U100[0], uParam0._fU0._fU0, uParam0._fU0._fU4, uParam0._fU0._fU8 );
    if (iParam34 == nil)
    {
        SET_CAM_ROT( l_U100[0], uParam0._fU12._fU0, uParam0._fU12._fU4, uParam0._fU12._fU8 );
    }
    else if (DOES_CHAR_EXIST( iParam34 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam34 )))
        {
            POINT_CAM_AT_PED( l_U100[0], iParam34 );
        }
    }
    SET_CAM_FOV( l_U100[0], uParam0._fU120 );
    if (DOES_CAM_EXIST( l_U100[1] ))
    {
        DESTROY_CAM( l_U100[1] );
    }
    CREATE_CAM( 14, ref l_U100[1] );
    SET_CAM_POS( l_U100[1], uParam0._fU96._fU0, uParam0._fU96._fU4, uParam0._fU96._fU8 );
    if (iParam34 == nil)
    {
        SET_CAM_ROT( l_U100[1], uParam0._fU108._fU0, uParam0._fU108._fU4, uParam0._fU108._fU8 );
    }
    else if (DOES_CHAR_EXIST( iParam34 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam34 )))
        {
            POINT_CAM_AT_PED( l_U100[1], iParam34 );
        }
    }
    SET_CAM_FOV( l_U100[1], uParam0._fU120 );
    CREATE_CAM( 3, ref l_U103 );
    SET_CAM_ACTIVE( l_U103, 1 );
    SET_CAM_PROPAGATE( l_U103, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U103, l_U100[0], l_U100[1], uParam0._fU124, 0 );
    return;
}

int sub_8090()
{
    if (IS_CONTROL_PRESSED( 2, 78 ))
    {
        return 1;
    }
    return 0;
}

int sub_8300()
{
    if (IS_CONTROL_PRESSED( 2, 79 ))
    {
        return 1;
    }
    return 0;
}

int sub_8504()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

int sub_8662()
{
    REQUEST_MODEL( l_U348 );
    REQUEST_MODEL( l_U349 );
    REQUEST_MODEL( l_U344 );
    REQUEST_MODEL( l_U345 );
    REQUEST_MODEL( l_U346 );
    REQUEST_MODEL( l_U347 );
    GET_GAME_VIEWPORT_ID( ref l_U651 );
    SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U651, l_U350 );
    REQUEST_ANIMS( l_U351 );
    REQUEST_ANIMS( l_U352 );
    REQUEST_ANIMS( l_U343 );
    sub_8807();
    SET_DEAD_PEDS_DROP_WEAPONS( 0 );
    if ((REQUEST_AMBIENT_AUDIO_BANK( "EP2_SFX\FIGHT_CLUB_ROAR" )) AND ((HAVE_ANIMS_LOADED( l_U343 )) AND ((HAVE_ANIMS_LOADED( l_U352 )) AND ((HAVE_ANIMS_LOADED( l_U351 )) AND ((HAS_MODEL_LOADED( l_U349 )) AND ((HAS_MODEL_LOADED( l_U348 )) AND ((HAS_MODEL_LOADED( l_U347 )) AND ((HAS_MODEL_LOADED( l_U346 )) AND ((HAS_MODEL_LOADED( l_U345 )) AND (HAS_MODEL_LOADED( l_U344 )))))))))))
    {
        l_U469 = 1;
        return 1;
    }
    return 0;
}

void sub_8807()
{
    if (l_U650 == 0)
    {
        # -sub_C1FFC0-0xc214c8( 0, ref l_U471 );
        # -sub_C1FFC0-0xc214c8( 1, ref l_U472 );
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U473 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U474 );
        LOAD_COMBAT_DECISION_MAKER( 7, ref l_U475 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U476 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U470 );
        l_U650 = 1;
    }
    return;
}

void sub_9113()
{
    if (l_U1175 == 0)
    {
        l_U1175 = 1;
    }
    return;
}

int sub_9309()
{
    LOAD_ADDITIONAL_TEXT( "FIGHTC", 0 );
    sub_1628();
    return 1;
}

void sub_9371()
{
    g_U43590 = 1;
    REQUEST_SCRIPT( "FightClubScreen" );
    return;
}

void sub_9423(int iParam0, unknown uParam1)
{
    SET_SCENARIO_PED_DENSITY_MULTIPLIER( 0.00000000, 1.00000000 );
    l_U118[0] = {-379.89000000, 1493.01000000, 9.71030100};
    l_U118[1] = {-379.89000000, 1493.01000000, 9.71030100};
    l_U118[2] = {-379.89000000, 1493.01000000, 9.71030100};
    l_U118[3] = {-379.89000000, 1493.01000000, 9.71030100};
    if (iParam0 == 1)
    {
        l_U131[3] = {-377.25960000, 1491.86000000, 9.71050000};
        l_U131[2] = {-377.25960000, 1491.86000000, 9.71050000};
        l_U131[1] = {-377.25960000, 1491.86000000, 9.71050000};
        l_U131[0] = {-377.25960000, 1491.86000000, 9.71050000};
    }
    else
    {
        l_U131[3] = {-371.69960000, 1489.89000000, 10.71050000};
        l_U131[2] = {-371.69960000, 1489.89000000, 10.71050000};
        l_U131[1] = {-371.69960000, 1489.89000000, 10.71050000};
        l_U131[0] = {-371.69960000, 1489.89000000, 10.71050000};
    }
    l_U144[0] = {-387.44270000, 1492.48800000, 9.71030100};
    l_U336[0] = 275.76360000;
    l_U144[1] = {-384.14840000, 1493.22100000, 9.71030100};
    l_U336[1] = 105.43780000;
    if (iParam0 == 0)
    {
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
    }
    else
    {
        ADD_SCENARIO_BLOCKING_AREA( l_U115._fU0 - 10, l_U115._fU4 - 10, l_U115._fU8 - 10, l_U115._fU0 + 10, l_U115._fU4 + 10, l_U115._fU8 + 10 );
    }
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U470, 1 );
    GET_INTERIOR_AT_COORDS( l_U144[0]._fU0, l_U144[0]._fU4, l_U144[0]._fU8, ref l_U554 );
    if (iParam0 == 0)
    {
        sub_10007();
    }
    sub_10197( uParam1 );
    ACTIVATE_INTERIOR( l_U554, 1 );
    return;
}

void sub_10007()
{
    if (NOT (IS_CHAR_INJURED( sub_1354() )))
    {
        sub_10050( sub_1354(), l_U151, l_U339 );
        SET_CAM_BEHIND_PED( sub_1354() );
    }
    return;
}

void sub_10050(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if ((IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )) || (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
            SET_CHAR_HEADING( uParam0, uParam4 );
        }
        else
        {
            SET_CHAR_COORDINATES( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
            SET_CHAR_HEADING( uParam0, uParam4 );
        }
    }
    return;
}

void sub_10197(int iParam0)
{
    int I;

    sub_2330( 1 );
    l_U154[0] = {-380.00000000, 1498.14000000, 9.71030100};
    l_U154[1] = {-381.76000000, 1498.64000000, 9.71030100};
    l_U154[2] = {-392.38000000, 1495.73800000, 9.71030100};
    l_U154[3] = {-381.62640000, 1498.05300000, 9.71030100};
    l_U154[4] = {-379.81110000, 1488.55300000, 9.71030100};
    l_U154[5] = {-384.04000000, 1499.59000000, 9.71030100};
    l_U154[6] = {-386.37890000, 1500.22400000, 9.71030100};
    l_U154[7] = {-387.11810000, 1500.60000000, 9.71030100};
    l_U154[8] = {-390.25000000, 1502.32000000, 9.71030100};
    l_U154[9] = {-391.13000000, 1499.44000000, 9.71030100};
    l_U154[10] = {-391.37000000, 1498.54000000, 9.71030100};
    l_U154[11] = {-392.00000000, 1496.78000000, 9.71030100};
    l_U154[12] = {-391.90960000, 1496.53000000, 9.71039900};
    l_U154[13] = {-393.26000000, 1494.50000000, 9.71030100};
    l_U154[14] = {-394.55000000, 1492.99000000, 9.71030100};
    l_U154[15] = {-394.33110000, 1490.60600000, 9.71030100};
    l_U154[16] = {-393.49410000, 1488.65600000, 9.71030100};
    l_U154[17] = {-392.22440000, 1488.12600000, 9.71030100};
    l_U154[18] = {-394.05000000, 1486.99000000, 9.71000000};
    l_U154[19] = {-385.96000000, 1484.27000000, 9.71030100};
    l_U154[20] = {-379.49000000, 1489.48000000, 9.71030100};
    l_U154[21] = {-386.29990000, 1485.05600000, 9.71030100};
    l_U154[22] = {-385.24310000, 1484.54400000, 9.71030100};
    l_U154[23] = {-384.16400000, 1483.99100000, 9.71030100};
    l_U154[24] = {-382.86990000, 1483.95700000, 9.71039900};
    l_U154[25] = {-382.01660000, 1484.82600000, 9.71030100};
    l_U154[26] = {-381.15000000, 1486.68000000, 9.71030100};
    l_U154[27] = {-380.53000000, 1487.97000000, 9.71030100};
    l_U154[28] = {-379.36000000, 1490.32000000, 9.71039900};
    l_U154[29] = {-375.13000000, 1493.28000000, 9.71030100};
    l_U154[30] = {-377.73000000, 1494.45000000, 9.71030100};
    l_U154[31] = {-378.49000000, 1497.50000000, 9.71030100};
    l_U154[32] = {-379.19740000, 1498.27000000, 9.71030100};
    l_U154[33] = {-381.02660000, 1498.74600000, 9.71030100};
    l_U154[34] = {-382.18640000, 1499.61400000, 9.71030100};
    l_U154[35] = {-383.46080000, 1500.35600000, 9.71030100};
    l_U154[36] = {-384.02050000, 1500.68100000, 9.71030100};
    l_U154[37] = {-385.08850000, 1501.30200000, 9.71030100};
    l_U154[38] = {-387.08870000, 1502.50100000, 9.71030100};
    l_U154[39] = {-388.55750000, 1502.80100000, 9.71030100};
    l_U154[39] = {-390.10220000, 1501.98500000, 9.71030100};
    l_U154[39] = {-391.04730000, 1500.44000000, 9.71030100};
    l_U154[40] = {-392.27450000, 1497.82900000, 9.71030100};
    l_U154[41] = {-393.32890000, 1495.65800000, 9.71039900};
    l_U154[42] = {-394.24090000, 1493.72600000, 9.71039900};
    l_U154[43] = {-395.09110000, 1491.84700000, 9.71030100};
    l_U154[44] = {-395.47950000, 1489.60100000, 9.71030100};
    l_U154[45] = {-387.90790000, 1484.64500000, 9.71030100};
    l_U154[47] = {-383.15580000, 1480.85600000, 9.71030100};
    l_U154[48] = {-381.78020000, 1483.17100000, 9.71030100};
    l_U154[49] = {-380.67900000, 1485.18100000, 9.71030100};
    l_U154[50] = {-379.03640000, 1486.38300000, 9.71030100};
    l_U154[51] = {-378.15320000, 1488.69800000, 9.71030100};
    l_U154[52] = {-376.83120000, 1489.68600000, 9.71030100};
    CLEAR_AREA_OF_CHARS( l_U115._fU0, l_U115._fU4, l_U115._fU8, 10.00000000 );
    I = 0;
    for ( I = 0; I <= 52; I++ )
    {
        WAIT( 40 );
        sub_11725( ref l_U477[I], l_U154[I]._fU0, l_U154[I]._fU4, l_U154[I]._fU8, 180.00000000, l_U471, l_U470, 0, 0, 0 );
        if (NOT (IS_CHAR_INJURED( sub_1354() )))
        {
            SET_CHAR_NEVER_TARGETTED( l_U477[I], 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U477[I], 1 );
            SET_CHAR_KEEP_TASK( l_U477[I], 1 );
            if (iParam0 == 1)
            {
                sub_12065( I, 1, 1 );
            }
            else
            {
                sub_12065( I, 0, 1 );
            }
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U344 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U345 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U346 );
    sub_16199();
    sub_16589();
    sub_16788();
    return;
}

void sub_11725(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown uVar12;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar12 );
    if (NOT (DOES_CHAR_EXIST( (uParam0^) )))
    {
        switch (uVar12)
        {
            case 0:
            CREATE_CHAR( 8, l_U344, uParam1, uParam2, uParam3, uParam0, 1 );
            break;
            case 1:
            CREATE_CHAR( 8, l_U345, uParam1, uParam2, uParam3, uParam0, 1 );
            break;
            case 2:
            CREATE_CHAR( 8, l_U346, uParam1, uParam2, uParam3, uParam0, 1 );
            break;
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        SET_ROOM_FOR_CHAR_BY_NAME( (uParam0^), l_U350 );
        SET_CHAR_HEADING( (uParam0^), uParam4 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^) );
        SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 4 );
        SET_CHAR_DECISION_MAKER( (uParam0^), uParam5 );
        SET_COMBAT_DECISION_MAKER( (uParam0^), uParam6 );
        SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    }
    return;
}

void sub_12065(unknown uParam0, boolean bParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref uVar6 );
    if ((NOT (IS_CHAR_INJURED( sub_1354() ))) AND (NOT (IS_CHAR_INJURED( l_U477[uParam0] ))))
    {
        switch (uVar6)
        {
            case 0:
            OPEN_SEQUENCE_TASK( ref uVar5 );
            if (bParam1)
            {
                TASK_LOOK_AT_CHAR( 0, sub_1354(), -2, 0 );
            }
            else
            {
                TASK_LOOK_AT_COORD( 0, l_U115._fU0, l_U115._fU4, l_U115._fU8, -2, 0 );
            }
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U115._fU0, l_U115._fU4, l_U115._fU8 );
            if (iParam2 == 1)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "cheer_on_fight_A", "amb@watch_melee", 32.00000000, -2, 16 );
            }
            CLOSE_SEQUENCE_TASK( uVar5 );
            TASK_PERFORM_SEQUENCE( l_U477[uParam0], uVar5 );
            sub_12361( l_U477[uParam0] );
            CLEAR_SEQUENCE_TASK( uVar5 );
            break;
            case 1:
            OPEN_SEQUENCE_TASK( ref uVar5 );
            if (bParam1)
            {
                TASK_LOOK_AT_CHAR( 0, sub_1354(), -2, 0 );
            }
            else
            {
                TASK_LOOK_AT_COORD( 0, l_U115._fU0, l_U115._fU4, l_U115._fU8, -2, 0 );
            }
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U115._fU0, l_U115._fU4, l_U115._fU8 );
            if (iParam2 == 1)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "cheer_on_fight_B", "amb@watch_melee", 32.00000000, -2, 16 );
            }
            CLOSE_SEQUENCE_TASK( uVar5 );
            TASK_PERFORM_SEQUENCE( l_U477[uParam0], uVar5 );
            sub_12361( l_U477[uParam0] );
            CLEAR_SEQUENCE_TASK( uVar5 );
            break;
            case 2:
            OPEN_SEQUENCE_TASK( ref uVar5 );
            if (bParam1)
            {
                TASK_LOOK_AT_CHAR( 0, sub_1354(), -2, 0 );
            }
            else
            {
                TASK_LOOK_AT_COORD( 0, l_U115._fU0, l_U115._fU4, l_U115._fU8, -2, 0 );
            }
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U115._fU0, l_U115._fU4, l_U115._fU8 );
            if (iParam2 == 1)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "cheer_on_fight_C", "amb@watch_melee", 32.00000000, -2, 16 );
            }
            CLOSE_SEQUENCE_TASK( uVar5 );
            TASK_PERFORM_SEQUENCE( l_U477[uParam0], uVar5 );
            sub_12361( l_U477[uParam0] );
            CLEAR_SEQUENCE_TASK( uVar5 );
            break;
            case 3:
            OPEN_SEQUENCE_TASK( ref uVar5 );
            if (bParam1)
            {
                TASK_LOOK_AT_CHAR( 0, sub_1354(), -2, 0 );
            }
            else
            {
                TASK_LOOK_AT_COORD( 0, l_U115._fU0, l_U115._fU4, l_U115._fU8, -2, 0 );
            }
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U115._fU0, l_U115._fU4, l_U115._fU8 );
            if (iParam2 == 1)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "cheer_on_fight_D", "amb@watch_melee", 32.00000000, -2, 16 );
            }
            CLOSE_SEQUENCE_TASK( uVar5 );
            TASK_PERFORM_SEQUENCE( l_U477[uParam0], uVar5 );
            sub_12361( l_U477[uParam0] );
            CLEAR_SEQUENCE_TASK( uVar5 );
            break;
            case 4:
            OPEN_SEQUENCE_TASK( ref uVar5 );
            if (bParam1)
            {
                TASK_LOOK_AT_CHAR( 0, sub_1354(), -2, 0 );
            }
            else
            {
                TASK_LOOK_AT_COORD( 0, l_U115._fU0, l_U115._fU4, l_U115._fU8, -2, 0 );
            }
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U115._fU0, l_U115._fU4, l_U115._fU8 );
            if (iParam2 == 1)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "cheer_on_fight_E", "amb@watch_melee", 32.00000000, -2, 16 );
            }
            CLOSE_SEQUENCE_TASK( uVar5 );
            TASK_PERFORM_SEQUENCE( l_U477[uParam0], uVar5 );
            sub_12361( l_U477[uParam0] );
            CLEAR_SEQUENCE_TASK( uVar5 );
            break;
            default:
            OPEN_SEQUENCE_TASK( ref uVar5 );
            if (bParam1)
            {
                TASK_LOOK_AT_CHAR( 0, sub_1354(), -2, 0 );
            }
            else
            {
                TASK_LOOK_AT_COORD( 0, l_U115._fU0, l_U115._fU4, l_U115._fU8, -2, 0 );
            }
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U115._fU0, l_U115._fU4, l_U115._fU8 );
            if (iParam2 == 1)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "cheer_on_fight_A", "amb@watch_melee", 32.00000000, -2, 16 );
            }
            CLOSE_SEQUENCE_TASK( uVar5 );
            TASK_PERFORM_SEQUENCE( l_U477[uParam0], uVar5 );
            sub_12361( l_U477[uParam0] );
            CLEAR_SEQUENCE_TASK( uVar5 );
            break;
        }
    }
    return;
}

void sub_12361(unknown uParam0)
{
    sub_12370();
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SAY_AMBIENT_SPEECH_WITH_VOICE( uParam0, "FIGHT_CHEER", l_U353, 1, 1, 1 );
    }
    return;
}

void sub_12370()
{
    int iVar2;

    iVar2 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 70, ref iVar2 );
    if (iVar2 == 0)
    {
        l_U353 = "M_M_ALCOHOLIC";
    }
    else if (iVar2 == 1)
    {
        l_U353 = "M_M_BUSINESS_02";
    }
    else if (iVar2 == 2)
    {
        l_U353 = "M_M_CRACKHEAD";
    }
    else if (iVar2 == 3)
    {
        l_U353 = "M_M_EE_HEAVY_01";
    }
    else if (iVar2 == 4)
    {
        l_U353 = "M_M_PMANHAT_01";
    }
    else if (iVar2 == 5)
    {
        l_U353 = "M_Y_GENSTREET_11";
    }
    else if (iVar2 == 6)
    {
        l_U353 = "M_Y_SOHO_01";
    }
    else if (iVar2 == 7)
    {
        l_U353 = "M_O_STREET_01";
    }
    else if (iVar2 == 8)
    {
        l_U353 = "M_M_TRAMPBLACK";
    }
    else if (iVar2 == 9)
    {
        l_U353 = "M_M_TRAIN_01";
    }
    else if (iVar2 == 10)
    {
        l_U353 = "M_Y_PMANHAT_02";
    }
    else if (iVar2 == 11)
    {
        l_U353 = "M_M_PINDUS_02";
    }
    else if (iVar2 == 12)
    {
        l_U353 = "M_M_FATMOB_01";
    }
    else if (iVar2 == 13)
    {
        l_U353 = "M_Y_SHADY_02";
    }
    else if (iVar2 == 14)
    {
        l_U353 = "M_Y_STREET_03";
    }
    else if (iVar2 == 15)
    {
        l_U353 = "M_Y_STREETPUNK_02";
    }
    else if (iVar2 == 16)
    {
        l_U353 = "M_Y_LEASTSIDE_01";
    }
    else if (iVar2 == 17)
    {
        l_U353 = "M_M_PMANHAT_01";
    }
    else if (iVar2 == 18)
    {
        l_U353 = "M_M_PITALIAN_01";
    }
    else if (iVar2 == 19)
    {
        l_U353 = "M_O_PJERSEY_01";
    }
    else if (iVar2 == 20)
    {
        l_U353 = "M_M_FATMOB_01";
    }
    else if (iVar2 == 21)
    {
        l_U353 = "M_M_CHINATOWN";
    }
    else if (iVar2 == 22)
    {
        l_U353 = "M_M_EE_HEAVY_02";
    }
    else if (iVar2 == 23)
    {
        l_U353 = "M_M_PHARBRON_01";
    }
    else if (iVar2 == 24)
    {
        l_U353 = " M_M_PINDUS_01";
    }
    else if (iVar2 == 25)
    {
        l_U353 = "M_M_PITALIAN_02";
    }
    else if (iVar2 == 26)
    {
        l_U353 = "M_M_PLATIN_03";
    }
    else if (iVar2 == 27)
    {
        l_U353 = "M_M_TAXIDRIVER";
    }
    else if (iVar2 == 28)
    {
        l_U353 = "M_M_TRUCKER_01";
    }
    else if (iVar2 == 29)
    {
        l_U353 = "M_O_EASTEURO_01";
    }
    else if (iVar2 == 30)
    {
        l_U353 = "M_O_STREET_01";
    }
    else if (iVar2 == 31)
    {
        l_U353 = "M_Y_BOHOGUY_01";
    }
    else if (iVar2 == 32)
    {
        l_U353 = "M_Y_BOUNCER_01";
    }
    else if (iVar2 == 33)
    {
        l_U353 = "M_Y_BRONX_01";
    }
    else if (iVar2 == 34)
    {
        l_U353 = "M_Y_BUSINESS_01";
    }
    else if (iVar2 == 35)
    {
        l_U353 = "M_Y_BUSINESS_02";
    }
    else if (iVar2 == 36)
    {
        l_U353 = "M_Y_CHINATOWN_03";
    }
    else if (iVar2 == 37)
    {
        l_U353 = "M_Y_CLUBFIT";
    }
    else if (iVar2 == 38)
    {
        l_U353 = "M_Y_DEALER";
    }
    else if (iVar2 == 39)
    {
        l_U353 = "M_Y_DODGY_01";
    }
    else if (iVar2 == 40)
    {
        l_U353 = "M_Y_DOWNTOWN_01";
    }
    else if (iVar2 == 41)
    {
        l_U353 = "M_Y_DOWNTOWN_02";
    }
    else if (iVar2 == 42)
    {
        l_U353 = "M_Y_DOWNTOWN_03";
    }
    else if (iVar2 == 43)
    {
        l_U353 = "M_Y_DRUG_01";
    }
    else if (iVar2 == 44)
    {
        l_U353 = "M_Y_EASTEURO_01";
    }
    else if (iVar2 == 45)
    {
        l_U353 = "M_Y_GOON_01";
    }
    else if (iVar2 == 46)
    {
        l_U353 = "M_Y_HARDMAN_01";
    }
    else if (iVar2 == 47)
    {
        l_U353 = "M_Y_HARLEM_01";
    }
    else if (iVar2 == 48)
    {
        l_U353 = "M_Y_HARLEM_02";
    }
    else if (iVar2 == 49)
    {
        l_U353 = "M_Y_HARLEM_04";
    }
    else if (iVar2 == 50)
    {
        l_U353 = "M_Y_HASID_01";
    }
    else if (iVar2 == 51)
    {
        l_U353 = "M_Y_LEASTSIDE_01";
    }
    else if (iVar2 == 52)
    {
        l_U353 = "M_Y_PHARBRON_01";
    }
    else if (iVar2 == 53)
    {
        l_U353 = "M_Y_PJERSEY_01";
    }
    else if (iVar2 == 54)
    {
        l_U353 = "M_Y_PLATIN_01";
    }
    else if (iVar2 == 55)
    {
        l_U353 = "M_Y_PLATIN_03";
    }
    else if (iVar2 == 56)
    {
        l_U353 = " M_Y_PMANHAT_01";
    }
    else if (iVar2 == 57)
    {
        l_U353 = "M_Y_PMANHAT_02";
    }
    else if (iVar2 == 58)
    {
        l_U353 = "M_Y_PQUEENS_01";
    }
    else if (iVar2 == 59)
    {
        l_U353 = "M_Y_QUEENSBRIDGE";
    }
    else if (iVar2 == 60)
    {
        l_U353 = "M_Y_RUNNER";
    }
    else if (iVar2 == 61)
    {
        l_U353 = "M_Y_SHADY_02";
    }
    else if (iVar2 == 62)
    {
        l_U353 = "M_Y_SKATEBIKE_01";
    }
    else if (iVar2 == 63)
    {
        l_U353 = "M_Y_SOHO_01";
    }
    else if (iVar2 == 64)
    {
        l_U353 = "M_Y_STREET_03";
    }
    else if (iVar2 == 65)
    {
        l_U353 = "M_Y_STREET_04";
    }
    else if (iVar2 == 66)
    {
        l_U353 = "M_Y_STREETPUNK_02";
    }
    else if (iVar2 == 67)
    {
        l_U353 = "M_Y_STREETPUNK_04";
    }
    else if (iVar2 == 68)
    {
        l_U353 = "M_Y_STREETPUNK_05";
    }
    else if (iVar2 == 69)
    {
        l_U353 = "M_Y_TOUGH_05";
    }
    else
    {
        l_U353 = "M_Y_GENSTREET_11";
    };;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    return;
}

void sub_16199()
{
    if (HAS_MODEL_LOADED( l_U347 ))
    {
        if (NOT (DOES_CHAR_EXIST( l_U531 )))
        {
            CREATE_CHAR( 4, l_U347, l_U314._fU0, l_U314._fU4, l_U314._fU8, ref l_U531, 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U531 )))
        {
            SET_ROOM_FOR_CHAR_BY_NAME( l_U531, l_U350 );
            SET_CHAR_COORDINATES( l_U531, l_U314._fU0, l_U314._fU4, l_U314._fU8 );
            SET_CHAR_HEADING( l_U531, l_U340 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U531, 1 );
            SET_CHAR_NEVER_TARGETTED( l_U531, 1 );
            sub_16409( 3, l_U531, "BOOKIE", 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U531, 8, 1, 0 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U347 );
        }
    }
    return;
}

void sub_16409(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_16489( "\n PED NUMBER ", uParam0 );
    sub_16529( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_16489(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_16529(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_16589()
{
    if (HAS_MODEL_LOADED( l_U348 ))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U555 )))
        {
            CREATE_OBJECT( l_U348, l_U317._fU0, l_U317._fU4, l_U317._fU8, ref l_U555, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U555 ))
        {
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U555, l_U350 );
            SET_OBJECT_COORDINATES( l_U555, l_U317._fU0, l_U317._fU4, l_U317._fU8 );
            SET_OBJECT_HEADING( l_U555, l_U341 );
            FREEZE_OBJECT_POSITION( l_U555, 1 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U348 );
        }
    }
    return;
}

void sub_16788()
{
    if (HAS_MODEL_LOADED( l_U349 ))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U556 )))
        {
            CREATE_OBJECT( l_U349, l_U320._fU0, l_U320._fU4, l_U320._fU8, ref l_U556, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U556 ))
        {
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U556, l_U350 );
            SET_OBJECT_COORDINATES( l_U556, l_U320._fU0, l_U320._fU4, l_U320._fU8 );
            SET_OBJECT_HEADING( l_U556, l_U342 );
            FREEZE_OBJECT_POSITION( l_U556, 1 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U349 );
        }
    }
    return;
}

void sub_17017(boolean bParam0)
{
    int I;

    I = 0;
    if (NOT (IS_CHAR_INJURED( sub_1354() )))
    {
        if (bParam0)
        {
            for ( I = 0; I <= 9; I++ )
            {
                GET_CHAR_WEAPON_IN_SLOT( sub_1354(), I, ref l_U573[I], ref l_U584[I], ref l_U595[I] );
                REMOVE_WEAPON_FROM_CHAR( sub_1354(), l_U573[I] );
            }
        }
        else
        {
            REMOVE_ALL_CHAR_WEAPONS( sub_1354() );
        }
        sub_17153();
    }
    return;
}

void sub_17153()
{
    return sub_17164( 1, 1 );
}

int sub_17164(boolean bParam0, unknown uParam1)
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

void sub_17266()
{
    sub_17279( ref g_U10496 );
    return;
}

void sub_17279(unknown uParam0)
{
    boolean bVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int I;

    bVar3 = false;
    sub_17293( 0, ref uVar4 );
    for ( I = 0; I < 10; I++ )
    {
        if (((NOT bVar3) == 1) AND ((I != 1) AND (I != 0)))
        {
            if (sub_19149( I, 0, 0 ))
            {
                (uParam0^) = I;
                bVar3 = true;
            }
        }
    }
    if (NOT bVar3)
    {
        (uParam0^) = 0;
    }
    return;
}

void sub_17293(unknown uParam0, int iParam1)
{
    switch (uParam0)
    {
        case 1:
        iParam1->_fU0 = g_U8789._fU0;
        iParam1->_fU4 = g_U8789._fU4;
        iParam1->_fU8 = g_U8789._fU8;
        iParam1->_fU12 = g_U8789._fU12;
        iParam1->_fU16 = g_U8789._fU16;
        iParam1->_fU20 = g_U8789._fU20;
        iParam1->_fU24 = g_U8789._fU24;
        break;
        case 0:
        sub_17492( iParam1 + 0 );
        sub_17839( iParam1 + 4 );
        sub_18081( iParam1 + 8 );
        sub_18302( iParam1 + 12 );
        sub_18508( iParam1 + 16 );
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
        break;
        case 2:
        iParam1->_fU0 = 0;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 3:
        iParam1->_fU0 = 1;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 4:
        iParam1->_fU0 = 2;
        iParam1->_fU4 = 1;
        iParam1->_fU8 = 1;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 5:
        iParam1->_fU0 = 3;
        iParam1->_fU4 = 2;
        iParam1->_fU8 = 1;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 6:
        iParam1->_fU0 = 4;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 7:
        iParam1->_fU0 = 5;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 8:
        iParam1->_fU0 = 6;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 9:
        iParam1->_fU0 = 7;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        default:
          case 10:
        iParam1->_fU0 = 8;
        iParam1->_fU4 = 3;
        iParam1->_fU8 = 2;
        iParam1->_fU12 = 1;
        iParam1->_fU16 = 1;
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
    }
    return;
}

void sub_17492(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_1354(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_1354(), 1 );
    bVar8 = false;
    for ( I = 0; I < 8; I++ )
    {
        if (NOT bVar8)
        {
            sub_17560( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 8;
    }
    return;
}

void sub_17560(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 2:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 3:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 4:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 5:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 6:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 7:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        default:
          case 8:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_17839(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_1354(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_1354(), 2 );
    bVar8 = false;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT bVar8)
        {
            sub_17907( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 3;
    }
    return;
}

void sub_17907(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 2:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        default:
          case 3:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_18081(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_1354(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_1354(), 5 );
    bVar8 = false;
    for ( I = 0; I < 2; I++ )
    {
        if (NOT bVar8)
        {
            sub_18149( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 2;
    }
    return;
}

void sub_18149(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        default:
          case 2:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_18302(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;

    GET_CHAR_PROP_INDEX( sub_1354(), 0, ref iVar3 );
    (uParam0^) = 1;
    bVar6 = false;
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT bVar6)
        {
            sub_18355( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == 0)
    {
        uVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_1354(), 8 );
        uVar8 = GET_CHAR_TEXTURE_VARIATION( sub_1354(), 8 );
    }
    if (NOT bVar6)
    {
        (uParam0^) = 1;
    }
    return;
}

void sub_18355(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = -1;
        break;
        default:
          case 1: (uParam1^) = 2147483647;
    }
    return;
}

void sub_18508(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_1354(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT bVar6)
        {
            sub_18557( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 1;
    }
    return;
}

void sub_18557(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = -1;
        break;
        default:
          case 1: (uParam1^) = 2147483647;
    }
    return;
}

int sub_19149(unknown uParam0, unknown uParam1, boolean bParam2)
{
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

    sub_17293( uParam0, ref uVar5 );
    sub_17293( uParam1, ref uVar12 );
    if ((NOT ((uVar12._fU0 == 8) || (uVar5._fU0 == 8))) AND (uVar5._fU0 != uVar12._fU0))
    {
        return 0;
    }
    if ((NOT ((uVar12._fU4 == 3) || (uVar5._fU4 == 3))) AND (uVar5._fU4 != uVar12._fU4))
    {
        return 0;
    }
    if ((NOT ((uVar12._fU8 == 2) || (uVar5._fU8 == 2))) AND (uVar5._fU8 != uVar12._fU8))
    {
        return 0;
    }
    if (bParam2)
    {
        if ((NOT ((uVar12._fU12 == 1) || (uVar5._fU12 == 1))) AND (uVar5._fU12 != uVar12._fU12))
        {
            return 0;
        }
        if ((NOT ((uVar12._fU16 == 1) || (uVar5._fU16 == 1))) AND (uVar5._fU16 != uVar12._fU16))
        {
            return 0;
        }
    }
    return 1;
}

void sub_19514()
{
    if (NOT (IS_CHAR_INJURED( l_U531 )))
    {
        if (NOT (sub_19549( l_U531, 80 )))
        {
            TASK_PLAY_ANIM( l_U531, "bookie_tictac", l_U343, 8.00000000, 1, 1, 1, 0, -2 );
        }
    }
    return;
}

int sub_19549(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    }
    else
    {
        return 0;
    }
    if (iVar4 != 7)
    {
        return 1;
        break;
    }
    return 0;
}

void sub_19678()
{
    int iVar2;

    GET_INTERIOR_FROM_CHAR( sub_1354(), ref iVar2 );
    if (iVar2 != nil)
    {
        if (l_U412 == 1)
        {
            STOP_STREAM();
            l_U412 = 0;
        }
        if (l_U414 == 1)
        {
            STOP_STREAM();
            l_U414 = 0;
        }
        if (l_U413 == 0)
        {
            if (NOT (GET_STREAM_PLAYTIME() == -1))
            {
                STOP_STREAM();
            }
            if (PRELOAD_STREAM( "FIGHT_CLUB_CROWD_STREAM_EXCITED" ))
            {
                PLAY_STREAM_FROM_PED( sub_1354() );
                l_U413 = 1;
            }
        }
    }
    else
    {
        sub_2662();
    }
    return;
}

void sub_19906()
{
    int iVar2;
    int I;

    sub_19915();
    sub_20002();
    sub_20121( 1 );
    sub_24059();
    sub_19678();
    if (l_U1133 != 4)
    {
        sub_25077( "good1" );
        sub_25625( "good1" );
        sub_26231();
    }
    if ((l_U963 != 9) AND (l_U963 != 8))
    {
        switch (l_U1133)
        {
            case 0:
            sub_26918();
            sub_9371();
            sub_26981();
            sub_28300();
            sub_2229( 0 );
            l_U640 = 0;
            sub_17153();
            sub_28681( l_U411 );
            switch (l_U972)
            {
                case 0:
                switch (l_U974)
                {
                    case 0: break;
                    default:
                }
                break;
                case 6:
                PRINTNL();
                PRINTSTRING( "ROUND_A" );
                switch (l_U974)
                {
                    case 0:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_1" );
                    PRINT_NOW( "RoundA", 7500, 3 );
                    if (sub_29202( ref l_U532[0], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 1, 1, 300, 0 ))
                    {
                        sub_30670( 0, l_U532[0] );
                        l_U1133 = 2;
                    }
                    break;
                    case 1:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_2" );
                    if (sub_29202( ref l_U532[1], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 1, 0, 300, 0 ))
                    {
                        sub_30670( 1, l_U532[1] );
                        l_U1133 = 2;
                    }
                    break;
                    case 2:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_3" );
                    if (sub_29202( ref l_U532[3], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 1, 0, 300, 0 ))
                    {
                        sub_30670( 3, l_U532[3] );
                        l_U1133 = 2;
                    }
                    break;
                }
                break;
                case 5:
                PRINTNL();
                PRINTSTRING( "ROUND_B" );
                switch (l_U974)
                {
                    case 0:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_1" );
                    PRINT_NOW( "RoundB", 7500, 3 );
                    if (sub_29202( ref l_U532[0], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 0, 1, 200, 0 ))
                    {
                        sub_30670( 0, l_U532[0] );
                        l_U1133 = 2;
                    }
                    break;
                    case 1:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_2" );
                    if (sub_29202( ref l_U532[1], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 0, 0, 200, 0 ))
                    {
                        sub_30670( 1, l_U532[1] );
                        l_U1133 = 2;
                    }
                    break;
                    case 2:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_3" );
                    if (sub_29202( ref l_U532[3], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 1, 0, 200, 0 ))
                    {
                        sub_30670( 3, l_U532[3] );
                        l_U1133 = 2;
                    }
                    break;
                }
                break;
                case 4:
                PRINTNL();
                PRINTSTRING( "ROUND_C" );
                switch (l_U974)
                {
                    case 0:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_1" );
                    PRINT_NOW( "RoundC", 7500, 3 );
                    if (sub_29202( ref l_U532[0], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 0, 1, 200, 0 ))
                    {
                        sub_30670( 0, l_U532[0] );
                        l_U1133 = 2;
                    }
                    break;
                    case 1:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_2" );
                    if (sub_29202( ref l_U532[1], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 0, 0, 200, 0 ))
                    {
                        sub_30670( 1, l_U532[1] );
                        l_U1133 = 2;
                    }
                    break;
                    case 2:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_3" );
                    if (sub_29202( ref l_U532[3], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 1, 0, 200, 0 ))
                    {
                        sub_30670( 3, l_U532[3] );
                        l_U1133 = 2;
                    }
                    break;
                }
                break;
                case 3:
                PRINTNL();
                PRINTSTRING( "ROUND_D" );
                switch (l_U974)
                {
                    case 0:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_1" );
                    PRINT_NOW( "RoundD", 7500, 3 );
                    if (sub_29202( ref l_U532[0], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 0, 0, 200, 0 ))
                    {
                        sub_30670( 0, l_U532[0] );
                        l_U1133 = 2;
                    }
                    break;
                    case 1:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_2" );
                    if (sub_29202( ref l_U532[1], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 0, 1, 200, 0 ))
                    {
                        sub_30670( 1, l_U532[1] );
                        l_U1133 = 2;
                    }
                    break;
                    case 2:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_3" );
                    if (sub_29202( ref l_U532[3], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 1, 0, 200, 0 ))
                    {
                        sub_30670( 3, l_U532[3] );
                        l_U1133 = 2;
                    }
                    break;
                }
                break;
                case 2:
                PRINTNL();
                PRINTSTRING( "ROUND_E" );
                switch (l_U974)
                {
                    case 0:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_1" );
                    PRINT_NOW( "RoundE", 7500, 3 );
                    if (sub_29202( ref l_U532[0], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 0, 0, 170, 1 ))
                    {
                        sub_30670( 0, l_U532[0] );
                        l_U1133 = 2;
                    }
                    break;
                    case 1:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_2" );
                    if (sub_29202( ref l_U532[2], l_U131[2]._fU0, l_U131[2]._fU4, l_U131[2]._fU8, 360, 0, 0, 170, 0 ))
                    {
                        sub_30670( 2, l_U532[2] );
                        l_U1133 = 2;
                    }
                    break;
                    case 2:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_3" );
                    if (sub_29202( ref l_U532[3], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 0, 0, 170, 0 ))
                    {
                        sub_30670( 3, l_U532[3] );
                        l_U1133 = 2;
                    }
                    break;
                }
                break;
                case 1:
                PRINTNL();
                PRINTSTRING( " ROUND_F" );
                switch (l_U974)
                {
                    case 0:
                    PRINTNL();
                    PRINTSTRING( " FIGHT_1" );
                    PRINT_NOW( "RoundF", 7500, 3 );
                    if (sub_29202( ref l_U532[0], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 0, 0, 150, 1 ))
                    {
                        sub_30670( 0, l_U532[0] );
                        l_U1133 = 2;
                    }
                    break;
                    case 1:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_2" );
                    if (sub_29202( ref l_U532[1], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 0, 0, 140, 1 ))
                    {
                        sub_30670( 1, l_U532[1] );
                        l_U1133 = 2;
                    }
                    break;
                    case 2:
                    PRINTNL();
                    PRINTSTRING( "FIGHT_3" );
                    if (sub_29202( ref l_U532[3], l_U131[0]._fU0, l_U131[0]._fU4, l_U131[0]._fU8, 360, 0, 0, 140, 1 ))
                    {
                        sub_30670( 3, l_U532[3] );
                        l_U1133 = 2;
                    }
                    break;
                }
                break;
            }
            GET_GAME_TIMER( ref l_U1003 );
            l_U1226 = 0;
            break;
            case 2:
            sub_26981();
            sub_28681( l_U411 );
            sub_33134( 1, l_U532[0], l_U411 );
            sub_33134( 1, l_U532[1], l_U411 );
            sub_33134( 1, l_U532[2], l_U411 );
            sub_33134( 1, l_U532[3], l_U411 );
            sub_33734( l_U532[0] );
            sub_33734( l_U532[1] );
            sub_33734( l_U532[2] );
            sub_33734( l_U532[3] );
            sub_34099( l_U532[0] );
            sub_34099( l_U532[1] );
            sub_34099( l_U532[2] );
            sub_34099( l_U532[3] );
            sub_34487();
            sub_34663( l_U532[0] );
            sub_34663( l_U532[1] );
            sub_34663( l_U532[2] );
            sub_34663( l_U532[3] );
            sub_34994();
            switch (l_U972)
            {
                case 6:
                switch (l_U974)
                {
                    case 0:
                    if (IS_CHAR_INJURED( l_U532[0] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        sub_35249( l_U532[0] );
                        l_U1133 = 0;
                        l_U974 = 1;
                    }
                    break;
                    case 1:
                    if (IS_CHAR_INJURED( l_U532[1] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        sub_35249( l_U532[1] );
                        l_U1133 = 0;
                        l_U974 = 2;
                    }
                    break;
                    case 2:
                    if (IS_CHAR_INJURED( l_U532[3] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        l_U1133 = 5;
                        l_U974 = 0;
                        l_U972 = 2;
                    }
                    break;
                }
                sub_35400( 2, 1 );
                break;
                case 5:
                switch (l_U974)
                {
                    case 0:
                    if (IS_CHAR_INJURED( l_U532[0] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        sub_35249( l_U532[0] );
                        l_U1133 = 0;
                        l_U974 = 1;
                    }
                    break;
                    case 1:
                    if (IS_CHAR_INJURED( l_U532[1] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        sub_35249( l_U532[1] );
                        l_U1133 = 0;
                        l_U974 = 2;
                    }
                    break;
                    case 2:
                    if (IS_CHAR_INJURED( l_U532[3] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        l_U1133 = 4;
                        l_U974 = 0;
                        l_U972 = 6;
                    }
                    break;
                }
                sub_35400( 6, 0 );
                break;
                case 4:
                switch (l_U974)
                {
                    case 0:
                    if (IS_CHAR_INJURED( l_U532[0] ))
                    {
                        sub_35249( l_U532[0] );
                        INCREMENT_INT_STAT( 209, 1 );
                        l_U1133 = 0;
                        l_U974 = 1;
                    }
                    break;
                    case 1:
                    if (IS_CHAR_INJURED( l_U532[1] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        sub_35249( l_U532[1] );
                        l_U1133 = 0;
                        l_U974 = 2;
                    }
                    break;
                    case 2:
                    if (IS_CHAR_INJURED( l_U532[3] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        l_U1133 = 4;
                        l_U974 = 0;
                        l_U972 = 5;
                    }
                    break;
                }
                sub_35400( 5, 0 );
                break;
                case 3:
                switch (l_U974)
                {
                    case 0:
                    if (IS_CHAR_INJURED( l_U532[0] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        sub_35249( l_U532[0] );
                        l_U1133 = 0;
                        l_U974 = 1;
                    }
                    break;
                    case 1:
                    if (IS_CHAR_INJURED( l_U532[1] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        sub_35249( l_U532[1] );
                        l_U1133 = 0;
                        l_U974 = 2;
                    }
                    break;
                    case 2:
                    if (IS_CHAR_INJURED( l_U532[3] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        l_U1133 = 4;
                        l_U974 = 0;
                        l_U972 = 4;
                    }
                    break;
                }
                sub_35400( 4, 0 );
                break;
                case 2:
                switch (l_U974)
                {
                    case 0:
                    if (IS_CHAR_INJURED( l_U532[0] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        sub_35249( l_U532[0] );
                        l_U1133 = 0;
                        l_U974 = 1;
                    }
                    break;
                    case 1:
                    if (IS_CHAR_INJURED( l_U532[2] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        sub_35249( l_U532[2] );
                        l_U1133 = 0;
                        l_U974 = 2;
                    }
                    break;
                    case 2:
                    if (IS_CHAR_INJURED( l_U532[3] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        l_U1133 = 4;
                        l_U974 = 0;
                        l_U972 = 3;
                    }
                    break;
                }
                sub_35400( 3, 0 );
                break;
                case 1:
                switch (l_U974)
                {
                    case 0:
                    if (IS_CHAR_INJURED( l_U532[0] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        sub_35249( l_U532[0] );
                        l_U1133 = 0;
                        l_U974 = 1;
                    }
                    break;
                    case 1:
                    if (IS_CHAR_INJURED( l_U532[1] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        sub_35249( l_U532[1] );
                        l_U1133 = 0;
                        l_U974 = 2;
                    }
                    break;
                    case 2:
                    if (IS_CHAR_INJURED( l_U532[3] ))
                    {
                        INCREMENT_INT_STAT( 209, 1 );
                        l_U1133 = 4;
                        l_U974 = 0;
                        l_U972 = 2;
                    }
                    break;
                }
                sub_35400( 2, 0 );
                break;
            }
            break;
            case 4:
            sub_36547();
            switch (l_U964)
            {
                case 0:
                GET_GAME_TIMER( ref l_U997 );
                l_U964 = 1;
                break;
                case 1:
                GET_GAME_TIMER( ref l_U998 );
                l_U999 = l_U998 - l_U997;
                if (l_U999 > 1000)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        DO_SCREEN_FADE_OUT( 3000 );
                        l_U964 = 3;
                    }
                }
                break;
                case 3:
                if (IS_SCREEN_FADED_OUT())
                {
                    l_U1021._fU0 = {-384.33070000, 1492.90700000, 9.98914100};
                    l_U1021._fU12 = {16.66005000, -0.00000000, 96.67165000};
                    l_U1021._fU96 = {-387.09010000, 1492.58500000, 10.82055000};
                    l_U1021._fU108 = {16.31627000, -0.00000000, 88.53564000};
                    l_U1021._fU120 = 45;
                    l_U1021._fU124 = 7500;
                    sub_38037();
                    SET_PLAYER_CONTROL( sub_1261(), 0 );
                    SET_CHAR_COORDINATES( sub_1354(), l_U151._fU0, l_U151._fU4, l_U151._fU8 );
                    SET_CHAR_HEADING( sub_1354(), l_U339 );
                    BEGIN_CAM_COMMANDS( ref l_U985 );
                    sub_7305( l_U1021, 0 );
                    sub_1222( 1 );
                    DO_SCREEN_FADE_IN( 3000 );
                    l_U964 = 4;
                }
                break;
                case 4:
                g_U43637 = 1;
                l_U1176 = 0;
                PRINT_NOW( "finFC", 7500, 3 );
                PRINT_HELP_FOREVER( "FightChoice" );
                GET_GAME_TIMER( ref l_U997 );
                sub_38294();
                sub_38835();
                DISPLAY_CASH( 1 );
                DISPLAY_RADAR( 1 );
                GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar2 );
                if (iVar2 < 30)
                {
                    TASK_PLAY_ANIM( sub_1354(), "Stactic_Celeb_A", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                }
                else if (iVar2 < 60)
                {
                    TASK_PLAY_ANIM( sub_1354(), "Stactic_Celeb_B", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                }
                else
                {
                    TASK_PLAY_ANIM( sub_1354(), "Stactic_Celeb_C", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                }
                PLAY_SOUND_FROM_POSITION( -1, "FIGHT_CLUB_ROAR_WIN", l_U115 );
                l_U964 = 5;
                break;
                case 5:
                sub_36547();
                DISPLAY_RADAR( 1 );
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_39292())
                    {
                        CLEAR_PRINTS();
                        CLEAR_HELP();
                        DO_SCREEN_FADE_OUT( 3000 );
                        DISPLAY_CASH( 0 );
                        l_U964 = 7;
                    }
                    else if (sub_8090())
                    {
                        if (IS_SCORE_GREATER( sub_1261(), 49 ))
                        {
                            ADD_SCORE( sub_1261(), 65486 );
                            INCREMENT_INT_STAT( 236, 50 );
                            CLEAR_PRINTS();
                            CLEAR_HELP();
                            l_U1012 = 0;
                            DO_SCREEN_FADE_OUT( 3000 );
                            DISPLAY_CASH( 0 );
                            l_U964 = 0;
                            l_U1133 = 0;
                            l_U963 = 5;
                        }
                        else
                        {
                            PRINT_NOW( "NoCashFC", 7500, 1 );
                        }
                    }
                    else if (sub_8504())
                    {
                        CLEAR_PRINTS();
                        CLEAR_HELP();
                        l_U964 = 0;
                        l_U1133 = 0;
                        l_U963 = 8;
                    };;;
                }
                break;
                case 7:
                if (IS_SCREEN_FADED_OUT())
                {
                    sub_17017( 0 );
                    l_U987 = 0;
                    sub_5190();
                    sub_10007();
                    sub_26918();
                    sub_1222( 0 );
                    END_CAM_COMMANDS( ref l_U985 );
                    CLEAR_PRINTS();
                    for ( I = 0; I <= 1; I++ )
                    {
                        if (DOES_PICKUP_EXIST( l_U1116[I] ))
                        {
                            REMOVE_PICKUP( l_U1116[I] );
                        }
                    }
                    DO_SCREEN_FADE_IN( 3000 );
                    l_U964 = 8;
                }
                break;
                case 8:
                l_U964 = 0;
                l_U1133 = 0;
                break;
            }
            break;
            case 5:
            sub_36547();
            switch (l_U964)
            {
                case 0:
                if (IS_SCREEN_FADED_IN())
                {
                    DO_SCREEN_FADE_OUT( 3000 );
                    l_U964 = 3;
                }
                break;
                case 3:
                if (IS_SCREEN_FADED_OUT())
                {
                    l_U1021._fU0 = {-385.40770000, 1490.07800000, 11.21521000};
                    l_U1021._fU12 = {-385.40770000, 1490.07800000, 11.21521000};
                    l_U1021._fU96 = {-383.66000000, 1493.54600000, 10.83328000};
                    l_U1021._fU108 = {-3.82530400, 0.00000000, 115.27150000};
                    l_U1021._fU120 = 45;
                    l_U1021._fU124 = 10000;
                    g_U10482++;
                    AWARD_ACHIEVEMENT( 59 );
                    l_U1020 = 1;
                    PLAY_SOUND_FROM_POSITION( -1, "FIGHT_CLUB_ROAR_WIN", l_U115 );
                    sub_40046( 6 );
                    g_U10483 = 1;
                    SET_CHAR_COORDINATES( sub_1354(), -385.73340000, 1492.58600000, 9.71540000 );
                    SET_CHAR_HEADING( sub_1354(), 146.05600000 );
                    DO_SCREEN_FADE_IN( 3000 );
                    l_U964 = 4;
                }
                break;
                case 4:
                BEGIN_CAM_COMMANDS( ref l_U985 );
                sub_7305( l_U1021, 0 );
                sub_1222( 1 );
                PRINT_NOW( "Belt", 7500, 3 );
                GET_GAME_TIMER( ref l_U997 );
                sub_40782();
                TASK_PLAY_ANIM( sub_1354(), "Celeb_B", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                l_U964 = 5;
                break;
                case 5:
                sub_36547();
                GET_GAME_TIMER( ref l_U998 );
                l_U999 = l_U998 - l_U997;
                if (l_U999 > l_U1021._fU124)
                {
                    DO_SCREEN_FADE_OUT( 3000 );
                    GET_GAME_TIMER( ref l_U997 );
                    l_U964 = 6;
                }
                break;
                case 6:
                ADD_SCORE( sub_1261(), 4000 );
                INCREMENT_INT_STAT( 229, 4000 );
                l_U974 = 0;
                l_U972 = 1;
                l_U964 = 7;
                break;
                case 7:
                if (IS_SCREEN_FADED_OUT())
                {
                    sub_17017( 0 );
                    l_U987 = 0;
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1354() );
                    sub_5190();
                    sub_10007();
                    sub_26918();
                    CLEAR_PRINTS();
                    l_U964 = 8;
                }
                break;
                case 8:
                l_U1133 = 0;
                l_U964 = 0;
                l_U963 = 8;
                break;
            }
            break;
        }
    }
    return;
}

void sub_19915()
{
    if ((NOT l_U1011) AND (l_U1010))
    {
        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            l_U1011 = 1;
        }
    }
    if (NOT l_U1010)
    {
        PRINT_HELP( "hlpCntr" );
        l_U1010 = 1;
    }
    return;
}

void sub_20002()
{
    int I;

    for ( I = 0; I <= 14; I++ )
    {
        if (DOES_CHAR_EXIST( l_U532[I] ))
        {
            if (DOES_BLIP_EXIST( l_U557[I] ))
            {
                if (IS_CHAR_INJURED( l_U532[I] ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U557[I] );
                }
            }
        }
    }
    return;
}

void sub_20121(unknown uParam0)
{
    switch (l_U676)
    {
        case 0:
        l_U411 = 0;
        if (l_U676 != 1)
        {
            if (sub_20192( l_U550[0] ))
            {
                l_U548 = l_U550[0];
                l_U676 = 1;
            }
        }
        if (l_U676 != 1)
        {
            if (sub_20192( l_U550[1] ))
            {
                l_U548 = l_U550[1];
                l_U676 = 1;
            }
        }
        if (l_U676 != 1)
        {
            if (sub_20192( l_U550[2] ))
            {
                l_U548 = l_U550[2];
                l_U676 = 1;
            }
        }
        if (l_U676 != 1)
        {
            if (sub_20192( l_U532[0] ))
            {
                l_U548 = l_U532[0];
                l_U676 = 1;
            }
        }
        if (l_U676 != 1)
        {
            if (sub_20192( l_U532[1] ))
            {
                l_U548 = l_U532[1];
                l_U676 = 1;
            }
        }
        if (l_U676 != 1)
        {
            if (sub_20192( l_U532[2] ))
            {
                l_U548 = l_U532[2];
                l_U676 = 1;
            }
        }
        if (l_U676 != 1)
        {
            if (sub_20192( l_U532[3] ))
            {
                l_U548 = l_U532[3];
                l_U676 = 1;
            }
        }
        break;
        case 1:
        if (sub_21583() != nil)
        {
            l_U676 = 2;
        }
        else
        {
            l_U548 = nil;
            l_U676 = 0;
        }
        break;
        case 2:
        if (sub_21850( l_U549, l_U548, uParam0 ))
        {
            sub_22738( l_U548 );
        }
        break;
    }
    return;
}

int sub_20192(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    vector vVar9;
    vector vVar12;

    vVar3 = {-395.31000000, 1489.32000000, 9.71030100};
    vVar6 = {-382.50000000, 1483.55800000, 9.71030100};
    vVar9 = {-376.85460000, 1495.97300000, 9.71030100};
    vVar12 = {-389.40000000, 1501.85000000, 9.71030100};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANGLED_AREA_3D( uParam0, vVar3.x, vVar3.y, vVar3.z - 3, vVar6.x, vVar6.y, vVar6.z + 3, 1, 0 ))
        {
            GET_CHAR_COORDINATES( uParam0, ref l_U326._fU0, ref l_U326._fU4, ref l_U326._fU8 );
            sub_20369( 0 );
            return 1;
        }
        if (IS_CHAR_IN_ANGLED_AREA_3D( uParam0, vVar6.x, vVar6.y, vVar6.z - 3, vVar9.x, vVar9.y, vVar9.z + 3, 1, 0 ))
        {
            GET_CHAR_COORDINATES( uParam0, ref l_U326._fU0, ref l_U326._fU4, ref l_U326._fU8 );
            sub_20369( 3 );
            return 1;
        }
        if (IS_CHAR_IN_ANGLED_AREA_3D( uParam0, vVar9.x, vVar9.y, vVar9.z - 3, vVar12.x, vVar12.y, vVar12.z + 3, 1, 0 ))
        {
            GET_CHAR_COORDINATES( uParam0, ref l_U326._fU0, ref l_U326._fU4, ref l_U326._fU8 );
            sub_20369( 1 );
            return 1;
        }
        if (IS_CHAR_IN_ANGLED_AREA_3D( uParam0, vVar12.x, vVar12.y, vVar12.z - 3, vVar3.x, vVar3.y, vVar3.z + 3, 1, 0 ))
        {
            GET_CHAR_COORDINATES( uParam0, ref l_U326._fU0, ref l_U326._fU4, ref l_U326._fU8 );
            sub_20369( 2 );
            return 1;
        }
    }
    return 0;
}

void sub_20369(int iParam0)
{
    if (iParam0 == 0)
    {
        l_U329 = {sub_20400( 0, l_U326, -0.50000000 )};
    }
    else if (iParam0 == 1)
    {
        l_U329 = {sub_20400( 2, l_U326, -0.50000000 )};
    }
    else if (iParam0 == 2)
    {
        l_U329 = {sub_20400( 1, l_U326, -0.50000000 )};
    }
    else if (iParam0 == 3)
    {
        l_U329 = {sub_20400( 3, l_U326, -0.50000000 )};
    };;;;
    GET_HEADING_FROM_VECTOR_2D( l_U326._fU0 - l_U329._fU0, l_U326._fU4 - l_U329._fU4, ref l_U335 );
    return;
}

void sub_20400(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    vector[4] vVar7;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    vector[4] vVar20;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;

    array(ref vVar7, 4);
    vVar7[0] = {0.42000000, 0.91000000, 0.00000000};
    vVar7[1] = {0.91000000, -0.42000000, -0.00000000};
    vVar7[2] = {-0.42000000, -0.91000000, -0.00000000};
    vVar7[3] = {-0.91000000, 0.42000000, -0.00000000};
    array(ref vVar20, 4);
    vVar20[0] = {-386.03000000, 1485.81000000, 10.33000000};
    vVar20[1] = {-392.78000000, 1493.25000000, 11.20000000};
    vVar20[2] = {-385.46000000, 1499.46000000, 11.10000000};
    vVar20[3] = {-379.68000000, 1490.96000000, 10.51000000};
    return sub_20621( vVar7[uParam0], vVar20[uParam0], uParam1, uParam4 );
}

void sub_20621(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    float fVar12;
    unknown Result;
    unknown uVar14;
    unknown uVar15;

    fVar12 = sub_20639( uParam0, uParam3, uParam6 );
    fVar12 -= uParam9;
    Result._fU0 = uParam6._fU0 - (uParam0._fU0 * fVar12);
    Result._fU4 = uParam6._fU4 - (uParam0._fU4 * fVar12);
    Result._fU8 = uParam6._fU8 - (uParam0._fU8 * fVar12);
    return Result;
}

float sub_20639(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    float fVar11;

    fVar11 = -sub_20654( uParam0, uParam3 );
    return (sub_20654( uParam0, uParam6 )) + fVar11;
}

float sub_20654(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return ((uParam0._fU0 * uParam3._fU0) + (uParam0._fU4 * uParam3._fU4)) + (uParam0._fU8 * uParam3._fU8);
}

void sub_21583()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int I;

    for ( I = 0; I <= 52; I++ )
    {
        if (DOES_CHAR_EXIST( l_U477[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U477[I] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U548 )))
                {
                    GET_CHAR_COORDINATES( l_U477[I], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    GET_CHAR_COORDINATES( l_U548, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                    if ((VDIST( uVar5, uVar2 )) < 1.00000000)
                    {
                        l_U549 = l_U477[I];
                        if (l_U549 != nil)
                        {
                            return l_U549;
                        }
                    }
                }
            }
        }
    }
    return nil;
}

int sub_21850(unknown uParam0, int iParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_INJURED( iParam1 )))
        {
            switch (l_U675)
            {
                case 0:
                if (NOT (IS_CHAR_INJURED( uParam0 )))
                {
                    CLEAR_CHAR_TASKS( uParam0 );
                    TASK_CHAR_SLIDE_TO_COORD( uParam0, l_U329._fU0, l_U329._fU4, l_U329._fU8, l_U335, 0.85000000 );
                }
                if (NOT (IS_CHAR_INJURED( iParam1 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam1, 1 );
                    CLEAR_CHAR_TASKS( iParam1 );
                    TASK_CHAR_SLIDE_TO_COORD( iParam1, l_U326._fU0, l_U326._fU4, l_U326._fU8, l_U335, 0.85000000 );
                }
                l_U411 = 1;
                if (iParam1 == sub_1354())
                {
                    SET_PLAYER_CONTROL( sub_1261(), 0 );
                }
                else
                {
                    g_U43571 = 1;
                }
                GET_GAME_TIMER( ref l_U109 );
                CLEAR_HELP();
                if (iParam1 == sub_1354())
                {
                    PRINT_HELP( "FCBashBut" );
                }
                l_U675 = 1;
                break;
                case 1:
                GET_GAME_TIMER( ref l_U110 );
                l_U111 = l_U110 - l_U109;
                if (l_U111 > 5000)
                {
                    l_U675 = 6;
                }
                if (iParam1 == sub_1354())
                {
                    if (sub_22277() == 1)
                    {
                        CLEAR_CHAR_TASKS( iParam1 );
                        CLEAR_CHAR_TASKS( uParam0 );
                        l_U673 = 0.00000000;
                        l_U675 = 6;
                    }
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, l_U329._fU0, l_U329._fU4, l_U329._fU8, 0.25000000, 0.25000000, 1, 0 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( iParam1, l_U326._fU0, l_U326._fU4, l_U326._fU8, 0.25000000, 0.25000000, 1, 0 ))
                    {
                        if (NOT (sub_19549( uParam0, 68 )))
                        {
                            if (NOT (sub_19549( iParam1, 68 )))
                            {
                                l_U675 = 2;
                            }
                        }
                    }
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( iParam1, l_U326._fU0, l_U326._fU4, l_U326._fU8, 1.00000000, 1.00000000, 1.00000000, 0 )))
                {
                    sub_22738( iParam1 );
                }
                break;
                case 2:
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( iParam1, l_U326._fU0, l_U326._fU4, l_U326._fU8, 1.00000000, 1.00000000, 1.00000000, 0 )))
                {
                    sub_22738( iParam1 );
                }
                l_U675 = 3;
                break;
                case 3:
                if (iParam1 == sub_1354())
                {
                    if (sub_22277() == 1)
                    {
                        CLEAR_CHAR_TASKS( iParam1 );
                        CLEAR_CHAR_TASKS( uParam0 );
                        l_U673 = 0.00000000;
                        l_U675 = 6;
                    }
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( iParam1, l_U326._fU0, l_U326._fU4, l_U326._fU8, 1.00000000, 1.00000000, 1.00000000, 0 )))
                {
                    sub_22738( iParam1 );
                }
                if (NOT (sub_19549( uParam0, 80 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U677 );
                    TASK_PLAY_ANIM( 0, "Luis_Grabbed_Intro", l_U343, 8.00000000, 0, 1, 1, 0, -2 );
                    TASK_PLAY_ANIM( 0, "Luis_Grabbed_Loop", l_U343, 8.00000000, 0, 1, 1, 0, 20000 );
                    CLOSE_SEQUENCE_TASK( l_U677 );
                    TASK_PERFORM_SEQUENCE( iParam1, l_U677 );
                    CLEAR_SEQUENCE_TASK( l_U677 );
                    OPEN_SEQUENCE_TASK( ref l_U678 );
                    TASK_PLAY_ANIM( 0, "Crowd_Grab_Intro", l_U343, 8.00000000, 0, 1, 1, 0, -2 );
                    TASK_PLAY_ANIM( 0, "Crowd_Grab_Loop", l_U343, 8.00000000, 0, 1, 1, 0, 20000 );
                    CLOSE_SEQUENCE_TASK( l_U678 );
                    TASK_PERFORM_SEQUENCE( uParam0, l_U678 );
                    CLEAR_SEQUENCE_TASK( l_U678 );
                    GET_GAME_TIMER( ref l_U109 );
                    SAY_AMBIENT_SPEECH( iParam1, "CROWD_GRAB", 1, 1, 2 );
                    CLEAR_CHAR_LAST_DAMAGE_ENTITY( iParam1 );
                    l_U675 = 4;
                }
                break;
                case 4:
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( iParam1, l_U326._fU0, l_U326._fU4, l_U326._fU8, 1.00000000, 1.00000000, 1.00000000, 0 )))
                {
                    sub_22738( iParam1 );
                }
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam1, sub_1354(), 0 ))
                {
                    sub_23413( iParam1, uParam0 );
                }
                if (iParam1 == sub_1354())
                {
                    if (sub_22277() == 1)
                    {
                        CLEAR_CHAR_TASKS( iParam1 );
                        CLEAR_CHAR_TASKS( uParam0 );
                        l_U673 = 0.00000000;
                        l_U675 = 6;
                    }
                }
                GET_GAME_TIMER( ref l_U110 );
                l_U111 = l_U110 - l_U109;
                if (l_U111 > 5000)
                {
                    l_U675 = 5;
                }
                if (NOT (sub_19549( iParam1, 29 )))
                {
                    l_U675 = 6;
                }
                break;
                case 5:
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam1, sub_1354(), 0 ))
                {
                    sub_23413( iParam1, uParam0 );
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( iParam1, l_U326._fU0, l_U326._fU4, l_U326._fU8, 1.00000000, 1.00000000, 1.00000000, 0 )))
                {
                    sub_22738( iParam1 );
                }
                TASK_PLAY_ANIM( iParam1, "Luis_Grabbed_Outro", l_U343, 8.00000000, 0, 1, 1, 0, -2 );
                TASK_PLAY_ANIM( uParam0, "Crowd_Grab_Outro", l_U343, 8.00000000, 0, 1, 1, 0, -2 );
                l_U675 = 6;
                break;
                case 6:
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam1, sub_1354(), 0 ))
                {
                    sub_23413( iParam1, uParam0 );
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( iParam1, l_U326._fU0, l_U326._fU4, l_U326._fU8, 1.00000000, 1.00000000, 1.00000000, 0 )))
                {
                    sub_22738( iParam1 );
                }
                if (NOT (sub_19549( iParam1, 80 )))
                {
                    sub_23413( iParam1, uParam0 );
                }
                break;
                case 7:
                GET_GAME_TIMER( ref l_U110 );
                l_U111 = l_U110 - l_U109;
                if (l_U111 > 20000)
                {
                    l_U675 = 8;
                }
                break;
                case 8:
                return 1;
                break;
            }
        }
    }
    return 0;
}

int sub_22277()
{
    unknown uVar2;

    if (IS_CONTROL_JUST_PRESSED( 2, 77 ))
    {
        l_U673 += 1.25000000;
        if (l_U674 == 0)
        {
            GET_GAME_TIMER( ref l_U670 );
            l_U674 = 1;
        }
    }
    if (l_U673 < 3.00000000)
    {
        l_U674 = 0;
    }
    if (l_U674 == 1)
    {
        GET_FRAME_TIME( ref uVar2 );
        GET_GAME_TIMER( ref l_U671 );
        l_U672 = l_U671 - l_U670;
        if (l_U672 > (500.00000000 * uVar2))
        {
            if (l_U673 > -0.05000000)
            {
                l_U673 -= 0.15000000;
            }
            GET_GAME_TIMER( ref l_U670 );
        }
    }
    if (l_U673 > 8.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_22738(int iParam0)
{
    if (iParam0 == sub_1354())
    {
        SET_PLAYER_CONTROL( sub_1261(), 1 );
    }
    l_U675 = 0;
    l_U676 = 0;
    return;
}

void sub_23413(unknown uParam0, unknown uParam1)
{
    l_U411 = 0;
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        CLEAR_CHAR_TASKS( uParam1 );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uParam0, 0 );
        CLEAR_CHAR_TASKS( uParam0 );
        TASK_COMBAT( uParam0, sub_1354() );
    }
    GET_GAME_TIMER( ref l_U109 );
    l_U675 = 7;
    return;
}

void sub_24059()
{
    GET_GAME_TIMER( ref l_U666 );
    l_U667 = l_U666 - l_U665;
    if (l_U667 > 1000)
    {
        sub_24109();
        GET_GAME_TIMER( ref l_U665 );
    }
    return;
}

void sub_24109()
{
    if (l_U664 == 0)
    {
        sub_24130();
        l_U664 = 1;
    }
    else if (l_U664 == 1)
    {
        sub_24434();
        l_U664 = 2;
    }
    else if (l_U664 == 2)
    {
        sub_24738();
        l_U664 = 0;
    };;;
    return;
}

void sub_24130()
{
    TRIGGER_PTFX( "FC_ROOF_DUST", 65149, 1494, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65150, 1491, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65152, 1489, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65153, 1494, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65151, 1495, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65147, 1493, 14, 0, 0, 0, 1065353216 );
    return;
}

void sub_24434()
{
    TRIGGER_PTFX( "FC_ROOF_DUST", 65149, 1492, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65152, 1495, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65151, 1493, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65149, 1491, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65150, 1496, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65152, 1490, 14, 0, 0, 0, 1065353216 );
    return;
}

void sub_24738()
{
    TRIGGER_PTFX( "FC_ROOF_DUST", 65151, 1487, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65149, 1488, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65149, 1493, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65151, 1493, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65153, 1491, 14, 0, 0, 0, 1065353216 );
    TRIGGER_PTFX( "FC_ROOF_DUST", 65150, 1493, 14, 0, 0, 0, 1065353216 );
    return;
}

void sub_25077(unknown uParam0)
{
    switch (l_U668)
    {
        case 0:
        if (((IS_CONTROL_JUST_PRESSED( 0, 86 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 0, 28 )) AND (IS_USING_CONTROLLER())))
        {
            if (NOT (IS_CHAR_INJURED( sub_1354() )))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( sub_1354(), l_U352, "taunt_03" )))
                {
                    TASK_PLAY_ANIM( sub_1354(), "taunt_03", l_U352, 1.00000000, 0, 1, 1, 0, -1 );
                    l_U668 = 1;
                }
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( sub_1354() )))
        {
            if (IS_CHAR_PLAYING_ANIM( sub_1354(), l_U352, "taunt_03" ))
            {
                if (sub_25317())
                {
                    CLEAR_CHAR_TASKS( sub_1354() );
                    l_U668 = 0;
                }
                GET_CHAR_ANIM_CURRENT_TIME( sub_1354(), l_U352, "taunt_03", ref l_U669 );
                if (l_U669 > 0.95000000)
                {
                    l_U668 = 2;
                }
            }
            else
            {
                l_U668 = 0;
            }
        }
        break;
        case 2:
        l_U105++;
        l_U668 = 0;
        break;
    }
    return;
}

int sub_25317()
{
    if ((sub_25365()) || ((IS_BUTTON_PRESSED( 0, 16 )) || ((IS_BUTTON_PRESSED( 0, 15 )) || ((IS_BUTTON_PRESSED( 0, 14 )) || (IS_BUTTON_PRESSED( 0, 17 ))))))
    {
        SET_PLAYER_CONTROL( sub_1261(), 1 );
        return 1;
    }
    return 0;
}

int sub_25365()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if (NOT IS_USING_CONTROLLER())
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar2, ref iVar3 );
    }
    if ((iVar2 < 65436) || (iVar2 > 100))
    {
        return 1;
    }
    if ((iVar3 < 65436) || (iVar3 > 100))
    {
        return 1;
    }
    return 0;
}

void sub_25625(unknown uParam0)
{
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    if (NOT (IS_CHAR_INJURED( sub_1354() )))
    {
        if (HAVE_ANIMS_LOADED( "melee_counters" ))
        {
            if (iVar3 > l_U104)
            {
                if (sub_25702())
                {
                    l_U104 = iVar3 + 5000;
                    l_U105++;
                }
            }
        }
    }
    return;
}

int sub_25702()
{
    if (HAVE_ANIMS_LOADED( "melee_counters" ))
    {
        if (NOT (IS_CHAR_INJURED( sub_1354() )))
        {
            if ((IS_CHAR_PLAYING_ANIM( sub_1354(), "melee_counters", "counter_back_3" )) || ((IS_CHAR_PLAYING_ANIM( sub_1354(), "melee_counters", "counter_back_2" )) || ((IS_CHAR_PLAYING_ANIM( sub_1354(), "melee_counters", "counter_back" )) || ((IS_CHAR_PLAYING_ANIM( sub_1354(), "melee_counters", "counter_left_3" )) || ((IS_CHAR_PLAYING_ANIM( sub_1354(), "melee_counters", "counter_left_2" )) || ((IS_CHAR_PLAYING_ANIM( sub_1354(), "melee_counters", "counter_left" )) || ((IS_CHAR_PLAYING_ANIM( sub_1354(), "melee_counters", "counter_right_3" )) || ((IS_CHAR_PLAYING_ANIM( sub_1354(), "melee_counters", "counter_right_2" )) || (IS_CHAR_PLAYING_ANIM( sub_1354(), "melee_counters", "counter_right" ))))))))))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_26231()
{
    int I;
    int iVar3;
    unknown uVar4;

    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_PICKUP_EXIST( l_U1116[I] ))
        {
            if (HAS_PICKUP_BEEN_COLLECTED( l_U1116[I] ))
            {
                l_U987--;
            }
        }
    }
    for ( I = 0; I <= 7; I++ )
    {
        if (DOES_PICKUP_EXIST( l_U1119[I] ))
        {
            if (HAS_PICKUP_BEEN_COLLECTED( l_U1119[I] ))
            {
                l_U988--;
            }
        }
    }
    GET_GAME_TIMER( ref iVar3 );
    if (iVar3 > l_U989)
    {
        sub_26415();
        GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref uVar4 );
        l_U989 = iVar3 + 5000;
    }
    return;
}

void sub_26415()
{
    int iVar2;

    if (l_U987 < 2)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 13, ref iVar2 );
        iVar2 += l_U105;
        if (iVar2 > 15)
        {
            sub_26465();
            l_U986 += l_U105;
            l_U105 = 0;
        }
    }
    return;
}

void sub_26465()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int I;
    int iVar10;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar2 );
    GENERATE_RANDOM_FLOAT_IN_RANGE( 118, 124, ref uVar3._fU0 );
    GENERATE_RANDOM_FLOAT_IN_RANGE( 736, 747, ref uVar3._fU4 );
    uVar3._fU8 = 8;
    GET_SAFE_PICKUP_COORDS( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT (DOES_PICKUP_EXIST( l_U1116[I] )))
        {
            iVar10 = I;
        }
    }
    l_U987++;
    switch (uVar2)
    {
        case 0:
        CREATE_PICKUP( 1758564455, 22, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref l_U1116[iVar10], 0 );
        break;
        case 1:
        case 2:
        CREATE_PICKUP( 1069950328, 24, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref l_U1116[iVar10], 0 );
        break;
        case 3:
        CREATE_PICKUP( 1040104843, 22, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref l_U1116[iVar10], 0 );
        break;
    }
    return;
}

void sub_26918()
{
    int I;

    for ( I = 0; I <= 52; I++ )
    {
        l_U415[I] = 0;
    }
    l_U660 = 0;
    return;
}

void sub_26981()
{
    int I;
    unknown uVar3;
    int iVar4;

    switch (l_U636)
    {
        case 0:
        for ( I = 0; I <= 52; I++ )
        {
            if ((I mod l_U637) == 0)
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar4 );
                if (iVar4 < 80)
                {
                    sub_12361( l_U477[I] );
                }
                else
                {
                    sub_27098( l_U477[I] );
                }
                l_U636 = 1;
                GET_GAME_TIMER( ref l_U112 );
            }
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U113 );
        l_U114 = l_U113 - l_U112;
        if (l_U114 > 1000)
        {
            l_U636 = 0;
            GENERATE_RANDOM_INT_IN_RANGE( 1, 11, ref l_U637 );
        }
        break;
    }
    return;
}

void sub_27098(unknown uParam0)
{
    sub_27107();
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SAY_AMBIENT_SPEECH_WITH_VOICE( uParam0, "GANG_FIGHT_CHEER", l_U353, 1, 1, 1 );
    }
    return;
}

void sub_27107()
{
    int iVar2;

    iVar2 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 22, ref iVar2 );
    if (iVar2 == 0)
    {
        l_U353 = "M_Y_GAFR_HI_01_FULL_01";
    }
    else if (iVar2 == 1)
    {
        l_U353 = "M_Y_GAFR_HI_02_FULL_01";
    }
    else if (iVar2 == 2)
    {
        l_U353 = "M_Y_GAFR_HI_02_GANG_01";
    }
    else if (iVar2 == 3)
    {
        l_U353 = "M_Y_GAFR_LO_01_FULL_01";
    }
    else if (iVar2 == 4)
    {
        l_U353 = "M_Y_GAFR_LO_01_GANG_01";
    }
    else if (iVar2 == 5)
    {
        l_U353 = "M_Y_GAFR_LO_02_FULL_01";
    }
    else if (iVar2 == 6)
    {
        l_U353 = "M_Y_GAFR_LO_02_GANG_01";
    }
    else if (iVar2 == 7)
    {
        l_U353 = "M_Y_GAFR_LO_02_GANG_02";
    }
    else if (iVar2 == 8)
    {
        l_U353 = "M_Y_GIRI_LO_01_FULL_01";
    }
    else if (iVar2 == 9)
    {
        l_U353 = "M_Y_GIRI_LO_01_GANG_01";
    }
    else if (iVar2 == 10)
    {
        l_U353 = "M_Y_GIRI_LO_03_FULL_01";
    }
    else if (iVar2 == 11)
    {
        l_U353 = "M_Y_GIRI_LO_03_GANG_01";
    }
    else if (iVar2 == 12)
    {
        l_U353 = "M_Y_GMAF_HI_01_FULL_01";
    }
    else if (iVar2 == 13)
    {
        l_U353 = "M_Y_GMAF_HI_01_GANG_01";
    }
    else if (iVar2 == 14)
    {
        l_U353 = "M_Y_GMAF_HI_02_FULL_01";
    }
    else if (iVar2 == 15)
    {
        l_U353 = "M_Y_GMAF_HI_02_GANG_01";
    }
    else if (iVar2 == 16)
    {
        l_U353 = "M_Y_GMAF_HI_02_GANG_02";
    }
    else if (iVar2 == 17)
    {
        l_U353 = "M_Y_GMAF_LO_01_FULL_01";
    }
    else if (iVar2 == 18)
    {
        l_U353 = "M_Y_GMAF_LO_01_GANG_01";
    }
    else if (iVar2 == 19)
    {
        l_U353 = "M_Y_GMAF_LO_01_GANG_02";
    }
    else if (iVar2 == 20)
    {
        l_U353 = "M_Y_GMAF_LO_02_FULL_01";
    }
    else if (iVar2 == 21)
    {
        l_U353 = "M_Y_GMAF_LO_02_GANG_01";
    }
    else
    {
        l_U353 = "M_Y_GMAF_LO_02_GANG_02";
    };;;;;;;;;;;;;;;;;;;;;;
    return;
}

void sub_28300()
{
    int I;
    unknown uVar3;
    int iVar4;

    switch (l_U638)
    {
        case 0:
        for ( I = 0; I <= 52; I++ )
        {
            if ((I mod l_U639) == 0)
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar4 );
                if (iVar4 < 80)
                {
                    sub_28398( l_U477[I] );
                }
                else
                {
                    sub_28482( l_U477[I] );
                }
                l_U638 = 1;
                GET_GAME_TIMER( ref l_U112 );
            }
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U113 );
        l_U114 = l_U113 - l_U112;
        if (l_U114 > 1000)
        {
            l_U638 = 0;
            GENERATE_RANDOM_INT_IN_RANGE( 1, 11, ref l_U637 );
        }
        break;
    }
    return;
}

void sub_28398(unknown uParam0)
{
    sub_27107();
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SAY_AMBIENT_SPEECH_WITH_VOICE( uParam0, "CHEER", "PAIN_VOICE", 1, 1, 2 );
    }
    return;
}

void sub_28482(unknown uParam0)
{
    sub_12370();
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SAY_AMBIENT_SPEECH_WITH_VOICE( uParam0, "WHOOP", "PAIN_VOICE", 1, 1, 2 );
    }
    return;
}

void sub_28681(int iParam0)
{
    switch (l_U1176)
    {
        case 0:
        PRINT_HELP_FOREVER( "JustQuit" );
        l_U1176 = 1;
        break;
        case 1:
        if (iParam0 == 0)
        {
            if (IS_CONTROL_JUST_PRESSED( 0, 23 ))
            {
                CLEAR_HELP();
                PRINT_HELP_FOREVER( "SureQuit" );
                l_U1176 = 2;
            }
        }
        break;
        case 2:
        if (IS_CONTROL_JUST_PRESSED( 0, 23 ))
        {
            CLEAR_HELP();
            SET_PLAYER_CONTROL( sub_1261(), 0 );
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 3000 );
            }
            l_U1176 = 3;
        }
        if (IS_CONTROL_JUST_PRESSED( 0, 1 ))
        {
            CLEAR_HELP();
            l_U1176 = 0;
        }
        break;
        case 3:
        l_U964 = 0;
        l_U1133 = 0;
        l_U963 = 8;
        l_U1176 = 0;
        break;
    }
    return;
}

int sub_29202(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, boolean bParam6, unknown uParam7, unknown uParam8)
{
    int iVar11;
    unknown uVar12;

    if (l_U1217 == 0)
    {
        if (l_U1219 == 0)
        {
            l_U1220 = sub_29235();
            REQUEST_MODEL( l_U1090[l_U1220] );
            l_U1219 = 1;
        }
        if (HAS_MODEL_LOADED( l_U1090[l_U1220] ))
        {
            l_U1219 = 0;
            l_U1217 = 1;
        }
    }
    else
    {
        CREATE_CHAR( 8, l_U1090[l_U1220], uParam1, uParam2, uParam3, uParam0, 1 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 22, ref uVar12 );
        SET_AMBIENT_VOICE_NAME( (uParam0^), sub_29455( l_U1220 ) );
        SET_ROOM_FOR_CHAR_BY_NAME( (uParam0^), l_U350 );
        SET_CHAR_HEADING( (uParam0^), uParam4 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^) );
        SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 5 );
        SET_CHAR_DECISION_MAKER( (uParam0^), l_U471 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 6000, ref iVar11 );
        if (iVar11 < 2000)
        {
            SET_COMBAT_DECISION_MAKER( (uParam0^), l_U474 );
        }
        else if (iVar11 < 4000)
        {
            SET_COMBAT_DECISION_MAKER( (uParam0^), l_U475 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( (uParam0^), l_U474 );
        }
        SET_CHAR_RELATIONSHIP( (uParam0^), 5, 0 );
        SET_CHAR_MAX_HEALTH( (uParam0^), uParam7 );
        SET_CHAR_HEALTH( (uParam0^), uParam7 );
        if (bParam6)
        {
            GIVE_WEAPON_TO_CHAR( (uParam0^), 1, 1, 1 );
        }
        if (bParam5)
        {
            GIVE_WEAPON_TO_CHAR( (uParam0^), 3, 1, 1 );
        }
        if (NOT (IS_CHAR_INJURED( sub_1354() )))
        {
            REGISTER_HATED_TARGETS_IN_AREA( (uParam0^), uParam1, uParam2, uParam3, 60.00000000 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1090[l_U1220] );
        l_U1217 = 0;
    }
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_29235()
{
    int I;
    int Result;

    for ( I = 0; I <= 50; I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 21, ref Result );
        if (l_U1215 != Result)
        {
            if (l_U1216 != Result)
            {
                l_U1216 = l_U1215;
                l_U1215 = Result;
                return Result;
            }
        }
    }
    return 0;
}

string sub_29455(int iParam0)
{
    if (iParam0 == 0)
    {
        return "M_Y_FIGHTCLUB_01_BN2";
    }
    else if (iParam0 == 1)
    {
        return "M_Y_FIGHTCLUB_02_BN2";
    }
    else if (iParam0 == 2)
    {
        return "M_Y_FIGHTCLUB_04_BN1";
    }
    else if (iParam0 == 3)
    {
        return "M_Y_FIGHTCLUB_05_BN3";
    }
    else if (iParam0 == 4)
    {
        return "M_Y_FIGHTCLUB_06_BN1";
    }
    else if (iParam0 == 5)
    {
        return "M_Y_FIGHTCLUB_07_BN1";
    }
    else if (iParam0 == 6)
    {
        return "M_Y_FIGHTCLUB_08_BN3";
    }
    else if (iParam0 == 7)
    {
        return "M_Y_FIGHTCLUB_01_BN1";
    }
    else if (iParam0 == 8)
    {
        return "M_Y_FIGHTCLUB_03_BN2";
    }
    else if (iParam0 == 9)
    {
        return "M_Y_FIGHTCLUB_01_BN3";
    }
    else if (iParam0 == 10)
    {
        return "M_Y_FIGHTCLUB_02_BN3";
    }
    else if (iParam0 == 11)
    {
        return "M_Y_FIGHTCLUB_08_BN1";
    }
    else if (iParam0 == 12)
    {
        return "M_Y_FIGHTCLUB_02_BN1";
    }
    else if (iParam0 == 13)
    {
        return "M_Y_FIGHTCLUB_07_BN3";
    }
    else if (iParam0 == 14)
    {
        return "M_Y_FIGHTCLUB_07_BN2";
    }
    else if (iParam0 == 15)
    {
        return "M_Y_FIGHTCLUB_03_BN3";
    }
    else if (iParam0 == 16)
    {
        return "M_Y_FIGHTCLUB_06_BN2";
    }
    else if (iParam0 == 17)
    {
        return "M_Y_FIGHTCLUB_05_BN1";
    }
    else if (iParam0 == 18)
    {
        return "M_Y_FIGHTCLUB_03_BN1";
    }
    else if (iParam0 == 19)
    {
        return "M_Y_FIGHTCLUB_08_BN2";
    }
    else
    {
        return "M_Y_FIGHTCLUB_05_BN2";
    };;;;;;;;;;;;;;;;;;;;
    return "M_Y_FIGHTCLUB_05_BN2";
}

void sub_30670(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        OPEN_SEQUENCE_TASK( ref uVar4 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U118[uParam0]._fU0, l_U118[uParam0]._fU4, l_U118[uParam0]._fU8, 3, -2, 0.40000000 );
        TASK_SET_CHAR_DECISION_MAKER( 0, l_U472 );
        TASK_COMBAT( 0, sub_1354() );
        CLOSE_SEQUENCE_TASK( uVar4 );
        TASK_PERFORM_SEQUENCE( uParam1, uVar4 );
        CLEAR_SEQUENCE_TASK( uVar4 );
        SAY_AMBIENT_SPEECH( uParam1, "Enter_ring", 1, 1, 2 );
    }
    return;
}

void sub_33134(int iParam0, unknown uParam1, int iParam2)
{
    int I;
    int iVar6;

    if (iParam2 == 0)
    {
        I = 0;
        switch (l_U652)
        {
            case 0:
            for ( I = 0; I <= 52; I++ )
            {
                if ((sub_33206( uParam1 )) || (l_U105 > 2))
                {
                    if (NOT (IS_CHAR_INJURED( l_U477[I] )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U477[I], 29, ref iVar6 );
                        if ((NOT (IS_PED_RAGDOLL( l_U477[I] ))) AND (iVar6 == 7))
                        {
                            if (iParam0 == 1)
                            {
                                sub_12065( I, 1, 1 );
                            }
                            else
                            {
                                sub_12065( I, 0, 1 );
                            }
                            return;
                        }
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U477[I] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U477[I], 29, ref iVar6 );
                    if ((NOT (IS_PED_RAGDOLL( l_U477[I] ))) AND (iVar6 == 7))
                    {
                        if (iParam0 == 1)
                        {
                            sub_12065( I, 1, 1 );
                        }
                        else
                        {
                            sub_12065( I, 0, 1 );
                        }
                        return;
                    }
                }
            }
            GET_GAME_TIMER( ref l_U106 );
            l_U652 = 1;
            break;
            case 1:
            GET_GAME_TIMER( ref l_U107 );
            l_U108 = l_U107 - l_U106;
            if (l_U108 > 50)
            {
                l_U652 = 0;
                GENERATE_RANDOM_INT_IN_RANGE( 0, 52, ref l_U653 );
            }
            break;
        }
    }
    return;
}

int sub_33206(unknown uParam0)
{
    if ((sub_33217( uParam0 )) < 150)
    {
        return 1;
    }
    if ((sub_33217( sub_1354() )) < 150)
    {
        return 1;
    }
    return 0;
}

int sub_33217(unknown uParam0)
{
    unknown Result;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            GET_CHAR_HEALTH( uParam0, ref Result );
            return Result;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 200;
    }
    return 200;
}

void sub_33734(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (l_U657)
        {
            case 0:
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( uParam0 );
            GET_GAME_TIMER( ref l_U654 );
            l_U657 = 1;
            break;
            case 1:
            if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_1354(), 0 )))
            {
                GET_GAME_TIMER( ref l_U655 );
                l_U656 = l_U655 - l_U654;
                if (l_U656 > 15000)
                {
                    l_U657 = 2;
                }
            }
            else
            {
                l_U657 = 0;
            }
            break;
            case 2:
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uParam0, 1 );
            TASK_PLAY_ANIM( uParam0, "taunt_03", l_U352, 8.00000000, 0, 1, 1, 0, -2 );
            SAY_AMBIENT_SPEECH( uParam0, "TAUNT", 1, 1, 2 );
            l_U657 = 3;
            break;
            case 3:
            if (NOT (sub_19549( uParam0, 80 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uParam0, 0 );
                TASK_COMBAT( uParam0, sub_1354() );
                l_U657 = 0;
            }
            break;
        }
    }
    return;
}

void sub_34099(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (l_U660)
        {
            case 0:
            GET_GAME_TIMER( ref l_U661 );
            l_U660 = 1;
            break;
            case 1:
            GET_GAME_TIMER( ref l_U662 );
            l_U663 = l_U662 - l_U661;
            if (l_U663 > 3000)
            {
                SAY_AMBIENT_SPEECH( uParam0, "FIGHT", 1, 1, 2 );
                GET_GAME_TIMER( ref l_U661 );
                l_U660 = 2;
            }
            break;
            case 2:
            GET_CHAR_HEALTH( uParam0, ref iVar3 );
            if (iVar3 < 140)
            {
                SAY_AMBIENT_SPEECH( uParam0, "FIGHT_WEAKENED", 1, 1, 2 );
                GET_GAME_TIMER( ref l_U661 );
                l_U660 = 3;
            }
            break;
            case 3:
            GET_GAME_TIMER( ref l_U662 );
            l_U663 = l_U662 - l_U661;
            if (l_U663 > 7000)
            {
                SAY_AMBIENT_SPEECH( uParam0, "FIGHT", 1, 1, 2 );
                GET_GAME_TIMER( ref l_U661 );
                l_U660 = 4;
            }
            break;
            case 4: break;
        }
    }
    return;
}

void sub_34487()
{
    int I;
    unknown uVar3;
    int iVar4;

    switch (l_U640)
    {
        case 0:
        for ( I = 0; I <= 52; I++ )
        {
            if ((I mod l_U641) == 0)
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar4 );
                if (iVar4 < 80)
                {
                    sub_28398( l_U477[I] );
                }
                else
                {
                    sub_28482( l_U477[I] );
                }
                GET_GAME_TIMER( ref l_U112 );
            }
        }
        l_U640 = 1;
        break;
        case 1: break;
    }
    return;
}

void sub_34663(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (l_U646)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_CHAR_HEALTH( uParam0, ref iVar6 );
            }
            if (iVar6 > 120)
            {
                sub_34753( uParam0 );
            }
            else
            {
                sub_34812( uParam0 );
            }
            l_U646 = 1;
            GET_GAME_TIMER( ref l_U647 );
            break;
            case 1:
            GET_GAME_TIMER( ref l_U648 );
            l_U649 = l_U648 - l_U647;
            if (l_U649 > 7000)
            {
                l_U646 = 0;
            }
            break;
        }
    }
    return;
}

void sub_34753(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SAY_AMBIENT_SPEECH( uParam0, "FIGHT", 1, 1, 2 );
    }
    return;
}

void sub_34812(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SAY_AMBIENT_SPEECH( uParam0, "FIGHT_WEAKENED", 1, 1, 2 );
    }
    return;
}

void sub_34994()
{
    if (l_U1226 == 0)
    {
        GET_GAME_TIMER( ref l_U1004 );
        l_U1005 = l_U1004 - l_U1003;
        if (l_U1005 > 2000)
        {
            PLAY_SOUND_FROM_POSITION( -1, "FIGHT_CLUB_START_FIGHT_BELL", l_U115 );
            l_U1226 = 1;
        }
    }
    return;
}

void sub_35249(unknown uParam0)
{
    return;
}

void sub_35400(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_36547()
{
    int iVar2;
    int I;
    unknown uVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;

    I = 0;
    switch (l_U658)
    {
        case 0:
        for ( I = 0; I <= 52; I++ )
        {
            if (l_U415[I] == 0)
            {
                if (I == l_U659)
                {
                    if (NOT (IS_CHAR_INJURED( l_U477[I] )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U477[I], 29, ref uVar4 );
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 50, ref iVar2 );
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 90, ref iVar5 );
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 50, ref iVar9 );
                        if (NOT (IS_PED_RAGDOLL( l_U477[I] )))
                        {
                            if (iVar2 < 25)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U477[I] )))
                                {
                                    if (iVar9 < 25)
                                    {
                                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U477[I], "FIGHT_CHEER", l_U353, 1, 1, 1 );
                                    }
                                    else
                                    {
                                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U477[I], "CHEER", "PAIN_VOICE", 1, 1, 2 );
                                    }
                                    if (iVar5 < 18)
                                    {
                                        TASK_PLAY_ANIM( l_U477[I], "Crowd_LoseBet_Calm01", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                                    }
                                    else if (iVar5 < 38)
                                    {
                                        TASK_PLAY_ANIM( l_U477[I], "Crowd_LoseBet_Calm02", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                                    }
                                    else if (iVar5 < 54)
                                    {
                                        TASK_PLAY_ANIM( l_U477[I], "Crowd_LoseBet_Calm03", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                                    }
                                    else if (iVar5 < 80)
                                    {
                                        TASK_PLAY_ANIM( l_U477[I], "Crowd_Drunk", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                                    }
                                    else
                                    {
                                        TASK_PLAY_ANIM( l_U477[I], "Crowd_Positive", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                                    };;;;
                                }
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U477[I] )))
                            {
                                if (iVar9 < 35)
                                {
                                    SAY_AMBIENT_SPEECH_WITH_VOICE( l_U477[I], "HECKLE", l_U353, 1, 1, 1 );
                                }
                                else
                                {
                                    SAY_AMBIENT_SPEECH_WITH_VOICE( l_U477[I], "WHOOP", "PAIN_VOICE", 1, 1, 2 );
                                }
                                if (iVar5 < 25)
                                {
                                    TASK_PLAY_ANIM( l_U477[I], "Crowd_LoseBet_Angry01", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                                }
                                else if (iVar5 < 25)
                                {
                                    TASK_PLAY_ANIM( l_U477[I], "Crowd_LoseBet_Angry02", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                                }
                                else if (iVar5 < 25)
                                {
                                    TASK_PLAY_ANIM( l_U477[I], "Crowd_Drunk", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                                }
                                else
                                {
                                    TASK_PLAY_ANIM( l_U477[I], "Crowd_Negative", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                                };;;
                                GET_CHAR_COORDINATES( l_U477[I], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                                TRIGGER_PTFX( "FC_TORN_TICKETS", uVar6._fU0, uVar6._fU4, uVar6._fU8 + 1, 0, 0, 0, 1065353216 );
                            }
                            l_U415[I] = 1;
                            return;
                        }
                        return;
                    }
                    return;
                }
            }
        }
        GET_GAME_TIMER( ref l_U106 );
        l_U658 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U107 );
        l_U108 = l_U107 - l_U106;
        if (l_U108 > 50)
        {
            l_U658 = 0;
            GENERATE_RANDOM_INT_IN_RANGE( 0, 52, ref l_U659 );
        }
        break;
    }
    return;
}

void sub_38037()
{
    int iVar2;

    GET_CHAR_HEALTH( sub_1354(), ref iVar2 );
    if (iVar2 > 180)
    {
        SET_CHAR_HEALTH( sub_1354(), 200 );
    }
    else
    {
        SET_CHAR_HEALTH( sub_1354(), iVar2 + 20 );
    }
    return;
}

void sub_38294()
{
    if (l_U972 == 1)
    {
        g_U10481 = 1;
    }
    else if (l_U972 == 2)
    {
        g_U10481 = 2;
    }
    else if (l_U972 == 3)
    {
        g_U10481 = 3;
    }
    else if (l_U972 == 4)
    {
        g_U10481 = 4;
    }
    else if (l_U972 == 5)
    {
        g_U10481 = 5;
    }
    else if (l_U972 == 6)
    {
        g_U10481 = 6;
    }
    else if (l_U972 == 0)
    {
        g_U10481 = 7;
    };;;;;;;
    sub_38459();
    return;
}

void sub_38459()
{
    if (l_U972 == 1)
    {
        if (CAN_THE_STAT_HAVE_STRING( 676 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 676, "Rank F" );
        }
    }
    else if (l_U972 == 2)
    {
        if (CAN_THE_STAT_HAVE_STRING( 676 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 676, "Rank E" );
        }
    }
    else if (l_U972 == 3)
    {
        if (CAN_THE_STAT_HAVE_STRING( 676 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 676, "Rank D" );
        }
    }
    else if (l_U972 == 4)
    {
        if (CAN_THE_STAT_HAVE_STRING( 676 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 676, "Rank C" );
        }
    }
    else if (l_U972 == 5)
    {
        if (CAN_THE_STAT_HAVE_STRING( 676 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 676, "Rank B" );
        }
    }
    else if (l_U972 == 6)
    {
        if (CAN_THE_STAT_HAVE_STRING( 676 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 676, "Rank A" );
        }
    }
    else if (l_U972 == 0)
    {
        if (CAN_THE_STAT_HAVE_STRING( 676 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 676, "Elite" );
        }
    };;;;;;;
    return;
}

void sub_38835()
{
    int iVar2;

    if (l_U972 == 1)
    {
        iVar2 = 100;
    }
    else if (l_U972 == 2)
    {
        iVar2 = 110;
    }
    else if (l_U972 == 3)
    {
        iVar2 = 120;
    }
    else if (l_U972 == 4)
    {
        iVar2 = 130;
    }
    else if (l_U972 == 5)
    {
        iVar2 = 140;
    }
    else if (l_U972 == 6)
    {
        iVar2 = 150;
    }
    else if (l_U972 == 0)
    {
        iVar2 = 160;
    };;;;;;;
    ADD_SCORE( sub_1261(), iVar2 );
    INCREMENT_INT_STAT( 229, iVar2 );
    return;
}

int sub_39292()
{
    if (IS_CONTROL_PRESSED( 2, 77 ))
    {
        return 1;
    }
    return 0;
}

void sub_40046(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U43030[uParam0]._fU0)
    {
        iVar3 = g_U43030[uParam0]._fU8;
        if (iVar3 > 0)
        {
            sub_40115( 2, iVar3 );
            g_U43030[uParam0]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_40115(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_40285( 0 );
    return;
}

void sub_40285(boolean bParam0)
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
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
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
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_40530();
    }
    if ((NOT ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_40530()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_40782()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "FightClubScreen" )) == 0)
    {
        if (HAS_SCRIPT_LOADED( "FightClubScreen" ))
        {
            START_NEW_SCRIPT( "FightClubScreen", 1024 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "FightClubScreen" );
            g_U43493 = 1;
        }
        else
        {
            PRINTNL();
            PRINTNL();
            PRINTSTRING( "*******************************************************" );
            PRINTNL();
            PRINTSTRING( "FightClubScreen isn't loaded but trying to call - Tell Brenda if you're missing result screen" );
            PRINTNL();
            PRINTSTRING( "*******************************************************" );
            PRINTNL();
        }
    }
    else
    {
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "*******************************************************" );
        PRINTSTRING( "Already a FightclubScreen running - Tell Brenda if you're missing result screen" );
        PRINTNL();
        PRINTSTRING( "*******************************************************" );
        PRINTNL();
    }
    return;
}

void sub_41741()
{
    int iVar2;

    sub_24059();
    switch (l_U1137)
    {
        case 0:
        if (IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_OUT( 3000 );
        }
        l_U1137 = 1;
        break;
        case 1:
        if (IS_SCREEN_FADED_OUT())
        {
            sub_5190();
            SET_PLAYER_CONTROL( sub_1261(), 0 );
            SET_FREE_HEALTH_CARE( sub_1261(), 0 );
            sub_10197( 0 );
            l_U1377._fU0 = {-386.22300000, 1483.98600000, 13.43064000};
            l_U1377._fU12 = {-36.64116000, 0.00000000, -179.47100000};
            l_U1377._fU96 = {-388.62820000, 1500.65500000, 12.78610000};
            l_U1377._fU108 = {-12.18193000, 0.00000000, -161.59290000};
            l_U1377._fU120 = 32;
            l_U1377._fU124 = 8000;
            SET_CHAR_COORDINATES( sub_1354(), l_U982._fU0, l_U982._fU4, l_U982._fU8 );
            SET_CHAR_HEADING( sub_1354(), l_U1008 );
            sub_19514();
            l_U1137 = 2;
        }
        break;
        case 2:
        switch (l_U973)
        {
            case 0: break;
            case 6:
            PRINTNL();
            PRINTSTRING( "SPECTATING ROUND A" );
            PRINTNL();
            if (sub_42285( ref l_U532[0], l_U144[0]._fU0, l_U144[0]._fU4, l_U144[0]._fU8, l_U336[0], 1, 1, 0 ))
            {
                if (sub_42883( ref l_U532[1], l_U144[1]._fU0, l_U144[1]._fU4, l_U144[1]._fU8, l_U336[1], 1, 1, 0 ))
                {
                    l_U1137 = 3;
                }
            }
            break;
            case 5:
            PRINTNL();
            PRINTSTRING( "SPECTATING ROUND B" );
            PRINTNL();
            if (sub_42285( ref l_U532[0], l_U144[0]._fU0, l_U144[0]._fU4, l_U144[0]._fU8, l_U336[0], 0, 1, 0 ))
            {
                if (sub_42883( ref l_U532[1], l_U144[1]._fU0, l_U144[1]._fU4, l_U144[1]._fU8, l_U336[1], 1, 0, 0 ))
                {
                    l_U1137 = 3;
                }
            }
            break;
            case 4:
            PRINTNL();
            PRINTSTRING( "SPECTATING ROUND C" );
            PRINTNL();
            if (sub_42285( ref l_U532[0], l_U144[0]._fU0, l_U144[0]._fU4, l_U144[0]._fU8, l_U336[0], 0, 1, 0 ))
            {
                if (sub_42883( ref l_U532[1], l_U144[1]._fU0, l_U144[1]._fU4, l_U144[1]._fU8, l_U336[1], 0, 0, 0 ))
                {
                    l_U1137 = 3;
                }
            }
            break;
            case 3:
            PRINTNL();
            PRINTSTRING( "SPECTATING ROUND D" );
            PRINTNL();
            if (sub_42285( ref l_U532[0], l_U144[0]._fU0, l_U144[0]._fU4, l_U144[0]._fU8, l_U336[0], 0, 0, 0 ))
            {
                if (sub_42883( ref l_U532[1], l_U144[1]._fU0, l_U144[1]._fU4, l_U144[1]._fU8, l_U336[1], 0, 1, 0 ))
                {
                    l_U1137 = 3;
                }
            }
            break;
            case 2:
            PRINTNL();
            PRINTSTRING( "SPECTATING ROUND E" );
            PRINTNL();
            if (sub_42285( ref l_U532[0], l_U144[0]._fU0, l_U144[0]._fU4, l_U144[0]._fU8, l_U336[0], 0, 0, 1 ))
            {
                if (sub_42883( ref l_U532[1], l_U144[1]._fU0, l_U144[1]._fU4, l_U144[1]._fU8, l_U336[1], 0, 0, 0 ))
                {
                    l_U1137 = 3;
                }
            }
            break;
            case 1:
            PRINTNL();
            PRINTSTRING( "SPECTATING ROUND F" );
            PRINTNL();
            if (sub_42285( ref l_U532[0], l_U144[0]._fU0, l_U144[0]._fU4, l_U144[0]._fU8, l_U336[0], 0, 0, 1 ))
            {
                if (sub_42883( ref l_U532[1], l_U144[1]._fU0, l_U144[1]._fU4, l_U144[1]._fU8, l_U336[1], 0, 0, 1 ))
                {
                    l_U1137 = 3;
                }
            }
            break;
        }
        break;
        case 3:
        DO_SCREEN_FADE_IN( 3000 );
        BEGIN_CAM_COMMANDS( ref l_U985 );
        sub_1222( 1 );
        GET_GAME_TIMER( ref l_U997 );
        sub_7305( l_U1377, 0 );
        l_U1137 = 4;
        break;
        case 4:
        GET_GAME_TIMER( ref l_U998 );
        l_U999 = l_U998 - l_U997;
        if (l_U999 > l_U1377._fU124)
        {
            sub_44404();
            PRINT_HELP_FOREVER( "JustQuit" );
            DISPLAY_CASH( 1 );
            l_U1137 = 5;
        }
        break;
        case 5:
        PRINT_NOW( "FCJustPick", 1, 1 );
        if ((IS_CONTROL_JUST_PRESSED( 2, 132 )) || ((sub_8300()) AND (IS_USING_CONTROLLER())))
        {
            l_U1014 = 0;
            PRINT_HELP_FOREVER( "QuitBet" );
            DISPLAY_CASH( 1 );
            l_U1137 = 6;
        }
        else if ((IS_CONTROL_JUST_PRESSED( 2, 133 )) || ((sub_8090()) AND (IS_USING_CONTROLLER())))
        {
            l_U1014 = 1;
            PRINT_HELP_FOREVER( "QuitBet" );
            DISPLAY_CASH( 1 );
            l_U1137 = 6;
        }
        else if (sub_8504() == 1)
        {
            CLEAR_HELP();
            if (l_U1012 == 0)
            {
                ADD_SCORE( sub_1261(), 50 );
            }
            sub_1222( 0 );
            END_CAM_COMMANDS( ref l_U985 );
            l_U963 = 8;
        };;;
        break;
        case 6:
        sub_45474();
        PRINT_WITH_NUMBER( "FCJustBet", l_U993, 1, 1 );
        STORE_SCORE( sub_1261(), ref iVar2 );
        if (sub_39292())
        {
            if (l_U993 <= iVar2)
            {
                ADD_SCORE( sub_1261(), -l_U993 );
                DISPLAY_CASH( 0 );
                INCREMENT_INT_STAT( 236, l_U993 );
                l_U1137 = 7;
            }
            else
            {
                PRINT_NOW( "NoCashFC", 7500, 1 );
            }
        }
        if (sub_8504() == 1)
        {
            CLEAR_HELP();
            if (l_U1012 == 0)
            {
                ADD_SCORE( sub_1261(), 50 );
            }
            DISPLAY_CASH( 0 );
            sub_1222( 0 );
            END_CAM_COMMANDS( ref l_U985 );
            l_U963 = 8;
        }
        break;
        case 7:
        CLEAR_HELP();
        CLEAR_PRINTS();
        l_U1012 = 1;
        DISPLAY_CASH( 0 );
        PLAY_SOUND_FROM_POSITION( -1, "FIGHT_CLUB_START_FIGHT_BELL", l_U115 );
        l_U1137 = 8;
        break;
        case 8:
        l_U1137 = 9;
        break;
        case 9: break;
    }
    return;
}

int sub_42285(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, boolean bParam6, unknown uParam7)
{
    int iVar10;

    if (l_U1217 == 0)
    {
        if (l_U1225 == 0)
        {
            l_U1220 = sub_29235();
            if (l_U1221 != l_U1220)
            {
                REQUEST_MODEL( l_U1090[l_U1220] );
                l_U1225 = 1;
            }
        }
        if (l_U1221 != l_U1220)
        {
            if (HAS_MODEL_LOADED( l_U1090[l_U1220] ))
            {
                l_U1217 = 1;
                l_U1225 = 0;
            }
        }
    }
    else if (HAS_MODEL_LOADED( l_U1090[l_U1220] ))
    {
        if (NOT (DOES_CHAR_EXIST( (uParam0^) )))
        {
            CREATE_CHAR( 8, l_U1090[l_U1220], uParam1, uParam2, uParam3, uParam0, 1 );
            SET_CHAR_HEADING( (uParam0^), uParam4 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^) );
        }
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_ROOM_FOR_CHAR_BY_NAME( (uParam0^), l_U350 );
            SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 5 );
            SET_CHAR_DECISION_MAKER( (uParam0^), l_U471 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 6000, ref iVar10 );
            if (iVar10 < 2000)
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^), l_U474 );
            }
            else if (iVar10 < 4000)
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^), l_U475 );
            }
            else
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^), l_U474 );
            }
            SET_CHAR_RELATIONSHIP( (uParam0^), 5, 6 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 1 );
            if (bParam6)
            {
                GIVE_WEAPON_TO_CHAR( (uParam0^), 1, 1, 1 );
            }
            TASK_PLAY_ANIM( (uParam0^), "bum_idle_B", l_U343, 8.00000000, 1, 0, 0, 0, -2 );
            if (bParam5)
            {
                GIVE_WEAPON_TO_CHAR( (uParam0^), 3, 1, 1 );
            }
            if (NOT (IS_CHAR_INJURED( sub_1354() )))
            {
                REGISTER_HATED_TARGETS_IN_AREA( (uParam0^), uParam1, uParam2, uParam3, 60.00000000 );
            }
        }
        return 1;
    }
    else
    {
        l_U1217 = 0;
    }
    return 0;
}

int sub_42883(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, boolean bParam6, unknown uParam7)
{
    int iVar10;

    if (l_U1218 == 0)
    {
        if (l_U1224 == 0)
        {
            l_U1221 = sub_29235();
            if (l_U1221 != l_U1220)
            {
                REQUEST_MODEL( l_U1090[l_U1221] );
                l_U1223 = 1;
            }
        }
        if (l_U1221 != l_U1220)
        {
            if (HAS_MODEL_LOADED( l_U1090[l_U1221] ))
            {
                l_U1223 = 0;
                l_U1218 = 1;
            }
        }
    }
    else if (HAS_MODEL_LOADED( l_U1090[l_U1221] ))
    {
        if (NOT (DOES_CHAR_EXIST( (uParam0^) )))
        {
            CREATE_CHAR( 8, l_U1090[l_U1221], uParam1, uParam2, uParam3, uParam0, 1 );
            SET_CHAR_HEADING( (uParam0^), uParam4 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^) );
        }
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_ROOM_FOR_CHAR_BY_NAME( (uParam0^), l_U350 );
            SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 5 );
            SET_CHAR_DECISION_MAKER( (uParam0^), l_U471 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 6000, ref iVar10 );
            if (iVar10 < 2000)
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^), l_U474 );
            }
            else if (iVar10 < 4000)
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^), l_U475 );
            }
            else
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^), l_U474 );
            }
            SET_CHAR_RELATIONSHIP( (uParam0^), 5, 6 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 1 );
            if (bParam6)
            {
                GIVE_WEAPON_TO_CHAR( (uParam0^), 1, 1, 1 );
            }
            TASK_PLAY_ANIM( (uParam0^), "bum_idle_A", l_U343, 8.00000000, 1, 0, 0, 0, -2 );
            if (bParam5)
            {
                GIVE_WEAPON_TO_CHAR( (uParam0^), 3, 1, 1 );
            }
            if (NOT (IS_CHAR_INJURED( sub_1354() )))
            {
                REGISTER_HATED_TARGETS_IN_AREA( (uParam0^), uParam1, uParam2, uParam3, 60.00000000 );
            }
        }
        return 1;
    }
    else
    {
        l_U1218 = 0;
    }
    return 0;
}

void sub_44404()
{
    int iVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( l_U532[0] )))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 6000, ref iVar2 );
        if (iVar2 < 1000)
        {
            l_U995 = 300;
            SET_CHAR_HEALTH( l_U532[0], 180 );
            SET_CHAR_MAX_HEALTH( l_U532[0], 180 );
        }
        else if (iVar2 < 2000)
        {
            l_U995 = 200;
            SET_CHAR_HEALTH( l_U532[0], 210 );
            SET_CHAR_MAX_HEALTH( l_U532[0], 210 );
        }
        else if (iVar2 < 3000)
        {
            l_U995 = 150;
            SET_CHAR_HEALTH( l_U532[0], 225 );
            SET_CHAR_MAX_HEALTH( l_U532[0], 225 );
        }
        else if (iVar2 < 4000)
        {
            l_U995 = 100;
            SET_CHAR_HEALTH( l_U532[0], 240 );
            SET_CHAR_MAX_HEALTH( l_U532[0], 240 );
        }
        else if (iVar2 < 5000)
        {
            l_U995 = 70;
            SET_CHAR_HEALTH( l_U532[0], 255 );
            SET_CHAR_MAX_HEALTH( l_U532[0], 255 );
        }
        else if (iVar2 < 6000)
        {
            l_U995 = 50;
            SET_CHAR_HEALTH( l_U532[0], 270 );
            SET_CHAR_MAX_HEALTH( l_U532[0], 270 );
        };;;;;;
    }
    if (NOT (IS_CHAR_INJURED( l_U532[1] )))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 6000, ref iVar3 );
        if (iVar3 < 1000)
        {
            l_U994 = 300;
            SET_CHAR_HEALTH( l_U532[1], 180 );
            SET_CHAR_MAX_HEALTH( l_U532[1], 180 );
        }
        else if (iVar3 < 2000)
        {
            l_U994 = 200;
            SET_CHAR_HEALTH( l_U532[1], 210 );
            SET_CHAR_MAX_HEALTH( l_U532[1], 210 );
        }
        else if (iVar3 < 3000)
        {
            l_U994 = 150;
            SET_CHAR_HEALTH( l_U532[1], 225 );
            SET_CHAR_MAX_HEALTH( l_U532[1], 225 );
        }
        else if (iVar3 < 4000)
        {
            l_U994 = 100;
            SET_CHAR_HEALTH( l_U532[1], 240 );
            SET_CHAR_MAX_HEALTH( l_U532[1], 240 );
        }
        else if (iVar3 < 5000)
        {
            l_U994 = 70;
            SET_CHAR_HEALTH( l_U532[1], 255 );
            SET_CHAR_MAX_HEALTH( l_U532[1], 255 );
        }
        else if (iVar3 < 6000)
        {
            l_U994 = 50;
            SET_CHAR_HEALTH( l_U532[1], 270 );
            SET_CHAR_MAX_HEALTH( l_U532[1], 270 );
        };;;;;;
    }
    return;
}

void sub_45474()
{
    unknown uVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar6 = 250;
    iVar7 = 125;
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar2, ref iVar3, ref uVar4, ref uVar5 );
    if (NOT IS_USING_CONTROLLER())
    {
        GET_KEYBOARD_MOVE_INPUT( ref uVar2, ref iVar3 );
        iVar6 = 350;
        iVar7 = 256;
    }
    DISPLAY_CASH( 1 );
    STORE_SCORE( sub_1261(), ref iVar8 );
    if (l_U993 > 0)
    {
        if ((iVar3 <= 128) AND (iVar3 > 60))
        {
            GET_GAME_TIMER( ref l_U1372 );
            l_U1373 = l_U1372 - l_U1371;
            if ((NOT l_U1364) || ((iVar3 > iVar7) || (l_U1373 > iVar6)))
            {
                l_U993 -= 50;
                if (iVar3 < 127)
                {
                    GET_GAME_TIMER( ref l_U1371 );
                }
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U1371 );
        }
    }
    if (l_U993 < iVar8)
    {
        if ((iVar3 >= 65408) AND (iVar3 < 65476))
        {
            GET_GAME_TIMER( ref l_U1366 );
            l_U1367 = l_U1366 - l_U1365;
            if ((NOT l_U1364) || ((iVar3 < -iVar7) || (l_U1367 > iVar6)))
            {
                l_U993 += 50;
                if (iVar3 > 65409)
                {
                    GET_GAME_TIMER( ref l_U1365 );
                }
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U1365 );
        }
    }
    if (l_U993 > 0)
    {
        if ((iVar3 <= 60) AND (iVar3 > 10))
        {
            GET_GAME_TIMER( ref l_U1375 );
            l_U1376 = l_U1375 - l_U1374;
            if (l_U1376 > 500)
            {
                l_U993 -= 50;
                GET_GAME_TIMER( ref l_U1374 );
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U1374 );
        }
    }
    if (l_U993 < iVar8)
    {
        if ((iVar3 >= 65476) AND (iVar3 < -10))
        {
            GET_GAME_TIMER( ref l_U1369 );
            l_U1370 = l_U1369 - l_U1368;
            if (l_U1370 > 500)
            {
                l_U993 += 50;
                GET_GAME_TIMER( ref l_U1368 );
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U1368 );
        }
    }
    if (NOT IS_USING_CONTROLLER())
    {
        if (iVar3 == 0)
        {
            l_U1364 = 0;
        }
        else
        {
            l_U1364 = 1;
        }
    }
    l_U992 = ((l_U993 * l_U995) / 100) + l_U993;
    l_U991 = ((l_U993 * l_U994) / 100) + l_U993;
    return;
}

void sub_46483()
{
    int I;

    I = 0;
    for ( I = 0; I <= 52; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U477[I] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U532[0] )))
            {
                TASK_LOOK_AT_CHAR( l_U477[I], l_U532[0], -2, 0 );
            }
        }
    }
    return;
}

void sub_46630()
{
    int iVar2;
    int I;
    int J;

    sub_24059();
    if ((l_U963 != 9) AND (l_U963 != 8))
    {
        switch (l_U1134)
        {
            case 1:
            sub_26981();
            sub_2229( 1 );
            sub_2330( 1 );
            l_U1134 = 0;
            break;
            case 0:
            sub_26918();
            sub_26981();
            if (sub_46810( ref l_U532[0], l_U532[1], l_U144[0]._fU0, l_U144[0]._fU4, l_U144[0]._fU8, l_U336[0], 0, 0, 1 ))
            {
                if (sub_47434( ref l_U532[1], l_U532[0], l_U144[1]._fU0, l_U144[1]._fU4, l_U144[1]._fU8, l_U336[1], 0, 0, 1 ))
                {
                    sub_48072();
                    l_U1134 = 2;
                }
            }
            break;
            case 2:
            sub_19678();
            sub_26981();
            sub_48110();
            sub_33134( 0, l_U532[0], 0 );
            sub_33134( 0, l_U532[1], 0 );
            if (l_U1014 == 1)
            {
                sub_48458( 0 );
            }
            else
            {
                sub_48458( 1 );
            }
            if ((sub_50044( l_U532[1] )) || (IS_CHAR_INJURED( l_U532[1] )))
            {
                l_U971 = 1;
                if (NOT (IS_CHAR_INJURED( l_U532[0] )))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 50, ref iVar2 );
                    iVar2 = 10;
                    if (iVar2 < 15)
                    {
                        TASK_PLAY_ANIM( l_U532[0], "celeb_a", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                    }
                    else if (iVar2 < 30)
                    {
                        TASK_PLAY_ANIM( l_U532[0], "celeb_b", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                    }
                    else
                    {
                        TASK_PLAY_ANIM( l_U532[0], "celeb_c", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                    }
                }
                if (l_U1014 == 1)
                {
                    l_U968 = 1;
                    ADD_SCORE( sub_1261(), l_U992 + l_U993 );
                    INCREMENT_INT_STAT( 229, l_U992 + l_U993 );
                    l_U966 = 2;
                    l_U965 = 0;
                }
                else
                {
                    l_U968 = 4;
                    l_U966 = 0;
                    l_U965 = 2;
                }
                if (sub_50044( l_U532[1] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U532[1] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U532[1], 1 );
                        CLEAR_CHAR_TASKS( l_U532[1] );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U532[0] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U532[0], 1 );
                        CLEAR_CHAR_TASKS( l_U532[0] );
                    }
                    if (l_U1134 != 3)
                    {
                        l_U1134 = 4;
                    }
                }
                else if (NOT (sub_50044( l_U532[0] )))
                {
                    if (l_U1134 != 4)
                    {
                        l_U1134 = 3;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U532[1] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U532[1], 1 );
                    CLEAR_CHAR_TASKS( l_U532[1] );
                }
                if (NOT (IS_CHAR_INJURED( l_U532[0] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U532[0], 1 );
                    CLEAR_CHAR_TASKS( l_U532[0] );
                }
                if (l_U1134 != 3)
                {
                    l_U1134 = 4;
                };;;
            }
            else if ((sub_50044( l_U532[0] )) || (IS_CHAR_INJURED( l_U532[0] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U532[1] )))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 50, ref iVar2 );
                    iVar2 = 10;
                    if (iVar2 < 15)
                    {
                        TASK_PLAY_ANIM( l_U532[1], "celeb_a", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                    }
                    else if (iVar2 < 30)
                    {
                        TASK_PLAY_ANIM( l_U532[1], "celeb_b", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                    }
                    else
                    {
                        TASK_PLAY_ANIM( l_U532[1], "celeb_c", l_U343, 8.00000000, 0, 0, 0, 0, -2 );
                    }
                }
                l_U971 = 2;
                if (l_U1014 == 0)
                {
                    l_U968 = 3;
                    PLAY_SOUND_FROM_POSITION( -1, "FIGHT_CLUB_ROAR_WIN", l_U115 );
                    ADD_SCORE( sub_1261(), l_U991 + l_U993 );
                    INCREMENT_INT_STAT( 229, l_U991 + l_U993 );
                    l_U966 = 2;
                    l_U965 = 0;
                }
                else
                {
                    l_U968 = 2;
                    PLAY_SOUND_FROM_POSITION( -1, "FIGHT_CLUB_ROAR_LOSE", l_U115 );
                    l_U966 = 0;
                    l_U965 = 2;
                }
                if (sub_50044( l_U532[0] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U532[1] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U532[1], 1 );
                        CLEAR_CHAR_TASKS( l_U532[1] );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U532[0] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U532[0], 1 );
                        CLEAR_CHAR_TASKS( l_U532[0] );
                    }
                    if (l_U1134 != 3)
                    {
                        l_U1134 = 4;
                    }
                }
                else if (NOT (sub_50044( l_U532[1] )))
                {
                    if (l_U1134 != 4)
                    {
                        l_U1134 = 3;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U532[1] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U532[1], 1 );
                    CLEAR_CHAR_TASKS( l_U532[1] );
                }
                if (NOT (IS_CHAR_INJURED( l_U532[0] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U532[0], 1 );
                    CLEAR_CHAR_TASKS( l_U532[0] );
                }
                if (l_U1134 != 3)
                {
                    l_U1134 = 4;
                };;;
            }
            if ((IS_CHAR_INJURED( l_U532[1] )) AND (IS_CHAR_INJURED( l_U532[0] )))
            {
                l_U971 = 3;
                ADD_SCORE( sub_1261(), l_U993 );
                l_U966 = 2;
                l_U965 = 0;
                l_U968 = 5;
                l_U1134 = 4;
            }
            break;
            case 3:
            sub_36547();
            switch (l_U969)
            {
                case 0:
                l_U1055._fU0 = {-1, 0, 0.40000000};
                l_U1055._fU12 = {15, 0, 90};
                l_U1055._fU120 = 60;
                l_U1055._fU124 = 600;
                SET_TIME_SCALE( 0.01000000 );
                PLAY_SOUND_FROM_POSITION( -1, "FIGHT_CLUB_ROAR", l_U115 );
                l_U969 = 1;
                break;
                case 1:
                if (l_U971 == 2)
                {
                    sub_51796( ref l_U1055, l_U532[1], l_U1055._fU0, l_U1055._fU12, l_U532[0] );
                    if (NOT (IS_CHAR_INJURED( l_U532[0] )))
                    {
                        ;
                    }
                }
                else if (l_U971 == 1)
                {
                    sub_51796( ref l_U1055, l_U532[0], l_U1055._fU0, l_U1055._fU12, l_U532[1] );
                    if (NOT (IS_CHAR_INJURED( l_U532[1] )))
                    {
                        ;
                    }
                }
                GET_GAME_TIMER( ref l_U997 );
                l_U969 = 2;
                break;
                case 2:
                GET_GAME_TIMER( ref l_U998 );
                l_U999 = l_U998 - l_U997;
                if (l_U999 > l_U1055._fU124)
                {
                    DO_SCREEN_FADE_OUT( 3000 );
                    l_U969 = 3;
                }
                break;
                case 3:
                if (IS_SCREEN_FADED_OUT())
                {
                    sub_1222( 0 );
                    END_CAM_COMMANDS( ref l_U985 );
                    SET_TIME_SCALE( 1.00000000 );
                    l_U969 = 4;
                }
                break;
                case 4:
                l_U1134 = 4;
                break;
            }
            break;
            case 4:
            sub_36547();
            switch (l_U966)
            {
                case 0:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        DO_SCREEN_FADE_OUT( 3000 );
                    }
                    l_U966 = 3;
                }
                break;
                case 3:
                if (IS_SCREEN_FADED_OUT())
                {
                    l_U1021._fU0 = {-388.37450000, 1499.81800000, 13.71712000};
                    l_U1021._fU12 = {-19.42790000, 0.00000100, -160.41470000};
                    l_U1021._fU96 = {-388.59870000, 1500.44900000, 11.81991000};
                    l_U1021._fU108 = {-19.42790000, 0.00000100, -160.41470000};
                    l_U1021._fU120 = 45;
                    l_U1021._fU124 = 7500;
                    SET_CHAR_COORDINATES( sub_1354(), l_U982._fU0, l_U982._fU4, l_U982._fU8 );
                    SET_CHAR_HEADING( sub_1354(), l_U1008 );
                    l_U966 = 4;
                }
                break;
                case 4:
                BEGIN_CAM_COMMANDS( ref l_U985 );
                if (l_U971 == 2)
                {
                    sub_7305( l_U1021, l_U532[1] );
                    SAY_AMBIENT_SPEECH( l_U532[1], "FIGHT_WIN", 1, 1, 2 );
                }
                else if (l_U971 == 1)
                {
                    sub_7305( l_U1021, l_U532[0] );
                    SAY_AMBIENT_SPEECH( l_U532[0], "FIGHT_WIN", 1, 1, 2 );
                }
                sub_1222( 1 );
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 3000 );
                }
                sub_52986();
                GET_GAME_TIMER( ref l_U997 );
                l_U966 = 5;
                break;
                case 5:
                GET_GAME_TIMER( ref l_U998 );
                l_U999 = l_U998 - l_U997;
                if (l_U999 > l_U1021._fU124)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        DO_SCREEN_FADE_OUT( 3000 );
                    }
                    l_U966 = 7;
                }
                break;
                case 7:
                if (IS_SCREEN_FADED_OUT())
                {
                    sub_17017( 0 );
                    l_U987 = 0;
                    sub_26918();
                    sub_1222( 0 );
                    DESTROY_ALL_CAMS();
                    sub_5190();
                    END_CAM_COMMANDS( ref l_U985 );
                    CLEAR_PRINTS();
                    for ( I = 0; I <= 1; I++ )
                    {
                        if (DOES_PICKUP_EXIST( l_U1116[I] ))
                        {
                            REMOVE_PICKUP( l_U1116[I] );
                        }
                    }
                    l_U966 = 8;
                }
                break;
                case 8: break;
            }
            switch (l_U965)
            {
                case 0:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        DO_SCREEN_FADE_OUT( 3000 );
                    }
                    l_U965 = 3;
                }
                break;
                case 3:
                if (IS_SCREEN_FADED_OUT())
                {
                    l_U1021._fU0 = {-388.37450000, 1499.81800000, 13.71712000};
                    l_U1021._fU12 = {-19.42790000, 0.00000100, -160.41470000};
                    l_U1021._fU96 = {-388.59870000, 1500.44900000, 11.81991000};
                    l_U1021._fU108 = {-19.42790000, 0.00000100, -160.41470000};
                    l_U1021._fU120 = 45;
                    l_U1021._fU124 = 7500;
                    SET_CHAR_COORDINATES( sub_1354(), l_U982._fU0, l_U982._fU4, l_U982._fU8 );
                    SET_CHAR_HEADING( sub_1354(), l_U1008 );
                    DO_SCREEN_FADE_IN( 3000 );
                    l_U965 = 4;
                }
                break;
                case 4:
                BEGIN_CAM_COMMANDS( ref l_U985 );
                if (l_U971 == 2)
                {
                    sub_7305( l_U1021, l_U532[1] );
                }
                else if (l_U971 == 1)
                {
                    sub_7305( l_U1021, l_U532[0] );
                }
                sub_1222( 1 );
                sub_52986();
                GET_GAME_TIMER( ref l_U997 );
                l_U965 = 5;
                break;
                case 5:
                GET_GAME_TIMER( ref l_U998 );
                l_U999 = l_U998 - l_U997;
                if (l_U999 > l_U1021._fU124)
                {
                    DO_SCREEN_FADE_OUT( 3000 );
                    l_U965 = 7;
                }
                break;
                case 7:
                if (IS_SCREEN_FADED_OUT())
                {
                    sub_26918();
                    sub_17017( 0 );
                    l_U987 = 0;
                    sub_5190();
                    sub_1222( 0 );
                    END_CAM_COMMANDS( ref l_U985 );
                    CLEAR_PRINTS();
                    for ( J = 0; J <= 1; J++ )
                    {
                        if (DOES_PICKUP_EXIST( l_U1116[J] ))
                        {
                            REMOVE_PICKUP( l_U1116[J] );
                        }
                    }
                    l_U965 = 8;
                }
                break;
                case 8: break;
            }
            break;
        }
    }
    return;
}

int sub_46810(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, boolean bParam7, unknown uParam8)
{
    int iVar11;

    if (l_U1217 == 0)
    {
        if (l_U1223 == 0)
        {
            l_U1220 = sub_29235();
            if (l_U1221 != l_U1220)
            {
                REQUEST_MODEL( l_U1090[l_U1220] );
                l_U1223 = 1;
            }
        }
        if (l_U1221 != l_U1220)
        {
            if (HAS_MODEL_LOADED( l_U1090[l_U1220] ))
            {
                l_U1223 = 0;
                l_U1217 = 1;
            }
        }
    }
    else if (HAS_MODEL_LOADED( l_U1090[l_U1220] ))
    {
        if (NOT (DOES_CHAR_EXIST( (uParam0^) )))
        {
            CREATE_CHAR( 9, l_U1090[l_U1220], uParam2, uParam3, uParam4, uParam0, 1 );
            SET_CHAR_HEADING( (uParam0^), uParam5 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^) );
        }
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_AMBIENT_VOICE_NAME( (uParam0^), sub_29455( l_U1220 ) );
            SET_ROOM_FOR_CHAR_BY_NAME( (uParam0^), l_U350 );
            SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 8 );
            SET_CHAR_DECISION_MAKER( (uParam0^), l_U471 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 6000, ref iVar11 );
            if (iVar11 < 2000)
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^), l_U474 );
            }
            else if (iVar11 < 4000)
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^), l_U475 );
            }
            else
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^), l_U474 );
            }
            SET_CHAR_RELATIONSHIP( (uParam0^), 5, 7 );
            SET_CHAR_RELATIONSHIP( (uParam0^), 5, 5 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
            if (bParam7)
            {
                GIVE_WEAPON_TO_CHAR( (uParam0^), 1, 1, 1 );
            }
            SET_PED_HEEDS_THE_EVERYONE_IGNORE_PLAYER_FLAG( (uParam0^), 0 );
            if (bParam6)
            {
                GIVE_WEAPON_TO_CHAR( (uParam0^), 3, 1, 1 );
            }
            if (NOT (IS_CHAR_INJURED( uParam1 )))
            {
                TASK_COMBAT( (uParam0^), uParam1 );
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1090[l_U1220] );
        l_U1217 = 0;
        return 1;
    }
    else
    {
        l_U1217 = 0;
    }
    return 0;
}

int sub_47434(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, boolean bParam7, unknown uParam8)
{
    int iVar11;
    unknown uVar12;

    if (l_U1218 == 0)
    {
        if (l_U1222 == 0)
        {
            l_U1221 = sub_29235();
            if (l_U1221 != l_U1220)
            {
                REQUEST_MODEL( l_U1090[l_U1221] );
                l_U1222 = 1;
            }
        }
        if (l_U1221 != l_U1220)
        {
            if (HAS_MODEL_LOADED( l_U1090[l_U1221] ))
            {
                l_U1222 = 0;
                l_U1218 = 1;
            }
        }
    }
    else if (HAS_MODEL_LOADED( l_U1090[l_U1221] ))
    {
        if (NOT (DOES_CHAR_EXIST( (uParam0^) )))
        {
            CREATE_CHAR( 8, l_U1090[l_U1221], uParam2, uParam3, uParam4, uParam0, 1 );
            SET_CHAR_HEADING( (uParam0^), uParam5 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^) );
        }
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_AMBIENT_VOICE_NAME( (uParam0^), sub_29455( l_U1221 ) );
            SET_ROOM_FOR_CHAR_BY_NAME( (uParam0^), l_U350 );
            SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 7 );
            SET_CHAR_DECISION_MAKER( (uParam0^), l_U471 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 6000, ref iVar11 );
            if (iVar11 < 2000)
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^), l_U474 );
            }
            else if (iVar11 < 4000)
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^), l_U475 );
            }
            else
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^), l_U474 );
            }
            SET_CHAR_RELATIONSHIP( (uParam0^), 5, 6 );
            SET_CHAR_RELATIONSHIP( (uParam0^), 5, 8 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
            SET_PED_HEEDS_THE_EVERYONE_IGNORE_PLAYER_FLAG( (uParam0^), 0 );
            if (bParam7)
            {
                GIVE_WEAPON_TO_CHAR( (uParam0^), 1, 1, 1 );
            }
            SET_CHAR_MELEE_MOVEMENT_CONSTAINT_BOX( (uParam0^), l_U115._fU0 - 6, l_U115._fU4 - 6, l_U115._fU8 - 6, l_U115._fU0 + 6, l_U115._fU4 + 6, l_U115._fU8 + 6 );
            if (bParam6)
            {
                GIVE_WEAPON_TO_CHAR( (uParam0^), 3, 1, 1 );
            }
            if (NOT (IS_CHAR_INJURED( uParam1 )))
            {
                TASK_COMBAT( (uParam0^), uParam1 );
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1090[l_U1221] );
        l_U1218 = 0;
        return 1;
    }
    else
    {
        l_U1218 = 0;
    }
    return 0;
}

void sub_48072()
{
    return;
}

void sub_48110()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;
    int iVar5;

    switch (l_U642)
    {
        case 0:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar4 );
        if (iVar4 < 50)
        {
            if (NOT (IS_CHAR_INJURED( l_U532[0] )))
            {
                GET_CHAR_HEALTH( l_U532[0], ref iVar5 );
            }
            if (iVar5 > 120)
            {
                sub_34753( l_U532[0] );
            }
            else
            {
                sub_34812( l_U532[0] );
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U532[1] )))
        {
            GET_CHAR_HEALTH( l_U532[1], ref iVar5 );
        }
        if (iVar5 > 120)
        {
            sub_34753( l_U532[1] );
        }
        else
        {
            sub_34812( l_U532[1] );
        }
        l_U642 = 1;
        GET_GAME_TIMER( ref l_U643 );
        break;
        case 1:
        GET_GAME_TIMER( ref l_U644 );
        l_U645 = l_U644 - l_U643;
        if (l_U645 > 5000)
        {
            l_U642 = 0;
        }
        break;
    }
    return;
}

void sub_48458(unknown uParam0)
{
    int iVar3;

    switch (l_U967)
    {
        case 0:
        l_U1228._fU0 = {-384.27870000, 1498.70900000, 12};
        l_U1228._fU12 = {-28.62618000, -0.00000100, 159.66860000};
        l_U1228._fU120 = 37;
        l_U1262._fU0 = {-380.69930000, 1490.93300000, 11.56584000};
        l_U1262._fU12 = {-8.01430300, 0.00000000, 71.60787000};
        l_U1262._fU120 = 37;
        l_U1296._fU0 = {-388.63120000, 1487.00500000, 12.58147000};
        l_U1296._fU12 = {-18.40145000, 0.00000100, -27.00286000};
        l_U1296._fU120 = 37;
        l_U1330._fU0 = {-391.59060000, 1494.96600000, 12};
        l_U1330._fU12 = {-12.06269000, 0.00000000, -120.87690000};
        l_U1330._fU120 = 37;
        if (NOT (IS_CHAR_INJURED( l_U532[uParam0] )))
        {
            sub_48800( l_U1330, l_U532[uParam0], 0 );
        }
        GET_GAME_TIMER( ref l_U997 );
        l_U967 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U998 );
        l_U999 = l_U998 - l_U997;
        if (sub_49155())
        {
            if (l_U999 > 3000)
            {
                l_U967 = 2;
            }
        }
        else if (l_U999 > 8000)
        {
            l_U967 = 2;
        }
        break;
        case 2:
        iVar3 = sub_49336();
        if (iVar3 == 0)
        {
            sub_48800( l_U1228, l_U532[uParam0], 1 );
        }
        else if (iVar3 == 1)
        {
            sub_48800( l_U1262, l_U532[uParam0], 1 );
        }
        else if (iVar3 == 3)
        {
            sub_48800( l_U1296, l_U532[uParam0], 1 );
        }
        else
        {
            iVar3 = 2;
            sub_48800( l_U1330, l_U532[uParam0], 1 );
        };;;
        GET_GAME_TIMER( ref l_U997 );
        l_U967 = 1;
        break;
        case 3: break;
        case 4: break;
    }
    return;
}

void sub_48800(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, int iParam34, int iParam35)
{
    if (DOES_CAM_EXIST( l_U103 ))
    {
        DESTROY_CAM( l_U103 );
    }
    if (DOES_CAM_EXIST( l_U100[0] ))
    {
        DESTROY_CAM( l_U100[0] );
    }
    CREATE_CAM( 14, ref l_U103 );
    SET_CAM_POS( l_U103, uParam0._fU0._fU0, uParam0._fU0._fU4, uParam0._fU0._fU8 );
    if (iParam34 == nil)
    {
        SET_CAM_ROT( l_U103, uParam0._fU12._fU0, uParam0._fU12._fU4, uParam0._fU12._fU8 );
    }
    else if (DOES_CHAR_EXIST( iParam34 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam34 )))
        {
            POINT_CAM_AT_PED( l_U103, iParam34 );
            if (iParam35 == 1)
            {
                SET_CAM_POINT_DAMPING_PARAMS( l_U103, 1065353216, 1097859072, 1084227584 );
            }
        }
    }
    SET_CAM_FOV( l_U103, uParam0._fU120 );
    SET_CAM_ACTIVE( l_U103, 1 );
    SET_CAM_PROPAGATE( l_U103, 1 );
    return;
}

int sub_49155()
{
    if (sub_49164() == 0)
    {
        return 1;
    }
    return 0;
}

int sub_49164()
{
    if (l_U1227 == 0)
    {
        return 0;
    }
    else if (l_U1227 == 1)
    {
        return 1;
    }
    else if (l_U1227 == 3)
    {
        return 3;
    }
    else if (l_U1227 == 2)
    {
        return 2;
    };;;;
    return 1;
}

void sub_49336()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    int[2] iVar8;

    iVar7 = 0;
    array(ref iVar8, 2);
    if (NOT (IS_CHAR_INJURED( l_U532[0] )))
    {
        GET_CHAR_COORDINATES( l_U532[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if ((VDIST( uVar2, l_U1228._fU0 )) < (VDIST( uVar2, l_U1262._fU0 )))
        {
            iVar8[0] = 0;
        }
        else
        {
            iVar8[0] = 1;
        }
        if ((VDIST( uVar2, l_U1228._fU0 )) < (VDIST( uVar2, l_U1330._fU0 )))
        {
            iVar8[0] = 0;
        }
        else
        {
            iVar8[0] = 2;
        }
        if ((VDIST( uVar2, l_U1228._fU0 )) < (VDIST( uVar2, l_U1296._fU0 )))
        {
            iVar8[0] = 0;
        }
        else
        {
            iVar8[0] = 3;
        }
        if ((VDIST( uVar2, l_U1262._fU0 )) < (VDIST( uVar2, l_U1296._fU0 )))
        {
            iVar8[0] = 1;
        }
        else
        {
            iVar8[0] = 3;
        }
        if ((VDIST( uVar2, l_U1262._fU0 )) < (VDIST( uVar2, l_U1330._fU0 )))
        {
            iVar8[0] = 1;
        }
        else
        {
            iVar8[0] = 2;
        }
        if ((VDIST( uVar2, l_U1330._fU0 )) < (VDIST( uVar2, l_U1296._fU0 )))
        {
            iVar8[0] = 2;
        }
        else
        {
            iVar8[0] = 3;
        }
    }
    if (l_U1227 == iVar8[0])
    {
        l_U1227 = iVar8[1];
        return iVar8[1];
        break;
    }
    l_U1227 = iVar8[0];
    return iVar8[0];
}

int sub_50044(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -377.56560000, 1492.28100000, 9.71050000, 0.75000000, 2.00000000, 10.00000000, 0 ))
        {
            return 1;
        }
        if (IS_CHAR_IN_ANGLED_AREA_3D( uParam0, -391.32000000, 1486.60000000, 10.81000000, -386.50000000, 1484.00000000, 8.78000000, 1, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_51796(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8)
{
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (DOES_CAM_EXIST( iParam0->_fU128 ))
    {
        DESTROY_CAM( iParam0->_fU128 );
    }
    if (DOES_CAM_EXIST( l_U100[0] ))
    {
        DESTROY_CAM( l_U100[0] );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        CREATE_CAM( 14, iParam0 + 128 );
        ATTACH_CAM_TO_PED( iParam0->_fU128, uParam1 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( iParam0->_fU128, 1 );
        SET_CAM_ATTACH_OFFSET( iParam0->_fU128, uParam2._fU0, uParam2._fU4, uParam2._fU8 );
        if (iParam8 == nil)
        {
            SET_CAM_ROT( iParam0->_fU128, uParam5._fU0, uParam5._fU4, uParam5._fU8 );
        }
        else if (DOES_CHAR_EXIST( iParam8 ))
        {
            if (NOT (IS_CHAR_DEAD( iParam8 )))
            {
                POINT_CAM_AT_PED( iParam0->_fU128, iParam8 );
            }
            else
            {
                PRINTNL();
                PRINTSTRING( "------Pointing Camera at Dead Char's last position---------" );
                PRINTNL();
                N_1363505769( iParam8, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
                POINT_CAM_AT_COORD( iParam0->_fU128, uVar11._fU0, uVar11._fU4, uVar11._fU8 );
            }
        }
        SET_CAM_FOV( iParam0->_fU128, iParam0->_fU120 );
        SET_CAM_ACTIVE( iParam0->_fU128, 1 );
        SET_CAM_PROPAGATE( iParam0->_fU128, 1 );
    }
    return;
}

void sub_52986()
{
    switch (l_U968)
    {
        case 0: break;
        case 2:
        PRINT_NOW( "FCRedLose", 7500, 1 );
        l_U968 = 0;
        break;
        case 1:
        PRINT_NOW( "FCRedWin", 7500, 1 );
        l_U968 = 0;
        break;
        case 3:
        PRINT_NOW( "FCGreenWin", 7500, 1 );
        l_U968 = 0;
        break;
        case 4:
        PRINT_NOW( "FCGreenLose", 7500, 1 );
        l_U968 = 0;
        break;
        case 5:
        PRINT_NOW( "FCDRAW", 7500, 1 );
        l_U968 = 0;
        break;
    }
    return;
}

void sub_54162()
{
    switch (l_U1132)
    {
        case 0:
        sub_2555();
        l_U1138._fU0 = {-386.22300000, 1483.98600000, 13.43064000};
        l_U1138._fU12 = {-36.64116000, 0.00000000, -179.47100000};
        l_U1138._fU120 = 32;
        l_U1138._fU124 = 1000;
        l_U1132 = 1;
        break;
        case 1:
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 3000 );
            BEGIN_CAM_COMMANDS( ref l_U985 );
            sub_48800( l_U1138, 0, 0 );
            sub_54346( 0 );
            sub_1222( 1 );
            PRINT_HELP_FOREVER( "FClubSPECT" );
            sub_5190();
            DISPLAY_CASH( 1 );
            l_U1132 = 2;
        }
        break;
        case 2:
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_8090())
            {
                CLEAR_HELP();
                DISPLAY_CASH( 0 );
                l_U1132 = 0;
                l_U963 = 5;
            }
            else if (sub_8300())
            {
                if (IS_SCORE_GREATER( sub_1261(), 99 ))
                {
                    if (l_U1017 == 0)
                    {
                        sub_17266();
                        l_U1017 = 1;
                    }
                    SET_CHAR_COMPONENT_VARIATION( sub_1354(), 1, 1, 0 );
                    WAIT( 20 );
                    ADD_SCORE( sub_1261(), 65436 );
                    INCREMENT_INT_STAT( 236, 100 );
                    CLEAR_HELP();
                    DISPLAY_CASH( 0 );
                    sub_54712();
                    l_U1132 = 0;
                    l_U963 = 3;
                }
                else
                {
                    PRINT_NOW( "NoCashFC", 7500, 1 );
                }
            }
            else if (sub_8504())
            {
                CLEAR_HELP();
                l_U1132 = 0;
                l_U963 = 8;
            };;;
        }
        break;
    }
    return;
}

void sub_54346(int iParam0)
{
    int I;

    I = 0;
    for ( I = 0; I <= 52; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U477[I] )))
        {
            if (iParam0 == 1)
            {
                TASK_LOOK_AT_CHAR( l_U477[I], sub_1354(), -2, 0 );
            }
            else
            {
                TASK_LOOK_AT_COORD( l_U477[I], l_U115._fU0, l_U115._fU4, l_U115._fU8, -2, 0 );
            }
        }
    }
    return;
}

void sub_54712()
{
    sub_10007();
    sub_1222( 0 );
    DISPLAY_RADAR( 1 );
    END_CAM_COMMANDS( ref l_U985 );
    return;
}

void sub_54850()
{
    switch (l_U970)
    {
        case 0:
        GET_GAME_TIMER( ref l_U1001 );
        l_U1002 = l_U1001 - l_U1000;
        if (l_U1002 > 7500)
        {
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 3000 );
            }
            SET_PLAYER_CONTROL( sub_1261(), 0 );
            CLEAR_HELP();
            l_U970 = 1;
        }
        break;
        case 1:
        if (IS_SCREEN_FADED_OUT())
        {
            sub_2497();
            sub_1519();
            DISPLAY_CASH( 0 );
            SET_FREE_HEALTH_CARE( sub_1261(), 0 );
            SET_CHAR_COORDINATES( sub_1354(), l_U979._fU0, l_U979._fU4, l_U979._fU8 );
            SET_CHAR_HEADING( sub_1354(), l_U1007 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            LOAD_SCENE( l_U979._fU0, l_U979._fU4, l_U979._fU8 );
            sub_1222( 0 );
            if (l_U985 > 0)
            {
                END_CAM_COMMANDS( ref l_U985 );
            }
            if (l_U1017 == 1)
            {
                sub_55179();
                l_U1017 = 0;
            }
            SET_WANTED_MULTIPLIER( 1.00000000 );
            SET_DEAD_PEDS_DROP_WEAPONS( 1 );
            l_U1015 = 1;
            sub_4869();
            if (l_U1019)
            {
                g_U12379 = 0;
                l_U1019 = 0;
            }
            sub_2662();
            DISPLAY_FRONTEND_MAP_BLIPS( 1 );
            l_U974 = 0;
            l_U972 = 1;
            BLOCK_PED_WEAPON_SWITCHING( sub_1354(), 0 );
            SET_DEAD_PEDS_DROP_WEAPONS( 1 );
            sub_5190();
            l_U974 = 0;
            l_U972 = 1;
            sub_1445();
            l_U970 = 2;
        }
        break;
        case 2:
        DO_SCREEN_FADE_IN( 3000 );
        SET_PLAYER_CONTROL( sub_1261(), 1 );
        l_U970 = 3;
        break;
        case 3:
        if (IS_SCREEN_FADED_IN())
        {
            sub_2555();
            if (l_U1020 == 1)
            {
                sub_56136();
            }
            TERMINATE_THIS_SCRIPT();
            l_U963 = 0;
        }
        break;
        case 4: break;
    }
    return;
}

void sub_55179()
{
    sub_55193( g_U10496 );
    return;
}

void sub_55193(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    sub_17293( uParam0, ref uVar3 );
    if (uVar3._fU0 < 8)
    {
        sub_55225( uVar3._fU0 );
    }
    if (uVar3._fU4 < 3)
    {
        sub_55329( uVar3._fU4 );
    }
    if (uVar3._fU8 < 2)
    {
        sub_55433( uVar3._fU8 );
    }
    if (uVar3._fU12 < 1)
    {
        sub_55537( uVar3._fU12 );
    }
    if (uVar3._fU16 < 1)
    {
        sub_55694( uVar3._fU16 );
    }
    switch (uVar3._fU20)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_1354(), 4, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( sub_1354(), 4, 0, 0 );
        break;
    }
    switch (uVar3._fU24)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_1354(), 3, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( sub_1354(), 3, 0, 0 );
        break;
    }
    return;
}

void sub_55225(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_17560( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_1354(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_1354(), 1 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_1354(), 1, iVar3, iVar4 );
    }
    return;
}

void sub_55329(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_17907( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_1354(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_1354(), 2 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_1354(), 2, iVar3, iVar4 );
    }
    return;
}

void sub_55433(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_18149( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_1354(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_1354(), 5 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_1354(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_55537(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_18355( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_1354(), 0, ref iVar4 );
    if (((GET_CHAR_TEXTURE_VARIATION( sub_1354(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_1354(), 8 )) != 0))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_1354(), 8, 0, 0 );
    }
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_1354(), 0 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_1354(), 0, iVar3 );
        }
    }
    return;
}

void sub_55694(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_18557( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_1354(), 1, ref iVar4 );
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_1354(), 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_1354(), 1, iVar3 );
        }
    }
    return;
}

void sub_56136()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

