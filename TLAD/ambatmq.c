void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U2 = 0;
    l_U3 = 0;
    l_U17 = 0;
    l_U18 = 0;
    l_U19 = 0;
    l_U20 = 0;
    l_U21 = 0;
    l_U22 = 0;
    l_U23 = 0;
    l_U24 = 0;
    l_U26 = 0;
    l_U27 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_77();
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (IS_PLAYER_PLAYING( sub_127() ))
            {
                sub_170();
                switch (l_U3)
                {
                    case 0:
                    sub_909( l_U40 );
                    sub_1024();
                    l_U3 = 2;
                    break;
                    case 2:
                    if (HAVE_ANIMS_LOADED( "amb@atm" ))
                    {
                        l_U3 = 1;
                    }
                    break;
                    case 1:
                    switch (l_U2)
                    {
                        case 0:
                        BEGIN_CHAR_SEARCH_CRITERIA();
                        SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 36 );
                        END_CHAR_SEARCH_CRITERIA();
                        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_197(), l_U7._fU0, l_U7._fU4, 1.30000000, 1.30000000, 0 )))
                        {
                            if (l_U39 == nil)
                            {
                                GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U7._fU0, l_U7._fU4, l_U7._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U39 );
                            }
                            if (l_U39 != nil)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U39 )))
                                {
                                    if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U39 )))
                                    {
                                        SET_CHAR_AS_MISSION_CHAR( l_U39 );
                                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U39, 0 );
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U39, l_U7._fU0, l_U7._fU4, l_U7._fU8, 2, -2, 0.50000000 );
                                        l_U22 = 0;
                                        l_U20 = 0;
                                        l_U27 = 0;
                                        l_U2 = 1;
                                    }
                                    else
                                    {
                                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U39 );
                                        l_U39 = nil;
                                    }
                                }
                                else
                                {
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U39 );
                                    l_U39 = nil;
                                }
                            }
                        }
                        break;
                        case 1:
                        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_197(), l_U7._fU0, l_U7._fU4, 1.30000000, 1.30000000, 0 )))
                        {
                            if (NOT l_U22)
                            {
                                sub_1497();
                            }
                            else
                            {
                                l_U18 = 0;
                                l_U2 = 2;
                            }
                        }
                        break;
                        case 2:
                        if (NOT (IS_CHAR_INJURED( l_U39 )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U39, 29, ref l_U4 );
                        }
                        if ((l_U4 == 2) || (l_U4 == 7))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U39 )))
                            {
                                if (DOES_CHAR_EXIST( l_U39 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U39 )))
                                    {
                                        TASK_WANDER_STANDARD( l_U39 );
                                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U39 );
                                        GET_GAME_TIMER( ref l_U31 );
                                        l_U2 = 3;
                                    }
                                }
                            }
                        }
                        break;
                        case 3:
                        GET_GAME_TIMER( ref l_U32 );
                        l_U33 = l_U32 - l_U31;
                        if (l_U33 > 20000)
                        {
                            l_U2 = 0;
                        }
                        break;
                    }
                    break;
                }
            }
            else
            {
                sub_77();
            }
        }
        else
        {
            sub_77();
        }
    }
    sub_77();
    return;
}

