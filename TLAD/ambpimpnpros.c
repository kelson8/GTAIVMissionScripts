void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 1;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 0;
    ProtectedSet(l_U131, 20);
    l_U136 = 0;
    l_U146 = "amb@pimps_pros";
    l_U147 = 0;
    l_U149 = "misscar_sex";
    l_U174 = 0;
    l_U175 = 0;
    l_U176 = 0;
    l_U177 = 0;
    l_U178 = 1;
    StrCopy( ref l_U216, "pros_serv", 16 );
    l_U220 = 4;
    StrCopy( ref l_U221, "pros_07", 16 );
    l_U225 = 0.91600000;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_260();
    }
    WAIT( 0 );
    l_U118 = l_U226;
    sub_1006();
    if ((g_U9224) || (g_U9223))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambPimpNpros" )) == 1)
        {
            g_U9224 = 0;
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambbeggar" )) == 0)
            {
                g_U9223 = 0;
            }
        }
    }
    while (l_U108)
    {
        WAIT( 0 );
        if (sub_1335())
        {
            switch (l_U104)
            {
                case 0:
                sub_2062();
                break;
                case 1:
                sub_3034();
                break;
                default: break;
            }
        }
        else
        {
            l_U108 = 0;
        }
        sub_21869();
    }
    if (l_U110)
    {
        if (DOES_CHAR_EXIST( l_U118 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U118 )))
            {
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
            }
        }
        if (l_U111)
        {
            g_U9223 = 0;
        }
        sub_1639();
    }
    if (l_U112)
    {
        g_U9224 = 0;
    }
    sub_260();
    return;
}

void sub_260()
{
    if (NOT (IS_CHAR_DEAD( l_U118 )))
    {
        CLEAR_CHAR_TASKS( l_U118 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U118 );
    l_U118 = nil;
    if (NOT (IS_CHAR_DEAD( l_U119 )))
    {
        CLEAR_CHAR_TASKS( l_U119 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U119 );
    l_U119 = nil;
    if (NOT (IS_CHAR_DEAD( l_U120 )))
    {
        CLEAR_CHAR_TASKS( l_U120 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U120 );
    l_U120 = nil;
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U121 );
    l_U121 = nil;
    REMOVE_BLIP( l_U128 );
    REMOVE_BLIP( l_U129 );
    REMOVE_BLIP( l_U130 );
    REMOVE_ANIMS( l_U146 );
    sub_484( 4, ref l_U221 );
    if (l_U114)
    {
        if (# -NULL-0xc27e8e())
        {
            PROSTITUTE_CAM_ACTIVATE( 0 );
        }
        if (IS_PLAYER_PLAYING( sub_754() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_754(), 1 );
        }
        l_U116 = 0;
        l_U114 = 0;
    }
    if (l_U115)
    {
        sub_705();
        l_U115 = 0;
    }
    if (l_U116)
    {
        if (IS_PLAYER_PLAYING( sub_754() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_754(), 1 );
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_484(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U10470 ))
        {
            if ((l_U5) AND (g_U10468 == iParam0))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_705();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_754(), 1 );
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

void sub_705()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_754()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1006()
{
    l_U108 = 0;
    if (DOES_CHAR_EXIST( l_U118 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U118 )))
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
            l_U108 = 1;
        }
    }
    if (IS_PLAYER_PLAYING( sub_754() ))
    {
        if (NOT (IS_CHAR_DEAD( sub_1092() )))
        {
            ;
        }
        else
        {
            l_U108 = 0;
        }
    }
    else
    {
        l_U108 = 0;
    }
    if (l_U108)
    {
        if (NOT (IS_CHAR_DEAD( l_U118 )))
        {
            GET_CHAR_COORDINATES( l_U118, ref l_U125._fU0, ref l_U125._fU4, ref l_U125._fU8 );
        }
    }
    return;
}

void sub_1092()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1335()
{
    if (DOES_CHAR_EXIST( l_U118 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U118 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U118 )))
            {
                if (NOT g_U12303)
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U118, sub_1092(), 100.00000000, 100.00000000, 50.00000000, 0 ))
                    {
                        return 1;
                    }
                }
                else
                {
                    l_U105 = 11;
                }
            }
            else if (l_U105 == 0)
            {
                ;
            }
            else if (NOT g_U12303)
            {
                return 1;
            }
            else
            {
                sub_1503();
                l_U105 = 11;
            };;;
        }
    }
    return 0;
}

void sub_1503()
{
    unknown uVar2;

    if (l_U114)
    {
        if (# -NULL-0xc27e8e())
        {
            PROSTITUTE_CAM_ACTIVATE( 0 );
        }
        if (IS_PLAYER_PLAYING( sub_754() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_754(), 1 );
            GET_SCRIPT_TASK_STATUS( sub_1092(), 88, ref l_U144 );
            if (l_U144 == 1)
            {
                CLEAR_CHAR_TASKS( sub_1092() );
                CLEAR_CHAR_SECONDARY_TASK( sub_1092() );
            }
        }
        l_U116 = 0;
        l_U114 = 0;
        sub_1639();
    }
    if (l_U115)
    {
        sub_705();
        l_U115 = 0;
    }
    if (NOT (IS_CHAR_INJURED( l_U118 )))
    {
        if (IS_SCREEN_FADED_OUT())
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
            DELETE_CHAR( ref l_U118 );
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U118 );
            OPEN_SEQUENCE_TASK( ref uVar2 );
            if (IS_CHAR_IN_ANY_CAR( l_U118 ))
            {
                TASK_LEAVE_ANY_CAR( 0 );
            }
            TASK_WANDER_STANDARD( 0 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( l_U118, uVar2 );
            CLEAR_SEQUENCE_TASK( uVar2 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U118 );
    }
    if (l_U174)
    {
        if (IS_PLAYER_PLAYING( sub_754() ))
        {
            CLEAR_CHAR_TASKS( sub_1092() );
            CLEAR_CHAR_SECONDARY_TASK( sub_1092() );
            TASK_STAND_STILL( sub_1092(), 1 );
        }
        l_U174 = 0;
    }
    return;
}

void sub_1639()
{
    if ((IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U216, ProtectedGet(l_U179[3]) )) || ((IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U216, ProtectedGet(l_U179[2]) )) || ((IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U216, ProtectedGet(l_U179[1]) )) || (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U216, ProtectedGet(l_U179[0]) )))))
    {
        CLEAR_HELP();
    }
    return;
}

void sub_2062()
{
    REQUEST_ANIMS( l_U146 );
    REQUEST_ANIMS( l_U149 );
    if ((NOT (HAVE_ANIMS_LOADED( l_U149 ))) || (NOT (HAVE_ANIMS_LOADED( l_U146 ))))
    {
        REQUEST_ANIMS( l_U146 );
        REQUEST_ANIMS( l_U149 );
    }
    else if (# -NULL-0xc27e8e())
    {
        ProtectedSet(l_U179[0], 70);
        ProtectedSet(l_U179[1], 70);
        ProtectedSet(l_U179[2], 70);
        ProtectedSet(l_U179[3], ProtectedGet(l_U131));
        ProtectedSet(l_U131, 70);
    }
    else
    {
        ProtectedSet(l_U179[0], 20);
        ProtectedSet(l_U179[1], 50);
        ProtectedSet(l_U179[2], 70);
        ProtectedSet(l_U179[3], ProtectedGet(l_U131));
        ProtectedSet(l_U131, 20);
    }
    l_U150[0] = "f_handjob_intro";
    l_U154[0] = "f_handjob_loop";
    l_U158[0] = "f_handjob_outro";
    l_U162[0] = "m_handjob_intro";
    l_U166[0] = "m_handjob_loop";
    l_U170[0] = "m_handjob_outro";
    l_U150[1] = "f_blowjob_intro";
    l_U154[1] = "f_blowjob_loop";
    l_U158[1] = "f_blowjob_outro";
    l_U162[1] = "m_blowjob_intro";
    l_U166[1] = "m_blowjob_loop";
    l_U170[1] = "m_blowjob_outro";
    l_U150[2] = "f_sex_intro";
    l_U154[2] = "f_sex_loop";
    l_U158[2] = "f_sex_outro";
    l_U162[2] = "m_sex_intro";
    l_U166[2] = "m_sex_loop";
    l_U170[2] = "m_sex_outro";
    l_U186[0] = 750;
    l_U191[0] = 500;
    l_U196[0] = 250;
    l_U201[0] = 999999;
    l_U186[1] = 750;
    l_U191[1] = 500;
    l_U196[1] = 250;
    l_U201[1] = 999999;
    l_U186[2] = 1000;
    l_U191[2] = 500;
    l_U196[2] = 250;
    l_U201[2] = 999999;
    l_U186[3] = 1000;
    l_U191[3] = 500;
    l_U196[3] = 250;
    l_U201[3] = 999999;
    l_U206[0] = 0.01000000;
    l_U206[1] = 0.01000000;
    l_U206[2] = 0.50000000;
    l_U206[3] = 0.50000000;
    l_U211[0] = 1;
    l_U211[1] = 2;
    l_U211[2] = 3;
    l_U211[3] = 3;
    l_U147 = 0;
    l_U185 = l_U147;
    l_U174 = 0;
    l_U177 = 0;
    l_U104 = 1;;
    return;
}

void sub_3034()
{
    if (NOT (l_U105 == 10))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U118, sub_1092(), 0 ))
        {
            l_U136++;
            if (l_U136 >= 2)
            {
                sub_484( 4, ref l_U221 );
                l_U105 = 10;
            }
            else
            {
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U118 );
            }
        }
    }
    switch (l_U107)
    {
        case 0:
        sub_3180();
        break;
        case 2:
        sub_4816();
        break;
        case 4:
        sub_18276();
        break;
        case 5:
        sub_21073();
        break;
    }
    return;
}

