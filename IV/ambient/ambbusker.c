void main()
{
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 1;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U115 = 0;
    l_U116 = 1;
    l_U161 = 0;
    l_U164 = -525076767;
    l_U165 = "amb@busker";
    StrCopy( ref l_U166, "BUSK1", 16 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_123();
    }
    WAIT( 0 );
    l_U117 = l_U170;
    if (g_U8674)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambbusker" )) == 1)
        {
            g_U8674 = 0;
        }
    }
    if (DOES_CHAR_EXIST( l_U117 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U117 )))
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U117, 1 );
            SET_CHAR_NAME_DEBUG( l_U117, "START" );
        }
    }
    if (NOT g_U8674)
    {
        if (NOT (IS_CHAR_DEAD( l_U117 )))
        {
            GET_CHAR_COORDINATES( l_U117, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
            GET_GAME_TIMER( ref l_U162 );
            GET_GAME_TIMER( ref l_U159 );
            l_U162 = l_U162 mod 600000;
            g_U8674 = 1;
            l_U105 = 1;
        }
        else
        {
            l_U104 = 0;
        }
    }
    else
    {
        l_U104 = 0;
        if (NOT (IS_CHAR_DEAD( l_U117 )))
        {
            SET_CHAR_NAME_DEBUG( l_U117, "OTHRACTV" );
        }
    }
    if (l_U104)
    {
        if (NOT (IS_CHAR_DEAD( l_U117 )))
        {
            SET_CHAR_NAME_DEBUG( l_U117, "WAITING1" );
        }
    }
    while (l_U104)
    {
        WAIT( 0 );
        if (sub_1070())
        {
            switch (l_U102)
            {
                case 0:
                sub_1189();
                break;
                case 1:
                sub_1634();
                break;
                default: break;
            }
        }
        else
        {
            l_U104 = 0;
        }
        sub_4890();
    }
    sub_123();
    return;
}

void sub_123()
{
    if (NOT (IS_CHAR_DEAD( l_U117 )))
    {
        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U117, 1 );
        if (l_U115)
        {
            ;
        }
        CLEAR_CHAR_SECONDARY_TASK( l_U117 );
        if (NOT (IS_CHAR_INJURED( l_U117 )))
        {
            TASK_WANDER_STANDARD( l_U117 );
        }
        SET_CHAR_KEEP_TASK( l_U117, 1 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U117 );
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U132 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U164 );
    REMOVE_BLIP( l_U124 );
    REMOVE_ANIMS( l_U165 );
    sub_291( 2, ref l_U166 );
    if (l_U105)
    {
        g_U8674 = 0;
    }
    if (l_U115)
    {
        STOP_STREAM();
        l_U115 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_291(int iParam0, string sParam1)
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
            if ((l_U3) AND (g_U9172 == iParam0))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_512();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_561(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_512()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_561()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_1070()
{
    if (DOES_CHAR_EXIST( l_U117 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U117 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U117 )))
            {
                if (NOT g_U10978)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_1189()
{
    REQUEST_ANIMS( l_U165 );
    REQUEST_MODEL( l_U164 );
    if ((NOT (HAS_MODEL_LOADED( l_U164 ))) || (NOT (HAVE_ANIMS_LOADED( l_U165 ))))
    {
        GET_GAME_TIMER( ref l_U160 );
        if ((l_U160 - l_U159) > 10000)
        {
            l_U102 = 1;
            l_U103 = 7;
            if (NOT (IS_CHAR_INJURED( l_U117 )))
            {
                SET_CHAR_NAME_DEBUG( l_U117, "WANDER" );
                TASK_WANDER_STANDARD( l_U117 );
            }
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U117, sub_1358(), 50.00000000, 50.00000000, 50.00000000, 0 ))
    {
        if (PRELOAD_STREAM_WITH_START_OFFSET( "BUSKER_LOOP", l_U162 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U117 )))
            {
                SET_CHAR_NAME_DEBUG( l_U117, "ACTIVE" );
            }
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U117, 0 );
            l_U116 = 0;
            l_U102 = 1;
        }
        else
        {
            GET_GAME_TIMER( ref l_U160 );
            if ((l_U160 - l_U159) > 10000)
            {
                l_U102 = 1;
                l_U103 = 7;
                if (NOT (IS_CHAR_INJURED( l_U117 )))
                {
                    SET_CHAR_NAME_DEBUG( l_U117, "WANDER" );
                    TASK_WANDER_STANDARD( l_U117 );
                }
            }
        }
    }
    return;
}