void sub_77()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_127()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_170()
{
    if (NOT (IS_CHAR_INJURED( l_U39 )))
    {
        if (IS_CHAR_TOUCHING_CHAR( sub_197(), l_U39 ))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U39 );
            l_U22 = 1;
            sub_276( l_U39 );
            l_U18 = 1;
        }
        if (l_U18 == 1)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_197(), l_U7._fU0, l_U7._fU4, 10.00000000, 10.00000000, 0 )))
            {
                l_U2 = 0;
                l_U3 = 1;
                l_U18 = 0;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U39 )))
    {
        if (DOES_CHAR_EXIST( l_U39 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U39, sub_197(), 0 ))
            {
                l_U22 = 1;
                sub_432();
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U39 )))
    {
        if ((IS_CHAR_RESPONDING_TO_EVENT( l_U39, 61 )) || ((IS_CHAR_RESPONDING_TO_EVENT( l_U39, 51 )) || ((IS_CHAR_RESPONDING_TO_EVENT( l_U39, 59 )) || ((IS_CHAR_RESPONDING_TO_EVENT( l_U39, 65 )) || ((IS_CHAR_RESPONDING_TO_EVENT( l_U39, 50 )) || ((IS_CHAR_RESPONDING_TO_EVENT( l_U39, 43 )) || ((IS_CHAR_RESPONDING_TO_EVENT( l_U39, 75 )) || ((IS_CHAR_RESPONDING_TO_EVENT( l_U39, 9 )) || (IS_CHAR_RESPONDING_TO_EVENT( l_U39, 31 ))))))))))
        {
            CLEAR_CHAR_TASKS( l_U39 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U39 );
            l_U2 = 0;
        }
    }
    if (IS_CHAR_SHOOTING_IN_AREA( sub_197(), l_U7._fU0 - 50, l_U7._fU4 - 50, l_U7._fU0 + 50, l_U7._fU4 + 50, 0 ))
    {
        l_U22 = 1;
        sub_432();
    }
    if (l_U22 == 1)
    {
        l_U0 = 0;
    }
    if (LOCATE_CHAR_ANY_MEANS_2D( sub_197(), l_U7._fU0, l_U7._fU4, 1.30000000, 1.30000000, 0 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U39 )))
        {
            TASK_WANDER_STANDARD( l_U39 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U39 );
            l_U2 = 0;
        }
    }
    return;
}

void sub_197()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_276(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    uParam0 = nil;
    return;
}