void sub_3180()
{
    l_U107 = 0;
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U119 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U121 );
    l_U119 = nil;
    l_U121 = nil;
    l_U120 = nil;
    if (NOT (IS_CHAR_DEAD( l_U118 )))
    {
        if (NOT g_U9223)
        {
            if ((IS_SCORE_GREATER( sub_754(), ProtectedGet(l_U179[0]) - 1 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U118, sub_1092(), 10.00000000, 10.00000000, 10.00000000, 0 )))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_1092() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1092(), ref l_U122 );
                    if (NOT (l_U122 == nil))
                    {
                        if (IS_VEH_DRIVEABLE( l_U122 ))
                        {
                            if (sub_3396( ref l_U122 ))
                            {
                                l_U107 = 2;
                            }
                            else
                            {
                                sub_3719();
                            }
                        }
                    }
                }
            }
            else if (sub_4086())
            {
                l_U107 = 4;
            }
            else if (NOT l_U113)
            {
                if (sub_4453())
                {
                    l_U107 = 5;
                }
            };;;
        }
        else if (sub_4086())
        {
            l_U107 = 4;
        }
        else if (NOT l_U113)
        {
            if (sub_4453())
            {
                l_U107 = 5;
            }
        };;;
    }
    if (l_U107 == 2)
    {
        if (NOT g_U9223)
        {
            l_U110 = 1;
        }
    }
    else if (NOT (l_U107 == 0))
    {
        if (l_U107 == 4)
        {
            if (NOT g_U9224)
            {
                l_U112 = 1;
                g_U9224 = 1;
            }
        }
        else if (l_U107 == 5)
        {
            l_U106 = 0;
        }
    }
    return;
}

int sub_3396(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        GET_CAR_MODEL( (uParam0^), ref uVar3 );
        if (sub_3433( uVar3 ))
        {
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( (uParam0^), ref iVar4 );
            if (iVar4 > 0)
            {
                GET_NUMBER_OF_PASSENGERS( (uParam0^), ref iVar4 );
                if ((IS_CAR_PASSENGER_SEAT_FREE( (uParam0^), 0 )) AND (iVar4 == 0))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_3433(int iParam0)
{
    if ((IS_THIS_MODEL_A_BIKE( iParam0 )) || ((IS_THIS_MODEL_A_TRAIN( iParam0 )) || ((IS_THIS_MODEL_A_HELI( iParam0 )) || ((IS_THIS_MODEL_A_PLANE( iParam0 )) || (IS_THIS_MODEL_A_BOAT( iParam0 ))))))
    {
        return 0;
    }
    if ((iParam0 == 1911513875) || ((iParam0 == 1127131465) || ((iParam0 == -1900572838) || ((iParam0 == -1627000575) || ((iParam0 == -350085182) || ((iParam0 == 148777611) || (iParam0 == 2046537925)))))))
    {
        return 0;
    }
    if ((iParam0 == -845979911) || ((iParam0 == -713569950) || ((iParam0 == 1171614426) || ((iParam0 == 1938952078) || (iParam0 == 1560980623)))))
    {
        return 0;
    }
    return 1;
}

void sub_3719()
{
    int iVar2;
    float fVar3;

    if (IS_PLAYER_PLAYING( sub_754() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1092() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1092(), ref l_U122 );
            if (NOT (l_U122 == nil))
            {
                if (IS_VEH_DRIVEABLE( l_U122 ))
                {
                    GET_CAR_SPEED( l_U122, ref fVar3 );
                    if (fVar3 <= 2.00000000)
                    {
                        if (IS_PLAYER_PRESSING_HORN( sub_754() ))
                        {
                            if ((NOT (IS_WANTED_LEVEL_GREATER( sub_754(), 0 ))) AND (IS_SCORE_GREATER( sub_754(), ProtectedGet(l_U179[0]) - 1 )))
                            {
                                if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1092() )))
                                {
                                    GET_GAME_TIMER( ref iVar2 );
                                    if ((iVar2 - g_U9519) > 5000)
                                    {
                                        if (IS_CHAR_ON_ANY_BIKE( sub_1092() ))
                                        {
                                            if (NOT (IS_CHAR_DEAD( l_U118 )))
                                            {
                                                SAY_AMBIENT_SPEECH( l_U118, "GENERIC_NO_THANKS", 1, 1, 0 );
                                            }
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( sub_1092(), "HOOKER_CAR_SMALL", 1, 1, 0 );
                                        }
                                        GET_GAME_TIMER( ref g_U9519 );
                                    }
                                }
                                else
                                {
                                    GET_GAME_TIMER( ref g_U9519 );
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

int sub_4086()
{
    int iVar2;

    if (NOT g_U9224)
    {
        GET_CHAR_COORDINATES( l_U118, ref l_U125._fU0, ref l_U125._fU4, ref l_U125._fU8 );
        GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( l_U125._fU0, l_U125._fU4, l_U125._fU8, 10.00000000, 0, 0, ref l_U121 );
        if (NOT (l_U121 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U121 ))
            {
                if (sub_3396( ref l_U121 ))
                {
                    GET_DRIVER_OF_CAR( l_U121, ref l_U119 );
                    if (NOT (l_U119 == nil))
                    {
                        if (sub_4254( ref l_U119 ))
                        {
                            GET_CAR_MODEL( l_U121, ref iVar2 );
                            if ((NOT (iVar2 == 1208856469)) AND (NOT (iVar2 == -956048545)))
                            {
                                SET_CHAR_AS_MISSION_CHAR( l_U119 );
                                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U119, 0 );
                                SET_CAR_AS_MISSION_CAR( l_U121 );
                                SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U121, 0 );
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    l_U121 = nil;
    l_U119 = nil;
    return 0;
}

int sub_4254(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_CHAR_MALE( (uParam0^) ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_4453()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    l_U120 = nil;
    BEGIN_CHAR_SEARCH_CRITERIA();
    SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 35 );
    END_CHAR_SEARCH_CRITERIA();
    GET_CHAR_COORDINATES( l_U118, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    GET_CLOSEST_CHAR( uVar2._fU0, uVar2._fU4, uVar2._fU8, 10.00000000, 1, 0, ref l_U120 );
    if (NOT (l_U120 == nil))
    {
        if (NOT (IS_CHAR_INJURED( l_U120 )))
        {
            SET_CHAR_AS_MISSION_CHAR( l_U120 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U120, 0 );
            return 1;
        }
        else
        {
            l_U120 = nil;
        }
    }
    l_U120 = nil;
    return 0;
}

void sub_4816()
{
    if (l_U110)
    {
        ;
    }
    if (g_U9223)
    {
        if (l_U105 > 0)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U118, sub_1092(), 15.00000000, 15.00000000, 3.00000000, 0 )))
            {
                CLEAR_CHAR_TASKS( l_U118 );
                if (DOES_CHAR_EXIST( l_U118 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U118 )))
                    {
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U118 );
                    }
                }
                l_U105 = 0;
                l_U107 = 0;
                if (l_U111)
                {
                    g_U9223 = 0;
                    l_U111 = 0;
                }
            }
        }
    }
    switch (l_U105)
    {
        case 0:
        if (NOT (l_U107 == 0))
        {
            l_U105 = 1;
        }
        else
        {
            sub_3180();
        }
        break;
        case 1:
        sub_5143();
        break;
        case 2:
        sub_5858();
        BLOCK_CHAR_GESTURE_ANIMS( l_U118, 1 );
        break;
        case 3:
        sub_6545();
        BLOCK_CHAR_GESTURE_ANIMS( l_U118, 1 );
        break;
        case 4:
        sub_7062();
        break;
        case 5:
        if ((NOT (IS_WANTED_LEVEL_GREATER( sub_754(), 0 ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U118, sub_1092(), 5.00000000, 5.00000000, 5.00000000, 0 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U118, 29, ref l_U144 );
            if (l_U144 == 1)
            {
                GET_SEQUENCE_PROGRESS( l_U118, ref l_U145 );
                if (l_U145 > 0)
                {
                    if ((IS_CHAR_IN_ANY_CAR( l_U118 )) AND (IS_CHAR_IN_ANY_CAR( sub_1092() )))
                    {
                        if (l_U116)
                        {
                            if (IS_PLAYER_PLAYING( sub_754() ))
                            {
                                SET_PLAYER_CAN_DO_DRIVE_BY( sub_754(), 1 );
                                l_U116 = 0;
                            }
                        }
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1092(), ref l_U122 );
                        if (IS_VEH_DRIVEABLE( l_U122 ))
                        {
                            if ((IS_CHAR_IN_CAR( sub_1092(), l_U122 )) AND (IS_CHAR_IN_CAR( l_U118, l_U122 )))
                            {
                                INCREMENT_INT_STAT_NO_MESSAGE( 303, 1 );
                                l_U105 = 7;
                                GET_GAME_TIMER( ref l_U132 );
                                l_U143 = 0;
                            }
                            SAY_AMBIENT_SPEECH( l_U118, "SOLICIT_DRIVE_TO_LOC", 1, 1, 0 );
                            GET_GAME_TIMER( ref g_U9519 );
                            l_U117 = 0;
                        }
                    }
                    else
                    {
                        SAY_AMBIENT_SPEECH( l_U118, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                        CLEAR_CHAR_TASKS( l_U118 );
                        OPEN_SEQUENCE_TASK( ref l_U123 );
                        if (HAVE_ANIMS_LOADED( l_U146 ))
                        {
                            TASK_PLAY_ANIM( 0, "rejection", l_U146, 13.00000000, 0, 1, 1, 0, -1 );
                        }
                        CLOSE_SEQUENCE_TASK( l_U123 );
                        TASK_PERFORM_SEQUENCE( l_U118, l_U123 );
                        CLEAR_SEQUENCE_TASK( l_U123 );
                        TASK_CLEAR_LOOK_AT( sub_1092() );
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
                        l_U105 = 11;
                    }
                }
            }
            else if (l_U144 == 7)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U118 )))
                {
                    SAY_AMBIENT_SPEECH( l_U118, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                    CLEAR_CHAR_TASKS( l_U118 );
                    OPEN_SEQUENCE_TASK( ref l_U123 );
                    if (HAVE_ANIMS_LOADED( l_U146 ))
                    {
                        TASK_PLAY_ANIM( 0, "rejection", l_U146, 13.00000000, 0, 1, 1, 0, -1 );
                    }
                    CLOSE_SEQUENCE_TASK( l_U123 );
                    TASK_PERFORM_SEQUENCE( l_U118, l_U123 );
                    CLEAR_SEQUENCE_TASK( l_U123 );
                    TASK_CLEAR_LOOK_AT( sub_1092() );
                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
                    l_U105 = 11;
                }
            }
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U118 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
            l_U105 = 11;
        }
        break;
        case 6:
        GET_SCRIPT_TASK_STATUS( l_U118, 29, ref l_U144 );
        if (l_U144 == 7)
        {
            if (l_U110)
            {
                if (DOES_CHAR_EXIST( l_U118 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U118 )))
                    {
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U118 )))
                    {
                        TASK_WANDER_STANDARD( l_U118 );
                    }
                }
                if (l_U111)
                {
                    g_U9223 = 0;
                    l_U111 = 0;
                }
                sub_1639();
                l_U111 = 0;
            }
            l_U105 = 0;
            l_U107 = 0;
        }
        break;
        case 7:
        sub_9652();
        break;
        case 8:
        sub_10987();
        break;
        case 9:
        sub_14270();
        break;
        case 10:
        l_U105 = 11;
        break;
        case 11:
        if (l_U116)
        {
            if (IS_PLAYER_PLAYING( sub_754() ))
            {
                SET_PLAYER_CAN_DO_DRIVE_BY( sub_754(), 1 );
                l_U116 = 0;
            }
        }
        if (l_U110)
        {
            if (DOES_CHAR_EXIST( l_U118 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U118 )))
                {
                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
                }
            }
            if (l_U111)
            {
                g_U9223 = 0;
                l_U111 = 0;
            }
            sub_1639();
            l_U110 = 0;
        }
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U118, sub_1092(), 20.00000000, 20.00000000, 20.00000000, 0 )))
        {
            l_U108 = 0;
        }
        break;
    }
    return;
}