void sub_1358()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1634()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (l_U103 == 6))
    {
        if (IS_PED_IN_COMBAT( l_U117 ))
        {
            sub_291( 2, ref l_U166 );
            TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( l_U117, sub_1358(), 300, -1 );
            l_U103 = 6;
        }
    }
    if (l_U115)
    {
        if (NOT sub_1721())
        {
            STOP_STREAM();
            l_U115 = 0;
            GET_GAME_TIMER( ref l_U162 );
            l_U162 = l_U162 mod 600000;
            if (NOT (IS_CHAR_DEAD( l_U117 )))
            {
                SET_CHAR_NAME_DEBUG( l_U117, "STOPPED" );
            }
        }
    }
    else if (sub_1721())
    {
        if (PRELOAD_STREAM_WITH_START_OFFSET( "BUSKER_LOOP", l_U162 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U117 )))
            {
                SET_CHAR_NAME_DEBUG( l_U117, "ACTIVE2" );
            }
            PLAY_STREAM_FROM_PED( l_U117 );
            l_U115 = 1;
        }
        else if (NOT (IS_CHAR_DEAD( l_U117 )))
        {
            SET_CHAR_NAME_DEBUG( l_U117, "WAITING2" );
        }
    }
    else if (NOT (IS_CHAR_DEAD( l_U117 )))
    {
        SET_CHAR_NAME_DEBUG( l_U117, "NOSAX" );
    };;;
    switch (l_U103)
    {
        case 0:
        if (l_U105)
        {
            if (NOT l_U115)
            {
                if (IS_PED_HOLDING_AN_OBJECT( l_U117 ))
                {
                    if (PRELOAD_STREAM_WITH_START_OFFSET( "BUSKER_LOOP", l_U162 ))
                    {
                        PLAY_STREAM_FROM_PED( l_U117 );
                        l_U115 = 1;
                    }
                }
            }
            GET_CHAR_COORDINATES( l_U117, ref l_U136._fU0, ref l_U136._fU4, ref l_U136._fU8 );
            GET_CLOSEST_CAR_NODE( l_U136._fU0, l_U136._fU4, l_U136._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_GAME_TIMER( ref l_U158 );
            l_U103 = 1;
        }
        break;
        case 1:
        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U117, sub_1358(), 5.00000000, 5.00000000, 1.00000000, 0 ))
        {
            if (IS_PED_HOLDING_AN_OBJECT( l_U117 ))
            {
                if (l_U115)
                {
                    sub_2494();
                }
                else
                {
                    sub_291( 2, ref l_U166 );
                }
            }
            else
            {
                sub_291( 2, ref l_U166 );
                l_U103 = 7;
            }
        }
        else
        {
            sub_291( 2, ref l_U166 );
        }
        break;
        case 3:
        GET_SCRIPT_TASK_STATUS( sub_1358(), 102, ref l_U163 );
        if (l_U163 == 7)
        {
            sub_3577();
        }
        break;
        case 4:
        sub_4099();
        break;
        case 7: break;
    }
    if (l_U115)
    {
        ;
    }
    if (NOT l_U116)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U117, sub_1358(), 50.00000000, 50.00000000, 20.00000000, 0 )))
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U117, 1 );
            l_U116 = 1;
        }
    }
    return;
}

