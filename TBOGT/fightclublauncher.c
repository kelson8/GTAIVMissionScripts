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
    l_U690 = 0;
    l_U691 = 0;
    l_U692 = 0;
    l_U693 = 0;
    l_U694 = 0;
    l_U695 = 0;
    l_U703 = 0;
    while (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
    {
        WAIT( 0 );
        if (g_U43627 == 1)
        {
            sub_630();
        }
        if (IS_PLAYER_PLAYING( sub_677() ))
        {
            if (NOT (IS_CHAR_DEAD( sub_720() )))
            {
                sub_774();
                switch (l_U683)
                {
                    case 0:
                    l_U690 = 0;
                    sub_2559();
                    if (IS_SCREEN_FADED_IN())
                    {
                        if (l_U703 == 0)
                        {
                            sub_2662( 1 );
                            l_U703 = 1;
                        }
                        if (g_U15811[25] == 1)
                        {
                            if (g_U43562 == 0)
                            {
                                if (g_U43561 == 0)
                                {
                                    if (g_U12379 == 0)
                                    {
                                        PRINT_HELP( "FIGHT_HELP" );
                                        GET_GAME_TIMER( ref l_U700 );
                                        g_U43562 = 1;
                                    }
                                }
                                GET_GAME_TIMER( ref l_U701 );
                                l_U702 = l_U701 - l_U700;
                                if (l_U702 < 10000)
                                {
                                    sub_2905( 47 );
                                }
                            }
                            if ((IS_BIT_SET( g_U10938._fU0, 4 )) == 0)
                            {
                                if (NOT GET_MISSION_FLAG())
                                {
                                    l_U690 = 1;
                                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_720(), -396.61430000, 1463.01600000, 15.51770000, 7.00000000, 7.00000000, 7.00000000, 0 ))
                                    {
                                        sub_2662( 1 );
                                        REQUEST_SCRIPT( "FightClubRing" );
                                        l_U683 = 1;
                                    }
                                }
                                else
                                {
                                    sub_3181();
                                }
                            }
                            else
                            {
                                sub_3181();
                            }
                        }
                    }
                    break;
                    case 1:
                    if (HAS_SCRIPT_LOADED( "FightClubRing" ))
                    {
                        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "FightClubRing" )) == 0)
                        {
                            START_NEW_SCRIPT( "FightClubRing", 1820 );
                            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "FightClubRing" );
                            l_U691 = 0;
                            l_U683 = 2;
                        }
                    }
                    break;
                    case 2:
                    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "FightClubRing" )) == 0)
                    {
                        sub_3181();
                    }
                    break;
                }
            }
        }
    }
    sub_630();
    return;
}