void sub_5143()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;

    if (g_U9223)
    {
        if (DOES_CHAR_EXIST( l_U118 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U118 )))
            {
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U118 );
            }
        }
        l_U105 = 0;
        l_U107 = 0;
        l_U110 = 0;
    }
    else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U118, sub_1092(), 11.00000000, 11.00000000, 3.00000000, 0 ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1092() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1092(), ref l_U122 );
            if (IS_VEH_DRIVEABLE( l_U122 ))
            {
                if (sub_3396( ref l_U122 ))
                {
                    GET_CAR_SPEED( l_U122, ref fVar2 );
                    if (fVar2 <= 2.00000000)
                    {
                        if (IS_PLAYER_PRESSING_HORN( sub_754() ))
                        {
                            if ((NOT (IS_WANTED_LEVEL_GREATER( sub_754(), 0 ))) AND (IS_SCORE_GREATER( sub_754(), ProtectedGet(l_U179[0]) - 1 )))
                            {
                                if (NOT (IS_CHAR_DEAD( l_U118 )))
                                {
                                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 0 );
                                    SET_CHAR_AS_MISSION_CHAR( l_U118 );
                                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U118, 0 );
                                }
                                GET_CAR_MODEL( l_U122, ref l_U124 );
                                GET_MODEL_DIMENSIONS( l_U124, ref vVar12, ref vVar9 );
                                vVar6 = {vVar9 - vVar12};
                                vVar6 = {vVar6 / 2.00000000};
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U122, -vVar6.x + 0.20000000, 0.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U122, vVar6.x + 0.20000000, 0.00000000, 0.00000000, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
                                GET_CHAR_COORDINATES( l_U118, ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
                                if ((VDIST( uVar18, uVar15 )) < (VDIST( uVar18, uVar3 )))
                                {
                                    uVar3 = {uVar15};
                                }
                                OPEN_SEQUENCE_TASK( ref l_U123 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 2, -1, 1.00000000 );
                                CLOSE_SEQUENCE_TASK( l_U123 );
                                TASK_PERFORM_SEQUENCE( l_U118, l_U123 );
                                CLEAR_SEQUENCE_TASK( l_U123 );
                                REMOVE_CAR_WINDOW( l_U122, 0 );
                                l_U105 = 2;
                                g_U9223 = 1;
                                l_U111 = 1;
                            }
                            else
                            {
                                l_U105 = 0;
                                l_U107 = 0;
                                g_U9223 = 0;
                                l_U111 = 0;
                            }
                        }
                    }
                }
                else
                {
                    sub_3719();
                }
            }
        }
    }
    return;
}

void sub_5858()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;

    GET_SCRIPT_TASK_STATUS( l_U118, 29, ref l_U144 );
    if (l_U144 == 7)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1092() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1092(), ref l_U122 );
            if (IS_VEH_DRIVEABLE( l_U122 ))
            {
                if (sub_3396( ref l_U122 ))
                {
                    GET_CAR_SPEED( l_U122, ref fVar2 );
                    if ((NOT (IS_WANTED_LEVEL_GREATER( sub_754(), 0 ))) AND (fVar2 <= 2.00000000))
                    {
                        GET_CAR_MODEL( l_U122, ref l_U124 );
                        GET_MODEL_DIMENSIONS( l_U124, ref vVar12, ref vVar9 );
                        vVar6 = {vVar9 - vVar12};
                        vVar6 = {vVar6 / 2.00000000};
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U122, -vVar6.x + 0.20000000, 0.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U122, vVar6.x + 0.20000000, 0.00000000, 0.00000000, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
                        GET_CHAR_COORDINATES( l_U118, ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
                        if ((VDIST( uVar18, uVar15 )) < (VDIST( uVar18, uVar3 )))
                        {
                            uVar3 = {uVar15};
                        }
                        OPEN_SEQUENCE_TASK( ref l_U123 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 2, -1, 1.00000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_1092() );
                        TASK_STAND_STILL( 0, -2 );
                        CLOSE_SEQUENCE_TASK( l_U123 );
                        TASK_PERFORM_SEQUENCE( l_U118, l_U123 );
                        CLEAR_SEQUENCE_TASK( l_U123 );
                        l_U105 = 3;
                    }
                    else if ((IS_WANTED_LEVEL_GREATER( sub_754(), 0 )) || (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U118, sub_1092(), 15.00000000, 15.00000000, 5.00000000, 0 ))))
                    {
                        CLEAR_CHAR_TASKS( l_U118 );
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
                        l_U105 = 11;
                    }
                }
                else
                {
                    CLEAR_CHAR_TASKS( l_U118 );
                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
                    l_U105 = 11;
                    sub_3719();
                }
            }
            else
            {
                CLEAR_CHAR_TASKS( l_U118 );
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
                l_U105 = 11;
            }
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U118 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
            l_U105 = 11;
        }
    }
    return;
}

void sub_6545()
{
    float fVar2;

    GET_SCRIPT_TASK_STATUS( l_U118, 29, ref l_U144 );
    if (l_U144 == 1)
    {
        GET_SEQUENCE_PROGRESS( l_U118, ref l_U145 );
        if (l_U145 > 1)
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1092() ))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U118, sub_1092(), 15.00000000, 15.00000000, 5.00000000, 0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1092(), ref l_U122 );
                    if (IS_VEH_DRIVEABLE( l_U122 ))
                    {
                        if (sub_3396( ref l_U122 ))
                        {
                            GET_CAR_SPEED( l_U122, ref fVar2 );
                            if (fVar2 <= 2.00000000)
                            {
                                SAY_AMBIENT_SPEECH( l_U118, "SOLICIT", 1, 1, 0 );
                                OPEN_SEQUENCE_TASK( ref l_U123 );
                                if (HAVE_ANIMS_LOADED( l_U146 ))
                                {
                                    TASK_PLAY_ANIM( 0, "car_proposition", l_U146, 12.00000000, 0, 0, 0, 0, -1 );
                                }
                                CLOSE_SEQUENCE_TASK( l_U123 );
                                TASK_PERFORM_SEQUENCE( l_U118, l_U123 );
                                CLEAR_SEQUENCE_TASK( l_U123 );
                                GET_GAME_TIMER( ref l_U132 );
                                GET_GAME_TIMER( ref l_U133 );
                                l_U105 = 4;
                                TASK_LOOK_AT_CHAR( sub_1092(), l_U118, 10000, 0 );
                            }
                        }
                        else
                        {
                            CLEAR_CHAR_TASKS( l_U118 );
                            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
                            l_U105 = 11;
                            sub_3719();
                        }
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS( l_U118 );
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
                        l_U105 = 11;
                    }
                }
                else
                {
                    CLEAR_CHAR_TASKS( l_U118 );
                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
                    l_U105 = 11;
                }
            }
        }
    }
    return;
}