int sub_1721()
{
    if (IS_PED_HOLDING_AN_OBJECT( l_U117 ))
    {
        if (IS_CHAR_USING_ANY_SCENARIO( l_U117 ))
        {
            if ((IS_CHAR_PLAYING_ANIM( l_U117, "amb@default", "busker_default" )) || ((IS_CHAR_PLAYING_ANIM( l_U117, "amb@busker", "sax_loop_b" )) || (IS_CHAR_PLAYING_ANIM( l_U117, "amb@busker", "sax_loop_a" ))))
            {
                if (NOT (IS_CHAR_GESTURING( l_U117 )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_2494()
{
    if (sub_2505( 2, 0 ))
    {
        if (sub_2794( 2, ref l_U166, 0 ))
        {
            if (HAVE_ANIMS_LOADED( l_U165 ))
            {
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_1358(), "throw_right", l_U165, 12.00000000, 0, 0, 0, 0, -1 );
            }
            l_U103 = 3;
        }
    }
    else
    {
        sub_291( 2, ref l_U166 );
    }
    return;
}

int sub_2505(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_561() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_561() )))
            {
                if (((g_U9202) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_561() )))))
                {
                    if (NOT sub_2601())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1358() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_2686())
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

int sub_2601()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_2686()
{
    return sub_2697( 0, 0 );
}

int sub_2697(boolean bParam0, unknown uParam1)
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

int sub_2794(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_2505( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_561(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_3069();
                l_U1 = 1;
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
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_3069()
{
    return sub_2697( 1, 1 );
}

void sub_3577()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;

    if (NOT (IS_CHAR_PLAYING_ANIM( sub_1358(), l_U165, "throw_right" )))
    {
        if (DOES_OBJECT_EXIST( l_U132 ))
        {
            if (IS_OBJECT_ATTACHED( l_U132 ))
            {
                DETACH_OBJECT( l_U132, 1 );
                GET_OBJECT_COORDINATES( l_U132, ref l_U155._fU0, ref l_U155._fU4, ref l_U155._fU8 );
            }
        }
        l_U155._fU8 += 0.10000000;
        if (IS_SCORE_GREATER( sub_561(), 9 ))
        {
            ADD_SCORE( sub_561(), -10 );
            l_U108 = 1;
        }
        l_U103 = 4;
        sub_291( 2, ref l_U166 );
    }
    else if (NOT l_U107)
    {
        GET_CHAR_COORDINATES( sub_1358(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        CREATE_OBJECT( l_U164, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U132, 1 );
        ATTACH_OBJECT_TO_PED( l_U132, sub_1358(), 1232, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
        l_U107 = 1;
    }
    else
    {
        GET_CHAR_ANIM_CURRENT_TIME( sub_1358(), l_U165, "throw_right", ref fVar5 );
        if (fVar5 >= 0.59000000)
        {
            if (DOES_OBJECT_EXIST( l_U132 ))
            {
                if (IS_OBJECT_ATTACHED( l_U132 ))
                {
                    DETACH_OBJECT( l_U132, 1 );
                    GET_OBJECT_COORDINATES( l_U132, ref l_U155._fU0, ref l_U155._fU4, ref l_U155._fU8 );
                }
            }
            l_U155._fU8 += 0.10000000;
            if (IS_SCORE_GREATER( sub_561(), 9 ))
            {
                ADD_SCORE( sub_561(), -10 );
                l_U108 = 1;
            }
            l_U103 = 4;
        }
    }
    return;
}

void sub_4099()
{
    if (l_U108)
    {
        if (l_U107)
        {
            if (DOES_OBJECT_EXIST( l_U132 ))
            {
                if (IS_OBJECT_STATIC( l_U132 ))
                {
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U132 );
                    sub_4173();
                    sub_4290( 8, 10 );
                    l_U103 = 7;
                    SAY_AMBIENT_SPEECH( l_U117, "THANKS", 1, 0, 0 );
                }
            }
            else
            {
                l_U103 = 7;
            }
        }
        else
        {
            l_U103 = 7;
        }
    }
    if (NOT l_U108)
    {
        l_U103 = 7;
    }
    return;
}

void sub_4173()
{
    ProtectedSet(g_U8704, ProtectedGet(g_U8704) + 1);
    if (ProtectedGet(g_U8704) >= 3)
    {
        sub_4209( 36 );
        sub_4209( 37 );
        ProtectedSet(g_U8704, ProtectedGet(g_U8704) - 3);
    }
    SET_CHAR_HEALTH( sub_1358(), 200 );
    return;
}

void sub_4209(int iParam0)
{
    SET_BIT( ref g_U91._fU412, iParam0 - 11 );
    return;
}

void sub_4290(unknown uParam0, unknown uParam1)
{
    sub_4311( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_4311(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_4890()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        l_U104 = 0;
    }
    return;
}