void sub_630()
{
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "FightClubRing" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_677()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_720()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_774()
{
    int iVar2;

    switch (l_U692)
    {
        case 0:
        l_U612[0] = 188553127;
        l_U612[1] = -409283472;
        l_U612[2] = -1780698891;
        l_U616[0] = {-399.61610000, 1480.04100000, 9.69060100};
        l_U616[1] = {-398.58970000, 1480.95800000, 9.69060100};
        l_U616[2] = {-395.68550000, 1482.80200000, 9.69510000};
        l_U626[0] = 322.34270000;
        l_U626[1] = 141.71350000;
        l_U626[2] = 181.60830000;
        l_U630 = "E2fightstrs";
        l_U692 = 1;
        break;
        case 1:
        REQUEST_MODEL( l_U612[0] );
        REQUEST_MODEL( l_U612[1] );
        REQUEST_MODEL( l_U612[2] );
        l_U692 = 2;
        break;
        case 2:
        sub_1075( 0 );
        sub_1075( 1 );
        sub_1075( 2 );
        if (NOT (IS_CHAR_INJURED( g_U43638[0] )))
        {
            if (NOT (IS_CHAR_INJURED( g_U43638[1] )))
            {
                TASK_CHAT_WITH_CHAR( g_U43638[0], g_U43638[1], 1, 1 );
                TASK_CHAT_WITH_CHAR( g_U43638[1], g_U43638[0], 0, 1 );
                l_U692 = 3;
            }
        }
        break;
        case 3:
        if (g_U43643 == 0)
        {
            sub_1075( 0 );
            sub_1075( 1 );
            sub_1075( 2 );
        }
        if (NOT (IS_CHAR_INJURED( g_U43638[1] )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( g_U43638[1], sub_720(), 3, 3, 0 ))
            {
                if (l_U693 == 0)
                {
                    TASK_LOOK_AT_CHAR( g_U43638[1], sub_720(), 4000, 0 );
                    TASK_LOOK_AT_CHAR( sub_720(), g_U43638[1], 4000, 0 );
                    l_U693 = 1;
                }
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( g_U43638[1], sub_720(), 5, 5, 0 )))
            {
                l_U693 = 0;
            }
        }
        if (NOT (IS_CHAR_INJURED( g_U43638[2] )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( g_U43638[2], sub_720(), 3, 3, 0 ))
            {
                if (l_U694 == 0)
                {
                    GET_CURRENT_CHAR_WEAPON( sub_720(), ref l_U699 );
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar2 );
                    TASK_LOOK_AT_CHAR( g_U43638[2], sub_720(), 4000, 0 );
                    TASK_LOOK_AT_CHAR( sub_720(), g_U43638[2], 4000, 0 );
                    if ((g_U43137 == 21) || (l_U690 == 1))
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( g_U43638[2], "Generic_Hi", "M_Y_GBIK_HI_01_FULL_01", 0, 0, 0 );
                        if (l_U699 != 0)
                        {
                            if (NOT sub_1913())
                            {
                                SAY_AMBIENT_SPEECH_WITH_VOICE( g_U43638[2], "GANG_WEAPON_WARNING", "M_Y_GBIK_HI_01_FULL_01", 0, 0, 0 );
                            }
                        }
                    }
                    else if (iVar2 < 50)
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( g_U43638[2], "Generic_Fuck_Off", "M_Y_GBIK_HI_01_FULL_01", 0, 0, 0 );
                    }
                    else
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( g_U43638[2], "GANG_ASK_PLAYER_LEAVE", "M_Y_GBIK_HI_01_FULL_01", 0, 0, 0 );
                    }
                    GET_GAME_TIMER( ref l_U696 );;
                    l_U693 = 1;
                }
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( g_U43638[2], sub_720(), 5, 5, 0 )))
            {
                l_U694 = 0;
            }
        }
        if (l_U695 == 0)
        {
            if (l_U693 == 1)
            {
                GET_GAME_TIMER( ref l_U697 );
                l_U698 = l_U697 - l_U696;
                if (l_U698 > 1000)
                {
                    if (l_U690 == 1)
                    {
                        SAY_AMBIENT_SPEECH( sub_720(), "Generic_Hi", 0, 0, 0 );
                    }
                    else
                    {
                        SAY_AMBIENT_SPEECH( sub_720(), "Generic_Fuck_Off", 0, 0, 0 );
                    }
                    l_U695 = 1;
                }
            }
        }
        if (g_U43137 == 21)
        {
            if (g_U43643 == 1)
            {
                sub_2414( 0 );
                sub_2414( 1 );
                sub_2414( 2 );
            }
        }
        break;
        case 4: break;
    }
    return;
}

void sub_1075(unknown uParam0)
{
    if (HAS_MODEL_LOADED( l_U612[uParam0] ))
    {
        if (NOT (DOES_CHAR_EXIST( g_U43638[uParam0] )))
        {
            CREATE_CHAR( 4, l_U612[uParam0], l_U616[uParam0]._fU0, l_U616[uParam0]._fU4, l_U616[uParam0]._fU8, ref g_U43638[uParam0], 1 );
            SET_CHAR_HEADING( g_U43638[uParam0], l_U626[uParam0] );
            SET_ROOM_FOR_CHAR_BY_NAME( g_U43638[uParam0], l_U630 );
            l_U631[uParam0] = 0;
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U612[uParam0] );
        }
    }
    else if (NOT (DOES_CHAR_EXIST( g_U43638[uParam0] )))
    {
        if (l_U631[uParam0] == 0)
        {
            REQUEST_MODEL( l_U612[uParam0] );
            l_U631[uParam0] = 1;
        }
    }
    return;
}

int sub_1913()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_2414(unknown uParam0)
{
    if (DOES_CHAR_EXIST( g_U43638[uParam0] ))
    {
        DELETE_CHAR( ref g_U43638[uParam0] );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U612[uParam0] );
    }
    return;
}

void sub_2559()
{
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_720(), l_U323._fU0, l_U323._fU4, l_U323._fU8, 10.00000000, 10.00000000, 10.00000000, 0 )))
    {
        l_U691 = 0;
    }
    return;
}

void sub_2662(int iParam0)
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

void sub_2905(unknown uParam0)
{
    int iVar3;

    if (NOT (DOES_BLIP_EXIST( g_U11582[uParam0]._fU32 )))
    {
        return;
    }
    if (NOT (g_U11343._fU660[uParam0] == 0))
    {
        return;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    g_U11343._fU660[uParam0] = iVar3 + 10000;
    FLASH_BLIP( g_U11582[uParam0]._fU32, 1 );
    CHANGE_BLIP_PRIORITY( g_U11582[uParam0]._fU32, l_U681 );
    return;
}

void sub_3181()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_720(), l_U323._fU0, l_U323._fU4, l_U323._fU8, 1.60000000, 1.60000000, 1.60000000, 0 ))
    {
        if (l_U691 == 0)
        {
            PRINT_HELP( "ComeBack" );
            l_U691 = 1;
        }
    }
    return;
}