void sub_7062()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_1092() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1092(), ref l_U122 );
        GET_CAR_SPEED( l_U122, ref uVar2 );
        if ((NOT (IS_WANTED_LEVEL_GREATER( sub_754(), 0 ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U118, sub_1092(), 15.00000000, 15.00000000, 5.00000000, 0 )))
        {
            if (sub_7172( 4, 0 ))
            {
                if (NOT l_U116)
                {
                    if (IS_PLAYER_PLAYING( sub_754() ))
                    {
                        SET_PLAYER_CAN_DO_DRIVE_BY( sub_754(), 0 );
                        l_U116 = 1;
                    }
                }
                if (sub_7508( 4, ref l_U221, 0 ))
                {
                    sub_484( 4, ref l_U221 );
                    CLEAR_CHAR_TASKS( l_U118 );
                    SAY_AMBIENT_SPEECH( sub_1092(), "SOLICIT_HOOKER_RESP_POS_CAR", 1, 1, 0 );
                    OPEN_SEQUENCE_TASK( ref l_U123 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U122, -2, 0 );
                    TASK_STAND_STILL( 0, -2 );
                    CLOSE_SEQUENCE_TASK( l_U123 );
                    TASK_PERFORM_SEQUENCE( l_U118, l_U123 );
                    CLEAR_SEQUENCE_TASK( l_U123 );
                    l_U105 = 5;
                }
                else
                {
                    GET_GAME_TIMER( ref l_U134 );
                    l_U135 = l_U134 - l_U132;
                    GET_SCRIPT_TASK_STATUS( l_U118, 29, ref l_U144 );
                    if (l_U135 >= 7500)
                    {
                        SAY_AMBIENT_SPEECH( l_U118, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                        CLEAR_CHAR_TASKS( l_U118 );
                        OPEN_SEQUENCE_TASK( ref l_U123 );
                        if (HAVE_ANIMS_LOADED( l_U146 ))
                        {
                            TASK_PLAY_ANIM( 0, "rejection", l_U146, 13.00000000, 0, 1, 1, 0, -1 );
                        }
                        CLOSE_SEQUENCE_TASK( l_U123 );
                        TASK_PERFORM_SEQUENCE( l_U118, l_U123 );
                        CLEAR_SEQUENCE_TASK( l_U123 );
                        sub_484( 4, ref l_U221 );
                        TASK_CLEAR_LOOK_AT( sub_1092() );
                        l_U105 = 6;
                    }
                }
            }
            else
            {
                sub_484( 4, ref l_U221 );
                if (l_U116)
                {
                    if (IS_PLAYER_PLAYING( sub_754() ))
                    {
                        SET_PLAYER_CAN_DO_DRIVE_BY( sub_754(), 1 );
                        l_U116 = 0;
                    }
                }
            }
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U118 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
            TASK_CLEAR_LOOK_AT( sub_1092() );
            l_U105 = 11;
        }
    }
    else
    {
        CLEAR_CHAR_TASKS( l_U118 );
        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
        TASK_CLEAR_LOOK_AT( sub_1092() );
        l_U105 = 11;
    }
    return;
}

int sub_7172(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_754() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_754() )))
            {
                if (((g_U10499) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_754() )))))
                {
                    if (NOT sub_7268())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1092() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_7353())
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

int sub_7268()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_7353()
{
    return sub_7364( 0, 0 );
}