void sub_432()
{
    CLEAR_SEQUENCE_TASK( l_U35 );
    CLEAR_SEQUENCE_TASK( l_U36 );
    CLEAR_SEQUENCE_TASK( l_U37 );
    CLEAR_SEQUENCE_TASK( l_U38 );
    l_U23 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_909(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
{
    l_U7._fU0 = uParam0._fU4[0]._fU0;
    l_U7._fU4 = uParam0._fU4[0]._fU4;
    l_U7._fU8 = uParam0._fU4[0]._fU8;
    l_U13._fU0 = uParam0._fU4[1]._fU0;
    l_U13._fU4 = uParam0._fU4[1]._fU4;
    l_U13._fU8 = uParam0._fU4[1]._fU8;
    l_U34 = uParam0._fU68[0];
    return;
}

void sub_1024()
{
    REQUEST_ANIMS( "amb@atm" );
    sub_1050();
    return;
}

void sub_1050()
{
    return;
}

void sub_1497()
{
    int iVar2;
    int iVar3;

    switch (l_U0)
    {
        case 0:
        sub_1540();
        l_U22 = 0;
        l_U0 = 1;
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U39 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_2D( l_U39, l_U7._fU0, l_U7._fU4, 0.75000000, 0.75000000, 0 ))
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                if (IS_CHAR_MALE( l_U39 ))
                {
                    if (iVar3 == 1)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U36 );
                        TASK_CHAR_SLIDE_TO_COORD( 0, l_U7._fU0, l_U7._fU4, l_U7._fU8, l_U34, 1061158912 );
                        TASK_PLAY_ANIM( 0, "m_getoutwallet_chest", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                        TASK_PLAY_ANIM( 0, "m_insertcard", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                        TASK_PLAY_ANIM( 0, "m_enternumbers", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                        TASK_PLAY_ANIM( 0, "m_wait", "amb@atm", 8.00000000, 0, 0, 0, 0, 5000 );
                        TASK_PLAY_ANIM( 0, "m_takecash", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                        TASK_PLAY_ANIM( 0, "m_putwalletaway_chest", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( l_U36 );
                        TASK_PERFORM_SEQUENCE( l_U39, l_U36 );
                        CLEAR_SEQUENCE_TASK( l_U36 );
                        WAIT( 0 );
                        l_U0 = 2;
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref l_U35 );
                        TASK_CHAR_SLIDE_TO_COORD( 0, l_U7._fU0, l_U7._fU4, l_U7._fU8, l_U34, 1061158912 );
                        TASK_PLAY_ANIM( 0, "m_getoutwallet_pocket", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                        TASK_PLAY_ANIM( 0, "m_insertcard", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                        TASK_PLAY_ANIM( 0, "m_enternumbers", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                        TASK_PLAY_ANIM( 0, "m_wait", "amb@atm", 8.00000000, 0, 0, 0, 0, 5000 );
                        TASK_PLAY_ANIM( 0, "m_takecash", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                        TASK_PLAY_ANIM( 0, "m_putwalletaway_pocket", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( l_U35 );
                        TASK_PERFORM_SEQUENCE( l_U39, l_U35 );
                        CLEAR_SEQUENCE_TASK( l_U35 );
                        WAIT( 0 );
                        l_U0 = 2;
                    }
                }
                else if (iVar3 == 1)
                {
                    OPEN_SEQUENCE_TASK( ref l_U38 );
                    TASK_CHAR_SLIDE_TO_COORD( 0, l_U7._fU0, l_U7._fU4, l_U7._fU8, l_U34, 1061158912 );
                    TASK_PLAY_ANIM( 0, "f_getoutpurse", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                    TASK_PLAY_ANIM( 0, "f_insertcard", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                    TASK_PLAY_ANIM( 0, "f_enternumbers", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                    TASK_PLAY_ANIM( 0, "f_wait", "amb@atm", 8.00000000, 0, 0, 0, 0, 5000 );
                    TASK_PLAY_ANIM( 0, "f_takecash", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                    TASK_PLAY_ANIM( 0, "f_putpurseaway", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                    CLOSE_SEQUENCE_TASK( l_U38 );
                    TASK_PERFORM_SEQUENCE( l_U39, l_U38 );
                    CLEAR_SEQUENCE_TASK( l_U38 );
                    WAIT( 0 );
                    l_U0 = 2;
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref l_U37 );
                    TASK_CHAR_SLIDE_TO_COORD( 0, l_U7._fU0, l_U7._fU4, l_U7._fU8, l_U34, 1061158912 );
                    TASK_PLAY_ANIM( 0, "m_getoutwallet_pocket", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                    TASK_PLAY_ANIM( 0, "f_insertcard", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                    TASK_PLAY_ANIM( 0, "f_enternumbers", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                    TASK_PLAY_ANIM( 0, "f_wait", "amb@atm", 8.00000000, 0, 0, 0, 0, 5000 );
                    TASK_PLAY_ANIM( 0, "f_takecash", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                    TASK_PLAY_ANIM( 0, "m_putwalletaway_pocket", "amb@atm", 8.00000000, 0, 0, 0, 0, -2 );
                    CLOSE_SEQUENCE_TASK( l_U37 );
                    TASK_PERFORM_SEQUENCE( l_U39, l_U37 );
                    CLEAR_SEQUENCE_TASK( l_U37 );
                    WAIT( 0 );
                    l_U0 = 2;
                }
            }
        }
        sub_1540();
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U39 )))
        {
            iVar2 = GET_CHAR_MONEY( l_U39 );
            if (iVar2 < 100)
            {
                iVar2 += 100;
                SET_CHAR_MONEY( l_U39, iVar2 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U39 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U39, 29, ref l_U5 );
        }
        if (l_U5 != 1)
        {
            l_U22 = 1;
        }
        if (l_U5 == 7)
        {
            l_U22 = 1;
        }
        sub_1540();
        break;
    }
    return;
}

void sub_1540()
{
    if (NOT (IS_CHAR_INJURED( l_U39 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_2D( sub_197(), l_U7._fU0, l_U7._fU4, 1.30000000, 1.30000000, 0 ))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U39 );
            CLEAR_SEQUENCE_TASK( l_U35 );
            CLEAR_SEQUENCE_TASK( l_U36 );
            CLEAR_SEQUENCE_TASK( l_U37 );
            CLEAR_SEQUENCE_TASK( l_U38 );
            sub_276( l_U39 );
            l_U39 = nil;
            l_U18 = 1;
        }
    }
    return;
}