int sub_7364(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((g_U558 != 9) AND (uParam1))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

int sub_7508(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_7172( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_754(), 0 );
                l_U4 = 1;
            }
            g_U10468 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_7783();
                l_U3 = 1;
                g_U10469 = 6;
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
                g_U10469 = 0;
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

void sub_7783()
{
    return sub_7364( 1, 1 );
}

void sub_9652()
{
    float fVar2;
    int iVar3;
    int iVar4;

    iVar3 = 4000;
    if (l_U114)
    {
        if (# -NULL-0xc27e8e())
        {
            PROSTITUTE_CAM_ACTIVATE( 0 );
        }
        if (IS_PLAYER_PLAYING( sub_754() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_754(), 1 );
        }
        l_U116 = 0;
        l_U114 = 0;
    }
    else if (l_U116)
    {
        if (IS_PLAYER_PLAYING( sub_754() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_754(), 1 );
            l_U116 = 0;
        }
    }
    if (l_U115)
    {
        sub_705();
        l_U115 = 0;
    }
    if (NOT l_U117)
    {
        if ((NOT (IS_AMBIENT_SPEECH_PLAYING( l_U118 ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1092() ))))
        {
            SAY_AMBIENT_SPEECH( sub_1092(), "HOOKER_QUIET", 1, 1, 0 );
            GET_GAME_TIMER( ref g_U9519 );
            l_U117 = 1;
        }
    }
    if ((NOT (IS_WANTED_LEVEL_GREATER( sub_754(), 0 ))) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_1092() )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1092(), ref l_U122 );
        if (IS_VEH_DRIVEABLE( l_U122 ))
        {
            if (IS_CHAR_IN_CAR( l_U118, l_U122 ))
            {
                GET_CAR_SPEED( l_U122, ref fVar2 );
                if ((IS_PLAYER_CONTROL_ON( sub_754() )) AND (fVar2 <= 2.00000000))
                {
                    if (NOT l_U109)
                    {
                        if (sub_10037())
                        {
                            GET_GAME_TIMER( ref l_U132 );
                            l_U109 = 1;
                        }
                        else if (l_U117)
                        {
                            GET_GAME_TIMER( ref iVar4 );
                            if ((iVar4 - g_U9519) > 30000)
                            {
                                if ((NOT (IS_AMBIENT_SPEECH_PLAYING( l_U118 ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1092() ))))
                                {
                                    SAY_AMBIENT_SPEECH( sub_1092(), "HOOKER_QUIET", 1, 1, 0 );
                                    GET_GAME_TIMER( ref g_U9519 );
                                }
                            }
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U134 );
                        l_U135 = l_U134 - l_U132;
                        if (l_U135 >= iVar3)
                        {
                            if ((NOT sub_7268()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                            {
                                l_U177 = 0;
                                l_U178 = 1;
                                GET_GAME_TIMER( ref l_U184 );
                                if (NOT (# -NULL-0xc27e8e()))
                                {
                                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                    PRINT_HELP_FOREVER_WITH_NUMBER( ref l_U216, ProtectedGet(l_U179[l_U147]) );
                                }
                                l_U105 = 8;
                            }
                        }
                        else if (NOT sub_10037())
                        {
                            if (l_U117)
                            {
                                GET_GAME_TIMER( ref iVar4 );
                                if ((iVar4 - g_U9519) > 5000)
                                {
                                    if ((NOT (IS_AMBIENT_SPEECH_PLAYING( l_U118 ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1092() ))))
                                    {
                                        SAY_AMBIENT_SPEECH( sub_1092(), "HOOKER_QUIET", 1, 1, 0 );
                                        GET_GAME_TIMER( ref g_U9519 );
                                    }
                                }
                            }
                            l_U109 = 0;
                        }
                        if (l_U109)
                        {
                            ;
                        }
                    }
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( l_U118, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
                l_U105 = 11;
            }
        }
        else
        {
            SAY_AMBIENT_SPEECH( l_U118, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
            l_U105 = 11;
        }
    }
    else
    {
        SAY_AMBIENT_SPEECH( l_U118, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
        sub_1503();
        l_U105 = 11;
    }
    if (NOT (l_U105 == 8))
    {
        sub_1639();
    }
    return;
}

int sub_10037()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;

    fVar7 = 10.00000000;
    if (IS_CHAR_IN_ANY_CAR( sub_1092() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1092(), ref l_U122 );
    }
    GET_CHAR_COORDINATES( sub_1092(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    if (GET_CLOSEST_MAJOR_CAR_NODE( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 ))
    {
        if ((VDIST( uVar4, uVar8 )) <= 10.00000000)
        {
            return 0;
        }
    }
    BEGIN_CHAR_SEARCH_CRITERIA();
    SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 34 );
    END_CHAR_SEARCH_CRITERIA();
    GET_CLOSEST_CHAR( uVar4._fU0, uVar4._fU4, uVar4._fU8, fVar7, 1, 1, ref iVar2 );
    if (NOT (iVar2 == nil))
    {
        return 0;
    }
    else
    {
        GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uVar4._fU0, uVar4._fU4, uVar4._fU8, fVar7, 0, 0, ref iVar3 );
        if (NOT (iVar3 == nil))
        {
            if (NOT (iVar3 == l_U122))
            {
                if (IS_VEH_DRIVEABLE( iVar3 ))
                {
                    GET_DRIVER_OF_CAR( iVar3, ref iVar2 );
                    if (NOT (iVar3 == nil))
                    {
                        return 0;
                    }
                }
            }
        }
    }
    GET_INTERIOR_FROM_CHAR( sub_1092(), ref iVar11 );
    if (NOT (iVar11 == nil))
    {
        return 0;
    }
    return 1;
}

void sub_10987()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    int iVar8;

    if (NOT l_U116)
    {
        if (IS_PLAYER_PLAYING( sub_754() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_754(), 0 );
        }
        l_U116 = 1;
    }
    if ((NOT (IS_WANTED_LEVEL_GREATER( sub_754(), 0 ))) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_1092() )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1092(), ref l_U122 );
        if (IS_VEH_DRIVEABLE( l_U122 ))
        {
            if (IS_CHAR_IN_CAR( l_U118, l_U122 ))
            {
                GET_CAR_SPEED( l_U122, ref fVar2 );
                if ((l_U177) || ((NOT sub_7268()) AND ((IS_PLAYER_CONTROL_ON( sub_754() )) AND (fVar2 <= 2.00000000))))
                {
                    if ((l_U177) || ((# -NULL-0xc27e8e()) || (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U216, ProtectedGet(l_U179[l_U147]) ))))
                    {
                        if (NOT l_U177)
                        {
                            if (IS_SCORE_GREATER( sub_754(), ProtectedGet(l_U179[0]) - 1 ))
                            {
                                if (# -NULL-0xc27e8e())
                                {
                                    l_U178 = 1;
                                    l_U177 = 1;
                                    l_U147 = 3;
                                }
                                else
                                {
                                    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar4, ref uVar5, ref uVar6 );
                                    iVar7 = l_U147;
                                    if (IS_CONTROL_PRESSED( 0, 23 ))
                                    {
                                        GET_GAME_TIMER( ref l_U134 );
                                        if ((l_U134 - l_U184) > 1000)
                                        {
                                            sub_11362( 1 );
                                            GET_GAME_TIMER( ref l_U184 );
                                        }
                                    }
                                    else
                                    {
                                        l_U184 = 0;
                                    }
                                    if (NOT (iVar7 == l_U147))
                                    {
                                        if (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U216, ProtectedGet(l_U179[iVar7]) ))
                                        {
                                            CLEAR_HELP();
                                        }
                                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                        PRINT_HELP_FOREVER_WITH_NUMBER( ref l_U216, ProtectedGet(l_U179[l_U147]) );
                                    }
                                    if (sub_11773())
                                    {
                                        if (NOT l_U178)
                                        {
                                            sub_1639();
                                            l_U178 = 1;
                                            l_U177 = 1;
                                        }
                                    }
                                    else
                                    {
                                        l_U178 = 0;
                                    }
                                }
                            }
                            else
                            {
                                l_U147 = 3;
                                l_U177 = 1;
                            }
                        }
                        else if (NOT l_U114)
                        {
                            SET_PLAYER_CAN_DO_DRIVE_BY( sub_754(), 0 );
                            if (# -NULL-0xc27e8e())
                            {
                                PROSTITUTE_CAM_ACTIVATE( 1 );
                            }
                            l_U114 = 1;
                            l_U116 = 0;
                        }
                        if (NOT l_U115)
                        {
                            sub_7783();
                            sub_11967();
                            l_U115 = 1;
                        }
                        if (l_U147 == 0)
                        {
                            SAY_AMBIENT_SPEECH( sub_1092(), "HOOKER_CHEAP", 1, 1, 0 );
                        }
                        else if (l_U147 == 1)
                        {
                            SAY_AMBIENT_SPEECH( sub_1092(), "HOOKER_MIDRANGE", 1, 1, 0 );
                        }
                        else if (l_U147 == 2)
                        {
                            SAY_AMBIENT_SPEECH( sub_1092(), "HOOKER_EXPENSIVE", 1, 1, 0 );
                        }
                        else
                        {
                            SAY_AMBIENT_SPEECH( sub_1092(), "HOOKER_EXPENSIVE", 1, 1, 0 );
                        };;;
                        iVar8 = GET_CHAR_MONEY( l_U118 );
                        if (NOT (l_U147 == 3))
                        {
                            if (IS_SCORE_GREATER( sub_754(), ProtectedGet(l_U179[l_U147]) - 1 ))
                            {
                                ADD_SCORE( sub_754(), -1 * ProtectedGet(l_U179[l_U147]) );
                                INCREMENT_INT_STAT_NO_MESSAGE( 95, ProtectedGet(l_U179[l_U147]) );
                                iVar8 += ProtectedGet(l_U179[l_U147]);
                            }
                        }
                        else if (IS_SCORE_GREATER( sub_754(), ProtectedGet(l_U131) - 1 ))
                        {
                            ADD_SCORE( sub_754(), -1 * ProtectedGet(l_U131) );
                            INCREMENT_INT_STAT_NO_MESSAGE( 95, ProtectedGet(l_U131) );
                            iVar8 += ProtectedGet(l_U131);
                        }
                        SET_CHAR_MONEY( l_U118, iVar8 );
                        if (NOT (l_U147 == 3))
                        {
                            sub_12508( l_U122 );
                            if (HAVE_ANIMS_LOADED( l_U149 ))
                            {
                                TASK_PLAY_ANIM_WITH_FLAGS( l_U118, l_U150[l_U147], l_U149, 1000.00000000, -1, 8355 );
                                TASK_PLAY_ANIM_WITH_FLAGS( sub_1092(), l_U162[l_U147], l_U149, 1000.00000000, -1, 128 );
                                l_U174 = 1;
                                l_U175 = 0;
                                l_U176 = 0;
                            }
                        }
                        GET_GAME_TIMER( ref l_U132 );
                        GET_GAME_TIMER( ref l_U138 );
                        GET_GAME_TIMER( ref l_U141 );
                        GET_GAME_TIMER( ref l_U142 );
                        l_U140 = 0;
                        l_U139 = l_U186[l_U147];
                        l_U109 = 0;
                        l_U105 = 9;;
                    }
                    else
                    {
                        sub_1639();
                        l_U109 = 0;
                        l_U105 = 7;
                    }
                }
                else
                {
                    sub_1639();
                    l_U109 = 0;
                    l_U105 = 7;
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( l_U118, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                sub_1639();
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
                l_U105 = 11;
            }
        }
        else
        {
            SAY_AMBIENT_SPEECH( l_U118, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
            sub_1639();
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U118, 1 );
            l_U105 = 11;
        }
    }
    else
    {
        SAY_AMBIENT_SPEECH( l_U118, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
        sub_1639();
        sub_1503();
        l_U105 = 11;
    }
    return;
}

void sub_11362(boolean bParam0)
{
    boolean bVar3;
    int I;

    l_U185 = l_U147;
    if (bParam0)
    {
        l_U185++;
    }
    else
    {
        l_U185--;
    }
    if (l_U185 >= (l_U179 - 1))
    {
        l_U185 = 0;
    }
    else if (l_U185 < 0)
    {
        l_U185 = (l_U179 - 1) - 1;
    }
    bVar3 = false;
    for ( I = 0; I < l_U179; I++ )
    {
        if (IS_SCORE_GREATER( sub_754(), ProtectedGet(l_U179[l_U185]) - 1 ))
        {
            bVar3 = true;
            l_U148 = l_U185;
            I = l_U179;
        }
        else if (bParam0)
        {
            l_U185++;
        }
        else
        {
            l_U185--;
        }
        if (l_U185 >= (l_U179 - 1))
        {
            l_U185 = 0;
        }
        else if (l_U185 < 0)
        {
            l_U185 = (l_U179 - 1) - 1;
        };;;
    }
    if (bVar3)
    {
        l_U147 = l_U148;
    }
    return;
}

int sub_11773()
{
    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_11967()
{
    if ((g_U8946 == 4) || (g_U558 == 1))
    {
        if (g_U94._fU60 != -1)
        {
            g_U15862[g_U94._fU60]._fU196._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U94._fU376 = 0;
        g_U94._fU100 = 1;
    }
    return;
}

void sub_12508(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int[26] iVar7;

    bVar4 = false;
    iVar5 = 0;
    iVar6 = 0;
    array(ref iVar7, 26);
    iVar7[0] = -1041692462;
    iVar7[1] = -682211828;
    iVar7[2] = 1063483177;
    iVar7[3] = 108773431;
    iVar7[4] = 723973206;
    iVar7[5] = -2119578145;
    iVar7[6] = -1097828879;
    iVar7[7] = 418536135;
    iVar7[8] = -2124201592;
    iVar7[9] = 1830407356;
    iVar7[10] = -227741703;
    iVar7[11] = -449022887;
    iVar7[12] = 1264386590;
    iVar7[13] = -1685021548;
    iVar7[14] = 1349725314;
    iVar7[15] = 1923400478;
    iVar7[16] = 1723137093;
    iVar7[17] = -295689028;
    iVar7[18] = 1821991593;
    iVar7[19] = -1896659641;
    iVar7[20] = 1534326199;
    iVar7[21] = -825837129;
    iVar7[22] = -1758379524;
    iVar7[23] = -583281407;
    iVar7[24] = -498054846;
    iVar7[25] = 2006667053;
    iVar6 = 26;
    GET_CAR_MODEL( uParam0, ref iVar3 );
    while (iVar5 < iVar6)
    {
        if (iVar3 == iVar7[iVar5])
        {
            bVar4 = true;
            iVar5 = iVar6;
        }
        iVar5++;
    }
    if (bVar4)
    {
        l_U150[0] = "f_handjob_intro_low";
        l_U154[0] = "f_handjob_loop_low";
        l_U158[0] = "f_handjob_outro_low";
        l_U162[0] = "m_handjob_intro_low";
        l_U166[0] = "m_handjob_loop_low";
        l_U170[0] = "m_handjob_outro_low";
        l_U150[1] = "f_blowjob_intro_low";
        l_U154[1] = "f_blowjob_loop_low";
        l_U158[1] = "f_blowjob_outro_low";
        l_U162[1] = "m_blowjob_intro_low";
        l_U166[1] = "m_blowjob_loop_low";
        l_U170[1] = "m_blowjob_outro_low";
        l_U150[2] = "f_sex_intro_low";
        l_U154[2] = "f_sex_loop_low";
        l_U158[2] = "f_sex_outro_low";
        l_U162[2] = "m_sex_intro_low";
        l_U166[2] = "m_sex_loop_low";
        l_U170[2] = "m_sex_outro_low";
        l_U225 = 0.80900000;
    }
    else
    {
        l_U150[0] = "f_handjob_intro";
        l_U154[0] = "f_handjob_loop";
        l_U158[0] = "f_handjob_outro";
        l_U162[0] = "m_handjob_intro";
        l_U166[0] = "m_handjob_loop";
        l_U170[0] = "m_handjob_outro";
        l_U150[1] = "f_blowjob_intro";
        l_U154[1] = "f_blowjob_loop";
        l_U158[1] = "f_blowjob_outro";
        l_U162[1] = "m_blowjob_intro";
        l_U166[1] = "m_blowjob_loop";
        l_U170[1] = "m_blowjob_outro";
        l_U150[2] = "f_sex_intro";
        l_U154[2] = "f_sex_loop";
        l_U158[2] = "f_sex_outro";
        l_U162[2] = "m_sex_intro";
        l_U166[2] = "m_sex_loop";
        l_U170[2] = "m_sex_outro";
        l_U225 = 0.91600000;
    }
    return;
}

void sub_14270()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;
    int iVar10;
    int iVar11;

    iVar2 = 15000;
    SET_SCRIPTED_ANIM_SEAT_OFFSET( l_U118, l_U225 );
    if ((NOT (IS_WANTED_LEVEL_GREATER( sub_754(), 0 ))) AND (IS_CHAR_SITTING_IN_ANY_CAR( l_U118 )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U118, ref l_U122 );
        if (IS_VEH_DRIVEABLE( l_U122 ))
        {
            GET_CAR_SPEED( l_U122, ref fVar9 );
            if ((IS_PLAYER_CONTROL_ON( sub_754() )) AND (fVar9 <= 2.00000000))
            {
                sub_11967();
                GET_GAME_TIMER( ref l_U134 );
                if (NOT l_U176)
                {
                    GET_GAME_TIMER( ref l_U132 );
                }
                l_U135 = l_U134 - l_U132;
                if (l_U135 >= iVar2)
                {
                    if (NOT l_U175)
                    {
                        if (NOT (l_U147 == 3))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U118, l_U149, l_U158[l_U147] ))
                            {
                                if (HAS_CHAR_ANIM_FINISHED( l_U118, l_U149, l_U158[l_U147] ))
                                {
                                    if (HAVE_ANIMS_LOADED( l_U149 ))
                                    {
                                        TASK_PLAY_ANIM_WITH_FLAGS( l_U118, l_U158[l_U147], l_U149, 1000.00000000, -1, 8323 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( sub_1092(), l_U170[l_U147], l_U149, 1000.00000000, -1, 128 );
                                    }
                                    l_U175 = 1;
                                }
                            }
                            else if (HAVE_ANIMS_LOADED( l_U149 ))
                            {
                                TASK_PLAY_ANIM_WITH_FLAGS( l_U118, l_U158[l_U147], l_U149, 1000.00000000, -1, 8323 );
                                TASK_PLAY_ANIM_WITH_FLAGS( sub_1092(), l_U170[l_U147], l_U149, 1000.00000000, -1, 128 );
                            }
                            l_U175 = 1;;
                        }
                        else
                        {
                            l_U175 = 1;
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U118, 88, ref l_U144 );
                        if (l_U144 == 7)
                        {
                            l_U174 = 0;
                            sub_1503();
                            SAY_AMBIENT_SPEECH( sub_1092(), "AFTER_SEX", 1, 1, 0 );
                            SET_PLAYER_MOOD_NORMAL( sub_754() );
                            l_U105 = 11;
                        }
                    }
                }
                else if (IS_CHAR_SITTING_IN_CAR( sub_1092(), l_U122 ))
                {
                    GET_CHAR_COORDINATES( sub_1092(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                    uVar3._fU0 = uVar6._fU0 - 5.00000000;
                    uVar3._fU4 = uVar6._fU4 - 5.00000000;
                    uVar3._fU8 = uVar6._fU8 - 5.00000000;
                    uVar6._fU0 += 5.00000000;
                    uVar6._fU4 += 5.00000000;
                    uVar6._fU8 += 5.00000000;
                    if (NOT (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar3._fU0, uVar3._fU4, uVar3._fU8, uVar6._fU0, uVar6._fU4, uVar6._fU8 )))
                    {
                        l_U140 = l_U134 - l_U141;
                        if (l_U140 > 1000)
                        {
                            if (l_U176)
                            {
                                GET_CHAR_HEALTH( sub_1092(), ref l_U140 );
                                l_U140 += l_U211[l_U147];
                                if (l_U140 > 200)
                                {
                                    l_U140 = 200;
                                }
                                SET_CHAR_HEALTH( sub_1092(), l_U140 );
                                GET_GAME_TIMER( ref l_U141 );
                            }
                        }
                        iVar10 = iVar2 - l_U135;
                        if (iVar10 > 10000)
                        {
                            if (iVar10 < 13500)
                            {
                                l_U139 = l_U186[l_U147];
                            }
                        }
                        else if (iVar10 > 5000)
                        {
                            l_U139 = l_U191[l_U147];
                        }
                        else if (iVar10 > 1000)
                        {
                            l_U139 = l_U196[l_U147];
                        }
                        else
                        {
                            l_U139 = l_U201[l_U147];
                        };;;
                        GET_GAME_TIMER( ref l_U134 );
                        l_U135 = l_U134 - l_U138;
                        if (l_U135 >= l_U139)
                        {
                            if (NOT (l_U147 == 2))
                            {
                                if (l_U176)
                                {
                                    sub_15382( ref l_U122 );
                                    GET_GAME_TIMER( ref l_U138 );
                                }
                            }
                        }
                        if (l_U176)
                        {
                            if (l_U147 == 2)
                            {
                                GET_SCRIPT_TASK_STATUS( l_U118, 88, ref l_U144 );
                                if (l_U144 == 1)
                                {
                                    if (sub_15554())
                                    {
                                        GET_GAME_TIMER( ref l_U134 );
                                        l_U135 = l_U134 - l_U138;
                                        if (l_U135 >= 200)
                                        {
                                            sub_15382( ref l_U122 );
                                            GET_GAME_TIMER( ref l_U138 );
                                        }
                                    }
                                }
                            }
                        }
                        if (NOT l_U176)
                        {
                            if (NOT (l_U147 == 3))
                            {
                                if (HAVE_ANIMS_LOADED( l_U149 ))
                                {
                                    if ((IS_CHAR_PLAYING_ANIM( sub_1092(), l_U149, l_U162[l_U147] )) AND (IS_CHAR_PLAYING_ANIM( l_U118, l_U149, l_U150[l_U147] )))
                                    {
                                        if ((HAS_CHAR_ANIM_FINISHED( sub_1092(), l_U149, l_U162[l_U147] )) AND (HAS_CHAR_ANIM_FINISHED( l_U118, l_U149, l_U150[l_U147] )))
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( l_U118, l_U154[l_U147], l_U149, 1000.00000000, -1, 8339 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( sub_1092(), l_U166[l_U147], l_U149, 1000.00000000, -1, 144 );
                                            l_U176 = 1;
                                        }
                                    }
                                    else
                                    {
                                        TASK_PLAY_ANIM_WITH_FLAGS( l_U118, l_U154[l_U147], l_U149, 1000.00000000, -1, 147 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( sub_1092(), l_U166[l_U147], l_U149, 1000.00000000, -1, 144 );
                                        l_U176 = 1;
                                        l_U176 = 1;
                                    }
                                }
                                else
                                {
                                    l_U176 = 1;
                                }
                            }
                            else
                            {
                                l_U176 = 1;
                            }
                            if (l_U176)
                            {
                                GET_GAME_TIMER( ref l_U132 );
                                GET_GAME_TIMER( ref l_U138 );
                                GET_GAME_TIMER( ref l_U141 );
                            }
                        }
                        else if (iVar10 > 1500)
                        {
                            if (l_U176)
                            {
                                GET_GAME_TIMER( ref l_U134 );
                                if ((l_U134 - l_U142) > 6000)
                                {
                                    if (NOT (l_U147 == 1))
                                    {
                                        iVar11 = 0;
                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 5000, ref iVar11 );
                                        if (iVar11 > 2500)
                                        {
                                            SAY_AMBIENT_SPEECH( sub_1092(), "HOOKER_SEX", 1, 1, 0 );
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( l_U118, "HOOKER_SEX", 1, 1, 0 );
                                        }
                                    }
                                    else
                                    {
                                        SAY_AMBIENT_SPEECH( sub_1092(), "HOOKER_RELIEF", 1, 1, 0 );
                                    }
                                    GET_GAME_TIMER( ref l_U142 );
                                }
                            }
                        }
                    }
                }
                else
                {
                    SAY_AMBIENT_SPEECH( l_U118, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                    sub_1503();
                    l_U105 = 11;
                }
            }
            else
            {
                l_U143++;
                if (l_U143 >= 4)
                {
                    SAY_AMBIENT_SPEECH( l_U118, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                    sub_1503();
                    l_U105 = 11;
                }
                else
                {
                    CLEAR_CHAR_TASKS( l_U118 );
                    CLEAR_CHAR_TASKS( sub_1092() );
                    TASK_STAND_STILL( l_U118, -2 );
                    l_U174 = 0;
                    l_U109 = 0;
                    l_U105 = 7;
                }
            }
        }
        else
        {
            SAY_AMBIENT_SPEECH( l_U118, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
            sub_1503();
            l_U105 = 11;
        }
    }
    else
    {
        SAY_AMBIENT_SPEECH( l_U118, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
        CLEAR_CHAR_TASKS( sub_1092() );
        CLEAR_CHAR_SECONDARY_TASK( sub_1092() );
        sub_1503();
        l_U105 = 11;
    }
    return;
}

void sub_15382(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;

    if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        uVar3 = {0.00000000, 0.00000000, l_U206[l_U147]};
        vVar6 = {0.00000000, 0.00000000, 0.00000000};
        APPLY_FORCE_TO_CAR( (uParam0^), 1, uVar3, vVar6, 0, 1, 1, 1 );
        SHAKE_PAD( 0, 5, 64 );
    }
    return;
}

int sub_15554()
{
    float fVar2;

    if (IS_CHAR_PLAYING_ANIM( l_U118, l_U149, l_U154[l_U147] ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( l_U118, l_U149, l_U154[l_U147], ref fVar2 );
        if ((fVar2 < 0.04350000) AND (fVar2 > 0.03350000))
        {
            return 1;
        }
        if ((fVar2 < 0.06940000) AND (fVar2 > 0.05940000))
        {
            return 1;
        }
        if ((fVar2 < 0.09340000) AND (fVar2 > 0.08340000))
        {
            return 1;
        }
        if ((fVar2 < 0.11580000) AND (fVar2 > 0.10580000))
        {
            return 1;
        }
        if ((fVar2 < 0.13510000) AND (fVar2 > 0.12510000))
        {
            return 1;
        }
        if ((fVar2 < 0.15110000) AND (fVar2 > 0.14110000))
        {
            return 1;
        }
        if ((fVar2 < 0.17190000) AND (fVar2 > 0.16190000))
        {
            return 1;
        }
        if ((fVar2 < 0.19280000) AND (fVar2 > 0.18280000))
        {
            return 1;
        }
        if ((fVar2 < 0.21360000) AND (fVar2 > 0.20360000))
        {
            return 1;
        }
        if ((fVar2 < 0.23280000) AND (fVar2 > 0.22280000))
        {
            return 1;
        }
        if ((fVar2 < 0.25050000) AND (fVar2 > 0.24050000))
        {
            return 1;
        }
        if ((fVar2 < 0.26350000) AND (fVar2 > 0.25350000))
        {
            return 1;
        }
        if ((fVar2 < 0.27770000) AND (fVar2 > 0.26770000))
        {
            return 1;
        }
        if ((fVar2 < 0.28570000) AND (fVar2 > 0.27570000))
        {
            return 1;
        }
        if ((fVar2 < 0.29550000) AND (fVar2 > 0.28550000))
        {
            return 1;
        }
        if ((fVar2 < 0.30520000) AND (fVar2 > 0.29520000))
        {
            return 1;
        }
        if ((fVar2 < 0.31470000) AND (fVar2 > 0.30470000))
        {
            return 1;
        }
        if ((fVar2 < 0.32440000) AND (fVar2 > 0.31440000))
        {
            return 1;
        }
        if ((fVar2 < 0.33550000) AND (fVar2 > 0.32550000))
        {
            return 1;
        }
        if ((fVar2 < 0.34520000) AND (fVar2 > 0.33520000))
        {
            return 1;
        }
        if ((fVar2 < 0.35470000) AND (fVar2 > 0.34470000))
        {
            return 1;
        }
        if ((fVar2 < 0.36600000) AND (fVar2 > 0.35600000))
        {
            return 1;
        }
        if ((fVar2 < 0.37590000) AND (fVar2 > 0.36590000))
        {
            return 1;
        }
        if ((fVar2 < 0.38550000) AND (fVar2 > 0.37550000))
        {
            return 1;
        }
        if ((fVar2 < 0.39510000) AND (fVar2 > 0.38510000))
        {
            return 1;
        }
        if ((fVar2 < 0.40460000) AND (fVar2 > 0.39460000))
        {
            return 1;
        }
        if ((fVar2 < 0.41570000) AND (fVar2 > 0.40570000))
        {
            return 1;
        }
        if ((fVar2 < 0.42690000) AND (fVar2 > 0.41690000))
        {
            return 1;
        }
        if ((fVar2 < 0.43510000) AND (fVar2 > 0.42510000))
        {
            return 1;
        }
        if ((fVar2 < 0.44620000) AND (fVar2 > 0.43620000))
        {
            return 1;
        }
        if ((fVar2 < 0.46860000) AND (fVar2 > 0.45860000))
        {
            return 1;
        }
        if ((fVar2 < 0.48310000) AND (fVar2 > 0.47310000))
        {
            return 1;
        }
        if ((fVar2 < 0.49750000) AND (fVar2 > 0.48750000))
        {
            return 1;
        }
        if ((fVar2 < 0.51350000) AND (fVar2 > 0.50350000))
        {
            return 1;
        }
        if ((fVar2 < 0.52960000) AND (fVar2 > 0.51960000))
        {
            return 1;
        }
        if ((fVar2 < 0.54400000) AND (fVar2 > 0.53400000))
        {
            return 1;
        }
        if ((fVar2 < 0.55850000) AND (fVar2 > 0.54850000))
        {
            return 1;
        }
        if ((fVar2 < 0.57290000) AND (fVar2 > 0.56290000))
        {
            return 1;
        }
        if ((fVar2 < 0.58730000) AND (fVar2 > 0.57730000))
        {
            return 1;
        }
        if ((fVar2 < 0.60180000) AND (fVar2 > 0.59180000))
        {
            return 1;
        }
        if ((fVar2 < 0.61460000) AND (fVar2 > 0.60460000))
        {
            return 1;
        }
        if ((fVar2 < 0.62280000) AND (fVar2 > 0.61280000))
        {
            return 1;
        }
        if ((fVar2 < 0.63240000) AND (fVar2 > 0.62240000))
        {
            return 1;
        }
        if ((fVar2 < 0.64060000) AND (fVar2 > 0.63059990))
        {
            return 1;
        }
        if ((fVar2 < 0.65020000) AND (fVar2 > 0.64020000))
        {
            return 1;
        }
        if ((fVar2 < 0.65960000) AND (fVar2 > 0.64960010))
        {
            return 1;
        }
        if ((fVar2 < 0.66920000) AND (fVar2 > 0.65920000))
        {
            return 1;
        }
        if ((fVar2 < 0.67880000) AND (fVar2 > 0.66880000))
        {
            return 1;
        }
        if ((fVar2 < 0.68699990) AND (fVar2 > 0.67700000))
        {
            return 1;
        }
        if ((fVar2 < 0.69800000) AND (fVar2 > 0.68800000))
        {
            return 1;
        }
        if ((fVar2 < 0.70620000) AND (fVar2 > 0.69620000))
        {
            return 1;
        }
        if ((fVar2 < 0.71590000) AND (fVar2 > 0.70590000))
        {
            return 1;
        }
        if ((fVar2 < 0.72560000) AND (fVar2 > 0.71560000))
        {
            return 1;
        }
        if ((fVar2 < 0.73550000) AND (fVar2 > 0.72550000))
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
    return 0;
}

void sub_18276()
{
    if (l_U105 > 0)
    {
        if (IS_VEH_DRIVEABLE( l_U121 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U119 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U119, l_U121 )))
                {
                    sub_18355();
                }
            }
        }
    }
    switch (l_U105)
    {
        case 0:
        if (NOT (l_U107 == 0))
        {
            l_U105 = 1;
        }
        else
        {
            sub_3180();
        }
        break;
        case 1:
        sub_18592();
        break;
        case 2:
        sub_18875();
        break;
        case 3:
        sub_19360();
        break;
        case 4:
        sub_19765();
        break;
        case 5:
        sub_20420();
        break;
        case 6:
        if (NOT (IS_CHAR_INJURED( l_U119 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U118, 29, ref l_U144 );
            if (l_U144 == 7)
            {
                GET_GAME_TIMER( ref l_U134 );
                l_U135 = l_U134 - l_U132;
                if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U118, l_U119, 12.00000000, 12.00000000, 5.00000000, 0 ))) || (l_U135 >= 10000))
                {
                    sub_18355();
                }
            }
        }
        else
        {
            sub_18355();
        }
        break;
        case 7:
        if (NOT (IS_CHAR_INJURED( l_U119 )))
        {
            GET_GAME_TIMER( ref l_U134 );
            l_U135 = l_U134 - l_U132;
            if (l_U135 >= 10000)
            {
                l_U105 = 11;
            }
        }
        else
        {
            l_U105 = 11;
        }
        break;
        case 10:
        l_U105 = 11;
        break;
        case 11:
        if (NOT (IS_CHAR_INJURED( l_U119 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U118, l_U119, 12.00000000, 12.00000000, 5.00000000, 0 )))
            {
                l_U108 = 0;
            }
            else if (IS_VEH_DRIVEABLE( l_U121 ))
            {
                if (IS_CHAR_IN_CAR( l_U118, l_U121 ))
                {
                    l_U108 = 0;
                }
            }
        }
        else
        {
            l_U108 = 0;
        }
        break;
    }
    return;
}

void sub_18355()
{
    CLEAR_CHAR_TASKS( l_U118 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U119 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U120 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U121 );
    l_U119 = nil;
    l_U121 = nil;
    l_U120 = nil;
    if (l_U112)
    {
        g_U9224 = 0;
    }
    l_U105 = 0;
    l_U107 = 0;
    return;
}

void sub_18592()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( l_U119 )))
    {
        if (IS_VEH_DRIVEABLE( l_U121 ))
        {
            if (IS_CHAR_IN_CAR( l_U119, l_U121 ))
            {
                GET_CHAR_COORDINATES( l_U118, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if (GET_CLOSEST_CAR_NODE( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 ))
                {
                    GET_CAR_SPEED( l_U121, ref uVar5 );
                    OPEN_SEQUENCE_TASK( ref l_U123 );
                    TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC( 0, l_U121, 0, 21, 5.00000000, 1, 3, 3 );
                    TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC( 0, l_U121, 0, 5, 0.00000000, 1, 3, 3 );
                    CLOSE_SEQUENCE_TASK( l_U123 );
                    TASK_PERFORM_SEQUENCE( l_U119, l_U123 );
                    CLEAR_SEQUENCE_TASK( l_U123 );
                    l_U105 = 2;
                }
            }
            else
            {
                l_U105 = 11;
            }
        }
        else
        {
            l_U105 = 11;
        }
    }
    else
    {
        l_U105 = 11;
    }
    return;
}

void sub_18875()
{
    float fVar2;
    vector vVar3;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;

    if (NOT (IS_CHAR_INJURED( l_U119 )))
    {
        if (IS_VEH_DRIVEABLE( l_U121 ))
        {
            if (IS_CHAR_IN_CAR( l_U119, l_U121 ))
            {
                GET_CAR_SPEED( l_U121, ref fVar2 );
                GET_SCRIPT_TASK_STATUS( l_U119, 29, ref l_U144 );
                if ((fVar2 <= 1.00000000) || (l_U144 == 7))
                {
                    GET_CAR_MODEL( l_U121, ref l_U124 );
                    GET_MODEL_DIMENSIONS( l_U124, ref vVar6, ref vVar3 );
                    vVar9 = {vVar3 - vVar6};
                    vVar9 = {vVar9 / 2.00000000};
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U121, -vVar9.x + 0.20000000, 0.00000000, 0.00000000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U121, vVar9.x + 0.20000000, 0.00000000, 0.00000000, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
                    GET_CHAR_COORDINATES( l_U118, ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
                    if ((VDIST( uVar18, uVar15 )) < (VDIST( uVar18, uVar12 )))
                    {
                        uVar12 = {uVar15};
                    }
                    OPEN_SEQUENCE_TASK( ref l_U123 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar12._fU0, uVar12._fU4, uVar12._fU8, 2, -1, 1.00000000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U119 );
                    TASK_STAND_STILL( 0, -2 );
                    CLOSE_SEQUENCE_TASK( l_U123 );
                    TASK_PERFORM_SEQUENCE( l_U118, l_U123 );
                    CLEAR_SEQUENCE_TASK( l_U123 );
                    l_U105 = 3;
                }
            }
            else
            {
                sub_18355();
            }
        }
        else
        {
            sub_18355();
        }
    }
    else
    {
        sub_18355();
    }
    return;
}

void sub_19360()
{
    float fVar2;

    if (NOT (IS_CHAR_INJURED( l_U119 )))
    {
        if (IS_VEH_DRIVEABLE( l_U121 ))
        {
            if (IS_CHAR_IN_CAR( l_U119, l_U121 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U118, 29, ref l_U144 );
                if (l_U144 == 1)
                {
                    GET_SEQUENCE_PROGRESS( l_U118, ref l_U145 );
                    if (l_U145 > 1)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U118, l_U119, 20.00000000, 20.00000000, 10.00000000, 0 ))
                        {
                            GET_CAR_SPEED( l_U121, ref fVar2 );
                            if (fVar2 <= 1.00000000)
                            {
                                OPEN_SEQUENCE_TASK( ref l_U123 );
                                if (HAVE_ANIMS_LOADED( l_U146 ))
                                {
                                    TASK_PLAY_ANIM( 0, "car_proposition", l_U146, 15.00000000, 0, 0, 0, 0, -1 );
                                }
                                CLOSE_SEQUENCE_TASK( l_U123 );
                                TASK_PERFORM_SEQUENCE( l_U118, l_U123 );
                                CLEAR_SEQUENCE_TASK( l_U123 );
                                GET_GAME_TIMER( ref l_U132 );
                                GENERATE_RANDOM_INT_IN_RANGE( 4000, 8000, ref l_U137 );
                                TASK_LOOK_AT_CHAR( l_U119, l_U118, 10000, 0 );
                                l_U105 = 4;
                            }
                        }
                        else
                        {
                            sub_18355();
                        }
                    }
                }
            }
            else
            {
                sub_18355();
            }
        }
        else
        {
            sub_18355();
        }
    }
    else
    {
        sub_18355();
    }
    return;
}

void sub_19765()
{
    float fVar2;

    if (NOT (IS_CHAR_INJURED( l_U119 )))
    {
        if (IS_VEH_DRIVEABLE( l_U121 ))
        {
            if (IS_CHAR_IN_CAR( l_U119, l_U121 ))
            {
                GET_CAR_SPEED( l_U121, ref fVar2 );
                if ((fVar2 <= 1.00000000) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U119, l_U118, 15.00000000, 15.00000000, 5.00000000, 0 )))
                {
                    GET_GAME_TIMER( ref l_U134 );
                    l_U135 = l_U134 - l_U132;
                    if (l_U135 >= l_U137)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 10000, ref l_U137 );
                        if (l_U137 > 3000)
                        {
                            CLEAR_CHAR_TASKS( l_U118 );
                            OPEN_SEQUENCE_TASK( ref l_U123 );
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U121, -2, 0 );
                            TASK_STAND_STILL( 0, -2 );
                            CLOSE_SEQUENCE_TASK( l_U123 );
                            TASK_PERFORM_SEQUENCE( l_U118, l_U123 );
                            CLEAR_SEQUENCE_TASK( l_U123 );
                            l_U105 = 5;
                        }
                        else
                        {
                            CLEAR_CHAR_TASKS( l_U118 );
                            OPEN_SEQUENCE_TASK( ref l_U123 );
                            if (HAVE_ANIMS_LOADED( l_U146 ))
                            {
                                TASK_PLAY_ANIM( 0, "rejection", l_U146, 16.00000000, 0, 1, 1, 0, -1 );
                            }
                            CLOSE_SEQUENCE_TASK( l_U123 );
                            TASK_PERFORM_SEQUENCE( l_U118, l_U123 );
                            CLEAR_SEQUENCE_TASK( l_U123 );
                            if (NOT (IS_CHAR_INJURED( l_U119 )))
                            {
                                if (IS_VEH_DRIVEABLE( l_U121 ))
                                {
                                    if (IS_CHAR_IN_CAR( l_U119, l_U121 ))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U123 );
                                        TASK_CAR_DRIVE_WANDER( 0, l_U121, 10.00000000, 0 );
                                        CLOSE_SEQUENCE_TASK( l_U123 );
                                        TASK_PERFORM_SEQUENCE( l_U119, l_U123 );
                                        CLEAR_SEQUENCE_TASK( l_U123 );
                                        GET_GAME_TIMER( ref l_U132 );
                                    }
                                }
                            }
                            TASK_CLEAR_LOOK_AT( l_U119 );
                            l_U105 = 6;
                        }
                    }
                }
                else
                {
                    TASK_CLEAR_LOOK_AT( l_U119 );
                    sub_18355();
                }
            }
            else
            {
                TASK_CLEAR_LOOK_AT( l_U119 );
                sub_18355();
            }
        }
        else
        {
            sub_18355();
        }
    }
    else
    {
        sub_18355();
    }
    return;
}

void sub_20420()
{
    if (NOT (IS_CHAR_INJURED( l_U119 )))
    {
        if (IS_VEH_DRIVEABLE( l_U121 ))
        {
            if (IS_CHAR_IN_CAR( l_U119, l_U121 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U118, 29, ref l_U144 );
                if (l_U144 == 1)
                {
                    GET_SEQUENCE_PROGRESS( l_U118, ref l_U145 );
                    if (l_U145 > 0)
                    {
                        if (IS_CHAR_IN_CAR( l_U118, l_U121 ))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U123 );
                            TASK_CAR_DRIVE_WANDER( 0, l_U121, 10.00000000, 0 );
                            CLOSE_SEQUENCE_TASK( l_U123 );
                            TASK_PERFORM_SEQUENCE( l_U119, l_U123 );
                            CLEAR_SEQUENCE_TASK( l_U123 );
                            l_U105 = 7;
                            GET_GAME_TIMER( ref l_U132 );
                        }
                    }
                }
            }
            else
            {
                sub_18355();
            }
        }
        else
        {
            sub_18355();
        }
    }
    else
    {
        sub_18355();
    }
    return;
}

void sub_21073()
{
    if (IS_CHAR_INJURED( l_U120 ))
    {
        sub_18355();
    }
    else
    {
        switch (l_U105)
        {
            case 0:
            if (NOT (l_U107 == 0))
            {
                l_U105 = 1;
            }
            else
            {
                sub_3180();
            }
            break;
            case 1:
            switch (l_U106)
            {
                case 0:
                OPEN_SEQUENCE_TASK( ref l_U123 );
                TASK_GO_TO_CHAR( 0, l_U118, -1, 2.00000000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U118 );
                CLOSE_SEQUENCE_TASK( l_U123 );
                TASK_PERFORM_SEQUENCE( l_U120, l_U123 );
                CLEAR_SEQUENCE_TASK( l_U123 );
                OPEN_SEQUENCE_TASK( ref l_U123 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U120 );
                TASK_STAND_STILL( 0, 999999 );
                CLOSE_SEQUENCE_TASK( l_U123 );
                TASK_PERFORM_SEQUENCE( l_U118, l_U123 );
                CLEAR_SEQUENCE_TASK( l_U123 );
                l_U106 = 1;
                break;
                case 1:
                GET_SCRIPT_TASK_STATUS( l_U120, 29, ref l_U144 );
                if (l_U144 == 7)
                {
                    OPEN_SEQUENCE_TASK( ref l_U123 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U118 );
                    CLOSE_SEQUENCE_TASK( l_U123 );
                    TASK_PERFORM_SEQUENCE( l_U120, l_U123 );
                    CLEAR_SEQUENCE_TASK( l_U123 );
                    OPEN_SEQUENCE_TASK( ref l_U123 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U120 );
                    CLOSE_SEQUENCE_TASK( l_U123 );
                    TASK_PERFORM_SEQUENCE( l_U118, l_U123 );
                    CLEAR_SEQUENCE_TASK( l_U123 );
                    l_U106 = 2;
                }
                else
                {
                    MODIFY_CHAR_MOVE_STATE( l_U120, 2 );
                }
                break;
                case 2:
                GET_SCRIPT_TASK_STATUS( l_U120, 29, ref l_U144 );
                if (l_U144 == 7)
                {
                    GET_SCRIPT_TASK_STATUS( l_U118, 29, ref l_U144 );
                    if (l_U144 == 7)
                    {
                        l_U113 = 1;
                        l_U106 = 3;
                    }
                }
                break;
                case 3:
                sub_18355();
                break;
            }
            break;
            case 10:
            if (NOT (IS_CHAR_INJURED( l_U120 )))
            {
                TASK_COMBAT( l_U120, sub_1092() );
                SET_CHAR_KEEP_TASK( l_U120, 1 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U120 );
            l_U120 = nil;
            l_U105 = 11;
            break;
            case 11:
            if (NOT (IS_CHAR_INJURED( l_U119 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U118, l_U119, 12.00000000, 12.00000000, 5.00000000, 0 )))
                {
                    l_U108 = 0;
                }
            }
            break;
        }
    }
    return;
}

void sub_21869()
{
    return;
}

